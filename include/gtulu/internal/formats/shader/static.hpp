/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_SHADER_STATIC_HPP_
#define GTULU_INTERNAL_FORMATS_SHADER_STATIC_HPP_

#include "gtulu/internal/objects/shader/base.hpp"

namespace gtulu {
  namespace internal {

    namespace gio = ::gtulu::internal::objects;

    namespace formats {
      namespace shader {

        template< typename ShaderType >
        class static_shader_format: virtual public gio::shader_base {
          public:
            static_shader_format() {
              create_shader();
            }

            void create_shader() {
              gio::shader_base::create_shader< ShaderType >();
            }

            virtual char const* get_source() const = 0;
        };

      } // namespace shader
    } // namespace formats

    namespace gifsh = ::gtulu::internal::formats::shader;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_SHADER_STATIC_HPP_ */
