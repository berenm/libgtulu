/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_ERROR_HPP_
#define GTULU_INTERNAL_ERROR_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"

#if defined(NO_GTULU_DEBUG) || defined(NDEBUG)
#define __gl_check_error ;
#define __gl_debug __debugM(gl)
#else
#define __gl_check_error \
    { \
      ::std::int32_t __gl_error; \
      while ((__gl_error = glGetError()) \
                        != ::gtulu::internal::error::no_error::value) { \
        switch (__gl_error) { \
          case ::gtulu::internal::error::invalid_enum::value: \
            __errorM(gl) \
              << ::gtulu::internal::error::invalid_enum::name::value; \
            break; \
          case ::gtulu::internal::error::invalid_value::value: \
            __errorM(gl) \
              << ::gtulu::internal::error::invalid_value::name::value; \
            break; \
          case ::gtulu::internal::error::invalid_operation::value: \
            __errorM(gl) \
              << ::gtulu::internal::error::invalid_operation::name::value; \
            break; \
          case ::gtulu::internal::error::invalid_framebuffer_operation::value: \
            __errorM(gl) \
              << ::gtulu::internal::error::invalid_framebuffer_operation::name::value; \
            break; \
          case ::gtulu::internal::error::out_of_memory::value: \
            __fatalM(gl) \
              << ::gtulu::internal::error::out_of_memory::name::value; \
            break; \
          case ::gtulu::internal::error::no_error::value: \
            break; \
          default: \
            __errorM(gl) \
              << "unknown error code: " << __gl_error; \
            break; \
        } \
      }; \
    }

#define __gl_debug __debugM(gl)
#endif

namespace gtulu {
  namespace internal {

    namespace error {
      namespace code {
        typedef cst::gl_no_error no_error;
        typedef cst::gl_invalid_enum invalid_enum;
        typedef cst::gl_invalid_value invalid_value;
        typedef cst::gl_invalid_operation invalid_operation;
        typedef cst::gl_invalid_framebuffer_operation invalid_framebuffer_operation;
        typedef cst::gl_out_of_memory out_of_memory;
      } // namespace code

      template< typename error_code_t >
      struct error: public error_code_t {
          using error_code_t::value;
      };

      typedef error< code::no_error > no_error;
      typedef error< code::invalid_enum > invalid_enum;
      typedef error< code::invalid_value > invalid_value;
      typedef error< code::invalid_operation > invalid_operation;
      typedef error< code::invalid_framebuffer_operation > invalid_framebuffer_operation;
      typedef error< code::out_of_memory > out_of_memory;

    } // namespace error

    namespace gie = ::gtulu::internal::error;
    namespace giec = ::gtulu::internal::error::code;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ERROR_HPP_ */
