/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_INIT_HPP_
#define GTULU_INTERNAL_STORAGE_INIT_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/object/object_fwd.hpp"
#include "gtulu/internal/storage/bind.hpp"
#include "gtulu/internal/storage/data/empty.hpp"
#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage/helper/texture.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace detail {

        template< typename TargetStore, typename SourceStore >
        struct initializer {
            typedef TargetStore target_store_t;
            typedef SourceStore source_store_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store);
        };

        /* Host to Buffer */
        template< typename DataFormat, typename HostStore >
        struct initializer< obj::buffer< DataFormat >, HostStore > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef HostStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              fct::gl_buffer_data< buf::slot::gl_copy_write_buffer, InitParameter >::call(source_traits_t::size(source_store),
                                                                                          source_traits_t::read(source_store));
            }
        };

        /* Host to Texture */
        template< typename TextureFormat, typename HostStore >
        struct initializer< obj::texture< TextureFormat >, HostStore > {
            typedef obj::texture< TextureFormat > target_store_t;
            typedef HostStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::init(target_store, source_store);
            }
        };

        /* Buffer to Texture */
        template< typename TextureFormat, typename DataFormat >
        struct initializer< obj::texture< TextureFormat >, obj::buffer< DataFormat > > {
            typedef obj::texture< TextureFormat > target_store_t;
            typedef obj::buffer< DataFormat > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::init(target_store, source_store);
            }
        };

        /* Buffer range to Texture */
        template< typename TextureFormat, typename DataFormat >
        struct initializer< obj::texture< TextureFormat >, data::range< obj::buffer< DataFormat > > > {
            typedef obj::texture< TextureFormat > target_store_t;
            typedef data::range< obj::buffer< DataFormat > > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::init(target_store, source_store);
            }
        };

      } // namespace detail

      template< typename InitParameter = void, typename TargetStore, typename SourceStore >
      void init(TargetStore& target_store, SourceStore const& source_store) {
        detail::initializer< TargetStore, SourceStore >::template init< InitParameter >(target_store, source_store);
      }

    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_INIT_HPP_ */
