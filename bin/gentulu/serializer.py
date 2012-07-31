# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

import logging

import gentulu.utils as gu

log = logging.getLogger(__name__)

class ParameterSerializer(object):
  typename='typename %(name)s'
  template='%(name)s'
  typedef='typedef %(camelname)s %(uncamelname)s_t;'
  parameter='%(typename)s %(name)s'
  argument='%(value)s'
  debug='"%(debugname)s: \'" << %(value)s << "\'"'

  def __init__(self, parameter, as_template=False):
    super(ParameterSerializer, self).__init__()
    gu.inherit(self, parameter)

    self.as_template = as_template

    self.camelname = gu.camel(self.name) + 'Constant'
    self.uncamelname = gu.uncamel(self.name)

    if self.as_template:
      self.name = self.camelname
    else:
      self.name = self.uncamelname

  def typenames(self):
    return ParameterSerializer.typename % self.__dict__

  def templates(self):
    return ParameterSerializer.template % self.__dict__

  def typedefs(self):
    return ParameterSerializer.typedef % self.__dict__

  def debugs(self):
    self.debugname = self.uncamelname

    if self.as_template:
      self.value = '%(uncamelname)s_t::name()' % self.__dict__
    else:
      self.value = self.name

    return ParameterSerializer.debug % self.__dict__

  def parameters(self):
    return ParameterSerializer.parameter % self.__dict__

  def arguments(self):
    if self.as_template:
      self.value = '%(uncamelname)s_t()' % self.__dict__
    elif self.is_template:
      self.value = 'static_cast< std::%(type)s_t >(%(name)s)' % self.__dict__
    else:
      self.value = self.name

    return ParameterSerializer.argument % self.__dict__



class DeclarationSerializer(object):
  signature='''%(prefix)s %(specifier)s %(outtype)s %(scope)scall(%(parameters)s)'''

  declare='''%(signature)s;'''
  define_template='''%(signature)s { %(returns)s %(scope)s::call(%(arguments)s); }'''

  declare_template='''
%(signature)s {%(typedefs)s
  %(assign)s %(new_name)s< >::call(%(arguments)s);
  %(returns)s
}
'''

  define='''
%(signature)s {%(typedefs)s
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
    self.as_template = self.template_count != 0
    self.serializers = [ ParameterSerializer(p, self.as_template and p.is_template) for p in self.parameters ]
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
      self.declare_prefix = 'template< std::uint8_t const Cardinality >'
      self.declare_suffix = 'Cardinality'
      self.define_prefix = 'template< >'
      self.define_suffix = 'boost::mpl::int_< %d >' % self.cardinality;
    else:
      self.declare_prefix = ''
      self.declare_suffix = ''
      self.define_prefix = ''
      self.define_suffix = ''

  def typenames(self):
    typenames = [ s.typenames() for s in self.serializers if s.as_template ]
    if self.has_cardinality:
      typenames.append('typename Cardinality')
    return typenames

  def templates(self):
    return [ s.templates() for s in self.serializers if s.as_template ]

  def typedefs(self):
    return [ s.typedefs() for s in self.serializers if s.as_template ]

  def declaration(self):
    self.scope = ''

    if self.as_template:
      self.specifier = 'inline static'
    else:
      self.specifier = 'static'

    self.prefix = ''
    self.parameters = ', '.join([ s.parameters() for s in self.serializers if not s.as_template ])
    self.signature = DeclarationSerializer.signature % self.__dict__

    self.returns = self.declare_returns
    self.arguments = ', '.join([ s.arguments() for s in self.serializers ])
    self.scope = '%(function_name)s< %(declare_suffix)s >' % self.__dict__

    if '__invalid' in self.parameters or  '__invalid' in self.outtype:
      self.signature = '// ' + self.signature

    if self.as_template:
      return DeclarationSerializer.define_template % self.__dict__
    else:
      return DeclarationSerializer.declare % self.__dict__

  def definition(self):
    if self.as_template:
      return ''

    self.specifier = ''
    self.scope = '%(function_name)s< %(define_suffix)s >::' % self.__dict__

    self.prefix = self.define_prefix
    self.parameters = ', '.join([ s.parameters() for s in self.serializers if not s.as_template ])
    self.signature = DeclarationSerializer.signature % self.__dict__

    self.returns = self.define_returns
    self.suffix = self.declare_suffix
    self.arguments = ', '.join([ s.arguments() for s in self.serializers ])
    self.typedefs = '\n'.join([ s.typedefs() for s in self.serializers if s.as_template ])
    self.debug = '", "'.join([ s.debugs() for s in self.serializers ])

    if '__invalid' in self.parameters or  '__invalid' in self.outtype:
      return ''

    return DeclarationSerializer.define % self.__dict__

    # if self.as_template:
    #   return ''
    # else:
    #   self.parameters = ', '.join([ s.parameters() for s in self.serializers if not s.as_template ])
    #   self.arguments = ', '.join([ s.arguments() for s in self.serializers ])
    #   self.specifier = 'static'
    #   self.scope = ''
    #   self.suffix = ''
    #   self.signature = DeclarationSerializer.signature % self.__dict__
    #   return DeclarationSerializer.define % self.__dict__


class FunctionSerializer(object):
  signature='''template< %(typenames)s >
struct %(name)s%(templates)s'''

  declare='''
%(signature)s;
'''

  declare_template='''
%(signature)s {%(typedefs)s
  %(declarations)s
};
'''

  define='''
%(definitions)s
'''

  def __init__(self, function):
    super(FunctionSerializer, self).__init__()
    gu.inherit(self, function)

    self.serializers = [ DeclarationSerializer(d) for d in self.declarations ]
    self.serializers += [ DeclarationSerializer(d, len(d.template_parameters)) for d in self.declarations if len(d.template_parameters) > 0 ]
    self.template_counts = set([ len(s.typenames()) for s in self.serializers ])

    self.comments = ''

  def declaration(self):
    self.typenames = 'typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void'
    self.templates = ''
    self.signature = FunctionSerializer.signature % self.__dict__
    declaration = FunctionSerializer.declare % self.__dict__
    
    for template_count in self.template_counts:
      self.typenames = ','.join([ 'typename _%d' % (i + 1) for i in range(0, template_count) ])
      self.templates = '<%s>' % ','.join([ '_%d' % (i + 1) for i in range(0, template_count) ])
      self.signature = FunctionSerializer.signature % self.__dict__

      self.declarations = set()
      self.typedefs = set()

      for s in [ s for s in self.serializers if len(s.typenames()) == template_count ]:
        self.declarations.add(s.declaration())

        self.typedefs.update(['typedef %s %s;' % ('_' + str(i+1), t.replace('typename', '')) for i,t in enumerate(s.typenames())])
        for t in s.typedefs():
          self.typedefs.add(t)

      def compare_typedef(x, y):
        if x[0:9] == y[0:9]:
          return cmp(x, y)
        elif x[0:9] == 'typedef _':
          return -1
        else:
          return 1

      self.typedefs = '\n'.join(sorted(self.typedefs, cmp=compare_typedef))
      self.declarations = '\n'.join(self.declarations)
      declaration += FunctionSerializer.declare_template % self.__dict__

    return declaration

  def definition(self):
    definition = ''
    for template_count in self.template_counts:
      self.definitions = []

      for s in [ s for s in self.serializers if len(s.typenames()) == template_count ]:
        self.definitions.append(s.definition())

      self.definitions = '\n'.join(self.definitions)
      definition += FunctionSerializer.define % self.__dict__

    return definition


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
#include "gtulu/internal/functions.hpp"''' % self.__dict__
    self.type = ''
    return LibrarySerializer.namespace % self.__dict__
