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

#include "gtulu/internal/format/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace target {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_texture_1d)(gl_texture_1d_array)(gl_texture_2d)(gl_texture_2d_array)(gl_texture_2d_multisample)(gl_texture_2d_multisample_array)(gl_texture_3d)(gl_texture_rectangle)(gl_texture_buffer)(gl_texture_cube_map)(gl_texture_cube_map_negative_x)(gl_texture_cube_map_negative_y)(gl_texture_cube_map_negative_z)(gl_texture_cube_map_positive_x)(gl_texture_cube_map_positive_y)(gl_texture_cube_map_positive_z)(gl_renderbuffer))

        template< typename Format, typename Target, typename Dimension, typename Cardinality, typename Sample >
        struct target_aspect {
            typedef Format format;
            typedef Target target;
            typedef Dimension dimension;
            typedef Cardinality cardinality;
            typedef Sample sample;
        };

        template< typename Format >
        struct target_format;

#define DECLARE_TARGET_FORMAT(format_m, target_m, dimension_m, cardinality_m, sample_m) \
      template< > struct target_format< format::format_m > {                            \
          typedef target_aspect< format::format_m,                                      \
                                 fc::target::target_m,                                  \
                                 fc::dimension::dimension_m,                            \
                                 fc::cardinality::cardinality_m,                        \
                                 fc::sample::sample_m > aspect;                         \
      };                                                                                \
      typedef target_format< format::format_m > format_m;

        DECLARE_TARGET_FORMAT(gl_texture_1d, texture, oned, one, simple)
        DECLARE_TARGET_FORMAT(gl_texture_1d_array, texture, oned, array, simple)
        DECLARE_TARGET_FORMAT(gl_texture_2d, texture, twod, one, simple)
        DECLARE_TARGET_FORMAT(gl_texture_2d_array, texture, twod, array, simple)
        DECLARE_TARGET_FORMAT(gl_texture_2d_multisample, texture, twod, one, multi)
        DECLARE_TARGET_FORMAT(gl_texture_2d_multisample_array, texture, twod, array, multi)
        DECLARE_TARGET_FORMAT(gl_texture_3d, texture, threed, one, simple)
        DECLARE_TARGET_FORMAT(gl_texture_rectangle, texture, rectangle, one, simple)
        DECLARE_TARGET_FORMAT(gl_texture_buffer, texture, buffer, one, simple)
        DECLARE_TARGET_FORMAT(gl_texture_cube_map, texture, cube_map, one, simple)
        DECLARE_TARGET_FORMAT(gl_renderbuffer, renderbuffer, twod, one, simple)

#undef DECLARE_TARGET_FORMAT

      } // namespace target
    } // namespace format

    namespace ft = ::gtulu::internal::format::target;
    namespace ftf = ::gtulu::internal::format::target::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TARGET_HPP_ */
