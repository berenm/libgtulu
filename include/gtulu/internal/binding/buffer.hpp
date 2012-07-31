/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_BINDING_BUFFER_HPP_
#define GTULU_INTERNAL_BINDING_BUFFER_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/binding/bind.hpp"
#include "gtulu/internal/binding/slot.hpp"

#include "gtulu/internal/object/object_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace binding {
      namespace detail {

        template< typename BufferFormat, typename BufferSlot >
        struct binder< slot::object_slot< obj::buffer_base, BufferSlot >, obj::buffer< BufferFormat > > {
            typedef slot::object_slot< obj::buffer_base, BufferSlot > target_type;
            typedef obj::buffer< BufferFormat > source_type;

            void bind(target_type const& target, source_type& source) {
              fct::bind_buffer< typename target_type::slot_type >::call(*source);
            }
        };

      } // namespace detail

    } // namespace binding

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_BINDING_BUFFER_HPP_ */
