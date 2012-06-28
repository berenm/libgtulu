from clang.cindex import Index, CursorKind, TypeKind, Type

from types import Type, Element
from source import Sources, Extent

import os
import platform

blacklisted_field_types = ['c:@S@_ProtobufCMessage', 'protobuf_c_boolean']
blacklisted_field_patterns = ['_Filler']

def get_kind_name(kind):
    return str(kind).split('.')[-1].replace('_DECL', '').lower()

def get_typekind_name(kind):
    return str(kind).split('.')[-1].lower()

def resolve_utype(utype):
    # Workaround for size_t that is not really declared anywhere
    if utype.get_declaration().displayname == 'size_t':
        return ('builtin', 'size_t')

    lastname = ''
    while utype.kind == TypeKind.TYPEDEF:
        lastname = utype.get_declaration().displayname
        utype = utype.get_declaration().underlying_typedef_type

    if utype.kind == TypeKind.RECORD:
        uuuid = utype.get_declaration().get_usr()
        ukind = get_kind_name(utype.kind)

    elif utype.kind == TypeKind.UNEXPOSED:
        uuuid = utype.get_declaration().get_usr()
        ukind = get_kind_name(utype.get_declaration().kind)

    elif utype.kind == TypeKind.CONSTANTARRAY:
        (ukind, uuuid) = resolve_utype(utype.element_type)
        uuuid = uuuid + '[%s]' % utype.element_count

    elif utype.kind == TypeKind.POINTER:
        (ukind, uuuid) = resolve_utype(utype.get_pointee())
        uuuid = uuuid + '*'

    elif utype.kind == TypeKind.INVALID:
        (ukind, uuuid) = (utype.kind, '?')

    else:
        uuuid = lastname
        ukind = 'builtin'

        if len(lastname) == 0:
            uuuid = get_typekind_name(utype.kind)

    return (ukind, uuuid)


def collect(cursor, tree=None, indent=0):
    if tree == None:
        tree = {'typedef':{}, 'struct':{'typedef':{}}, 'enum':{'typedef':{}}, 'union':{'typedef':{}}}
    skip_children = False

    uuid = cursor.get_usr()
    if cursor.kind == CursorKind.TYPEDEF_DECL:
        (ukind, uuuid) = resolve_utype(cursor.type)
        tree['typedef'][uuid] = {'name': cursor.displayname, 'file': str(cursor.location.file), 'underlying': {'kind': ukind, 'uuid': uuuid}}

        if ukind in ['struct', 'enum', 'union']:
            tree[ukind]['typedef'][uuuid] = uuid

    elif cursor.kind == CursorKind.STRUCT_DECL:
        tree['struct'][uuid] = {'name': cursor.displayname, 'file': str(cursor.location.file), 'fields': []}

        for c in cursor.get_children():
            if c.type.kind == TypeKind.RECORD:
                for cc in c.get_children():
                    if cc.type.kind == TypeKind.RECORD:
                        continue

                    (ukind, uuuid) = resolve_utype(cc.type)
                    if uuuid not in blacklisted_field_types and not any([ p in cc.displayname for p in blacklisted_field_patterns]):
                        tree['struct'][uuid]['fields'].append({'name': cc.displayname, 'type': {'kind': ukind, 'uuid': uuuid}})
            else:
                if c.type.kind == TypeKind.INVALID:
                    continue

                (ukind, uuuid) = resolve_utype(c.type)
                if uuuid not in blacklisted_field_types and not any([ p in c.displayname for p in blacklisted_field_patterns]):
                    tree['struct'][uuid]['fields'].append({'name': c.displayname, 'type': {'kind': ukind, 'uuid': uuuid}})

    elif cursor.kind == CursorKind.ENUM_DECL:
        tree['enum'][uuid] = {'name': cursor.displayname, 'file': str(cursor.location.file), 'values': []}

        for c in cursor.get_children():
            tree['enum'][uuid]['values'].append(c.displayname)

    elif cursor.kind == CursorKind.UNION_DECL:
        tree['union'][uuid] = {'name': cursor.displayname, 'file': str(cursor.location.file), 'elements': []}

        for c in cursor.get_children():
            if c.type.kind == TypeKind.RECORD:
                continue

            (ukind, uuuid) = resolve_utype(c.type)
            tree['union'][uuid]['elements'].append({'name': c.displayname, 'type': {'kind': ukind, 'uuid': uuuid}})

    elif cursor.kind in [CursorKind.TYPE_REF, CursorKind.FIELD_DECL, CursorKind.INTEGER_LITERAL, CursorKind.CHARACTER_LITERAL, \
                         CursorKind.STRING_LITERAL, CursorKind.ENUM_CONSTANT_DECL, CursorKind.VAR_DECL, CursorKind.UNEXPOSED_ATTR, \
                         CursorKind.TRANSLATION_UNIT, CursorKind.FUNCTION_DECL, CursorKind.PARM_DECL, CursorKind.PAREN_EXPR, \
                         CursorKind.BINARY_OPERATOR, CursorKind.UNEXPOSED_EXPR, CursorKind.CSTYLE_CAST_EXPR]:
        pass

    else:
        print 'kind: ', cursor.kind, cursor.displayname

    for c in cursor.get_children():
        tree.update(collect(c, tree, indent))

    return tree

def print_message(d):
    if d.severity == 0:
        print '%s:%d: debug: %s' % (d.location.file, d.location.line, d.spelling)
    elif d.severity == 1:
        print '%s:%d: info: %s' % (d.location.file, d.location.line, d.spelling)
    elif d.severity == 2:
        print '%s:%d: note: %s' % (d.location.file, d.location.line, d.spelling)
    elif d.severity == 3:
        print '%s:%d: warning: %s' % (d.location.file, d.location.line, d.spelling)
    elif d.severity == 4:
        print '%s:%d: error: %s' % (d.location.file, d.location.line, d.spelling)
    else:
        print '%s:%d: ?: %s' % (d.location.file, d.location.line, d.spelling)

def parse(filename, include_paths=[], defines=[]):
    print '.. parsing %s...' % filename

    index = Index.create()

    args = [filename]
    args.extend(['-I' + i for i in include_paths])
    args.extend(['-D' + d for d in defines])
    tu = index.parse(None, args)
    if not tu:
        parser.error("unable to load input")

    if len(tu.diagnostics) > 0:
        print '.. clang output:'
        for d in tu.diagnostics:
            print_message(d)

    tree = collect(tu.cursor)
    for (k, s) in tree['struct'].items():
        if k == 'typedef':
            continue
        s['name'] = tree['typedef'][tree['struct']['typedef'][k]]['name']

    for (k, e) in tree['enum'].items():
        if k == 'typedef':
            continue
        e['name'] = tree['typedef'][tree['enum']['typedef'][k]]['name']

    for (k, u) in tree['union'].items():
        if k == 'typedef':
            continue
        u['name'] = tree['typedef'][tree['union']['typedef'][k]]['name']

    return tree

def debug(filename, include_paths=[], defines=[]):
    print '.. debugging %s...' % filename

    index = Index.create()

    args = [filename]
    args.extend(['-I' + i for i in include_paths])
    args.extend(['-D' + d for d in defines])
    tu = index.parse(None, args, [], 0x43)
    if not tu:
        parser.error("unable to load input")

    if len(tu.diagnostics) > 0:
        print '.. clang output:'
        for d in tu.diagnostics:
            print_message(d)

    files = {}
    print Element.parse(tu.cursor)
