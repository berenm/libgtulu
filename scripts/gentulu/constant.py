#!/usr/bin/python
# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

class constant:
  def __init__(self, namespace, string):
    string = string.strip(" ")

    strings = string.split(" ")
    self.namespace = namespace
    self.name = strings[1]
    self.new_name = self.name.lower()
    self.splitted_name = []
    self.temp_name = self.new_name.replace("gl_", "")
    for i in range(0, len(self.temp_name), 4):
      self.splitted_name.append(self.temp_name[i:i + 4])
    self.splitted_name = "'" + "', '".join(self.splitted_name) + "'"
    self.value = strings[2]

  def __repr__(self):
    return "{namespace: %(namespace)s, name: %(name)s, value: %(value)s}" % (self.__dict__)

  def __str__(self):
    return """          struct %(new_name)s: public ::gtulu::internal::constant::gl_constant< %(new_name)s > {
              static inline char const* name() { return "%(temp_name)s"; }
              static ::std::uint64_t const value = %(name)s;
          };""" % (self.__dict__)
