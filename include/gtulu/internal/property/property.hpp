/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_PROPERTY_PROPERTY_HPP_
#define GTULU_INTERNAL_PROPERTY_PROPERTY_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

    namespace property {

      template< typename Object >
      struct properties_type {
          properties_type(Object& object) :
              object_(object) {
          }

        private:
          Object& object_;
      };

    } // namespace property

    template< typename Object >
    property::properties_type< Object > properties(Object& object) {
      return property::properties_type< Object >(object);
    }

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_PROPERTY_PROPERTY_HPP_ */
