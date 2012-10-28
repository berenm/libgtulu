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

      namespace detail {

        template< typename Cardinality >
        struct cardinality_binder;

#define DECLARE_BINDER(count_m, cardinality_m)                                                                          \
  template< >                                                                                                           \
  struct cardinality_binder< fcmn::cardinality::cardinality_m > {                                                       \
    template< typename DataFormat >                                                                                     \
    struct uniform_binder {                                                                                             \
      typedef typename fcmn::to_value_type< DataFormat >::type                 value_type;                              \
      typedef typename fcmn::to_container_type< DataFormat, value_type >::type container_type;                          \
                                                                                                                        \
      inline static void bind(location_t const location_in, BOOST_PP_ENUM_PARAMS(count_m, value_type const value_in)) { \
        fct::uniform< >::call(location_in, BOOST_PP_ENUM_PARAMS(count_m, value_in));                                    \
      }                                                                                                                 \
      inline static void bind(location_t const location_in, std::vector< container_type > const & values_in) {          \
        fct::uniform< >::call(location_in, values_in);                                                                  \
      }                                                                                                                 \
    };                                                                                                                  \
  };

        DECLARE_BINDER(1, one)
        DECLARE_BINDER(2, two)
        DECLARE_BINDER(3, three)
        DECLARE_BINDER(4, four)

        DECLARE_BINDER(2, two_by_two)
        DECLARE_BINDER(2x3, two_by_three)
        DECLARE_BINDER(2x4, two_by_four)
        DECLARE_BINDER(3x2, three_by_two)
        DECLARE_BINDER(3, three_by_three)
        DECLARE_BINDER(3x4, three_by_four)
        DECLARE_BINDER(4x2, four_by_two)
        DECLARE_BINDER(4x3, four_by_three)
        DECLARE_BINDER(4, four_by_four)

#undef DECLARE_BINDER

      } // namespace detail

      template< typename DataFormat >
      struct uniform_binder : detail::cardinality_binder< typename fcmn::get_cardinality< DataFormat >::type >::template uniform_binder<
          DataFormat > {};

      template< typename Format, typename BinderType = uniform_binder< Format >,
                typename ValueType                   = typename fcmn::to_value_type< Format >::type >
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
