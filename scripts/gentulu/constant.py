#!/usr/bin/python
# -*- coding: utf-8 -*-

import re

class constant:
  def __init__(self, namespace, string):
    string = string.strip(" ")
    
    strings = string.split(" ")
    self.namespace = namespace
    self.name = strings[1]
    self.new_name = self.name.lower()
    self.splitted_name = []
    temp_name = self.new_name.replace("gl_", "")
    for i in range(0, len(temp_name), 4):
      self.splitted_name.append(temp_name[i:i + 4])
    self.splitted_name = "'" + "', '".join(self.splitted_name) + "'"
    self.value = strings[2]
    
  def __repr__(self):
    return "{namespace: %(namespace)s, name: %(name)s, value: %(value)s}" % (self.__dict__)
    
  def __str__(self):
    return "          struct %(new_name)s: public ::gtulu::internal::constant::gl_constant< ::boost::mpl::string< %(splitted_name)s >, ::boost::mpl::uint64_< %(name)s > > {};" % (self.__dict__)
