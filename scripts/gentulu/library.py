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
  def __init__(self, library, node):
    gu.inherit(self, node)

    self.name = gu.uncamel(self.name)
    self.is_template, self.tpl_name = library.template(self)

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

    self.output = Parameter(library, node.children[0])
    self.parameters = [ Parameter(library, p) for p in node.children[1:] ]

    self.template_parameters = [ p for p in self.parameters if p.is_template ]
    self.not_template_parameters = [ p for p in self.parameters if not p.is_template ]

    self.has_template = len(self.template_parameters) > 0
    self.has_output = self.output.typename != 'void'
    self.has_cardinality = re.search(r'\d+d?$', self.new_name) is not None
    self.function = re.sub(r'_\d+d?$', '', self.new_name)

    self.cardinality = int('0' + self.new_name.replace(self.function, '').strip('_d'))


class Library(object):
  def __init__(self, name, **kwargs):
    super(Library, self).__init__()
    self.name = name
    self.prefixes = kwargs.get('prefixes', [])
    self.suffixes = kwargs.get('suffixes', [])
    self.template = kwargs.get('template', [])
    self.namespace = kwargs.get('namespace', name)
    self.files = kwargs.get('files', [])

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
    d.function = self.function(d.function, d.has_cardinality)
    d.function.declarations.append(d)
    return d


gl_template = lambda p: (p.typename == 'GLenum')                               and (True, gu.camel(p.name) + 'Constant') \
                     or (p.name == 'internalformat' and p.typename == 'GLint') and (True, 'InternalFormatConstant') \
                     or (False, p.name)

GLES2 = Library(name='gles2', prefixes=['gl', 'GL_'], files=['include/GLES2/gl2.h'], template=gl_template)
GL3 = Library(name='gl3', prefixes=['gl', 'GL_', 'glu', 'GLU_', 'glX', 'GLX_'], suffixes=['EXT', 'ARB'], files=['include/GL3/gl3.h'], template=gl_template)
