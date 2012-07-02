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
      self.value = '%(uncamelname)s_t::value' % self.__dict__
    elif self.is_template:
      self.value = 'static_cast< std::%(type)s_t >(%(name)s)' % self.__dict__
    else:
      self.value = self.name

    return ParameterSerializer.argument % self.__dict__



class DeclarationSerializer(object):
  declare='''
%(declare_prefix)s
inline static %(outtype)s call(%(parameters)s);
'''

  define='''
%(define_prefix)s
inline static %(outtype)s call%(define_suffix)s(%(parameters)s) {%(typedefs)s
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
    if template_count != 0:
      self.serializers = [ ParameterSerializer(p, p.is_template) for p in self.parameters ]
    else:
      self.serializers = [ ParameterSerializer(p) for p in self.parameters ]

    self.outtype = self.output.typename
    if self.outtype == 'void':
      self.assign = ''
      self.returns = ''
    else:
      self.assign = '%(typename)s %(name)s = ' % self.output.__dict__
      self.returns = 'return %(name)s;' % self.output.__dict__

    if self.has_cardinality:
      self.declare_prefix = 'template< std::uint8_t const Cardinality >'
      self.define_prefix = 'template< >'
      self.define_suffix = '< %(cardinality)s >' % self.__dict__
    else:
      self.declare_prefix = ''
      self.define_prefix = ''
      self.define_suffix = ''

  def typenames(self):
    return [ s.typenames() for s in self.serializers if s.as_template ]

  def templates(self):
    return [ s.templates() for s in self.serializers if s.as_template ]

  def declaration(self):
    self.parameters = ', '.join([ s.parameters() for s in self.serializers if not s.as_template ])
    return DeclarationSerializer.declare % self.__dict__

  def definition(self):
    self.debug = '", "'.join([ s.debugs() for s in self.serializers ])
    self.typedefs = '\n'.join([ s.typedefs() for s in self.serializers if s.as_template ])
    self.parameters = ', '.join([ s.parameters() for s in self.serializers if not s.as_template ])
    self.arguments = ', '.join([ s.arguments() for s in self.serializers ])
    return DeclarationSerializer.define % self.__dict__



class FunctionSerializer(object):
  declare='''
%(comments)s
template< typename C1 = void, typename C2 = void, typename C3 = void, typename C4 = void, typename C5 = void >
struct %(name)s;
'''

  define='''
template< %(typenames)s >
struct %(name)s< %(templates)s > {
  %(declarations)s
  %(definitions)s
};
'''

  def __init__(self, function):
    super(FunctionSerializer, self).__init__()
    gu.inherit(self, function)

    self.serializers = [ DeclarationSerializer(d) for d in self.declarations ]
    self.serializers += [ DeclarationSerializer(d, len(d.template_parameters)) for d in self.declarations if len(d.template_parameters) > 0 ]
    self.template_counts = set([ len(s.typenames()) for s in self.serializers ])

    self.comments = '/**\n*/'

  def declaration(self):
    self.declarations = ''
    return FunctionSerializer.declare % self.__dict__

  def definition(self):
    definition = ''
    for template_count in self.template_counts:
      self.definitions = []
      self.declarations = set()
      self.typenames = set()
      self.templates = set()

      if self.has_cardinality:
        for s in [ s for s in self.serializers if len(s.typenames()) == template_count ]:
          self.declarations.add(s.declaration())
      self.declarations = '\n'.join(self.declarations)

      for s in [ s for s in self.serializers if len(s.typenames()) == template_count ]:
        self.definitions.append(s.definition())
        self.typenames.add(', '.join(s.typenames()))
        self.templates.add(', '.join(s.templates()))

      if len(self.typenames) > 1:
        log.error(self.typenames)
        log.error(self.templates)
      elif len(self.typenames) > 0:
        self.typenames = self.typenames.pop()
        self.templates = self.templates.pop()
      else:
        self.typenames = ''
        self.templates = ''

      self.definitions = '\n'.join(self.definitions)
      definition += FunctionSerializer.define % self.__dict__

    return definition


class LibrarySerializer(object):
  namespace='''
namespace gtulu {
namespace internal {
namespace generated {

namespace %(name)s {%(contents)s}

}
}
}'''
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

  def declarations(self):
    self.functions = '\n'.join([ s.declaration() for s in self.serializers ])
    self.contents = LibrarySerializer.functions % self.__dict__
    return LibrarySerializer.namespace % self.__dict__

  def definitions(self):
    self.functions = '\n'.join([ s.definition() for s in self.serializers ])
    self.contents = LibrarySerializer.functions % self.__dict__
    return LibrarySerializer.namespace % self.__dict__
