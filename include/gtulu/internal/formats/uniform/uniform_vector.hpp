/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_
#error "gtulu/internal/formats/uniform/uniform_vector.hpp should not be included directly, please include gtulu/internal/formats/uniform.hpp instead."
#endif

#ifndef GTULU_INTERNAL_FORMAT_UNIFORM_VECTOR_HPP_
#define GTULU_INTERNAL_FORMAT_UNIFORM_VECTOR_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/uniform/uniform.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace uniform {
        namespace vector {

          DECLARE_TRAIT_ASPECT(count, using fcd::,
              (two)
              (three)
              (four)
          )

          template< typename format_t, typename type_t, typename count_t >
          struct uniform_metadata: fu::uniform_metadata< format_t, fub::vector, type_t > {
              using fu::uniform_metadata< format_t, fub::vector, type_t >::format;
              using fu::uniform_metadata< format_t, fub::vector, type_t >::base;
              using fu::uniform_metadata< format_t, fub::vector, type_t >::type;
              typedef count_t count;
          };

          template< typename format_t >
          struct uniform_format;
        } // namespace vector

#define DECLARE_UNIFORM_FORMAT(format_m, type_m, count_m) \
    namespace vector { \
      template< > struct uniform_format< fuf::format_m > { \
          typedef uniform_metadata< fuf::format_m, fut::type_m, count::count_m > info; \
      }; \
    } \
    typedef vector::uniform_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, vector, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
    namespace vector { \
      DECLARE_HAS_TRAIT_FORMAT(count, count_m, format_m) \
    }

        DECLARE_UNIFORM_FORMAT(gl_float_vec2, floating, two)
        DECLARE_UNIFORM_FORMAT(gl_float_vec3, floating, three)
        DECLARE_UNIFORM_FORMAT(gl_float_vec4, floating, four)
        DECLARE_UNIFORM_FORMAT(gl_int_vec2, integer, two)
        DECLARE_UNIFORM_FORMAT(gl_int_vec3, integer, three)
        DECLARE_UNIFORM_FORMAT(gl_int_vec4, integer, four)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_vec2, unsigned_integer, two)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_vec3, unsigned_integer, three)
        DECLARE_UNIFORM_FORMAT(gl_unsigned_int_vec4, unsigned_integer, four)
        DECLARE_UNIFORM_FORMAT(gl_bool_vec2, integer, two)
        DECLARE_UNIFORM_FORMAT(gl_bool_vec3, integer, three)
        DECLARE_UNIFORM_FORMAT(gl_bool_vec4, integer, four)
#undef DECLARE_UNIFORM_FORMAT
      } // namespace uniform
    } // namespace formats

    namespace fuv = ::gtulu::internal::formats::uniform::vector;
    namespace fuvc = ::gtulu::internal::formats::uniform::vector::count;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_UNIFORM_VECTOR_HPP_ */
