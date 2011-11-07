/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_OBJECT_TEXTURE_LOADER_HPP_
#define GTULU_INTERNAL_OBJECT_TEXTURE_LOADER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/storage/data/offset.hpp"
#include "gtulu/internal/storage/data/traits.hpp"

namespace gtulu {
  namespace internal {

    namespace texture {
      namespace detail {

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat,
            typename EnableIfDimension = void, typename EnableIfCompressed = void >
        struct texture_loader {
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_oned< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_none< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_tex_image_1d< typename TargetFormat::aspect::format, typename InternalFormat::aspect::format,
                  typename GroupFormat::aspect::format, typename DataFormat::aspect::format >::call(level,
                                                                                                    data_traits::width(data_in),
                                                                                                    border,
                                                                                                    data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in,
                                    sto::data::offset const& offset_in,
                                    std::uint32_t const level) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_tex_sub_image_1d< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(level,
                                                              offset_in.x(),
                                                              data_traits::width(data_in),
                                                              data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_get_tex_image< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(mipmap, data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_twod< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_none< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_tex_image_2d< typename TargetFormat::aspect::format, typename InternalFormat::aspect::format,
                  typename GroupFormat::aspect::format, typename DataFormat::aspect::format >::call(level,
                                                                                                    data_traits::width(data_in),
                                                                                                    data_traits::height(data_in),
                                                                                                    border,
                                                                                                    data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in,
                                    sto::data::offset const& offset_in,
                                    std::uint32_t const level) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_tex_sub_image_2d< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(level,
                                                              offset_in.x(),
                                                              offset_in.y(),
                                                              data_traits::width(data_in),
                                                              data_traits::height(data_in),
                                                              data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_get_tex_image< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(mipmap, data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_threed< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_none< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_tex_image_3d< typename TargetFormat::aspect::format, typename InternalFormat::aspect::format,
                  typename GroupFormat::aspect::format, typename DataFormat::aspect::format >::call(level,
                                                                                                    data_traits::width(data_in),
                                                                                                    data_traits::height(data_in),
                                                                                                    data_traits::depth(data_in),
                                                                                                    border,
                                                                                                    data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in,
                                    sto::data::offset const& offset_in,
                                    std::uint32_t const level) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_tex_sub_image_3d< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(level,
                                                              offset_in.x(),
                                                              offset_in.y(),
                                                              offset_in.z(),
                                                              data_traits::width(data_in),
                                                              data_traits::height(data_in),
                                                              data_traits::depth(data_in),
                                                              data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_get_tex_image< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(mipmap, data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_oned< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_compressed_tex_image_1d< typename TargetFormat::aspect::format,
                  typename InternalFormat::aspect::format >::call(level,
                                                                  data_traits::width(data_in),
                                                                  border,
                                                                  data_traits::size(data_in),
                                                                  data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in,
                                    sto::data::offset const& offset_in,
                                    std::uint32_t const level) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_compressed_tex_sub_image_1d< typename TargetFormat::aspect::format,
                  typename GroupFormat::aspect::format >::call(level,
                                                               offset_in.x(),
                                                               data_traits::width(data_in),
                                                               data_traits::size(data_in),
                                                               data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_get_compressed_tex_image< typename TargetFormat::aspect::format >::call(mipmap,
                                                                                              data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_twod< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_compressed_tex_image_2d< typename TargetFormat::aspect::format,
                  typename InternalFormat::aspect::format >::call(level,
                                                                  data_traits::width(data_in),
                                                                  data_traits::height(data_in),
                                                                  border,
                                                                  data_traits::size(data_in),
                                                                  data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in,
                                    sto::data::offset const& offset_in,
                                    std::uint32_t const level) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_compressed_tex_sub_image_2d< typename TargetFormat::aspect::format,
                  typename GroupFormat::aspect::format >::call(level,
                                                               offset_in.x(),
                                                               data_traits::width(data_in),
                                                               data_traits::height(data_in),
                                                               data_traits::size(data_in),
                                                               data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_get_compressed_tex_image< typename TargetFormat::aspect::format >::call(mipmap,
                                                                                              data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_threed< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_compressed_tex_image_3d< typename TargetFormat::aspect::format,
                  typename InternalFormat::aspect::format >::call(level,
                                                                  data_traits::width(data_in),
                                                                  data_traits::height(data_in),
                                                                  data_traits::depth(data_in),
                                                                  border,
                                                                  data_traits::size(data_in),
                                                                  data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in,
                                    sto::data::offset const& offset_in,
                                    std::uint32_t const level) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_compressed_tex_sub_image_3d< typename TargetFormat::aspect::format,
                  typename GroupFormat::aspect::format >::call(level,
                                                               offset_in.x(),
                                                               data_traits::width(data_in),
                                                               data_traits::height(data_in),
                                                               data_traits::depth(data_in),
                                                               data_traits::size(data_in),
                                                               data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef sto::data::data_traits< Data > data_traits;

              fct::gl_get_compressed_tex_image< typename TargetFormat::aspect::format >::call(mipmap,
                                                                                              data_traits::write(data_out));
            }
        };

      } // namespace detail

      template< typename TextureFormat >
      struct texture_loader: detail::texture_loader< typename TextureFormat::target_format,
          typename TextureFormat::internal_format, typename TextureFormat::group_format,
          typename TextureFormat::data_format > {
      };

    } // namespace texture

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_TEXTURE_LOADER_HPP_ */
