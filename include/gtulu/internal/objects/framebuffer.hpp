/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_HPP_
#define GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/objects/drawable.hpp"

#include "gtulu/internal/objects/texture.hpp"
#include "gtulu/internal/objects/renderbuffer.hpp"

namespace gtulu {
  namespace internal {

#define FRAMEBUFFER_SLOTS ((read_draw_framebuffer, GL_FRAMEBUFFER)) \
                          ((read_framebuffer, GL_READ_FRAMEBUFFER)) \
                          ((draw_framebuffer, GL_DRAW_FRAMEBUFFER)) \

    namespace framebuffer {
      namespace slots {
#define CONSTANT_LIST FRAMEBUFFER_SLOTS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
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
      void slot_binder< framebuffer_base >::bind(const plug< framebuffer_base >& pluggable_object) {
        __gl_debug(glBindFramebuffer, (gifs::from_type< target_type_t >())(*pluggable_object))
        glBindFramebuffer(gifs::from_type< target_type_t >::value, *pluggable_object);
        __gl_check_error
      }
      template< >
      template< typename target_type_t >
      void slot_binder< framebuffer_base >::clear() {
        __gl_debug(glBindFramebuffer, (gifs::from_type< target_type_t >())(0))
        glBindFramebuffer(gifs::from_type< target_type_t >::value, 0);
        __gl_check_error
      }
    } // namespace objects

    namespace framebuffer {
      template< typename slot_type_t >
      struct framebuffer_slot {
          static inline void bind(const gio::plug< gio::framebuffer_base >& framebuffer) {
            gio::slot_binder< gio::framebuffer_base >::bind< slot_type_t >(framebuffer);
          }
          static inline void unbind(const gio::plug< gio::framebuffer_base >& framebuffer) {
            gio::slot_binder< gio::framebuffer_base >::clear< slot_type_t >();
          }
      };
#define DECLARE_SLOT(slot_type_m) \
  typedef framebuffer_slot< slots::gl_##slot_type_m > slot_type_m##_slot; \

      DECLARE_SLOT(read_draw_framebuffer)
      DECLARE_SLOT(read_framebuffer)
      DECLARE_SLOT(draw_framebuffer)

#undef DECLARE_SLOT
    } // namespace framebuffer

    namespace objects {
      struct framebuffer_base: public plug< framebuffer_base > {
          template< typename slot_type_t = gif::read_draw_framebuffer_slot >
          inline void bind() const {
            slot_type_t::bind(*this);
          }

          template< typename slot_type_t = gif::read_draw_framebuffer_slot >
          inline void unbind() const {
            slot_type_t::unbind(*this);
          }
      };

      enum class default_drawable {
        front_left = GL_FRONT_LEFT, front_right = GL_FRONT_RIGHT, back_left = GL_BACK_LEFT, back_right = GL_BACK_RIGHT
      };

      template< typename framebuffer_format_t >
      struct default_framebuffer: public framebuffer_base, virtual public object_base, public framebuffer_format_t {
      };

      template< typename framebuffer_format_t, typename layered_t = gif::layered::no >
      struct framebuffer: public framebuffer_base, public object< framebuffer_base > , public framebuffer_format_t {
      };
    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_FRAMEBUFFER_HPP_ */
