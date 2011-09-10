/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMAT_OUTPUT_HPP_
#define GTULU_INTERNAL_FORMAT_OUTPUT_HPP_

#include "gtulu/internal/format/common.hpp"

#include <string>

namespace gtulu {
  namespace internal {

    namespace format {
      namespace output {

        META_ASPECT_DECLARE(format,
                            Format,
                            using cst::,
                            (gl_float)(gl_float_vec2)(gl_float_vec3)(gl_float_vec4)(gl_int)(gl_int_vec2)(gl_int_vec3)(gl_int_vec4)(gl_unsigned_int)(gl_unsigned_int_vec2)(gl_unsigned_int_vec3)(gl_unsigned_int_vec4))

        namespace format {
          cst::gl_constant_base const get(::std::string type_name);
        } // namespace format

        template< typename Format, typename Numeric, typename Dimension, typename Cardinality >
        struct output_aspect {
            typedef Format format;
            typedef Dimension dimension;
            typedef Cardinality cardinality;
            typedef Numeric numeric;
        };

        template< typename Format >
        struct output_format;

#define DECLARE_FORMAT(format_m, numeric_m, dimension_m, cardinality_m) \
    template< > struct output_format< format::format_m > {              \
        typedef output_aspect< format::format_m,                        \
                               fc::numeric::numeric_m,                  \
                               fc::dimension::dimension_m,              \
                               fc::cardinality::cardinality_m > aspect; \
    };                                                                  \
    typedef output_format< format::format_m > format_m;

        DECLARE_FORMAT(gl_float, signed_floating, oned, one)
        DECLARE_FORMAT(gl_int, signed_integral, oned, one)
        DECLARE_FORMAT(gl_unsigned_int, unsigned_integral, oned, one)

        DECLARE_FORMAT(gl_float_vec2, signed_floating, twod, two)
        DECLARE_FORMAT(gl_float_vec3, signed_floating, twod, three)
        DECLARE_FORMAT(gl_float_vec4, signed_floating, twod, four)
        DECLARE_FORMAT(gl_int_vec2, signed_integral, twod, two)
        DECLARE_FORMAT(gl_int_vec3, signed_integral, twod, three)
        DECLARE_FORMAT(gl_int_vec4, signed_integral, twod, four)
        DECLARE_FORMAT(gl_unsigned_int_vec2, unsigned_integral, twod, two)
        DECLARE_FORMAT(gl_unsigned_int_vec3, unsigned_integral, twod, three)
        DECLARE_FORMAT(gl_unsigned_int_vec4, unsigned_integral, twod, four)

#undef DECLARE_FORMAT

      } // namespace output
    } // namespace format

    namespace fo = ::gtulu::internal::format::output;
    namespace fof = ::gtulu::internal::format::output::format;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_OUTPUT_HPP_ */
