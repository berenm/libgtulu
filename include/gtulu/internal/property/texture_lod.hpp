/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_PROPERTY_TEXTURE_LOD_HPP_
#define GTULU_INTERNAL_PROPERTY_TEXTURE_LOD_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/constants_fwd.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object_fwd.hpp"
#include "gtulu/internal/property/property.hpp"

#include "meta/type_aspects.hpp"

namespace gtulu {
  namespace internal {

    namespace property {
      namespace texture_lod {

        META_ASPECT_DECLARE(property,
                            Property,
                            using cst::,
                                  (gl_texture_width) (gl_texture_height) (gl_texture_depth) (gl_texture_internal_format) (gl_texture_red_size) (gl_texture_green_size) (gl_texture_blue_size) (gl_texture_alpha_size) (gl_texture_depth_size) (gl_texture_compressed) (gl_texture_compressed_image_size))

#define DECLARE_PROPERTY(property_m, gl_property_m)                                  \
  struct property_m {                                                                \
    template< typename TextureFormat >                                               \
    static std::int32_t get(obj::texture_lod< TextureFormat > const & texture_lod) { \
      typedef typename TextureFormat::target_format::aspect::format target_cst;      \
      texture_lod.get_texture().bind();                                              \
      std::int32_t output;                                                           \
      fct::get_tex_level_parameter<                                                  \
        target_cst,                                                                  \
        property::gl_property_m                                                      \
        >::call(texture_lod.get_level(), &output);                                   \
      return output;                                                                 \
    }                                                                                \
  };

        DECLARE_PROPERTY(width, gl_texture_width)
        DECLARE_PROPERTY(height, gl_texture_height)
        DECLARE_PROPERTY(depth, gl_texture_depth)
        DECLARE_PROPERTY(internal_format, gl_texture_internal_format)
        DECLARE_PROPERTY(red_size, gl_texture_red_size)
        DECLARE_PROPERTY(green_size, gl_texture_green_size)
        DECLARE_PROPERTY(blue_size, gl_texture_blue_size)
        DECLARE_PROPERTY(alpha_size, gl_texture_alpha_size)
        DECLARE_PROPERTY(depth_size, gl_texture_depth_size)
        DECLARE_PROPERTY(compressed, gl_texture_compressed)
        DECLARE_PROPERTY(compressed_image_size, gl_texture_compressed_image_size)

#undef DECLARE_PROPERTY

      } // namespace texture_lod

      template< typename TextureFormat >
      struct properties_type< obj::texture_lod< TextureFormat > > {
        typedef obj::texture_lod< TextureFormat > object_type;

        properties_type(object_type& object) :
          object_(object) {}

        std::int32_t width() const {
          return texture_lod::width::get(object_);
        }

        std::int32_t height() const {
          return texture_lod::height::get(object_);
        }

        std::int32_t depth() const {
          return texture_lod::depth::get(object_);
        }

        std::int32_t internal_format() const {
          return texture_lod::internal_format::get(object_);
        }

        std::int32_t red_size() const {
          return texture_lod::red_size::get(object_);
        }

        std::int32_t green_size() const {
          return texture_lod::green_size::get(object_);
        }

        std::int32_t blue_size() const {
          return texture_lod::blue_size::get(object_);
        }

        std::int32_t alpha_size() const {
          return texture_lod::alpha_size::get(object_);
        }

        std::int32_t depth_size() const {
          return texture_lod::depth_size::get(object_);
        }

        std::int32_t is_compressed() const {
          return texture_lod::compressed::get(object_);
        }

        std::int32_t compressed_size() const {
          return texture_lod::compressed_image_size::get(object_);
        }

        std::size_t size() {
          if (is_compressed()) {
            return compressed_size();
          } else {
            return width() * height() * depth() * fcmn::size_of< typename TextureFormat::data_format >::value;
          }
        }

        private:
          object_type& object_;
      };

    } // namespace property

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_PROPERTY_TEXTURE_LOD_HPP_ */
