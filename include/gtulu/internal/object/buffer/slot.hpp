/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_OBJECT_BUFFER_SLOT_HPP_
#define GTULU_INTERNAL_OBJECT_BUFFER_SLOT_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "meta/type_aspects.hpp"

namespace gtulu {
  namespace internal {

    namespace buffer {

      META_ASPECT_DECLARE(slot,
                          SlotType,
                          using cst::,
                          (gl_array_buffer)(gl_copy_read_buffer)(gl_copy_write_buffer)(gl_element_array_buffer)(gl_pixel_pack_buffer)(gl_pixel_unpack_buffer)(gl_texture_buffer)(gl_transform_feedback_buffer)(gl_uniform_buffer)(gl_draw_indirect_buffer))

    } // namespace buffer

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< buffer_base >::bind(std::uint32_t handle_) {
        static std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fct::bind_buffer< TargetType >::call(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace object

    namespace buffer {
      template< typename SlotType >
      struct buffer_slot {
          static_assert(is_a_slot< SlotType >::type::value, "SlotType is not a valid buffer slot.");

          typedef SlotType type;

          static inline void bind(obj::plug< obj::buffer_base > const& buffer) {
            obj::slot_binder< obj::buffer_base >::bind< SlotType >(buffer);
          }
          static inline void unbind(obj::plug< obj::buffer_base > const& buffer) {
            obj::slot_binder< obj::buffer_base >::clear< SlotType >();
          }
          static inline void clear() {
            obj::slot_binder< obj::buffer_base >::clear< SlotType >();
          }
      };

      template< typename SlotType >
      struct buffer_indexed_slot: public buffer_slot< SlotType > {
          typedef SlotType type;

          using buffer_slot< SlotType >::bind;
          using buffer_slot< SlotType >::unbind;
          using buffer_slot< SlotType >::clear;

          static inline void bind(obj::plug< obj::buffer_base > const& buffer,
                                  std::uint32_t const index,
                                  std::uint32_t const offset,
                                  std::uint32_t const size) {
            fct::bind_buffer_range< SlotType >::call(index, *buffer, offset, size);
          }

          static inline void bind(obj::plug< obj::buffer_base > const& buffer, std::uint32_t const index) {
            fct::bind_buffer_base< SlotType >::call(index, *buffer);
          }
      };
#define DECLARE_SLOT(slot_type_m) \
  typedef buffer_slot< slot::gl_##slot_type_m > slot_type_m##_slot; \

#define DECLARE_INDEXED_SLOT(slot_type_m) \
  typedef buffer_indexed_slot< slot::gl_##slot_type_m > slot_type_m##_slot; \

      DECLARE_SLOT(array_buffer)
      DECLARE_SLOT(copy_read_buffer)
      DECLARE_SLOT(copy_write_buffer)
      //  DECLARE_SLOT(draw_indirect_buffer)
      DECLARE_SLOT(element_array_buffer)
      DECLARE_SLOT(pixel_pack_buffer)
      DECLARE_SLOT(pixel_unpack_buffer)
      DECLARE_SLOT(texture_buffer)
      DECLARE_INDEXED_SLOT(transform_feedback_buffer)
      DECLARE_INDEXED_SLOT(uniform_buffer)

#undef DECLARE_INDEXED_SLOT
#undef DECLARE_SLOT
    } // namespace buffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_BUFFER_SLOT_HPP_ */
