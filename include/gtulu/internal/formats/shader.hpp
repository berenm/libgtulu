/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_SHADER_HPP_
#define GTULU_INTERNAL_FORMATS_SHADER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace shader {

        namespace attribute {
          typedef cst::gl_shader_type gl_shader_type;
          typedef cst::gl_delete_status gl_delete_status;
          typedef cst::gl_compile_status gl_compile_status;
          typedef cst::gl_info_log_length gl_info_log_length;
          typedef cst::gl_shader_source_length gl_shader_source_length;
        } // namespace attribute

        namespace type {
          typedef cst::gl_vertex_shader gl_vertex_shader;
          typedef cst::gl_geometry_shader gl_geometry_shader;
          typedef cst::gl_fragment_shader gl_fragment_shader;
        } // namespace type

      } // namespace shader
    } // namespace formats

    namespace fs = ::gtulu::internal::formats::shader;
    namespace fsa = ::gtulu::internal::formats::shader::attribute;
    namespace fst = ::gtulu::internal::formats::shader::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_SHADER_HPP_ */
