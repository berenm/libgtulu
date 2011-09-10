/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_
#error "gtulu/internal/format/uniform/uniform.hpp should not be included directly, please include gtulu/internal/format/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_
#define GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_

namespace gtulu {
  namespace internal {

    namespace format {
      namespace uniform {

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
            (gl_bool)
            (gl_bool_vec2)
            (gl_bool_vec3)
            (gl_bool_vec4)
            (gl_float_mat2)
            (gl_float_mat3)
            (gl_float_mat4)
            (gl_float_mat2x3)
            (gl_float_mat2x4)
            (gl_float_mat3x2)
            (gl_float_mat3x4)
            (gl_float_mat4x2)
            (gl_float_mat4x3)
            (gl_sampler_1d)
            (gl_sampler_2d)
            (gl_sampler_3d)
            (gl_sampler_cube)
            (gl_sampler_1d_shadow)
            (gl_sampler_2d_shadow)
            (gl_sampler_1d_array)
            (gl_sampler_2d_array)
            (gl_sampler_1d_array_shadow)
            (gl_sampler_2d_array_shadow)
            (gl_sampler_2d_multisample)
            (gl_sampler_2d_multisample_array)
            (gl_sampler_cube_shadow)
            (gl_sampler_buffer)
            (gl_sampler_2d_rect)
            (gl_sampler_2d_rect_shadow)
            (gl_int_sampler_1d)
            (gl_int_sampler_2d)
            (gl_int_sampler_3d)
            (gl_int_sampler_cube)
            (gl_int_sampler_1d_array)
            (gl_int_sampler_2d_array)
            (gl_int_sampler_2d_multisample)
            (gl_int_sampler_2d_multisample_array)
            (gl_int_sampler_buffer)
            (gl_int_sampler_2d_rect)
            (gl_unsigned_int_sampler_1d)
            (gl_unsigned_int_sampler_2d)
            (gl_unsigned_int_sampler_3d)
            (gl_unsigned_int_sampler_cube)
            (gl_unsigned_int_sampler_1d_array)
            (gl_unsigned_int_sampler_2d_array)
            (gl_unsigned_int_sampler_2d_multisample)
            (gl_unsigned_int_sampler_2d_multisample_array)
            (gl_unsigned_int_sampler_buffer)
            (gl_unsigned_int_sampler_2d_rect)
        )

        namespace format {
          cst::gl_constant_base const get(::std::uint32_t value);
        } // namespace format

        template< typename Format, typename Numeric, typename Dimension, typename Cardinality >
        struct uniform_aspect {
            typedef Format format;
            typedef Numeric numeric;
            typedef Dimension dimension;
            typedef Cardinality cardinality;
        };

        template< typename Format >
        struct uniform_format;

#define DECLARE_UNIFORM_FORMAT(format_m, numeric_m, dimension_m, cardinality_m) \
    template< > struct uniform_format< format::format_m > {                     \
        typedef uniform_aspect< format::format_m,                               \
                                fc::numeric::numeric_m,                         \
                                fc::dimension::dimension_m,                     \
                                fc::cardinality::cardinality_m > aspect;        \
    };                                                                          \
    typedef uniform_format< format::format_m > format_m;

        DECLARE_UNIFORM_FORMAT(gl_float, float32_, oned, one)
        DECLARE_UNIFORM_FORMAT(gl_int, int32_, oned, one)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int, uint32_, oned, one)
        DECLARE_UNIFORM_FORMAT(gl_bool, bool_, oned, one)

        DECLARE_UNIFORM_FORMAT(gl_float_vec2, float32_, oned, two)
        DECLARE_UNIFORM_FORMAT(gl_float_vec3, float32_, oned, three)
        DECLARE_UNIFORM_FORMAT(gl_float_vec4, float32_, oned, four)
        DECLARE_UNIFORM_FORMAT(gl_int_vec2, int32_, oned, two)
        DECLARE_UNIFORM_FORMAT(gl_int_vec3, int32_, oned, three)
        DECLARE_UNIFORM_FORMAT(gl_int_vec4, int32_, oned, four)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_vec2, uint32_, oned, two)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_vec3, uint32_, oned, three)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_vec4, uint32_, oned, four)
        DECLARE_UNIFORM_FORMAT(gl_bool_vec2, uint32_, oned, two)
        DECLARE_UNIFORM_FORMAT(gl_bool_vec3, uint32_, oned, three)
        DECLARE_UNIFORM_FORMAT(gl_bool_vec4, uint32_, oned, four)

        DECLARE_UNIFORM_FORMAT(gl_float_mat2, float32_, twod, two_by_two)
        DECLARE_UNIFORM_FORMAT(gl_float_mat2x3, float32_, twod, two_by_three)
        DECLARE_UNIFORM_FORMAT(gl_float_mat2x4, float32_, twod, two_by_four)
        DECLARE_UNIFORM_FORMAT(gl_float_mat3x2, float32_, twod, three_by_two)
        DECLARE_UNIFORM_FORMAT(gl_float_mat3, float32_, twod, three_by_three)
        DECLARE_UNIFORM_FORMAT(gl_float_mat3x4, float32_, twod, three_by_four)
        DECLARE_UNIFORM_FORMAT(gl_float_mat4x2, float32_, twod, four_by_two)
        DECLARE_UNIFORM_FORMAT(gl_float_mat4x3, float32_, twod, four_by_three)
        DECLARE_UNIFORM_FORMAT(gl_float_mat4, float32_, twod, four_by_four)

#undef DECLARE_UNIFORM_FORMAT

      } // namespace uniform
    } // namespace format

    namespace fu = ::gtulu::internal::format::uniform;
    namespace fuf = ::gtulu::internal::format::uniform::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_ */
