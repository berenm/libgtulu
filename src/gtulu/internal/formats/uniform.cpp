/**
 * @file
 * @date 3 sept. 2010
 * @todo comment
 */

#include "gtulu/internal/formats/uniform.hpp"

#include "gtulu/internal/constants.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {

        namespace format {
          const cst::gl_constant_base get(::std::uint32_t value) {
            switch (value) {
              case gl_float::value:
                return gl_float();
              case gl_float_vec2::value:
                return gl_float_vec2();
              case gl_float_vec3::value:
                return gl_float_vec3();
              case gl_float_vec4::value:
                return gl_float_vec4();
              case gl_int::value:
                return gl_int();
              case gl_int_vec2::value:
                return gl_int_vec2();
              case gl_int_vec3::value:
                return gl_int_vec3();
              case gl_int_vec4::value:
                return gl_int_vec4();
              case gl_unsigned_int::value:
                return gl_unsigned_int();
              case gl_unsigned_int_vec2::value:
                return gl_unsigned_int_vec2();
              case gl_unsigned_int_vec3::value:
                return gl_unsigned_int_vec3();
              case gl_unsigned_int_vec4::value:
                return gl_unsigned_int_vec4();
              case gl_bool::value:
                return gl_bool();
              case gl_bool_vec2::value:
                return gl_bool_vec2();
              case gl_bool_vec3::value:
                return gl_bool_vec3();
              case gl_bool_vec4::value:
                return gl_bool_vec4();
              case gl_float_mat2::value:
                return gl_float_mat2();
              case gl_float_mat3::value:
                return gl_float_mat3();
              case gl_float_mat4::value:
                return gl_float_mat4();
              case gl_float_mat2x3::value:
                return gl_float_mat2x3();
              case gl_float_mat2x4::value:
                return gl_float_mat2x4();
              case gl_float_mat3x2::value:
                return gl_float_mat3x2();
              case gl_float_mat3x4::value:
                return gl_float_mat3x4();
              case gl_float_mat4x2::value:
                return gl_float_mat4x2();
              case gl_float_mat4x3::value:
                return gl_float_mat4x3();
              case gl_sampler_1d::value:
                return gl_sampler_1d();
              case gl_sampler_2d::value:
                return gl_sampler_2d();
              case gl_sampler_3d::value:
                return gl_sampler_3d();
              case gl_sampler_cube::value:
                return gl_sampler_cube();
              case gl_sampler_1d_shadow::value:
                return gl_sampler_1d_shadow();
              case gl_sampler_2d_shadow::value:
                return gl_sampler_2d_shadow();
              case gl_sampler_1d_array::value:
                return gl_sampler_1d_array();
              case gl_sampler_2d_array::value:
                return gl_sampler_2d_array();
              case gl_sampler_1d_array_shadow::value:
                return gl_sampler_1d_array_shadow();
              case gl_sampler_2d_array_shadow::value:
                return gl_sampler_2d_array_shadow();
              case gl_sampler_2d_multisample::value:
                return gl_sampler_2d_multisample();
              case gl_sampler_2d_multisample_array::value:
                return gl_sampler_2d_multisample_array();
              case gl_sampler_cube_shadow::value:
                return gl_sampler_cube_shadow();
              case gl_sampler_buffer::value:
                return gl_sampler_buffer();
              case gl_sampler_2d_rect::value:
                return gl_sampler_2d_rect();
              case gl_sampler_2d_rect_shadow::value:
                return gl_sampler_2d_rect_shadow();
              case gl_int_sampler_1d::value:
                return gl_int_sampler_1d();
              case gl_int_sampler_2d::value:
                return gl_int_sampler_2d();
              case gl_int_sampler_3d::value:
                return gl_int_sampler_3d();
              case gl_int_sampler_cube::value:
                return gl_int_sampler_cube();
              case gl_int_sampler_1d_array::value:
                return gl_int_sampler_1d_array();
              case gl_int_sampler_2d_array::value:
                return gl_int_sampler_2d_array();
              case gl_int_sampler_2d_multisample::value:
                return gl_int_sampler_2d_multisample();
              case gl_int_sampler_2d_multisample_array::value:
                return gl_int_sampler_2d_multisample_array();
              case gl_int_sampler_buffer::value:
                return gl_int_sampler_buffer();
              case gl_int_sampler_2d_rect::value:
                return gl_int_sampler_2d_rect();
              case gl_unsigned_int_sampler_1d::value:
                return gl_unsigned_int_sampler_1d();
              case gl_unsigned_int_sampler_2d::value:
                return gl_unsigned_int_sampler_2d();
              case gl_unsigned_int_sampler_3d::value:
                return gl_unsigned_int_sampler_3d();
              case gl_unsigned_int_sampler_cube::value:
                return gl_unsigned_int_sampler_cube();
              case gl_unsigned_int_sampler_1d_array::value:
                return gl_unsigned_int_sampler_1d_array();
              case gl_unsigned_int_sampler_2d_array::value:
                return gl_unsigned_int_sampler_2d_array();
              case gl_unsigned_int_sampler_2d_multisample::value:
                return gl_unsigned_int_sampler_2d_multisample();
              case gl_unsigned_int_sampler_2d_multisample_array::value:
                return gl_unsigned_int_sampler_2d_multisample_array();
              case gl_unsigned_int_sampler_buffer::value:
                return gl_unsigned_int_sampler_buffer();
              case gl_unsigned_int_sampler_2d_rect::value:
                return gl_unsigned_int_sampler_2d_rect();
              default:
                return cst::invalid_constant();
            }
          }
        } // namespace format

      } // namespace uniform
    } // namespace formats

  } // namespace internal
} // namespace gtulu
