/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_PROGRAM_HPP_
#define GTULU_INTERNAL_FORMATS_PROGRAM_HPP_

#include "gtulu/internal/constants_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace program {

        namespace attribute {
          using cst::gl_delete_status;
          using cst::gl_link_status;
          using cst::gl_validate_status;
          using cst::gl_info_log_length;
          using cst::gl_attached_shaders;
          using cst::gl_active_attributes;
          using cst::gl_active_attribute_max_length;
          using cst::gl_active_uniforms;
          using cst::gl_active_uniform_max_length;
          using cst::gl_active_uniform_blocks;
          using cst::gl_active_uniform_block_max_name_length;
        } // namespace attribute
      } // namespace program
    } // namespace formats

    namespace fp = ::gtulu::internal::formats::program;
    namespace fpa = ::gtulu::internal::formats::program::attribute;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_PROGRAM_HPP_ */
