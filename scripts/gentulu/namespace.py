#!/usr/bin/python
# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

import re

import declaration
import constant

class namespace:
  def __init__(self, namespace):
    self.functions = []
    self.constants = []
    self.namespace_ref = []
    self.constants_ref = []
    self.new_name = namespace.lower()
    self.short_name = self.new_name
    
    self.category = "other"
    if self.new_name.startswith("gl_version"):
      self.category = "gl"
      self.short_name = self.short_name.replace("gl_version_", "v")
    elif self.new_name.startswith("gl_arb"):
      self.short_name = self.short_name.replace("gl_arb_", "")
      self.category = "arb"
    elif self.new_name.startswith("gl_ext"):
      self.short_name = self.short_name.replace("gl_ext_", "")
      self.category = "ext"
    elif self.new_name.startswith("gl_nv"):
      self.short_name = self.short_name.replace("gl_nv_", "")
      self.category = "nv"
    elif self.new_name.startswith("gl_amd"):
      self.short_name = self.short_name.replace("gl_amd_", "")
      self.category = "amd"
