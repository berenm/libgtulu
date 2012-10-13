from clang.cindex import Index, CursorKind, TypeKind, Type

from types import Type, Element
from source import Sources, Extent

class Diagnostic(object):
  def __init__(self, diagnostic):
    super(Diagnostic, self).__init__()
    self.file = diagnostic.location.file
    self.line = diagnostic.location.line
    self.spelling = diagnostic.spelling
    if diagnostic.severity == 0:
      self.level = 'debug'
    elif diagnostic.severity == 1:
      self.level = 'info'
    elif diagnostic.severity == 2:
      self.level = 'note'
    elif diagnostic.severity == 3:
      self.level = 'warning'
    elif diagnostic.severity == 4:
      self.level = 'error'
    else:
      self.level = '?'

  def __str__(self):
    return '%(file)s:%(line)s: %(level)s: %(spelling)s' % self.__dict__

class Indexer(object):
  def __init__(self, filename, include_paths=[], defines=[]):
    super(Indexer, self).__init__()
    self.filename = filename

    self.index = Index.create()

    arguments = []
    arguments.extend(['-I' + i for i in include_paths])
    arguments.extend(['-D' + d for d in defines])
    arguments.extend(['-x', 'c++'])
    arguments.extend(['-std=c++11'])
    arguments.extend([filename])

    print ' '.join(arguments)
    self.translation_unit = self.index.parse(None, arguments, [], 0x43)
    if not self.translation_unit:
      self.root = None

    if len(self.translation_unit.diagnostics) > 0:
      print '.. clang output:'
      for d in self.translation_unit.diagnostics:
        print Diagnostic(d)

    self.root = Element.parse(self.translation_unit.cursor)

  def filter(self, predicate):
    def filter_node(n):
      n.children = [ filter_node(c) for c in n.children if predicate(c) ]
      return n

    filter_node(self.root)

  def nodes(self):
    nodes = [self.root]
    while len(nodes) > 0:
      n = nodes.pop()
      nodes.extend(n.children)
      yield n

  def __str__(self):
    return str(self.root)


class FilteringIndexer(Indexer):
  def __init__(self, predicate, filename, include_paths=[], defines=[]):
    super(FilteringIndexer, self).__init__(filename, include_paths, defines)

    self.filter(predicate)


class FileFilteringIndexer(FilteringIndexer):
  def __init__(self, filename, include_paths=[], defines=[]):
    self.predicate = lambda n: str(n.cursor.extent.start.file) == filename or str(n.cursor.extent.end.file) == filename

    super(FileFilteringIndexer, self).__init__(self.predicate, filename, include_paths, defines)
