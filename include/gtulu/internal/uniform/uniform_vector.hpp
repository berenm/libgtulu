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
#error "gtulu/internal/uniform/uniform_vector.hpp should not be included directly, please include gtulu/internal/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_UNIFORM_VECTOR_HPP_
#define GTULU_INTERNAL_UNIFORM_VECTOR_HPP_

#include "gtulu/internal/format/conversion/dimension.hpp"

#include <boost/preprocessor/repetition/enum_params.hpp>

//namespace gtulu {
//  namespace internal {
//
//    namespace uniform {
//      namespace vector {
//
//        namespace detail {
//
//          template< typename Cardinality >
//          struct cardinality_binder;
//
//#define DECLARE_BINDER(count_m, cardinality_m)                                                          \
//      template< >                                                                                       \
//      struct cardinality_binder< fc::cardinality::cardinality_m > {                                     \
//          template< typename DataFormat >                                                               \
//          struct uniform_binder {                                                                       \
//            inline static void bind(location_t const location_in,                                       \
//              BOOST_PP_ENUM_PARAMS(count_m, fc::to_value_type< DataFormat >::type const value_in)) {    \
//              fnc:: gl_uniform_##count_m ::call(location_in, BOOST_PP_ENUM_PARAMS(count_m, value_in));  \
//            }                                                                                           \
//            inline static void bind(location_t const location_in, ::std::uint32_t const number_in,      \
//                                    fc::to_value_type< DataFormat >::type const* values_in) {           \
//              fnc:: gl_uniform_##count_m ::call(location_in, number_in, values_in);                     \
//            }                                                                                           \
//          };                                                                                            \
//      };
//
//          DECLARE_BINDER(2, two)
//          DECLARE_BINDER(3, three)
//          DECLARE_BINDER(4, four)
//
//#undef DECLARE_BINDER
//
//        } // namespace detail
//
//        template< typename DataFormat >
//        struct uniform_binder: detail::cardinality_binder< typename fc::get_cardinality< DataFormat >::type >::uniform_binder<
//            DataFormat > {
//        };
//
//        template< typename Format, typename BinderType = uniform_binder< Format >,
//            typename ValueType = typename fc::to_value_type< Format >::type >
//        struct uniform {
//            typedef Format format;
//            typedef ValueType value_type;
//            typedef BinderType binder;
//        };
//      } // namespace vector
//
//#define DECLARE_UNIFORM_VECTOR(format_m) \
//    typedef vector::uniform< fu::format_m > format_m;
//
//      DECLARE_UNIFORM_VECTOR(gl_float_vec2)
//      DECLARE_UNIFORM_VECTOR(gl_float_vec3)
//      DECLARE_UNIFORM_VECTOR(gl_float_vec4)
//      DECLARE_UNIFORM_VECTOR(gl_int_vec2)
//      DECLARE_UNIFORM_VECTOR(gl_int_vec3)
//      DECLARE_UNIFORM_VECTOR(gl_int_vec4)
//      DECLARE_UNIFORM_VECTOR(gl_unsigned_int_vec2)
//      DECLARE_UNIFORM_VECTOR(gl_unsigned_int_vec3)
//      DECLARE_UNIFORM_VECTOR(gl_unsigned_int_vec4)
//      DECLARE_UNIFORM_VECTOR(gl_bool_vec2)
//      DECLARE_UNIFORM_VECTOR(gl_bool_vec3)
//      DECLARE_UNIFORM_VECTOR(gl_bool_vec4)
//
//#undef DECLARE_UNIFORM_VECTOR
//
//    } // namespace uniform
//
//    namespace giuv = ::gtulu::internal::uniform::vector;
//
//  } // namespace internal
//} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_VECTOR_HPP_ */
