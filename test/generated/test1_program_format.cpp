
/**
 * @file
 */

#include "test1_program_format.hpp"

namespace gtulu {
  namespace internal {
    namespace formats {
      namespace program {

        // #template#<declare_shader_source/>

        char const* test1_program_format::test1_fragment_shader_shader_format::source = "#version 330 core\n"
"uniform sampler2D background;\n"
"in vert {\n"
"  vec2 tex_coord;\n"
"} vertex;\n"
"out vec4 color;\n"
"void main() {\n"
"  color = texture(background, vertex.tex_coord);\n"
"}\n"
;
        

        char const* test1_program_format::test1_vertex_shader_shader_format::source = "#version 330 core\n"
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
    } // namespace formats
  } // namespace internal
} // namespace gtulu

