/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_UNIFORM_HPP_
#define GTULU_INTERNAL_UNIFORM_HPP_

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

#define DECLARE_BINDER(count_m, cardinality_m)                                                        \
    template< >                                                                                       \
    struct cardinality_binder< fc::cardinality::cardinality_m > {                                     \
        template< typename DataFormat >                                                               \
        struct uniform_binder {                                                                       \
          typedef fnc::gl_uniform_##count_m gl_bind_function;                                         \
          inline static void bind(location_t const location_in,                                       \
            BOOST_PP_ENUM_PARAMS(count_m,                                                             \
                                 typename fc::to_value_type< DataFormat >::type const value_in)) {    \
            gl_bind_function::call(location_in, BOOST_PP_ENUM_PARAMS(count_m, value_in));             \
          }                                                                                           \
          inline static void bind(location_t const location_in, ::std::uint32_t const number_in,      \
                                  typename fc::to_value_type< DataFormat >::type const* values_in) {  \
            gl_bind_function::call(location_in, number_in, values_in);                                \
          }                                                                                           \
        };                                                                                            \
    };

        DECLARE_BINDER(1, one)
        DECLARE_BINDER(2, two)
        DECLARE_BINDER(3, three)
        DECLARE_BINDER(4, four)

#undef DECLARE_BINDER

#define DECLARE_BINDER(count_m, cardinality_m)                                                        \
    template< >                                                                                       \
    struct cardinality_binder< fc::cardinality::cardinality_m > {                                     \
        template< typename DataFormat >                                                               \
        struct uniform_binder {                                                                       \
          typedef fnc::gl_uniform_matrix_##count_m gl_bind_function;                                  \
          inline static void bind(location_t const location_in, ::std::uint32_t const number_in,      \
                                  typename fc::to_value_type< DataFormat >::type const* values_in) {  \
            gl_bind_function::call(location_in, number_in, values_in);                                \
          }                                                                                           \
        };                                                                                            \
    };

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
      struct uniform_binder: detail::cardinality_binder< typename fc::get_cardinality< DataFormat >::type >::template uniform_binder<
          DataFormat > {
      };

      template< typename Format, typename BinderType = uniform_binder< Format >,
          typename ValueType = typename fc::to_value_type< Format >::type >
      struct uniform {
          typedef Format format;
          typedef ValueType value_type;
          typedef BinderType binder;
      };

#define DECLARE_UNIFORM(format_m) \
    typedef uniform< fu::format_m > format_m;

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

    namespace giu = ::gtulu::internal::uniform;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_HPP_ */
