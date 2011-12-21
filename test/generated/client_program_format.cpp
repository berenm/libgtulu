
/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 *
 */

#include "gtulu/namespaces.hpp"
#include "client_program_format.hpp"

namespace gtulu {
  namespace internal {
    namespace format {
      namespace program {

        // #template#<declare_shader_source/>

        char const* client_program_format::client_fragment_shader_shader_format::source = "#version 330 core\n"
"uniform usampler2D characters;\n"
"uniform usampler2D tiles;\n"
"uniform usampler2D tiles_color;\n"
"uniform bool use_tile;\n"
"uniform uvec2 tile_size;\n"
"uniform sampler3D tilesets;\n"
"in vert {\n"
"  vec2 coordinates;\n"
"} vertex;\n"
"out vec4 output_image;\n"
"void main() {\n"
"  vec4 c = texture(characters, vertex.coordinates);\n"
"  if (use_tile) {\n"
"    vec4 t = texture(tiles, vertex.coordinates);\n"
"    vec4 t_color = texture(tiles_color, vertex.coordinates);\n"
"    vec4 o = texture(tilesets, vec3(vertex.coordinates, t.r));\n"
"    o.r += t_color.r;\n"
"    o.g += t_color.g;\n"
"    o.b += t_color.b;\n"
"    output_image = o;\n"
"  } else {\n"
"    vec4 o = c;\n"
"    output_image = o;\n"
"  }\n"
"}\n"
;
        

        char const* client_program_format::client_vertex_shader_shader_format::source = "#version 330 core\n"
"in vec2 position;\n"
"in vec2 coordinates;\n"
"out vert {\n"
"  vec2 coordinates;\n"
"} vertex;\n"
"void main() {\n"
"  gl_Position = vec4(position, 0.0, 1.0);\n"
"  vertex.coordinates = coordinates;\n"
"}\n"
;
        
        ;

      } // namespace program
    } // namespace format
  } // namespace internal
} // namespace gtulu

