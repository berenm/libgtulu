# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

import re

# The words that are used in the declaration are isolated
words = [ '1D', '2D', '3D',
      'Accum', 'Active', 'Alpha', 'Are', 'Arrays', 'Array', 'Attachment', 'Attached', 'Attach', 'Attrib', 'At', 'Address',
      'Base', 'Begin', 'Binary', 'Binding', 'Bind', 'Blend', 'Blit', 'Block', 'Boolean', 'Buffers', 'Buffer', 'Bitmap', 'Build',
      'Callback', 'Check', 'Choose', 'Clamp', 'Clear', 'CLevent', 'Client', 'Color', 'Compiler', 'Compile', 'Compressed', 'Conditional', 'Context',
      'Control', 'Config', 'Convolution', 'Coord', 'Copy', 'Counter', 'Coverage', 'Create', 'Cull', 'Current', 'Curve', 'Call', 'Contour', 'Clip', 'Cylinder',
      'Data', 'Debug', 'Delete', 'Depth', 'Detach', 'Divisor', 'Double', 'Disable', 'Drawable', 'Draw', 'Destroy', 'Disk', 'Direct', 'Display',
      'Elements', 'Element', 'Enabled', 'Enable', 'End', 'Equation', 'Error', 'Extensions', 'Env', 'Edge', 'Eval', 'Event', 'Extension',
      'Face', 'Feedbacks', 'Feedback', 'Fence', 'Filter', 'Finish', 'Float', 'Flush', 'Format', 'Frag', 'Framebuffers', 'Framebuffer', 'From', 'Front', 'Func', 'Fog',
      'Font', 'Free', 'Flag', 'Frustum', 'FB',
      'Generate', 'Gen', 'Get', 'Graphics', 'GLX', 'GL',
      'Hint', 'Histogram',
      'Image', 'Include', 'Indexed', 'Index', 'Indices', 'Indirect', 'Info', 'Instanced', 'Insert', 'Integer', 'Interleaved', 'Is', 'Init', 'Import', 'Intro', 'Identity', 'ID',
      'Layer', 'Level', 'Line', 'Link', 'List', 'Location', 'Logic', 'Log', 'Light', 'Load', 'Look',
      'Mapped', 'Map', 'Mask', 'Matrix', 'Message', 'Minmax', 'Min', 'Mipmap', 'Model', 'Mode', 'Multisample', 'Multi', 'Material', 'Mult', 'Make', 'Matrice', 'Mesh',
      'Named', 'Name', 'Normal', 'New', 'Nurbs', 'Next',
      'Object', 'Offset', 'Op', 'Ortho', 'Orientation',
      'Parameter', 'Patch', 'Pause', 'Pipelines', 'Pipeline', 'Pixels', 'Pixel', 'Pointer', 'Point', 'Pos', 'Polygon', 'Precision', 'Primitive', 'Program', 'Project', 'Provoking', 'Push', 'Prioritize',
      'Property', 'Pwl', 'Pixmap', 'Partial', 'Pass', 'Pbuffer', 'Perspective', 'Pick', 'Plane', 'Proc',
      'Queries', 'Query', 'Quadric',
      'Range', 'Read', 'Release', 'Renderbuffers', 'Renderbuffer', 'Renderer', 'Render', 'Reset', 'Restart', 'Resume', 'Rotate', 'Resident', 'Raster', 'Rect',
      'Samplers', 'Sampler', 'Sample', 'Scissor', 'Secondary', 'Separable', 'Separate', 'Shaders', 'Shader', 'Shading', 'Size', 'Source', 'Stages', 'Stage', 'Status', 'Stencil', 'Stipple', 'Storage',
      'Store', 'String', 'Stream', 'Subroutines', 'Subroutine', 'Sub', 'Sync', 'Surface', 'Server', 'Style', 'State', 'Swap', 'Sphere', 'Shade', 'Selected', 'Select', 'Scale', 'Sampling',
      'Table', 'Textures', 'Texture', 'Tex', 'Transform', 'Translate', 'Tess', 'Transfer', 'Trim', 'Transpose', 'Through',
      'Uniforms', 'Uniform', 'Unmap', 'Use', 'Un',
      'Validate', 'Varyings', 'Varying', 'Vertex', 'Version', 'Viewport', 'Visual',
      'Wait', 'Width', 'Window',
      'X',
      'Zoom' ]

class renamable(object):
  def __init__(self):
    new_name = self.name
    if self.name.endswith('ARB'):
      self.is_arb = True
      self.is_ext = False
      new_name = re.sub(r'ARB$', r'', new_name)
    elif self.name.endswith('EXT'):
      self.is_arb = False
      self.is_ext = True
      new_name = re.sub(r'EXT$', r'', new_name)

    if self.name.startswith('glu'):
      self.is_gl = False
      self.is_glX = False
      self.is_glu = True
      new_name = re.sub(r'^glu', r'#', new_name)
    elif self.name.startswith('glX'):
      self.is_gl = False
      self.is_glX = True
      self.is_glu = False
      new_name = re.sub(r'^glX', r'#', new_name)
    elif self.name.startswith('gl'):
      self.is_gl = True
      self.is_glX = False
      self.is_glu = False
      new_name = re.sub(r'^gl', r'#', new_name)

    new_name = re.sub(r'(' + '|'.join(words) + ')', r'#\1#', new_name)

    # Then, we handle special i values that stand for 'indexed'
    new_name = re.sub(r'#([^#]*)i_v$', r'##Indexed#\1@vector@', new_name)

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
    new_name = re.sub(r'#f@int', r'#_float@int', new_name)

    new_name = re.sub(r'#([0-9])', r'#_\1', new_name)

    # Replace isolation token with _ and lowecase first letter
    new_name = re.sub(r'gl#', r'gl##', new_name)
    new_name = re.sub(r'#n#', r'_n##', new_name)
    new_name = re.sub(r'##([A-Z]+)', lambda m: '_' + m.group(1).lower(), new_name)
    new_name = re.sub(r'#_', r'_', new_name)

    # Handle remaning things
    new_name = re.sub(r'D#Multisample', r'D_multisample', new_name)
    new_name = re.sub(r'#I#Pointer', r'_pointer_integer', new_name)
    new_name = re.sub(r'#L#Pointer', r'_large_pointer_integer', new_name)
    new_name = re.sub(r'#_([1-4])D', r'_\1d', new_name)

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

    # That's all, we are clean!
    self.new_name = new_name.strip('_')
