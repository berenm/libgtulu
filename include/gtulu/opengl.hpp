/**
 * @file
 * @date 17 juil. 2010
 * @todo comment
 */

#ifndef OPENGL_HPP_
#define OPENGL_HPP_

#define GL3_PROTOTYPES 1
#include <GL3/gl3.h>

#include <boost/integer.hpp>
#include <boost/preprocessor.hpp>

namespace gtulu {
  typedef ::boost::uint32_t location_t;
  typedef ::boost::uint32_t handle_t;
} // namespace gtulu

#include "gtulu/internal/error.hpp"

#define __gl_check_error \
    { \
      ::gtulu::internal::error::code::gl_constant __gl_error; \
      while ((__gl_error = ::gtulu::internal::error::code::gl_constant::get(glGetError())).value \
                        != ::gtulu::internal::error::no_error::value) { \
        switch (__gl_error.value) { \
          case ::gtulu::internal::error::invalid_enum::value: \
          case ::gtulu::internal::error::invalid_value::value: \
          case ::gtulu::internal::error::invalid_operation::value: \
          case ::gtulu::internal::error::invalid_framebuffer_operation::value: \
            __errorM(gl) \
              << __gl_error; \
            break; \
          case ::gtulu::internal::error::out_of_memory::value: \
            __fatalM(gl) \
              << __gl_error; \
            break; \
          case ::gtulu::internal::error::no_error::value: \
            break; \
          default: \
            __errorM(gl) \
              << "unknown error code" << __gl_error.value; \
            break; \
        } \
      }; \
    } \

#define __gl_debug_step(n, data_m, argument_m) \
  << argument_m << " "

#define __gl_debug(function_m, arguments_m) \
  __debugM(gl) << BOOST_PP_STRINGIZE(function_m) << "( " BOOST_PP_SEQ_FOR_EACH(__gl_debug_step, ~, arguments_m) << ")";

#endif /* OPENGL_HPP_ */
