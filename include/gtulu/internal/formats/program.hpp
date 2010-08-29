/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_PROGRAM_HPP_
#define GTULU_INTERNAL_FORMATS_PROGRAM_HPP_

#include "gtulu/opengl.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace program {
#define PROGRAM_ATTRIBUTES  ((delete_status, GL_DELETE_STATUS)) \
                            ((link_status, GL_LINK_STATUS)) \
                            ((validate_status, GL_VALIDATE_STATUS)) \
                            ((info_log_length, GL_INFO_LOG_LENGTH)) \
                            ((attached_shaders, GL_ATTACHED_SHADERS)) \
                            ((active_attributes, GL_ACTIVE_ATTRIBUTES)) \
                            ((active_attribute_max_length, GL_ACTIVE_ATTRIBUTE_MAX_LENGTH)) \
                            ((active_uniforms, GL_ACTIVE_UNIFORMS)) \
                            ((active_uniform_max_length, GL_ACTIVE_UNIFORM_MAX_LENGTH)) \
                            ((active_uniform_blocks, GL_ACTIVE_UNIFORM_BLOCKS)) \
                            ((active_uniform_block_max_length, GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH)) \

        namespace attribute {
#define CONSTANT_LIST PROGRAM_ATTRIBUTES
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
        } // namespace attribute
      } // namespace program
    } // namespace formats

    namespace fp = ::gtulu::internal::formats::program;
    namespace fpa = ::gtulu::internal::formats::program::attribute;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_PROGRAM_HPP_ */
