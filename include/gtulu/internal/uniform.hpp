/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_UNIFORM_HPP_
#define GTULU_INTERNAL_UNIFORM_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/format/uniform.hpp"

#include "gtulu/internal/format/conversion/common.hpp"

namespace gtulu {
  namespace internal {

    namespace uniform {

      template< typename Format >
      struct uniform_binder {
        typedef typename fcmn::to_value_type< Format >::type                 value_type;
        typedef typename fcmn::to_container_type< Format, value_type >::type container_type;
        typedef std::vector< container_type >                                containers_type;

        inline static void bind(location_t const location, container_type const& values) { fct::uniform< >::call(location, { values }); }
        inline static void bind(location_t const location, containers_type const& values) { fct::uniform< >::call(location, values); }
      };

      template< typename Format,
                typename BinderType = uniform_binder< Format >,
                typename ValueType  = typename fcmn::to_value_type< Format >::type >
      struct uniform {
        typedef Format     format;
        typedef ValueType  value_type;
        typedef BinderType binder;
      };

#define DECLARE_UNIFORM(format_m) \
  typedef uniform< funf::format_m > format_m;

      DECLARE_UNIFORM(gl_float)
      DECLARE_UNIFORM(gl_int)
      DECLARE_UNIFORM(gl_unsigned_int)
      DECLARE_UNIFORM(gl_bool)

      DECLARE_UNIFORM(gl_float_vec2)
      DECLARE_UNIFORM(gl_float_vec3)
      DECLARE_UNIFORM(gl_float_vec4)
      DECLARE_UNIFORM(gl_int_vec2)
      DECLARE_UNIFORM(gl_int_vec3)
      DECLARE_UNIFORM(gl_int_vec4)
      DECLARE_UNIFORM(gl_unsigned_int_vec2)
      DECLARE_UNIFORM(gl_unsigned_int_vec3)
      DECLARE_UNIFORM(gl_unsigned_int_vec4)
      DECLARE_UNIFORM(gl_bool_vec2)
      DECLARE_UNIFORM(gl_bool_vec3)
      DECLARE_UNIFORM(gl_bool_vec4)

      DECLARE_UNIFORM(gl_float_mat2)
      DECLARE_UNIFORM(gl_float_mat2x3)
      DECLARE_UNIFORM(gl_float_mat2x4)
      DECLARE_UNIFORM(gl_float_mat3x2)
      DECLARE_UNIFORM(gl_float_mat3)
      DECLARE_UNIFORM(gl_float_mat3x4)
      DECLARE_UNIFORM(gl_float_mat4x2)
      DECLARE_UNIFORM(gl_float_mat4x3)
      DECLARE_UNIFORM(gl_float_mat4)

#undef DECLARE_UNIFORM

    } // namespace uniform

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_HPP_ */
