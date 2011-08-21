/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_
#error "gtulu/internal/formats/uniform/uniform.hpp should not be included directly, please include gtulu/internal/formats/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_
#define GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {

        namespace format {
          using cst::gl_float;
          using cst::gl_float_vec2;
          using cst::gl_float_vec3;
          using cst::gl_float_vec4;
          using cst::gl_int;
          using cst::gl_int_vec2;
          using cst::gl_int_vec3;
          using cst::gl_int_vec4;
          using cst::gl_unsigned_int;
          using cst::gl_unsigned_int_vec2;
          using cst::gl_unsigned_int_vec3;
          using cst::gl_unsigned_int_vec4;
          using cst::gl_bool;
          using cst::gl_bool_vec2;
          using cst::gl_bool_vec3;
          using cst::gl_bool_vec4;
          using cst::gl_float_mat2;
          using cst::gl_float_mat3;
          using cst::gl_float_mat4;
          using cst::gl_float_mat2x3;
          using cst::gl_float_mat2x4;
          using cst::gl_float_mat3x2;
          using cst::gl_float_mat3x4;
          using cst::gl_float_mat4x2;
          using cst::gl_float_mat4x3;
          using cst::gl_sampler_1d;
          using cst::gl_sampler_2d;
          using cst::gl_sampler_3d;
          using cst::gl_sampler_cube;
          using cst::gl_sampler_1d_shadow;
          using cst::gl_sampler_2d_shadow;
          using cst::gl_sampler_1d_array;
          using cst::gl_sampler_2d_array;
          using cst::gl_sampler_1d_array_shadow;
          using cst::gl_sampler_2d_array_shadow;
          using cst::gl_sampler_2d_multisample;
          using cst::gl_sampler_2d_multisample_array;
          using cst::gl_sampler_cube_shadow;
          using cst::gl_sampler_buffer;
          using cst::gl_sampler_2d_rect;
          using cst::gl_sampler_2d_rect_shadow;
          using cst::gl_int_sampler_1d;
          using cst::gl_int_sampler_2d;
          using cst::gl_int_sampler_3d;
          using cst::gl_int_sampler_cube;
          using cst::gl_int_sampler_1d_array;
          using cst::gl_int_sampler_2d_array;
          using cst::gl_int_sampler_2d_multisample;
          using cst::gl_int_sampler_2d_multisample_array;
          using cst::gl_int_sampler_buffer;
          using cst::gl_int_sampler_2d_rect;
          using cst::gl_unsigned_int_sampler_1d;
          using cst::gl_unsigned_int_sampler_2d;
          using cst::gl_unsigned_int_sampler_3d;
          using cst::gl_unsigned_int_sampler_cube;
          using cst::gl_unsigned_int_sampler_1d_array;
          using cst::gl_unsigned_int_sampler_2d_array;
          using cst::gl_unsigned_int_sampler_2d_multisample;
          using cst::gl_unsigned_int_sampler_2d_multisample_array;
          using cst::gl_unsigned_int_sampler_buffer;
          using cst::gl_unsigned_int_sampler_2d_rect;

          cst::gl_constant_base const get(::std::uint32_t value);
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (literal)
            (vector)
            (matrix)
            (sampler)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (integer)
            (unsigned_integer)
            (boolean)
        )

        template< typename Format, typename Base, typename DataType >
        struct uniform_metadata {
          typedef Format format;
          typedef Base base;
          typedef DataType type;
          typedef fcd::one count;
        };

        template< typename Format >
        struct uniform_format;

#define DECLARE_UNIFORM_FORMAT(format_m, base_m, type_m) \
    template< > struct uniform_format< format::format_m > { \
        typedef uniform_metadata< format::format_m, base::base_m, type::type_m > info; \
    }; \
    typedef uniform_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m);

        DECLARE_UNIFORM_FORMAT(gl_float, literal, floating)
        DECLARE_UNIFORM_FORMAT(gl_int, literal, integer)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int, literal, unsigned_integer)
        DECLARE_UNIFORM_FORMAT(gl_bool, literal, boolean)

#undef DECLARE_UNIFORM_FORMAT

      } // namespace uniform
    } // namespace formats

    namespace fu = ::gtulu::internal::formats::uniform;
    namespace fub = ::gtulu::internal::formats::uniform::base;
    namespace fuf = ::gtulu::internal::formats::uniform::format;
    namespace fut = ::gtulu::internal::formats::uniform::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_UNIFORM_UNIFORM_HPP_ */
