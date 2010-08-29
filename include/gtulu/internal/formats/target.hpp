/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_TARGET_HPP_
#define GTULU_INTERNAL_FORMAT_TARGET_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace target {

#define TARGET_FORMATS  ((texture_1d, GL_TEXTURE_1D)) \
                        ((texture_1d_array, GL_TEXTURE_1D_ARRAY)) \
                        ((texture_2d, GL_TEXTURE_2D)) \
                        ((texture_2d_array, GL_TEXTURE_2D_ARRAY)) \
                        ((texture_2d_multisample, GL_TEXTURE_2D_MULTISAMPLE)) \
                        ((texture_2d_multisample_array, GL_TEXTURE_2D_MULTISAMPLE_ARRAY)) \
                        ((texture_3d, GL_TEXTURE_3D)) \
                        ((texture_rectangle, GL_TEXTURE_RECTANGLE)) \
                        ((texture_buffer, GL_TEXTURE_BUFFER)) \
                        ((texture_cube_map, GL_TEXTURE_CUBE_MAP)) \
                        ((texture_cube_map_negative_x, GL_TEXTURE_CUBE_MAP_NEGATIVE_X)) \
                        ((texture_cube_map_negative_y, GL_TEXTURE_CUBE_MAP_NEGATIVE_Y)) \
                        ((texture_cube_map_negative_z, GL_TEXTURE_CUBE_MAP_NEGATIVE_Z)) \
                        ((texture_cube_map_positive_x, GL_TEXTURE_CUBE_MAP_POSITIVE_X)) \
                        ((texture_cube_map_positive_y, GL_TEXTURE_CUBE_MAP_POSITIVE_Y)) \
                        ((texture_cube_map_positive_z, GL_TEXTURE_CUBE_MAP_POSITIVE_Z)) \
                        ((renderbuffer, GL_RENDERBUFFER)) \

        namespace format {
#define CONSTANT_LIST TARGET_FORMATS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
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
