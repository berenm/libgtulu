#!/usr/bin/python
# -*- coding: utf-8 -*-

import re

class parameter:
  def __init__(self, string):
    string = string.strip("();, ")
    string = string.replace("const", " const ")
    string = string.replace("struct", " struct ")
    string = string.replace("*", " * ")
    string = string.replace("&", " & ")
    string = re.sub(" +", " ", string)
    string = string.strip(" ")

    [full_type, self.name] = string.rsplit(" ", 1)

    self.old_type = full_type.replace("const", "").replace("struct", "").replace("&", "").replace("*", "").strip(" ")
    [prefix, suffix] = full_type.split(self.old_type)
    self.type_modifier = (prefix + suffix).replace(" ", "")

    if self.type_modifier.startswith("const"):
        self.type_modifier = " " + self.type_modifier

    self.is_struct = "struct" in self.type_modifier
    self.is_const = "const" in self.type_modifier
    self.is_pointer = "*" in self.type_modifier
    self.is_reference = "&" in self.type_modifier

    if "*" not in self.type_modifier:
      if self.old_type == "GLenum":
        self.is_template = True
      elif self.name == "internalformat" and self.old_type == "GLint":
        self.is_template = True
      else:
        self.is_template = False
    else:
      self.is_template = False

    if self.old_type == "GLint":
      self.new_type = "::std::int32_t"
    elif self.old_type == "GLuint":
      self.new_type = "::std::uint32_t"
    elif self.old_type == "GLboolean" and "*" not in self.type_modifier:
      self.new_type = "bool"
    elif self.old_type == "GLfloat":
      self.new_type = "float"
    elif self.old_type == "GLdouble":
      self.new_type = "double"
    elif self.old_type == "GLvoid":
      self.new_type = "void"
    elif self.old_type == "GLushort":
      self.new_type = "::std::uint16_t"
    elif self.old_type == "GLubyte":
      self.new_type = "::std::uint8_t"
    elif self.old_type == "GLclampf":
      self.new_type = "float"
    elif self.is_template:
      self.new_type = "const ::gtulu::internal::constant::gl_constant_base&"
    else:
      print "UNKN: " + self.old_type
      self.new_type = self.old_type
  
  def __repr__(self):
    return """parameter {
  name: %(name)s,
  type_modifier: %(type_modifier)s,
  old_type: %(old_type)s,
  new_type: %(new_type)s
}""" % (self.__dict__)
