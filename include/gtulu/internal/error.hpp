/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_ERROR_HPP_
#define GTULU_INTERNAL_ERROR_HPP_

#include "gtulu/opengl.hpp"

#include <logging/logging.hpp>

namespace gtulu {
  namespace internal {

    namespace error {

#define ERROR_CODES ((no_error, GL_NO_ERROR)) \
                    ((invalid_enum, GL_INVALID_ENUM)) \
                    ((invalid_value, GL_INVALID_VALUE)) \
                    ((invalid_operation, GL_INVALID_OPERATION)) \
                    ((invalid_framebuffer_operation, GL_INVALID_FRAMEBUFFER_OPERATION)) \
                    ((out_of_memory, GL_OUT_OF_MEMORY)) \

      namespace code {
#define CONSTANT_LIST ERROR_CODES
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
      } // namespace code

      template< typename error_code_t >
      struct error: public code::from_type< error_code_t > {
          using code::from_type< error_code_t >::value;
      };

      typedef error< code::gl_no_error > no_error;
      typedef error< code::gl_invalid_enum > invalid_enum;
      typedef error< code::gl_invalid_value > invalid_value;
      typedef error< code::gl_invalid_operation > invalid_operation;
      typedef error< code::gl_invalid_framebuffer_operation > invalid_framebuffer_operation;
      typedef error< code::gl_out_of_memory > out_of_memory;

    } // namespace error

    namespace gie = ::gtulu::internal::error;
    namespace giec = ::gtulu::internal::error::code;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ERROR_HPP_ */
