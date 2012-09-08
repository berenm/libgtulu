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

    if self.typename.endswith('boolean'):
      self.type = 'bool'

    self.typename = self.type
    self.typename = re.sub(r'(u?)int(\d+)', r'gtulu::\1int\2_t', self.typename)
    self.typename = re.sub(r'(u?)float(\d+)', r'gtulu::\1float\2_t', self.typename)
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

    self.cardinality = re.search(r'_(?P<card>\d+)d?(_|$)', self.new_name)
    self.has_cardinality = self.cardinality is not None
    if self.has_cardinality:
      self.cardinality = int(self.cardinality.group('card'))
    else:
      self.cardinality = 0
    self.function = re.sub(r'_\d+d?(?P<end>_|$)', '\g<end>', self.new_name)
    log.error('%s -> %s %s', self.new_name, self.function, self.cardinality)


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

    if d.suffix is None:
      d.function = self.function(d.function, d.has_cardinality)
      d.function.declarations.append(d)

    return d


glx_template = lambda p, o: (not o and p.typename == 'GLXenum')                            and (True, gu.camel(p.name) + 'Constant') \
                      or (not o and p.name == 'internalformat' and p.typename == 'GLXint') and (True, 'InternalFormatConstant') \
                      or (False, p.name)

GLX = Library(name='glx', \
              prefixes=['glX', 'GLX_'], \
              suffixes=['ARB', 'MESA'], \
              files=['include/GL/glx.h'], \
              template=glx_template,\
              defines=['GLX_PROTOTYPES'])


egl_template = lambda p, o: (not o and p.typename == 'EGLenum')                            and (True, gu.camel(p.name) + 'Constant') \
                      or (not o and p.name == 'internalformat' and p.typename == 'EGLint') and (True, 'InternalFormatConstant') \
                      or (False, p.name)

EGL = Library(name='egl', \
              prefixes=['egl', 'EGL_'], \
              files=['include/EGL/egl.h'], \
              template=egl_template, \
              defines=['EGL_PROTOTYPES'])


gl_template = lambda p, o: (not o and p.typename == 'GLenum')                            and (True, gu.camel(p.name) + 'Constant') \
                     or (not o and p.name == 'internalformat' and p.typename == 'GLint') and (True, 'InternalFormatConstant') \
                     or (False, p.name)

GLES2 = Library(name='gles2', \
                prefixes=['gl', 'GL_'], \
                files=['include/GLES2/gl2.h'], \
                template=gl_template, \
                defines=['GLES2_PROTOTYPES'])

GLES3 = Library(name='gles3', \
                prefixes=['gl', 'GL_'], \
                files=['include/GLES3/gl3.h'], \
                template=gl_template, \
                defines=['GLES3_PROTOTYPES'])

GL3 = Library(name='gl3', \
              prefixes=['gl', 'GL_'], \
              suffixes=['ARB', 'EXT'], \
              files=['include/GL/glcorearb.h'], \
              template=gl_template, \
              defines=['GLCOREARB_PROTOTYPES'])
