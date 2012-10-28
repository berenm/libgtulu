/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_TEXTURE_HPP_
#define GTULU_INTERNAL_FORMAT_TEXTURE_HPP_

#include "gtulu/namespaces.hpp"
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

    namespace format {
      namespace texture {

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_format;

        template< typename TargetFormat, typename InternalFormat, typename GroupFormat, typename DataFormat >
        struct texture_format {
          using group_check   = fgrp::is_internal_compatible< GroupFormat, InternalFormat >;
          using format_check  = fdat::are_group_internal_compatible< DataFormat, GroupFormat, InternalFormat >;
          using target_check  = ftgt::is_internal_compatible< TargetFormat, InternalFormat >;
          using texture_check = fcmn::target::is_texture< TargetFormat >;

          typedef meta::and_< group_check, format_check, target_check, texture_check > type;
          static_assert(type::value, "TextureFormat is invalid.");

          typedef TargetFormat   target_format;
          typedef InternalFormat internal_format;
          typedef GroupFormat    group_format;
          typedef DataFormat     data_format;
        };

        template< typename TargetFormat,
                  typename Component   = fcmn::component::red_green_blue_alpha,
                  typename Numeric     = fcmn::numeric::ufixed8_,
                  typename Compression = fcmn::compression::none,
                  typename Order       = fcmn::order::forward >
        struct select_format {
          using ideal_internal_component = typename fgrp::get_ideal_internal_component< Component >::type;
          using internal_format          = typename fint::select_format< ideal_internal_component, Numeric, Compression >::type;

          using ideal_data_integral = typename fint::get_ideal_data_integral< fnum::get_integral< Numeric > >::type;
          using ideal_data_packing  = typename fint::get_ideal_component_packing< ideal_internal_component >::type;
          using data_format         = typename fdat::select_format< fnum::get_width< Numeric >, ideal_data_packing, Order,
                                                                    fnum::get_sign< Numeric >, ideal_data_integral >::type;

          using ideal_group_integral = typename fint::get_ideal_group_integral< fnum::get_integral< Numeric > >::type;
          using group_format         = typename fgrp::select_format< Component, ideal_group_integral, Order >::type;

          typedef texture_format< TargetFormat, internal_format, group_format, data_format > type;
        };

      } // namespace texture
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TEXTURE_HPP_ */
