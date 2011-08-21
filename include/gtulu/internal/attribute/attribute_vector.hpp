/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
#error "gtulu/internal/attribute/attribute_vector.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_

#include "gtulu/internal/formats/conversions/dimension.hpp"

#include <boost/preprocessor.hpp>

namespace gtulu {
  namespace internal {

    namespace attribute {
      namespace vector {

        template< typename DataType, typename Count >
        struct attribute_binder;

#define DECLARE_BIND_METHOD_PTR(prefix_m, value_type_m, count_m, suffix_m) \
    inline static void BOOST_PP_CAT(bind, prefix_m)(location_t const location_in, value_type_m const* values_in) { \
      BOOST_PP_SEQ_CAT((fnc::gl_vertex_attrib_)(count_m)(suffix_m))::call(location_in, values_in); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    }

#define DECLARE_BIND_METHODS(prefix_m, value_type_m, count_m, suffix_m) \
    inline static void BOOST_PP_CAT(bind, prefix_m)(location_t const location_in, BOOST_PP_ENUM_PARAMS(count_m, value_type_m const value_in)) { \
      BOOST_PP_SEQ_CAT((fnc::gl_vertex_attrib_)(count_m)(suffix_m))::call(location_in, BOOST_PP_ENUM_PARAMS(count_m, value_in)); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    } \
    DECLARE_BIND_METHOD_PTR(prefix_m, value_type_m, count_m, suffix_m)

#define DECLARE_INTEGER_BINDER(type_m, value_type_m, count_m) \
        template< > \
        struct attribute_binder< fat::type_m, fc::to_typename< count_m >::type > { \
            DECLARE_BIND_METHODS(BOOST_PP_EMPTY(), value_type_m, count_m, _integer) \
        };

#define DECLARE_FLOATING_BINDER(count_m) \
    template< > \
    struct attribute_binder< fat::floating, fc::to_typename< count_m >::type > { \
        DECLARE_BIND_METHODS(BOOST_PP_EMPTY(), double, count_m, BOOST_PP_EMPTY()) \
        DECLARE_BIND_METHODS(BOOST_PP_EMPTY(), float, count_m, BOOST_PP_EMPTY()) \
        DECLARE_BIND_METHODS(BOOST_PP_EMPTY(), ::std::int16_t, count_m, BOOST_PP_EMPTY()) \
    };

        DECLARE_INTEGER_BINDER(integer, ::std::int32_t, 2)
        DECLARE_INTEGER_BINDER(integer, ::std::int32_t, 3)
        DECLARE_INTEGER_BINDER(integer, ::std::int32_t, 4)
        DECLARE_INTEGER_BINDER(unsigned_integer, ::std::uint32_t, 2)
        DECLARE_INTEGER_BINDER(unsigned_integer, ::std::uint32_t, 3)
        DECLARE_INTEGER_BINDER(unsigned_integer, ::std::uint32_t, 4)

        DECLARE_FLOATING_BINDER(2)
        DECLARE_FLOATING_BINDER(3)

        template< >
        struct attribute_binder< fat::floating, favc::four > {
            DECLARE_BIND_METHODS(BOOST_PP_EMPTY(), double, 4, BOOST_PP_EMPTY())DECLARE_BIND_METHODS(BOOST_PP_EMPTY(), float, 4, BOOST_PP_EMPTY())DECLARE_BIND_METHODS(BOOST_PP_EMPTY(), ::std::int16_t, 4, BOOST_PP_EMPTY())DECLARE_BIND_METHOD_PTR(BOOST_PP_EMPTY(), ::std::int32_t, 4, BOOST_PP_EMPTY())DECLARE_BIND_METHOD_PTR(BOOST_PP_EMPTY(), ::std::int8_t, 4, BOOST_PP_EMPTY())DECLARE_BIND_METHOD_PTR(BOOST_PP_EMPTY(), ::std::uint32_t, 4, BOOST_PP_EMPTY())DECLARE_BIND_METHOD_PTR(BOOST_PP_EMPTY(), ::std::uint16_t, 4, BOOST_PP_EMPTY())DECLARE_BIND_METHOD_PTR(BOOST_PP_EMPTY(), ::std::uint8_t, 4, BOOST_PP_EMPTY())

            DECLARE_BIND_METHODS(_normalized, ::std::uint8_t, 4, _normalized)DECLARE_BIND_METHOD_PTR(_normalized, ::std::int32_t, 4, _normalized)DECLARE_BIND_METHOD_PTR(_normalized, ::std::int16_t, 4, _normalized)DECLARE_BIND_METHOD_PTR(_normalized, ::std::int8_t, 4, _normalized)DECLARE_BIND_METHOD_PTR(_normalized, ::std::uint32_t, 4, _normalized)DECLARE_BIND_METHOD_PTR(_normalized, ::std::uint16_t, 4, _normalized)
        };

#undef DECLARE_FLOATING_BINDER
#undef DECLARE_INTEGER_BINDER
#undef DECLARE_BIND_METHODS
#undef DECLARE_BIND_METHODS_PTR

        template< typename Format, typename BinderType = attribute_binder< typename Format::info::type,
            typename Format::info::count > , typename BufferBinderType = attribute_buffer_binder< Format > ,
        typename ValueType = typename fa::to_typename< typename Format::info::type >::type >
        struct attribute {
            typedef Format format;
            typedef ValueType value_type;
            typedef BinderType binder;
            typedef BufferBinderType buffer_binder;
        };
      } // namespace vector

#define DECLARE_ATTRIBUTE(format_m) \
  typedef vector::attribute< fa::format_m > format_m;

      DECLARE_ATTRIBUTE(gl_float_vec2)
      DECLARE_ATTRIBUTE(gl_float_vec3)
      DECLARE_ATTRIBUTE(gl_float_vec4)
      DECLARE_ATTRIBUTE(gl_int_vec2)
      DECLARE_ATTRIBUTE(gl_int_vec3)
      DECLARE_ATTRIBUTE(gl_int_vec4)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec2)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec3)
      DECLARE_ATTRIBUTE(gl_unsigned_int_vec4)

#undef DECLARE_ATTRIBUTE

    } // namespace attribute

    namespace giav = ::gtulu::internal::attribute::vector;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_ */
