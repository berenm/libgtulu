/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_SHADER_HPP_
#define GTULU_INTERNAL_FORMATS_SHADER_HPP_

#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace shader {

        META_ASPECT_DECLARE(attribute,
                            Attribute,
                            using cst::,
                            (gl_shader_type) (gl_delete_status) (gl_compile_status) (gl_info_log_length) (gl_shader_source_length))

        META_ASPECT_DECLARE(type, Type, using cst::, (gl_vertex_shader) (gl_geometry_shader) (gl_fragment_shader))

      } // namespace shader
    } // namespace formats

    namespace fs = ::gtulu::internal::formats::shader;
    namespace fsa = ::gtulu::internal::formats::shader::attribute;
    namespace fst = ::gtulu::internal::formats::shader::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_SHADER_HPP_ */
