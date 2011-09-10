/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 27 juil. 2010
 * @todo comment
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/program/base.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      void program_base::link() {
        fnc::gl_link_program::call(handle_);
      }

      void program_base::validate() {
        fnc::gl_validate_program::call(handle_);
      }

      void program_base::attach(gio::shader_base const& shader) {
        fnc::gl_attach_shader::call(handle_, *shader);
      }

      void program_base::detach(gio::shader_base const& shader) {
        fnc::gl_detach_shader::call(handle_, *shader);
      }
    } // namespace object

  } // namespace internal
} // namespace gtulu
