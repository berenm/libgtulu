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

#include "gtulu/internal/formats/common.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace program {

        DECLARE_TRAIT_ASPECT(attribute,
                             using cst::,
                             (gl_delete_status) (gl_link_status) (gl_validate_status) (gl_info_log_length) (gl_attached_shaders) (gl_active_attributes) (gl_active_attribute_max_length) (gl_active_uniforms) (gl_active_uniform_max_length) (gl_active_uniform_blocks) (gl_active_uniform_block_max_name_length))

      } // namespace program
    } // namespace formats

    namespace fp = ::gtulu::internal::formats::program;
    namespace fpa = ::gtulu::internal::formats::program::attribute;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_PROGRAM_HPP_ */
