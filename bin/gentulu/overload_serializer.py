# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

import logging

import gentulu.utils as gu

log = logging.getLogger(__name__)

class ParameterSerializer(object):
  parameter='%(typename)s %(name)s'
  argument='%(value)s'
  debug='"%(debugname)s: \'" << %(value)s << "\'"'

  def __init__(self, parameter):
    super(ParameterSerializer, self).__init__()
    gu.inherit(self, parameter)

    self.uncamelname = gu.uncamel(self.name)
    self.name = self.uncamelname

  def debugs(self):
    self.debugname = self.uncamelname
    self.value = self.name

    if self.hardcoded is not None:
      self.value = self.hardcoded

    return ParameterSerializer.debug % self.__dict__

  def parameters(self):
    return ParameterSerializer.parameter % self.__dict__

  def arguments(self):
    if self.hardcoded is not None:
      return self.hardcoded

    if self.is_template:
      self.value = 'static_cast< std::%(type)s_t >(%(name)s)' % self.__dict__
    elif 'std::vector< gtulu::mat' in self.typename:
      self.value = '%(name)s.data()->data()->data()' % self.__dict__
    elif 'std::vector< gtulu::vec' in self.typename:
      self.value = '%(name)s.data()->data()' % self.__dict__
    elif 'std::vector' in self.typename:
      self.value = '%(name)s.data()' % self.__dict__
    elif 'gtulu::mat' in self.typename:
      self.value = '%(name)s.data()->data()' % self.__dict__
    elif 'gtulu::vec' in self.typename:
      self.value = '%(name)s.data()' % self.__dict__
    elif 'std::string const&' == self.typename:
      self.value = '%(name)s.c_str()' % self.__dict__
    else:
      self.value = self.name

    return ParameterSerializer.argument % self.__dict__



class DeclarationSerializer(object):
  signature='''%(prefix)s %(specifier)s %(outtype)s %(function_name)s%(suffix)s(%(parameters)s)'''
  declare='''%(signature)s;'''
  define='''%(signature)s {
  __gtulu_debug() << "call %(name)s " %(debug)s;
  %(assign)s %(name)s(%(arguments)s);
  __gtulu_check_error();
  %(returns)s
}
'''

  def __init__(self, declaration, template_count=0):
    super(DeclarationSerializer, self).__init__()
    gu.inherit(self, declaration)

    self.template_count = template_count
    self.serializers = [ ParameterSerializer(p) for p in self.parameters ]
    self.function_name = self.function.name

    self.outtype = self.output.typename
    if self.outtype == 'void':
      self.assign = ''
      self.define_returns = ''
      self.declare_returns = ''
    else:
      self.assign = '%(typename)s %(name)s = ' % self.output.__dict__
      self.define_returns = 'return %(name)s;' % self.output.__dict__
      self.declare_returns = 'return'

    if self.has_cardinality:
      self.declare_prefix = 'template< std::uint8_t const Cardinality >\n'
      self.declare_suffix = ''
      self.define_prefix = 'template< >\n'
      self.define_suffix = '< %d >' % self.cardinality;
    elif self.has_dimension:
      self.declare_prefix = 'template< std::uint8_t const Dimension >\n'
      self.declare_suffix = ''
      self.define_prefix = 'template< >\n'
      self.define_suffix = '< %d >' % self.dimension;
    else:
      self.declare_prefix = ''
      self.declare_suffix = ''
      self.define_prefix = ''
      self.define_suffix = ''

  def declaration(self):
    # self.specifier = 'BOOST_SYMBOL_EXPORT'
    self.specifier = ''

    self.prefix = self.declare_prefix
    self.suffix = self.declare_suffix
    self.parameters = ', '.join([ s.parameters() for s in self.serializers if s.hardcoded is None ])
    self.signature = DeclarationSerializer.signature % self.__dict__

    self.returns = self.declare_returns
    self.arguments = ', '.join([ s.arguments() for s in self.serializers ])

    if '__invalid' in self.parameters or  '__invalid' in self.outtype:
      self.signature = '// ' + self.signature

    return DeclarationSerializer.declare % self.__dict__

  def definition(self):
    self.specifier = ''

    self.prefix = self.define_prefix
    self.suffix = self.define_suffix
    self.parameters = ', '.join([ s.parameters() for s in self.serializers if s.hardcoded is None ])
    self.signature = DeclarationSerializer.signature % self.__dict__

    self.returns = self.define_returns
    self.arguments = ', '.join([ s.arguments() for s in self.serializers ])
    self.debug = '", "'.join([ s.debugs() for s in self.serializers ])

    if '__invalid' in self.parameters or  '__invalid' in self.outtype:
      return ''

    return DeclarationSerializer.define % self.__dict__

class FunctionSerializer(object):
  declare='''
%(declarations)s
'''
  define='''
%(definitions)s
'''

  def __init__(self, function):
    super(FunctionSerializer, self).__init__()
    gu.inherit(self, function)

    self.serializers = [ DeclarationSerializer(d) for d in self.declarations ]
    self.comments = ''

  def declaration(self):
    self.declarations = []
    for s in [ s for s in self.serializers ]:
      self.declarations.append(s.declaration())

    self.declarations = '\n'.join(sorted(self.declarations))
    return FunctionSerializer.declare % self.__dict__

  def definition(self):
    self.definitions = []
    for s in [ s for s in self.serializers ]:
      self.definitions.append(s.definition())

    self.definitions = '\n'.join(sorted(self.definitions))
    return FunctionSerializer.define % self.__dict__


class LibrarySerializer(object):
  header='''
/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
 
/******************************************************************************
 * THIS FILE IS AUTO GENERATED FROM %(command)s,                              *
 * ANY CHANGE WILL BE OVERWRITTEN                                             *
 ******************************************************************************/

#ifndef IN_GTULU_INTERNAL_%(type)s_HPP_
# error "gtulu/internal/generated/functions.hpp should not be included directly, please include gtulu/internal/functions.hpp instead."
#endif /* IN_GTULU_INTERNAL_%(type)s_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_%(upper_name)s_%(type)s_HPP_
#define GTULU_INTERNAL_GENERATED_%(upper_name)s_%(type)s_HPP_

%(contents)s

#endif /* GTULU_INTERNAL_GENERATED_%(upper_name)s_%(type)s_HPP_ */
'''
  namespace='''
#include "gtulu/namespaces.hpp"
%(include)s

namespace gtulu {
namespace internal {
namespace generated {

namespace %(name)s {%(contents)s}

}
}
}
'''
  functions='''
namespace function {
  %(functions)s
}'''
  constants='''
namespace constant {
  %(constants)s
}'''

  def __init__(self, library):
    super(LibrarySerializer, self).__init__()
    gu.inherit(self, library)

    self.serializers = [ FunctionSerializer(f) for f in sorted(self.functions.values(), key=lambda v: v.name) ]

  def declarations(self, command):
    self.functions = '\n'.join([ s.declaration() for s in self.serializers ])
    self.contents = LibrarySerializer.functions % self.__dict__
    self.command = command
    self.upper_name = gu.uncamel(self.name).upper()
    self.include = ''
    self.type = 'FUNCTIONS'
    self.contents = LibrarySerializer.namespace % self.__dict__
    return LibrarySerializer.header % self.__dict__

  def definitions(self, command):
    self.functions = '\n'.join([ s.definition() for s in self.serializers ])
    self.contents = LibrarySerializer.functions % self.__dict__
    self.command = command
    self.upper_name = gu.uncamel(self.name).upper()

    self.include = '''#include "gtulu/opengl.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/utils/array.hpp"''' % self.__dict__
    self.type = ''
    return LibrarySerializer.namespace % self.__dict__
