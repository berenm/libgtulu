/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef IN_GTULU_INTERNAL_FORMAT_OUTPUT_HPP_
#error "gtulu/internal/formats/output/output.hpp should not be included directly, please include gtulu/internal/formats/output.hpp instead."
#endif

#ifndef GTULU_INTERNAL_FORMAT_OUTPUT_OUTPUT_HPP_
#define GTULU_INTERNAL_FORMAT_OUTPUT_OUTPUT_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace output {

#define OUTPUT_FORMATS  ((float, GL_FLOAT)) \
                        ((float_vec2, GL_FLOAT_VEC2)) \
                        ((float_vec3, GL_FLOAT_VEC3)) \
                        ((float_vec4, GL_FLOAT_VEC4)) \
                        ((int, GL_INT)) \
                        ((int_vec2, GL_INT_VEC2)) \
                        ((int_vec3, GL_INT_VEC3)) \
                        ((int_vec4, GL_INT_VEC4)) \
                        ((unsigned_int, GL_UNSIGNED_INT)) \
                        ((unsigned_int_vec2, GL_UNSIGNED_INT_VEC2)) \
                        ((unsigned_int_vec3, GL_UNSIGNED_INT_VEC3)) \
                        ((unsigned_int_vec4, GL_UNSIGNED_INT_VEC4)) \

        namespace format {
#define CONSTANT_LIST OUTPUT_FORMATS
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
        } // namespace format

        DECLARE_TRAIT_ASPECT(base, struct,
            (literal)
            (vector)
        )
        DECLARE_TRAIT_ASPECT(type, struct,
            (floating)
            (integer)
            (unsigned_integer)
        )

        template< typename format_t, typename base_t, typename type_t >
        struct output_metadata {
            typedef format_t format;
            typedef base_t base;
            typedef type_t type;
            typedef fcd::one count;
        };

        template< typename format_t >
        struct output_format;

#define DECLARE_OUTPUT_FORMAT(format_m, base_m, type_m) \
    template< > struct output_format< format::format_m > { \
        typedef output_metadata< format::format_m, base::base_m, type::type_m > info; \
    }; \
    typedef output_format< format::format_m > format_m; \
    DECLARE_HAS_TRAIT_FORMAT(base, base_m, format_m) \
    DECLARE_HAS_TRAIT_FORMAT(type, type_m, format_m)

        DECLARE_OUTPUT_FORMAT(gl_float, literal, floating)
        DECLARE_OUTPUT_FORMAT(gl_int, literal, integer)
        DECLARE_OUTPUT_FORMAT(gl_unsigned_int, literal, unsigned_integer)
#undef DECLARE_OUTPUT_FORMAT
      } // namespace output
    } // namespace formats

    namespace fo = ::gtulu::internal::formats::output;
    namespace fob = ::gtulu::internal::formats::output::base;
    namespace fof = ::gtulu::internal::formats::output::format;
    namespace fot = ::gtulu::internal::formats::output::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_OUTPUT_OUTPUT_HPP_ */
