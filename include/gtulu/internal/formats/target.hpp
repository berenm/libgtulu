/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_TARGET_HPP_
#define GTULU_INTERNAL_FORMAT_TARGET_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace target {

        namespace format {
          typedef cst::gl_texture_1d gl_texture_1d;
          typedef cst::gl_texture_1d_array gl_texture_1d_array;
          typedef cst::gl_texture_2d gl_texture_2d;
          typedef cst::gl_texture_2d_array gl_texture_2d_array;
          typedef cst::gl_texture_2d_multisample gl_texture_2d_multisample;
          typedef cst::gl_texture_2d_multisample_array gl_texture_2d_multisample_array;
          typedef cst::gl_texture_3d gl_texture_3d;
          typedef cst::gl_texture_rectangle gl_texture_rectangle;
          typedef cst::gl_texture_buffer gl_texture_buffer;
          typedef cst::gl_texture_cube_map gl_texture_cube_map;
          typedef cst::gl_texture_cube_map_negative_x gl_texture_cube_map_negative_x;
          typedef cst::gl_texture_cube_map_negative_y gl_texture_cube_map_negative_y;
          typedef cst::gl_texture_cube_map_negative_z gl_texture_cube_map_negative_z;
          typedef cst::gl_texture_cube_map_positive_x gl_texture_cube_map_positive_x;
          typedef cst::gl_texture_cube_map_positive_y gl_texture_cube_map_positive_y;
          typedef cst::gl_texture_cube_map_positive_z gl_texture_cube_map_positive_z;
          typedef cst::gl_renderbuffer gl_renderbuffer;
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (texture)
            (renderbuffer)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (oned)
            (twod)
            (threed)
            (rectangle)
            (buffer)
            (cube_map)
        )
        DECLARE_TRAIT_ASPECT(sample, struct,
            (simple)
            (multi)
        )
        DECLARE_TRAIT_ASPECT(cardinality, struct,
            (single)
            (array)
        )

        template< typename format_t, typename base_t, typename type_t, typename cardinality_t, typename sample_t >
        struct target_metadata {
            typedef format_t format;
            typedef base_t base;
            typedef type_t type;
            typedef cardinality_t cardinality;
            typedef sample_t sample;
        };

        template< typename format_t >
        struct target_format;

#define DECLARE_TARGET_FORMAT(format_m, base_m, type_m, cardinality_m, sample_m) \
      template< > struct target_format< format::format_m > { \
          typedef target_metadata< format::format_m, base::base_m, type::type_m, cardinality::cardinality_m, sample::sample_m > info; \
      }; \
      typedef target_format< format::format_m > format_m; \
      DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m) \
      DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
      DECLARE_HAS_TRAIT_FORMAT(sample, sample_m, format_m) \
      DECLARE_HAS_TRAIT_FORMAT(cardinality, cardinality_m, format_m) \

        DECLARE_TARGET_FORMAT(gl_texture_1d, texture, oned, single, simple)
        DECLARE_TARGET_FORMAT(gl_texture_1d_array, texture, oned, array, simple)
        DECLARE_TARGET_FORMAT(gl_texture_2d, texture, twod, single, simple)
        DECLARE_TARGET_FORMAT(gl_texture_2d_array, texture, twod, array, simple)
        DECLARE_TARGET_FORMAT(gl_texture_2d_multisample, texture, twod, single, multi)
        DECLARE_TARGET_FORMAT(gl_texture_2d_multisample_array, texture, twod, array, multi)
        DECLARE_TARGET_FORMAT(gl_texture_3d, texture, threed, single, simple)
        DECLARE_TARGET_FORMAT(gl_texture_rectangle, texture, rectangle, single, simple)
        DECLARE_TARGET_FORMAT(gl_texture_buffer, texture, buffer, single, simple)
        DECLARE_TARGET_FORMAT(gl_texture_cube_map, texture, cube_map, single, simple)
        DECLARE_TARGET_FORMAT(gl_renderbuffer, renderbuffer, twod, single, simple)

#undef DECLARE_TARGET_FORMAT

      } // namespace target
    } // namespace formats

    namespace ft = ::gtulu::internal::formats::target;
    namespace ftb = ::gtulu::internal::formats::target::base;
    namespace ftac = ::gtulu::internal::formats::target::cardinality;
    namespace ftf = ::gtulu::internal::formats::target::format;
    namespace fts = ::gtulu::internal::formats::target::sample;
    namespace ftt = ::gtulu::internal::formats::target::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TARGET_HPP_ */
