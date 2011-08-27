/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_
#error "gtulu/internal/formats/attribute/attribute.hpp should not be included directly, please include gtulu/internal/formats/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_ATTRIBUTE_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_ATTRIBUTE_ATTRIBUTE_HPP_

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {

        META_ASPECT_DECLARE(format, Format, using cst::,
            (gl_float)
            (gl_float_vec2)
            (gl_float_vec3)
            (gl_float_vec4)
            (gl_int)
            (gl_int_vec2)
            (gl_int_vec3)
            (gl_int_vec4)
            (gl_unsigned_int)
            (gl_unsigned_int_vec2)
            (gl_unsigned_int_vec3)
            (gl_unsigned_int_vec4)
            (gl_float_mat2)
            (gl_float_mat3)
            (gl_float_mat4)
            (gl_float_mat2x3)
            (gl_float_mat2x4)
            (gl_float_mat3x2)
            (gl_float_mat3x4)
            (gl_float_mat4x2)
            (gl_float_mat4x3)
        )

        namespace format {
          cst::gl_constant_base const get(::std::uint32_t value);
        } // namespace format

        template< typename Format, typename Sign, typename Integral, typename Dimension >
        struct attribute_aspect {
            typedef Format format;
            typedef Sign sign;
            typedef Integral integral;
            typedef Dimension dimension;
        };

        template< typename Format >
        struct attribute_format;

#define DECLARE_ATTRIBUTE_FORMAT(format_m, sign_m, integral_m, dimension_m) \
    template< > struct attribute_format< format::format_m > { \
        typedef attribute_aspect< format::format_m, fc::sign::sign_m, fc::integral::integral_m, fc::dimension::dimension_m > aspect; \
    }; \
    typedef attribute_format< format::format_m > format_m; \

        DECLARE_ATTRIBUTE_FORMAT(gl_float, signed_, floating, one)
        DECLARE_ATTRIBUTE_FORMAT(gl_int, signed_, integral, one)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int, unsigned_, integral, one)

        DECLARE_ATTRIBUTE_FORMAT(gl_float_vec2, signed_, floating, two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_vec3, signed_, floating, three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_vec4, signed_, floating, four)
        DECLARE_ATTRIBUTE_FORMAT(gl_int_vec2, signed_, integral, two)
        DECLARE_ATTRIBUTE_FORMAT(gl_int_vec3, signed_, integral, three)
        DECLARE_ATTRIBUTE_FORMAT(gl_int_vec4, signed_, integral, four)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int_vec2, unsigned_, integral, two)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int_vec3, unsigned_, integral, three)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int_vec4, unsigned_, integral, four)

        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat2, signed_, floating, two_by_two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat2x3, signed_, floating, two_by_three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat2x4, signed_, floating, two_by_four)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat3x2, signed_, floating, three_by_two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat3, signed_, floating, three_by_three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat3x4, signed_, floating, three_by_four)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat4x2, signed_, floating, four_by_two)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat4x3, signed_, floating, four_by_three)
        DECLARE_ATTRIBUTE_FORMAT(gl_float_mat4, signed_, floating, four_by_four)

#undef DECLARE_ATTRIBUTE_FORMAT

      } // namespace attribute
    } // namespace formats

    namespace fa = ::gtulu::internal::formats::attribute;
    namespace faf = ::gtulu::internal::formats::attribute::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_ATTRIBUTE_ATTRIBUTE_HPP_ */
