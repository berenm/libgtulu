/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_
#define GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_

#include "gtulu/internal/formats/uniform.hpp"
#include "gtulu/internal/formats/internal.hpp"
#include "gtulu/internal/formats/target.hpp"

#include "gtulu/internal/formats/conversions/internal.hpp"

namespace gtulu {
  namespace internal {
    namespace bm = ::boost::mpl;

    namespace formats {
      namespace uniform {
        namespace sampler {

          template< typename sampler_format_t, typename internal_format_t >
          struct shadow_stencil_check {
              typedef bm::or_< fib::is_depth< internal_format_t >, fib::is_depth_stencil< internal_format_t > >
                  shadow_capable_c;
              typedef bm::not_< bm::and_< fusc::is_shadow< sampler_format_t >, shadow_capable_c > > shadow_c;
              static_assert(shadow_c::value, "shadow uniform sampler only supports depth or depth_stencil internal_format_t.");

              typedef bm::not_< fib::is_stencil< internal_format_t > > stencil_c;
              static_assert(shadow_c::value, "uniform sampler does not support stencil internal_format_t.");

              typedef bm::and_< shadow_c, stencil_c > type;
          };

          template< typename sampler_format_t, typename internal_format_t >
          struct internal_type_check {
              typedef bm::or_< fit::is_floating< internal_format_t >, fit::is_fixed< internal_format_t >,
                  fit::is_unsigned_fixed< internal_format_t > > is_internal_floating;

              typedef bm::and_< is_internal_floating, fut::is_floating< sampler_format_t > > are_both_floating;
              typedef bm::and_< fit::is_integer< internal_format_t >, fut::is_integer< sampler_format_t > >
                  are_both_integer;
              typedef bm::and_< fit::is_unsigned_integer< internal_format_t >, fut::is_unsigned_integer<
                  sampler_format_t > > are_both_unsigned_integer;

              typedef bm::or_< are_both_floating, are_both_integer, are_both_unsigned_integer > type;
              static_assert(type::value, "internal_type_t is not compatible with uniform sampler_type_t, floating sampler require floating, fixed or unsigned_fixed internal type, integer sampler require integer internal type and ::std::uint32_teger sampler require ::std::uint32_teger internal type.");
          };

          template< typename sampler_target_format_t, typename texture_target_format_t >
          struct is_target_same {
              typedef ::std::is_same< sampler_target_format_t, texture_target_format_t > type;
              static_assert(type::value, "sampler_target_format_t and texture_target_format_t are not same.");
          };

          template< typename sampler_format_t, typename texture_format_t >
          struct is_texture_compatible {
              typedef typename shadow_stencil_check< sampler_format_t, typename texture_format_t::internal >::type
                  shadow_stencil_c;
              typedef typename internal_type_check< sampler_format_t, typename texture_format_t::internal >::type
                  internal_type_c;
              typedef typename is_target_same< typename sampler_format_t::info::target,
                  typename texture_format_t::target >::type target_same_c;

              typedef bm::and_< shadow_stencil_c, internal_type_c, target_same_c > type;
          };
        } // namespace sampler
      } // namespace uniform
    } // namespace formats

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_CONSTRAINT_UNIFORM_HPP_ */
