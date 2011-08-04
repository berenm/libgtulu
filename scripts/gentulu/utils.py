# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

import re

def plain_text(node):
  return re.sub(r'\s*(?P<p>[,\.\?\!])\s*', r'\g<p> ', ' '.join([ l.strip() for s in node.itertext() for l in s.splitlines() if len(l.strip()) > 0 ])).strip()

def serialize(o, indent=''):
  string = ''

  if isinstance(o, list):
    for i in o:
      string += serialize(i, indent).strip("\n") + "\n"
  elif isinstance(o, set):
    for i in o:
      string += serialize(i, indent).strip("\n") + "\n"
  elif isinstance(o, dict):
    for (k, i) in o.items():
      string += indent + k + ':' + "\n"
      string += serialize(i, indent + '  ').strip("\n") + "\n"
  elif not isinstance(o, str) and not isinstance(o, unicode) and not isinstance(o, bool):
    string += indent + str(type(o)) + "\n"
    string += serialize(o.__dict__, indent + '  ').strip("\n") + "\n"
  else:
    string += indent + unicode(o).strip("\n") + "\n"

  return string

def smart_wrap(lines, count=120):
  if len(lines) == 0:
    return ""

  out = [ "" ]
  for line in lines:
    line = line.strip()
    while len(line) > 0:
      if len(line) > count:
        temp = line[:count]
        head = line[:temp.rfind(' ')]
        tail = line[len(head) + 1:]
        out.append(head)
        line = tail
      else:
        out.append(line)
        line = ""
    out.append("")
  return out[1:-1]
