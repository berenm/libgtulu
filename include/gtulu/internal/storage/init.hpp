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
#include "gtulu/internal/storage/bind.hpp"
#include "gtulu/internal/storage/data/empty.hpp"
#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {

      namespace detail {

        template< typename SourceStore, typename TargetStore >
        struct initializer {
            typedef SourceStore source_store_t;
            typedef TargetStore target_store_t;

            static void init(source_store_t const& source_store, target_store_t const& target_store);
        };

        /* Host to Buffer */
        template< typename HostStore, typename DataFormat >
        struct initializer< HostStore, obj::buffer< DataFormat > > {
            typedef HostStore source_store_t;
            typedef obj::buffer< DataFormat > target_store_t;

            template< typename InitParameter >
            static void init(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
              fct::gl_buffer_data< InitParameter >::call(data::data_traits< source_store_t >::size(source_store),
                                                         data::data_traits< source_store_t >::read(source_store));
            }
        };

        /* Host to Texture */
        template< typename HostStore, typename TextureFormat >
        struct initializer< HostStore, obj::texture< TextureFormat > > {
            typedef HostStore source_store_t;
            typedef obj::texture< TextureFormat > target_store_t;

            template< typename InitParameter >
            static void init(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Buffer to Texture */
        template< typename DataFormat, typename TextureFormat >
        struct initializer< obj::buffer< DataFormat >, obj::texture< TextureFormat > > {
            typedef obj::buffer< DataFormat > source_store_t;
            typedef obj::texture< TextureFormat > target_store_t;

            template< typename InitParameter >
            static void init(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Buffer range to Texture */
        template< typename DataFormat, typename TextureFormat >
        struct initializer< data::range< obj::buffer< DataFormat > >, obj::texture< TextureFormat > > {
            typedef data::range< obj::buffer< DataFormat > > source_store_t;
            typedef obj::texture< TextureFormat > target_store_t;

            template< typename InitParameter >
            static void init(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

//        template< typename Store, typename DataType >
//        struct initializer {
//            static void init(Store& store, DataType const& init_data);
//        };
//
//        template< typename DataFormat, typename BufferUsage, typename DataType >
//        struct initializer< obj::buffer< DataFormat, BufferUsage >, DataType > {
//            typedef obj::buffer< DataFormat, BufferUsage > store_t;
//            typedef DataType data_type_t;
//            typedef data::data_traits< DataType > data_traits;
//
//            template< typename TemporarySlotType = buf::copy_write_buffer_slot >
//            static void init(store_t& store, data_type_t const& init_data) {
//              store.bind< TemporarySlotType >();
//              fct::gl_buffer_data< TemporarySlotType, BufferUsage >::call(data_traits::size(init_data),
//                                                                          data_traits::read(init_data));
//            }
//        };

      }// namespace detail

//      template< typename Store, typename DataType >
//      void init(Store& store, DataType const& init_data) {
//        detail::initializer< Store, DataType >::init(store, init_data);
//      }

    }// namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_INIT_HPP_ */
