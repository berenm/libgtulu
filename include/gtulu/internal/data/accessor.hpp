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

      template< class ValueType, std::size_t Width >
      struct data_traits< ValueType[Width] > {
          typedef ValueType (array_type)[Width];

          static ValueType* write(array_type& array_in) {
            return array_in;
          }

          static ValueType const* read(array_type const& array_in) {
            return array_in;
          }

          static std::size_t size(array_type const& container_in) {
            return Width * sizeof(ValueType);
          }

          static std::size_t width(array_type const& container_in) {
            return Width;
          }

          static std::size_t height(array_type const& container_in) {
            return 1;
          }

          static std::size_t depth(array_type const& container_in) {
            return 1;
          }
      };

      template< class ValueType, std::size_t Width, std::size_t Height >
      struct data_traits< ValueType[Width][Height] > {
          typedef ValueType (array_type)[Width][Height];

          static ValueType* write(array_type& array_in) {
            return array_in;
          }

          static ValueType const* read(array_type const& array_in) {
            return array_in;
          }

          static std::size_t size(array_type const& container_in) {
            return Width * Height * sizeof(ValueType);
          }

          static std::size_t width(array_type const& container_in) {
            return Width;
          }

          static std::size_t height(array_type const& container_in) {
            return Height;
          }

          static std::size_t depth(array_type const& container_in) {
            return 1;
          }
      };

      template< class ValueType, std::size_t Width, std::size_t Height, std::size_t Depth >
      struct data_traits< ValueType[Width][Height][Depth] > {
          typedef ValueType (array_type)[Width][Height][Depth];

          static ValueType* write(array_type& array_in) {
            return array_in;
          }

          static ValueType const* read(array_type const& array_in) {
            return array_in;
          }

          static std::size_t size(array_type const& container_in) {
            return Width * Height * Depth * sizeof(ValueType);
          }

          static std::size_t width(array_type const& container_in) {
            return Width;
          }

          static std::size_t height(array_type const& container_in) {
            return Height;
          }

          static std::size_t depth(array_type const& container_in) {
            return Depth;
          }
      };

    } // namespace data

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DATA_ACCESSOR_HPP_ */
