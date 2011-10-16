/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FORMAT_PROGRAM_HPP_
#define GTULU_INTERNAL_FORMAT_PROGRAM_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/internal/constants_fwd.hpp"

#include "gtulu/internal/format/common.hpp"

namespace gtulu {
  namespace internal {

    namespace format {
      namespace program {

        META_ASPECT_DECLARE(property,
                            Attribute,
                            using cst::,
                            (gl_delete_status)(gl_link_status)(gl_validate_status)(gl_info_log_length)(gl_attached_shaders)(gl_active_attributes)(gl_active_attribute_max_length)(gl_active_uniforms)(gl_active_uniform_max_length)(gl_active_uniform_blocks)(gl_active_uniform_block_max_name_length))

      } // namespace program
    } // namespace format

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMAT_PROGRAM_HPP_ */
