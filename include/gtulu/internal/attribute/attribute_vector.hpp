/**
 * @file
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

        template< typename type_t, typename count_t >
        struct attribute_binder;

#define DECLARE_BINDER_METHOD_LITERAL(count_m, prefix_m, value_type_m, suffix_m, method_suffix_m) \
    inline static void BOOST_PP_CAT(bind, method_suffix_m)(const location_t location_in, BOOST_PP_ENUM_PARAMS(count_m, const value_type_m value_in)) { \
      fnc:: BOOST_PP_SEQ_CAT((gl_vertex_attrib)(prefix_m)(_)(count_m)(suffix_m)) ::call(location_in, BOOST_PP_ENUM_PARAMS(count_m, value_in)); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    } \

#define DECLARE_BINDER_METHOD_ARRAY(count_m, prefix_m, value_type_m, suffix_m, method_suffix_m) \
    inline static void BOOST_PP_CAT(bind, method_suffix_m)(const location_t location_in, const value_type_m* values_in) { \
      fnc:: BOOST_PP_SEQ_CAT((gl_vertex_attrib)(prefix_m)(_)(count_m)(suffix_m)(v)) ::call(location_in, values_in); \
      fnc::gl_disable_vertex_attrib_array::call(location_in); \
    } \

#define DECLARE_BINDER_METHOD(count_m, prefix_m, value_type_m, suffix_m) \
    DECLARE_BINDER_METHOD_LITERAL(count_m, prefix_m, value_type_m, suffix_m, BOOST_PP_EMPTY()) \
    DECLARE_BINDER_METHOD_ARRAY(count_m, prefix_m, value_type_m, suffix_m, BOOST_PP_EMPTY()) \

#define DECLARE_BINDER_METHOD_TUPLE(n, data_m, tuple_m) BOOST_PP_EXPAND(DECLARE_BINDER_METHOD BOOST_PP_APPLY((BOOST_PP_SEQ_TO_TUPLE(BOOST_PP_SEQ_PUSH_FRONT(BOOST_PP_SEQ_PUSH_FRONT(BOOST_PP_TUPLE_TO_SEQ(2, tuple_m), BOOST_PP_SEQ_ELEM(1, data_m)), BOOST_PP_SEQ_ELEM(0, data_m))))))

#define DECLARE_BINDER_METHODS(value_types_count_m, value_types_m, prefix_m, count_m) \
    BOOST_PP_LIST_FOR_EACH(DECLARE_BINDER_METHOD_TUPLE, BOOST_PP_TUPLE_TO_SEQ(2, (count_m, prefix_m)), BOOST_PP_TUPLE_TO_LIST(value_types_count_m, value_types_m)) \

#define DECLARE_BINDER(type_m, value_types_count_m, value_types_m, prefix_m, count_m) \
    template< > \
    struct attribute_binder< fat::type_m, fc::to_typename< count_m >::type > { \
        DECLARE_BINDER_METHODS(value_types_count_m, value_types_m, prefix_m, count_m) \
    }; \

        DECLARE_BINDER(integer, 1, ((::boost::int32_t, _i)), _i, 2)
        DECLARE_BINDER(integer, 1, ((::boost::int32_t, _i)), _i, 3)
        DECLARE_BINDER(integer, 1, ((::boost::int32_t, _i)), _i, 4)

        DECLARE_BINDER(unsigned_integer, 1, ((::boost::uint32_t, _ui)), _i, 2)
        DECLARE_BINDER(unsigned_integer, 1, ((::boost::uint32_t, _ui)), _i, 3)
        DECLARE_BINDER(unsigned_integer, 1, ((::boost::uint32_t, _ui)), _i, 4)

        DECLARE_BINDER(floating, 3, ((double, _d), (float, _f), (::boost::int16_t, _s)), BOOST_PP_EMPTY(), 2)
        DECLARE_BINDER(floating, 3, ((double, _d), (float, _f), (::boost::int16_t, _s)), BOOST_PP_EMPTY(), 3)

        template< >
        struct attribute_binder< fat::floating, favc::four > {
            DECLARE_BINDER_METHODS(3, ((double, _d), (float, _f), (::boost::int16_t, _s)), BOOST_PP_EMPTY(), 4)

            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int32_t, _i, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int8_t, _b, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint32_t, _ui, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint16_t, _us, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint8_t, _ub, BOOST_PP_EMPTY())

            DECLARE_BINDER_METHOD_LITERAL(4, BOOST_PP_EMPTY(), ::boost::uint8_t, _nub, _normalized)

            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int32_t, _ni, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int16_t, _ns, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int8_t, _nb, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint32_t, _nui, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint16_t, _nus, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint8_t, _nub, _normalized)
        };

#undef DECLARE_BINDER
#undef DECLARE_BINDER_METHODS
#undef DECLARE_BINDER_METHOD_TUPLE
#undef DECLARE_BINDER_METHOD
#undef DECLARE_BINDER_METHOD_ARRAY
#undef DECLARE_BINDER_METHOD_LITERAL

        template< typename format_t, typename binder_t = attribute_binder< typename format_t::info::type,
            typename format_t::info::count > , typename buffer_binder_t = attribute_buffer_binder<
            typename format_t::info::type, typename format_t::info::count > ,
            typename value_t = typename fa::to_typename< typename format_t::info::type >::type >
        struct attribute {
            typedef format_t format;
            typedef value_t value_type;
            typedef binder_t binder;
            typedef buffer_binder_t buffer_binder;
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
