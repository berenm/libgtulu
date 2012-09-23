/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_BINDING_BIND_HPP_
#define GTULU_INTERNAL_BINDING_BIND_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

    namespace binding {
      namespace slot {

        template< typename ObjectBase, typename ObjectBaseSlot >
        struct object_slot {
          typedef ObjectBase     object_type;
          typedef ObjectBaseSlot slot_type;
        };

      } // namespace slot
    } // namespace binding

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_BINDING_BIND_HPP_ */
