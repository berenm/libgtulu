/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef IN_GTULU_INTERNAL_OUTPUT_HPP_
#error "gtulu/internal/output/output_vector.hpp should not be included directly, please include gtulu/internal/output.hpp instead."
#endif /* IN_GTULU_INTERNAL_OUTPUT_HPP_ */

#ifndef GTULU_INTERNAL_OUTPUT_VECTOR_HPP_
#define GTULU_INTERNAL_OUTPUT_VECTOR_HPP_

#include <boost/preprocessor/repetition/enum_params.hpp>

namespace gtulu {
  namespace internal {

    namespace output {
      namespace vector {

        template< typename DataType, typename Count >
        struct output_binder;

#define DECLARE_BINDER(type_m, count_m) \
      template< > \
      struct output_binder< fo::type::type_m, fc::to_typename< count_m >::type > { \
          inline static void bind(location_t const location_in, BOOST_PP_ENUM_PARAMS(count_m, fo::to_typename< fo::type::type_m >::type const value_in)) { \
            fnc::gl_uniform_##count_m::call(location_in, BOOST_PP_ENUM_PARAMS(count_m, value_in)); \
          } \
          inline static void bind(location_t const location_in, ::std::uint32_t const number_in, fo::to_typename< fo::type::type_m >::type const* values_in) { \
            fnc::gl_uniform_##count_m::call(location_in, number_in, values_in); \
          } \
      };

        DECLARE_BINDER(floating, 2)
        DECLARE_BINDER(floating, 3)
        DECLARE_BINDER(floating, 4)
        DECLARE_BINDER(integer, 2)
        DECLARE_BINDER(integer, 3)
        DECLARE_BINDER(integer, 4)
        DECLARE_BINDER(unsigned_integer, 2)
        DECLARE_BINDER(unsigned_integer, 3)
        DECLARE_BINDER(unsigned_integer, 4)

#undef DECLARE_BINDER

        template< typename Format, typename BinderType = output_binder< typename Format::aspect::type,
            typename Format::aspect::count > , typename ValueType = typename fo::to_typename<
            typename Format::aspect::type >::type >
        struct output {
            typedef Format format;
            typedef ValueType value_type;
            typedef BinderType binder;
        };

      } // namespace vector

#define DECLARE_OUTPUT(format_m) \
  typedef vector::output< fo::format_m > format_m;
      DECLARE_OUTPUT(gl_float_vec2)
      DECLARE_OUTPUT(gl_float_vec3)
      DECLARE_OUTPUT(gl_float_vec4)
      DECLARE_OUTPUT(gl_int_vec2)
      DECLARE_OUTPUT(gl_int_vec3)
      DECLARE_OUTPUT(gl_int_vec4)
      DECLARE_OUTPUT(gl_unsigned_int_vec2)
      DECLARE_OUTPUT(gl_unsigned_int_vec3)
      DECLARE_OUTPUT(gl_unsigned_int_vec4)

#undef DECLARE_OUTPUT

    } // namespace output

    namespace giouv = ::gtulu::internal::output::vector;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OUTPUT_VECTOR_HPP_ */
