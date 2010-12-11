#!/usr/bin/python
# -*- coding: utf-8 -*-

import re

from constant import constant
from function import function
from namespace import namespace
from parameter import parameter

class gl3_parser:
  def __init__(self):
    self.namespaces = {}
    self.constants = {}
    self.functions = {}
    self.current_namespace = None
    
  def read_namespace(self, line):
    if line == "#endif /* GL3_PROTOTYPES */":
      print "ERROR: ", line
      return
    if line == "#ifdef GL3_PROTOTYPES":
      print "ERROR: ", line
      return
    if line.startswith("#ifndef APIENTRY"):
      print "ERROR: ", line
      return
    if line.startswith("#ifndef __gl3_h_"):
      print "ERROR: ", line
      return
    if line.startswith("#ifndef GLAPI"):
      print "ERROR: ", line
      return
    if line.startswith("#ifndef GLEXT_64_TYPES_DEFINED"):
      print "ERROR: ", line
      return
    if line.startswith("#ifndef"):
      ns = line.split(" ")[1]
      if ns not in self.namespaces.keys():
        self.namespaces[ns] = namespace(ns)
      self.current_namespace = ns
    elif line.startswith("#endif"):
      self.current_namespace = None
  
  def read_function(self, line):
    fct = function(self.current_namespace, line)
    if fct.new_name not in self.functions.keys():
      self.functions[fct.new_name] = [] 
    
    if fct not in self.functions[fct.new_name]:
      self.functions[fct.new_name].append(fct)
    else:
      print "skipping: " + fct.__repr__()

    if self.current_namespace is not None:
      if fct.new_name not in self.namespaces[self.current_namespace].functions:
        self.namespaces[self.current_namespace].functions.append(fct.new_name)
  
  def read_constant(self, line):
    if len(line.split(" ")) != 3:
      print "ERROR: ", line
      return
    if line.endswith("WIN32_LEAN_AND_MEAN 1"):
      print "ERROR: ", line
      return
    cst = constant(self.current_namespace, line)
    self.constants[cst.name] = cst
    if self.current_namespace is not None:
      self.namespaces[self.current_namespace].constants.append(cst.name)
    pass
  
  def read_const_ref(self, line):
    strings = line.split(" ")
    if len(strings) != 4:
      print "ERROR: ", line
      return
    self.namespaces[self.current_namespace].constants_ref.append(strings[2])
  
  def read_namespace_ref(self, line):
    strings = line.split(" ")
    if len(strings) < 3:
      print "ERROR: ", line
      return
    self.namespaces[self.current_namespace].namespace_ref.append("GL_" + strings[1].strip(","))
