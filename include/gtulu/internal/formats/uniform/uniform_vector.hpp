/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_
#error "gtulu/internal/formats/uniform/uniform_vector.hpp should not be included directly, please include gtulu/internal/formats/uniform.hpp instead."
#endif /* IN_GTULU_INTERNAL_FORMAT_UNIFORM_HPP_ */

#ifndef GTULU_INTERNAL_FORMAT_UNIFORM_VECTOR_HPP_
#define GTULU_INTERNAL_FORMAT_UNIFORM_VECTOR_HPP_

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

          template< typename Format, typename DataType, typename Count >
          struct uniform_metadata: fu::uniform_metadata< Format, fub::vector, DataType > {
            using fu::uniform_metadata< Format, fub::vector, DataType >::format;
            using fu::uniform_metadata< Format, fub::vector, DataType >::base;
            using fu::uniform_metadata< Format, fub::vector, DataType >::type;
            typedef Count count;
          };

          template< typename Format >
          struct uniform_format;
        } // namespace vector

#define DECLARE_UNIFORM_FORMAT(format_m, type_m, count_m) \
    namespace vector { \
      template< > struct uniform_format< fuf::format_m > { \
          typedef uniform_metadata< fuf::format_m, fut::type_m, count::count_m > info; \
      }; \
    } \
    typedef vector::uniform_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, vector, format_m); \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m); \
    namespace vector { \
      DECLARE_HAS_TRAIT_FORMAT(count, count_m, format_m); \
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
