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

#include "gtulu/internal/format/target.hpp"
#include "gtulu/internal/format/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace format {
      namespace target {

        template< typename TargetFormat, typename TargetBase >
        struct is_of_target_base {
            typedef ::std::is_same< typename TargetFormat::info::base, TargetBase > type;
            static_assert(type::value, "TargetFormat is not of target base TargetBase.");
        };

        /* ---------------- */

        template< typename TargetFormat, typename InternalFormat >
        struct depth_stencil_check {
            typedef bm::or_< fib::is_r< InternalFormat >, fib::is_rg< InternalFormat >, fib::is_rgba< InternalFormat > > is_internal_rgba;
            typedef bm::and_< bm::not_< ftt::is_buffer< TargetFormat > >, bm::not_< ftt::is_threed< TargetFormat > >,
                fts::is_simple< TargetFormat > > is_depth_stencil_capable;

            typedef bm::or_< is_internal_rgba, is_depth_stencil_capable > type;
            static_assert(type::value, "InternalFormat is not rgba and TargetFormat is not depth stencil capable.");
            static_assert(type::value, "Section 3.8.1 Texture Image Specification");
            static_assert(type::value, "Textures with a base internal format of DEPTH_COMPONENT or DEPTH_STENCIL are supported by texture image specification commands only if target is TEXTURE_1D, TEXTURE_2D, TEXTURE_1D_ARRAY, TEXTURE_2D_ARRAY, TEXTURE_RECTANGLE, TEXTURE_CUBE_MAP, PROXY_TEXTURE_1D, PROXY_TEXTURE_2D, PROXY_TEXTURE_1D_ARRAY, PROXY_TEXTURE_2D_ARRAY, PROXY_TEXTURE_RECTANGLE, or PROXY_TEXTURE_CUBE_MAP. Using these format in conjunction with any other target will result in an INVALID_OPERATION error.");
        };

        template< typename TargetFormat, typename InternalFormat >
        struct compression_check {
            typedef bm::not_< bm::and_< fic::is_compressed< InternalFormat >, ftt::is_rectangle< TargetFormat > > > type;
            static_assert(type::value, "compressed InternalFormat is not compatible with rectangle TargetFormat.");
        };

        template< typename TargetFormat, typename InternalFormat >
        struct restriction_check {
            typedef bm::or_< bm::not_< fir::is_renderbuffer< InternalFormat > >, ftb::is_renderbuffer< TargetFormat > > renderbuffer_only_c;
            static_assert(renderbuffer_only_c::value, "TargetFormat is texture and InternalFormat is renderbuffer only.");

            typedef bm::or_< bm::not_< fir::is_texture< InternalFormat > >, ftb::is_texture< TargetFormat > > texture_only_c;
            static_assert(texture_only_c::value, "TargetFormat is renderbuffer and InternalFormat is texture only.");

            typedef bm::and_< renderbuffer_only_c, texture_only_c > type;
        };

        template< typename TargetFormat, typename InternalFormat >
        struct is_internal_compatible {
            typedef typename depth_stencil_check< TargetFormat, InternalFormat >::type depth_stencil_c;
            typedef typename restriction_check< TargetFormat, InternalFormat >::type restriction_c;
            typedef typename compression_check< TargetFormat, InternalFormat >::type compression_c;

            typedef bm::and_< depth_stencil_c, restriction_c, compression_c > type;
        };
      } // namespace target
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_TARGET_HPP_ */
