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
            typedef ValueType (array_type)[Width];

            static ValueType* write(array_type& array_in) {
              return array_in;
            }

            static ValueType const* read(array_type const& array_in) {
              return array_in;
            }

            static std::size_t value_size(array_type const& container_in) {
              return sizeof(ValueType);
            }

            static std::size_t size(array_type const& data_in) {
              return width(data_in) * height(data_in) * depth(data_in) * value_size(data_in);
            }

            static std::size_t width(array_type const& container_in) {
              return Width;
            }

            static std::size_t height(array_type const& container_in) {
              return 1;
            }

            static std::size_t depth(array_type const& container_in) {
              return 1;
            }
        };

        template< class ValueType, std::size_t Width, std::size_t Height >
        struct data_traits< ValueType[Width][Height] > {
            typedef ValueType (array_type)[Width][Height];

            static ValueType* write(array_type& array_in) {
              return array_in;
            }

            static ValueType const* read(array_type const& array_in) {
              return array_in;
            }

            static std::size_t value_size(array_type const& container_in) {
              return sizeof(ValueType);
            }

            static std::size_t size(array_type const& data_in) {
              return width(data_in) * height(data_in) * depth(data_in) * value_size(data_in);
            }

            static std::size_t width(array_type const& container_in) {
              return Width;
            }

            static std::size_t height(array_type const& container_in) {
              return Height;
            }

            static std::size_t depth(array_type const& container_in) {
              return 1;
            }
        };

        template< class ValueType, std::size_t Width, std::size_t Height, std::size_t Depth >
        struct data_traits< ValueType[Width][Height][Depth] > {
            typedef ValueType (array_type)[Width][Height][Depth];

            static ValueType* write(array_type& array_in) {
              return array_in;
            }

            static ValueType const* read(array_type const& array_in) {
              return array_in;
            }

            static std::size_t value_size(array_type const& container_in) {
              return sizeof(ValueType);
            }

            static std::size_t size(array_type const& data_in) {
              return width(data_in) * height(data_in) * depth(data_in) * value_size(data_in);
            }

            static std::size_t width(array_type const& container_in) {
              return Width;
            }

            static std::size_t height(array_type const& container_in) {
              return Height;
            }

            static std::size_t depth(array_type const& container_in) {
              return Depth;
            }
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_ARRAY_HPP_ */
