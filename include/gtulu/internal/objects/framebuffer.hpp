/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_HPP_
#define GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/objects/drawable.hpp"

#include "gtulu/internal/objects/texture.hpp"
#include "gtulu/internal/objects/renderbuffer.hpp"

namespace gtulu {
  namespace internal {

    namespace framebuffer {
      namespace slots {
        typedef cst::gl_read_framebuffer gl_read_framebuffer;
        typedef cst::gl_draw_framebuffer gl_draw_framebuffer;
      } // namespace slots

      namespace builtin {
        struct simple_buffer;
        struct double_buffer;
      } // namespace builtin

      namespace mode {
        struct monoscopic;
        struct stereoscopic;
      } // namespace mode

      namespace layered {
        struct yes;
        struct no;
      } // namespace layered
    } // namespace framebuffer

    namespace gif = ::gtulu::internal::framebuffer;
    namespace gifb = ::gtulu::internal::framebuffer::builtin;
    namespace gifl = ::gtulu::internal::framebuffer::layered;
    namespace gifm = ::gtulu::internal::framebuffer::mode;
    namespace gifs = ::gtulu::internal::framebuffer::slots;

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< framebuffer_base >::bind(::std::uint32_t handle_) {
        static ::std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fnc::gl_bind_framebuffer::call< target_type_t >(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace objects

    namespace framebuffer {
      template< typename slot_type_t >
      struct framebuffer_slot {
          typedef slot_type_t slot_type;

          static inline void bind(gio::plug< gio::framebuffer_base > const& framebuffer) {
            gio::slot_binder< gio::framebuffer_base >::bind< slot_type_t >(framebuffer);
          }
          static inline void unbind(gio::plug< gio::framebuffer_base > const& framebuffer) {
            gio::slot_binder< gio::framebuffer_base >::clear< slot_type_t >();
          }
      };
#define DECLARE_SLOT(slot_type_m) \
  typedef framebuffer_slot< slots::gl_##slot_type_m > slot_type_m##_slot; \

      DECLARE_SLOT(read_framebuffer)
      DECLARE_SLOT(draw_framebuffer)

#undef DECLARE_SLOT
    } // namespace framebuffer

    namespace objects {
      struct framebuffer_base: public plug< framebuffer_base > {
          template< typename slot_type_t = gif::draw_framebuffer_slot >
          inline void bind() const {
            slot_type_t::bind(*this);
          }

          template< typename slot_type_t = gif::draw_framebuffer_slot >
          inline void unbind() const {
            slot_type_t::unbind(*this);
          }

          void set_viewport(::std::uint32_t width,
                            ::std::uint32_t height,
                            ::std::uint32_t depth = 1,
                            ::std::uint32_t origin_x = 0,
                            ::std::uint32_t origin_y = 0,
                            ::std::uint32_t origin_z = 0) {
            fnc::gl_viewport::call(origin_x, origin_y, width, height);
            fnc::gl_depth_range::call(static_cast< float > (origin_z), static_cast< float > (depth));
          }
      };

      enum class default_drawable {
        front_left = GL_FRONT_LEFT, front_right = GL_FRONT_RIGHT, back_left = GL_BACK_LEFT, back_right = GL_BACK_RIGHT
      };

      template< typename framebuffer_format_t >
      struct default_framebuffer: virtual public object_base, public framebuffer_format_t {
          //          void set_default_viewport() {
          //            framebuffer_format_t::bind();
          //            ::std::int32_t data[4];
          //
          //            __gl_debug(glGetIntegerv, (GL_VIEWPORT)(data))
          //            glGetIntegerv(GL_VIEWPORT, data);
          //            __gl_check_error
          //
          //            framebuffer_format_t::set_viewport(data[2], data[3], 1, data[0], data[1]);
          //          }
      };

      template< typename framebuffer_format_t, typename layered_t = gif::layered::no >
      struct framebuffer: public object< framebuffer_base > , public framebuffer_format_t {
      };
    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_HPP_ */
