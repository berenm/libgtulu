/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#include "gtulu/internal/objects/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      void shader_base::compile() {
        __gl_debug(glCompileShader, (handle_));
        glCompileShader(handle_);
        __gl_check_error
      }

      void shader_base::set_source(const char* code) {
        __gl_debug(glShaderSource, (handle_)(1)(static_cast< const GLchar** > (&code))(NULL));
        glShaderSource(handle_, 1, static_cast< const GLchar** > (&code), NULL);
        __gl_check_error
      }
    } // namespace objects

  } // namespace internal
} // namespace gtulu
