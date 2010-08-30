/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#include "gtulu/internal/objects/program/base.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      void program_base::link() {
        __gl_debug(glLinkProgram, (handle_));
        glLinkProgram(handle_);
        __gl_check_error
      }

      void program_base::validate() {
        __gl_debug(glValidateProgram, (handle_));
        glValidateProgram(handle_);
        __gl_check_error
      }

      void program_base::attach(const gio::shader_base& shader) {
        __gl_debug(glAttachShader, (handle_)(*shader));
        glAttachShader(handle_, *shader);
        __gl_check_error
      }

      void program_base::detach(const gio::shader_base& shader) {
        __gl_debug(glDetachShader, (handle_)(*shader));
        glDetachShader(handle_, *shader);
        __gl_check_error
      }
    } // namespace objects

  } // namespace internal
} // namespace gtulu
