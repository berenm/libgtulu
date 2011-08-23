/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_GROUP_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace group {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_depth) (gl_stencil) (gl_depth_stencil) (gl_red) (gl_green) (gl_blue) (gl_rg) (gl_rgb) (gl_rgba) (gl_bgr) (gl_bgra) (gl_red_integer ) (gl_green_integer) (gl_blue_integer ) (gl_rg_integer) (gl_rgb_integer) (gl_rgba_integer) (gl_bgr_integer) (gl_bgra_integer))
        namespace format {
          typedef cst::gl_red gl_r;
          typedef cst::gl_green gl_g;
          typedef cst::gl_blue gl_b;
          typedef cst::gl_red_integer gl_r_integer;
          typedef cst::gl_green_integer gl_g_integer;
          typedef cst::gl_blue_integer gl_b_integer;
        } // namespace format

        META_ASPECT_DECLARE(base, Base, struct, (depth) (stencil) (depth_stencil) (r) (g) (b) (rg) (rgb) (rgba))
        META_ASPECT_DECLARE(order, Order, struct, (normal) (reverse))
        META_ASPECT_DECLARE(type, Type, struct, (floating) (integer))

        template< typename Format, typename Base, typename DataType, typename Order >
        struct group_metadata {
            typedef Format format;
            typedef Base base;
            typedef DataType type;
            typedef Order order;
        };

        template< typename Format >
        struct group_format;

        template< typename Base, typename DataType, typename Order >
        struct format_selector;

#define DECLARE_GROUP_FORMAT(format_m, group_m, type_m, order_m) \
    template< > struct group_format< format::format_m > { \
        typedef group_metadata< format::format_m, base::group_m, type::type_m, order::order_m> info; \
    }; \
    typedef group_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(order, order_m, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(base, group_m, format_m); \
    \
    template< > struct format_selector < base::group_m, type::type_m, order::order_m > { \
        typedef format_m format; \
    };\

        DECLARE_GROUP_FORMAT(gl_depth, depth, floating, normal)
        DECLARE_GROUP_FORMAT(gl_stencil, stencil, integer, normal)
        DECLARE_GROUP_FORMAT(gl_depth_stencil, depth_stencil, floating, normal)
        DECLARE_GROUP_FORMAT(gl_r, r, floating, normal)
        DECLARE_GROUP_FORMAT(gl_g, g, floating, normal)
        DECLARE_GROUP_FORMAT(gl_b, b, floating, normal)
        DECLARE_GROUP_FORMAT(gl_rg, rg, floating, normal)
        DECLARE_GROUP_FORMAT(gl_rgb, rgb, floating, normal)
        DECLARE_GROUP_FORMAT(gl_rgba, rgba, floating, normal)
        DECLARE_GROUP_FORMAT(gl_bgr, rgb, floating, reverse)
        DECLARE_GROUP_FORMAT(gl_bgra, rgba, floating, reverse)
        DECLARE_GROUP_FORMAT(gl_r_integer, r, integer, normal)
        DECLARE_GROUP_FORMAT(gl_g_integer, g, integer, normal)
        DECLARE_GROUP_FORMAT(gl_b_integer, b, integer, normal)
        DECLARE_GROUP_FORMAT(gl_rg_integer, rg, integer, normal)
        DECLARE_GROUP_FORMAT(gl_rgb_integer, rgb, integer, normal)
        DECLARE_GROUP_FORMAT(gl_rgba_integer, rgba, integer, normal)
        DECLARE_GROUP_FORMAT(gl_bgr_integer, rgb, integer, reverse)
        DECLARE_GROUP_FORMAT(gl_bgra_integer, rgba, integer, reverse)

#undef DECLARE_GROUP_FORMAT

      } // namespace group
    } // namespace formats

    namespace fg = ::gtulu::internal::formats::group;
    namespace fgb = ::gtulu::internal::formats::group::base;
    namespace fgf = ::gtulu::internal::formats::group::format;
    namespace fgo = ::gtulu::internal::formats::group::order;
    namespace fgt = ::gtulu::internal::formats::group::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_GROUP_HPP_ */
