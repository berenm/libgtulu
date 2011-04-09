#!/usr/bin/python
# -*- coding: utf-8 -*-

# Distributed under the Boost Software License, Version 1.0.
# See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt

import re

from parameter import parameter

class function:
  def __init__(self, namespace, string):
    string = string.replace("GLAPI", "")
    string = string.strip("); ")
    [self.output, string] = string.split("APIENTRY")
    [self.old_name, self.old_parameters] = string.split("(")

    self.output = self.output.strip(" ")
    self.old_name = self.old_name.strip(" ")
    self.old_parameters = self.old_parameters.strip(" ")

    self.can_template = False
    self.new_parameters = []
    if self.old_parameters != "void":
        for param_string in self.old_parameters.split(","):
            p = parameter(param_string.strip(" "))
            self.new_parameters.append(p)
            if p.is_template:
              self.can_template = True

    self.namespace = namespace
    
    if self.output != "void":
      self.var_stmt = "%s out = " % (self.output)
      self.ret_stmt = "return out;"
    else:
      self.var_stmt = ""
      self.ret_stmt = ""

    self.is_arb = "ARB" in self.old_name
    
    # Cleaning the function name
    new_name = re.sub(r'ARB$', r'', self.old_name)
    
    # The words that are used in the function are isolated
    words = [ 'Active', 'Arrays', 'Array', 'Attachment', 'Attached', 'Attach', 'Attrib', 
              'Base', 'Begin', 'Binary', 'Binding', 'Bind', 'Blend', 'Blit', 'Block', 'Boolean', 'Buffers', 'Buffer', 
              'Callback', 'Check', 'Clamp', 'Clear', 'CLevent', 'Client', 'Color', 'Compiler', 'Compile', 'Compressed', 'Conditional', 'Control', 'Convolution', 'Coord', 'Copy', 'Counter', 'Coverage', 'Create', 'Cull', 
              'Data', 'Debug', 'Delete', 'Depth', 'Detach', 'Divisor', 'Double', 'Disable', 'Draw', 
              'Elements', 'Enabled', 'Enable', 'End', 'Equation', 'Error', 
              'Face', 'Feedbacks', 'Feedback', 'Fence', 'Filter', 'Finish', 'Float', 'Flush', 'Format', 'Frag', 'Framebuffers', 'Framebuffer', 'From', 'Front', 'Func', 
              'Generate', 'Gen', 'Get', 'Graphics', 
              'Hint', 'Histogram', 
              'Image', 'Include', 'Indexed', 'Index', 'Indices', 'Indirect', 'Info', 'Instanced', 'Insert', 'Integer', 'Is', 
              'Layer', 'Level', 'Line', 'Link', 'Location', 'Logic', 'Log', 
              'Mapped', 'Map', 'Mask', 'Matrix', 'Message', 'Minmax', 'Min', 'Mipmap', 'Mode', 'Multisample', 'Multi', 
              'Named', 'Name', 'Normal', 
              'Object', 'Offset', 'Op', 
              'Parameter', 'Patch', 'Pause', 'Pipelines', 'Pipeline', 'Pixels', 'Pixel', 'Pointer', 'Point', 'Polygon', 'Precision', 'Primitive', 'Program', 'Provoking', 
              'Queries', 'Query', 
              'Range', 'Read', 'Release', 'Renderbuffers', 'Renderbuffer', 'Render', 'Reset', 'Restart', 'Resume', 
              'Samplers', 'Sampler', 'Sample', 'Scissor', 'Secondary', 'Separable', 'Separate', 'Shaders', 'Shader', 'Shading', 'Size', 'Source', 'Stages', 'Stage', 'Status', 'Stencil', 'Stipple', 'Storage', 
              'Store', 'String', 'Stream', 'Subroutines', 'Subroutine', 'Sub', 'Sync', 
              'Table', 'Textures', 'Texture', 'Tex', 'Transform', 
              'Uniforms', 'Uniform', 'Unmap', 'Use', 
              'Validate', 'Varyings', 'Varying', 'Vertex', 'Viewport', 
              'Wait', 'Width' ]
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

    # Fix a weird function with both f and i suffix
    new_name = re.sub(r'#f@int', r'#_float@int', new_name)
    
    new_name = re.sub(r'#([0-9])', r'#_\1', new_name)

    # Replace isolation token with _ and lowecase first letter
    new_name = re.sub(r'gl#', r'gl##', new_name)
    new_name = re.sub(r'#n#', r'_n##', new_name)
    new_name = re.sub(r'##([A-Z])', lambda m: '_' + m.group(1).lower(), new_name)
    new_name = re.sub(r'#_', r'_', new_name)

    # Handle remaning things
    new_name = re.sub(r'D#Multisample', r'D_multisample', new_name)
    new_name = re.sub(r'#I#Pointer', r'_pointer_integer', new_name)
    new_name = re.sub(r'#L#Pointer', r'_large_pointer_integer', new_name)
    new_name = re.sub(r'([1-4])D', r'\1d', new_name)
    
    new_name = re.sub(r'cLevent', r'cl_event', new_name)
    
    self.isvector = r'@vector@' in new_name
    self.isfloat = r'@float@' in new_name
    self.isdouble = r'@double@' in new_name
    self.isint8 = r'@int8@' in new_name
    self.isint16 = r'@int16@' in new_name
    self.isint32 = r'@int32@' in new_name
    self.isint64 = r'@int64@' in new_name
    self.isuint8 = r'@uint8@' in new_name
    self.isuint16 = r'@uint16@' in new_name
    self.isuint32 = r'@uint32@' in new_name
    self.isuint64 = r'@uint64@' in new_name
    
    new_name = re.sub(r'@[^@]+@', r'', new_name)
    new_name = re.sub(r'#$', r'', new_name)

    # That's all, we are clean!
    self.new_name = new_name

    std_args = []
    std_call = []
    std_debg = []
    tpl_pars = []
    tpl_args = []
    tpl_call = []
    tpl_debg = []
    
    for p in self.new_parameters:
      if p.name != "":
        std_args.append("%s%s %s_in" % (p.new_type, p.type_modifier, p.name))
        if p.new_type == "bool":
          std_call.append("(%s_in ? 1 : 0)" % (p.name))
        elif p.is_template:
          std_call.append("::std::uint32_t(%s_in)" % (p.name))
        else:
          std_call.append("%s_in" % (p.name))
        std_debg.append("\"%s: '\" << %s_in << \"'\"" % (p.name, p.name))
        
        if p.is_template:
          tpl_pars.append("typename %s_t" % (p.name))
          tpl_call.append("%s_t::value" % (p.name))
          tpl_debg.append("\"%s: '\" << %s_t::name::value << \"'\"" % (p.name, p.name))
        else:
          tpl_args.append("%s%s %s_in" % (p.new_type, p.type_modifier, p.name))
          if p.new_type == "bool":
            tpl_call.append("(%s_in ? 1 : 0)" % (p.name))
          else:
            tpl_call.append("%s_in" % (p.name))
          tpl_debg.append("\"%s: '\" << %s_in << \"'\"" % (p.name, p.name))
        
    if len(tpl_debg) == 0:
      tpl_debg.append("\"\"")
    if len(std_debg) == 0:
      std_debg.append("\"\"")
    
    self.std_args = ", ".join(std_args)
    self.std_call = ", ".join(std_call)
    self.std_debg = " \", \" ".join(std_debg)
    self.tpl_pars = ", ".join(tpl_pars)
    self.tpl_args = ", ".join(tpl_args)
    self.tpl_call = ", ".join(tpl_call)
    self.tpl_debg = " \", \" ".join(tpl_debg)
    
  def __repr__(self):
    return """function { %s }""" % (self.__dict__)
#  new_parameters: %(new_parameters)s
  
  def __str__(self):
    string  = "              inline static %(output)s call(%(std_args)s) {\n" % (self.__dict__)
    string += "                __gl_debug << \"call %(old_name)s \" %(std_debg)s;\n" % (self.__dict__)
    string += "                %(var_stmt)s%(old_name)s(%(std_call)s);\n" % (self.__dict__)
    string += "                __gl_check_error;\n"
    string += "                %(ret_stmt)s\n" % (self.__dict__)
    string += "              }\n"
    if self.can_template:
      string += "              template< %(tpl_pars)s >\n" % (self.__dict__)
      string += "              inline static %(output)s call(%(tpl_args)s) {\n" % (self.__dict__)
      string += "                __gl_debug << \"call %(old_name)s \" %(tpl_debg)s;\n" % (self.__dict__)
      string += "                %(var_stmt)s%(old_name)s(%(tpl_call)s);\n" % (self.__dict__)
      string += "                __gl_check_error;\n"
      string += "                %(ret_stmt)s\n" % (self.__dict__)
      string += "              }\n"
    return string

  def __eq__(self, other):
    return self.__hash__() == other.__hash__()
  
  def __hash__(self):
    hash = self.new_name.__hash__()
    if self.isvector:
      hash = hash ^ (0x1 << 1)
    if self.isfloat:
      hash = hash ^ (0x1 << 1)
    if self.isdouble:
      hash = hash ^ (0x1 << 2)
    if self.isint8:
      hash = hash ^ (0x1 << 3)
    if self.isint16:
      hash = hash ^ (0x1 << 4)
    if self.isint32:
      hash = hash ^ (0x1 << 5)
    if self.isint64:
      hash = hash ^ (0x1 << 6)
    if self.isuint8:
      hash = hash ^ (0x1 << 7)
    if self.isuint16:
      hash = hash ^ (0x1 << 8)
    if self.isuint32:
      hash = hash ^ (0x1 << 9)
    if self.isuint64:
      hash = hash ^ (0x1 << 10)
    return hash 
      
