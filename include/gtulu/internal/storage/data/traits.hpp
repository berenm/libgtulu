/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_
#define GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_

#include "gtulu/namespaces.hpp"

#include <glm/glm.hpp>

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace data {

        struct offset_type : public glm::uvec3 {
          offset_type(std::size_t const x=0, std::size_t const y=0, std::size_t const z=0) :
            glm::uvec3(x, y, z) {}

        };

        struct dimension_type : public glm::uvec3 {
          dimension_type(std::size_t const width=1, std::size_t const height=1, std::size_t const depth=1) :
            glm::uvec3(width, height, depth) {}

          std::size_t const width() const {
            return x;
          }

          std::size_t const height() const {
            return y;
          }

          std::size_t const depth() const {
            return z;
          }

        };

        template< typename DataType >
        struct data_traits {
          typedef DataType data_type_t;

          static uint8_t* write(data_type_t& data) {
            return data.write();
          }

          static uint8_t const* read(data_type_t const& data) {
            return data.read();
          }

          static std::size_t value_size(data_type_t const& data) {
            return data.value_size();
          }

          static std::size_t size(data_type_t const& data) {
            return data.size();
          }

          static offset_type offset(data_type_t const& data) {
            return offset_type();
          }

          static std::size_t width(data_type_t const& data) {
            return data.width();
          }

          static std::size_t height(data_type_t const& data) {
            return data.height();
          }

          static std::size_t depth(data_type_t const& data) {
            return data.depth();
          }

        };

        namespace traits {
          template< typename StoreType >
          static uint8_t* write(StoreType& store) {
            return data_traits< StoreType >::write(store);
          }

          template< typename StoreType >
          static uint8_t const* read(StoreType const& store) {
            return data_traits< StoreType >::read(store);
          }

          template< typename StoreType >
          static std::size_t value_size(StoreType const& store) {
            return data_traits< StoreType >::value_size(store);
          }

          template< typename StoreType >
          static std::size_t size(StoreType const& store) {
            return data_traits< StoreType >::size(store);
          }

          template< typename StoreType >
          static std::size_t offset(StoreType const& store) {
            return data_traits< StoreType >::offset(store);
          }

          template< typename StoreType >
          static std::size_t width(StoreType const& store) {
            return data_traits< StoreType >::width(store);
          }

          template< typename StoreType >
          static std::size_t height(StoreType const& store) {
            return data_traits< StoreType >::height(store);
          }

          template< typename StoreType >
          static std::size_t depth(StoreType const& store) {
            return data_traits< StoreType >::depth(store);
          }

        } // namespace traits

      } // namespace data
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#include "gtulu/internal/storage/data/traits/array.hpp"
#include "gtulu/internal/storage/data/traits/vector.hpp"
#include "gtulu/internal/storage/data/traits/gil.hpp"

#endif /* GTULU_INTERNAL_STORAGE_DATA_TRAITS_HPP_ */
