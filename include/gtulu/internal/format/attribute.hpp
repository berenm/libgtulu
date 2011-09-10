/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_

#include "gtulu/internal/format/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace attribute {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_float)(gl_float_vec2)(gl_float_vec3)(gl_float_vec4)(gl_int)(gl_int_vec2)(gl_int_vec3)(gl_int_vec4)(gl_unsigned_int)(gl_unsigned_int_vec2)(gl_unsigned_int_vec3)(gl_unsigned_int_vec4)(gl_float_mat2)(gl_float_mat3)(gl_float_mat4)(gl_float_mat2x3)(gl_float_mat2x4)(gl_float_mat3x2)(gl_float_mat3x4)(gl_float_mat4x2)(gl_float_mat4x3))

        namespace format {
          cst::gl_constant_base const get(::std::uint32_t value);
        } // namespace format

        template< typename Format, typename Numeric, typename Dimension, typename Cardinality >
        struct attribute_aspect {
            typedef Format format;
            typedef Numeric numeric;
            typedef Dimension dimension;
            typedef Cardinality cardinality;
        };

        template< typename Format >
        struct attribute_format;

#define DECLARE_FORMAT(format_m, numeric_m, dimension_m, cardinality_m)         \
    template< > struct attribute_format< format::format_m > {                   \
        typedef attribute_aspect< format::format_m,                             \
                                  fc::numeric::numeric_m,                       \
                                  fc::dimension::dimension_m,                   \
                                  fc::cardinality::cardinality_m > aspect;      \
    };                                                                          \
    typedef attribute_format< format::format_m > format_m;

        DECLARE_FORMAT(gl_float, signed_floating, oned, one)
        DECLARE_FORMAT(gl_int, signed_integral, oned, one)
        DECLARE_FORMAT(gl_unsigned_int, unsigned_integral, oned, one)

        DECLARE_FORMAT(gl_float_vec2, signed_floating, oned, two)
        DECLARE_FORMAT(gl_float_vec3, signed_floating, oned, three)
        DECLARE_FORMAT(gl_float_vec4, signed_floating, oned, four)
        DECLARE_FORMAT(gl_int_vec2, signed_integral, oned, two)
        DECLARE_FORMAT(gl_int_vec3, signed_integral, oned, three)
        DECLARE_FORMAT(gl_int_vec4, signed_integral, oned, four)
        DECLARE_FORMAT(gl_unsigned_int_vec2, unsigned_integral, oned, two)
        DECLARE_FORMAT(gl_unsigned_int_vec3, unsigned_integral, oned, three)
        DECLARE_FORMAT(gl_unsigned_int_vec4, unsigned_integral, oned, four)

        DECLARE_FORMAT(gl_float_mat2, signed_floating, twod, two_by_two)
        DECLARE_FORMAT(gl_float_mat2x3, signed_floating, twod, two_by_three)
        DECLARE_FORMAT(gl_float_mat2x4, signed_floating, twod, two_by_four)
        DECLARE_FORMAT(gl_float_mat3x2, signed_floating, twod, three_by_two)
        DECLARE_FORMAT(gl_float_mat3, signed_floating, twod, three_by_three)
        DECLARE_FORMAT(gl_float_mat3x4, signed_floating, twod, three_by_four)
        DECLARE_FORMAT(gl_float_mat4x2, signed_floating, twod, four_by_two)
        DECLARE_FORMAT(gl_float_mat4x3, signed_floating, twod, four_by_three)
        DECLARE_FORMAT(gl_float_mat4, signed_floating, twod, four_by_four)

#undef DECLARE_FORMAT

      } // namespace attribute
    } // namespace format

    namespace fa = ::gtulu::internal::format::attribute;
    namespace faf = ::gtulu::internal::format::attribute::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_ */
