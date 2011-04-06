#!/usr/bin/python
# -*- coding: utf-8 -*-

import re

from gentulu import gl3_parser

gen_fct = open('../include/gtulu/internal/generated/functions.hpp', 'w')
gen_cst = open('../include/gtulu/internal/generated/constants.hpp', 'w')
gen_fct_fwd = open('../include/gtulu/internal/generated/functions_fwd.hpp', 'w')
gen_cst_fwd = open('../include/gtulu/internal/generated/constants_fwd.hpp', 'w')

def print_forward_functions(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "        namespace %s {" % (n.short_name)
  print >> file, "          namespace fnc {"

  n.functions.sort()
  for function in n.functions:
    print >> file, "            struct %s;" % (function)

  print >> file, "          } // namespace fnc"
  print >> file, "        } // namespace %s" % (n.short_name)

def print_forward_constants(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "        namespace %s {" % (n.short_name)
  print >> file, "          namespace cst {"
  
  n.constants.sort()
  for constant in n.constants:
    print >> file, "            struct %s;" % (parser.constants[constant].new_name)
  
  print >> file, "          } // namespace cst"
  print >> file, "        } // namespace %s" % (n.short_name)

def print_forward_functions_ref(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace fnc {"
    
  n.namespace_ref.sort()
  for ref in n.namespace_ref:
    if ref not in parser.namespaces:
      print >> file, "// ERROR: using unknown namespace %s;" % (ref)
    else:
      nn = parser.namespaces[ref]
      nn.functions.sort()
      for function in nn.functions:
        print >> file, "          using gig::%s::%s::fnc::%s;" % (nn.category, nn.short_name, function)

  print >> file, "        } // namespace fnc"
  print >> file, "      } // namespace %s" % (n.short_name)

def print_forward_constants_ref(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace cst {"
    
  n.constants_ref.sort()
  for constant in n.constants_ref:
    if constant not in parser.constants:
      print >> file, "// ERROR: using unknown constant %s;" % (constant)
    else:
      c = parser.constants[constant]
      nn = parser.namespaces[c.namespace]
      print >> file, "          using gig::%s::%s::cst::%s;" % (nn.category, nn.short_name, c.new_name)

  print >> file, "        } // namespace cst"
  print >> file, "      } // namespace %s" % (n.short_name)

def print_functions(file, parser, namespace):
  n = parser.namespaces[namespace]
  
  if n.short_name == 'cl_event':
    return
  
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace fnc {"
  
  for function in n.functions:
    fcts = parser.functions[function]
    print >> file, "          struct %s {\n" % (function)
    for f in fcts:
      print >> file, f
    print >> file, "          };\n"
        
  print >> file, "        } // namespace fnc"
  print >> file, "      } // namespace %s" % (n.short_name)

def print_constants(file, parser, namespace):
  n = parser.namespaces[namespace]
  print >> file, "      namespace %s {" % (n.short_name)
  print >> file, "        namespace cst {"
  
  for constant in n.constants:
    print >> file, parser.constants[constant]
      
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
  
def print_forward_functions_category_ref(file, parser, category):
  print >> file, "      namespace %s {" % (category)
  namespaces = parser.namespaces.keys()
  namespaces.sort()
  for namespace in namespaces:
    n = parser.namespaces[namespace]
    if n.category == category:
      print_forward_functions_ref(file, parser, namespace)
  print >> file, "      } // namespace %s" % (category)
  
def print_forward_constants_category_ref(file, parser, category):
  print >> file, "      namespace %s {" % (category)
  namespaces = parser.namespaces.keys()
  namespaces.sort()
  for namespace in namespaces:
    n = parser.namespaces[namespace]
    if n.category == category:
      print_forward_constants_ref(file, parser, namespace)
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
 * @copyright 2008-2011. All rights reserved.
 */
 
%s

namespace gtulu {
  namespace internal {
  
    namespace generated {
    } // namespace generated

    namespace gig = ::gtulu::internal::generated;

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

print_forward_functions_category(gen_fct_fwd, parser, "gl")
print_forward_functions_category(gen_fct_fwd, parser, "arb")
print_forward_functions_category(gen_fct_fwd, parser, "ext")
print_forward_functions_category(gen_fct_fwd, parser, "nv")
print_forward_functions_category(gen_fct_fwd, parser, "amd")
print_forward_functions_category(gen_fct_fwd, parser, "other")

print_forward_functions_category_ref(gen_fct_fwd, parser, "gl")
print_forward_functions_category_ref(gen_fct_fwd, parser, "arb")
print_forward_functions_category_ref(gen_fct_fwd, parser, "ext")
print_forward_functions_category_ref(gen_fct_fwd, parser, "nv")
print_forward_functions_category_ref(gen_fct_fwd, parser, "amd")
print_forward_functions_category_ref(gen_fct_fwd, parser, "other")

print_forward_constants_category(gen_cst_fwd, parser, "gl")
print_forward_constants_category(gen_cst_fwd, parser, "arb")
print_forward_constants_category(gen_cst_fwd, parser, "ext")
print_forward_constants_category(gen_cst_fwd, parser, "nv")
print_forward_constants_category(gen_cst_fwd, parser, "amd")
print_forward_constants_category(gen_cst_fwd, parser, "other")

print_forward_constants_category_ref(gen_cst_fwd, parser, "gl")
print_forward_constants_category_ref(gen_cst_fwd, parser, "arb")
print_forward_constants_category_ref(gen_cst_fwd, parser, "ext")
print_forward_constants_category_ref(gen_cst_fwd, parser, "nv")
print_forward_constants_category_ref(gen_cst_fwd, parser, "amd")
print_forward_constants_category_ref(gen_cst_fwd, parser, "other")

print_functions_category(gen_fct, parser, "gl")
print_functions_category(gen_fct, parser, "arb")
print_functions_category(gen_fct, parser, "ext")
print_functions_category(gen_fct, parser, "nv")
print_functions_category(gen_fct, parser, "amd")
print_functions_category(gen_fct, parser, "other")

print_constants_category(gen_cst, parser, "gl")
print_constants_category(gen_cst, parser, "arb")
print_constants_category(gen_cst, parser, "ext")
print_constants_category(gen_cst, parser, "nv")
print_constants_category(gen_cst, parser, "amd")
print_constants_category(gen_cst, parser, "other")

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
  
