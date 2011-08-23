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

        META_ASPECT_DECLARE(format, Format, using cst::,
            (gl_float)
            (gl_float_vec2)
            (gl_float_vec3)
            (gl_float_vec4)
            (gl_int)
            (gl_int_vec2)
            (gl_int_vec3)
            (gl_int_vec4)
            (gl_unsigned_int)
            (gl_unsigned_int_vec2)
            (gl_unsigned_int_vec3)
            (gl_unsigned_int_vec4)
            (gl_bool)
            (gl_bool_vec2)
            (gl_bool_vec3)
            (gl_bool_vec4)
            (gl_float_mat2)
            (gl_float_mat3)
            (gl_float_mat4)
            (gl_float_mat2x3)
            (gl_float_mat2x4)
            (gl_float_mat3x2)
            (gl_float_mat3x4)
            (gl_float_mat4x2)
            (gl_float_mat4x3)
            (gl_sampler_1d)
            (gl_sampler_2d)
            (gl_sampler_3d)
            (gl_sampler_cube)
            (gl_sampler_1d_shadow)
            (gl_sampler_2d_shadow)
            (gl_sampler_1d_array)
            (gl_sampler_2d_array)
            (gl_sampler_1d_array_shadow)
            (gl_sampler_2d_array_shadow)
            (gl_sampler_2d_multisample)
            (gl_sampler_2d_multisample_array)
            (gl_sampler_cube_shadow)
            (gl_sampler_buffer)
            (gl_sampler_2d_rect)
            (gl_sampler_2d_rect_shadow)
            (gl_int_sampler_1d)
            (gl_int_sampler_2d)
            (gl_int_sampler_3d)
            (gl_int_sampler_cube)
            (gl_int_sampler_1d_array)
            (gl_int_sampler_2d_array)
            (gl_int_sampler_2d_multisample)
            (gl_int_sampler_2d_multisample_array)
            (gl_int_sampler_buffer)
            (gl_int_sampler_2d_rect)
            (gl_unsigned_int_sampler_1d)
            (gl_unsigned_int_sampler_2d)
            (gl_unsigned_int_sampler_3d)
            (gl_unsigned_int_sampler_cube)
            (gl_unsigned_int_sampler_1d_array)
            (gl_unsigned_int_sampler_2d_array)
            (gl_unsigned_int_sampler_2d_multisample)
            (gl_unsigned_int_sampler_2d_multisample_array)
            (gl_unsigned_int_sampler_buffer)
            (gl_unsigned_int_sampler_2d_rect)
        )

        namespace format {
          cst::gl_constant_base const get(::std::uint32_t value);
        } // namespace format

        META_ASPECT_DECLARE(base, Base, struct,
            (literal)
            (vector)
            (matrix)
            (sampler)
        )
        META_ASPECT_DECLARE(type, Type, struct,
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
