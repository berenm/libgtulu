/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_BINDING_SLOT_BUFFER_HPP_
#define GTULU_INTERNAL_BINDING_SLOT_BUFFER_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/binding/slot.hpp"

#include "gtulu/internal/object/object_fwd.hpp"

#include "meta/type_traits.hpp"

namespace gtulu {
  namespace internal {

    namespace binding {
      namespace slot {

        namespace buffer {

          META_ASPECT_DECLARE(slot,
                              SlotType,
                              using cst::,
                              (gl_array_buffer)(gl_copy_read_buffer)(gl_copy_write_buffer)(gl_element_array_buffer)(gl_pixel_pack_buffer)(gl_pixel_unpack_buffer)(gl_texture_buffer)(gl_transform_feedback_buffer)(gl_uniform_buffer)(gl_draw_indirect_buffer))

          typedef object_slot< obj::buffer_base, slot::gl_array_buffer > array_buffer;

        } // namespace buffer

      } // namespace slot
    } // namespace binding

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_BINDING_SLOT_BUFFER_HPP_ */
