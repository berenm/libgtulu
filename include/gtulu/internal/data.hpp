/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_DATA_HPP_
#define GTULU_INTERNAL_DATA_HPP_

#include "gtulu/namespaces.hpp"

#include <boost/range.hpp>
#include <boost/range/pointer.hpp>
#include <boost/type_traits.hpp>

namespace gtulu {
  namespace internal {

    namespace data {

      template< typename Range >
      struct data_range {
        typedef typename boost::range_iterator< const Range >::type range_type;
        typedef typename boost::range_pointer< const Range >::type  pointer_type;
        typedef typename boost::range_size< const Range >::type     size_type;

        data_range(Range const& range) :
          data_(boost::begin(range)), size_(boost::size(range)), width_(size_), height_(1), depth_(1) {}

        data_range(Range const& range, std::size_t const width) :
          data_(boost::begin(range)), size_(boost::size(range)), width_(width), height_(1), depth_(1) {}

        data_range(Range const& range, std::size_t const width, std::size_t const height) :
          data_(boost::begin(range)), size_(boost::size(range)), width_(width), height_(width), depth_(1) {}

        data_range(Range const&      range,
                   std::size_t const width,
                   std::size_t const height,
                   std::size_t const depth) :
          data_(boost::begin(range)), size_(boost::size(range)), width_(width), height_(height), depth_(depth) {}

        pointer_type data() const {
          return data_;
        }

        size_type size() const {
          return size_ * sizeof(boost::remove_pointer< pointer_type >::type);
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
          pointer_type data_;
          size_type    size_;

          std::size_t width_;
          std::size_t height_;
          std::size_t depth_;
      };

    } // namespace data

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DATA_HPP_ */
