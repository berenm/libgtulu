/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 3 sept. 2010
 * @todo comment
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/internal/formats/output.hpp"

#include "gtulu/internal/constants.hpp"

#include <string>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace output {

        namespace format {
          const cst::gl_constant_base get(::std::string type_name) {
            if (type_name == static_cast< ::std::string const& >(gl_float::get())) {
              return gl_float();
            } else if (type_name == static_cast< ::std::string const& >(gl_float_vec2::get())) {
              return gl_float_vec2();
            } else if (type_name == "vec2") {
              return gl_float_vec2();
            } else if (type_name == static_cast< ::std::string const& >(gl_float_vec3::get())) {
              return gl_float_vec3();
            } else if (type_name == "vec3") {
              return gl_float_vec3();
            } else if (type_name == static_cast< ::std::string const& >(gl_float_vec4::get())) {
              return gl_float_vec4();
            } else if (type_name == "vec4") {
              return gl_float_vec4();
            } else if (type_name == static_cast< ::std::string const& >(gl_int::get())) {
              return gl_int();
            } else if (type_name == static_cast< ::std::string const& >(gl_int_vec2::get())) {
              return gl_int_vec2();
            } else if (type_name == "ivec2") {
              return gl_int_vec2();
            } else if (type_name == static_cast< ::std::string const& >(gl_int_vec3::get())) {
              return gl_int_vec3();
            } else if (type_name == "ivec3") {
              return gl_int_vec2();
            } else if (type_name == static_cast< ::std::string const& >(gl_int_vec4::get())) {
              return gl_int_vec4();
            } else if (type_name == "ivec4") {
              return gl_int_vec2();
            } else if (type_name == static_cast< ::std::string const& >(gl_unsigned_int::get())) {
              return gl_unsigned_int();
            } else if (type_name == static_cast< ::std::string const& >(gl_unsigned_int_vec2::get())) {
              return gl_unsigned_int_vec2();
            } else if (type_name == "uvec2") {
              return gl_int_vec2();
            } else if (type_name == static_cast< ::std::string const& >(gl_unsigned_int_vec3::get())) {
              return gl_unsigned_int_vec3();
            } else if (type_name == "uvec3") {
              return gl_int_vec2();
            } else if (type_name == static_cast< ::std::string const& >(gl_unsigned_int_vec4::get())) {
              return gl_unsigned_int_vec4();
            } else if (type_name == "uvec4") {
              return gl_int_vec2();
            } else {
              return cst::invalid_constant();
            }
          }
        } // namespace format

      } // namespace output
    } // namespace formats

  } // namespace internal
} // namespace gtulu
