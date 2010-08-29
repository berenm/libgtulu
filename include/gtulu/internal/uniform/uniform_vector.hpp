/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_UNIFORM_HPP_
#error "gtulu/internal/uniform/uniform_vector.hpp should not be included directly, please include gtulu/internal/uniform.hpp instead."
#endif

#ifndef GTULU_INTERNAL_UNIFORM_VECTOR_HPP_
#define GTULU_INTERNAL_UNIFORM_VECTOR_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/uniform.hpp"

#include "gtulu/internal/formats/conversions/dimension.hpp"

#include <boost/preprocessor/repetition/enum_params.hpp>

namespace gtulu {
  namespace internal {

    namespace uniform {
      namespace vector {

        template< typename type_t, typename count_t >
        struct uniform_binder;

#define DECLARE_BINDER(type_m, suffix_m, count_m) \
      template< > \
      struct uniform_binder< fut::type_m, fc::to_typename< count_m >::type > { \
          inline static void bind(const location_t location, BOOST_PP_ENUM_PARAMS(count_m, const fu::to_typename< fut::type_m >::type value)) { \
            __gl_debug(glUniform##count_m##suffix_m, (location)("...")); \
            glUniform##count_m##suffix_m(location, BOOST_PP_ENUM_PARAMS(count_m, value)); \
            __gl_check_error \
          } \
          inline static void bind(const location_t location, const ::boost::uint32_t number, const fu::to_typename< fut::type_m >::type* values) { \
            __gl_debug(glUniform##count_m##suffix_m##v, (location)(number)(values)); \
            glUniform##count_m##suffix_m##v(location, number, values); \
            __gl_check_error \
          } \
      };

        DECLARE_BINDER(floating, f, 2)
        DECLARE_BINDER(floating, f, 3)
        DECLARE_BINDER(floating, f, 4)
        DECLARE_BINDER(integer, i, 2)
        DECLARE_BINDER(integer, i, 3)
        DECLARE_BINDER(integer, i, 4)
        DECLARE_BINDER(unsigned_integer, ui, 2)
        DECLARE_BINDER(unsigned_integer, ui, 3)
        DECLARE_BINDER(unsigned_integer, ui, 4)
        DECLARE_BINDER(boolean, i, 2)
        DECLARE_BINDER(boolean, i, 3)
        DECLARE_BINDER(boolean, i, 4)
#undef DECLARE_BINDER

        template< typename format_t, typename binder_t = uniform_binder< typename format_t::info::type,
            typename format_t::info::count > , typename value_t = typename fu::to_typename<
            typename format_t::info::type >::type >
        struct uniform {
            typedef format_t format;
            typedef value_t value_type;
            typedef binder_t binder;
        };
      } // namespace vector
#define DECLARE_UNIFORM(format_m) \
  typedef vector::uniform< fu::format_m > format_m;
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

#undef DECLARE_UNIFORM

    } // namespace uniform

    namespace giuv = ::gtulu::internal::uniform::vector;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_UNIFORM_VECTOR_HPP_ */
