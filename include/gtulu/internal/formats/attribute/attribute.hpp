/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_ATTRIBUTE_HPP_
#error "gtulu/internal/formats/attribute/attribute.hpp should not be included directly, please include gtulu/internal/formats/attribute.hpp instead."
#endif

#ifndef GTULU_INTERNAL_FORMAT_ATTRIBUTE_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_FORMAT_ATTRIBUTE_ATTRIBUTE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace attribute {

#define ATTRIBUTE_FORMATS   ((float, GL_FLOAT)) \
                            ((float_vec2, GL_FLOAT_VEC2)) \
                            ((float_vec3, GL_FLOAT_VEC3)) \
                            ((float_vec4, GL_FLOAT_VEC4)) \
                            ((int, GL_INT)) \
                            ((int_vec2, GL_INT_VEC2)) \
                            ((int_vec3, GL_INT_VEC3)) \
                            ((int_vec4, GL_INT_VEC4)) \
                            ((unsigned_int, GL_UNSIGNED_INT)) \
                            ((unsigned_int_vec2, GL_UNSIGNED_INT_VEC2)) \
                            ((unsigned_int_vec3, GL_UNSIGNED_INT_VEC3)) \
                            ((unsigned_int_vec4, GL_UNSIGNED_INT_VEC4)) \
                            ((float_mat2, GL_FLOAT_MAT2)) \
                            ((float_mat3, GL_FLOAT_MAT3)) \
                            ((float_mat4, GL_FLOAT_MAT4)) \
                            ((float_mat2x3, GL_FLOAT_MAT2x3)) \
                            ((float_mat2x4, GL_FLOAT_MAT2x4)) \
                            ((float_mat3x2, GL_FLOAT_MAT3x2)) \
                            ((float_mat3x4, GL_FLOAT_MAT3x4)) \
                            ((float_mat4x2, GL_FLOAT_MAT4x2)) \
                            ((float_mat4x3, GL_FLOAT_MAT4x3))

        namespace format {
#define CONSTANT_LIST ATTRIBUTE_FORMATS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
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
