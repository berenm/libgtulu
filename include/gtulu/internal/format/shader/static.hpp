/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_SHADER_STATIC_HPP_
#define GTULU_INTERNAL_FORMAT_SHADER_STATIC_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/object/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace shader {

        template< typename ShaderType >
        struct static_shader_format : virtual public obj::shader_base {
          static_shader_format() {
            create_shader();

          }

          void create_shader() {
            obj::shader_base::create_shader< ShaderType >();
          }

          virtual char const* get_source() const = 0;
        };

      } // namespace shader
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_SHADER_STATIC_HPP_ */
