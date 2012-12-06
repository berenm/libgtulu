

/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 *
 */

#include "gtulu/namespaces.hpp"
#include "test2_program_format.hpp"

namespace gtulu {
  namespace internal {
    namespace format {
      namespace program {

        // #template#<declare_shader_source/>

        char const* test2_program_format::test2_fragment_shader_shader_format::source = "#version 330 core\n"
"// Distributed under the Boost Software License, Version 1.0.\n"
"// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE\n"
"uniform sampler2D background;\n"
"in vert {\n"
"  vec2 tex_coord;\n"
"} vertex;\n"
"out vec4 color;\n"
"void main() {\n"
"  color = texture(background, vertex.tex_coord * 2.0);\n"
"}\n"
;

        

        char const* test2_program_format::test2_vertex_shader_shader_format::source = "#version 330 core\n"
"// Distributed under the Boost Software License, Version 1.0.\n"
"// See accompanying file LICENSE or copy at http://www.boost.org/LICENSE\n"
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

        

      } // namespace program
    } // namespace format
  } // namespace internal
} // namespace gtulu

