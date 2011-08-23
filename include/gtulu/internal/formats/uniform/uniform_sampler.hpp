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

          META_ASPECT_DECLARE(compare, Compare, struct, (normal) (shadow))

          template< typename Format, typename DataType, typename TargetFormat, typename Compare >
          struct uniform_metadata: fu::uniform_metadata< Format, fub::sampler, DataType > {
              using fu::uniform_metadata< Format, fub::sampler, DataType >::format;
              using fu::uniform_metadata< Format, fub::sampler, DataType >::base;
              using fu::uniform_metadata< Format, fub::sampler, DataType >::type;
              using fu::uniform_metadata< Format, fub::sampler, DataType >::count;
              typedef TargetFormat target;
              typedef Compare compare;
          };

          template< typename Format >
          struct uniform_format;
        } // namespace sampler

#define DECLARE_UNIFORM_FORMAT(format_m, type_m, target_m, compare_m) \
    namespace sampler { \
      template< > struct uniform_format< fuf::format_m > { \
          typedef uniform_metadata< fuf::format_m, fut::type_m, ft::target_m, compare::compare_m > info; \
      }; \
    } \
    typedef sampler::uniform_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, sampler, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m); \
    namespace sampler { \
      DECLARE_HAS_TRAIT_FORMAT(compare, compare_m, format_m); \
    }

        DECLARE_UNIFORM_FORMAT(gl_sampler_1d, floating, gl_texture_1d, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d, floating, gl_texture_2d, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_3d, floating, gl_texture_3d, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_cube, floating, gl_texture_cube_map, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_1d_shadow, floating, gl_texture_1d, shadow)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d_shadow, floating, gl_texture_2d, shadow)
        DECLARE_UNIFORM_FORMAT(gl_sampler_1d_array, floating, gl_texture_1d_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d_array, floating, gl_texture_2d_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_1d_array_shadow, floating, gl_texture_1d_array, shadow)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d_array_shadow, floating, gl_texture_2d_array, shadow)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d_multisample, floating, gl_texture_2d_multisample, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d_multisample_array, floating, gl_texture_2d_multisample_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_cube_shadow, floating, gl_texture_cube_map, shadow)
        DECLARE_UNIFORM_FORMAT(gl_sampler_buffer, floating, gl_texture_buffer, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d_rect, floating, gl_texture_rectangle, normal)
        DECLARE_UNIFORM_FORMAT(gl_sampler_2d_rect_shadow, floating, gl_texture_rectangle, shadow)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_1d, integer, gl_texture_1d, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_2d, integer, gl_texture_2d, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_3d, integer, gl_texture_3d, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_cube, integer, gl_texture_cube_map, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_1d_array, integer, gl_texture_1d_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_2d_array, integer, gl_texture_2d_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_2d_multisample, integer, gl_texture_2d_multisample, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_2d_multisample_array, integer, gl_texture_2d_multisample_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_buffer, integer, gl_texture_buffer, normal)
        DECLARE_UNIFORM_FORMAT(gl_int_sampler_2d_rect, integer, gl_texture_rectangle, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_1d, unsigned_integer, gl_texture_1d, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_2d, unsigned_integer, gl_texture_2d, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_3d, unsigned_integer, gl_texture_3d, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_cube, unsigned_integer, gl_texture_cube_map, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_1d_array, unsigned_integer, gl_texture_1d_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_2d_array, unsigned_integer, gl_texture_2d_array, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_2d_multisample,
                               unsigned_integer,
                               gl_texture_2d_multisample,
                               normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_2d_multisample_array,
                               unsigned_integer,
                               gl_texture_2d_multisample_array,
                               normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_buffer, unsigned_integer, gl_texture_buffer, normal)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_sampler_2d_rect, unsigned_integer, gl_texture_rectangle, normal)

#undef DECLARE_UNIFORM_FORMAT

      } // namespace uniform
    } // namespace formats

    namespace fus = ::gtulu::internal::formats::uniform::sampler;
    namespace fusc = ::gtulu::internal::formats::uniform::sampler::compare;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_UNIFORM_SAMPLER_HPP_ */
