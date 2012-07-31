/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/object/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      void shader_base::compile() {
        fct::compile_shader< >::call(handle_);
      }

      void shader_base::set_source(char const* code) {
        fct::shader_source< >::call(handle_, 1, static_cast< GLchar const** >(&code), NULL);
      }
    } // namespace object

  } // namespace internal
} // namespace gtulu
