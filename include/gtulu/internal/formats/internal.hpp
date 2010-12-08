/**
 * @file
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

        namespace format {
          typedef cst::gl_r8 gl_r8;
          typedef cst::gl_r8_snorm gl_r8_snorm;
          typedef cst::gl_r16 gl_r16;
          typedef cst::gl_r16_snorm gl_r16_snorm;
          typedef cst::gl_rg8 gl_rg8;
          typedef cst::gl_rg8_snorm gl_rg8_snorm;
          typedef cst::gl_rg16 gl_rg16;
          typedef cst::gl_rg16_snorm gl_rg16_snorm;
          typedef cst::gl_r3_g3_b2 gl_r3_g3_b2;
          typedef cst::gl_rgb4 gl_rgb4;
          typedef cst::gl_rgb5 gl_rgb5;
          typedef cst::gl_rgb8 gl_rgb8;
          typedef cst::gl_rgb8_snorm gl_rgb8_snorm;
          typedef cst::gl_rgb10 gl_rgb10;
          typedef cst::gl_rgb12 gl_rgb12;
          typedef cst::gl_rgb16 gl_rgb16;
          typedef cst::gl_rgb16_snorm gl_rgb16_snorm;
          typedef cst::gl_rgba2 gl_rgba2;
          typedef cst::gl_rgba4 gl_rgba4;
          typedef cst::gl_rgb5_a1 gl_rgb5_a1;
          typedef cst::gl_rgba8 gl_rgba8;
          typedef cst::gl_rgba8_snorm gl_rgba8_snorm;
          typedef cst::gl_rgb10_a2 gl_rgb10_a2;
          typedef cst::gl_rgba12 gl_rgba12;
          typedef cst::gl_rgba16 gl_rgba16;
          typedef cst::gl_rgba16_snorm gl_rgba16_snorm;
          typedef cst::gl_srgb8 gl_srgb8;
          typedef cst::gl_srgb8_alpha8 gl_srgb8_alpha8;
          typedef cst::gl_r16f gl_r16f;
          typedef cst::gl_rg16f gl_rg16f;
          typedef cst::gl_rgb16f gl_rgb16f;
          typedef cst::gl_rgba16f gl_rgba16f;
          typedef cst::gl_r32f gl_r32f;
          typedef cst::gl_rg32f gl_rg32f;
          typedef cst::gl_rgb32f gl_rgb32f;
          typedef cst::gl_rgba32f gl_rgba32f;
          typedef cst::gl_r11f_g11f_b10f gl_r11f_g11f_b10f;
          typedef cst::gl_rgb9_e5 gl_rgb9_e5;
          typedef cst::gl_r8i gl_r8i;
          typedef cst::gl_r8ui gl_r8ui;
          typedef cst::gl_r16i gl_r16i;
          typedef cst::gl_r16ui gl_r16ui;
          typedef cst::gl_r32i gl_r32i;
          typedef cst::gl_r32ui gl_r32ui;
          typedef cst::gl_rg8i gl_rg8i;
          typedef cst::gl_rg8ui gl_rg8ui;
          typedef cst::gl_rg16i gl_rg16i;
          typedef cst::gl_rg16ui gl_rg16ui;
          typedef cst::gl_rg32i gl_rg32i;
          typedef cst::gl_rg32ui gl_rg32ui;
          typedef cst::gl_rgb8i gl_rgb8i;
          typedef cst::gl_rgb8ui gl_rgb8ui;
          typedef cst::gl_rgb16i gl_rgb16i;
          typedef cst::gl_rgb16ui gl_rgb16ui;
          typedef cst::gl_rgb32i gl_rgb32i;
          typedef cst::gl_rgb32ui gl_rgb32ui;
          typedef cst::gl_rgba8i gl_rgba8i;
          typedef cst::gl_rgba8ui gl_rgba8ui;
          typedef cst::gl_rgba16i gl_rgba16i;
          typedef cst::gl_rgba16ui gl_rgba16ui;
          typedef cst::gl_rgba32i gl_rgba32i;
          typedef cst::gl_rgba32ui gl_rgba32ui;
          typedef cst::gl_depth_component16 gl_depth16;
          typedef cst::gl_depth_component24 gl_depth24;
          typedef cst::gl_depth_component32 gl_depth32;
          typedef cst::gl_depth_component32f gl_depth32f;
          typedef cst::gl_depth24_stencil8 gl_depth24_stencil8;
          typedef cst::gl_depth32f_stencil8 gl_depth32f_stencil8;
          typedef cst::gl_compressed_red gl_compressed_red;
          typedef cst::gl_compressed_rg gl_compressed_rg;
          typedef cst::gl_compressed_rgb gl_compressed_rgb;
          typedef cst::gl_compressed_rgba gl_compressed_rgba;
          typedef cst::gl_compressed_srgb gl_compressed_srgb;
          typedef cst::gl_compressed_srgb_alpha gl_compressed_srgb_alpha;
          typedef cst::gl_compressed_red_rgtc1 gl_compressed_red_rgtc1;
          typedef cst::gl_compressed_signed_red_rgtc1 gl_compressed_signed_red_rgtc1;
          typedef cst::gl_compressed_rg_rgtc2 gl_compressed_rg_rgtc2;
          typedef cst::gl_compressed_signed_rg_rgtc2 gl_compressed_signed_rg_rgtc2;
          typedef cst::gl_stencil_index1 gl_stencil1;
          typedef cst::gl_stencil_index4 gl_stencil4;
          typedef cst::gl_stencil_index8 gl_stencil8;
          typedef cst::gl_stencil_index16 gl_stencil16;
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (depth)
            (stencil)
            (depth_stencil)
            (r)
            (rg)
            (rgb)
            (rgba)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (fixed)
            (unsigned_fixed)
            (integer)
            (unsigned_integer)
        )
        DECLARE_TRAIT_ASPECT(compression, struct,
            (normal)
            (compressed)
        )
        DECLARE_TRAIT_ASPECT(restriction, struct,
            (unknown)
            (any)
            (texture)
            (renderbuffer)
        )

        typedef ::std::uint32_t size_type;

        template< typename format_t, typename base_t, size_type size_t, typename type_t, typename compression_t,
            typename restriction_t >
        struct internal_format_metadata {
            typedef format_t format;
            typedef base_t base;
            typedef type_t type;
            typedef compression_t compression;
            typedef restriction_t restriction;
            static const size_type size_ = size_t;
        };

        template< typename format_t >
        struct internal_format;

        template< typename base_t, size_type size_t, typename type_t, typename compression_t >
        struct format_selector;

#define DECLARE_INTERNAL_FORMAT(format_m, base_m, size_m, type_m, compression_m, restriction_m) \
    template< > struct internal_format< format::format_m > { \
        typedef internal_format_metadata< format::format_m, \
                                          base::base_m, \
                                          size_m, \
                                          type::type_m, \
                                          compression::compression_m, \
                                          restriction::restriction_m > info; \
    }; \
    typedef internal_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(compression, compression_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(restriction, restriction_m, format_m) \

#define DECLARE_INTERNAL_FORMAT_DEFAULT(format_m, base_m, size_m, type_m, compression_m, restriction_m) \
    DECLARE_INTERNAL_FORMAT(format_m, base_m, size_m, type_m, compression_m, restriction_m) \
    template< > struct format_selector< base::base_m, \
                                        size_m, \
                                        type::type_m, \
                                        compression::compression_m > { \
        typedef format_m format; \
    };

        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r8, r, 8, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r8_snorm, r, 8, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r16, r, 16, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r16_snorm, r, 16, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg8, rg, 8, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg8_snorm, rg, 8, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg16, rg, 16, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg16_snorm, rg, 16, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r3_g3_b2, rgb, 3, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb4, rgb, 4, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb5, rgb, 5, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb8, rgb, 8, unsigned_fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb8_snorm, rgb, 8, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb10, rgb, 10, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb12, rgb, 12, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb16, rgb, 16, unsigned_fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb16_snorm, rgb, 16, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba2, rgba, 2, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba4, rgba, 4, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb5_a1, rgba, 5, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba8, rgba, 8, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba8_snorm, rgba, 8, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb10_a2, rgba, 10, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba12, rgba, 12, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba16, rgba, 16, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba16_snorm, rgba, 16, fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT(gl_srgb8, rgb, 8, unsigned_fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT(gl_srgb8_alpha8, rgba, 8, unsigned_fixed, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r16f, r, 16, floating, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg16f, rg, 16, floating, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb16f, rgb, 16, floating, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba16f, rgba, 16, floating, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r32f, r, 32, floating, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg32f, rg, 32, floating, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb32f, rgb, 32, floating, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba32f, rgba, 32, floating, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r11f_g11f_b10f, rgb, 11, floating, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb9_e5, rgb, 9, unsigned_fixed, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r8i, r, 8, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r8ui, r, 8, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r16i, r, 16, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r16ui, r, 16, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r32i, r, 32, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_r32ui, r, 32, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg8i, rg, 8, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg8ui, rg, 8, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg16i, rg, 16, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg16ui, rg, 16, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg32i, rg, 32, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rg32ui, rg, 32, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb8i, rgb, 8, integer, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb8ui, rgb, 8, unsigned_integer, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb16i, rgb, 16, integer, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb16ui, rgb, 16, unsigned_integer, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb32i, rgb, 32, integer, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgb32ui, rgb, 32, unsigned_integer, normal, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba8i, rgba, 8, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba8ui, rgba, 8, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba16i, rgba, 16, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba16ui, rgba, 16, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba32i, rgba, 32, integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_rgba32ui, rgba, 32, unsigned_integer, normal, any)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_depth16, depth, 16, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_depth24, depth, 24, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_depth32, depth, 32, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_depth32f, depth, 32, floating, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_depth24_stencil8, depth_stencil, 24, unsigned_fixed, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_depth32f_stencil8, depth_stencil, 32, floating, normal, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_compressed_red, r, 8, unsigned_fixed, compressed, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_compressed_rg, rg, 8, unsigned_fixed, compressed, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_compressed_rgb, rgb, 8, unsigned_fixed, compressed, unknown)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_compressed_rgba, rgba, 8, unsigned_fixed, compressed, unknown)
        DECLARE_INTERNAL_FORMAT(gl_compressed_srgb, rgb, 8, unsigned_fixed, compressed, unknown)
        DECLARE_INTERNAL_FORMAT(gl_compressed_srgb_alpha, rgba, 8, unsigned_fixed, compressed, unknown)
        DECLARE_INTERNAL_FORMAT(gl_compressed_red_rgtc1, r, 8, unsigned_fixed, compressed, texture)
        DECLARE_INTERNAL_FORMAT(gl_compressed_signed_red_rgtc1, r, 8, unsigned_fixed, compressed, texture)
        DECLARE_INTERNAL_FORMAT(gl_compressed_rg_rgtc2, rg, 8, unsigned_fixed, compressed, texture)
        DECLARE_INTERNAL_FORMAT(gl_compressed_signed_rg_rgtc2, rg, 8, unsigned_fixed, compressed, texture)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_stencil1, stencil, 1, unsigned_fixed, normal, renderbuffer)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_stencil4, stencil, 4, unsigned_fixed, normal, renderbuffer)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_stencil8, stencil, 8, unsigned_fixed, normal, renderbuffer)
        DECLARE_INTERNAL_FORMAT_DEFAULT(gl_stencil16, stencil, 16, unsigned_fixed, normal, renderbuffer)

#undef DECLARE_INTERNAL_FORMAT_DEFAULT
#undef DECLARE_INTERNAL_FORMAT

        template< typename format_t > struct base_internal_format;
#define DECLARE_BASE_INTERNAL_FORMAT(base_m, size_m, type_m, compressed_m) \
    typedef format_selector< base::base_m, size_m, type::type_m, compression::compressed_m >::format base_m; \

        DECLARE_BASE_INTERNAL_FORMAT(r, 8, unsigned_fixed, normal)
        DECLARE_BASE_INTERNAL_FORMAT(rg, 8, unsigned_fixed, normal)
        DECLARE_BASE_INTERNAL_FORMAT(rgb, 8, unsigned_fixed, normal)
        DECLARE_BASE_INTERNAL_FORMAT(rgba, 8, unsigned_fixed, normal)
        DECLARE_BASE_INTERNAL_FORMAT(depth, 16, unsigned_fixed, normal)
        DECLARE_BASE_INTERNAL_FORMAT(depth_stencil, 24, unsigned_fixed, normal)
        DECLARE_BASE_INTERNAL_FORMAT(stencil, 8, unsigned_fixed, normal)

#undef DECLARE_BASE_INTERNAL_FORMAT
      } // namespace internal
    } // namespace formats

    namespace fi = ::gtulu::internal::formats::internal;
    namespace fib = ::gtulu::internal::formats::internal::base;
    namespace fic = ::gtulu::internal::formats::internal::compression;
    namespace fif = ::gtulu::internal::formats::internal::format;
    namespace fit = ::gtulu::internal::formats::internal::type;
    namespace fir = ::gtulu::internal::formats::internal::restriction;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_INTERNAL_HPP_ */
