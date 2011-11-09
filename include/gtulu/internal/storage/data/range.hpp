/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_

#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        struct offset {
            offset() :
                x_(0), y_(0), z_(0) {
            }
            offset(std::size_t const x_in) :
                x_(x_in), y_(0), z_(0) {
            }
            offset(std::size_t const x_in, std::size_t const y_in) :
                x_(x_in), y_(y_in), z_(0) {
            }
            offset(std::size_t const x_in, std::size_t const y_in, std::size_t const z_in) :
                x_(x_in), y_(y_in), z_(z_in) {
            }

            std::size_t x() const {
              return x_;
            }
            std::size_t y() const {
              return y_;
            }
            std::size_t z() const {
              return z_;
            }

          private:
            std::size_t x_;
            std::size_t y_;
            std::size_t z_;
        };

        template< typename StoreType >
        struct range {
            range(StoreType& store,
                  std::size_t const x_in = 0,
                  std::size_t const y_in = 0,
                  std::size_t const z_in = 0,
                  std::size_t const size_in = 0) :
                store_(store), x_(x_in), y_(y_in), z_(z_in), size_(size_in) {
            }

            StoreType& store() {
              return store_;
            }

            auto read() -> decltype(data::data_traits< StoreType >::read(StoreType())) {
              return store_.read() + value_size() * x_ * (y_ * store_.width()) + (z_ * store_.width() * store_.height());
            }
            auto write() -> decltype(data::data_traits< StoreType >::write(StoreType())) {
              return store_.write() + value_size() * x_ * (y_ * store_.width())
                  + (z_ * store_.width() * store_.height());
            }

            std::size_t value_size() {
              return data::data_traits< StoreType >::value_size(store_);
            }
            std::size_t size() {
              return size_ == 0 ? (value_size() * width() * height() * depth()) : size_;
            }

            std::size_t width() const {
              return data_traits< StoreType >::width(store) - x_;
            }
            std::size_t height() const {
              return data_traits< StoreType >::width(store) - y_;
            }
            std::size_t depth() const {
              return data_traits< StoreType >::width(store) - z_;
            }

            std::size_t x() const {
              return x_;
            }
            std::size_t y() const {
              return y_;
            }
            std::size_t z() const {
              return z_;
            }

            offset get_offset() const {
              return offset(x_, y_, z_);
            }

          private:
            StoreType& store_;

            std::size_t x_;
            std::size_t y_;
            std::size_t z_;

            std::size_t size_;
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_RANGE_HPP_ */
