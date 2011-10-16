/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_BIND_HPP_
#define GTULU_INTERNAL_STORAGE_BIND_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/object/buffer.hpp"
#include "gtulu/internal/object/texture.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {

      namespace detail {

        template< typename SourceStore, typename TargetStore >
        struct copy_binder {
            typedef SourceStore source_store_t;
            typedef TargetStore target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
            }
        };

        /* Buffer to Host */
        template< typename DataFormat, typename HostStore >
        struct copy_binder< obj::buffer< DataFormat >, HostStore > {
            typedef obj::buffer< DataFormat > source_store_t;
            typedef HostStore target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
              source_store.bind< buf::copy_read_buffer_slot >();
            }
        };

        /* Host to Buffer */
        template< typename HostStore, typename DataFormat >
        struct copy_binder< HostStore, obj::buffer< DataFormat > > {
            typedef HostStore source_store_t;
            typedef obj::buffer< DataFormat > target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
              source_store.bind< buf::copy_write_buffer_slot >();
            }
        };

        /* Buffer to Buffer */
        template< typename SourceDataFormat, typename TargetDataFormat >
        struct copy_binder< obj::buffer< SourceDataFormat >, obj::buffer< TargetDataFormat > > {
            typedef obj::buffer< SourceDataFormat > source_store_t;
            typedef obj::buffer< TargetDataFormat > target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
              source_store.bind< buf::copy_read_buffer_slot >();
              target_store.bind< buf::copy_write_buffer_slot >();
            }
        };

        /* Texture to Host */
        template< typename TextureFormat, typename HostStore >
        struct copy_binder< obj::texture< TextureFormat >, HostStore > {
            typedef obj::texture< TextureFormat > source_store_t;
            typedef HostStore target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
              source_store.bind();
              buf::pixel_pack_buffer_slot::clear();
            }
        };

        /* Host to Texture */
        template< typename HostStore, typename TextureFormat >
        struct copy_binder< HostStore, obj::texture< TextureFormat > > {
            typedef HostStore source_store_t;
            typedef obj::texture< TextureFormat > target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
              buf::pixel_unpack_buffer_slot::clear();
              target_store.bind();
            }
        };

        /* Texture to Buffer */
        template< typename TextureFormat, typename DataFormat >
        struct copy_binder< obj::texture< TextureFormat >, obj::buffer< DataFormat > > {
            typedef obj::texture< TextureFormat > source_store_t;
            typedef obj::buffer< DataFormat > target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
              source_store.bind();
              target_store.bind< buf::pixel_pack_buffer_slot >();
            }
        };

        /* Buffer to Texture */
        template< typename DataFormat, typename TextureFormat >
        struct copy_binder< obj::buffer< DataFormat >, obj::texture< TextureFormat > > {
            typedef obj::buffer< DataFormat > source_store_t;
            typedef obj::texture< TextureFormat > target_store_t;

            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
              source_store.bind< buf::pixel_unpack_buffer_slot >();
              target_store.bind();
            }
        };

//        /* Framebuffer to Host */
//        template< typename ColorBuffer, typename HostStore >
//        struct copy_binder< ColorBuffer, HostStore > {
//            typedef ColorBuffer source_store_t;
//            typedef HostStore target_store_t;
//
//            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
//              //              source_store.bind();
//              buf::pixel_pack_buffer_slot::clear();
//            }
//        };
//
//        /* Framebuffer to Buffer */
//        template< typename ColorBuffer, typename DataFormat >
//        struct copy_binder< ColorBuffer, obj::buffer< DataFormat > > {
//            typedef ColorBuffer source_store_t;
//            typedef obj::buffer< DataFormat > target_store_t;
//
//            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
//              //              source_store.bind();
//              target_store.bind< buf::pixel_pack_buffer_slot >();
//            }
//        };
//
//        /* Framebuffer to Texture */
//        template< typename ColorBuffer, typename TextureFormat >
//        struct copy_binder< ColorBuffer, obj::texture< TextureFormat > > {
//            typedef ColorBuffer source_store_t;
//            typedef obj::texture< TextureFormat > target_store_t;
//
//            static void bind(source_store_t const& source_store, target_store_t const& target_store) {
//              //              source_store.bind();
//              buf::pixel_pack_buffer_slot::clear();
//            }
//        };

      }// namespace detail

    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_BIND_HPP_ */
