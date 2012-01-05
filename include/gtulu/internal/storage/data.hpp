/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_HPP_

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename ValueType >
        struct wrapped_store {
            wrapped_store(ValueType* pointer,
                          std::size_t width = 1,
                          std::size_t height = 1,
                          std::size_t depth = 1,
                          std::size_t size = 0) :
                pointer_(pointer), width_(width), height_(height), depth_(depth), size_(size) {
            }

            ValueType* write() {
              return pointer_;
            }

            ValueType const* read() const {
              return pointer_;
            }

            std::size_t size() const {
              return size_ == 0 ? width_ * height_ * depth_ * sizeof(ValueType) : size_;
            }

            std::size_t value_size() const {
              return sizeof(ValueType);
            }

            std::size_t width() const {
              return width_;
            }

            std::size_t height() const {
              return height_;
            }

            std::size_t depth() const {
              return depth_;
            }

            ValueType* pointer_;
            std::size_t const width_;
            std::size_t const height_;
            std::size_t const depth_;
            std::size_t const size_;
        };

      } // namespace data

      template< typename ValueType >
      data::wrapped_store< ValueType > wrap(ValueType* pointer,
                                            std::size_t width = 1,
                                            std::size_t height = 1,
                                            std::size_t depth = 1,
                                            std::size_t size = 0) {
        return data::wrapped_store< ValueType >(pointer, width, height, depth);
      }

    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_HPP_ */
