/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/format/sampler.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace sampler {

        namespace format {
          bool is_uniform(::std::uint32_t value) {
            return static_cast< ::std::uint64_t >(get(value)) != cst::invalid_constant::value;
          }

          cst::gl_constant_base const get(::std::uint32_t value) {
            switch (value) {
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

      } // namespace sampler
    } // namespace format

  } // namespace internal
} // namespace gtulu
