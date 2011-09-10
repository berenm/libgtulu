/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_TEXTURE_HPP_
#define GTULU_INTERNAL_FORMAT_TEXTURE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/format/common.hpp"

#include "gtulu/internal/format/constraint/data.hpp"
#include "gtulu/internal/format/constraint/group.hpp"
#include "gtulu/internal/format/constraint/target.hpp"

#include "gtulu/internal/format/conversion/common.hpp"
#include "gtulu/internal/format/conversion/group.hpp"
#include "gtulu/internal/format/conversion/internal.hpp"

#include "gtulu/internal/object/buffer.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace format {
      namespace texture {

        template< typename TargetFormat >
        struct dimension_check {
            typedef fc::dimension::is_oned< TargetFormat > is_oned_t;
            typedef typename bm::not_<
                bm::and_< bm::not_< fc::dimension::is_twod< TargetFormat > >,
                    bm::not_< fc::dimension::is_rectangle< TargetFormat > > > >::type is_twod_t;
            typedef fc::dimension::is_threed< TargetFormat > is_threed_t;
        };

        template< typename InternalFormat >
        struct compression_check {
            typedef fc::compression::is_compressed< InternalFormat > is_compressed_t;
            typedef typename bm::not_< fc::compression::is_compressed< InternalFormat > >::type is_not_compressed_t;
        };

        template< typename Target, typename Internal, typename Group, typename Data, typename Value,
            typename EnableIfDimension = void, typename EnableIfCompressed = void >
        struct loader {
        };

        template< typename Target, typename Internal, typename Group, typename Data, typename Value >
        struct loader< Target, Internal, Group, Data, Value,
            typename ::boost::enable_if< typename dimension_check< Target >::is_oned_t >::type,
            typename ::boost::enable_if< typename compression_check< Target >::is_not_compressed_t >::type > {
            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_tex_image_1d::call< Target, Internal, Group, Data >(level, width, border, data);
            }

            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_1d::call< Target, Group, Data >(level, xoffset, width, data);
            }
        };

        template< typename Target, typename Internal, typename Group, typename Data, typename Value >
        struct loader< Target, Internal, Group, Data, Value,
            typename ::boost::enable_if< typename dimension_check< Target >::is_twod_t >::type,
            typename ::boost::enable_if< typename compression_check< Target >::is_not_compressed_t >::type > {
            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_tex_image_2d::call< Target, Internal, Group, Data >(level, width, height, border, data);
            }

            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_2d::call< Target, Group, Data >(level, xoffset, yoffset, width, height, data);
            }
        };

        template< typename Target, typename Internal, typename Group, typename Data, typename Value >
        struct loader< Target, Internal, Group, Data, Value,
            typename ::boost::enable_if< typename dimension_check< Target >::is_threed_t >::type,
            typename ::boost::enable_if< typename compression_check< Target >::is_not_compressed_t >::type > {
            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_tex_image_3d::call< Target, Internal, Group, Data >(level, width, height, depth, border, data);
            }

            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const zoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_3d::call< Target, Group, Data >(level,
                                                                    xoffset,
                                                                    yoffset,
                                                                    zoffset,
                                                                    width,
                                                                    height,
                                                                    depth,
                                                                    data);
            }
        };

        template< typename Target, typename Internal, typename Group, typename Data, typename Value >
        struct loader< Target, Internal, Group, Data, Value,
            typename ::boost::enable_if< typename dimension_check< Target >::is_oned_t >::type,
            typename ::boost::enable_if< typename compression_check< Target >::is_compressed_t >::type > {
            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_1d::call< Target, Internal, Group, Data >(level,
                                                                                     width,
                                                                                     border,
                                                                                     data_size,
                                                                                     data);
            }

            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_1d::call< Target, Group, Data >(level, xoffset, width, data_size, data);
            }
        };

        template< typename Target, typename Internal, typename Group, typename Data, typename Value >
        struct loader< Target, Internal, Group, Data, Value,
            typename ::boost::enable_if< typename dimension_check< Target >::is_twod_t >::type,
            typename ::boost::enable_if< typename compression_check< Target >::is_compressed_t >::type > {
            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_2d::call< Target, Internal, Group, Data >(level,
                                                                                     width,
                                                                                     height,
                                                                                     border,
                                                                                     data_size,
                                                                                     data);
            }

            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_2d::call< Target, Group, Data >(level,
                                                                               xoffset,
                                                                               yoffset,
                                                                               width,
                                                                               height,
                                                                               data_size,
                                                                               data);
            }
        };

        template< typename Target, typename Internal, typename Group, typename Data, typename Value >
        struct loader< Target, Internal, Group, Data, Value,
            typename ::boost::enable_if< typename dimension_check< Target >::is_three_t >::type,
            typename ::boost::enable_if< typename compression_check< Target >::is_compressed_t >::type > {
            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_3d::call< Target, Internal, Group, Data >(level,
                                                                                     width,
                                                                                     height,
                                                                                     depth,
                                                                                     border,
                                                                                     data_size,
                                                                                     data);
            }

            inline static void load(Value const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const zoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_3d::call< Target, Group, Data >(level,
                                                                               xoffset,
                                                                               yoffset,
                                                                               zoffset,
                                                                               width,
                                                                               height,
                                                                               depth,
                                                                               data_size,
                                                                               data);
            }
        };

        template< typename TextureFormat >
        struct texture_loader {
            typedef typename TextureFormat::target::info::format target_t;
            typedef typename TextureFormat::internal::info::format internal_t;
            typedef typename TextureFormat::group::info::format group_t;
            typedef typename TextureFormat::data::info::format data_t;
            typedef typename fc::to_value_type< typename TextureFormat::data >::type value_t;

            typedef loader< target_t, internal_t, group_t, data_t, value_t > type;
        };

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_format;

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_format: fg::is_internal_compatible< GroupFormat, InternalFormat >,
        fd::are_group_internal_compatible< DataFormat, GroupFormat, InternalFormat >
                               ,
                               ft::is_internal_compatible< TargetFormat, InternalFormat >
                               ,
                               fc::target::is_texture< TargetFormat > {
            typedef TargetFormat target;
            typedef InternalFormat internal;
            typedef GroupFormat group;
            typedef DataFormat data;

            typedef typename texture_loader< texture_format< TargetFormat, InternalFormat, GroupFormat, DataFormat > >::type loader;
        };

        template< typename TargetFormat, typename Component = fc::component::red_green_blue_alpha,
            typename Numeric = fc::numeric::unsigned_fixed, typename Compression = fc::compression::none,
            typename Order = fc::order::forward >
        class select_format {
            typedef typename fg::get_ideal_internal_component< Component >::type ideal_internal_component;
            typedef typename fi::select_format< ideal_internal_component, Numeric, Compression >::type internal_format;

            typedef typename fi::get_ideal_data_integral< typename fn::get_integral< Numeric >::type >::type ideal_data_integral;
            typedef typename fi::get_ideal_component_packing< ideal_internal_component >::type ideal_data_packing;
            typedef typename fd::select_format< typename fn::get_width< Numeric >::type, ideal_data_packing, Order,
                typename fn::get_sign< Numeric >::type, ideal_data_integral >::type data_format;

            typedef typename fi::get_ideal_group_integral< typename fn::get_integral< Numeric >::type >::type ideal_group_integral;
            typedef typename fg::select_format< Component, ideal_group_integral, Order >::type group_format;

          public:
            typedef texture_format< TargetFormat, internal_format, group_format, data_format > type;
        };

      } // namespace texture
    } // namespace format

    namespace ftext = ::gtulu::internal::format::texture;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TEXTURE_HPP_ */
