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

            static auto write(data_type_t& data_in) -> decltype(data_in.write()) {
              return data_in.write();
            }

            static auto read(data_type_t const& data_in) -> decltype(data_in.read()) {
              return data_in.read();
            }

            static auto size(data_type_t const& data_in) -> decltype(data_in.size()) {
              return data_in.size();
            }

            static auto value_size(data_type_t const& data_in) -> decltype(data_in.value_size()) {
              return data_in.value_size();
            }

            static auto width(data_type_t const& data_in) -> decltype(data_in.width()) {
              return data_in.width();
            }

            static auto height(data_type_t const& data_in) -> decltype(data_in.height()) {
              return data_in.height();
            }

            static auto depth(data_type_t const& data_in) -> decltype(data_in.depth()) {
              return data_in.depth();
            }
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#include "gtulu/internal/storage/data/traits/array.hpp"
#include "gtulu/internal/storage/data/traits/gil.hpp"

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_ */
