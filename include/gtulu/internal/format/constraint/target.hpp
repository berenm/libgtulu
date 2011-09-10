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

#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/target.hpp"
#include "gtulu/internal/format/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace format {
      namespace target {

        template< typename TargetFormat, typename InternalFormat >
        struct depth_stencil_check {
            typedef bm::and_< fc::component::has_no_red< InternalFormat >,
                fc::component::has_no_green< InternalFormat >, fc::component::has_no_blue< InternalFormat >,
                fc::component::has_no_alpha< InternalFormat > > internal_is_depth_stencil;
            typedef bm::and_< bm::not_< fc::dimension::is_buffer< TargetFormat > >,
                bm::not_< fc::dimension::is_threed< TargetFormat > >, fc::sample::is_simple< TargetFormat > > is_depth_stencil_capable;

            typedef bm::and_< internal_is_depth_stencil, bm::not_< is_depth_stencil_capable > > internal_is_ds_but_target_is_not_ds_capable;

            typedef bm::not_< internal_is_ds_but_target_is_not_ds_capable > type;
            static_assert(type::value, "TargetFormat is not compatible with InternalFormat.");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.8.1 Texture Image Specification]");
            static_assert(bm::not_< internal_is_ds_but_target_is_not_ds_capable >::value, "  - InternalFormat has depth and/or stencil component but TargetFormat is not depth/stencil capable.");
            static_assert(bm::not_< internal_is_ds_but_target_is_not_ds_capable >::value, "    Textures with a base internal format of DEPTH_COMPONENT or DEPTH_STENCIL are supported by texture image specification commands only if target is TEXTURE_1D, TEXTURE_2D, TEXTURE_1D_ARRAY, TEXTURE_2D_ARRAY, TEXTURE_RECTANGLE, TEXTURE_CUBE_MAP, PROXY_TEXTURE_1D, PROXY_TEXTURE_2D, PROXY_TEXTURE_1D_ARRAY, PROXY_TEXTURE_2D_ARRAY, PROXY_TEXTURE_RECTANGLE, or PROXY_TEXTURE_CUBE_MAP. Using these format in conjunction with any other target will result in an INVALID_OPERATION error.");
        };

        template< typename TargetFormat, typename InternalFormat >
        struct compression_check {
            typedef bm::not_<
                bm::and_< fc::compression::is_compressed< InternalFormat >, fc::dimension::is_rectangle< TargetFormat > > > type;
            static_assert(type::value, "compressed InternalFormat is not compatible with rectangle TargetFormat.");
        };

        template< typename TargetFormat, typename InternalFormat >
        struct restriction_check {
            typedef bm::and_< fc::target::is_renderbuffer< InternalFormat >,
                bm::not_< fc::target::is_renderbuffer< TargetFormat > > > internal_is_renderbuffer_only_but_target_is_not;
            typedef bm::and_< fc::target::is_texture< InternalFormat >,
                bm::not_< fc::target::is_texture< TargetFormat > > > internal_is_texture_only_but_target_is_not;

            typedef bm::and_< bm::not_< internal_is_renderbuffer_only_but_target_is_not >,
                bm::not_< internal_is_texture_only_but_target_is_not > > type;
            static_assert(type::value, "TargetFormat is not compatible with InternalFormat.");
            static_assert(type::value, "");
            static_assert(type::value, "  [3.8.1 Texture Image Specification]");
            static_assert(bm::not_< internal_is_renderbuffer_only_but_target_is_not >::value, "  - InternalFormat is renderbuffer only and TargetFormat is not renderbuffer.");
            static_assert(bm::not_< internal_is_texture_only_but_target_is_not >::value, "  - InternalFormat is texture only and TargetFormat is not texture.");
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
