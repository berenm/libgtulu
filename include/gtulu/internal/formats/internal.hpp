/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_INTERNAL_HPP_
#define GTULU_INTERNAL_FORMAT_INTERNAL_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace internal {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_r8) (gl_r8_snorm) (gl_r16) (gl_r16_snorm) (gl_rg8) (gl_rg8_snorm) (gl_rg16) (gl_rg16_snorm) (gl_r3_g3_b2) (gl_rgb4) (gl_rgb5) (gl_rgb8) (gl_rgb8_snorm) (gl_rgb10) (gl_rgb12) (gl_rgb16) (gl_rgb16_snorm) (gl_rgba2) (gl_rgba4) (gl_rgb5_a1) (gl_rgba8) (gl_rgba8_snorm) (gl_rgb10_a2) (gl_rgba12) (gl_rgba16) (gl_rgba16_snorm) (gl_srgb8) (gl_srgb8_alpha8) (gl_r16f) (gl_rg16f) (gl_rgb16f) (gl_rgba16f) (gl_r32f) (gl_rg32f) (gl_rgb32f) (gl_rgba32f) (gl_r11f_g11f_b10f) (gl_rgb9_e5) (gl_r8i) (gl_r8ui) (gl_r16i) (gl_r16ui) (gl_r32i) (gl_r32ui) (gl_rg8i) (gl_rg8ui) (gl_rg16i) (gl_rg16ui) (gl_rg32i) (gl_rg32ui) (gl_rgb8i) (gl_rgb8ui) (gl_rgb16i) (gl_rgb16ui) (gl_rgb32i) (gl_rgb32ui) (gl_rgba8i) (gl_rgba8ui) (gl_rgba16i) (gl_rgba16ui) (gl_rgba32i) (gl_rgba32ui) (gl_depth_component16 ) (gl_depth_component24 ) (gl_depth_component32 ) (gl_depth_component32f ) (gl_depth24_stencil8) (gl_depth32f_stencil8) (gl_compressed_red) (gl_compressed_rg) (gl_compressed_rgb) (gl_compressed_rgba) (gl_compressed_srgb) (gl_compressed_srgb_alpha) (gl_compressed_red_rgtc1) (gl_compressed_signed_red_rgtc1) (gl_compressed_rg_rgtc2) (gl_compressed_signed_rg_rgtc2) (gl_stencil_index1 ) (gl_stencil_index4 ) (gl_stencil_index8 ) (gl_stencil_index16 ))
        namespace format {
          typedef cst::gl_depth_component16 gl_depth16;
          typedef cst::gl_depth_component24 gl_depth24;
          typedef cst::gl_depth_component32 gl_depth32;
          typedef cst::gl_depth_component32f gl_depth32f;
          typedef cst::gl_stencil_index1 gl_stencil1;
          typedef cst::gl_stencil_index4 gl_stencil4;
          typedef cst::gl_stencil_index8 gl_stencil8;
          typedef cst::gl_stencil_index16 gl_stencil16;
        } // namespace format

        typedef ::std::uint32_t size_type;

        template< typename Format, typename Component, size_type Size, typename Sign, typename Integral,
            typename Compression, typename Target >
        struct internal_format_aspect {
            typedef Format format;
            typedef Component component;
            typedef Sign sign;
            typedef Integral integral;
            typedef Compression compression;
            typedef Target target;
            static size_type const size_ = Size;
        };

        template< typename Format >
        struct internal_format;

        template< typename Component, size_type Size, typename Sign, typename Integral, typename Compression >
        struct select_format;

#define DECLARE_FORMAT(format_m, component_m, size_m, sign_m, integral_m, compression_m, target_m)      \
    template< > struct internal_format< format::format_m > {                                            \
        typedef internal_format_aspect< format::format_m,                                               \
                                        fc::component::component_m,                                     \
                                        size_m,                                                         \
                                        fc::sign::sign_m,                                               \
                                        fc::integral::integral_m,                                       \
                                        fc::compression::compression_m,                                 \
                                        fc::target::target_m > aspect;                                  \
    };                                                                                                  \
    typedef internal_format< format::format_m > format_m;

#define DECLARE_FORMAT_DEFAULT(format_m, component_m, size_m, sign_m, integral_m, compression_m, target_m)      \
    DECLARE_FORMAT(format_m, component_m, size_m, sign_m, integral_m, compression_m, target_m)                  \
    template< > struct select_format< fc::component::component_m,                                               \
                                      size_m,                                                                   \
                                      fc::sign::sign_m,                                                         \
                                      fc::integral::integral_m,                                                 \
                                      fc::compression::compression_m > {                                        \
        typedef format_m type;                                                                                  \
    };

        DECLARE_FORMAT_DEFAULT(gl_r8, red, 8, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r8_snorm, red, 8, signed_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_r16, red, 16, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16_snorm, red, 16, signed_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rg8, red_green, 8, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg8_snorm, red_green, 8, signed_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rg16, red_green, 16, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16_snorm, red_green, 16, signed_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_r3_g3_b2, red_green_blue, 3, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb4, red_green_blue, 4, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb5, red_green_blue, 5, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb8, red_green_blue, 8, unsigned_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb8_snorm, red_green_blue, 8, signed_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb10, red_green_blue, 10, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb12, red_green_blue, 12, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb16, red_green_blue, 16, unsigned_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb16_snorm, red_green_blue, 16, signed_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba2, red_green_blue_alpha, 2, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgba4, red_green_blue_alpha, 4, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb5_a1, red_green_blue_alpha, 5, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgba8, red_green_blue_alpha, 8, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba8_snorm, red_green_blue_alpha, 8, signed_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb10_a2, red_green_blue_alpha, 10, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba12, red_green_blue_alpha, 12, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgba16, red_green_blue_alpha, 16, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba16_snorm, red_green_blue_alpha, 16, signed_, fixed, none, texture)
        DECLARE_FORMAT(gl_srgb8, red_green_blue, 8, unsigned_, fixed, none, texture)
        DECLARE_FORMAT(gl_srgb8_alpha8, red_green_blue_alpha, 8, unsigned_, fixed, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16f, red, 16, signed_, floating, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16f, red_green, 16, signed_, floating, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb16f, red_green_blue, 16, signed_, floating, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba16f, red_green_blue_alpha, 16, signed_, floating, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r32f, red, 32, signed_, floating, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg32f, red_green, 32, signed_, floating, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb32f, red_green_blue, 32, signed_, floating, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba32f, red_green_blue_alpha, 32, signed_, floating, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r11f_g11f_b10f, red_green_blue, 11, signed_, floating, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb9_e5, red_green_blue, 9, unsigned_, fixed, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_r8i, red, 8, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r8ui, red, 8, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16i, red, 16, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16ui, red, 16, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r32i, red, 32, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r32ui, red, 32, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg8i, red_green, 8, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg8ui, red_green, 8, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16i, red_green, 16, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16ui, red_green, 16, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg32i, red_green, 32, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg32ui, red_green, 32, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb8i, red_green_blue, 8, signed_, integral, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb8ui, red_green_blue, 8, unsigned_, integral, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb16i, red_green_blue, 16, signed_, integral, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb16ui, red_green_blue, 16, unsigned_, integral, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb32i, red_green_blue, 32, signed_, integral, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb32ui, red_green_blue, 32, unsigned_, integral, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba8i, red_green_blue_alpha, 8, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba8ui, red_green_blue_alpha, 8, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba16i, red_green_blue_alpha, 16, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba16ui, red_green_blue_alpha, 16, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba32i, red_green_blue_alpha, 32, signed_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba32ui, red_green_blue_alpha, 32, unsigned_, integral, none, any)
        DECLARE_FORMAT_DEFAULT(gl_depth16, depth, 16, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth24, depth, 24, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth32, depth, 32, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth32f, depth, 32, signed_, floating, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth24_stencil8, depth_stencil, 24, unsigned_, fixed, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth32f_stencil8, depth_stencil, 32, signed_, floating, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_red, red, 8, unsigned_, fixed, compressed, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_rg, red_green, 8, unsigned_, fixed, compressed, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_rgb, red_green_blue, 8, unsigned_, fixed, compressed, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_rgba, red_green_blue_alpha, 8, unsigned_, fixed, compressed, unknown)
        DECLARE_FORMAT(gl_compressed_srgb, red_green_blue, 8, unsigned_, fixed, compressed, unknown)
        DECLARE_FORMAT(gl_compressed_srgb_alpha, red_green_blue_alpha, 8, unsigned_, fixed, compressed, unknown)
        DECLARE_FORMAT(gl_compressed_red_rgtc1, red, 8, unsigned_, fixed, compressed, texture)
        DECLARE_FORMAT(gl_compressed_signed_red_rgtc1, red, 8, unsigned_, fixed, compressed, texture)
        DECLARE_FORMAT(gl_compressed_rg_rgtc2, red_green, 8, unsigned_, fixed, compressed, texture)
        DECLARE_FORMAT(gl_compressed_signed_rg_rgtc2, red_green, 8, unsigned_, fixed, compressed, texture)
        DECLARE_FORMAT_DEFAULT(gl_stencil1, stencil, 1, unsigned_, fixed, none, renderbuffer)
        DECLARE_FORMAT_DEFAULT(gl_stencil4, stencil, 4, unsigned_, fixed, none, renderbuffer)
        DECLARE_FORMAT_DEFAULT(gl_stencil8, stencil, 8, unsigned_, fixed, none, renderbuffer)
        DECLARE_FORMAT_DEFAULT(gl_stencil16, stencil, 16, unsigned_, fixed, none, renderbuffer)

#undef DECLARE_FORMAT_DEFAULT
#undef DECLARE_FORMAT

        template< typename Format > struct base_internal_format;
#define DECLARE_DEFAULT_FORMAT(component_m, size_m, sign_m, integral_m, compressed_m)   \
    typedef select_format< fc::component::component_m,                                  \
                           size_m,                                                      \
                           fc::sign::sign_m,                                            \
                           fc::integral::integral_m,                                    \
                           fc::compression::compressed_m >::type component_m;

        DECLARE_DEFAULT_FORMAT(red, 8, unsigned_, fixed, none)
        DECLARE_DEFAULT_FORMAT(red_green, 8, unsigned_, fixed, none)
        DECLARE_DEFAULT_FORMAT(red_green_blue, 8, unsigned_, fixed, none)
        DECLARE_DEFAULT_FORMAT(red_green_blue_alpha, 8, unsigned_, fixed, none)
        DECLARE_DEFAULT_FORMAT(depth, 16, unsigned_, fixed, none)
        DECLARE_DEFAULT_FORMAT(depth_stencil, 24, unsigned_, fixed, none)
        DECLARE_DEFAULT_FORMAT(stencil, 8, unsigned_, fixed, none)

#undef DECLARE_DEFAULT_FORMAT

      } // namespace internal
    } // namespace formats

    namespace fi = ::gtulu::internal::formats::internal;
    namespace fif = ::gtulu::internal::formats::internal::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_INTERNAL_HPP_ */
