/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_SAMPLER_HPP_
#define GTULU_INTERNAL_SAMPLER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/format/sampler.hpp"

#include "gtulu/internal/format/internal.hpp"
#include "gtulu/internal/format/target.hpp"
#include "gtulu/internal/texture_unit_manager.hpp"

#include "gtulu/internal/format/constraint/sampler.hpp"

#include <boost/preprocessor/repetition/enum_params.hpp>

namespace gtulu {
  namespace internal {

    namespace object {
      struct texture_base;

      template< typename TextureFormat >
      struct texture;

    }

    namespace sampler {

      template< typename SamplerFormat, typename TextureFormat >
      struct sampler_texture_binder : fsmp::is_texture_compatible< SamplerFormat, TextureFormat > {
        inline static void bind(location_t const location_in, obj::texture< TextureFormat > const& texture_in) {
          boost::shared_ptr< texture_unit > unit_ptr = texture_unit_manager::instance().get_current_or_new(texture_in);
          unit_ptr->bind(texture_in);
          fct::uniform< >::call(location_in, static_cast< std::int32_t >(**unit_ptr));
        }

      };

      template< typename SamplerFormat >
      struct sampler_binder {
        template< typename TextureFormat >
        inline static void bind(location_t const location_in, obj::texture< TextureFormat > const& texture_in) {
          sampler_texture_binder< SamplerFormat, TextureFormat >::bind(location_in, texture_in);
        }

      };

      template< typename Format, typename BinderType = sampler_binder< Format >, typename ValueType = obj::texture_base >
      struct sampler {
        typedef Format     format;
        typedef ValueType  value_type;
        typedef BinderType binder;
      };

#define DECLARE_UNIFORM_SAMPLER(sampler_m) \
  typedef sampler< fsmp::sampler_m > sampler_m;

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

    } // namespace sampler

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_SAMPLER_HPP_ */
