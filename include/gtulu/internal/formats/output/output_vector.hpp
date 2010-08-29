/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_OUTPUT_HPP_
#error "gtulu/internal/formats/output/output_vector.hpp should not be included directly, please include gtulu/internal/formats/output.hpp instead."
#endif

#ifndef GTULU_INTERNAL_FORMAT_OUTPUT_VECTOR_HPP_
#define GTULU_INTERNAL_FORMAT_OUTPUT_VECTOR_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

#include "gtulu/internal/formats/output/output.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace output {
        namespace vector {

          DECLARE_TRAIT_ASPECT(count, using fcd::,
              (two)
              (three)
              (four)
          )

          template< typename format_t, typename type_t, typename count_t >
          struct output_metadata: fo::output_metadata< format_t, fo::base::vector, type_t > {
              using fo::output_metadata< format_t, fo::base::vector, type_t >::format;
              using fo::output_metadata< format_t, fo::base::vector, type_t >::base;
              using fo::output_metadata< format_t, fo::base::vector, type_t >::type;
              typedef count_t count;
          };

          template< typename format_t >
          struct output_format;
        } // namespace vector

#define DECLARE_OUTPUT_FORMAT(format_m, type_m, count_m) \
    namespace vector { \
      template< > struct output_format< fof::format_m > { \
          typedef output_metadata< fof::format_m, fot::type_m, count::count_m > info; \
      }; \
    } \
    typedef vector::output_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, vector, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m) \
    namespace vector { \
      DECLARE_HAS_TRAIT_FORMAT(count, count_m, format_m) \
    }

        DECLARE_OUTPUT_FORMAT(gl_float_vec2, floating, two)
        DECLARE_OUTPUT_FORMAT(gl_float_vec3, floating, three)
        DECLARE_OUTPUT_FORMAT(gl_float_vec4, floating, four)
        DECLARE_OUTPUT_FORMAT(gl_int_vec2, integer, two)
        DECLARE_OUTPUT_FORMAT(gl_int_vec3, integer, three)
        DECLARE_OUTPUT_FORMAT(gl_int_vec4, integer, four)
        DECLARE_OUTPUT_FORMAT(gl_unsigned_int_vec2, unsigned_integer, two)
        DECLARE_OUTPUT_FORMAT(gl_unsigned_int_vec3, unsigned_integer, three)
        DECLARE_OUTPUT_FORMAT(gl_unsigned_int_vec4, unsigned_integer, four)
#undef DECLARE_OUTPUT_FORMAT
      } // namespace output
    } // namespace formats

    namespace fov = ::gtulu::internal::formats::output::vector;
    namespace fovc = ::gtulu::internal::formats::output::vector::count;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_OUTPUT_VECTOR_HPP_ */
