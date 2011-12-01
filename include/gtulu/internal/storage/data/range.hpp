/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename StoreType >
        struct range {
            typedef data::data_traits< StoreType > store_traits;

            range(StoreType& store, offset_type const& offset, std::size_t const size = 0) :
                store_(store), offset_(offset), size_(size) {
            }

            StoreType& store() {
              return store_;
            }

            std::size_t value_offset() const {
              std::size_t const width = store_traits::width(store_);
              std::size_t const height = store_traits::height(store_);

              return offset_.x + offset_.y * width + offset_.z * width * height;
            }

            offset_type get_offset() const {
              return offset_;
            }

            std::size_t get_size() const {
              return size_ == 0 ? (store_traits::value_size(store_) * width() * height() * depth()) : size_;
            }

            std::size_t width() const {
              return store_traits::width(store_) - offset_.x;
            }

            std::size_t height() const {
              return store_traits::height(store_) - offset_.y;
            }

            std::size_t depth() const {
              return store_traits::depth(store_) - offset_.z;
            }

          private:
            StoreType& store_;

            offset_type const& offset_;
            std::size_t size_;
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_ */
