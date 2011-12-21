/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_COPY_HPP_
#define GTULU_INTERNAL_STORAGE_COPY_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/object/object_fwd.hpp"
#include "gtulu/internal/storage/bind.hpp"
#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage/data/range.hpp"
#include "gtulu/internal/storage/helper/texture.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace detail {

        template< typename TargetStore, typename SourceStore >
        struct copier {
            typedef TargetStore target_store_t;
            typedef SourceStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store);
        };

        /* Buffer to Host */
        template< typename HostStore, typename DataFormat >
        struct copier< HostStore, obj::buffer< DataFormat > > {
            typedef HostStore target_store_t;
            typedef obj::buffer< DataFormat > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
            }
        };

        /* Host to Buffer */
        template< typename DataFormat, typename HostStore >
        struct copier< obj::buffer< DataFormat >, HostStore > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef HostStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
            }
        };

        /* Buffer to Buffer */
        template< typename TargetDataFormat, typename SourceDataFormat >
        struct copier< obj::buffer< TargetDataFormat >, obj::buffer< SourceDataFormat > > {
            typedef obj::buffer< TargetDataFormat > target_store_t;
            typedef obj::buffer< SourceDataFormat > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
            }
        };

        /* Texture LOD to Any */
        template< typename TargetStore, typename TextureFormat >
        struct copier< TargetStore, obj::texture_lod< TextureFormat > > {
            typedef TargetStore target_store_t;
            typedef obj::texture_lod< TextureFormat > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::copy(target_store, source_store);
            }
        };
        template< typename TargetStore, typename TextureFormat >
        struct copier< TargetStore, obj::texture< TextureFormat > > {
            typedef TargetStore target_store_t;
            typedef obj::texture< TextureFormat > source_store_t;

            template< typename InitParameter = void >
            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::copy(target_store, source_store);
            }
        };

        /* Any to Texture LOD */
        template< typename TextureFormat, typename SourceStore >
        struct copier< obj::texture_lod< TextureFormat >, SourceStore > {
            typedef obj::texture_lod< TextureFormat > target_store_t;
            typedef SourceStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::copy(target_store, source_store);
            }
        };
        template< typename TextureFormat, typename SourceStore >
        struct copier< obj::texture< TextureFormat >, SourceStore > {
            typedef obj::texture< TextureFormat > target_store_t;
            typedef SourceStore source_store_t;

            template< typename InitParameter = void >
            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::copy(target_store, source_store);
            }
        };

        /* Any to Texture LOD range */
        template< typename TextureFormat, typename SourceStore >
        struct copier< data::range< obj::texture_lod< TextureFormat > >, SourceStore > {
            typedef data::range< obj::texture_lod< TextureFormat > > target_store_t;
            typedef SourceStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::copy(target_store.store(), source_store, target_traits_t::offset(target_store));
            }
        };
        template< typename TextureFormat, typename SourceStore >
        struct copier< data::range< obj::texture< TextureFormat > >, SourceStore > {
            typedef data::range< obj::texture< TextureFormat > > target_store_t;
            typedef SourceStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            static void copy(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::copy(target_store.store(), source_store, target_traits_t::offset(target_store));
            }
        };

      } // namespace detail

      template< typename TargetStore, typename SourceStore >
      void copy(TargetStore& target_store, SourceStore const& source_store) {
        detail::copier< TargetStore, SourceStore >::copy(target_store, source_store);
      }

    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_COPY_HPP_ */
