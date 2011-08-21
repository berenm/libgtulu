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

        namespace format {
          using cst::gl_float;
          using cst::gl_float_vec2;
          using cst::gl_float_vec3;
          using cst::gl_float_vec4;
          using cst::gl_int;
          using cst::gl_int_vec2;
          using cst::gl_int_vec3;
          using cst::gl_int_vec4;
          using cst::gl_unsigned_int;
          using cst::gl_unsigned_int_vec2;
          using cst::gl_unsigned_int_vec3;
          using cst::gl_unsigned_int_vec4;
          using cst::gl_float_mat2;
          using cst::gl_float_mat3;
          using cst::gl_float_mat4;
          using cst::gl_float_mat2x3;
          using cst::gl_float_mat2x4;
          using cst::gl_float_mat3x2;
          using cst::gl_float_mat3x4;
          using cst::gl_float_mat4x2;
          using cst::gl_float_mat4x3;

          cst::gl_constant_base const get(::std::uint32_t value);
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (literal)
            (vector)
            (matrix)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (integer)
            (unsigned_integer)
        )

        template< typename Format, typename Base, typename DataType >
        struct attribute_metadata {
          typedef Format format;
          typedef Base base;
          typedef DataType type;
          typedef fcd::one count;
        };

        template< typename Format >
        struct attribute_format;

#define DECLARE_ATTRIBUTE_FORMAT(format_m, base_m, type_m) \
    template< > struct attribute_format< format::format_m > { \
        typedef attribute_metadata< format::format_m, base::base_m, type::type_m > info; \
    }; \
    typedef attribute_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m);

        DECLARE_ATTRIBUTE_FORMAT(gl_float, literal, floating)
        DECLARE_ATTRIBUTE_FORMAT(gl_int, literal, integer)
        DECLARE_ATTRIBUTE_FORMAT(gl_unsigned_int, literal, unsigned_integer)

#undef DECLARE_ATTRIBUTE_FORMAT

      } // namespace attribute
    } // namespace formats

    namespace fa = ::gtulu::internal::formats::attribute;
    namespace fab = ::gtulu::internal::formats::attribute::base;
    namespace faf = ::gtulu::internal::formats::attribute::format;
    namespace fat = ::gtulu::internal::formats::attribute::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_ATTRIBUTE_ATTRIBUTE_HPP_ */
