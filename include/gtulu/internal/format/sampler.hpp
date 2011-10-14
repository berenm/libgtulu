/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_SAMPLER_HPP_
#define GTULU_INTERNAL_FORMAT_SAMPLER_HPP_

#include "gtulu/internal/format/target.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace sampler {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_sampler_1d)(gl_sampler_2d)(gl_sampler_3d)(gl_sampler_cube)(gl_sampler_1d_shadow)(gl_sampler_2d_shadow)(gl_sampler_1d_array)(gl_sampler_2d_array)(gl_sampler_1d_array_shadow)(gl_sampler_2d_array_shadow)(gl_sampler_2d_multisample)(gl_sampler_2d_multisample_array)(gl_sampler_cube_shadow)(gl_sampler_buffer)(gl_sampler_2d_rect)(gl_sampler_2d_rect_shadow)(gl_int_sampler_1d)(gl_int_sampler_2d)(gl_int_sampler_3d)(gl_int_sampler_cube)(gl_int_sampler_1d_array)(gl_int_sampler_2d_array)(gl_int_sampler_2d_multisample)(gl_int_sampler_2d_multisample_array)(gl_int_sampler_buffer)(gl_int_sampler_2d_rect)(gl_unsigned_int_sampler_1d)(gl_unsigned_int_sampler_2d)(gl_unsigned_int_sampler_3d)(gl_unsigned_int_sampler_cube)(gl_unsigned_int_sampler_1d_array)(gl_unsigned_int_sampler_2d_array)(gl_unsigned_int_sampler_2d_multisample)(gl_unsigned_int_sampler_2d_multisample_array)(gl_unsigned_int_sampler_buffer)(gl_unsigned_int_sampler_2d_rect))

        namespace format {
          bool is_sampler(::std::uint32_t value);
          cst::gl_constant_base const get(::std::uint32_t value);
        } // namespace format

        template< typename Format, typename Numeric, typename Dimension, typename Cardinality, typename TargetFormat,
            typename Compare >
        struct sampler_aspect {
            typedef Format format;
            typedef Numeric numeric;
            typedef Dimension dimension;
            typedef Cardinality cardinality;
            typedef TargetFormat target_format;
            typedef Compare compare;
        };

        template< typename Format >
        struct sampler_format;

#define DECLARE_FORMAT(format_m, numeric_m, target_m, compare_m)        \
        template< > struct sampler_format< format::format_m > {         \
            typedef sampler_aspect< format::format_m,                   \
                fc::numeric::numeric_m,                                 \
                fc::dimension::oned,                                    \
                fc::cardinality::one,                                   \
                ft::target_m,                                           \
                fc::compare::compare_m > aspect;                        \
        };                                                              \
        typedef sampler_format< format::format_m > format_m;

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

      } // namespace sampler
    } // namespace format

    namespace fsm = ::gtulu::internal::format::sampler;
    namespace fsmf = ::gtulu::internal::format::sampler::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_SAMPLER_HPP_ */
