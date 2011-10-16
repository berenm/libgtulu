/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_INIT_HPP_
#define GTULU_INTERNAL_STORAGE_INIT_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/object/buffer.hpp"
#include "gtulu/internal/storage/data/empty.hpp"
#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {

      namespace detail {

        template< typename SourceStore, typename DestinationStore >
        struct copy_binder {
            static void init(SourceStore const& store, DestinationStore const& init_data) {
            }
        };

        template< typename Store, typename DataType >
        struct initializer {
            static void init(Store& store, DataType const& init_data);
        };

        template< typename DataFormat, typename BufferUsage, typename DataType >
        struct initializer< obj::buffer< DataFormat, BufferUsage >, DataType > {
            typedef obj::buffer< DataFormat, BufferUsage > store_t;
            typedef DataType data_type_t;
            typedef data::data_traits< DataType > data_traits;

            template< typename TemporarySlotType = buf::copy_write_buffer_slot >
            static void init(store_t& store, data_type_t const& init_data) {
              store.bind< TemporarySlotType >();
              fct::gl_buffer_data::call< TemporarySlotType, BufferUsage >(data_traits::size(init_data),
                                                                          data_traits::read(init_data));
            }
        };

      } // namespace detail

      template< typename Store, typename DataType >
      void init(Store& store, DataType const& init_data) {
        detail::initializer< Store, DataType >::init(store, init_data);
      }

    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_INIT_HPP_ */
