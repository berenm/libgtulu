/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_GIL_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_GIL_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/data/traits.hpp"

#include <boost/gil/image.hpp>
#include <boost/gil/pixel.hpp>
#include <boost/gil/typedefs.hpp>

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        template< typename Pixel, typename Alloc >
        struct data_traits< boost::gil::image< Pixel, false, Alloc > > {
            typedef boost::gil::image< Pixel, false, Alloc > store_type;
            typedef typename store_type::view_t::value_type value_type;

            static uint8_t* write(store_type& store) {
              return reinterpret_cast< uint8_t* >(&store._view[0]);
            }

            static uint8_t const* read(store_type const& store) {
              return reinterpret_cast< uint8_t const* >(&store._view[0]);
            }

            static std::size_t value_size(store_type const& store) {
              return sizeof(value_type);
            }

            static std::size_t size(store_type const& store) {
              return store._view.size() * sizeof(value_type);
            }

            static offset_type offset(store_type const& store) {
              return offset_type();
            }

            static std::size_t width(store_type const& store) {
              return store.width();
            }

            static std::size_t height(store_type const& store) {
              return store.height();
            }

            static std::size_t depth(store_type const& store) {
              return 1;
            }
        };

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_GIL_HPP_ */
