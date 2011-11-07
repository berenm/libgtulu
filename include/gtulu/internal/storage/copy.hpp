/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_COPY_HPP_
#define GTULU_INTERNAL_STORAGE_COPY_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/object/buffer.hpp"
#include "gtulu/internal/storage/copy.hpp"
#include "gtulu/internal/storage/data/empty.hpp"
#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {

      namespace detail {

        template< typename SourceStore, typename TargetStore >
        struct copier {
            typedef SourceStore source_store_t;
            typedef TargetStore target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store);
        };

        /* Buffer to Host */
        template< typename DataFormat, typename HostStore >
        struct copier< obj::buffer< DataFormat >, HostStore > {
            typedef obj::buffer< DataFormat > source_store_t;
            typedef HostStore target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Host to Buffer */
        template< typename HostStore, typename DataFormat >
        struct copier< HostStore, obj::buffer< DataFormat > > {
            typedef HostStore source_store_t;
            typedef obj::buffer< DataFormat > target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Buffer to Buffer */
        template< typename SourceDataFormat, typename TargetDataFormat >
        struct copier< obj::buffer< SourceDataFormat >, obj::buffer< TargetDataFormat > > {
            typedef obj::buffer< SourceDataFormat > source_store_t;
            typedef obj::buffer< TargetDataFormat > target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Texture to Host */
        template< typename TextureFormat, typename HostStore >
        struct copier< obj::texture< TextureFormat >, HostStore > {
            typedef obj::texture< TextureFormat > source_store_t;
            typedef HostStore target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Host to Texture */
        template< typename HostStore, typename TextureFormat >
        struct copier< HostStore, obj::texture< TextureFormat > > {
            typedef HostStore source_store_t;
            typedef obj::texture< TextureFormat > target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Texture to Buffer */
        template< typename TextureFormat, typename DataFormat >
        struct copier< obj::texture< TextureFormat >, obj::buffer< DataFormat > > {
            typedef obj::texture< TextureFormat > source_store_t;
            typedef obj::buffer< DataFormat > target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

        /* Buffer to Texture */
        template< typename DataFormat, typename TextureFormat >
        struct copier< obj::buffer< DataFormat >, obj::texture< TextureFormat > > {
            typedef obj::buffer< DataFormat > source_store_t;
            typedef obj::texture< TextureFormat > target_store_t;

            static void copy(source_store_t const& source_store, target_store_t const& target_store) {
              copy_binder< source_store_t, target_store_t >::bind(source_store, target_store);
            }
        };

      } // namespace detail

      template< typename Store, typename DataType >
      void copy(Store& store, DataType const& copy_data) {
        detail::copier< Store, DataType >::copy(store, copy_data);
      }

    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_COPY_HPP_ */
