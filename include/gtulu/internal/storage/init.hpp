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
#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage/data/range.hpp"
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

        /* Texture LOD to Buffer */
        template< typename DataFormat, typename TextureFormat >
        struct initializer< obj::buffer< DataFormat >, obj::texture_lod< TextureFormat > > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef obj::texture_lod< TextureFormat > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);

              /* Two steps here as we cannot initialize the buffer directly from the texture */
              fct::gl_buffer_data< buf::slot::gl_pixel_pack_buffer, InitParameter >::call(source_traits_t::size(source_store),
                                                                                          0);
              detail::texture::copy(target_store, source_store);
            }
        };
        template< typename DataFormat, typename TextureFormat >
        struct initializer< obj::buffer< DataFormat >, obj::texture< TextureFormat > > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef obj::texture< TextureFormat > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);

              /* Two steps here as we cannot initialize the buffer directly from the texture */
              fct::gl_buffer_data< buf::slot::gl_pixel_pack_buffer, InitParameter >::call(source_traits_t::size(source_store),
                                                                                          0);
              detail::texture::copy(target_store, source_store);
            }
        };

        /* Texture LOD range to Buffer */
        template< typename DataFormat, typename TextureFormat >
        struct initializer< obj::buffer< DataFormat >, data::range< obj::texture_lod< TextureFormat > > > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef data::range< obj::texture_lod< TextureFormat > > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);

              /* Two steps here as we cannot initialize the buffer directly from the texture */
              fct::gl_buffer_data< buf::slot::gl_pixel_pack_buffer, InitParameter >::call(source_traits_t::size(source_store),
                                                                                          0);
              detail::texture::copy(target_store, source_store);
            }
        };
        template< typename DataFormat, typename TextureFormat >
        struct initializer< obj::buffer< DataFormat >, data::range< obj::texture< TextureFormat > > > {
            typedef obj::buffer< DataFormat > target_store_t;
            typedef data::range< obj::texture< TextureFormat > > source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);

              /* Two steps here as we cannot initialize the buffer directly from the texture */
              fct::gl_buffer_data< buf::slot::gl_pixel_pack_buffer, InitParameter >::call(source_traits_t::size(source_store),
                                                                                          0);
              detail::texture::copy(target_store, source_store.level(0));
            }
        };

        /* Any to Texture LOD */
        template< typename TextureFormat, typename SourceStore >
        struct initializer< obj::texture_lod< TextureFormat >, SourceStore > {
            typedef obj::texture_lod< TextureFormat > target_store_t;
            typedef SourceStore source_store_t;

            typedef data::data_traits< target_store_t > target_traits_t;
            typedef data::data_traits< source_store_t > source_traits_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::init(target_store, source_store);
            }
        };
        template< typename TextureFormat, typename SourceStore >
        struct initializer< obj::texture< TextureFormat >, SourceStore > {
            typedef obj::texture< TextureFormat > target_store_t;
            typedef SourceStore source_store_t;

            template< typename InitParameter = void >
            static void init(target_store_t& target_store, source_store_t const& source_store) {
              copy_binder< target_store_t, source_store_t >::bind(target_store, source_store);
              detail::texture::init(target_store, source_store);
            }
        };

        template< typename TargetStore, typename SourceStore >
        struct initializer< data::range< TargetStore >, SourceStore > {
            static_assert(!std::is_same< SourceStore, SourceStore >::value, "init doesn't make sense with a range as target store.");
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
