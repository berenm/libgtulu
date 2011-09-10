/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_UNIFORM_HPP_
#error "gtulu/internal/uniform/uniform_sampler.hpp should not be included directly, please include gtulu/internal/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_UNIFORM_SAMPLER_HPP_
#define GTULU_INTERNAL_UNIFORM_SAMPLER_HPP_

#include "gtulu/internal/format/internal.hpp"
#include "gtulu/internal/format/target.hpp"
#include "gtulu/internal/texture_unit_manager.hpp"

#include <boost/preprocessor/repetition/enum_params.hpp>

namespace gtulu {
  namespace internal {

    namespace object {
      struct texture_base;

      template< typename TextureFormat >
      struct texture;
    }

    namespace uniform {
      namespace sampler {

        template< typename SamplerFormat, typename TextureFormat >
        struct uniform_texture_binder: fus::is_texture_compatible< SamplerFormat, TextureFormat > {
            inline static void bind(location_t const location_in, gio::texture< TextureFormat > const& texture_in) {
              ::boost::shared_ptr< texture_unit > unit_ptr = texture_unit_manager::instance().get_current_or_new(texture_in);
              unit_ptr->bind(texture_in);
              fnc::gl_uniform_1::call(location_in, static_cast< ::std::int32_t >(**unit_ptr));
            }
        };

        template< typename SamplerFormat >
        struct uniform_binder {
            template< typename TextureFormat >
            inline static void bind(location_t const location_in, gio::texture< TextureFormat > const& texture_in) {
              uniform_texture_binder< SamplerFormat, TextureFormat >::bind(location_in, texture_in);
            }
        };

        template< typename Format, typename BinderType = uniform_binder< Format >,
            typename ValueType = gio::texture_base >
        struct uniform {
            typedef Format format;
            typedef ValueType value_type;
            typedef BinderType binder;
        };

      } // namespace sampler

#define DECLARE_UNIFORM_SAMPLER(uniform_m) \
      typedef sampler::uniform< fu::uniform_m > uniform_m;

      DECLARE_UNIFORM_SAMPLER(gl_sampler_1d)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_3d)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_cube)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_1d_shadow)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d_shadow)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_1d_array)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d_array)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_1d_array_shadow)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d_array_shadow)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d_multisample)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d_multisample_array)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_cube_shadow)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_buffer)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d_rect)
      DECLARE_UNIFORM_SAMPLER(gl_sampler_2d_rect_shadow)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_1d)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_2d)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_3d)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_cube)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_1d_array)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_2d_array)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_2d_multisample)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_2d_multisample_array)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_buffer)
      DECLARE_UNIFORM_SAMPLER(gl_int_sampler_2d_rect)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_1d)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_2d)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_3d)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_cube)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_1d_array)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_2d_array)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_2d_multisample)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_2d_multisample_array)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_buffer)
      DECLARE_UNIFORM_SAMPLER(gl_unsigned_int_sampler_2d_rect)

#undef DECLARE_UNIFORM_SAMPLER

    } // namespace uniform

    namespace gius = ::gtulu::internal::uniform::sampler;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_SAMPLER_HPP_ */
