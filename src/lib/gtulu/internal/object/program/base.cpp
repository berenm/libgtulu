/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/object/program/base.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      void program_base::link() {
        fct::gl_link_program::call(handle_);
      }

      void program_base::validate() {
        fct::gl_validate_program::call(handle_);
      }

      void program_base::attach(obj::shader_base const& shader) {
        fct::gl_attach_shader::call(handle_, *shader);
      }

      void program_base::detach(obj::shader_base const& shader) {
        fct::gl_detach_shader::call(handle_, *shader);
      }
    } // namespace object

  } // namespace internal
} // namespace gtulu
