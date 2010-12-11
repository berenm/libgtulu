/**
 * @file
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

      template< typename type_t >
      struct attribute_binder;

#define DECLARE_BINDER_METHOD(prefix_m, value_type_m, suffix_m) \
    inline static void bind(const location_t location_in, const value_type_m value_in) { \
      fnc:: BOOST_PP_SEQ_CAT((gl_vertex_attrib)(prefix_m)(_1)(suffix_m)) ::call(location_in, value_in); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    } \
    inline static void bind(const location_t location_in, const value_type_m* values_in) { \
      fnc:: BOOST_PP_SEQ_CAT((gl_vertex_attrib)(prefix_m)(_1)(suffix_m)(v)) ::call(location_in, values_in); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    } \

#define DECLARE_BINDER_METHOD_TUPLE(n, prefix_m, tuple_m) BOOST_PP_EXPAND(DECLARE_BINDER_METHOD BOOST_PP_APPLY((BOOST_PP_SEQ_TO_TUPLE(BOOST_PP_SEQ_PUSH_FRONT(BOOST_PP_TUPLE_TO_SEQ(2, tuple_m), prefix_m)))))

#define DECLARE_BINDER(type_m, value_types_count_m, value_types_m, prefix_m) \
  template< > \
  struct attribute_binder< fat::type_m > { \
        BOOST_PP_LIST_FOR_EACH(DECLARE_BINDER_METHOD_TUPLE, prefix_m, BOOST_PP_TUPLE_TO_LIST(value_types_count_m, value_types_m)) \
  }; \

      template< >
      struct attribute_binder< fat::floating > {
          inline static void bind(const location_t location_in, const double value_in) {
            fnc::gl_vertex_attrib_1::call(location_in, value_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
          inline static void bind(const location_t location_in, const double* values_in) {
            fnc::gl_vertex_attrib_1::call(location_in, values_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
          inline static void bind(const location_t location_in, const float value_in) {
            fnc::gl_vertex_attrib_1::call(location_in, value_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
          inline static void bind(const location_t location_in, const float* values_in) {
            fnc::gl_vertex_attrib_1::call(location_in, values_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
          inline static void bind(const location_t location_in, const ::std::int16_t value_in) {
            fnc::gl_vertex_attrib_1::call(location_in, value_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
          inline static void bind(const location_t location_in, const ::std::int16_t* values_in) {
            fnc::gl_vertex_attrib_1::call(location_in, values_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
      };

      template< >
      struct attribute_binder< fat::integer > {
          inline static void bind(const location_t location_in, const ::std::int32_t value_in) {
            fnc::gl_vertex_attrib_1_integer::call(location_in, value_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
          inline static void bind(const location_t location_in, const ::std::int32_t* values_in) {
            fnc::gl_vertex_attrib_1_integer::call(location_in, values_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
      };

      template< >
      struct attribute_binder< fat::unsigned_integer > {
          inline static void bind(const location_t location_in, const ::std::uint32_t value_in) {
            fnc::gl_vertex_attrib_1_integer::call(location_in, value_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
          inline static void bind(const location_t location_in, const ::std::uint32_t* values_in) {
            fnc::gl_vertex_attrib_1_integer::call(location_in, values_in);
            fnc::gl_disable_vertex_attrib_array::call(location_in);
          }
      };

      template< typename format_t, typename binder_t = attribute_binder< typename format_t::info::type > ,
          typename buffer_binder_t = attribute_buffer_binder< typename format_t::info::type, fcd::one > ,
          typename value_t = typename fa::to_typename< typename format_t::info::type >::type >
      struct attribute {
          typedef format_t format;
          typedef value_t value_type;
          typedef binder_t binder;
          typedef buffer_binder_t buffer_binder;
      };

      typedef attribute< fa::gl_float > gl_float;
      typedef attribute< fa::gl_int > gl_int;
      typedef attribute< fa::gl_unsigned_int > gl_unsigned_int;

    } // namespace attribute

    namespace gia = ::gtulu::internal::attribute;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ATTRIBUTE_ATTRIBUTE_HPP_ */
