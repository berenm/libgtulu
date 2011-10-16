/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_EMPTY_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_EMPTY_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage/data/empty.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename DataFormat >
        struct data_traits< empty< DataFormat > > {
            typedef empty< DataFormat > data_type_t;

            static void* write(data_type_t& data_in) {
              return 0;
            }

            static void const* read(data_type_t const& data_in) {
              return 0;
            }

            static std::size_t size(data_type_t const& data_in) {
              return data_in.size();
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

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_EMPTY_HPP_ */
