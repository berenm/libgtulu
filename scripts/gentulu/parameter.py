#!/usr/bin/python
# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

import re
from gentulu.utils import serialize

class parameter:
  def __init__(self, name, type, descriptions={}, constants={}):
    self.name = name.strip()
    self.type = type.replace('const', '').replace('struct', '').replace('&', '').replace('*', '').strip()
    self.description = descriptions.get(self.name, '')
    self.constants = constants.get(self.name, [])

    if self.name == 'void' and len(self.type) == 0:
      self.type = 'void'
    type_modifier = type.replace(self.type, '').replace(' ', '')

    if type_modifier.startswith('const'):
      type_modifier = ' ' + type_modifier

    self.is_struct = 'struct' in type_modifier
    self.is_const = 'const' in type_modifier
    self.is_pointer = '*' in type_modifier
    self.is_pointer_pointer = '**' in type_modifier
    self.is_reference = '&' in type_modifier

    if not self.is_pointer:
      if self.type == 'GLenum':
        self.is_template = True
        self.tpl_name = ''.join(n[0].upper() + n[1:] for n in self.name.split('_')) + 'Constant'
      elif self.name == 'internalformat' and self.type == 'GLint':
        self.is_template = True
        self.tpl_name = ''.join(n[0].upper() + n[1:] for n in self.name.split('_')) + 'Constant'
      else:
        self.is_template = False
    else:
      self.is_template = False

    if self.type == 'GLint':
      self.type = '::std::int32_t'
    elif self.type == 'GLuint':
      self.type = '::std::uint32_t'
    elif self.type == 'GLboolean' and not self.is_pointer:
      self.type = 'bool'
    elif self.type == 'GLfloat':
      self.type = 'float'
    elif self.type == 'GLdouble':
      self.type = 'double'
    elif self.type == 'GLvoid':
      self.type = 'void'
    elif self.type == 'GLushort':
      self.type = '::std::uint16_t'
    elif self.type == 'GLubyte':
      self.type = '::std::uint8_t'
    elif self.type == 'GLclampf':
      self.type = 'float'
    elif self.is_template:
      self.type = '::gtulu::internal::constant::gl_constant_base const&'
    else:
      print 'UNKN: ' + self.type
      self.type = self.type

  def std_str(self):
    string = ""
    if self.is_struct:
      string += "struct "
    string += self.type
    if self.is_const:
      string += " const"
    if self.is_pointer:
      string += "*"
    if self.is_pointer_pointer:
      string += "*"
    if self.is_reference:
      string += "&"

    string += " " + self.name
    return string

  def tpl_str(self):
    string = "typename " + self.tpl_name
    return string

  def __repr__(self):
    return serialize(self)

  @staticmethod
  def parse_string(string):
    string = string.strip('();, ')
    string = string.replace('const', ' const ')
    string = string.replace('struct', ' struct ')
    string = string.replace('*', ' * ')
    string = string.replace('&', ' & ')
    string = re.sub(' +', ' ', string)
    string = string.strip(' ')

    if ' ' in string:
      (type, name) = string.strip().rsplit(' ', 1)
    else:
      type = string
      name = ''
    return parameter(name, type)

  @staticmethod
  def parse_node(node, descriptions, constants):
    return parameter(str(node.parameter), str(node), descriptions, constants)
