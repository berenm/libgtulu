/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_ATTACHER_HPP_
#define GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_ATTACHER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/texture.hpp"
#include "gtulu/internal/objects/renderbuffer.hpp"
#include "gtulu/internal/objects/framebuffer.hpp"

#include "gtulu/internal/formats/texture.hpp"
#include "gtulu/internal/formats/uniform.hpp"

namespace gtulu {
  namespace internal {

    namespace framebuffer {

      template< typename layered_t, typename target_format_t >
      struct texture_attacher_detail {
          template< typename framebuffer_slot_type_t >
          inline static void attach(cst::gl_constant_base const& color,
                                    gio::texture_base const& texture,
                                    ::std::uint32_t const mipmap_level,
                                    ::std::uint32_t const layer);
      };

#define DECLARE_ATTACHER(layered_m, target_format_m, attach_function_m) \
      template< > \
      struct texture_attacher_detail< gif::layered::layered_m, ft::target_format_m > { \
          template< typename framebuffer_slot_type_t > \
          inline static void attach(cst::gl_constant_base const& color, gio::texture_base const& texture, \
                                    ::std::uint32_t const mipmap_level, ::std::uint32_t const layer) { \
            fnc:: attach_function_m ::call(framebuffer_slot_type_t::get(), color, *texture, mipmap_level); \
          } \
      }; \

#define DECLARE_ATTACHER_TARGET(layered_m, target_format_m, attach_function_m) \
      template< > \
      struct texture_attacher_detail< gif::layered::layered_m, ftf::target_format_m > { \
          template< typename framebuffer_slot_type_t > \
          inline static void attach(cst::gl_constant_base const& color, gio::texture_base const& texture, \
                                    ::std::uint32_t const mipmap_level, ::std::uint32_t const layer) { \
            fnc:: attach_function_m ::call(framebuffer_slot_type_t::get(), color, ftf::target_format_m(), *texture, mipmap_level); \
          } \
      }; \

#define DECLARE_ATTACHER_CUBE(target_format_m) \
      template< > \
      struct texture_attacher_detail< gif::layered::no, ftf::target_format_m > { \
          template< typename framebuffer_slot_type_t > \
          inline static void attach(cst::gl_constant_base const& color, gio::texture_base const& texture, \
                                    ::std::uint32_t const mipmap_level, ::std::uint32_t const layer) { \
            fnc:: gl_framebuffer_texture_2d ::call(framebuffer_slot_type_t::get(), color, ftf::target_format_m(), *texture, mipmap_level); \
          } \
      }; \

      DECLARE_ATTACHER(yes, gl_texture_3d, gl_framebuffer_texture)
      DECLARE_ATTACHER(yes, gl_texture_cube_map, gl_framebuffer_texture)
      DECLARE_ATTACHER(yes, gl_texture_1d_array, gl_framebuffer_texture)
      DECLARE_ATTACHER(yes, gl_texture_2d_array, gl_framebuffer_texture)
      DECLARE_ATTACHER(yes, gl_texture_2d_multisample_array, gl_framebuffer_texture)

      DECLARE_ATTACHER_TARGET(no, gl_texture_1d, gl_framebuffer_texture_1d)
      DECLARE_ATTACHER_TARGET(no, gl_texture_2d, gl_framebuffer_texture_2d)
      DECLARE_ATTACHER_TARGET(no, gl_texture_2d_multisample, gl_framebuffer_texture_2d)
      DECLARE_ATTACHER_TARGET(no, gl_texture_rectangle, gl_framebuffer_texture_2d)

      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_positive_x)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_positive_y)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_positive_z)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_negative_x)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_negative_y)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_negative_z)

      template< >
      struct texture_attacher_detail< gif::layered::no, ftf::gl_texture_3d > {
          template< typename framebuffer_slot_type_t >
          inline static void attach(cst::gl_constant_base const& color,
                                    gio::texture_base const& texture,
                                    ::std::uint32_t const mipmap_level,
                                    ::std::uint32_t const layer) {
            fnc::gl_framebuffer_texture_3d::call(framebuffer_slot_type_t::value,
                                                 color,
                                                 ftf::gl_texture_3d::value,
                                                 *texture,
                                                 mipmap_level,
                                                 layer);
          }
      };

#undef DECLARE_ATTACHER_CUBE
#undef DECLARE_ATTACHER_TARGET
#undef DECLARE_ATTACHER

      template< typename texture_target_format_t, typename target_format_t >
      struct is_target_attachable: fus::is_target_same< texture_target_format_t, ft::target_format< target_format_t > > {
      };

      template< >
      struct is_target_attachable< ft::gl_texture_cube_map, ftf::gl_texture_cube_map_positive_x > {
      };
      template< >
      struct is_target_attachable< ft::gl_texture_cube_map, ftf::gl_texture_cube_map_positive_y > {
      };
      template< >
      struct is_target_attachable< ft::gl_texture_cube_map, ftf::gl_texture_cube_map_positive_z > {
      };
      template< >
      struct is_target_attachable< ft::gl_texture_cube_map, ftf::gl_texture_cube_map_negative_x > {
      };
      template< >
      struct is_target_attachable< ft::gl_texture_cube_map, ftf::gl_texture_cube_map_negative_y > {
      };
      template< >
      struct is_target_attachable< ft::gl_texture_cube_map, ftf::gl_texture_cube_map_negative_z > {
      };

      template< typename layered_t, typename texture_format_t, typename target_format_t >
      struct texture_attacher: public is_target_attachable< typename texture_format_t::target, target_format_t > {
          template< typename framebuffer_slot_type_t >
          inline static void attach(cst::gl_constant_base const& color,
                                    const gio::texture< texture_format_t >& texture,
                                    ::std::uint32_t const mipmap_level,
                                    ::std::uint32_t const layer) {
            texture_attacher_detail< layered_t, target_format_t >::template attach< framebuffer_slot_type_t >(color,
                                                                                                              texture,
                                                                                                              mipmap_level,
                                                                                                              layer);
          }
      };

      template< typename framebuffer_slot_type_t >
      struct attacher {
          template< typename layered_t, typename texture_format_t,
              typename target_format_t = typename texture_format_t::target::info::format >
          inline static void attach(cst::gl_constant_base const& color,
                                    const gio::texture< texture_format_t >& texture,
                                    ::std::uint32_t const mipmap_level,
                                    ::std::uint32_t const layer) {
            texture_attacher< layered_t, texture_format_t, target_format_t >::template attach< framebuffer_slot_type_t >(color,
                                                                                                                         texture,
                                                                                                                         mipmap_level,
                                                                                                                         layer);
          }

          inline static void attach(cst::gl_constant_base const& color,
                                    gio::renderbuffer_base const& renderbuffer,
                                    ::std::uint32_t const mipmap_level,
                                    ::std::uint32_t const layer) {
            fnc::gl_framebuffer_renderbuffer::call(framebuffer_slot_type_t::get(),
                                                   color,
                                                   ft::gl_renderbuffer::info::format(),
                                                   *renderbuffer);
          }
      };
    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_ATTACHER_HPP_ */
