/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_TEXTURE_HPP_
#define GTULU_INTERNAL_FORMAT_TEXTURE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/format/common.hpp"

#include "gtulu/internal/format/constraints/data.hpp"
#include "gtulu/internal/format/constraints/group.hpp"
#include "gtulu/internal/format/constraints/target.hpp"

#include "gtulu/internal/format/conversions/group.hpp"
#include "gtulu/internal/format/conversions/internal.hpp"

#include "gtulu/internal/object/buffer.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace format {
      namespace texture {

        template< typename TargetFormat >
        struct dimension_check {
            typedef ftt::is_oned< TargetFormat > is_oned_t;
            typedef typename bm::or_< ftt::is_twod< TargetFormat >, ftt::is_rectangle< TargetFormat > >::type is_twod_t;
            typedef ftt::is_threed< TargetFormat > is_threed_t;
        };

        template< typename InternalFormat >
        struct compression_check {
            typedef fic::is_compressed< InternalFormat > is_compressed_t;
            typedef typename bm::not_< fic::is_compressed< InternalFormat > >::type is_not_compressed_t;
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
            typedef typename fd::to_typename< typename TextureFormat::data::info::value_type >::type value_t;

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
                               ft::is_of_target_base< TargetFormat, ft::base::texture > {
            typedef TargetFormat target;
            typedef InternalFormat internal;
            typedef GroupFormat group;
            typedef DataFormat data;

            typedef typename texture_loader< texture_format< TargetFormat, InternalFormat, GroupFormat, DataFormat > >::type loader;
        };

        template< typename TargetFormat, typename Base = fgb::rgba, fi::size_type Size = 8,
            typename Type = fit::unsigned_fixed, typename Compression = fic::normal, typename Order = fg::order::normal >
        class texture_format_selector {
            typedef typename fi::to_data_type< Type >::type ideal_data_type;
            typedef typename fg::to_internal_base< Base >::type ideal_internal_base;
            typedef typename fi::to_data_packing< ideal_internal_base >::type ideal_data_packing;
            typedef typename fd::format_selector< ideal_data_type, ideal_data_packing, Size, Order >::format data_format;

            typedef typename data_format::info::type data_type;
            typedef typename data_format::info::packing data_packing;

            typedef typename fi::format_selector< ideal_internal_base, Size, Type, Compression >::format internal_format;

            typedef typename internal_format::info::base internal_base;

            typedef typename fi::to_group_type< Type >::type group_type;
            typedef typename fg::format_selector< Base, group_type, Order >::format group_format;

          public:
            typedef texture_format< TargetFormat, internal_format, group_format, data_format > format;
        };
      } // namespace texture
    } // namespace format

    namespace ftext = ::gtulu::internal::format::texture;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TEXTURE_HPP_ */
