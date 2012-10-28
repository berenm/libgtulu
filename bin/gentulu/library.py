# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

import re
import logging

from gentulu.renamable import Renamable
import gentulu.utils as gu

log = logging.getLogger(__name__)

class Constant(object):
  def __init__(self, name):
    super(Constant, self).__init__()
    self.name = name


class Function(object):
  def __init__(self, name, has_cardinality=False):
    super(Function, self).__init__()
    self.name = name
    self.has_cardinality = has_cardinality

    self.declarations = []


class Parameter(object):
  def __init__(self, library, node, is_output=False):
    gu.inherit(self, node)

    self.name = gu.uncamel(self.name)
    self.is_template, self.tpl_name = library.template(self, is_output)
    self.hardcoded = None

    if self.typename.endswith('boolean'):
      self.type = 'bool'

    self.typename = self.type
    self.typename = re.sub(r'(u?)int(\d+)', r'gtulu::\1int\2_t', self.typename)
    self.typename = re.sub(r'(u?)float(\d+)', r'gtulu::\1float\2_t', self.typename)
    # self.typename = re.sub(r'char const\* const\*', r'std::vector< std::string > const&', self.typename)
    # self.typename = re.sub(r'char const\*', r'std::string const&', self.typename)

    if self.typename == 'char const*':
      self.typename = 'std::string const&'

    if 'const' not in self.typename and '*' not in self.typename and not is_output:
      self.typename = '%s const' % self.typename

    if self.is_template:
      self.typename = 'gtulu::constant_base const&'


class Declaration(Renamable):
  def __init__(self, library, node):
    gu.inherit(self, node)

    super(Declaration, self).__init__(library.prefixes, library.suffixes)

    self.output = Parameter(library, node.children[0], True)
    self.parameters = [ Parameter(library, p) for p in node.children[1:] ]

    self.template_parameters = [ p for p in self.parameters if p.is_template ]
    self.not_template_parameters = [ p for p in self.parameters if not p.is_template ]

    self.has_template = len(self.template_parameters) > 0
    self.has_output = self.output.typename != 'void'

    self.function = self.new_name
    if 'matrix' in self.new_name:
      self.cardinality = re.search(r'_(?P<card>\d+(?:x\d+)?)(_|$)', self.new_name)
      if self.cardinality is not None:
        self.cardinality = self.cardinality.group('card')
        self.function = re.sub(r'_matrix_\d+(?:x\d+)?(?P<end>_|$)', '\g<end>', self.new_name)

        if 'x' not in self.cardinality:
          self.cardinality = self.cardinality + 'x' + self.cardinality
      else:
        self.cardinality = 0

    else:
      self.cardinality = re.search(r'_(?P<card>\d+)(_|$)', self.new_name)
      if self.cardinality is not None:
        self.cardinality = self.cardinality.group('card')
        self.function = re.sub(r'_\d+(?P<end>_|$)', '\g<end>', self.new_name)
      else:
        self.cardinality = 0

    self.has_cardinality = False
    if self.cardinality > 0:
      params = [ p for p in self.parameters if '*' in p.typename ]
      if len(params) == 1:
        p = params[0]
        p.typename = p.typename.replace(' const*', '')

        if 'x' in self.cardinality:
          cardinality = self.cardinality.split('x')
          p.typename = 'gtulu::mat%s< %s > const&' % (self.cardinality, p.typename)

        else:
          p.typename = 'gtulu::vec%s< %s > const&' % (self.cardinality, p.typename)

        for o in self.parameters:
          if o.typename == 'bool const' and o.name == 'transpose':
            o.hardcoded = 'false'

          if o.typename == 'gtulu::int32_t const' and o.name == 'count':
            o.hardcoded = 'values.size()'
            p.typename = 'std::vector< %s > const&' % (p.typename.replace(' const&', ''))
            p.name = 'values'

    self.has_dimension = False
    self.dimension = re.search(r'_(?P<dim>\d+)d(_|$)', self.new_name)
    if self.dimension is not None:
      self.dimension = int(self.dimension.group('dim'))
    else:
      self.dimension = 0

    if self.dimension > 0 and 'framebuffer_texture' in self.function:
      self.has_dimension = True

    self.function = re.sub(r'_\d+d(?P<end>_|$)', '\g<end>', self.function)

    # log.error('%s -> %s %s', self.new_name, self.function, self.cardinality)


class Library(object):
  def __init__(self, name, **kwargs):
    super(Library, self).__init__()
    self.name = name
    self.prefixes = kwargs.get('prefixes', [])
    self.suffixes = kwargs.get('suffixes', [])
    self.template = kwargs.get('template', [])
    self.namespace = kwargs.get('namespace', name)
    self.files = kwargs.get('files', [])
    self.defines = kwargs.get('defines', [])
    self.include_paths = kwargs.get('include_paths', [])

    self.functions = {}
    self.constants = {}

  def function(self, name, has_cardinality=False):
    if name not in self.functions:
      self.functions[name] = Function(name, has_cardinality)
    return self.functions[name]

  def constant(self, name):
    if name not in self.constants:
      self.constants[name] = Constant(name)
    return self.constants[name]

  def declaration(self, node):
    d = Declaration(self, node)

    if d.suffix is None and 'packed' not in d.new_name:
      d.function = self.function(d.function, d.has_cardinality)
      d.function.declarations.append(d)

    return d


glx_template = lambda p, o: (not o and p.typename == 'GLXenum')                            and (True, gu.uncamel(p.name) + '_t') \
                      or (not o and p.name == 'internalformat' and p.typename == 'GLXint') and (True, 'internal_format_t') \
                      or (not o and p.name == 'internal_format' and p.typename == 'GLXint') and (True, 'internal_format_t') \
                      or (False, p.name)

GLX = Library(name='glx', \
              prefixes=['glX', 'GLX_'], \
              suffixes=['ARB', 'MESA'], \
              files=['lib/registry/include/GL/glx.h'], \
              template=glx_template,\
              defines=['GLX_PROTOTYPES'])


egl_template = lambda p, o: (not o and p.typename == 'EGLenum')                            and (True, gu.uncamel(p.name) + '_t') \
                      or (not o and p.name == 'internalformat' and p.typename == 'EGLint') and (True, 'internal_format_t') \
                      or (not o and p.name == 'internal_format' and p.typename == 'EGLint') and (True, 'internal_format_t') \
                      or (False, p.name)

EGL = Library(name='egl', \
              prefixes=['egl', 'EGL_'], \
              files=['lib/registry/include/EGL/egl.h'], \
              template=egl_template, \
              defines=['EGL_PROTOTYPES'])


gl_template = lambda p, o: (not o and p.typename == 'GLenum')                            and (True, gu.uncamel(p.name) + '_t') \
                     or (not o and p.name == 'internalformat' and p.typename == 'GLint') and (True, 'internal_format_t') \
                     or (not o and p.name == 'internal_format' and p.typename == 'GLint') and (True, 'internal_format_t') \
                     or (False, p.name)

GLES2 = Library(name='gles2', \
                prefixes=['gl', 'GL_'], \
                files=['lib/registry/include/GLES2/gl2.h'], \
                template=gl_template, \
                defines=['GLES2_PROTOTYPES'])

GLES3 = Library(name='gles3', \
                prefixes=['gl', 'GL_'], \
                files=['lib/registry/include/GLES3/gl3.h'], \
                template=gl_template, \
                defines=['GLES3_PROTOTYPES'])

GL3 = Library(name='gl3', \
              prefixes=['gl', 'GL_'], \
              suffixes=['ARB', 'EXT'], \
              files=['lib/registry/include/GL/glcorearb.h'], \
              template=gl_template, \
              defines=['GLCOREARB_PROTOTYPES'])

GL4 = Library(name='gl4', \
              prefixes=['gl', 'GL_'], \
              suffixes=['ARB', 'EXT'], \
              files=['lib/registry/include/GL/glcorearb.h'], \
              template=gl_template, \
              defines=['GLCOREARB_PROTOTYPES'])

GTULU33 = Library(name='gl3', \
              prefixes=['gl', 'GL_'], \
              files=['gl/3.3/core/gtulu/api.h'], \
              template=gl_template, \
              include_paths=['gl/3.3/core'])

GTULU43 = Library(name='gl4', \
              prefixes=['gl', 'GL_'], \
              files=['gl/4.3/core/gtulu/api.h'], \
              template=gl_template, \
              include_paths=['gl/4.3/core'])
