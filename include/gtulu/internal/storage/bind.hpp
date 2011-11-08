/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_BIND_HPP_
#define GTULU_INTERNAL_STORAGE_BIND_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/object/object_fwd.hpp"
#include "gtulu/internal/object/buffer/slot.hpp"

#include "gtulu/internal/storage/data/range.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace detail {

        template< typename TargetStore, typename SourceStore >
        struct copy_binder {
            typedef TargetStore target_store_t;
            typedef SourceStore source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store);
        };

        /* Buffer to Host */
        template< typename HostStore, typename DataFormat >
        struct copy_binder< HostStore, obj::buffer< DataFormat > > {
            typedef HostStore target_store_t;
            typedef obj::buffer< DataFormat > source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              source_store.template bind< buf::copy_read_buffer_slot >();
            }
        };

        /* Host to Buffer */
        template< typename DataFormat, typename HostStore >
        struct copy_binder< obj::buffer< DataFormat >, HostStore > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef HostStore source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              target_store.template bind< buf::copy_write_buffer_slot >();
            }
        };

        /* Buffer to Buffer */
        template< typename TargetDataFormat, typename SourceDataFormat >
        struct copy_binder< obj::buffer< TargetDataFormat >, obj::buffer< SourceDataFormat > > {
            typedef obj::buffer< TargetDataFormat > target_store_t;
            typedef obj::buffer< SourceDataFormat > source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              source_store.template bind< buf::copy_read_buffer_slot >();
              target_store.template bind< buf::copy_write_buffer_slot >();
            }
        };

        /* Texture to Host */
        template< typename HostStore, typename TextureFormat >
        struct copy_binder< HostStore, obj::texture< TextureFormat > > {
            typedef HostStore target_store_t;
            typedef obj::texture< TextureFormat > source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              source_store.bind();
              buf::pixel_pack_buffer_slot::clear();
            }
        };

        /* Host to Texture */
        template< typename TextureFormat, typename HostStore >
        struct copy_binder< obj::texture< TextureFormat >, HostStore > {
            typedef obj::texture< TextureFormat > target_store_t;
            typedef HostStore source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              buf::pixel_unpack_buffer_slot::clear();
              target_store.bind();
            }
        };

        /* Texture to Buffer */
        template< typename DataFormat, typename TextureFormat >
        struct copy_binder< obj::buffer< DataFormat >, obj::texture< TextureFormat > > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef obj::texture< TextureFormat > source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              source_store.bind();
              target_store.template bind< buf::pixel_pack_buffer_slot >();
            }
        };

        /* Buffer to Texture */
        template< typename TextureFormat, typename DataFormat >
        struct copy_binder< obj::texture< TextureFormat >, obj::buffer< DataFormat > > {
            typedef obj::texture< TextureFormat > target_store_t;
            typedef obj::buffer< DataFormat > source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              source_store.template bind< buf::pixel_unpack_buffer_slot >();
              target_store.bind();
            }
        };

        /* -- Ranges ------------------------------------------------------------------------------------------------ */

        /* Source range to Target */
        template< typename TargetStore, typename SourceStore >
        struct copy_binder< TargetStore, data::range< SourceStore > > {
            typedef TargetStore target_store_t;
            typedef data::range< SourceStore > source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< TargetStore, SourceStore >::bind(source_store.store(), target_store);
            }
        };

        /* Source to Target range */
        template< typename TargetStore, typename SourceStore >
        struct copy_binder< data::range< TargetStore >, SourceStore > {
            typedef data::range< TargetStore > target_store_t;
            typedef SourceStore source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< TargetStore, SourceStore >::bind(source_store, target_store.store());
            }
        };

        /* Source range to Target range */
        template< typename TargetStore, typename SourceStore >
        struct copy_binder< data::range< TargetStore >, data::range< SourceStore > > {
            typedef data::range< TargetStore > target_store_t;
            typedef data::range< SourceStore > source_store_t;

            static void bind(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< TargetStore, SourceStore >::bind(source_store.store(), target_store.store());
            }
        };

//        /* Framebuffer to Host */
//        template< typename HostStore, typename ColorBufferFormat>
//        struct copy_binder< HostStore, obj::color_buffer< ColorBufferFormat >> {
//            typedef HostStore target_store_t;
//            typedef obj::color_buffer< ColorBufferFormat > source_store_t;
//
//            static void bind(target_store_t& target_store, source_store_t const& source_store) {
//              //              source_store.bind();
//              buf::pixel_pack_buffer_slot::clear();
//            }
//        };
//
//        /* Framebuffer to Buffer */
//        template< typename DataFormat, typename ColorBufferFormat>
//        struct copy_binder< obj::buffer< DataFormat >, obj::color_buffer< ColorBufferFormat >> {
//            typedef obj::buffer< DataFormat > target_store_t;
//            typedef obj::color_buffer< ColorBufferFormat > source_store_t;
//
//            static void bind(target_store_t& target_store, source_store_t const& source_store) {
//              //              source_store.bind();
//              target_store.bind< buf::pixel_pack_buffer_slot >();
//            }
//        };
//
//        /* Framebuffer to Texture */
//        template< typename TextureFormat, typename ColorBufferFormat>
//        struct copy_binder< obj::texture< TextureFormat >, obj::color_buffer< ColorBufferFormat >> {
//            typedef obj::texture< TextureFormat > target_store_t;
//            typedef obj::color_buffer< ColorBufferFormat > source_store_t;
//
//            static void bind(target_store_t& target_store, source_store_t const& source_store) {
//              //              source_store.bind();
//              buf::pixel_pack_buffer_slot::clear();
//            }
//        };

      }// namespace detail

    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_BIND_HPP_ */
