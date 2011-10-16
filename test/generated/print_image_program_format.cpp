
/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 *
 */

#include "gtulu/namespaces.hpp"
#include "print_image_program_format.hpp"

namespace gtulu {
  namespace internal {
    namespace format {
      namespace program {

        // #template#<declare_shader_source/>

        char const* print_image_program_format::print_image_fragment_shader_shader_format::source = "#version 330 core\n"
"uniform sampler2D background;\n"
"in vert {\n"
"  vec2 tex_coord;\n"
"} vertex;\n"
"out vec4 output_image;\n"
"void main() {\n"
"  output_image = texture(background, vertex.tex_coord);\n"
"}\n"
;
        

        char const* print_image_program_format::print_image_vertex_shader_shader_format::source = "#version 330 core\n"
"in vec2 position;\n"
"in vec2 texture_position;\n"
"out vert {\n"
"  vec2 tex_coord;\n"
"} vertex;\n"
"void main() {\n"
"  gl_Position = vec4(position, 0.0, 1.0);\n"
"  vertex.tex_coord = texture_position;\n"
"}\n"
;
        
        ;

      } // namespace program
    } // namespace format
  } // namespace internal
} // namespace gtulu

