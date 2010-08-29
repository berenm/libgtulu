/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_GROUP_HPP_
#define GTULU_INTERNAL_FORMAT_GROUP_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace group {

#define GROUP_FORMATS ((depth, GL_DEPTH)) \
                      ((stencil, GL_STENCIL)) \
                      ((depth_stencil, GL_DEPTH_STENCIL)) \
                      ((r, GL_RED)) \
                      ((g, GL_GREEN)) \
                      ((b, GL_BLUE)) \
                      ((rg, GL_RG)) \
                      ((rgb, GL_RGB)) \
                      ((rgba, GL_RGBA)) \
                      ((bgr, GL_BGR)) \
                      ((bgra, GL_BGRA)) \
                      ((r_integer, GL_RED_INTEGER)) \
                      ((g_integer, GL_GREEN_INTEGER)) \
                      ((b_integer, GL_BLUE_INTEGER)) \
                      ((rg_integer, GL_RG_INTEGER)) \
                      ((rgb_integer, GL_RGB_INTEGER)) \
                      ((rgba_integer, GL_RGBA_INTEGER)) \
                      ((bgr_integer, GL_BGR_INTEGER)) \
                      ((bgra_integer, GL_BGRA_INTEGER)) \

        namespace format {
#define CONSTANT_LIST GROUP_FORMATS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (depth)
            (stencil)
            (depth_stencil)
            (r)
            (g)
            (b)
            (rg)
            (rgb)
            (rgba)
        )
        DECLARE_TRAIT_ASPECT(order, struct,
            (normal)
            (reverse)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (integer)
        )

        template< typename format_t, typename base_t, typename type_t, typename order_t >
        struct group_metadata {
            typedef format_t format;
            typedef base_t base;
            typedef type_t type;
            typedef order_t order;
        };

        template< typename format_t >
        struct group_format;

        template< typename base_t, typename type_t, typename order_t >
        struct format_selector;

#define DECLARE_GROUP_FORMAT(format_m, group_m, type_m, order_m) \
    template< > struct group_format< format::format_m > { \
        typedef group_metadata< format::format_m, base::group_m, type::type_m, order::order_m> info; \
    }; \
    typedef group_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(order, order_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(base, group_m, format_m) \
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
