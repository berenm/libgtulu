/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_

#include "gtulu/internal/format/constraint/common.hpp"

#include "gtulu/internal/format/uniform.hpp"
#include "gtulu/internal/format/internal.hpp"
#include "gtulu/internal/format/target.hpp"

#include "gtulu/internal/format/conversion/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace format {
      namespace uniform {
        namespace sampler {

          template< typename SamplerFormat, typename InternalFormat >
          struct shadow_stencil_check {
              typedef bm::and_< fc::compare::is_shadow< SamplerFormat >, fc::component::has_no_depth< InternalFormat > > sampler_is_shadow_and_internal_has_no_depth;
              typedef fc::component::is_stencil< InternalFormat > internal_is_stencil;

              typedef bm::and_< bm::not_< sampler_is_shadow_and_internal_has_no_depth >, bm::not_< internal_is_stencil > > type;
              static_assert(type::value, "SamplerFormat is not compatible with InternalFormat.");
              static_assert(type::value, "");
              static_assert(type::value, "  [x.x.x ?]");
              static_assert(bm::not_< sampler_is_shadow_and_internal_has_no_depth >::value, "  - SamplerFormat is shadow and InternalFormat has no depth component.");
              static_assert(bm::not_< internal_is_stencil >::value, "  - InternalFormat is stencil component only and uniform samplers do no support stencil only textures.");
          };

          template< typename SamplerFormat, typename InternalFormat >
          struct internal_type_check {
              typedef bm::and_<
                  bm::not_< fn::integral::is_floating< typename fc::get_numeric< InternalFormat >::type > >,
                  bm::not_< fn::integral::is_fixed< typename fc::get_numeric< InternalFormat >::type > > > internal_is_not_floating;

              typedef bm::and_< fn::integral::is_floating< typename fc::get_numeric< SamplerFormat >::type >,
                  internal_is_not_floating > sampler_is_floating_but_internal_is_not;
              typedef bm::and_< fn::integral::is_integral< typename fc::get_numeric< SamplerFormat >::type >,
                  bm::not_< fn::integral::is_integral< typename fc::get_numeric< InternalFormat >::type > > > sampler_is_integral_but_internal_is_not;

              typedef bm::and_< fn::integral::is_integral< typename fc::get_numeric< SamplerFormat >::type >,
                  fn::sign::is_signed_< typename fc::get_numeric< SamplerFormat >::type >,
                  fn::sign::is_unsigned_< typename fc::get_numeric< InternalFormat >::type > > sampler_is_signed_but_internal_is_not;
              typedef bm::and_< fn::integral::is_integral< typename fc::get_numeric< SamplerFormat >::type >,
                  fn::sign::is_unsigned_< typename fc::get_numeric< SamplerFormat >::type >,
                  fn::sign::is_signed_< typename fc::get_numeric< InternalFormat >::type > > sampler_is_unsigned_but_internal_is_not;

              typedef bm::and_< bm::not_< sampler_is_floating_but_internal_is_not >,
                  bm::not_< sampler_is_integral_but_internal_is_not >,
                  bm::not_< sampler_is_signed_but_internal_is_not >, bm::not_< sampler_is_unsigned_but_internal_is_not > > type;
              static_assert(type::value, "SamplerFormat is not compatible with InternalFormat.");
              static_assert(type::value, "");
              static_assert(type::value, "  [x.x.x ?]");
              static_assert(bm::not_< sampler_is_floating_but_internal_is_not >::value, "  - SamplerFormat is floating but InternalFormat is not.");
              static_assert(bm::not_< sampler_is_integral_but_internal_is_not >::value, "  - SamplerFormat is integral but InternalFormat is not.");
              static_assert(bm::not_< sampler_is_signed_but_internal_is_not >::value, "  - SamplerFormat is signed but InternalFormat is not.");
              static_assert(bm::not_< sampler_is_unsigned_but_internal_is_not >::value, "  - SamplerFormat is unsigned but InternalFormat is not.");
          };

          template< typename SamplerFormat, typename TargetFormat >
          struct is_target_same {
              typedef ::std::is_same< typename SamplerFormat::aspect::target_format, TargetFormat > type;
              static_assert(type::value, "SamplerTargetFormat and TextureTargetFormat are not same.");
          };

          template< typename SamplerFormat, typename TextureFormat >
          struct is_texture_compatible {
              typedef typename shadow_stencil_check< SamplerFormat, typename TextureFormat::internal_format >::type shadow_stencil_c;
              typedef typename internal_type_check< SamplerFormat, typename TextureFormat::internal_format >::type internal_type_c;
              typedef typename is_target_same< SamplerFormat, typename TextureFormat::target_format >::type target_same_c;

              typedef bm::and_< shadow_stencil_c, internal_type_c, target_same_c > type;
          };
        } // namespace sampler
      } // namespace uniform
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_ */
