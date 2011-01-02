/**
 * @file
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
          typedef cst::gl_float gl_float;
          typedef cst::gl_float_vec2 gl_float_vec2;
          typedef cst::gl_float_vec3 gl_float_vec3;
          typedef cst::gl_float_vec4 gl_float_vec4;
          typedef cst::gl_int gl_int;
          typedef cst::gl_int_vec2 gl_int_vec2;
          typedef cst::gl_int_vec3 gl_int_vec3;
          typedef cst::gl_int_vec4 gl_int_vec4;
          typedef cst::gl_unsigned_int gl_unsigned_int;
          typedef cst::gl_unsigned_int_vec2 gl_unsigned_int_vec2;
          typedef cst::gl_unsigned_int_vec3 gl_unsigned_int_vec3;
          typedef cst::gl_unsigned_int_vec4 gl_unsigned_int_vec4;
          typedef cst::gl_float_mat2 gl_float_mat2;
          typedef cst::gl_float_mat3 gl_float_mat3;
          typedef cst::gl_float_mat4 gl_float_mat4;
          typedef cst::gl_float_mat2x3 gl_float_mat2x3;
          typedef cst::gl_float_mat2x4 gl_float_mat2x4;
          typedef cst::gl_float_mat3x2 gl_float_mat3x2;
          typedef cst::gl_float_mat3x4 gl_float_mat3x4;
          typedef cst::gl_float_mat4x2 gl_float_mat4x2;
          typedef cst::gl_float_mat4x3 gl_float_mat4x3;

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

        template< typename format_t, typename base_t, typename type_t >
        struct attribute_metadata {
          typedef format_t format;
          typedef base_t base;
          typedef type_t type;
          typedef fcd::one count;
        };

        template< typename format_t >
        struct attribute_format;

#define DECLARE_ATTRIBUTE_FORMAT(format_m, base_m, type_m) \
    template< > struct attribute_format< format::format_m > { \
        typedef attribute_metadata< format::format_m, base::base_m, type::type_m > info; \
    }; \
    typedef attribute_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m)

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
