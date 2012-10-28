/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
# error "gtulu/internal/attribute/attribute.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_ATTRIBUTE_HPP_
# define GTULU_INTERNAL_ATTRIBUTE_ATTRIBUTE_HPP_

# include "gtulu/namespaces.hpp"
# include "gtulu/internal/format/conversion/common.hpp"

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< typename AttributeFormat, typename ... Ts >
      using vertex_attrib = typename meta::if_< fnum::integral::is_integral< AttributeFormat >,
                                                fct::vertex_attrib_integer< Ts ... >,
                                                fct::vertex_attrib< Ts ... >
                                                >::type;

      template< typename AttributeFormat >
      struct attribute_binder {
        typedef typename fcmn::to_value_type< AttributeFormat >::type                 value_type;
        typedef typename fcmn::to_container_type< AttributeFormat, value_type >::type container_type;
        typedef std::vector< container_type >                                         containers_type;

        inline static void bind(location_t const location, container_type const& values) {
          vertex_attrib< AttributeFormat >::call(location, { values });
          fct::disable_vertex_attrib_array< >::call(location);
        }

        inline static void bind(location_t const location, containers_type const& values) {
          vertex_attrib< AttributeFormat >::call(location, values);
          fct::disable_vertex_attrib_array< >::call(location);
        }

      };

      template< typename Format,
                typename BinderType       = attribute_binder< Format >,
                typename BufferBinderType = attribute_buffer_binder< Format > >
      struct attribute {
        typedef Format           format;
        typedef BinderType       binder;
        typedef BufferBinderType buffer_binder;
      };

# define DECLARE_ATTRIBUTE(format_m) \
  typedef attribute< fatt::format_m > format_m;

      DECLARE_ATTRIBUTE(gl_float)
      DECLARE_ATTRIBUTE(gl_int)
      DECLARE_ATTRIBUTE(gl_unsigned_int)

      DECLARE_ATTRIBUTE(gl_float_vec2)
      DECLARE_ATTRIBUTE(gl_float_vec3)
      DECLARE_ATTRIBUTE(gl_float_vec4)
      DECLARE_ATTRIBUTE(gl_int_vec2)
      DECLARE_ATTRIBUTE(gl_int_vec3)
      DECLARE_ATTRIBUTE(gl_int_vec4)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec2)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec3)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec4)

# undef DECLARE_ATTRIBUTE

    } // namespace attribute

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_ATTRIBUTE_HPP_ */
