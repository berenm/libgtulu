/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_INTERNAL_HPP_
#define GTULU_INTERNAL_FORMAT_INTERNAL_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace internal {

#define INTERNAL_FORMATS  ((r8, GL_R8)) \
                          ((r8_snorm, GL_R8_SNORM)) \
                          ((r16, GL_R16)) \
                          ((r16_snorm, GL_R16_SNORM)) \
                          ((rg8, GL_RG8)) \
                          ((rg8_snorm, GL_RG8_SNORM)) \
                          ((rg16, GL_RG16)) \
                          ((rg16_snorm, GL_RG16_SNORM)) \
                          ((r3_g3_b2, GL_R3_G3_B2)) \
                          ((rgb4, GL_RGB4)) \
                          ((rgb5, GL_RGB5)) \
                          ((rgb8, GL_RGB8)) \
                          ((rgb8_snorm, GL_RGB8_SNORM)) \
                          ((rgb10, GL_RGB10)) \
                          ((rgb12, GL_RGB12)) \
                          ((rgb16, GL_RGB16)) \
                          ((rgb16_snorm, GL_RGB16_SNORM)) \
                          ((rgba2, GL_RGBA2)) \
                          ((rgba4, GL_RGBA4)) \
                          ((rgb5_a1, GL_RGB5_A1)) \
                          ((rgba8, GL_RGBA8)) \
                          ((rgba8_snorm, GL_RGBA8_SNORM)) \
                          ((rgb10_a2, GL_RGB10_A2)) \
                          ((rgba12, GL_RGBA12)) \
                          ((rgba16, GL_RGBA16)) \
                          ((rgba16_snorm, GL_RGBA16_SNORM)) \
                          ((srgb8, GL_SRGB8)) \
                          ((srgb8_alpha8, GL_SRGB8_ALPHA8)) \
                          ((r16f, GL_R16F)) \
                          ((rg16f, GL_RG16F)) \
                          ((rgb16f, GL_RGB16F)) \
                          ((rgba16f, GL_RGBA16F)) \
                          ((r32f, GL_R32F)) \
                          ((rg32f, GL_RG32F)) \
                          ((rgb32f, GL_RGB32F)) \
                          ((rgba32f, GL_RGBA32F)) \
                          ((r11f_g11f_b10f, GL_R11F_G11F_B10F)) \
                          ((rgb9_e5, GL_RGB9_E5)) \
                          ((r8i, GL_R8I)) \
                          ((r8ui, GL_R8UI)) \
                          ((r16i, GL_R16I)) \
                          ((r16ui, GL_R16UI)) \
                          ((r32i, GL_R32I)) \
                          ((r32ui, GL_R32UI)) \
                          ((rg8i, GL_RG8I)) \
                          ((rg8ui, GL_RG8UI)) \
                          ((rg16i, GL_RG16I)) \
                          ((rg16ui, GL_RG16UI)) \
                          ((rg32i, GL_RG32I)) \
                          ((rg32ui, GL_RG32UI)) \
                          ((rgb8i, GL_RGB8I)) \
                          ((rgb8ui, GL_RGB8UI)) \
                          ((rgb16i, GL_RGB16I)) \
                          ((rgb16ui, GL_RGB16UI)) \
                          ((rgb32i, GL_RGB32I)) \
                          ((rgb32ui, GL_RGB32UI)) \
                          ((rgba8i, GL_RGBA8I)) \
                          ((rgba8ui, GL_RGBA8UI)) \
                          ((rgba16i, GL_RGBA16I)) \
                          ((rgba16ui, GL_RGBA16UI)) \
                          ((rgba32i, GL_RGBA32I)) \
                          ((rgba32ui, GL_RGBA32UI)) \
                          ((depth16, GL_DEPTH_COMPONENT16)) \
                          ((depth24, GL_DEPTH_COMPONENT24)) \
                          ((depth32, GL_DEPTH_COMPONENT32)) \
                          ((depth32f, GL_DEPTH_COMPONENT32F)) \
                          ((depth24_stencil8, GL_DEPTH24_STENCIL8)) \
                          ((depth32f_stencil8, GL_DEPTH32F_STENCIL8)) \
                          ((compressed_red, GL_COMPRESSED_RED)) \
                          ((compressed_rg, GL_COMPRESSED_RG)) \
                          ((compressed_rgb, GL_COMPRESSED_RGB)) \
                          ((compressed_rgba, GL_COMPRESSED_RGBA)) \
                          ((compressed_srgb, GL_COMPRESSED_SRGB)) \
                          ((compressed_srgb_alpha, GL_COMPRESSED_SRGB_ALPHA)) \
                          ((compressed_red_rgtc1, GL_COMPRESSED_RED_RGTC1)) \
                          ((compressed_signed_red_rgtc1, GL_COMPRESSED_SIGNED_RED_RGTC1)) \
                          ((compressed_rg_rgtc2, GL_COMPRESSED_RG_RGTC2)) \
                          ((compressed_signed_rg_rgtc2, GL_COMPRESSED_SIGNED_RG_RGTC2)) \
                          ((stencil1, GL_STENCIL_INDEX1)) \
                          ((stencil4, GL_STENCIL_INDEX4)) \
                          ((stencil8, GL_STENCIL_INDEX8)) \
                          ((stencil16, GL_STENCIL_INDEX16)) \

        namespace format {
#define CONSTANT_LIST INTERNAL_FORMATS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
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

        typedef ::boost::uint32_t size_type;

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
