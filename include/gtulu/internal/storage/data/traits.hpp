/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename DataType >
        struct data_traits {
            typedef DataType data_type_t;

            static uint8_t* write(data_type_t& data_in) {
              return data_in.write();
            }

            static uint8_t const* read(data_type_t const& data_in) {
              return data_in.read();
            }

            static std::size_t size(data_type_t const& data_in) {
              return data_in.size();
            }

            static std::size_t value_size(data_type_t const& data_in) {
              return data_in.value_size();
            }

            static std::size_t width(data_type_t const& data_in) {
              return data_in.width();
            }

            static std::size_t height(data_type_t const& data_in) {
              return data_in.height();
            }

            static std::size_t depth(data_type_t const& data_in) {
              return data_in.depth();
            }
        };

        namespace traits {
          template< typename StoreType >
          static uint8_t* write(StoreType& store) {
            return data_traits< StoreType >::write(store);
          }

          template< typename StoreType >
          static uint8_t const* read(StoreType const& store) {
            return data_traits< StoreType >::read(store);
          }

          template< typename StoreType >
          static std::size_t size(StoreType const& store) {
            return data_traits< StoreType >::size(store);
          }

          template< typename StoreType >
          static std::size_t value_size(StoreType const& store) {
            return data_traits< StoreType >::value_size(store);
          }

          template< typename StoreType >
          static std::size_t width(StoreType const& store) {
            return data_traits< StoreType >::width(store);
          }

          template< typename StoreType >
          static std::size_t height(StoreType const& store) {
            return data_traits< StoreType >::height(store);
          }

          template< typename StoreType >
          static std::size_t depth(StoreType const& store) {
            return data_traits< StoreType >::depth(store);
          }
        } // namespace traits

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#include "gtulu/internal/storage/data/traits/array.hpp"
#include "gtulu/internal/storage/data/traits/gil.hpp"

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_ */
