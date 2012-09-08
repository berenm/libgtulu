# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE or copy at http://www.boost.org/LICENSE

import re
import logging

log = logging.getLogger(__name__)

# The words that are used in the declaration are isolated
words = [ '1D', '2D', '3D',
      'Accum', 'Active', 'Alpha', 'Are', 'Arrays', 'Array', 'Attachment', 'Attached', 'Attach', 'Attrib', 'Atomic', 'At', 'Address',
      'Base', 'Begin', 'Binary', 'Binding', 'Bind', 'Blend', 'Blit', 'Block', 'Boolean', 'Buffers', 'Buffer', 'Bitmap', 'Build', 'Barrier',
      'Callback', 'Check', 'Choose', 'Clamp', 'Clear', 'CLevent', 'Client', 'Color', 'Compiler', 'Compile', 'Compressed', 'Conditional', 'Context',
      'Compute', 'Control', 'Config', 'Convolution', 'Coord', 'Copy', 'Counter', 'Coverage', 'Create', 'Cull', 'Current', 'Curve', 'Call', 'Contour', 'Clip', 'Cylinder',
      'Data', 'Debug', 'Delete', 'Depth', 'Detach', 'Divisor', 'Double', 'Disable', 'Drawable', 'Draw', 'Destroy', 'Disk', 'Direct', 'Display', 'Dispatch',
      'Elements', 'Element', 'Enabled', 'Enable', 'End', 'Equation', 'Error', 'Extensions', 'Env', 'Edge', 'Eval', 'Event', 'Extension',
      'Face', 'Feedbacks', 'Feedback', 'Fence', 'Filter', 'Finish', 'Float', 'Flush', 'Format', 'Frag', 'Framebuffers', 'Framebuffer', 'From', 'Front', 'Func', 'Fog',
      'Font', 'Free', 'Flag', 'Frustum', 'FB',
      'Generate', 'Gen', 'Getn', 'Get', 'Graphics', 'GLX', 'GL', 'Group',
      'Hint', 'Histogram',
      'Image', 'Include', 'Indexed', 'Index', 'Indices', 'Indirect', 'Info', 'Instanced', 'Instance', 'Insert', 'Integer', 'Interleaved', 'Internalformat',
      'Internal', 'Is', 'Init', 'Import', 'Intro', 'Identity', 'ID', 'Invalidate', 'Interface',
      'Layer', 'Level', 'Line', 'Link', 'List', 'Location', 'Logic', 'Log', 'Light', 'Load', 'Look', 'Label',
      'Mapped', 'Map', 'Mask', 'Matrix', 'Message', 'Minmax', 'Min', 'Mipmap', 'Model', 'Mode', 'Multisample', 'Multi', 'Material', 'Mult', 'Make', 'Matrice', 'Mesh', 'Memory',
      'Named', 'Name', 'Normal', 'New', 'Nurbs', 'Next',
      'Object', 'Offset', 'Op', 'Ortho', 'Orientation',
      'Parameter', 'Patch', 'Pause', 'Pipelines', 'Pipeline', 'Pixels', 'Pixel', 'Pointer', 'Point', 'Pos', 'Polygon', 'Precision', 'Primitive', 'Program', 'Project', 'Provoking', 'Push', 'Prioritize',
      'Property', 'Pwl', 'Pixmap', 'Partial', 'Pass', 'Pbuffer', 'Perspective', 'Pick', 'Plane', 'Proc', 'Pop', 'Ptr',
      'Queries', 'Query', 'Quadric',
      'Range', 'Readn', 'Read', 'Release', 'Renderbuffers', 'Renderbuffer', 'Renderer', 'Render', 'Reset', 'Restart', 'Resume', 'Rotate', 'Resident', 'Raster', 'Rect', 'Resource',
      'Samplers', 'Sampler', 'Sample', 'Scissor', 'Secondary', 'Separable', 'Separate', 'Shaders', 'Shader', 'Shading', 'Size', 'Source', 'Stages', 'Stage', 'Status', 'Stencil', 'Stipple', 'Storage',
      'Store', 'String', 'Stream', 'Subroutines', 'Subroutine', 'Sub', 'Sync', 'Surface', 'Server', 'Style', 'State', 'Swap', 'Sphere', 'Shade', 'Selected', 'Select', 'Scale', 'Sampling',
      'Table', 'Textures', 'Texture', 'Tex', 'Transform', 'Translate', 'Tess', 'Transfer', 'Trim', 'Transpose', 'Through',
      'Uniforms', 'Uniform', 'Unmap', 'Use', 'Un',
      'Validate', 'Varyings', 'Varying', 'Vertex', 'Version', 'Viewport', 'Visual', 'View',
      'Wait', 'Width', 'Window',
      'X',
      'Zoom' ]

class Renamable(object):
  def __init__(self, prefixes=[], suffixes=[]):
    log.debug('renaming: %s' % self.name)

    new_name = self.name
    self.suffix = None
    for suffix in suffixes:
      if self.name.endswith(suffix):
        self.suffix = suffix
        new_name = re.sub(r'%s$' % suffix, '', new_name)
        break

    self.prefix = None
    for prefix in prefixes:
      if self.name.startswith(prefix):
        self.prefix = prefix
        new_name = re.sub(r'^%s' % prefix, '', new_name)
        break

    name_words = re.findall(r'(' + '|'.join(words) + ')', new_name)
    new_name = new_name.replace(''.join(name_words), '')
      
    # Then, we handle special i values that stand for 'indexed'
    new_name = re.sub(r'(.*)i_v$', r'_indexed#\1@vector@', new_name)
    
    # Then, we handle 'types' suffixes, as v/vector f/float d/double ubsi/integers
    new_name = re.sub(r'v$', r'@vector@', new_name)
    new_name = re.sub(r'f((?:@vector@)?)$', r'@float@\1', new_name)
    new_name = re.sub(r'd((?:@vector@)?)$', r'@double@\1', new_name)
    new_name = re.sub(r'(u?)b((?:@vector@)?)$', r'@\1int8@\2', new_name)
    new_name = re.sub(r'(u?)s((?:@vector@)?)$', r'@\1int16@\2', new_name)
    new_name = re.sub(r'(u?)i((?:@vector@)?)$', r'@\1int32@\2', new_name)
    new_name = re.sub(r'(u?)i?64((?:@vector@)?)$', r'@\1int64@\2', new_name)

    # Then, handle special I/P/L/N suffixes
    new_name = re.sub(r'I(\d?)@(u?)int', r'\1_integer@\2int', new_name)
    new_name = re.sub(r'P(\d?)@(u?)int', r'\1_packed@\2int', new_name)
    new_name = re.sub(r'N(\d?)@(u?)int', r'\1_normalized@\2int', new_name)
    new_name = re.sub(r'L(\d?)@double', r'\1_large@double', new_name)

    # Fix a weird declaration with both f and i suffix
    new_name = re.sub(r'f@int', r'_float@int', new_name)
    new_name = re.sub(r'([0-9](?:x[0-9])?)', r'_\1', new_name)

    # Replace isolation token with _ and lowecase first letter
    new_name = re.sub(r'#n#', r'_n##', new_name)

    # Handle remaning things
    new_name = re.sub(r'^.*IPointer', r'_integer', new_name)
    new_name = re.sub(r'^.*LPointer', r'_large_integer', new_name)
    new_name = re.sub(r'^.*IFormat', r'_integer', new_name)
    new_name = re.sub(r'^.*LFormat', r'_large_integer', new_name)
    new_name = re.sub(r'cLevent', r'cl_event', new_name)

    self.is_vector = r'@vector@' in new_name
    self.is_float = r'@float@' in new_name
    self.is_double = r'@double@' in new_name
    self.is_int8 = r'@int8@' in new_name
    self.is_int16 = r'@int16@' in new_name
    self.is_int32 = r'@int32@' in new_name
    self.is_int64 = r'@int64@' in new_name
    self.is_uint8 = r'@uint8@' in new_name
    self.is_uint16 = r'@uint16@' in new_name
    self.is_uint32 = r'@uint32@' in new_name
    self.is_uint64 = r'@uint64@' in new_name

    new_name = re.sub(r'@[^@]+@', r'', new_name)
    new_name = re.sub(r'#$', r'', new_name)
    
    # That's all, we are - almost - clean!
    new_name = '_'.join([ w.lower() for w in name_words]) + new_name
    new_name = new_name.replace('getn_', 'get_n_')
    new_name = new_name.replace('readn_', 'read_n_')
    
    self.new_name = new_name.strip('_')
    log.debug('result: %s' % self.new_name)
