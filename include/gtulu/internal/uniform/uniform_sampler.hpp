/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_UNIFORM_HPP_
#error "gtulu/internal/uniform/uniform_sampler.hpp should not be included directly, please include gtulu/internal/uniform.hpp instead."
#endif

#ifndef GTULU_INTERNAL_UNIFORM_SAMPLER_HPP_
#define GTULU_INTERNAL_UNIFORM_SAMPLER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/uniform.hpp"

#include "gtulu/internal/formats/internal.hpp"
#include "gtulu/internal/formats/target.hpp"
#include "gtulu/internal/texture_unit_manager.hpp"

#include <boost/preprocessor/repetition/enum_params.hpp>

namespace gtulu {
  namespace internal {

    namespace objects {
      struct texture_base;

      template< typename texture_format_t >
      struct texture;
    }

    namespace uniform {
      namespace sampler {

        template< typename sampler_format_t, typename texture_format_t >
        struct uniform_texture_binder: fus::is_texture_compatible< sampler_format_t, texture_format_t > {
            inline static void bind(const location_t location, const gio::texture< texture_format_t >& texture) {
              ::boost::shared_ptr< texture_unit > unit_ptr = texture_unit_manager::instance().get_current_or_new(
                  texture);
              unit_ptr->bind(texture);
              __gl_debug(glUniform1i, (location)(**unit_ptr));
              glUniform1i(location, **unit_ptr);
              __gl_check_error
            }
        };

        template< typename sampler_format_t >
        struct uniform_binder {
            template< typename texture_format_t >
            inline static void bind(const location_t location, const gio::texture< texture_format_t >& texture) {
              uniform_texture_binder< sampler_format_t, texture_format_t >::bind(location, texture);
            }
        };

        template< typename format_t, typename binder_t = uniform_binder< format_t > ,
            typename value_t = gio::texture_base >
        struct uniform {
            typedef format_t format;
            typedef value_t value_type;
            typedef binder_t binder;
        };
      } // namespace sampler
#define DECLARE_UNIFORM(format_m) \
    typedef sampler::uniform< fu::format_m > format_m;
      DECLARE_UNIFORM(gl_sampler_1d)
      DECLARE_UNIFORM(gl_sampler_2d)
      DECLARE_UNIFORM(gl_sampler_3d)
      DECLARE_UNIFORM(gl_sampler_cube)
      DECLARE_UNIFORM(gl_sampler_1d_shadow)
      DECLARE_UNIFORM(gl_sampler_2d_shadow)
      DECLARE_UNIFORM(gl_sampler_1d_array)
      DECLARE_UNIFORM(gl_sampler_2d_array)
      DECLARE_UNIFORM(gl_sampler_1d_array_shadow)
      DECLARE_UNIFORM(gl_sampler_2d_array_shadow)
      DECLARE_UNIFORM(gl_sampler_2d_multisample)
      DECLARE_UNIFORM(gl_sampler_2d_multisample_array)
      DECLARE_UNIFORM(gl_sampler_cube_shadow)
      DECLARE_UNIFORM(gl_sampler_buffer)
      DECLARE_UNIFORM(gl_sampler_2d_rect)
      DECLARE_UNIFORM(gl_sampler_2d_rect_shadow)
      DECLARE_UNIFORM(gl_int_sampler_1d)
      DECLARE_UNIFORM(gl_int_sampler_2d)
      DECLARE_UNIFORM(gl_int_sampler_3d)
      DECLARE_UNIFORM(gl_int_sampler_cube)
      DECLARE_UNIFORM(gl_int_sampler_1d_array)
      DECLARE_UNIFORM(gl_int_sampler_2d_array)
      DECLARE_UNIFORM(gl_int_sampler_2d_multisample)
      DECLARE_UNIFORM(gl_int_sampler_2d_multisample_array)
      DECLARE_UNIFORM(gl_int_sampler_buffer)
      DECLARE_UNIFORM(gl_int_sampler_2d_rect)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_1d)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_2d)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_3d)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_cube)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_1d_array)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_2d_array)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_2d_multisample)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_2d_multisample_array)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_buffer)
      DECLARE_UNIFORM(gl_unsigned_int_sampler_2d_rect)

#undef DECLARE_UNIFORM
    } // namespace uniform

    namespace gius = ::gtulu::internal::uniform::sampler;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_SAMPLER_HPP_ */
