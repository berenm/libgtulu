/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_ATTRIBUTE_HPP_
#error "gtulu/internal/formats/attribute/attribute_vector.hpp should not be included directly, please include gtulu/internal/formats/attribute.hpp instead."
#endif

#ifndef GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_
#define GTULU_INTERNAL_ATTRIBUTE_VECTOR_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/attribute.hpp"

#include "gtulu/internal/formats/conversions/dimension.hpp"

#include "gtulu/internal/attribute/attribute_buffer.hpp"

#include <boost/preprocessor.hpp>

namespace gtulu {
  namespace internal {

    namespace attribute {
      namespace vector {

        template< typename type_t, typename count_t >
        struct attribute_binder;

#define DECLARE_BINDER_METHOD_LITERAL(count_m, prefix_m, value_type_m, suffix_m, method_suffix_m) \
    inline static void BOOST_PP_CAT(bind, method_suffix_m)(const location_t location, BOOST_PP_ENUM_PARAMS(count_m, const value_type_m value)) { \
      __gl_debug(BOOST_PP_SEQ_CAT((glVertexAttrib)(prefix_m)(count_m)(suffix_m)), (location)); \
      BOOST_PP_SEQ_CAT((glVertexAttrib)(prefix_m)(count_m)(suffix_m))(location, BOOST_PP_ENUM_PARAMS(count_m, value)); \
      __gl_debug(glDisableVertexAttribArray, (location)); \
      glDisableVertexAttribArray(location); \
      __gl_check_error \
    } \

#define DECLARE_BINDER_METHOD_ARRAY(count_m, prefix_m, value_type_m, suffix_m, method_suffix_m) \
    inline static void BOOST_PP_CAT(bind, method_suffix_m)(const location_t location, const value_type_m* values) { \
      __gl_debug(BOOST_PP_SEQ_CAT((glVertexAttrib)(prefix_m)(count_m)(suffix_m)(v)), (location)(values)); \
      BOOST_PP_SEQ_CAT((glVertexAttrib)(prefix_m)(count_m)(suffix_m)(v))(location, values); \
      __gl_debug(glDisableVertexAttribArray, (location)); \
      glDisableVertexAttribArray(location); \
    __gl_check_error \
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

        DECLARE_BINDER(integer, 1, ((::boost::int32_t, i)), I, 2)
        DECLARE_BINDER(integer, 1, ((::boost::int32_t, i)), I, 3)
        DECLARE_BINDER(integer, 1, ((::boost::int32_t, i)), I, 4)

        DECLARE_BINDER(unsigned_integer, 1, ((::boost::uint32_t, ui)), I, 2)
        DECLARE_BINDER(unsigned_integer, 1, ((::boost::uint32_t, ui)), I, 3)
        DECLARE_BINDER(unsigned_integer, 1, ((::boost::uint32_t, ui)), I, 4)

        DECLARE_BINDER(floating, 3, ((double, d), (float, f), (::boost::int16_t, s)), BOOST_PP_EMPTY(), 2)
        DECLARE_BINDER(floating, 3, ((double, d), (float, f), (::boost::int16_t, s)), BOOST_PP_EMPTY(), 3)

        template< >
        struct attribute_binder< fat::floating, favc::four > {
            DECLARE_BINDER_METHODS(3, ((double, d), (float, f), (::boost::int16_t, s)), BOOST_PP_EMPTY(), 4)

            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int32_t, i, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int8_t, b, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint32_t, ui, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint16_t, us, BOOST_PP_EMPTY())
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint8_t, ub, BOOST_PP_EMPTY())

            DECLARE_BINDER_METHOD_LITERAL(4, BOOST_PP_EMPTY(), ::boost::uint8_t, Nub, _normalized)

            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int32_t, Ni, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int16_t, Ns, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::int8_t, Nb, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint32_t, Nui, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint16_t, Nus, _normalized)
            DECLARE_BINDER_METHOD_ARRAY(4, BOOST_PP_EMPTY(), ::boost::uint8_t, Nub, _normalized)
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
