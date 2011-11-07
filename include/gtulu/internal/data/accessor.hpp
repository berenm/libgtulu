/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_DATA_ACCESSOR_HPP_
#define GTULU_INTERNAL_DATA_ACCESSOR_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

namespace gtulu {
  namespace internal {

    namespace data {

      template< typename Range >
      struct data_range;

      template< typename Data >
      struct data_traits;

      template< class Range >
      struct data_traits< data_range< Range > > {
          typedef data_range< Range > data_range_type;
          typedef typename data_range_type::value_type value_type;

          static auto write(data_range_type& container_in) -> decltype(container_in.data()) {
            return container_in.data();
          }

          static auto read(data_range_type const& container_in) -> decltype(container_in.data()) {
            return container_in.data();
          }

          static auto size(data_range_type const& container_in) -> decltype(container_in.size()) {
            return container_in.size();
          }

          static auto width(data_range_type const& container_in) -> decltype(container_in.width()) {
            return container_in.width();
          }

          static auto height(data_range_type const& container_in) -> decltype(container_in.height()) {
            return container_in.height();
          }

          static auto depth(data_range_type const& container_in) -> decltype(container_in.depth()) {
            return container_in.depth();
          }
      };

    } // namespace data

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DATA_ACCESSOR_HPP_ */
