/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_GROUP_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/format/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace group {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_depth)(gl_stencil)(gl_depth_stencil)(gl_red)(gl_green)(gl_blue)(gl_rg)(gl_rgb)(gl_rgba)(gl_bgr)(gl_bgra)(gl_red_integer )(gl_green_integer)(gl_blue_integer )(gl_rg_integer)(gl_rgb_integer)(gl_rgba_integer)(gl_bgr_integer)(gl_bgra_integer))
        namespace format {
          typedef cst::gl_red gl_r;
          typedef cst::gl_green gl_g;
          typedef cst::gl_blue gl_b;
          typedef cst::gl_red_integer gl_r_integer;
          typedef cst::gl_green_integer gl_g_integer;
          typedef cst::gl_blue_integer gl_b_integer;
        } // namespace format

        template< typename Format, typename Component, typename Numeric, typename Order >
        struct group_format_aspect {
            typedef Format format;
            typedef Component component;
            typedef Numeric numeric;
            typedef Order order;
        };

        template< typename Format >
        struct group_format;

        template< typename Base, typename Numeric, typename Order >
        struct select_format;

#define DECLARE_FORMAT(format_m, component_m, numeric_m, order_m)       \
    template< > struct group_format< format::format_m > {               \
        typedef group_format_aspect< format::format_m,                  \
                                     fc::component::component_m,        \
                                     fc::numeric::numeric_m,            \
                                     fc::order::order_m > aspect;       \
    };                                                                  \
    typedef group_format< format::format_m > format_m;                  \
                                                                        \
    template< > struct select_format< fc::component::component_m,       \
                                      fc::numeric::numeric_m,           \
                                      fc::order::order_m > {            \
        typedef format_m type;                                          \
    };

        DECLARE_FORMAT(gl_depth, depth, floating_, forward)
        DECLARE_FORMAT(gl_stencil, stencil, integral_, forward)
        DECLARE_FORMAT(gl_depth_stencil, depth_stencil, floating_, forward)
        DECLARE_FORMAT(gl_r, red, floating_, forward)
        DECLARE_FORMAT(gl_g, green, floating_, forward)
        DECLARE_FORMAT(gl_b, blue, floating_, forward)
        DECLARE_FORMAT(gl_rg, red_green, floating_, forward)
        DECLARE_FORMAT(gl_rgb, red_green_blue, floating_, forward)
        DECLARE_FORMAT(gl_rgba, red_green_blue_alpha, floating_, forward)
        DECLARE_FORMAT(gl_bgr, red_green_blue, floating_, reverse)
        DECLARE_FORMAT(gl_bgra, red_green_blue_alpha, floating_, reverse)
        DECLARE_FORMAT(gl_r_integer, red, integral_, forward)
        DECLARE_FORMAT(gl_g_integer, green, integral_, forward)
        DECLARE_FORMAT(gl_b_integer, blue, integral_, forward)
        DECLARE_FORMAT(gl_rg_integer, red_green, integral_, forward)
        DECLARE_FORMAT(gl_rgb_integer, red_green_blue, integral_, forward)
        DECLARE_FORMAT(gl_rgba_integer, red_green_blue_alpha, integral_, forward)
        DECLARE_FORMAT(gl_bgr_integer, red_green_blue, integral_, reverse)
        DECLARE_FORMAT(gl_bgra_integer, red_green_blue_alpha, integral_, reverse)

#undef DECLARE_FORMAT

      } // namespace group
    } // namespace format

    namespace fg = ::gtulu::internal::format::group;
    namespace fgf = ::gtulu::internal::format::group::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_GROUP_HPP_ */
