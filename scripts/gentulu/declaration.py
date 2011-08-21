#!/usr/bin/python
# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

from parameter import parameter
from gentulu.utils import plain_text, smart_wrap
from gentulu.renamable import renamable

class declaration(renamable):
  def __init__(self, name, output, parameters):
    self.name = name
    self.output = output
    self.parameters = parameters

    self.can_template = any([ p.is_template for p in self.parameters ])

    if self.output == 'const GLubyte *':
      self.output = 'GLubyte const*'

    if self.output != 'void':
      self.var_stmt = '%s out = ' % (self.output)
      self.ret_stmt = 'return out;'
    else:
      self.var_stmt = ''
      self.ret_stmt = ''

    std_args = []
    std_call = []
    std_debg = []
    tpl_pars = []
    tpl_args = []
    tpl_call = []
    tpl_debg = []

    self.comments = '''
/**'''
    for p in self.parameters:
      if len(p.description) > 0:
        self.comments += '''
 * ''' + '\n *        '.join(smart_wrap([ '@param ' + p.name + ' ' + p.description ])) + '''
 *''' % (p.__dict__)

      if p.name != '':
        std_args.append(p.std_str())
        if p.type == 'bool':
          std_call.append('(%s ? 1 : 0)' % (p.name))
        elif p.is_template:
          std_call.append('::std::uint32_t(%s)' % (p.name))
        else:
          std_call.append('%s' % (p.name))
        std_debg.append(''' "%s: '" << %s << "'" ''' % (p.name, p.name))

        if p.is_template:
          tpl_pars.append(p.tpl_str())
          tpl_call.append('%s::value' % (p.tpl_name))
          tpl_debg.append(''' "%s: '" << %s::name << "'" ''' % (p.name, p.tpl_name))
        else:
          tpl_args.append(p.std_str())
          if p.type == 'bool':
            tpl_call.append('(%s ? 1 : 0)' % (p.name))
          else:
            tpl_call.append('%s' % (p.name))
          tpl_debg.append(''' "%s: '" << %s << "'" ''' % (p.name, p.name))

    self.comments += '''
 */'''

    if len(tpl_debg) == 0:
      tpl_debg.append('""')
    if len(std_debg) == 0:
      std_debg.append('""')

    self.std_args = ', '.join(std_args)
    self.std_call = ', '.join(std_call)
    self.std_debg = ' ", " '.join(std_debg)
    self.tpl_pars = ', '.join(tpl_pars)
    self.tpl_args = ', '.join(tpl_args)
    self.tpl_call = ', '.join(tpl_call)
    self.tpl_debg = ' ", " '.join(tpl_debg)

    renamable.__init__(self)

  def str_forward(self):
    string = '''
%(comments)s
inline static %(output)s call(%(std_args)s);
'''
    if self.can_template:
      string += '''
%(comments)s
template< %(tpl_pars)s >
inline static %(output)s call(%(tpl_args)s);
'''
    return (string % (self.__dict__)).strip().splitlines()

  def str_declare(self):
    string = '''
%(comments)s
inline static %(output)s call(%(std_args)s);'''
    if self.can_template:
      string += '''
%(comments)s
template< %(tpl_pars)s >
inline static %(output)s call(%(tpl_args)s);'''
    return (string % (self.__dict__)).strip().splitlines()

  def str_define(self):
    string = '''
%(comments)s
inline static %(output)s call(%(std_args)s) {
  __gl_debug << "call %(name)s " %(std_debg)s;
  %(var_stmt)s%(name)s(%(std_call)s);
  __gl_check_error();
  %(ret_stmt)s
}'''
    if self.can_template:
      string += '''
%(comments)s
template< %(tpl_pars)s >
inline static %(output)s call(%(tpl_args)s) {
  __gl_debug << "call %(name)s " %(tpl_debg)s;
  %(var_stmt)s%(name)s(%(tpl_call)s);
  __gl_check_error();
  %(ret_stmt)s
}'''
    return (string % (self.__dict__)).strip().splitlines()

  @staticmethod
  def parse_string(string):
    string = string.replace('GLAPI', '')
    string = string.strip('); ')
    [output, string] = string.split('APIENTRY')
    [name, parameters_string] = string.split('(')

    output = output.strip()
    name = name.strip()
    parameters_string = parameters_string.strip()

    parameters = [ parameter.parse_string(s.strip()) for s in parameters_string.split(',') ]
    return declaration(name, output, parameters)

  @staticmethod
  def parse_xml(node, next):
    name = str(node.funcdef.function)
    output = str(node.funcdef).strip()

    while next.tag == 'comment':
      next = next.getnext()

    descriptions = {}
    constants = {}
    if next.tag == 'refsect1' and next.get('id').startswith('parameters'):
      for n in next.variablelist.iter(tag='varlistentry'):
        desc = plain_text(n.listitem.para)
        consts = [ str(e) for e in n.listitem.para.iter(tag='constant') ]
        for p in n.term.iter(tag='parameter'):
          descriptions[p] = desc
          constants[p] = consts

    parameters = [ parameter.parse_node(p, descriptions, constants) for p in node.iter(tag='paramdef') ]
    parameters = [ p for p in parameters if p.type != 'void' ]

    return declaration(name, output, parameters)

  def __repr__(self):
    return '''declaration { %s }''' % (self.__dict__)
#  new_parameters: %(new_parameters)s

  def __str__(self):
    string = '              inline static %(output)s call(%(std_args)s) {\n' % (self.__dict__)
    string += '                __gl_debug << "call %(name)s " %(std_debg)s;\n' % (self.__dict__)
    string += '                %(var_stmt)s%(name)s(%(std_call)s);\n' % (self.__dict__)
    string += '                __gl_check_error;\n'
    string += '                %(ret_stmt)s\n' % (self.__dict__)
    string += '              }\n'
    if self.can_template:
      string += '              template< %(tpl_pars)s >\n' % (self.__dict__)
      string += '              inline static %(output)s call(%(tpl_args)s) {\n' % (self.__dict__)
      string += '                __gl_debug << "call %(name)s " %(tpl_debg)s;\n' % (self.__dict__)
      string += '                %(var_stmt)s%(name)s(%(tpl_call)s);\n' % (self.__dict__)
      string += '                __gl_check_error;\n'
      string += '                %(ret_stmt)s\n' % (self.__dict__)
      string += '              }\n'
    return string

  def __eq__(self, other):
    return self.__hash__() == other.__hash__()

  def __hash__(self):
    return hash(''.join(self.str_forward()))
