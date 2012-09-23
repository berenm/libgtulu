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
        struct texture_format : fgrp::is_internal_compatible< GroupFormat, InternalFormat >,
          fdat::are_group_internal_compatible< DataFormat, GroupFormat, InternalFormat >
          ,
          ftgt::is_internal_compatible< TargetFormat, InternalFormat >
          ,
          fcmn::target::is_texture< TargetFormat > {
          typedef TargetFormat   target_format;
          typedef InternalFormat internal_format;
          typedef GroupFormat    group_format;
          typedef DataFormat     data_format;
        };

        template< typename TargetFormat, typename Component = fcmn::component::red_green_blue_alpha,
                  typename Numeric                          = fcmn::numeric::ufixed8_, typename Compression = fcmn::compression::none,
                  typename Order                            = fcmn::order::forward >
        struct select_format {
          typedef typename fgrp::get_ideal_internal_component< Component >::type                       ideal_internal_component;
          typedef typename fint::select_format< ideal_internal_component, Numeric, Compression >::type internal_format;

          typedef typename fint::get_ideal_data_integral< typename fnum::get_integral< Numeric >::type >::type ideal_data_integral;
          typedef typename fint::get_ideal_component_packing< ideal_internal_component >::type                 ideal_data_packing;
          typedef typename fdat::select_format< typename fnum::get_width< Numeric >::type, ideal_data_packing, Order,
                                                typename fnum::get_sign< Numeric >::type, ideal_data_integral >::type data_format;

          typedef typename fint::get_ideal_group_integral< typename fnum::get_integral< Numeric >::type >::type ideal_group_integral;
          typedef typename fgrp::select_format< Component, ideal_group_integral, Order >::type                  group_format;

          typedef texture_format< TargetFormat, internal_format, group_format, data_format > type;
        };

      } // namespace texture
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_TEXTURE_HPP_ */
