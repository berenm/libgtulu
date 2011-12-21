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

      template< typename ObjectType >
      struct properties_type {
          typedef ObjectType object_type;

          properties_type(object_type& object) :
              object_(object) {
          }

        protected:
          object_type& object_;
      };

      template< typename ObjectType, typename PropertyType, typename ValueType >
      struct property {
          typedef ObjectType object_type;
          typedef PropertyType property_type;
          typedef ValueType value_type;

          value_type get();
          operator value_type() {
            return get();
          }

          void set(value_type const& value);
          property& operator=(value_type const& value) {
            set(value);
            return *this;
          }

        protected:
          property(object_type& object) :
              object_(object) {
          }
          object_type& object_;

          friend struct properties_type< ObjectType > ;
      };

    } // namespace property

    template< typename Object >
    property::properties_type< Object > properties(Object& object) {
      return property::properties_type< Object >(object);
    }

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_PROPERTY_PROPERTY_HPP_ */
