/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_STORAGE_TEXTURE_HPP_
#define GTULU_INTERNAL_STORAGE_TEXTURE_HPP_

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/storage/init.hpp"

namespace gtulu {
  namespace internal {

    namespace storage {
      namespace detail {

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat,
            typename EnableIfDimension = void, typename EnableIfCompressed = void >
        struct texture_storage {
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_storage< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_oned< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_none< InternalFormat > >::type > {

            typedef fct::gl_tex_image_1d init_function;
            typedef fct::gl_tex_sub_image_1d< typename TargetFormat::aspect::format,
                typename GroupFormat::aspect::format, typename DataFormat::aspect::format > target_copy_function;
            typedef fct::gl_get_tex_image source_copy_function;

            static void init();
            static void target_copy();
            static void source_copy();

            inline static void load(Data const& data_in, dat::offset const& offset_in, std::uint32_t const level) {
              typedef dat::data_traits< Data > data_traits;

              target_copy_function< >::call(level, offset_in.x(), data_traits::width(data_in), data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_get_tex_image< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(mipmap, data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_storage< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_twod< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_none< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_tex_image_2d< typename TargetFormat::aspect::format,
                  typename InternalFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(level,
                                                        data_traits::width(data_in),
                                                        data_traits::height(data_in),
                                                        border,
                                                        data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, dat::offset const& offset_in, std::uint32_t const level) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_tex_sub_image_2d< typename TargetFormat::aspect::format,
                  typename GroupFormat::aspect::format, typename DataFormat::aspect::format >::call(level,
                                                                                              offset_in.x(),
                                                                                              offset_in.y(),
                                                                                              data_traits::width(data_in),
                                                                                              data_traits::height(data_in),
                                                                                              data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_get_tex_image< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(mipmap, data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_storage< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_threed< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_none< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_tex_image_3d< typename TargetFormat::aspect::format,
                  typename InternalFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(level,
                                                        data_traits::width(data_in),
                                                        data_traits::height(data_in),
                                                        data_traits::depth(data_in),
                                                        border,
                                                        data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, dat::offset const& offset_in, std::uint32_t const level) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_tex_sub_image_3d< typename TargetFormat::aspect::format,
                  typename GroupFormat::aspect::format, typename DataFormat::aspect::format >::call(level,
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
              typedef dat::data_traits< Data > data_traits;

              fct::gl_get_tex_image< typename TargetFormat::aspect::format, typename GroupFormat::aspect::format,
                  typename DataFormat::aspect::format >::call(mipmap, data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_storage< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_oned< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_compressed_tex_image_1d< typename TargetFormat::aspect::format,
                  typename InternalFormat::aspect::format >::call(level,
                                                            data_traits::width(data_in),
                                                            border,
                                                            data_traits::size(data_in),
                                                            data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, dat::offset const& offset_in, std::uint32_t const level) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_compressed_tex_sub_image_1d< typename TargetFormat::aspect::format,
                  typename GroupFormat::aspect::format >::call(level,
                                                         offset_in.x(),
                                                         data_traits::width(data_in),
                                                         data_traits::size(data_in),
                                                         data_traits::read(data_in));
            }

            template< typename Data >
            inline static void save(Data& data_out, std::uint32_t const mipmap) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_get_compressed_tex_image< typename TargetFormat::aspect::format >::call(mipmap,
                                                                                              data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_storage< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_twod< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef dat::data_traits< Data > data_traits;

              fct::gl_compressed_tex_image_2d< typename TargetFormat::aspect::format,
                  typename InternalFormat::aspect::format >::call(level,
                                                            data_traits::width(data_in),
                                                            data_traits::height(data_in),
                                                            border,
                                                            data_traits::size(data_in),
                                                            data_traits::read(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, dat::offset const& offset_in, std::uint32_t const level) {
              typedef dat::data_traits< Data > data_traits;

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
              typedef dat::data_traits< Data > data_traits;

              fct::gl_get_compressed_tex_image< typename TargetFormat::aspect::format >::call(mipmap,
                                                                                              data_traits::write(data_out));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_storage< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename boost::enable_if< fcmn::dimension::is_threed< TargetFormat > >::type,
            typename boost::enable_if< fcmn::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fcmn::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, std::uint32_t const level, std::uint8_t const border) {
              typedef dat::data_traits< Data > data_traits;

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
            inline static void load(Data const& data_in, dat::offset const& offset_in, std::uint32_t const level) {
              typedef dat::data_traits< Data > data_traits;

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
              typedef dat::data_traits< Data > data_traits;

              fct::gl_get_compressed_tex_image< typename TargetFormat::aspect::format >::call(mipmap,
                                                                                              data_traits::write(data_out));
            }
        };

      } // namespace detail
    } // namespace storage

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_STORAGE_TEXTURE_HPP_ */
