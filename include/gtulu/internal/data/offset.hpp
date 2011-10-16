/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_DATA_OFFSET_HPP_
#define GTULU_INTERNAL_DATA_OFFSET_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {

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

    } // namespace data

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DATA_OFFSET_HPP_ */
