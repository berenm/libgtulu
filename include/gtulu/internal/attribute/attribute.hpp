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
#error "gtulu/internal/attribute/attribute.hpp should not be included directly, please include gtulu/internal/attribute.hpp instead."
#endif /* IN_GTULU_INTERNAL_ATTRIBUTE_HPP_ */

#ifndef GTULU_INTERNAL_ATTRIBUTE_ATTRIBUTE_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_ATTRIBUTE_HPP_

namespace gtulu {
  namespace internal {

    namespace attribute {

      template< typename DataType >
      struct attribute_binder;

#define DECLARE_BINDER_METHODS(value_type_m, suffix_m) \
    inline static void bind(location_t const location_in, value_type_m const value_in) { \
      BOOST_PP_SEQ_CAT((fnc::gl_vertex_attrib_1)(suffix_m))::call(location_in, value_in); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    } \
    inline static void bind(location_t const location_in, value_type_m const* values_in) { \
      BOOST_PP_SEQ_CAT((fnc::gl_vertex_attrib_1)(suffix_m))::call(location_in, values_in); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    } \

      template< >
      struct attribute_binder< fat::floating > {
          DECLARE_BINDER_METHODS(double, BOOST_PP_EMPTY())DECLARE_BINDER_METHODS(float, BOOST_PP_EMPTY())DECLARE_BINDER_METHODS(::std::int16_t, BOOST_PP_EMPTY())
      };

      template< >
      struct attribute_binder< fat::integer > {
          DECLARE_BINDER_METHODS(::std::int32_t, _integer)
      };

      template< >
      struct attribute_binder< fat::unsigned_integer > {
          DECLARE_BINDER_METHODS(::std::uint32_t, _integer)
      };

#undef DECLARE_BINDER_METHODS

      template< typename Format, typename BinderType = attribute_binder< typename Format::info::type >,
          typename BufferBinderType = attribute_buffer_binder< Format >, typename ValueType = typename fa::to_typename<
              typename Format::info::type >::type >
      struct attribute {
          typedef Format format;
          typedef ValueType value_type;
          typedef BinderType binder;
          typedef BufferBinderType buffer_binder;
      };

#define DECLARE_ATTRIBUTE(format_m) \
  typedef attribute< fa::format_m > format_m;
      DECLARE_ATTRIBUTE(gl_float)
      DECLARE_ATTRIBUTE(gl_int)
      DECLARE_ATTRIBUTE(gl_unsigned_int)

#undef DECLARE_ATTRIBUTE

    } // namespace attribute

    namespace gia = ::gtulu::internal::attribute;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_ATTRIBUTE_HPP_ */
