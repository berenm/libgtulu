/**
 * @file
 * @date 27 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FORMATS_SHADER_HPP_
#define GTULU_INTERNAL_FORMATS_SHADER_HPP_

#include "gtulu/opengl.hpp"

namespace gtulu {
  namespace internal {

    namespace formats {
      namespace shader {

#define SHADER_ATTRIBUTES ((shader_type, GL_SHADER_TYPE)) \
                          ((delete_status, GL_DELETE_STATUS)) \
                          ((compile_status, GL_COMPILE_STATUS)) \
                          ((info_log_length, GL_INFO_LOG_LENGTH)) \
                          ((shader_source_length, GL_SHADER_SOURCE_LENGTH)) \

        namespace attribute {
#define CONSTANT_LIST SHADER_ATTRIBUTES
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
        } // namespace attribute

#define SHADER_TYPES  ((vertex, GL_VERTEX_SHADER)) \
                      ((geometry, GL_GEOMETRY_SHADER)) \
                      ((fragment, GL_FRAGMENT_SHADER)) \

        namespace type {
#define CONSTANT_LIST SHADER_TYPES
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
        } // namespace type

      } // namespace shader
    } // namespace formats

    namespace fs = ::gtulu::internal::formats::shader;
    namespace fsa = ::gtulu::internal::formats::shader::attribute;
    namespace fst = ::gtulu::internal::formats::shader::type;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FORMATS_SHADER_HPP_ */
