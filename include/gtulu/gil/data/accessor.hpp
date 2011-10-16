/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_GIL_DATA_ACCESSOR_HPP_
#define GTULU_GIL_DATA_ACCESSOR_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/data/accessor.hpp"

#include <boost/gil/image.hpp>
#include <boost/gil/pixel.hpp>
#include <boost/gil/typedefs.hpp>

namespace gtulu {
  namespace internal {

    namespace data {

      template< typename Pixel, typename Alloc >
      struct data_traits< boost::gil::image< Pixel, false, Alloc > > {
          typedef boost::gil::image< Pixel, false, Alloc > image_type;
          typedef typename image_type::view_t::value_type value_type;

          static value_type* write(image_type& image_in) {
            return &image_in._view[0];
          }

          static value_type const* read(image_type const& image_in) {
            return &image_in._view[0];
          }

          static auto size(image_type const& image_in) -> decltype(image_in._view.size()) {
            return image_in._view.size() * sizeof(value_type);
          }

          static auto width(image_type const& image_in) -> decltype(image_in.width()) {
            return image_in.width();
          }

          static auto height(image_type const& image_in) -> decltype(image_in.height()) {
            return image_in.height();
          }

          static std::size_t depth(image_type const& image_in) {
            return 1;
          }
      };

    } // namespace data

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_GIL_DATA_ACCESSOR_HPP_ */
