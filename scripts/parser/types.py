import platform
import re

from clang.cindex import Index, CursorKind, TypeKind, Type

from source import Extent, Sources

class Type(object):
  bits = platform.architecture()[0]

  def __init__(self, cursor):
    super(Type, self).__init__()

    self._cursor = cursor
    self._extent = Extent(cursor=self._cursor)

    if self._cursor.displayname in ['%sint%d_t' % (s, i) for i in [8,16,32,64] for s in ['','u']]:
      self._reduced_name = self._cursor.displayname.replace('_t', '')
    elif self._cursor.kind.is_attribute():
      if len(self._cursor.displayname) > 0:
        self._reduced_name = '__attr_%s' % self._cursor.displayname
      else:
        self._reduced_name = '__attr_%s' % Sources.getchunk(self._extent).strip('_')
    else:
      self._reduced_name = Type.nameof(self._cursor.type)

    self._name = cursor.type.get_declaration().displayname
    if self._name is None or len(self._name) == 0:
      self._name = self._reduced_name

  @property
  def type(self):
    return self._reduced_name

  @property
  def typename(self):
    return self._name

  @property
  def cursor(self):
    return self._cursor

  @staticmethod
  def nameof(ctype):
    utype = ctype.get_canonical()
    ukind = utype.kind

    bits = int(Type.bits.replace('bit', ''))

    if ukind == TypeKind.INVALID:
      return '__invalid'
    elif ukind == TypeKind.UNEXPOSED:
      return '__unexposed'
    elif ukind == TypeKind.VOID:
      return 'void'
    elif ukind == TypeKind.BOOL:
      return 'bool'
    elif ukind == TypeKind.CHAR_U:
      return 'uchar'
    elif ukind == TypeKind.UCHAR:
      return 'uint8'
    elif ukind == TypeKind.CHAR16:
      return 'char16'
    elif ukind == TypeKind.CHAR32:
      return 'char32'
    elif ukind == TypeKind.USHORT:
      return 'uint16'
    elif ukind == TypeKind.UINT:
      return 'uint32'
    elif ukind == TypeKind.ULONG:
      return 'uint%d' % (bits)
    elif ukind == TypeKind.ULONGLONG:
      return 'uint64'
    elif ukind == TypeKind.UINT128:
      return 'uint128'
    elif ukind == TypeKind.CHAR_S:
      return 'char'
    elif ukind == TypeKind.SCHAR:
      return 'int8'
    elif ukind == TypeKind.WCHAR:
      return 'wchar'
    elif ukind == TypeKind.SHORT:
      return 'int16'
    elif ukind == TypeKind.INT:
      return 'int32'
    elif ukind == TypeKind.LONG:
      return 'int%d' % (bits)
    elif ukind == TypeKind.LONGLONG:
      return 'int64'
    elif ukind == TypeKind.INT128:
      return 'int128'
    elif ukind == TypeKind.FLOAT:
      return 'float32'
    elif ukind == TypeKind.DOUBLE:
      return 'float64'
    elif ukind == TypeKind.LONGDOUBLE:
      return 'float%d' % (bits + 64)
    elif ukind == TypeKind.NULLPTR:
      return 'nullptr'
    elif ukind == TypeKind.OVERLOAD:
      return '__overload'
    elif ukind == TypeKind.DEPENDENT:
      return '__dependent'
    elif ukind == TypeKind.OBJCID:
      return '__objcid'
    elif ukind == TypeKind.OBJCCLASS:
      return '__objcclass'
    elif ukind == TypeKind.OBJCSEL:
      return '__objcsel'
    elif ukind == TypeKind.COMPLEX:
      return '__complex_%s' % utype.element_type
    elif ukind == TypeKind.POINTER:
      return '%s*' % Type.nameof(utype.get_pointee())
    elif ukind == TypeKind.BLOCKPOINTER:
      return '__blockpointer'
    elif ukind == TypeKind.LVALUEREFERENCE:
      return '__lvaluereference'
    elif ukind == TypeKind.RVALUEREFERENCE:
      return '__rvaluereference'
    elif ukind == TypeKind.RECORD:
      return utype.get_declaration().displayname
    elif ukind == TypeKind.ENUM:
      return utype.get_declaration().displayname
    elif ukind == TypeKind.TYPEDEF:
      return '__typedef'
    elif ukind == TypeKind.OBJCINTERFACE:
      return '<objc-object-interface>'
    elif ukind == TypeKind.OBJCOBJECTPOINTER:
      return '<objc-object-pointer>'
    elif ukind == TypeKind.FUNCTIONNOPROTO:
      return '<function-no-proto>'
    elif ukind == TypeKind.FUNCTIONPROTO:
      return '<function-proto>'
    elif ukind == TypeKind.CONSTANTARRAY:
      return Type.nameof(utype.element_type) + '[%s]' % utype.element_count
    elif ukind == TypeKind.VECTOR:
      return '__vector_%s' % Type.nameof(utype.element_type) + '[%s]' % utype.element_count
    else:
      return '__unknown'

  def __repr__(self):
    params = {'type': self.type, 'name': self.typename, 'extent': Extent(cursor=self._cursor)}
    output = '<type %s/>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    return output


class Typedef(Type):
  def __init__(self, cursor):
    super(Typedef, self).__init__(cursor)

    self._alias = self._cursor.displayname

  @property
  def alias(self):
    return self._alias

  def __repr__(self):
    params = {'type': self.type, 'name': self.alias, 'extent': Extent(cursor=self._cursor)}
    output = '<typedef %s/>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    return output


class Struct(Type):
  def __init__(self, cursor):
    super(Struct, self).__init__(cursor)

    self._children = [ p for c in self._cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]

  def __repr__(self):
    params = {'name': self.type, 'extent': Extent(cursor=self._cursor)}
    output = '<struct %s>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self._children ])
    output += "\n</struct>"
    return output


class Field(Type):
  def __init__(self, cursor):
    super(Field, self).__init__(cursor)

    self._children = [ p for c in self._cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]
    self._annotations = []
    for c in self._children:
      if isinstance(c, Annotation):
        self._annotations.append(" %s='%s'" % (c._name, c._value))

  def __repr__(self):
    params = {'name': self._cursor.displayname, 'type': self.type, 'typename': self.typename, 'extent': Extent(cursor=self._cursor)}
    output = '<field %s%s/>\n' % (' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ]), ''.join(self._annotations))
    return output


class Union(Type):
  def __init__(self, cursor):
    super(Union, self).__init__(cursor)

    self._children = [ p for c in self._cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]

  def __repr__(self):
    params = {'name': self.type, 'extent': Extent(cursor=self._cursor)}
    output = '<union %s>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self._children ])
    output += "\n</union>"
    return output


class Enum(Type):
  def __init__(self, cursor):
    super(Enum, self).__init__(cursor)

    self._children = [ p for c in self._cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]
    prev = None
    for c in self._children:
      if c.value is None:
        if prev is None:
          c.value = 0
        else:
          c.value = prev.value + 1
      prev = c

  def __repr__(self):
    params = {'name': self.type, 'extent': Extent(cursor=self._cursor)}
    output = '<enum %s>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self._children ])
    output += "\n</enum>"
    return output


class EnumValue(Type):
  def __init__(self, cursor):
    super(EnumValue, self).__init__(cursor)

    children = [ c for c in self._cursor.get_children() ]
    if len(children) == 1:
      child = children[0]
      self.value = Sources.getchunk(Extent(cursor=child))

      if self.value in MacroDefinition.macros:
        self.value = MacroDefinition.macros[self.value]

      if self.value[0] == "'":
        self.value = ord(self.value[1])
      elif all([ c in '0123456789' for c in self.value]):
        self.value = eval(self.value)

    elif len(children) == 0:
      self.value = None
    else:
      self.value = None

  def __repr__(self):
    params = {'name': self._cursor.displayname, 'value': self.value, 'extent': Extent(cursor=self._cursor)}
    output = '<enum-value %s/>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    return output


class TranslationUnit(Type):
  def __init__(self, cursor):
    super(TranslationUnit, self).__init__(cursor)

    self._children = [ p for c in self._cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]

  def __repr__(self):
    params = {'name': self._name, 'extent': Extent(cursor=self._cursor)}
    output = '<translation-unit %s>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self._children ])
    output += "\n</translation-unit>"
    return output


class Annotation(Type):
  def __init__(self, cursor):
    super(Annotation, self).__init__(cursor)

    (self._name, self._value) = self._cursor.displayname.split(':')

  def __repr__(self):
    params = {'name': self._name, 'value': self._value, 'extent': Extent(cursor=self._cursor)}
    output = '<annotation %s/>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    return output


class Function(Type):
  def __init__(self, cursor):
    super(Function, self).__init__(cursor)

    self._name = self._cursor.displayname.split('(')[0]

    self._children = [ p for c in self._cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]

    if len(self._children) > 0 and self._children[0]._cursor.kind == CursorKind.TYPE_REF:
      self._return = {'type': Type(self._children[0]._cursor).type,
                      'typename': Type(self._children[0]._cursor).typename}
      self._children = self._children[1:]
    else:
      self._return = {'type': 'void', 'typename': 'void'}


  def __repr__(self):
    params = {'name': self._name, 'return-type': self._return['type'], 'return-typename': self._return['typename'], 'extent': Extent(cursor=self._cursor)}
    output = '<function %s>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self._children ])
    output += "\n</function>"
    return output


class Parameter(Type):
  def __init__(self, cursor):
    super(Parameter, self).__init__(cursor)

  def __repr__(self):
    params = {'name': self._cursor.displayname, 'type': Type(self._cursor).type, 'typename': Type(self._cursor).typename, 'extent': Extent(cursor=self._cursor)}
    output = '<param %s/>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    return output


class MacroDefinition(Type):
  macros = {}

  def __init__(self, cursor):
    super(MacroDefinition, self).__init__(cursor)

    self._name = self._cursor.displayname
    self._value = Sources.getchunk(Extent(cursor=cursor))

    match = re.search(r'(?P<name>%s\([^)]*\)|%s)' % (self._name, self._name), self._value)
    if match is not None:
      self._name = match.group('name')

    self._value = self._value.replace(self._name, '').strip('\\\n\t ')

    while self._value in MacroDefinition.macros:
      self._value = MacroDefinition.macros[self._value]

    MacroDefinition.macros[self._name] = self._value

  def __repr__(self):
    params = {'name': self._name, 'value': self._value, 'extent': Extent(cursor=self._cursor)}
    output = '<macro %s/>\n' % ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ])
    return output


class Unknown(object):
  def __init__(self, cursor):
    super(Unknown, self).__init__()
    self._cursor = cursor
    self._kind = str(self._cursor.kind).replace('CursorKind.', '').replace('_', '-').lower()

    self._type = self._cursor.type
    self._utyp = self._cursor.type.get_canonical()

    self._children = [ p for c in self._cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]

  def __repr__(self):
    params = {'extent': Extent(cursor=self._cursor),
      'name': self._cursor.displayname,
      'type': Type(self._cursor).type,
      'typename': Type(self._cursor).typename,
    }
    output = '<%s %s>\n' % (self._kind, ' '.join([ "%s='%s'" % (k,v) for k,v in params.items() ]))

    prev = self._cursor.extent.start
    for c in self._children:
      output += Sources.getchunk(Extent(start=prev, end=c._cursor.extent.start))
      output += str(c) + '\n'
      prev = c._cursor.extent.end

    output += Sources.getchunk(Extent(start=prev, end=self._cursor.extent.end))
    output += '</%s>' % self._kind
    return output


class Element(object):
  def __init__(self):
    super(Element, self).__init__()

  @staticmethod
  def parse(cursor):
    if cursor.kind == CursorKind.STRUCT_DECL:
      return Struct(cursor)
    elif cursor.kind == CursorKind.FIELD_DECL:
      return Field(cursor)
    elif cursor.kind == CursorKind.UNION_DECL:
      return Union(cursor)
    elif cursor.kind == CursorKind.ENUM_DECL:
      return Enum(cursor)
    elif cursor.kind == CursorKind.ENUM_CONSTANT_DECL:
      return EnumValue(cursor)
    elif cursor.kind == CursorKind.TYPEDEF_DECL:
      return Typedef(cursor)
    elif cursor.kind == CursorKind.TRANSLATION_UNIT:
      return TranslationUnit(cursor)
    elif cursor.kind == CursorKind.ANNOTATE_ATTR:
      return Annotation(cursor)
    elif cursor.kind == CursorKind.UNEXPOSED_ATTR:
      return None
    elif cursor.kind == CursorKind.FUNCTION_DECL:
      return Function(cursor)
    elif cursor.kind == CursorKind.PARM_DECL:
      return Parameter(cursor)
    elif cursor.kind == CursorKind.MACRO_DEFINITION:
      return MacroDefinition(cursor)
    elif cursor.kind == CursorKind.MACRO_INSTANTIATION:
      return None
    elif cursor.kind == CursorKind.INCLUSION_DIRECTIVE:
      return None
    else:
      return Unknown(cursor)
