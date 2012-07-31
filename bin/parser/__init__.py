from clang.cindex import Index, CursorKind, TypeKind, Type

from types import Type, Element
from source import Sources, Extent
from index import Indexer, FilteringIndexer, FileFilteringIndexer

import os
import subprocess

def uncrustify_file(file_name):
  root = os.path.join(subprocess.Popen(['git', 'rev-parse', '--show-toplevel'], stdout=subprocess.PIPE, cwd=os.path.dirname(file_name)).communicate()[0]).strip()
  config = os.path.join(root, '.uncrustifyrc')

  if not os.path.exists(config):
    root = os.path.expanduser(os.path.expandvars('~'))
    config = os.path.join(root, '.uncrustifyrc')

  if file_name is not None:
    uncrustify_command = 'uncrustify -c %s --replace --no-backup %s' % (config, file_name)
    uncrustify_process = subprocess.Popen(uncrustify_command, stdout=subprocess.PIPE, stderr=subprocess.PIPE, shell=True)
    (new_contents, error_output) = uncrustify_process.communicate()
