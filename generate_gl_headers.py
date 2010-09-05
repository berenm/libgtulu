#!/usr/bin/python
# -*- coding: utf-8 -*-

import re

class param:
  def __init__(self, string):
    string = string.strip(" );")
    elements = string.split(" ")
    self.name = elements[len(elements) - 1].strip(" ")
    self.type = " ".join(elements[:len(elements) - 1]).strip(" ")
    if self.name.startswith("*"):
      self.type += "*"
      self.name = self.name.strip("*")
    
    if self.type == "GLenum":
      self.is_template = True
    elif self.name == "internalformat" and self.type == "GLint":
      self.is_template = True
    else:
      self.is_template = False
  
  def __repr__(self):
    return "{type: %(type)s, name: %(name)s}" % (self.__dict__)

class function:
  def __init__(self, namespace, string):
    string = string.replace("GLAPI", "")
    (out, sep, tail) = string.partition("APIENTRY")
    (name, sep, params) = tail.partition("(")
    
    self.namespace = namespace
    self.out = out.strip(" ")
    self.name = name.strip(" ")
    self.params = []
    
    if self.out != "void":
      self.var_stmt = "%s out = " % (self.out)
      self.ret_stmt = "return out;"
    else:
      self.var_stmt = ""
      self.ret_stmt = ""
    
    name = re.sub(r'([0-9]+x?[0-9]*)([a-z])', r'_\1_\2', name)
    name = re.sub(r'([0-9])D', r'_\1d', name)
    name = re.sub(r'([0-9])N', r'_\1_n', name)
    self.lower_name = re.sub(r'_*([A-Z]+)', r'_\1', name).lower()
    
    self.can_template = False
    
    params = params.replace("void)", "")
    params = params.strip("(")
    params = params.strip(")")
    params = params.strip(" ")
    if params != "":
      params = params.split(",")
      for str in params:
        p = param(str)
        self.params.append(p)
        if p.is_template:
          self.can_template = True
    else:
      self.params = []
    
    std_args = []
    std_call = []
    std_debg = []
    tpl_pars = []
    tpl_args = []
    tpl_call = []
    tpl_debg = []
    
    for p in self.params:
      if p.name != "":
        std_args.append("%s %s" % (p.type, p.name))
        std_call.append("%s" % (p.name))
        std_debg.append("\"%s: '\" << %s << \"'\"" % (p.name, p.name))
        
        if p.is_template:
          tpl_pars.append("typename %s_t" % (p.name))
          tpl_call.append("%s_t::value" % (p.name))
          tpl_debg.append("\"%s: '\" << %s_t::name::value << \"'\"" % (p.name, p.name))
        else:
          tpl_args.append("%s %s" % (p.type, p.name))
          tpl_call.append("%s" % (p.name))
          tpl_debg.append("\"%s: '\" << %s << \"'\"" % (p.name, p.name))
        
    if len(tpl_debg) == 0:
      tpl_debg.append("\"\"")
    if len(std_debg) == 0:
      std_debg.append("\"\"")
    
    self.std_args = ", ".join(std_args)
    self.std_call = ", ".join(std_call)
    self.std_debg = " << \", \" << ".join(std_debg)
    self.tpl_pars = ", ".join(tpl_pars)
    self.tpl_args = ", ".join(tpl_args)
    self.tpl_call = ", ".join(tpl_call)
    self.tpl_debg = " << \", \" << ".join(tpl_debg)
    
  def __repr__(self):
    return "{namespace: %(namespace)s, out: %(out)s, name: %(name)s, params: %(params)s" % (self.__dict__)
  
  def __str__(self):
    string = "          struct %(lower_name)s {\n" % (self.__dict__)
    string += "              inline static %(out)s call(%(std_args)s) {\n" % (self.__dict__)
    string += "                __gl_debug << \"call %(name)s \" << %(std_debg)s << \"\";\n" % (self.__dict__)
    string += "                %(var_stmt)s%(name)s(%(std_call)s);\n" % (self.__dict__)
    string += "                __gl_check_error;\n"
    string += "                %(ret_stmt)s\n" % (self.__dict__)
    string += "              }\n"
    if self.can_template:
      string += "              template< %(tpl_pars)s >\n" % (self.__dict__)
      string += "              inline static %(out)s call(%(tpl_args)s) {\n" % (self.__dict__)
      string += "                __gl_debug << \"call %(name)s \" << %(tpl_debg)s << \"\";\n" % (self.__dict__)
      string += "                %(var_stmt)s%(name)s(%(tpl_call)s);\n" % (self.__dict__)
      string += "                __gl_check_error;\n"
      string += "                %(ret_stmt)s\n" % (self.__dict__)
      string += "              }\n"
    string += "          };\n"
    return string
    
class constant:
  def __init__(self, namespace, string):
    string = string.strip(" ")
    
    strings = string.split(" ")
    self.namespace = namespace
    self.name = strings[1]
    self.lower_name = self.name.lower()
    self.splitted_name = []
    temp_name = self.lower_name.replace("gl_", "")
    for i in range(0, len(temp_name), 4):
      self.splitted_name.append(temp_name[i:i + 4])
    self.splitted_name = "'" + "', '".join(self.splitted_name) + "'"
    self.value = strings[2]
    
  def __repr__(self):
    return "{namespace: %(namespace)s, name: %(name)s, value: %(value)s}" % (self.__dict__)
    
  def __str__(self):
    return "          struct %(lower_name)s: public ::gtulu::internal::constant::gl_constant< ::boost::mpl::string< %(splitted_name)s >, ::boost::mpl::int_< %(name)s > > {};" % (self.__dict__)

class namespace:
  def __init__(self, namespace):
    self.functions = []
    self.constants = []
    self.namespace_ref = []
    self.constants_ref = []
    self.lower_name = namespace.lower()
    self.short_name = self.lower_name
    
    self.category = "other"
    if self.lower_name.startswith("gl_version"):
      self.category = "gl"
      self.short_name = self.short_name.replace("gl_version_", "v")
    elif self.lower_name.startswith("gl_arb"):
      self.short_name = self.short_name.replace("gl_arb_", "")
      self.category = "arb"
    elif self.lower_name.startswith("gl_ext"):
      self.short_name = self.short_name.replace("gl_ext_", "")
      self.category = "ext"
    elif self.lower_name.startswith("gl_nv"):
      self.short_name = self.short_name.replace("gl_nv_", "")
      self.category = "nv"
    elif self.lower_name.startswith("gl_amd"):
      self.short_name = self.short_name.replace("gl_amd_", "")
      self.category = "amd"

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
    self.functions[fct.name] = fct
    if self.current_namespace is not None:
      self.namespaces[self.current_namespace].functions.append(fct.name)
  
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

gen_fct = open('include/gtulu/internal/generated/functions.hpp', 'w')
gen_cst = open('include/gtulu/internal/generated/constants.hpp', 'w')
gen_fct_fwd = open('include/gtulu/internal/generated/functions_fwd.hpp', 'w')
gen_cst_fwd = open('include/gtulu/internal/generated/constants_fwd.hpp', 'w')

def print_forward_functions(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace fnc {"
  n.functions.sort()
  for function in n.functions:
    print >> file, "struct %s;" % (parser.functions[function].lower_name)
  print >> file, "        } // namespace fnc"
  print >> file, "      } // namespace %s" % (n.short_name)

def print_forward_constants(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace cst {"
  n.constants.sort()
  for constant in n.constants:
    print >> file, "struct %s;" % (parser.constants[constant].lower_name)
  print >> file, "        } // namespace cst"
  print >> file, "      } // namespace %s" % (n.short_name)

def print_functions(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace fnc {"
  
  for function in n.functions:
    print >> file, parser.functions[function]
    
  n.namespace_ref.sort()
  for ref in n.namespace_ref:
    if ref not in parser.namespaces:
      print >> file, "// ERROR: using unknown namespace %s;" % (ref)
    else:
      nn = parser.namespaces[ref]
      for function in nn.functions:
        f = parser.functions[function]
        print >> file, "using ::gtulu::internal::generated::%s::%s::fnc::%s;" % (nn.category, nn.short_name, f.lower_name)
        
  print >> file, "        } // namespace fnc"
  print >> file, "      } // namespace %s" % (n.short_name)

def print_constants(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace cst {"
  
  for constant in n.constants:
    print >> file, parser.constants[constant]
    
  n.constants_ref.sort()
  for constant in n.constants_ref:
    if constant not in parser.constants:
      print >> file, "// ERROR: using unknown constant %s;" % (constant)
    else:
      c = parser.constants[constant]
      nn = parser.namespaces[c.namespace]
      print >> file, "using ::gtulu::internal::generated::%s::%s::cst::%s;" % (nn.category, nn.short_name, c.lower_name)
      
  print >> file, "        } // namespace cst"
  print >> file, "      } // namespace %s" % (n.short_name)
  
def print_forward_functions_category(file, parser, category):
  print >> file, "      namespace %s {" % (category)
  namespaces = parser.namespaces.keys()
  namespaces.sort()
  for namespace in namespaces:
    n = parser.namespaces[namespace]
    if n.category == category:
      print_forward_functions(file, parser, namespace)
  print >> file, "      } // namespace %s" % (category)
  
def print_forward_constants_category(file, parser, category):
  print >> file, "      namespace %s {" % (category)
  namespaces = parser.namespaces.keys()
  namespaces.sort()
  for namespace in namespaces:
    n = parser.namespaces[namespace]
    if n.category == category:
      print_forward_constants(file, parser, namespace)
  print >> file, "      } // namespace %s" % (category)
  
def print_functions_category(file, parser, category):
  print >> file, "      namespace %s {" % (category)
  namespaces = parser.namespaces.keys()
  namespaces.sort()
  for namespace in namespaces:
    n = parser.namespaces[namespace]
    if n.category == category:
      print_functions(file, parser, namespace)
  print >> file, "      } // namespace %s" % (category)
  
def print_constants_category(file, parser, category):
  print >> file, "      namespace %s {" % (category)
  namespaces = parser.namespaces.keys()
  namespaces.sort()
  for namespace in namespaces:
    n = parser.namespaces[namespace]
    if n.category == category:
      print_constants(file, parser, namespace)
  print >> file, "      } // namespace %s" % (category)

gl3 = open('/usr/local/include/GL3/gl3.h', 'r')
parser = gl3_parser()

reading_namespace_ref = False
for line in gl3:
  line = line.replace('\n', '')
  line = re.sub(" +", " ", line)
  line = line.strip(" ")
    
  if line.startswith('GLAPI'):
    parser.read_function(line)
    reading_namespace_ref = False
  elif line.startswith('#define'):
    parser.read_constant(line)
    reading_namespace_ref = False
  elif line.startswith('#ifndef'):
    parser.read_namespace(line)
    reading_namespace_ref = False
  elif line.startswith('#endif'):
    parser.read_namespace(line)
    reading_namespace_ref = False
  elif line.startswith("/* reuse"):
    parser.read_const_ref(line)
    reading_namespace_ref = False
  elif line.endswith("from these extensions: */"):
    reading_namespace_ref = True
  elif line.startswith("/*") and reading_namespace_ref:
    parser.read_namespace_ref(line)
  else:
    print "WARN: ", line
    reading_namespace_ref = False

header = """/**
 * @file
 * @date 2 sept. 2010
 * @todo comment
 */
 
%s

namespace gtulu {
  namespace internal {
  
    namespace generated {
"""

footer = """
    } // namespace generated
    
  } // namespace internal
} // namespace gtulu

%s

"""

guard = """#ifndef GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_
#define GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_

#include "gtulu/internal/generated/functions_fwd.hpp"
"""
print >> gen_fct, header % (guard)

guard = """#ifndef GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_
#define GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_"""
print >> gen_fct_fwd, header % (guard)

guard = """#ifndef GTULU_INTERNAL_GENERATED_CONSTANTS_HPP_
#define GTULU_INTERNAL_GENERATED_CONSTANTS_HPP_

#include "gtulu/internal/generated/constants_fwd.hpp"
"""
print >> gen_cst, header % (guard)

guard = """#ifndef GTULU_INTERNAL_GENERATED_CONSTANTS_FWD_HPP_
#define GTULU_INTERNAL_GENERATED_CONSTANTS_FWD_HPP_"""
print >> gen_cst_fwd, header % (guard)

print_forward_functions_category(gen_fct_fwd, parser, "other")
print_forward_functions_category(gen_fct_fwd, parser, "amd")
print_forward_functions_category(gen_fct_fwd, parser, "nv")
print_forward_functions_category(gen_fct_fwd, parser, "ext")
print_forward_functions_category(gen_fct_fwd, parser, "arb")
print_forward_functions_category(gen_fct_fwd, parser, "gl")

print_forward_constants_category(gen_cst_fwd, parser, "other")
print_forward_constants_category(gen_cst_fwd, parser, "amd")
print_forward_constants_category(gen_cst_fwd, parser, "nv")
print_forward_constants_category(gen_cst_fwd, parser, "ext")
print_forward_constants_category(gen_cst_fwd, parser, "arb")
print_forward_constants_category(gen_cst_fwd, parser, "gl")

print_functions_category(gen_fct, parser, "other")
print_functions_category(gen_fct, parser, "amd")
print_functions_category(gen_fct, parser, "nv")
print_functions_category(gen_fct, parser, "ext")
print_functions_category(gen_fct, parser, "arb")
print_functions_category(gen_fct, parser, "gl")

print_constants_category(gen_cst, parser, "other")
print_constants_category(gen_cst, parser, "amd")
print_constants_category(gen_cst, parser, "nv")
print_constants_category(gen_cst, parser, "ext")
print_constants_category(gen_cst, parser, "arb")
print_constants_category(gen_cst, parser, "gl")

guard = """#endif /* GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_ */"""
print >> gen_fct, footer % (guard)

guard = """#endif /* GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_ */"""
print >> gen_fct_fwd, footer % (guard)

guard = """#endif /* GTULU_INTERNAL_GENERATED_CONSTANTS_HPP_ */"""
print >> gen_cst, footer % (guard)

guard = """#endif /* GTULU_INTERNAL_GENERATED_CONSTANTS_FWD_HPP_ */"""
print >> gen_cst_fwd, footer % (guard)



#print "namespace arb {"
#for namespace in parser.namespaces.keys():
#  if namespace.startswith("GL_ARB"):
#    print_namespace(parser, namespace)
#print "} // namespace arb"
#
#for namespace in parser.namespaces.keys():
#  if not namespace.startswith("GL_ARB"):
#    print_namespace(parser, namespace)
  
