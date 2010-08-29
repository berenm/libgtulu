/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_
#error "gtulu/internal/formats/uniform/uniform.hpp should not be included directly, please include gtulu/internal/formats/uniform.hpp instead."
#endif

#ifndef GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_
#define GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

#include <boost/type_traits/integral_constant.hpp>

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {

#define UNIFORM_FORMATS ((float, GL_FLOAT)) \
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
                        ((bool, GL_BOOL)) \
                        ((bool_vec2, GL_BOOL_VEC2)) \
                        ((bool_vec3, GL_BOOL_VEC3)) \
                        ((bool_vec4, GL_BOOL_VEC4)) \
                        ((float_mat2, GL_FLOAT_MAT2)) \
                        ((float_mat3, GL_FLOAT_MAT3)) \
                        ((float_mat4, GL_FLOAT_MAT4)) \
                        ((float_mat2x3, GL_FLOAT_MAT2x3)) \
                        ((float_mat2x4, GL_FLOAT_MAT2x4)) \
                        ((float_mat3x2, GL_FLOAT_MAT3x2)) \
                        ((float_mat3x4, GL_FLOAT_MAT3x4)) \
                        ((float_mat4x2, GL_FLOAT_MAT4x2)) \
                        ((float_mat4x3, GL_FLOAT_MAT4x3)) \
                        ((sampler_1d, GL_SAMPLER_1D)) \
                        ((sampler_2d, GL_SAMPLER_2D)) \
                        ((sampler_3d, GL_SAMPLER_3D)) \
                        ((sampler_cube, GL_SAMPLER_CUBE)) \
                        ((sampler_1d_shadow, GL_SAMPLER_1D_SHADOW)) \
                        ((sampler_2d_shadow, GL_SAMPLER_2D_SHADOW)) \
                        ((sampler_1d_array, GL_SAMPLER_1D_ARRAY)) \
                        ((sampler_2d_array, GL_SAMPLER_2D_ARRAY)) \
                        ((sampler_1d_array_shadow, GL_SAMPLER_1D_ARRAY_SHADOW)) \
                        ((sampler_2d_array_shadow, GL_SAMPLER_2D_ARRAY_SHADOW)) \
                        ((sampler_2d_multisample, GL_SAMPLER_2D_MULTISAMPLE)) \
                        ((sampler_2d_multisample_array, GL_SAMPLER_2D_MULTISAMPLE_ARRAY)) \
                        ((sampler_cube_shadow, GL_SAMPLER_CUBE_SHADOW)) \
                        ((sampler_buffer, GL_SAMPLER_BUFFER)) \
                        ((sampler_2d_rect, GL_SAMPLER_2D_RECT)) \
                        ((sampler_2d_rect_shadow, GL_SAMPLER_2D_RECT_SHADOW)) \
                        ((int_sampler_1d, GL_INT_SAMPLER_1D)) \
                        ((int_sampler_2d, GL_INT_SAMPLER_2D)) \
                        ((int_sampler_3d, GL_INT_SAMPLER_3D)) \
                        ((int_sampler_cube, GL_INT_SAMPLER_CUBE)) \
                        ((int_sampler_1d_array, GL_INT_SAMPLER_1D_ARRAY)) \
                        ((int_sampler_2d_array, GL_INT_SAMPLER_2D_ARRAY)) \
                        ((int_sampler_2d_multisample, GL_INT_SAMPLER_2D_MULTISAMPLE)) \
                        ((int_sampler_2d_multisample_array, GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)) \
                        ((int_sampler_buffer, GL_INT_SAMPLER_BUFFER)) \
                        ((int_sampler_2d_rect, GL_INT_SAMPLER_2D_RECT)) \
                        ((unsigned_int_sampler_1d, GL_UNSIGNED_INT_SAMPLER_1D)) \
                        ((unsigned_int_sampler_2d, GL_UNSIGNED_INT_SAMPLER_2D)) \
                        ((unsigned_int_sampler_3d, GL_UNSIGNED_INT_SAMPLER_3D)) \
                        ((unsigned_int_sampler_cube, GL_UNSIGNED_INT_SAMPLER_CUBE)) \
                        ((unsigned_int_sampler_1d_array, GL_UNSIGNED_INT_SAMPLER_1D_ARRAY)) \
                        ((unsigned_int_sampler_2d_array, GL_UNSIGNED_INT_SAMPLER_2D_ARRAY)) \
                        ((unsigned_int_sampler_2d_multisample, GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE)) \
                        ((unsigned_int_sampler_2d_multisample_array, GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY)) \
                        ((unsigned_int_sampler_buffer, GL_UNSIGNED_INT_SAMPLER_BUFFER)) \
                        ((unsigned_int_sampler_2d_rect, GL_UNSIGNED_INT_SAMPLER_2D_RECT)) \

        namespace format {
#define CONSTANT_LIST UNIFORM_FORMATS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (literal)
            (vector)
            (matrix)
            (sampler)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (integer)
            (unsigned_integer)
            (boolean)
        )

        template< typename format_t, typename base_t, typename type_t >
        struct uniform_metadata {
            typedef format_t format;
            typedef base_t base;
            typedef type_t type;
            typedef fcd::one count;
        };

        template< typename format_t >
        struct uniform_format;

#define DECLARE_UNIFORM_FORMAT(format_m, base_m, type_m) \
    template< > struct uniform_format< format::format_m > { \
        typedef uniform_metadata< format::format_m, base::base_m, type::type_m > info; \
    }; \
    typedef uniform_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m)

        DECLARE_UNIFORM_FORMAT(gl_float, literal, floating)
        DECLARE_UNIFORM_FORMAT(gl_int, literal, integer)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int, literal, unsigned_integer)
        DECLARE_UNIFORM_FORMAT(gl_bool, literal, boolean)
#undef DECLARE_UNIFORM_FORMAT
      } // namespace uniform
    } // namespace formats

    namespace fu = ::gtulu::internal::formats::uniform;
    namespace fub = ::gtulu::internal::formats::uniform::base;
    namespace fuf = ::gtulu::internal::formats::uniform::format;
    namespace fut = ::gtulu::internal::formats::uniform::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_ */
