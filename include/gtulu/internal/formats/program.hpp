/**
 * @file
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
          typedef cst::gl_delete_status gl_delete_status;
          typedef cst::gl_link_status gl_link_status;
          typedef cst::gl_validate_status gl_validate_status;
          typedef cst::gl_info_log_length gl_info_log_length;
          typedef cst::gl_attached_shaders gl_attached_shaders;
          typedef cst::gl_active_attributes gl_active_attributes;
          typedef cst::gl_active_attribute_max_length gl_active_attribute_max_length;
          typedef cst::gl_active_uniforms gl_active_uniforms;
          typedef cst::gl_active_uniform_max_length gl_active_uniform_max_length;
          typedef cst::gl_active_uniform_blocks gl_active_uniform_blocks;
          typedef cst::gl_active_uniform_block_max_name_length gl_active_uniform_block_max_name_length;
        } // namespace attribute
      } // namespace program
    } // namespace formats

    namespace fp = ::gtulu::internal::formats::program;
    namespace fpa = ::gtulu::internal::formats::program::attribute;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_PROGRAM_HPP_ */
