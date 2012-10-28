/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/format/constraint/numeric.hpp"
#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/uniform.hpp"
#include "gtulu/internal/format/internal.hpp"
#include "gtulu/internal/format/target.hpp"

#include "gtulu/internal/format/conversion/internal.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace sampler {

        template< typename SamplerFormat, typename InternalFormat >
        struct shadow_stencil_check {
          using shadow_check  = meta::imply< fcmn::compare::is_shadow< SamplerFormat >, fcmn::component::has_depth< InternalFormat > >;
          using stencil_check = fcmn::component::is_not_stencil< InternalFormat >;

          typedef meta::and_< shadow_check, stencil_check > type;

          static_assert(type::value, "SamplerFormat is not compatible with InternalFormat.");
          static_assert(type::value, "");
          static_assert(type::value, "  [x.x.x ?]");
          static_assert(shadow_check::value, "  - SamplerFormat is shadow and InternalFormat has no depth component.");
          static_assert(stencil_check::value, "  - InternalFormat is stencil component only and uniform samplers do no support stencil only textures.");
        };

        template< typename SamplerFormat, typename InternalFormat >
        struct internal_type_check {
          using floating_check = fnum::integral::floating_implies_convertible< SamplerFormat, InternalFormat >;
          using integral_check = meta::imply_same< fnum::integral::is_integral, SamplerFormat, InternalFormat >;

          using signed_check = meta::or_< fnum::integral::is_not_integral< SamplerFormat >,
                                          meta::imply_same< fnum::sign::is_signed_, SamplerFormat, InternalFormat > >;
          using unsign_check = meta::or_< fnum::integral::is_not_integral< SamplerFormat >,
                                          meta::imply_same< fnum::sign::is_unsigned_, SamplerFormat, InternalFormat > >;

          typedef meta::and_< floating_check, integral_check, signed_check, unsign_check > type;

          static_assert(type::value, "SamplerFormat is not compatible with InternalFormat.");
          static_assert(type::value, "");
          static_assert(type::value, "  [x.x.x ?]");
          static_assert(floating_check::value, "  - SamplerFormat is floating but InternalFormat is not.");
          static_assert(integral_check::value, "  - SamplerFormat is integral but InternalFormat is not.");
          static_assert(signed_check::value, "  - SamplerFormat is signed but InternalFormat is not.");
          static_assert(unsign_check::value, "  - SamplerFormat is unsigned but InternalFormat is not.");
        };

        template< typename SamplerFormat, typename TargetFormat >
        struct is_target_same {
          typedef std::is_same< typename SamplerFormat::aspect::target_format, TargetFormat > type;

          static_assert(type::value, "SamplerTargetFormat and TextureTargetFormat are not same.");
        };

        template< typename SamplerFormat, typename TextureFormat >
        using is_texture_compatible =
                meta::and_< typename shadow_stencil_check< SamplerFormat, typename TextureFormat::internal_format >::type,
                            typename internal_type_check< SamplerFormat, typename TextureFormat::internal_format >::type,
                            typename is_target_same< SamplerFormat, typename TextureFormat::target_format >::type >;

      } // namespace sampler
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_ */
