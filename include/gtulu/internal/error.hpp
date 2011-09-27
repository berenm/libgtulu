/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_ERROR_HPP_
#define GTULU_INTERNAL_ERROR_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"

#define GTULU_SAFE_MULTILINE(contents_m) \
  do { \
    contents_m; \
  } while(0)

#if defined(NO_GTULU_DEBUG) || defined(NDEBUG)
#define __gtulu_check_error() GTULU_SAFE_MULTILINE()
#else
#define __gtulu_check_error() GTULU_SAFE_MULTILINE( \
  ::std::int32_t __gl_error; \
  while ((__gl_error = glGetError()) != ::gtulu::internal::error::no_error::value) { \
    switch (__gl_error) { \
      case ::gtulu::internal::error::invalid_enum::value: \
        __gtulu_error() << ::gtulu::internal::error::invalid_enum::name(); \
        break; \
      case ::gtulu::internal::error::invalid_value::value: \
        __gtulu_error() << ::gtulu::internal::error::invalid_value::name(); \
        break; \
      case ::gtulu::internal::error::invalid_operation::value: \
        __gtulu_error() << ::gtulu::internal::error::invalid_operation::name(); \
        break; \
      case ::gtulu::internal::error::invalid_framebuffer_operation::value: \
        __gtulu_error() << ::gtulu::internal::error::invalid_framebuffer_operation::name(); \
        break; \
      case ::gtulu::internal::error::out_of_memory::value: \
        __gtulu_fatal() << ::gtulu::internal::error::out_of_memory::name(); \
        break; \
      case ::gtulu::internal::error::no_error::value: \
        break; \
      default: \
        __gtulu_error() << "unknown error code: " << __gl_error; \
        break; \
    } \
  }; \
)
#endif

namespace gtulu {
  namespace internal {

    namespace error {

      typedef cst::gl_no_error no_error;
      typedef cst::gl_invalid_enum invalid_enum;
      typedef cst::gl_invalid_value invalid_value;
      typedef cst::gl_invalid_operation invalid_operation;
      typedef cst::gl_invalid_framebuffer_operation invalid_framebuffer_operation;
      typedef cst::gl_out_of_memory out_of_memory;

    } // namespace error

    namespace gie = ::gtulu::internal::error;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_ERROR_HPP_ */
