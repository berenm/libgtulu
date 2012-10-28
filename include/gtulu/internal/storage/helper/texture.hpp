/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_HELPER_TEXTURE_HPP_
#define GTULU_INTERNAL_STORAGE_HELPER_TEXTURE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/object/object_fwd.hpp"
#include "gtulu/internal/storage/data/range.hpp"
#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace detail {

        namespace texture {
          namespace detail {

            template< typename TextureFormat, typename OtherStore, typename EnableIfDimension = void,
                      typename EnableIfCompressed                                             = void >
            struct helper {};

            template< typename TextureFormat, typename OtherStore >
            struct helper<
              TextureFormat,
              OtherStore,
              typename boost::enable_if<
                typename meta::and_< fcmn::dimension::is_oned< typename TextureFormat::target_format >,
                                     fcmn::cardinality::is_not_array< typename TextureFormat::target_format > >::type >::type,
              typename boost::enable_if< fcmn::compression::is_none< typename TextureFormat::internal_format > >::type > {

              typedef sto::data::data_traits< OtherStore > other_store_traits;

              typedef typename TextureFormat::target_format::aspect::format   target_cst;
              typedef typename TextureFormat::internal_format::aspect::format internal_cst;
              typedef typename TextureFormat::group_format::aspect::format    group_cst;
              typedef typename TextureFormat::data_format::aspect::format     data_cst;

              typedef fct::tex_image< target_cst, internal_cst, group_cst, data_cst > init_fct;
              typedef fct::tex_sub_image< target_cst, group_cst, data_cst >           write_fct;
              typedef fct::get_tex_image< target_cst, group_cst, data_cst >           read_fct;

              static void init(OtherStore const& other_store, std::uint32_t const lod_level=0) {
                init_fct::call(lod_level,
                               other_store_traits::width(other_store),
                               0,
                               other_store_traits::read(other_store));
              }

              static void write(OtherStore const&             other_store,
                                sto::data::offset_type const& offset_in,
                                std::uint32_t const           lod_level=0) {
                write_fct::call(lod_level,
                                offset_in.x,
                                other_store_traits::width(other_store),
                                other_store_traits::read(other_store));
              }

              static void read(OtherStore& data_out, std::uint32_t const lod_level=0) {
                read_fct::call(lod_level, other_store_traits::write(data_out));
              }

            };

            template< typename TextureFormat, typename OtherStore >
            struct helper<
              TextureFormat,
              OtherStore,
              typename boost::enable_if<
                typename meta::or_<
                  typename meta::and_< fcmn::dimension::is_twod< typename TextureFormat::target_format >,
                                       fcmn::cardinality::is_not_array< typename TextureFormat::target_format > >::type,
                  typename meta::and_< fcmn::dimension::is_oned< typename TextureFormat::target_format >,
                                       fcmn::cardinality::is_array< typename TextureFormat::target_format > >::type >::type >::type,
              typename boost::enable_if< fcmn::compression::is_none< typename TextureFormat::internal_format > >::type > {

              typedef sto::data::data_traits< OtherStore > other_store_traits;

              typedef typename TextureFormat::target_format::aspect::format   target_cst;
              typedef typename TextureFormat::internal_format::aspect::format internal_cst;
              typedef typename TextureFormat::group_format::aspect::format    group_cst;
              typedef typename TextureFormat::data_format::aspect::format     data_cst;

              typedef fct::tex_image< target_cst, internal_cst, group_cst, data_cst > init_fct;
              typedef fct::tex_sub_image< target_cst, group_cst, data_cst >           write_fct;
              typedef fct::get_tex_image< target_cst, group_cst, data_cst >           read_fct;

              static void init(OtherStore const& other_store, std::uint32_t const lod_level) {
                init_fct::call(lod_level,
                               other_store_traits::width(other_store),
                               other_store_traits::height(other_store),
                               0,
                               other_store_traits::read(other_store));
              }

              static void write(OtherStore const&             other_store,
                                sto::data::offset_type const& offset_in,
                                std::uint32_t const           lod_level=0) {
                write_fct::call(lod_level,
                                offset_in.x,
                                offset_in.y,
                                other_store_traits::width(other_store),
                                other_store_traits::height(other_store),
                                other_store_traits::read(other_store));
              }

              static void read(OtherStore& data_out, std::uint32_t const lod_level=0) {
                read_fct::call(lod_level, other_store_traits::write(data_out));
              }

            };

            template< typename TextureFormat, typename OtherStore >
            struct helper<
              TextureFormat,
              OtherStore,
              typename boost::enable_if<
                typename meta::or_<
                  fcmn::dimension::is_threed< typename TextureFormat::target_format >,
                  typename meta::and_< fcmn::dimension::is_twod< typename TextureFormat::target_format >,
                                       fcmn::cardinality::is_array< typename TextureFormat::target_format > >::type >::type >::type,
              typename boost::enable_if< fcmn::compression::is_none< typename TextureFormat::internal_format > >::type > {

              typedef sto::data::data_traits< OtherStore > other_store_traits;

              typedef typename TextureFormat::target_format::aspect::format   target_cst;
              typedef typename TextureFormat::internal_format::aspect::format internal_cst;
              typedef typename TextureFormat::group_format::aspect::format    group_cst;
              typedef typename TextureFormat::data_format::aspect::format     data_cst;

              typedef fct::tex_image< target_cst, internal_cst, group_cst, data_cst > init_fct;
              typedef fct::tex_sub_image< target_cst, group_cst, data_cst >           write_fct;
              typedef fct::get_tex_image< target_cst, group_cst, data_cst >           read_fct;

              static void init(OtherStore const& other_store, std::uint32_t const lod_level) {
                init_fct::call(lod_level,
                               other_store_traits::width(other_store),
                               other_store_traits::height(other_store),
                               other_store_traits::depth(other_store),
                               0,
                               other_store_traits::read(other_store));
              }

              static void write(OtherStore const&             other_store,
                                sto::data::offset_type const& offset_in,
                                std::uint32_t const           lod_level=0) {
                write_fct::call(lod_level,
                                offset_in.x,
                                offset_in.y,
                                offset_in.z,
                                other_store_traits::width(other_store),
                                other_store_traits::height(other_store),
                                other_store_traits::depth(other_store),
                                other_store_traits::read(other_store));
              }

              static void read(OtherStore& data_out, std::uint32_t const lod_level=0) {
                read_fct::call(lod_level, other_store_traits::write(data_out));
              }

            };

            template< typename TextureFormat, typename OtherStore >
            struct helper<
              TextureFormat,
              OtherStore,
              typename boost::enable_if<
                typename meta::and_< fcmn::dimension::is_oned< typename TextureFormat::target_format >,
                                     fcmn::cardinality::is_not_array< typename TextureFormat::target_format > >::type >::type,
              typename boost::enable_if< fcmn::compression::is_compressed< typename TextureFormat::internal_format > >::type > {

              typedef sto::data::data_traits< OtherStore > other_store_traits;

              typedef typename TextureFormat::target_format::aspect::format   target_cst;
              typedef typename TextureFormat::internal_format::aspect::format internal_cst;
              typedef typename TextureFormat::group_format::aspect::format    group_cst;
              typedef typename TextureFormat::data_format::aspect::format     data_cst;

              typedef fct::compressed_tex_image< target_cst, internal_cst >  init_fct;
              typedef fct::compressed_tex_sub_image< target_cst, group_cst > write_fct;
              typedef fct::get_compressed_tex_image< target_cst >            read_fct;

              static void init(OtherStore const& other_store, std::uint32_t const lod_level) {
                init_fct::call(lod_level,
                               other_store_traits::width(other_store),
                               0,
                               other_store_traits::size(other_store),
                               other_store_traits::read(other_store));
              }

              static void write(OtherStore const&             other_store,
                                sto::data::offset_type const& offset_in,
                                std::uint32_t const           lod_level=0) {
                write_fct::call(lod_level,
                                offset_in.x,
                                other_store_traits::width(other_store),
                                other_store_traits::size(other_store),
                                other_store_traits::read(other_store));
              }

              static void read(OtherStore& data_out, std::uint32_t const lod_level=0) {
                read_fct::call(lod_level, other_store_traits::write(data_out));
              }

            };

            template< typename TextureFormat, typename OtherStore >
            struct helper<
              TextureFormat,
              OtherStore,
              typename boost::enable_if<
                typename meta::or_<
                  typename meta::and_< fcmn::dimension::is_twod< typename TextureFormat::target_format >,
                                       fcmn::cardinality::is_not_array< typename TextureFormat::target_format > >::type,
                  typename meta::and_< fcmn::dimension::is_oned< typename TextureFormat::target_format >,
                                       fcmn::cardinality::is_array< typename TextureFormat::target_format > >::type >::type >::type,
              typename boost::enable_if< fcmn::compression::is_compressed< typename TextureFormat::internal_format > >::type > {

              typedef sto::data::data_traits< OtherStore > other_store_traits;

              typedef typename TextureFormat::target_format::aspect::format   target_cst;
              typedef typename TextureFormat::internal_format::aspect::format internal_cst;
              typedef typename TextureFormat::group_format::aspect::format    group_cst;
              typedef typename TextureFormat::data_format::aspect::format     data_cst;

              typedef fct::compressed_tex_image< target_cst, internal_cst >  init_fct;
              typedef fct::compressed_tex_sub_image< target_cst, group_cst > write_fct;
              typedef fct::get_compressed_tex_image< target_cst >            read_fct;

              static void init(OtherStore const& other_store, std::uint32_t const lod_level) {
                init_fct::call(lod_level,
                               other_store_traits::width(other_store),
                               other_store_traits::height(other_store),
                               0,
                               other_store_traits::size(other_store),
                               other_store_traits::read(other_store));
              }

              static void write(OtherStore const&             other_store,
                                sto::data::offset_type const& offset_in,
                                std::uint32_t const           lod_level=0) {
                write_fct::call(lod_level,
                                offset_in.x,
                                other_store_traits::width(other_store),
                                other_store_traits::height(other_store),
                                other_store_traits::size(other_store),
                                other_store_traits::read(other_store));
              }

              static void read(OtherStore& data_out, std::uint32_t const lod_level=0) {
                read_fct::call(lod_level, other_store_traits::write(data_out));
              }

            };

            template< typename TextureFormat, typename OtherStore >
            struct helper<
              TextureFormat,
              OtherStore,
              typename boost::enable_if<
                typename meta::or_<
                  fcmn::dimension::is_threed< typename TextureFormat::target_format >,
                  typename meta::and_< fcmn::dimension::is_twod< typename TextureFormat::target_format >,
                                       fcmn::cardinality::is_array< typename TextureFormat::target_format > >::type >::type >::type,
              typename boost::enable_if< fcmn::compression::is_compressed< typename TextureFormat::internal_format > >::type > {

              typedef sto::data::data_traits< OtherStore > other_store_traits;

              typedef typename TextureFormat::target_format::aspect::format   target_cst;
              typedef typename TextureFormat::internal_format::aspect::format internal_cst;
              typedef typename TextureFormat::group_format::aspect::format    group_cst;
              typedef typename TextureFormat::data_format::aspect::format     data_cst;

              typedef fct::compressed_tex_image< target_cst, internal_cst >  init_fct;
              typedef fct::compressed_tex_sub_image< target_cst, group_cst > write_fct;
              typedef fct::get_compressed_tex_image< target_cst >            read_fct;

              static void init(OtherStore const& other_store, std::uint32_t const lod_level) {
                init_fct::call(lod_level,
                               other_store_traits::width(other_store),
                               other_store_traits::height(other_store),
                               other_store_traits::depth(other_store),
                               0,
                               other_store_traits::size(other_store),
                               other_store_traits::read(other_store));
              }

              static void write(OtherStore const&             other_store,
                                sto::data::offset_type const& offset_in,
                                std::uint32_t const           lod_level=0) {
                write_fct::call(lod_level,
                                offset_in.x,
                                other_store_traits::width(other_store),
                                other_store_traits::height(other_store),
                                other_store_traits::depth(other_store),
                                other_store_traits::size(other_store),
                                other_store_traits::read(other_store));
              }

              static void read(OtherStore& data_out, std::uint32_t const lod_level=0) {
                read_fct::call(lod_level, other_store_traits::write(data_out));
              }

            };

          } // namespace detail

          template< typename TextureFormat, typename SourceStore >
          static void init(obj::texture_lod< TextureFormat >& target_store, SourceStore const& source_store) {
            detail::helper< TextureFormat, SourceStore >::init(source_store, target_store.get_level());
          }

          template< typename TextureFormat, typename SourceStore >
          static void init(obj::texture< TextureFormat >& target_store, SourceStore const& source_store) {
            init(static_cast< obj::texture_lod< TextureFormat >& >(target_store), source_store);
            target_store.compute_mipmaps();
          }

          template< typename TextureFormat, typename SourceStore >
          static void copy(obj::texture_lod< TextureFormat >& target_store,
                           SourceStore const&                 source_store,
                           sto::data::offset_type const&      offset_in=sto::data::offset_type()) {
            detail::helper< TextureFormat, SourceStore >::write(source_store, offset_in, target_store.get_level());
          }

          template< typename TextureFormat, typename SourceStore >
          static void copy(obj::texture< TextureFormat >& target_store,
                           SourceStore const&             source_store,
                           sto::data::offset_type const&  offset_in=sto::data::offset_type()) {
            copy(static_cast< obj::texture_lod< TextureFormat >& >(target_store), source_store, offset_in);
            target_store.compute_mipmaps();
          }

          template< typename TargetStore, typename TextureFormat >
          static void copy(TargetStore& target_store, obj::texture_lod< TextureFormat > const& source_store) {
            detail::helper< TextureFormat, TargetStore >::read(target_store, source_store.get_level());
          }

          template< typename TargetStore, typename TextureFormat >
          static void copy(TargetStore& target_store, obj::texture< TextureFormat > const& source_store) {
            /* TODO: should we do mimap generation here? */

            copy(target_store, static_cast< obj::texture_lod< TextureFormat > const& >(source_store));
          }

        } // namespace texture

      } // namespace detail
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_HELPER_TEXTURE_HPP_ */
