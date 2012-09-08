/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_VECTOR_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_VECTOR_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< class ValueType >
        struct data_traits< std::vector< ValueType > > {
            typedef std::vector< ValueType > store_type;

            static uint8_t* write(store_type& store) {
              return reinterpret_cast< uint8_t* >(store.data());
            }

            static uint8_t const* read(store_type const& store) {
              return reinterpret_cast< uint8_t const* >(store.data());
            }

            static std::size_t value_size(store_type const& store) {
              return sizeof(ValueType);
            }

            static std::size_t size(store_type const& store) {
              return store.size() * sizeof(ValueType);
            }

            static offset_type offset(store_type const& store) {
              return offset_type();
            }

            static std::size_t width(store_type const& store) {
              return store.size();
            }

            static std::size_t height(store_type const& store) {
              return 1;
            }

            static std::size_t depth(store_type const& store) {
              return 1;
            }
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_VECTOR_HPP_ */
