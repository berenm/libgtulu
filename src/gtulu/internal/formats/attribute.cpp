/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 3 sept. 2010
 * @todo comment
 */

#include "gtulu/internal/formats/attribute.hpp"

#include "gtulu/internal/constants.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {

        namespace format {
          const cst::gl_constant_base get(::std::uint32_t value) {
            switch (value) {
              case gl_float::value:
                return gl_float();
              case gl_float_vec2::value:
                return gl_float_vec2();
              case gl_float_vec3::value:
                return gl_float_vec3();
              case gl_float_vec4::value:
                return gl_float_vec4();
              case gl_int::value:
                return gl_int();
              case gl_int_vec2::value:
                return gl_int_vec2();
              case gl_int_vec3::value:
                return gl_int_vec3();
              case gl_int_vec4::value:
                return gl_int_vec4();
              case gl_unsigned_int::value:
                return gl_unsigned_int();
              case gl_unsigned_int_vec2::value:
                return gl_unsigned_int_vec2();
              case gl_unsigned_int_vec3::value:
                return gl_unsigned_int_vec3();
              case gl_unsigned_int_vec4::value:
                return gl_unsigned_int_vec4();
              case gl_float_mat2::value:
                return gl_float_mat2();
              case gl_float_mat3::value:
                return gl_float_mat3();
              case gl_float_mat4::value:
                return gl_float_mat4();
              case gl_float_mat2x3::value:
                return gl_float_mat2x3();
              case gl_float_mat2x4::value:
                return gl_float_mat2x4();
              case gl_float_mat3x2::value:
                return gl_float_mat3x2();
              case gl_float_mat3x4::value:
                return gl_float_mat3x4();
              case gl_float_mat4x2::value:
                return gl_float_mat4x2();
              case gl_float_mat4x3::value:
                return gl_float_mat4x3();
              default:
                return cst::invalid_constant();
            }
          }
        } // namespace format

      } // namespace attribute
    } // namespace formats

  } // namespace internal
} // namespace gtulu
