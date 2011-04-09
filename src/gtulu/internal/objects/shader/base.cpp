/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 27 juil. 2010
 * @todo comment
 */

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      void shader_base::compile() {
        fnc::gl_compile_shader::call(handle_);
      }

      void shader_base::set_source(const char* code) {
        fnc::gl_shader_source::call(handle_, 1, static_cast< const GLchar** > (&code), NULL);
      }
    } // namespace objects

  } // namespace internal
} // namespace gtulu
