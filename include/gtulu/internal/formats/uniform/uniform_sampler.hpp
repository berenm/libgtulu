/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_
#error "gtulu/internal/formats/uniform/uniform_sampler.hpp should not be included directly, please include gtulu/internal/formats/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_UNIFORM_SAMPLER_HPP_
#define GTULU_INTERNAL_FORMAT_UNIFORM_SAMPLER_HPP_

#include "gtulu/internal/formats/target.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {
        namespace sampler {

          template< typename Format, typename Numeric, typename Dimension, typename Cardinality, typename TargetFormat,
              typename Compare >
          struct uniform_aspect {
              typedef Format format;
              typedef Numeric numeric;
              typedef Dimension dimension;
              typedef Cardinality cardinality;
              typedef TargetFormat target_format;
              typedef Compare compare;
          };

          template< typename Format >
          struct uniform_format;
        } // namespace sampler

#define DECLARE_FORMAT(format_m, numeric_m, target_m, compare_m)        \
    namespace sampler {                                                 \
      template< > struct uniform_format< fuf::format_m > {              \
          typedef uniform_aspect< fuf::format_m,                        \
              fn::numeric_m,                                            \
              fc::dimension::oned,                                      \
              fc::cardinality::one,                                     \
              ft::target_m,                                             \
              fc::compare::compare_m > aspect;                          \
      };                                                                \
    }                                                                   \
    typedef sampler::uniform_format< format::format_m > format_m;

        DECLARE_FORMAT(gl_sampler_1d, signed_floating, gl_texture_1d, normal)
        DECLARE_FORMAT(gl_sampler_2d, signed_floating, gl_texture_2d, normal)
        DECLARE_FORMAT(gl_sampler_3d, signed_floating, gl_texture_3d, normal)
        DECLARE_FORMAT(gl_sampler_cube, signed_floating, gl_texture_cube_map, normal)
        DECLARE_FORMAT(gl_sampler_1d_shadow, signed_floating, gl_texture_1d, shadow)
        DECLARE_FORMAT(gl_sampler_2d_shadow, signed_floating, gl_texture_2d, shadow)
        DECLARE_FORMAT(gl_sampler_1d_array, signed_floating, gl_texture_1d_array, normal)
        DECLARE_FORMAT(gl_sampler_2d_array, signed_floating, gl_texture_2d_array, normal)
        DECLARE_FORMAT(gl_sampler_1d_array_shadow, signed_floating, gl_texture_1d_array, shadow)
        DECLARE_FORMAT(gl_sampler_2d_array_shadow, signed_floating, gl_texture_2d_array, shadow)
        DECLARE_FORMAT(gl_sampler_2d_multisample, signed_floating, gl_texture_2d_multisample, normal)
        DECLARE_FORMAT(gl_sampler_2d_multisample_array, signed_floating, gl_texture_2d_multisample_array, normal)
        DECLARE_FORMAT(gl_sampler_cube_shadow, signed_floating, gl_texture_cube_map, shadow)
        DECLARE_FORMAT(gl_sampler_buffer, signed_floating, gl_texture_buffer, normal)
        DECLARE_FORMAT(gl_sampler_2d_rect, signed_floating, gl_texture_rectangle, normal)
        DECLARE_FORMAT(gl_sampler_2d_rect_shadow, signed_floating, gl_texture_rectangle, shadow)
        DECLARE_FORMAT(gl_int_sampler_1d, signed_integral, gl_texture_1d, normal)
        DECLARE_FORMAT(gl_int_sampler_2d, signed_integral, gl_texture_2d, normal)
        DECLARE_FORMAT(gl_int_sampler_3d, signed_integral, gl_texture_3d, normal)
        DECLARE_FORMAT(gl_int_sampler_cube, signed_integral, gl_texture_cube_map, normal)
        DECLARE_FORMAT(gl_int_sampler_1d_array, signed_integral, gl_texture_1d_array, normal)
        DECLARE_FORMAT(gl_int_sampler_2d_array, signed_integral, gl_texture_2d_array, normal)
        DECLARE_FORMAT(gl_int_sampler_2d_multisample, signed_integral, gl_texture_2d_multisample, normal)
        DECLARE_FORMAT(gl_int_sampler_2d_multisample_array, signed_integral, gl_texture_2d_multisample_array, normal)
        DECLARE_FORMAT(gl_int_sampler_buffer, signed_integral, gl_texture_buffer, normal)
        DECLARE_FORMAT(gl_int_sampler_2d_rect, signed_integral, gl_texture_rectangle, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_1d, unsigned_integral, gl_texture_1d, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_2d, unsigned_integral, gl_texture_2d, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_3d, unsigned_integral, gl_texture_3d, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_cube, unsigned_integral, gl_texture_cube_map, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_1d_array, unsigned_integral, gl_texture_1d_array, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_2d_array, unsigned_integral, gl_texture_2d_array, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_2d_multisample, unsigned_integral, gl_texture_2d_multisample, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_2d_multisample_array,
                       unsigned_integral,
                       gl_texture_2d_multisample_array,
                       normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_buffer, unsigned_integral, gl_texture_buffer, normal)
        DECLARE_FORMAT(gl_unsigned_int_sampler_2d_rect, unsigned_integral, gl_texture_rectangle, normal)

#undef DECLARE_FORMAT

      } // namespace uniform
    } // namespace formats

    namespace fus = ::gtulu::internal::formats::uniform::sampler;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_UNIFORM_SAMPLER_HPP_ */
