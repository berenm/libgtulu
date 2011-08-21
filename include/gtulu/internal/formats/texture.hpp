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

#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/constraints/data.hpp"
#include "gtulu/internal/formats/constraints/group.hpp"
#include "gtulu/internal/formats/constraints/target.hpp"

#include "gtulu/internal/formats/conversions/group.hpp"
#include "gtulu/internal/formats/conversions/internal.hpp"

#include "gtulu/internal/objects/buffer.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace texture {

        template< typename target_format_t >
        struct dimension_check {
            typedef ftt::is_oned< target_format_t > is_oned_t;
            typedef typename bm::or_< ftt::is_twod< target_format_t >, ftt::is_rectangle< target_format_t > >::type is_twod_t;
            typedef ftt::is_threed< target_format_t > is_threed_t;
        };

        template< typename internal_format_t >
        struct compression_check {
            typedef fic::is_compressed< internal_format_t > is_compressed_t;
            typedef typename bm::not_< fic::is_compressed< internal_format_t > >::type is_not_compressed_t;
        };

        template< typename target_t, typename internal_t, typename group_t, typename data_t, typename value_t,
            typename enable_if_dimension_t = void, typename enable_if_compressed_t = void >
        struct loader {
        };

        template< typename target_t, typename internal_t, typename group_t, typename data_t, typename value_t >
        struct loader< target_t, internal_t, group_t, data_t, value_t,
            typename ::boost::enable_if< typename dimension_check< target_t >::is_oned_t >::type,
            typename ::boost::enable_if< typename compression_check< target_t >::is_not_compressed_t >::type > {
            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_tex_image_1d::call < target_t, internal_t, group_t, data_t > (level, width, border, data);
            }

            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_1d::call < target_t, group_t, data_t > (level, xoffset, width, data);
            }
        };

        template< typename target_t, typename internal_t, typename group_t, typename data_t, typename value_t >
        struct loader< target_t, internal_t, group_t, data_t, value_t,
            typename ::boost::enable_if< typename dimension_check< target_t >::is_twod_t >::type,
            typename ::boost::enable_if< typename compression_check< target_t >::is_not_compressed_t >::type > {
            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_tex_image_2d::call < target_t, internal_t, group_t, data_t > (level, width, height, border, data);
            }

            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_2d::call < target_t, group_t, data_t
                  > (level, xoffset, yoffset, width, height, data);
            }
        };

        template< typename target_t, typename internal_t, typename group_t, typename data_t, typename value_t >
        struct loader< target_t, internal_t, group_t, data_t, value_t,
            typename ::boost::enable_if< typename dimension_check< target_t >::is_threed_t >::type,
            typename ::boost::enable_if< typename compression_check< target_t >::is_not_compressed_t >::type > {
            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_tex_image_3d::call < target_t, internal_t, group_t, data_t
                  > (level, width, height, depth, border, data);
            }

            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const zoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level) {
              fnc::gl_tex_sub_image_3d::call < target_t, group_t, data_t
                  > (level, xoffset, yoffset, zoffset, width, height, depth, data);
            }
        };

        template< typename target_t, typename internal_t, typename group_t, typename data_t, typename value_t >
        struct loader< target_t, internal_t, group_t, data_t, value_t,
            typename ::boost::enable_if< typename dimension_check< target_t >::is_oned_t >::type,
            typename ::boost::enable_if< typename compression_check< target_t >::is_compressed_t >::type > {
            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_1d::call < target_t, internal_t, group_t, data_t
                  > (level, width, border, data_size, data);
            }

            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const width,
                                    ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_1d::call < target_t, group_t, data_t
                  > (level, xoffset, width, data_size, data);
            }
        };

        template< typename target_t, typename internal_t, typename group_t, typename data_t, typename value_t >
        struct loader< target_t, internal_t, group_t, data_t, value_t,
            typename ::boost::enable_if< typename dimension_check< target_t >::is_twod_t >::type,
            typename ::boost::enable_if< typename compression_check< target_t >::is_compressed_t >::type > {
            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_2d::call < target_t, internal_t, group_t, data_t
                  > (level, width, height, border, data_size, data);
            }

            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_2d::call < target_t, group_t, data_t
                  > (level, xoffset, yoffset, width, height, data_size, data);
            }
        };

        template< typename target_t, typename internal_t, typename group_t, typename data_t, typename value_t >
        struct loader< target_t, internal_t, group_t, data_t, value_t,
            typename ::boost::enable_if< typename dimension_check< target_t >::is_three_t >::type,
            typename ::boost::enable_if< typename compression_check< target_t >::is_compressed_t >::type > {
            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level,
                                    ::std::uint8_t const border) {
              fnc::gl_compressed_tex_image_3d::call < target_t, internal_t, group_t, data_t
                  > (level, width, height, depth, border, data_size, data);
            }

            inline static void load(value_t const* data,
                                    ::std::size_t const data_size,
                                    ::std::size_t const xoffset,
                                    ::std::size_t const yoffset,
                                    ::std::size_t const zoffset,
                                    ::std::size_t const width,
                                    ::std::size_t const height,
                                    ::std::size_t const depth,
                                    ::std::uint32_t const level) {
              fnc::gl_compressed_tex_sub_image_3d::call < target_t, group_t, data_t
                  > (level, xoffset, yoffset, zoffset, width, height, depth, data_size, data);
            }
        };

        template< typename texture_format_t >
        struct texture_loader {
            typedef typename texture_format_t::target::info::format target_t;
            typedef typename texture_format_t::internal::info::format internal_t;
            typedef typename texture_format_t::group::info::format group_t;
            typedef typename texture_format_t::data::info::format data_t;
            typedef typename fd::to_typename< typename texture_format_t::data::info::value_type >::type value_t;

            typedef loader< target_t, internal_t, group_t, data_t, value_t > type;
        };

        template< typename target_format_t, typename internal_format_t, typename group_format_t, typename data_format_t >
        struct texture_format;

        template< typename target_format_t, typename internal_format_t, typename group_format_t, typename data_format_t >
        struct texture_format: fg::is_internal_compatible< group_format_t, internal_format_t >,
        fd::are_group_internal_compatible< data_format_t, group_format_t, internal_format_t >
                               ,
                               ft::is_internal_compatible< target_format_t, internal_format_t >
                               ,
                               ft::is_of_target_base< target_format_t, ft::base::texture > {
            typedef target_format_t target;
            typedef internal_format_t internal;
            typedef group_format_t group;
            typedef data_format_t data;

            typedef typename texture_loader<
                texture_format< target_format_t, internal_format_t, group_format_t, data_format_t > >::type loader;
        };

        template< typename target_format_t, typename base_t = fgb::rgba, fi::size_type size_t = 8,
            typename type_t = fit::unsigned_fixed, typename compression_t = fic::normal,
            typename order_t = fg::order::normal >
        class texture_format_selector {
            typedef typename fi::to_data_type< type_t >::type ideal_data_type;
            typedef typename fg::to_internal_base< base_t >::type ideal_internal_base;
            typedef typename fi::to_data_packing< ideal_internal_base >::type ideal_data_packing;
            typedef typename fd::format_selector< ideal_data_type, ideal_data_packing, size_t, order_t >::format data_format;

            typedef typename data_format::info::type data_type;
            typedef typename data_format::info::packing data_packing;

            typedef typename fi::format_selector< ideal_internal_base, size_t, type_t, compression_t >::format internal_format;

            typedef typename internal_format::info::base internal_base;

            typedef typename fi::to_group_type< type_t >::type group_type;
            typedef typename fg::format_selector< base_t, group_type, order_t >::format group_format;

          public:
            typedef texture_format< target_format_t, internal_format, group_format, data_format > format;
        };
      } // namespace texture
    } // namespace formats

    namespace ftext = ::gtulu::internal::formats::texture;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TEXTURE_HPP_ */
