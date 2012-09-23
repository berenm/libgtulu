/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 *
 */

#include "gtulu/namespaces.hpp"
#include "plot_image_program_format.hpp"

namespace gtulu {
  namespace internal {
    namespace format {
      namespace program {

        // #template#<declare_shader_source/>

        char const* plot_image_program_format::plot_image_fragment_shader_shader_format::source = "#version 330 core\n"
                                                                                                  "out vec4 output_image;\n"
                                                                                                  "void main() {\n"
                                                                                                  "  vec2 coord = (gl_PointCoord * 2.0f - vec2(1.0f, 1.0f));\n"
                                                                                                  "  output_image = vec4(1.0, 0.0, 0.0, 1.0f - smoothstep(0.5f, 1.0f, dot(coord, coord)));\n"
                                                                                                  "}\n"
        ;

        char const* plot_image_program_format::plot_image_vertex_shader_shader_format::source = "#version 330 core\n"
                                                                                                "in vec2 position;\n"
                                                                                                "float almostIdentity(float x, float m, float n) {\n"
                                                                                                "  if(x > m)\n"
                                                                                                "    return x;\n"
                                                                                                "  float a = 2.0f * n - m;\n"
                                                                                                "  float b = 2.0f * m - 3.0f * n;\n"
                                                                                                "  float t = x / m;\n"
                                                                                                "  return (a * t + b) * t * t + n;\n"
                                                                                                "}\n"
                                                                                                "void main() {\n"
                                                                                                "  float factor = smoothstep(0.3f, 0.6f, (-position.y + 1.0) / 2.0);\n"
                                                                                                "  gl_PointSize = almostIdentity(factor * 20.0f, 50.0f, 0.001f);\n"
                                                                                                "  gl_Position = vec4(position, 0.0, 1.0);\n"
                                                                                                "}\n"
        ;

      } // namespace program
    } // namespace format
  } // namespace internal
} // namespace gtulu
