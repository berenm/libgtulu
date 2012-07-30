import os

class Extent(object):
  def __init__(self, **kwargs):
    super(Extent, self).__init__()

    if 'cursor' in kwargs:
      self._start = kwargs['cursor'].extent.start
      self._end = kwargs['cursor'].extent.end
    elif 'extent' in kwargs:
      self._start = kwargs['extent'].start
      self._end = kwargs['extent'].end
    elif 'start' in kwargs and 'end' in kwargs:
      self._start = kwargs['start']
      self._end = kwargs['end']
    else:
      raise Exception

    self._start_file = os.path.basename(str(self._start.file))
    self._end_file = os.path.basename(str(self._end.file))

  @property
  def splitted(self):
    return str(self._start.file) != str(self._end.file)

  @property
  def start(self):
    return self._start

  @property
  def end(self):
    return self._end

  def __repr__(self):
    if not self.splitted:
      return '%s[%d:%d,%d:%d]' % (self._start_file, self._start.line, self._start.column, self._end.line, self._end.column)
    else:
      return '%s[%d:%d],%s[%d:%d]' % (self._start_file, self._start.line, self._start.column, self._end_file, self._end.line, self._end.column)


class SourceManager(object):
  def __init__(self):
    super(SourceManager, self).__init__()

    self._files = {}

  def linesof(self, filename):
    if filename is None:
      return []

    filename = str(filename)
    if not filename in self._files:
      with open(str(filename), 'r') as f:
        self._files[filename] = [l for l in f]

    return self._files[filename]

  def chunk_to_end(self, start):
    output = ''
    lines = self.linesof(start.file)
    if len(lines) == 0:
      return ''

    start_line = start.line - 1
    start_column = start.column - 1
    end_line = len(lines)

    output += lines[start_line][start_column:]
    for l in range(start_line + 1, end_line):
      output += lines[l]

    return output

  def chunk_from_start(self, end):
    output = ''
    lines = self.linesof(end.file)
    if len(lines) == 0:
      return ''

    start_line = 0
    end_line = end.line - 1
    end_column = end.column - 1

    for l in range(0, end_line - 1):
      output += lines[l]
    output += lines[end_line][:end_column]

    return output

  def chunk(self, start, end):
    output = ''
    lines = self.linesof(start.file)
    if len(lines) == 0:
      return ''

    start_line = start.line - 1
    start_column = start.column - 1
    end_line = end.line - 1
    end_column = end.column - 1

    if start_line != end_line:
      output += lines[start_line][start_column:]
      for l in range(start_line + 1, end_line):
        output += lines[l]
      output += lines[end_line][:end_column]
    else:
      output += lines[start_line][start_column:end_column]

    return output.strip(' \n')

  def getchunk(self, extent):
    if extent.splitted:
      return self.chunk_to_end(extent.start) + self.chunk_from_start(extent.end)
    else:
      return self.chunk(extent.start, extent.end)

Sources = SourceManager()
