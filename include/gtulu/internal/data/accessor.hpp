/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_DATA_ACCESSOR_HPP_
#define GTULU_INTERNAL_DATA_ACCESSOR_HPP_

namespace gtulu {
  namespace internal {

    namespace data {

      template< class Container >
      inline auto data(Container& container_in) -> decltype(container_in.begin()) {
        return container_in.data();
      }

      template< class Container >
      inline auto begin(Container const& container_in) -> decltype(container_in.begin()) {
        return container_in.data();
      }

      template< class ValueType, ::std::size_t Size >
      inline ValueType* data(ValueType const(&array_in)[Size]) {
        return array_in;
      }

      template< class Container >
      inline auto size(Container& container_in) -> decltype(container_in.size()) {
        return container_in.size();
      }

      template< class Container >
      inline auto size(Container const& container_in) -> decltype(container_in.size()) {
        return container_in.size();
      }

      template< class ValueType, ::std::size_t Size >
      inline ::std::size_t size(ValueType const(&array_in)[Size]) {
        return Size;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height >
      inline ::std::size_t size(ValueType const(&array_in)[Width][Height]) {
        return Width * Height;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height, ::std::size_t Depth >
      inline ::std::size_t size(ValueType const(&array_in)[Width][Height][Depth]) {
        return Width * Height * Depth;
      }

      template< class Container >
      inline auto width(Container& container_in) -> decltype(container_in.width()) {
        return container_in.width();
      }

      template< class Container >
      inline auto width(Container const& container_in) -> decltype(container_in.width()) {
        return container_in.width();
      }

      template< class ValueType, ::std::size_t Size >
      inline ::std::size_t width(ValueType const(&array_in)[Size]) {
        return Size;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height >
      inline ::std::size_t width(ValueType const(&array_in)[Width][Height]) {
        return Width;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height, ::std::size_t Depth >
      inline ::std::size_t width(ValueType const(&array_in)[Width][Height][Depth]) {
        return Width;
      }

      template< class Container >
      inline auto height(Container& container_in) -> decltype(container_in.height()) {
        return container_in.height();
      }

      template< class Container >
      inline auto height(Container const& container_in) -> decltype(container_in.height()) {
        return container_in.height();
      }

      template< class ValueType, ::std::size_t Size >
      inline ::std::size_t height(ValueType const(&array_in)[Size]) {
        return 1;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height >
      inline ::std::size_t height(ValueType const(&array_in)[Width][Height]) {
        return Height;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height, ::std::size_t Depth >
      inline ::std::size_t height(ValueType const(&array_in)[Width][Height][Depth]) {
        return Height;
      }

      template< class Container >
      inline auto depth(Container& container_in) -> decltype(container_in.depth()) {
        return container_in.depth();
      }

      template< class Container >
      inline auto depth(Container const& container_in) -> decltype(container_in.depth()) {
        return container_in.depth();
      }

      template< class ValueType, ::std::size_t Size >
      inline ::std::size_t depth(ValueType const(&array_in)[Size]) {
        return 1;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height >
      inline ::std::size_t depth(ValueType const(&array_in)[Width][Height]) {
        return 1;
      }

      template< class ValueType, ::std::size_t Width, ::std::size_t Height, ::std::size_t Depth >
      inline ::std::size_t depth(ValueType const(&array_in)[Width][Height][Depth]) {
        return Depth;
      }

    } // namespace data

    namespace gid = ::gtulu::internal::data;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DATA_ACCESSOR_HPP_ */
