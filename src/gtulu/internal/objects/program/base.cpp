/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/program/base.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      void program_base::link() {
        fnc::gl_link_program::call(handle_);
      }

      void program_base::validate() {
        fnc::gl_validate_program::call(handle_);
      }

      void program_base::attach(const gio::shader_base& shader) {
        fnc::gl_attach_shader::call(handle_, *shader);
      }

      void program_base::detach(const gio::shader_base& shader) {
        fnc::gl_detach_shader::call(handle_, *shader);
      }
    } // namespace objects

  } // namespace internal
} // namespace gtulu
