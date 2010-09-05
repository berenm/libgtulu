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
    inline static void bind(const location_t location, const value_type_m value) { \
      fnc:: BOOST_PP_SEQ_CAT((gl_vertex_attrib)(prefix_m)(_1)(suffix_m)) ::call(location, value); \
      fnc::gl_disable_vertex_attrib_array::call(location); \
    } \
    inline static void bind(const location_t location, const value_type_m* values) { \
      fnc:: BOOST_PP_SEQ_CAT((gl_vertex_attrib)(prefix_m)(_1)(suffix_m)(v)) ::call(location, values); \
      fnc::gl_disable_vertex_attrib_array::call(location); \
    } \

#define DECLARE_BINDER_METHOD_TUPLE(n, prefix_m, tuple_m) BOOST_PP_EXPAND(DECLARE_BINDER_METHOD BOOST_PP_APPLY((BOOST_PP_SEQ_TO_TUPLE(BOOST_PP_SEQ_PUSH_FRONT(BOOST_PP_TUPLE_TO_SEQ(2, tuple_m), prefix_m)))))

#define DECLARE_BINDER(type_m, value_types_count_m, value_types_m, prefix_m) \
  template< > \
  struct attribute_binder< fat::type_m > { \
        BOOST_PP_LIST_FOR_EACH(DECLARE_BINDER_METHOD_TUPLE, prefix_m, BOOST_PP_TUPLE_TO_LIST(value_types_count_m, value_types_m)) \
  }; \

      DECLARE_BINDER(floating, 3, ((double, _d), (float, _f), (::boost::int16_t, _s)), BOOST_PP_EMPTY())
      DECLARE_BINDER(integer, 1, ((::boost::int32_t, _i)), _i)
      DECLARE_BINDER(unsigned_integer, 1, ((::boost::uint32_t, _ui)), _i)

#undef DECLARE_BINDER
#undef DECLARE_BINDER_METHOD_TUPLE
#undef DECLARE_BINDER_METHOD

      template< typename format_t, typename binder_t = attribute_binder< typename format_t::info::type > ,
          typename buffer_binder_t = attribute_buffer_binder< typename format_t::info::type, fcd::one > ,
          typename value_t = typename fa::to_typename< typename format_t::info::type >::type >
      struct attribute {
          typedef format_t format;
          typedef value_t value_type;
          typedef binder_t binder;
          typedef buffer_binder_t buffer_binder;
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
