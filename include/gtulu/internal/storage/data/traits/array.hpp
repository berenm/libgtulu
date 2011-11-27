/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_ARRAY_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_ARRAY_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< class ValueType, std::size_t Width >
        struct data_traits< ValueType[Width] > {
            typedef ValueType (store_type)[Width];

            static uint8_t* write(store_type& store) {
              return reinterpret_cast< uint8_t* >(store);
            }

            static uint8_t const* read(store_type const& store) {
              return reinterpret_cast< uint8_t const* >(store);
            }

            static std::size_t value_size(store_type const& store) {
              return sizeof(ValueType);
            }

            static std::size_t size(store_type const& data_in) {
              return Width * sizeof(ValueType);
            }

            static offset_type offset(store_type const& store) {
              return offset_type();
            }

            static std::size_t width(store_type const& store) {
              return Width;
            }

            static std::size_t height(store_type const& store) {
              return 1;
            }

            static std::size_t depth(store_type const& store) {
              return 1;
            }
        };

        template< class ValueType, std::size_t Width, std::size_t Height >
        struct data_traits< ValueType[Width][Height] > {
            typedef ValueType (store_type)[Width][Height];

            static uint8_t* write(store_type& store) {
              return reinterpret_cast< uint8_t* >(store);
            }

            static uint8_t const* read(store_type const& store) {
              return reinterpret_cast< uint8_t const* >(store);
            }

            static std::size_t value_size(store_type const& store) {
              return sizeof(ValueType);
            }

            static std::size_t size(store_type const& data_in) {
              return Width * Height * sizeof(ValueType);
            }

            static offset_type offset(store_type const& store) {
              return offset_type();
            }

            static std::size_t width(store_type const& store) {
              return Width;
            }

            static std::size_t height(store_type const& store) {
              return Height;
            }

            static std::size_t depth(store_type const& store) {
              return 1;
            }
        };

        template< class ValueType, std::size_t Width, std::size_t Height, std::size_t Depth >
        struct data_traits< ValueType[Width][Height][Depth] > {
            typedef ValueType (store_type)[Width][Height][Depth];

            static uint8_t* write(store_type& store) {
              return reinterpret_cast< uint8_t* >(store);
            }

            static uint8_t const* read(store_type const& store) {
              return reinterpret_cast< uint8_t const* >(store);
            }

            static std::size_t value_size(store_type const& store) {
              return sizeof(ValueType);
            }

            static std::size_t size(store_type const& data_in) {
              return Width * Height * Depth * sizeof(ValueType);
            }

            static offset_type offset(store_type const& store) {
              return offset_type();
            }

            static std::size_t width(store_type const& store) {
              return Width;
            }

            static std::size_t height(store_type const& store) {
              return Height;
            }

            static std::size_t depth(store_type const& store) {
              return Depth;
            }
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_ARRAY_HPP_ */
