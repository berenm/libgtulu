/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_SHADER_BASE_HPP_
#define GTULU_INTERNAL_OBJECT_SHADER_BASE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"
#include "gtulu/internal/format/shader.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      struct shader_base: public plug< shader_base > {
          virtual ~shader_base() {
          }

          virtual void compile();

          template< typename ShaderAttribute >
          inline std::uint32_t get() const {
            std::int32_t data;
            fct::gl_get_shader< ShaderAttribute >::call(handle_, &data);
            return data;
          }
          void set();

          void set_source(char const* code);

        protected:
          template< typename ShaderType >
          void create_shader() {
            if (handle_ == 0) {
              handle_ = fct::gl_create_shader< ShaderType >::call();
            }
          }
      };
    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_SHADER_BASE_HPP_ */
