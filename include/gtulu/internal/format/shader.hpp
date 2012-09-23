/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_SHADER_HPP_
#define GTULU_INTERNAL_FORMAT_SHADER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/format/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace shader {

        META_ASPECT_DECLARE(property,
                            Attribute,
                            using cst::,
                                  (gl_shader_type) (gl_delete_status) (gl_compile_status) (gl_info_log_length) (gl_shader_source_length))

        META_ASPECT_DECLARE(type, Type, using cst::, (gl_vertex_shader) (gl_geometry_shader) (gl_fragment_shader))

      } // namespace shader
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_SHADER_HPP_ */
