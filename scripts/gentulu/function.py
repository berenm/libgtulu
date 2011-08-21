# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

from gentulu.utils import plain_text, serialize, smart_wrap
from gentulu.declaration import declaration
from gentulu.renamable import renamable

class function(renamable):
  def __init__(self, name, declarations, brief_description='', description=[], notes=[], errors=[]):
    self.name = name
    self.declarations = declarations
    self.brief_description = brief_description
    self.description = description
    self.notes = notes
    self.errors = errors

    self.comments = '''
/**'''
    if len(self.brief_description) > 0:
      self.comments += '''
 * @brief ''' + self.brief_description + '''
 *'''
    if len(self.description) > 0:
      self.comments += '''
 * ''' + '\n * '.join(smart_wrap(self.description)) + '''
 *'''
    if len(self.notes) > 0:
      self.comments += '''
 * Notes:
 * ''' + '\n * '.join(smart_wrap(self.notes)) + '''
 *'''
    if len(self.errors) > 0:
      self.comments += '''
 * Errors:
 * ''' + '\n * '.join(smart_wrap(self.errors)) + '''
 *'''
    self.comments += '''
 */'''

    renamable.__init__(self)

  def str_forward(self):
    string = '''
%(comments)s
struct gl_%(new_name)s;
'''
    return (string % (self.__dict__)).strip().splitlines()

  def str_declare(self):
    string = '''
%(comments)s
struct gl_%(new_name)s {
'''
    for d in self.declarations:
      string += '  ' + '\n  '.join(d.str_forward()) + '\n'
    string += '''};'''
    return (string % (self.__dict__)).strip().splitlines()

  def str_define(self):
    string = '''
%(comments)s
struct gl_%(new_name)s {
'''
    for d in self.declarations:
      string += '  ' + '\n  '.join(d.str_define()) + '\n\n'
    string += '''};'''

    return (string % (self.__dict__)).strip().splitlines()

  @staticmethod
  def parse_string(name, declarations):
    return function(name, declarations)

  @staticmethod
  def parse_xml(node):
    if len([ e for e in node.refnamediv.itertext(tag='refdescriptor') ]) == 0:
        name = str(node.refnamediv.refname)
    else:
        name = str(node.refnamediv.refdescriptor)
    brief_description = plain_text(node.refnamediv.refpurpose).capitalize()

    declarations = [ declaration.parse_xml(d, n.getnext()) for n in node.iter(tag='refsynopsisdiv') for d in n.funcsynopsis.iter(tag='funcprototype') ]

    description = []
    for n in [ n for n in node.iter(tag='refsect1') if n.get('id').startswith('description') ]:
      description.extend([ s for p in n.iterchildren(tag='para') for s in [ plain_text(p) ] if len(s) > 0 ])
      if len([ c for c in n.iterchildren(tag='variablelist') ]) > 0:
        description.extend([ '  - ' + plain_text(k.term) + ': ' + s for k in n.variablelist.iterchildren(tag='varlistentry') for p in k.iter(tag='para') for s in [ plain_text(p) ] if len(s) > 0 ])

    notes = []
    for n in [ n for n in node.iter(tag='refsect1') if n.get('id').startswith('notes') ]:
      notes.extend([ s for p in n.iterchildren(tag='para') for s in [ plain_text(p) ] if len(s) > 0 ])

    errors = []
    for n in [ n for n in node.iter(tag='refsect1') if n.get('id').startswith('errors') ]:
      errors.extend([ s for p in n.iterchildren(tag='para') for s in [ plain_text(p) ] if len(s) > 0 ])

    return function(name, declarations, brief_description, description, notes, errors)

  def __repr__(self):
    return serialize(self)
