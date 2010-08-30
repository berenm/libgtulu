/**
 * @file
 * @date 26 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_ATTACHER_HPP_
#define GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_ATTACHER_HPP_

#include "gtulu/opengl.hpp"
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
          inline static void attach(const ::boost::uint32_t color, const gio::texture_base& texture,
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer);
      };

#define DECLARE_ATTACHER(layered_m, target_format_m, attach_function_m) \
      template< > \
      struct texture_attacher_detail< gif::layered::layered_m, ft::target_format_m > { \
          template< typename framebuffer_slot_type_t > \
          inline static void attach(const ::boost::uint32_t color, const gio::texture_base& texture, \
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer) { \
            __gl_debug(attach_function_m, (framebuffer_slot_type_t())(color)(*texture)(mipmap_level)); \
            attach_function_m(gif::slots::from_type< framebuffer_slot_type_t >::value, color, *texture, mipmap_level); \
            __gl_check_error; \
          } \
      }; \

#define DECLARE_ATTACHER_TARGET(layered_m, target_format_m, attach_function_m) \
      template< > \
      struct texture_attacher_detail< gif::layered::layered_m, ftf::target_format_m > { \
          template< typename framebuffer_slot_type_t > \
          inline static void attach(const ::boost::uint32_t color, const gio::texture_base& texture, \
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer) { \
            __gl_debug(attach_function_m, (framebuffer_slot_type_t())(color)(typename ftf::target_format_m())(*texture)(mipmap_level)); \
            attach_function_m(gif::slots::from_type< framebuffer_slot_type_t >::value, color, ftf::from_type< typename ftf::target_format_m >::value, *texture, mipmap_level); \
            __gl_check_error; \
          } \
      }; \

#define DECLARE_ATTACHER_CUBE(target_format_m) \
      template< > \
      struct texture_attacher_detail< gif::layered::no, ftf::target_format_m > { \
          template< typename framebuffer_slot_type_t > \
          inline static void attach(const ::boost::uint32_t color, const gio::texture_base& texture, \
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer) { \
            __gl_debug(glFramebufferTexture2D, (framebuffer_slot_type_t())(color)(typename ftf::target_format_m())(*texture)(mipmap_level)); \
            glFramebufferTexture2D(gif::slots::from_type< framebuffer_slot_type_t >::value, color, ftf::from_type< typename ftf::target_format_m >::value, *texture, mipmap_level); \
            __gl_check_error; \
          } \
      }; \

      DECLARE_ATTACHER(yes, gl_texture_3d, glFramebufferTexture)
      DECLARE_ATTACHER(yes, gl_texture_cube_map, glFramebufferTexture)
      DECLARE_ATTACHER(yes, gl_texture_1d_array, glFramebufferTexture)
      DECLARE_ATTACHER(yes, gl_texture_2d_array, glFramebufferTexture)
      DECLARE_ATTACHER(yes, gl_texture_2d_multisample_array, glFramebufferTexture)

      DECLARE_ATTACHER_TARGET(no, gl_texture_1d, glFramebufferTexture1D)
      DECLARE_ATTACHER_TARGET(no, gl_texture_2d, glFramebufferTexture2D)
      DECLARE_ATTACHER_TARGET(no, gl_texture_2d_multisample, glFramebufferTexture2D)
      DECLARE_ATTACHER_TARGET(no, gl_texture_rectangle, glFramebufferTexture2D)

      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_positive_x)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_positive_y)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_positive_z)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_negative_x)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_negative_y)
      DECLARE_ATTACHER_CUBE(gl_texture_cube_map_negative_z)

      template< >
      struct texture_attacher_detail< gif::layered::no, ftf::gl_texture_3d > {
          template< typename framebuffer_slot_type_t >
          inline static void attach(const ::boost::uint32_t color, const gio::texture_base& texture,
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer) {
            __gl_debug(glFramebufferTexture3D, (framebuffer_slot_type_t())(color)(typename ftf::gl_texture_3d())(*texture)(mipmap_level)(layer));
            glFramebufferTexture3D(gif::slots::from_type< framebuffer_slot_type_t >::value, color, ftf::from_type<
                typename ftf::gl_texture_3d >::value, *texture, mipmap_level, layer);
            __gl_check_error;
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
          inline static void attach(const ::boost::uint32_t color, const gio::texture< texture_format_t >& texture,
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer) {
            texture_attacher_detail< layered_t, target_format_t >::template attach< framebuffer_slot_type_t >(color,
                texture, mipmap_level, layer);
          }
      };

      template< typename framebuffer_slot_type_t >
      struct attacher {
          template< typename layered_t, typename texture_format_t,
              typename target_format_t = typename texture_format_t::target::info::format >
          inline static void attach(const ::boost::uint32_t color, const gio::texture< texture_format_t >& texture,
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer) {
            texture_attacher< layered_t, texture_format_t, target_format_t >::template attach< framebuffer_slot_type_t >(
                color, texture, mipmap_level, layer);
          }

          inline static void attach(const ::boost::uint32_t color, const gio::renderbuffer_base& renderbuffer,
                                    const ::boost::uint32_t mipmap_level, const ::boost::uint32_t layer) {
            __gl_debug(glFramebufferRenderbuffer, (framebuffer_slot_type_t())(color)(typename ft::gl_renderbuffer::info::format())(*renderbuffer));
            glFramebufferRenderbuffer(gif::slots::from_type< framebuffer_slot_type_t >::value, color, ftf::from_type<
                ft::gl_renderbuffer::info::format >::value, *renderbuffer);
            __gl_check_error;
          }
      };
    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_ATTACHER_HPP_ */
