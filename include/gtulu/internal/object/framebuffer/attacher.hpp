/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_FRAMEBUFFER_ATTACHER_HPP_
#define GTULU_INTERNAL_OBJECT_FRAMEBUFFER_ATTACHER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/texture.hpp"
#include "gtulu/internal/object/renderbuffer.hpp"
#include "gtulu/internal/object/framebuffer.hpp"

#include "gtulu/internal/format/texture.hpp"
#include "gtulu/internal/format/sampler.hpp"

namespace gtulu {
  namespace internal {

    namespace framebuffer {

      template< typename Layered, typename TargetFormat >
      struct texture_attacher_detail {
        template< typename FramebufferSlotType >
        inline static void attach(cst::gl_constant_base const& color,
                                  obj::texture_base const&     texture,
                                  std::uint32_t const          mipmap_level,
                                  std::uint32_t const          layer);
      };

#define DECLARE_ATTACHER(layered_m, target_format_m, attach_function_m)                               \
  template< >                                                                                         \
  struct texture_attacher_detail< fbf::layered::layered_m, ftgt::target_format_m > {                  \
    template< typename FramebufferSlotType >                                                          \
    inline static void attach(cst::gl_constant_base const & color, obj::texture_base const & texture, \
                              std::uint32_t const mipmap_level, std::uint32_t const layer) {          \
      fct::attach_function_m::call(FramebufferSlotType::get(), color, *texture, mipmap_level);        \
    }                                                                                                 \
  };                                                                                                  \

#define DECLARE_ATTACHER_TARGET(layered_m, target_format_m)                                                              \
  template< >                                                                                                            \
  struct texture_attacher_detail< fbf::layered::layered_m, ftgt::target_format_m > {                                     \
    typedef fct::framebuffer_texture< fcmn::get_dimension_literal< target_format_m >::type > attach_function;            \
                                                                                                                         \
    template< typename FramebufferSlotType >                                                                             \
    inline static void attach(cst::gl_constant_base const & color, obj::texture_base const & texture,                    \
                              std::uint32_t const mipmap_level, std::uint32_t const layer) {                             \
      attach_function::call(FramebufferSlotType::get(), color, ftgt::format::target_format_m(), *texture, mipmap_level); \
    }                                                                                                                    \
  };                                                                                                                     \

      DECLARE_ATTACHER(yes, gl_texture_3d, framebuffer_texture< > )
      DECLARE_ATTACHER(yes, gl_texture_cube_map, framebuffer_texture< > )
      DECLARE_ATTACHER(yes, gl_texture_1d_array, framebuffer_texture< > )
      DECLARE_ATTACHER(yes, gl_texture_2d_array, framebuffer_texture< > )
      DECLARE_ATTACHER(yes, gl_texture_2d_multisample_array, framebuffer_texture< > )

      DECLARE_ATTACHER_TARGET(no, gl_texture_1d)
      DECLARE_ATTACHER_TARGET(no, gl_texture_2d)
      DECLARE_ATTACHER_TARGET(no, gl_texture_2d_multisample)
      DECLARE_ATTACHER_TARGET(no, gl_texture_rectangle)

      DECLARE_ATTACHER_TARGET(no, gl_texture_cube_map_positive_x)
      DECLARE_ATTACHER_TARGET(no, gl_texture_cube_map_positive_y)
      DECLARE_ATTACHER_TARGET(no, gl_texture_cube_map_positive_z)
      DECLARE_ATTACHER_TARGET(no, gl_texture_cube_map_negative_x)
      DECLARE_ATTACHER_TARGET(no, gl_texture_cube_map_negative_y)
      DECLARE_ATTACHER_TARGET(no, gl_texture_cube_map_negative_z)

      template< >
      struct texture_attacher_detail< fbf::layered::no, ftgt::format::gl_texture_3d > {
        typedef fct::framebuffer_texture< fcmn::get_dimension_literal< ftgt::format::gl_texture_3d >::type > attach_function;

        inline static void attach(cst::gl_constant_base const& color, obj::texture_base const& texture,
                                  std::uint32_t const mipmap_level, std::uint32_t const layer) {
          attach_function::call(FramebufferSlotType::get(), color, ftgt::format::gl_texture_3d(), *texture, mipmap_level, layer);

        }

      };

#undef DECLARE_ATTACHER_CUBE
#undef DECLARE_ATTACHER_TARGET
#undef DECLARE_ATTACHER

      template< typename TextureTargetFormat, typename TargetFormat >
      struct is_target_attachable : boost::is_same< TextureTargetFormat, TargetFormat > {};

      template< >
      struct is_target_attachable< ftgt::gl_texture_cube_map, ftgt::gl_texture_cube_map_positive_x > {};

      template< >
      struct is_target_attachable< ftgt::gl_texture_cube_map, ftgt::gl_texture_cube_map_positive_y > {};

      template< >
      struct is_target_attachable< ftgt::gl_texture_cube_map, ftgt::gl_texture_cube_map_positive_z > {};

      template< >
      struct is_target_attachable< ftgt::gl_texture_cube_map, ftgt::gl_texture_cube_map_negative_x > {};

      template< >
      struct is_target_attachable< ftgt::gl_texture_cube_map, ftgt::gl_texture_cube_map_negative_y > {};

      template< >
      struct is_target_attachable< ftgt::gl_texture_cube_map, ftgt::gl_texture_cube_map_negative_z > {};

      template< typename Layered, typename TextureFormat, typename TargetFormat >
      struct texture_attacher : public is_target_attachable< typename TextureFormat::target_format, TargetFormat > {
        template< typename FramebufferSlotType >
        inline static void attach(cst::gl_constant_base const& color, obj::texture< TextureFormat > const& texture,
                                  std::uint32_t const mipmap_level, std::uint32_t const layer) {
          texture_attacher_detail< Layered, TargetFormat >::template attach< FramebufferSlotType >(color, texture, mipmap_level, layer);

        }

      };

      template< typename FramebufferSlotType >
      struct attacher {
        template< typename Layered, typename TextureFormat,
                  typename TargetFormat = typename TextureFormat::target_format >
        inline static void attach(cst::gl_constant_base const& color, obj::texture< TextureFormat > const& texture,
                                  std::uint32_t const mipmap_level, std::uint32_t const layer) {
          texture_attacher< Layered, TextureFormat, TargetFormat >::template attach< FramebufferSlotType >(color, texture, mipmap_level, layer);
        }

        inline static void attach(cst::gl_constant_base const& color, obj::renderbuffer_base const& renderbuffer,
                                  std::uint32_t const mipmap_level, std::uint32_t const layer) {
          fct::framebuffer_renderbuffer< >::call(FramebufferSlotType::get(), color, cst::gl_renderbuffer(), *renderbuffer);
        }

      };

    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_FRAMEBUFFER_ATTACHER_HPP_ */
