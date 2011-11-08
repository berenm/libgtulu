/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_EMPTY_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_EMPTY_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename DataFormat >
        struct empty {
            empty(std::size_t const width_in, std::size_t const height_in = 1, std::size_t const depth_in = 1) :
                width_(width_in), height_(height_in), depth_(depth_in) {
            }

            void* write() const {
              return 0;
            }
            void const* read() const {
              return 0;
            }
            std::size_t value_size() const {
              return fcmn::size_of< DataFormat >::value;
            }
            std::size_t size() const {
              return 0;
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

          private:
            std::size_t width_;
            std::size_t height_;
            std::size_t depth_;
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_EMPTY_HPP_ */
