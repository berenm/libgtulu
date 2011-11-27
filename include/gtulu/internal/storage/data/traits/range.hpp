/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_RANGE_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_RANGE_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage/data/range.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< class StoreType >
        struct data_traits< range< StoreType > > {
            typedef range< StoreType > store_type;
            typedef typename store_type::store_traits store_traits;

            static uint8_t* write(store_type& store) {
              return store_traits::write(store.store()) + store_traits::value_size(store.store()) * store.value_offset();
            }

            static uint8_t const* read(store_type const& store) {
              return store_traits::read(store.store()) + store_traits::value_size(store.store()) * store.value_offset();
            }

            static std::size_t value_size(store_type const& store) {
              return store_traits::value_size(store.store());
            }

            static std::size_t size(store_type const& store) {
              return store.get_size();
            }

            static offset offset(store_type const& store) {
              return store.get_offset();
            }

            static std::size_t width(store_type const& store) {
              return store_traits::width(store.store()) - store.get_offset().x();
            }

            static std::size_t height(store_type const& store) {
              return store_traits::height(store.store()) - store.get_offset().y();
            }

            static std::size_t depth(store_type const& store) {
              return store_traits::depth(store.store()) - store.get_offset().z();
            }
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_RANGE_HPP_ */
