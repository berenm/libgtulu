import platform
import re
from xml.sax import saxutils as xml

from clang.cindex import Index, CursorKind, TypeKind, Type

from source import Extent, Sources

class Element(object):
  def __init__(self, cursor):
    super(Element, self).__init__()

    self.cursor = cursor
    self.extent = Extent(cursor=self.cursor)
    self.children = [ p for c in self.cursor.get_children() for p in [ Element.parse(c) ] if p is not None ]

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
    elif cursor.kind == CursorKind.FUNCTION_DECL:
      return Function(cursor)
    elif cursor.kind == CursorKind.PARM_DECL:
      return Parameter(cursor)
    elif cursor.kind == CursorKind.MACRO_DEFINITION:
      return MacroDefinition(cursor)
    elif cursor.kind == CursorKind.INCLUSION_DIRECTIVE:
      return None
    elif cursor.kind == CursorKind.UNEXPOSED_ATTR:
      return None
    elif cursor.kind == CursorKind.MACRO_INSTANTIATION:
      return None
    else:
      return Unknown(cursor)


class Type(Element):
  bits = platform.architecture()[0]

  def __init__(self, cursor):
    super(Type, self).__init__(cursor)

    if self.cursor.displayname in ['%sint%d_t' % (s, i) for i in [8,16,32,64] for s in ['','u']]:
      self.type = self.cursor.displayname.replace('_t', '')
    elif self.cursor.kind.is_attribute():
      if len(self.cursor.displayname) > 0:
        self.type = '__attr_%s' % self.cursor.displayname
      else:
        self.type = '__attr_%s' % Sources.getchunk(self.extent).strip('_')
    else:
      self.type = Type.nameof(self.cursor.type)

    self.typename = Type.typenameof(self.cursor.type)
    self.name = self.cursor.displayname

  @staticmethod
  def typenameof(ctype):
    utype = ctype.get_canonical()
    ukind = utype.kind

    qualifiers = []
    if ctype.is_const_qualified():
      qualifiers += ['const']
    if ctype.is_volatile_qualified():
      qualifiers += ['volatile']
    if ctype.is_restrict_qualified():
      qualifiers += ['restrict']
    if len(qualifiers) > 0:
      qualifier = ' ' + ' '.join(qualifiers)
    else:
      qualifier = ''

    if ukind == TypeKind.COMPLEX:
      return '__complex_%s' % Type.typenameof(utype.element_type) + qualifier
    elif ukind == TypeKind.POINTER:
      return '%s*' % Type.typenameof(ctype.get_pointee()) + qualifier
    elif ukind == TypeKind.LVALUEREFERENCE:
      return '%s&' % Type.typenameof(ctype.get_pointee()) + qualifier
    elif ukind == TypeKind.RVALUEREFERENCE:
      return '%s&&' % Type.typenameof(ctype.get_pointee()) + qualifier
    elif ukind == TypeKind.CONSTANTARRAY:
      return Type.typenameof(utype.element_type) + '[%s]' % utype.element_count + qualifier
    elif ukind == TypeKind.VECTOR:
      return '__vector_%s' % Type.typenameof(utype.element_type) + '[%s]' % utype.element_count + qualifier
    else:
      return ctype.get_declaration().displayname + qualifier

  @staticmethod
  def nameof(ctype):
    utype = ctype.get_canonical()
    ukind = utype.kind

    bits = int(Type.bits.replace('bit', ''))

    qualifiers = []
    if ctype.is_const_qualified():
      qualifiers += ['const']
    if ctype.is_volatile_qualified():
      qualifiers += ['volatile']
    if ctype.is_restrict_qualified():
      qualifiers += ['restrict']
    if len(qualifiers) > 0:
      qualifier = ' ' + ' '.join(qualifiers)
    else:
      qualifier = ''

    if ukind == TypeKind.INVALID:
      return '__invalid' + qualifier
    elif ukind == TypeKind.UNEXPOSED:
      return '__unexposed' + qualifier
    elif ukind == TypeKind.VOID:
      return 'void' + qualifier
    elif ukind == TypeKind.BOOL:
      return 'bool' + qualifier
    elif ukind == TypeKind.CHAR_U:
      return 'uchar' + qualifier
    elif ukind == TypeKind.UCHAR:
      return 'uint8' + qualifier
    elif ukind == TypeKind.CHAR16:
      return 'char16' + qualifier
    elif ukind == TypeKind.CHAR32:
      return 'char32' + qualifier
    elif ukind == TypeKind.USHORT:
      return 'uint16' + qualifier
    elif ukind == TypeKind.UINT:
      return 'uint32' + qualifier
    elif ukind == TypeKind.ULONG:
      return 'uint%d' % (bits) + qualifier
    elif ukind == TypeKind.ULONGLONG:
      return 'uint64' + qualifier
    elif ukind == TypeKind.UINT128:
      return 'uint128' + qualifier
    elif ukind == TypeKind.CHAR_S:
      return 'char' + qualifier
    elif ukind == TypeKind.SCHAR:
      return 'int8' + qualifier
    elif ukind == TypeKind.WCHAR:
      return 'wchar' + qualifier
    elif ukind == TypeKind.SHORT:
      return 'int16' + qualifier
    elif ukind == TypeKind.INT:
      return 'int32' + qualifier
    elif ukind == TypeKind.LONG:
      return 'int%d' % (bits) + qualifier
    elif ukind == TypeKind.LONGLONG:
      return 'int64' + qualifier
    elif ukind == TypeKind.INT128:
      return 'int128' + qualifier
    elif ukind == TypeKind.FLOAT:
      return 'float32' + qualifier
    elif ukind == TypeKind.DOUBLE:
      return 'float64' + qualifier
    elif ukind == TypeKind.LONGDOUBLE:
      return 'float%d' % (bits + 64) + qualifier
    elif ukind == TypeKind.NULLPTR:
      return 'nullptr' + qualifier
    elif ukind == TypeKind.OVERLOAD:
      return '__overload' + qualifier
    elif ukind == TypeKind.DEPENDENT:
      return '__dependent' + qualifier
    elif ukind == TypeKind.OBJCID:
      return '__objcid' + qualifier
    elif ukind == TypeKind.OBJCCLASS:
      return '__objcclass' + qualifier
    elif ukind == TypeKind.OBJCSEL:
      return '__objcsel' + qualifier
    elif ukind == TypeKind.COMPLEX:
      return '__complex_%s' % Type.nameof(utype.element_type) + qualifier
    elif ukind == TypeKind.POINTER:
      return '%s*' % Type.nameof(ctype.get_pointee()) + qualifier
    elif ukind == TypeKind.BLOCKPOINTER:
      return '__blockpointer' + qualifier
    elif ukind == TypeKind.LVALUEREFERENCE:
      return '%s&' % Type.typenameof(ctype.get_pointee()) + qualifier
    elif ukind == TypeKind.RVALUEREFERENCE:
      return '%s&&' % Type.typenameof(ctype.get_pointee()) + qualifier
    elif ukind == TypeKind.RECORD:
      return utype.get_declaration().displayname + qualifier
    elif ukind == TypeKind.ENUM:
      return utype.get_declaration().displayname + qualifier
    elif ukind == TypeKind.TYPEDEF:
      return '_typedef' + qualifier
    elif ukind == TypeKind.OBJCINTERFACE:
      return '<objc-object-interface>' + qualifier
    elif ukind == TypeKind.OBJCOBJECTPOINTER:
      return '<objc-object-pointer>' + qualifier
    elif ukind == TypeKind.FUNCTIONNOPROTO:
      return '<function-no-proto>' + qualifier
    elif ukind == TypeKind.FUNCTIONPROTO:
      return '<function-proto>' + qualifier
    elif ukind == TypeKind.CONSTANTARRAY:
      return Type.nameof(utype.element_type) + '[%s]' % utype.element_count + qualifier
    elif ukind == TypeKind.VECTOR:
      return '__vector_%s' % Type.nameof(utype.element_type) + '[%s]' % utype.element_count + qualifier
    else:
      return '__unknown' + qualifier

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'type': self.type,
      'typename': self.typename,
    }
    output = '<type %s/>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    return output


class Typedef(Type):
  def __init__(self, cursor):
    super(Typedef, self).__init__(cursor)

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'type': self.type,
    }
    output = '<typedef %s/>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    return output


class Struct(Type):
  def __init__(self, cursor):
    super(Struct, self).__init__(cursor)
    self.name = self.type

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
    }
    output = '<struct %s>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self.children ])
    output += "\n</struct>"
    return output


class Field(Type):
  def __init__(self, cursor):
    super(Field, self).__init__(cursor)

    self.annotations = []
    for c in self.children:
      if isinstance(c, Annotation):
        self.annotations.append(" %s='%s'" % (c.name, c.value))

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'type': self.type,
      'typename': self.typename,
    }
    output = '<field %s%s/>\n' % (' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ]), ''.join(self.annotations))
    return output


class Union(Type):
  def __init__(self, cursor):
    super(Union, self).__init__(cursor)
    self.name = self.type

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
    }
    output = '<union %s>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self.children ])
    output += "\n</union>"
    return output


class Enum(Type):
  def __init__(self, cursor):
    super(Enum, self).__init__(cursor)
    self.name = self.type

    prev = None
    for c in self.children:
      if c.value is None:
        if prev is None:
          c.value = 0
        else:
          try:
            c.value = prev.value + 1
          except:
            pass
      prev = c

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
    }
    output = '<enum %s>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self.children ])
    output += "\n</enum>"
    return output


class EnumValue(Type):
  def __init__(self, cursor):
    super(EnumValue, self).__init__(cursor)

    if len(self.children) == 1:
      child = self.children[0]
      self.value = Sources.getchunk(child.extent)

      if self.value in MacroDefinition.macros:
        self.value = MacroDefinition.macros[self.value]

      if len(self.value) == 0:
        self.value = None
      elif self.value[0] == "'":
        self.value = ord(self.value[1])
      elif all([ c in '0123456789' for c in self.value]):
        self.value = eval(self.value)

    elif len(self.children) == 0:
      self.value = None
    else:
      self.value = None

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'value': self.value,
    }
    output = '<enum-value %s/>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    return output


class TranslationUnit(Type):
  def __init__(self, cursor):
    super(TranslationUnit, self).__init__(cursor)

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
    }
    output = '<translation-unit %s>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self.children ])
    output += "\n</translation-unit>"
    return output


class Annotation(Type):
  def __init__(self, cursor):
    super(Annotation, self).__init__(cursor)

    (self.name, self.value) = self.name.split(':')

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'value': self.value,
    }
    output = '<annotation %s/>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    return output


class ReturnType(Type):
  def __init__(self, cursor):
    super(ReturnType, self).__init__(cursor)
    self.name = 'output'
    self.type = Type.nameof(self.cursor.type.get_result())
    self.typename = Type.typenameof(self.cursor.type.get_result())

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'type': self.type,
      'typename': self.typename,
    }
    output = '<return-type %s/>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    return output


class Function(Type):
  def __init__(self, cursor):
    super(Function, self).__init__(cursor)

    self.name = self.name.split('(')[0]

    if len(self.children) > 0 and self.children[0].cursor.kind == CursorKind.TYPE_REF:
      self.children = self.children[1:]

    self.children = [ ReturnType(self.cursor) ] + self.children

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
    }
    output = '<function %s>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    output += "\n".join([ str(c).strip('\n') for c in self.children ])
    output += "\n</function>"
    return output


class Parameter(Type):
  def __init__(self, cursor):
    super(Parameter, self).__init__(cursor)

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'type': self.type,
      'typename': self.typename,
    }
    output = '<param %s/>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    return output


class MacroDefinition(Type):
  macros = {}

  def __init__(self, cursor):
    super(MacroDefinition, self).__init__(cursor)

    self.value = Sources.getchunk(Extent(cursor=cursor))

    match = re.search(r'(?P<name>%s\([^)]*\)|%s)' % (self.name, self.name), self.value)
    if match is not None:
      self.name = match.group('name')

    self.value = self.value.replace(self.name, '').strip('\\\n\t ')

    while self.value in MacroDefinition.macros:
      self.value = MacroDefinition.macros[self.value]

    self.value = xml.escape(self.value)

    MacroDefinition.macros[self.name] = self.value

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'value': self.value,
    }
    output = '<macro %s/>\n' % ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ])
    return output


class Unknown(Type):
  def __init__(self, cursor):
    super(Unknown, self).__init__(cursor)
    self.kind = str(self.cursor.kind).replace('CursorKind.', '').replace('_', '-').lower()

  def __repr__(self):
    attributes = {
      'extent': self.extent,
      'name': self.name,
      'type': self.type,
      'typename': self.typename,
    }
    output = '<%s %s>\n' % (self.kind, ' '.join([ "%s='%s'" % (k,xml.escape(str(v))) for k,v in attributes.items() ]))

    prev = self.cursor.extent.start
    for c in self.children:
      output += Sources.getchunk(Extent(start=prev, end=c.cursor.extent.start))
      output += str(c) + '\n'
      prev = c.cursor.extent.end

    output += Sources.getchunk(Extent(start=prev, end=self.cursor.extent.end))
    output += '</%s>' % self.kind
    return output
