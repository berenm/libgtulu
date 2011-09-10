#!/usr/bin/python
# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

import os
from lxml import etree
from lxml import objectify

from gentulu.function import function

parser = etree.XMLParser(recover=True, remove_blank_text=True)
parser.set_element_class_lookup(objectify.ObjectifyElementClassLookup())
functions = []
for file in sorted(os.listdir('man')):
  if file.endswith('.xml'):
    tree = objectify.parse("man/" + file, parser).getroot()
    functions.append(function.parse_xml(tree))

gen_fct = open('../include/gtulu/internal/generated/functions.hpp', 'w')
gen_fct_fwd = open('../include/gtulu/internal/generated/functions_fwd.hpp', 'w')

def print_forward_functions(file, functions):
  print >> file, "          namespace fnc {"
  for f in functions:
    print >> file, unicode('          ' + '\n          '.join(f.str_forward())).encode('utf-8')
    print >> file, ''
  print >> file, "          } // namespace fnc"

def print_functions(file, functions):
  print >> file, "        namespace fnc {"
  for f in functions:
    print >> file, unicode('          ' + '\n          '.join(f.str_define())).encode('utf-8')
    print >> file, ''
  print >> file, "        } // namespace fnc"

gl3 = open('/usr/local/include/GL3/gl3.h', 'r')

header = """/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
 
/******************************************************************************
 * THIS FILE IS AUTO GENERATED FROM scripts/generate_gl_headers.py,           *
 * ANY CHANGE WILL BE OVERWRITTEN                                             *
 ******************************************************************************/
 
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

guard = """#ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
# error "gtulu/internal/generated/functions.hpp should not be included directly, please include gtulu/internal/functions.hpp instead."
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_
#define GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_

#include "gtulu/internal/generated/functions_fwd.hpp"
"""
print >> gen_fct, header % (guard)

guard = """#ifndef IN_GTULU_INTERNAL_FUNCTIONS_FWD_HPP_
# ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
#  error "gtulu/internal/generated/functions_fwd.hpp should not be included directly, please include gtulu/internal/functions_fwd.hpp instead."
# endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_FWD_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_
#define GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_
"""
print >> gen_fct_fwd, header % (guard)

print_forward_functions(gen_fct_fwd, sorted(functions, key=lambda f: f.new_name))
print_functions(gen_fct, sorted(functions, key=lambda f: f.new_name))

guard = """#endif /* GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_ */"""
print >> gen_fct, footer % (guard)

guard = """#endif /* GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_ */"""
print >> gen_fct_fwd, footer % (guard)
