/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_TARGET_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_TARGET_HPP_

#include "gtulu/internal/formats/target.hpp"
#include "gtulu/internal/formats/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace target {

        template< typename target_format_t, typename target_base_t >
        struct is_of_target_base {
            typedef ::std::is_same< typename target_format_t::info::base, target_base_t > type;
            static_assert(type::value, "target_format_t is not of target base target_base_t.");
        };

        /* ---------------- */

        template< typename target_format_t, typename internal_format_t >
        struct depth_stencil_check {
            typedef bm::or_< fib::is_r< internal_format_t >, fib::is_rg< internal_format_t >,
                fib::is_rgba< internal_format_t > > is_internal_rgba;
            typedef bm::and_< bm::not_< ftt::is_buffer< target_format_t > >,
                bm::not_< ftt::is_threed< target_format_t > >, fts::is_simple< target_format_t > > is_depth_stencil_capable;

            typedef bm::or_< is_internal_rgba, is_depth_stencil_capable > type;
            static_assert(type::value, "internal_format_t is not rgba and target_format_t is not depth stencil capable.");
            static_assert(type::value, "Section 3.8.1 Texture Image Specification");
            static_assert(type::value, "Textures with a base internal format of DEPTH_COMPONENT or DEPTH_STENCIL are supported by texture image specification commands only if target is TEXTURE_1D, TEXTURE_2D, TEXTURE_1D_ARRAY, TEXTURE_2D_ARRAY, TEXTURE_RECTANGLE, TEXTURE_CUBE_MAP, PROXY_TEXTURE_1D, PROXY_TEXTURE_2D, PROXY_TEXTURE_1D_ARRAY, PROXY_TEXTURE_2D_ARRAY, PROXY_TEXTURE_RECTANGLE, or PROXY_TEXTURE_CUBE_MAP. Using these formats in conjunction with any other target will result in an INVALID_OPERATION error.");
        };

        template< typename target_format_t, typename internal_format_t >
        struct compression_check {
            typedef bm::not_< bm::and_< fic::is_compressed< internal_format_t >, ftt::is_rectangle< target_format_t > > > type;
            static_assert(type::value, "compressed internal_format_t is not compatible with rectangle target_format_t.");
        };

        template< typename target_format_t, typename internal_format_t >
        struct restriction_check {
            typedef bm::or_< bm::not_< fir::is_renderbuffer< internal_format_t > >,
                ftb::is_renderbuffer< target_format_t > > renderbuffer_only_c;
            static_assert(renderbuffer_only_c::value, "target_format_t is texture and internal_format_t is renderbuffer only.");

            typedef bm::or_< bm::not_< fir::is_texture< internal_format_t > >, ftb::is_texture< target_format_t > > texture_only_c;
            static_assert(texture_only_c::value, "target_format_t is renderbuffer and internal_format_t is texture only.");

            typedef bm::and_< renderbuffer_only_c, texture_only_c > type;
        };

        template< typename target_format_t, typename internal_format_t >
        struct is_internal_compatible {
            typedef typename depth_stencil_check< target_format_t, internal_format_t >::type depth_stencil_c;
            typedef typename restriction_check< target_format_t, internal_format_t >::type restriction_c;
            typedef typename compression_check< target_format_t, internal_format_t >::type compression_c;

            typedef bm::and_< depth_stencil_c, restriction_c, compression_c > type;
        };
      } // namespace target
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_TARGET_HPP_ */
