/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef GTULU_INTERNAL_OBJECT_TEXTURE_LOADER_HPP_
#define GTULU_INTERNAL_OBJECT_TEXTURE_LOADER_HPP_

#include "gtulu/opengl.hpp"

#include "gtulu/internal/data/accessor.hpp"
#include "gtulu/internal/data/offset.hpp"

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
            typename ::boost::enable_if< fc::dimension::is_oned< TargetFormat > >::type,
            typename ::boost::enable_if< fc::compression::is_none< InternalFormat > >::type > {

            typedef typename fc::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, ::std::uint32_t const level, ::std::uint8_t const border) {
              fnc::gl_tex_image_1d::call < TargetFormat, InternalFormat, GroupFormat, DataFormat
                  > (level, gid::width(data_in), border, gid::data(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, gid::offset const& offset_in, ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_1d::call < TargetFormat, GroupFormat, DataFormat
                  > (level, offset_in.x(), gid::width(data_in), gid::data(data_in));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename ::boost::enable_if< fc::dimension::is_twod< TargetFormat > >::type,
            typename ::boost::enable_if< fc::compression::is_none< InternalFormat > >::type > {

            typedef typename fc::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, ::std::uint32_t const level, ::std::uint8_t const border) {
              fnc::gl_tex_image_2d::call < TargetFormat, InternalFormat, GroupFormat, DataFormat
                  > (level, gid::width(data_in), gid::height(data_in), border, gid::data(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, gid::offset const& offset_in, ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_2d::call < TargetFormat, GroupFormat, DataFormat
                  > (level, offset_in.x(), offset_in.y(), gid::width(data_in), gid::height(data_in), gid::data(data_in));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename ::boost::enable_if< fc::dimension::is_threed< TargetFormat > >::type,
            typename ::boost::enable_if< fc::compression::is_none< InternalFormat > >::type > {

            typedef typename fc::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, ::std::uint32_t const level, ::std::uint8_t const border) {
              fnc::gl_tex_image_3d::call < TargetFormat, InternalFormat, GroupFormat, DataFormat
                  > (level, gid::width(data_in), gid::height(data_in), gid::depth(data_in), border, gid::data(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, gid::offset const& offset_in, ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_3d::call < TargetFormat, GroupFormat, DataFormat
                  > (level, offset_in.x(), offset_in.y(), offset_in.z(), gid::width(data_in), gid::height(data_in), gid::depth(data_in), gid::data(data_in));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename ::boost::enable_if< fc::dimension::is_oned< TargetFormat > >::type,
            typename ::boost::enable_if< fc::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fc::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, ::std::uint32_t const level, ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_1d::call < TargetFormat, InternalFormat, GroupFormat, DataFormat
                  > (level, gid::width(data_in), border, gid::size(data_in), gid::data(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, gid::offset const& offset_in, ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_1d::call < TargetFormat, GroupFormat, DataFormat
                  > (level, offset_in.x(), gid::width(data_in), gid::size(data_in), gid::data(data_in));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename ::boost::enable_if< fc::dimension::is_twod< TargetFormat > >::type,
            typename ::boost::enable_if< fc::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fc::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, ::std::uint32_t const level, ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_2d::call < TargetFormat, InternalFormat, GroupFormat, DataFormat
                  > (level, gid::width(data_in), gid::height(data_in), border, gid::size(data_in), gid::data(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, gid::offset const& offset_in, ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_2d::call < TargetFormat, GroupFormat, DataFormat
                  > (level, offset_in.x(), gid::width(data_in), gid::height(data_in), gid::size(data_in), gid::data(data_in));
            }
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_loader< TargetFormat, InternalFormat, GroupFormat, DataFormat,
            typename ::boost::enable_if< fc::dimension::is_threed< TargetFormat > >::type,
            typename ::boost::enable_if< fc::compression::is_compressed< InternalFormat > >::type > {

            typedef typename fc::to_value_type< DataFormat >::type value_type;

            template< typename Data >
            inline static void load(Data const& data_in, ::std::uint32_t const level, ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_3d::call < TargetFormat, InternalFormat, GroupFormat, DataFormat
                  > (level, gid::width(data_in), gid::height(data_in), gid::depth(data_in), border, gid::size(data_in), gid::data(data_in));
            }

            template< typename Data >
            inline static void load(Data const& data_in, gid::offset const& offset_in, ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_3d::call < TargetFormat, GroupFormat, DataFormat
                  > (level, offset_in.x(), gid::width(data_in), gid::height(data_in), gid::depth(data_in), gid::size(data_in), gid::data(data_in));
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
