/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_FRAMEBUFFER_HPP_
#define GTULU_INTERNAL_OBJECT_FRAMEBUFFER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"
#include "gtulu/internal/object/drawable.hpp"

#include "gtulu/internal/object/texture.hpp"
#include "gtulu/internal/object/renderbuffer.hpp"

namespace gtulu {
  namespace internal {

    namespace framebuffer {

      META_ASPECT_DECLARE(slot, SlotType, using cst::, (gl_read_framebuffer) (gl_draw_framebuffer))
      META_ASPECT_DECLARE(builtin, Builtin, struct, (simple_buffer) (double_buffer))
      META_ASPECT_DECLARE(mode, Mode, struct, (monoscopic) (stereoscopic))
      META_ASPECT_DECLARE(layered, Layered, struct, (yes) (no))

      META_ASPECT_DECLARE(status,
                          StatusType,
                          using cst::,
                          (gl_framebuffer_complete)(gl_framebuffer_undefined)(gl_framebuffer_incomplete_attachment)(gl_framebuffer_incomplete_missing_attachment)(gl_framebuffer_unsupported)(gl_framebuffer_incomplete_multisample)(gl_framebuffer_incomplete_layer_targets))

      namespace status {
        cst::gl_constant_base const get(std::uint32_t value);
      } // namespace status

    } // namespace framebuffer

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< framebuffer_base >::bind(std::uint32_t handle_) {
        static std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fct::bind_framebuffer< TargetType >::call(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace object

    namespace framebuffer {
      template< typename SlotType >
      struct framebuffer_slot {
          typedef SlotType slot_type;

          static inline void bind(obj::plug< obj::framebuffer_base > const& framebuffer) {
            obj::slot_binder< obj::framebuffer_base >::bind< SlotType >(framebuffer);
          }
          static inline void unbind(obj::plug< obj::framebuffer_base > const& framebuffer) {
            obj::slot_binder< obj::framebuffer_base >::clear< SlotType >();
          }
          static inline void clear() {
            obj::slot_binder< obj::framebuffer_base >::clear< SlotType >();
          }
      };
#define DECLARE_SLOT(slot_type_m) \
  typedef framebuffer_slot< slot::gl_##slot_type_m > slot_type_m##_slot; \

      DECLARE_SLOT(read_framebuffer)
      DECLARE_SLOT(draw_framebuffer)

#undef DECLARE_SLOT
    } // namespace framebuffer

    namespace object {
      struct framebuffer_base: public plug< framebuffer_base > {
          template< typename SlotType = fbf::draw_framebuffer_slot >
          inline void bind() const {
            SlotType::bind(*this);
          }

          template< typename SlotType = fbf::draw_framebuffer_slot >
          inline void unbind() const {
            SlotType::unbind(*this);
          }

          void set_viewport(std::uint32_t width,
                            std::uint32_t height,
                            std::uint32_t depth = 1,
                            std::uint32_t origin_x = 0,
                            std::uint32_t origin_y = 0,
                            std::uint32_t origin_z = 0) {
            fct::viewport< >::call(origin_x, origin_y, width, height);
            fct::depth_range< >::call(static_cast< float >(origin_z), static_cast< float >(depth));
          }

          template< typename SlotType = fbf::slot::gl_draw_framebuffer >
          cst::gl_constant_base const get_status() {
            return fbf::status::get(fct::check_framebuffer_status< SlotType >::call());
          }
      };

      enum class default_drawable {
        front_left = GL_FRONT_LEFT, front_right = GL_FRONT_RIGHT, back_left = GL_BACK_LEFT, back_right = GL_BACK_RIGHT
      };

      template< typename FramebufferFormat >
      struct default_framebuffer: virtual public object_base, public FramebufferFormat {
          //          void set_default_viewport() {
          //            framebuffer_format_t::bind();
          //            std::int32_t data[4];
          //
          //            __gtulu_debug()(glGetIntegerv, (GL_VIEWPORT)(data))
          //            glGetIntegerv(GL_VIEWPORT, data);
          //            __gtulu_check_error
          //
          //            framebuffer_format_t::set_viewport(data[2], data[3], 1, data[0], data[1]);
          //          }
      };

      template< typename FramebufferFormat, typename Layered = fbf::layered::no >
      struct framebuffer: public object< framebuffer_base >, public FramebufferFormat {
      };
    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_FRAMEBUFFER_HPP_ */
