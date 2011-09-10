/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_INTERNAL_HPP_
#define GTULU_INTERNAL_FORMAT_INTERNAL_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/format/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace internal {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_r8)(gl_r8_snorm)(gl_r16)(gl_r16_snorm)(gl_rg8)(gl_rg8_snorm)(gl_rg16)(gl_rg16_snorm)(gl_r3_g3_b2)(gl_rgb4)(gl_rgb5)(gl_rgb8)(gl_rgb8_snorm)(gl_rgb10)(gl_rgb12)(gl_rgb16)(gl_rgb16_snorm)(gl_rgba2)(gl_rgba4)(gl_rgb5_a1)(gl_rgba8)(gl_rgba8_snorm)(gl_rgb10_a2)(gl_rgba12)(gl_rgba16)(gl_rgba16_snorm)(gl_srgb8)(gl_srgb8_alpha8)(gl_r16f)(gl_rg16f)(gl_rgb16f)(gl_rgba16f)(gl_r32f)(gl_rg32f)(gl_rgb32f)(gl_rgba32f)(gl_r11f_g11f_b10f)(gl_rgb9_e5)(gl_r8i)(gl_r8ui)(gl_r16i)(gl_r16ui)(gl_r32i)(gl_r32ui)(gl_rg8i)(gl_rg8ui)(gl_rg16i)(gl_rg16ui)(gl_rg32i)(gl_rg32ui)(gl_rgb8i)(gl_rgb8ui)(gl_rgb16i)(gl_rgb16ui)(gl_rgb32i)(gl_rgb32ui)(gl_rgba8i)(gl_rgba8ui)(gl_rgba16i)(gl_rgba16ui)(gl_rgba32i)(gl_rgba32ui)(gl_depth_component16 )(gl_depth_component24 )(gl_depth_component32 )(gl_depth_component32f )(gl_depth24_stencil8)(gl_depth32f_stencil8)(gl_compressed_red)(gl_compressed_rg)(gl_compressed_rgb)(gl_compressed_rgba)(gl_compressed_srgb)(gl_compressed_srgb_alpha)(gl_compressed_red_rgtc1)(gl_compressed_signed_red_rgtc1)(gl_compressed_rg_rgtc2)(gl_compressed_signed_rg_rgtc2)(gl_stencil_index1 )(gl_stencil_index4 )(gl_stencil_index8 )(gl_stencil_index16 ))
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

        template< typename Format, typename Component, typename Numeric, typename Compression, typename Target >
        struct internal_format_aspect {
            typedef Format format;
            typedef Component component;
            typedef Numeric numeric;
            typedef Compression compression;
            typedef Target target;
        };

        template< typename Format >
        struct internal_format;

        template< typename Component, typename Numeric, typename Compression >
        struct select_format;

#define DECLARE_FORMAT(format_m, component_m, numeric_m, compression_m, target_m)       \
    template< > struct internal_format< format::format_m > {                            \
        typedef internal_format_aspect< format::format_m,                               \
                                        fc::component::component_m,                     \
                                        fc::numeric::numeric_m,                         \
                                        fc::compression::compression_m,                 \
                                        fc::target::target_m > aspect;                  \
    };                                                                                  \
    typedef internal_format< format::format_m > format_m;

#define DECLARE_FORMAT_DEFAULT(format_m, component_m, numeric_m, compression_m, target_m)       \
    DECLARE_FORMAT(format_m, component_m, numeric_m, compression_m, target_m)                   \
    template< > struct select_format< fc::component::component_m,                               \
                                      fc::numeric::numeric_m,                                   \
                                      fc::compression::compression_m > {                        \
        typedef format_m type;                                                                  \
    };

        DECLARE_FORMAT_DEFAULT(gl_r8, red, ufixed8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r8_snorm, red, fixed8_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_r16, red, ufixed16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16_snorm, red, fixed16_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rg8, red_green, ufixed8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg8_snorm, red_green, fixed8_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rg16, red_green, ufixed16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16_snorm, red_green, fixed16_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_r3_g3_b2, red_green_blue, ufixed_least2_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb4, red_green_blue, ufixed4_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb5, red_green_blue, ufixed5_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb8, red_green_blue, ufixed8_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb8_snorm, red_green_blue, fixed8_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb10, red_green_blue, ufixed10_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb12, red_green_blue, ufixed12_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb16, red_green_blue, ufixed16_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb16_snorm, red_green_blue, fixed16_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba2, red_green_blue_alpha, ufixed2_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgba4, red_green_blue_alpha, ufixed4_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgb5_a1, red_green_blue_alpha, ufixed5_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgba8, red_green_blue_alpha, ufixed8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba8_snorm, red_green_blue_alpha, fixed8_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb10_a2, red_green_blue_alpha, ufixed10_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba12, red_green_blue_alpha, ufixed12_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_rgba16, red_green_blue_alpha, ufixed16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba16_snorm, red_green_blue_alpha, fixed16_, none, texture)
        DECLARE_FORMAT(gl_srgb8, red_green_blue, ufixed8_, none, texture)
        DECLARE_FORMAT(gl_srgb8_alpha8, red_green_blue_alpha, ufixed8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16f, red, float16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16f, red_green, float16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb16f, red_green_blue, float16_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba16f, red_green_blue_alpha, float16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r32f, red, float32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg32f, red_green, float32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb32f, red_green_blue, float32_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba32f, red_green_blue_alpha, float32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r11f_g11f_b10f, red_green_blue, float_least10_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb9_e5, red_green_blue, ufixed14_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_r8i, red, int8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r8ui, red, uint8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16i, red, int16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r16ui, red, uint16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r32i, red, int32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_r32ui, red, uint32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg8i, red_green, int8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg8ui, red_green, uint8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16i, red_green, int16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg16ui, red_green, uint16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg32i, red_green, int32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rg32ui, red_green, uint32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgb8i, red_green_blue, int8_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb8ui, red_green_blue, uint8_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb16i, red_green_blue, int16_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb16ui, red_green_blue, uint16_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb32i, red_green_blue, int32_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgb32ui, red_green_blue, uint32_, none, texture)
        DECLARE_FORMAT_DEFAULT(gl_rgba8i, red_green_blue_alpha, int8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba8ui, red_green_blue_alpha, uint8_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba16i, red_green_blue_alpha, int16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba16ui, red_green_blue_alpha, uint16_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba32i, red_green_blue_alpha, int32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_rgba32ui, red_green_blue_alpha, uint32_, none, any)
        DECLARE_FORMAT_DEFAULT(gl_depth16, depth, ufixed16_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth24, depth, ufixed24_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth32, depth, ufixed32_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth32f, depth, float32_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth24_stencil8, depth_stencil, ufixed24_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_depth32f_stencil8, depth_stencil, float32_, none, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_red, red, ufixed8_, compressed, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_rg, red_green, ufixed8_, compressed, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_rgb, red_green_blue, ufixed8_, compressed, unknown)
        DECLARE_FORMAT_DEFAULT(gl_compressed_rgba, red_green_blue_alpha, ufixed8_, compressed, unknown)
        DECLARE_FORMAT(gl_compressed_srgb, red_green_blue, ufixed8_, compressed, unknown)
        DECLARE_FORMAT(gl_compressed_srgb_alpha, red_green_blue_alpha, ufixed8_, compressed, unknown)
        DECLARE_FORMAT(gl_compressed_red_rgtc1, red, ufixed8_, compressed, texture)
        DECLARE_FORMAT(gl_compressed_signed_red_rgtc1, red, ufixed8_, compressed, texture)
        DECLARE_FORMAT(gl_compressed_rg_rgtc2, red_green, ufixed8_, compressed, texture)
        DECLARE_FORMAT(gl_compressed_signed_rg_rgtc2, red_green, ufixed8_, compressed, texture)
        DECLARE_FORMAT_DEFAULT(gl_stencil1, stencil, uint1_, none, renderbuffer)
        DECLARE_FORMAT_DEFAULT(gl_stencil4, stencil, uint4_, none, renderbuffer)
        DECLARE_FORMAT_DEFAULT(gl_stencil8, stencil, uint8_, none, renderbuffer)
        DECLARE_FORMAT_DEFAULT(gl_stencil16, stencil, uint16_, none, renderbuffer)

#undef DECLARE_FORMAT_DEFAULT
#undef DECLARE_FORMAT

        template< typename Format > struct base_internal_format;
#define DECLARE_DEFAULT_FORMAT(component_m, numeric_m, compression_m)           \
    typedef select_format< fc::component::component_m,                          \
                           fc::numeric::numeric_m,                              \
                           fc::compression::compression_m >::type component_m;

        DECLARE_DEFAULT_FORMAT(red, ufixed8_, none)
        DECLARE_DEFAULT_FORMAT(red_green, ufixed8_, none)
        DECLARE_DEFAULT_FORMAT(red_green_blue, ufixed8_, none)
        DECLARE_DEFAULT_FORMAT(red_green_blue_alpha, ufixed8_, none)
        DECLARE_DEFAULT_FORMAT(depth, ufixed16_, none)
        DECLARE_DEFAULT_FORMAT(depth_stencil, ufixed24_, none)
        DECLARE_DEFAULT_FORMAT(stencil, uint8_, none)

#undef DECLARE_DEFAULT_FORMAT

      } // namespace internal
    } // namespace format

    namespace fi = ::gtulu::internal::format::internal;
    namespace fif = ::gtulu::internal::format::internal::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_INTERNAL_HPP_ */
