/**
 * @file
 * @date 17 juil. 2010
 * @todo comment
 */

#ifndef OPENGL_HPP_
#define OPENGL_HPP_
#define IN_OPENGL_HPP_

#define GL3_PROTOTYPES 1
#include <GL3/gl3.h>

#include <logging/logging.hpp>

#include <boost/integer.hpp>
#include <boost/preprocessor.hpp>

namespace gtulu {
  typedef ::boost::uint32_t location_t;
  typedef ::boost::uint32_t handle_t;
} // namespace gtulu

#undef IN_OPENGL_HPP_

#endif /* OPENGL_HPP_ */
