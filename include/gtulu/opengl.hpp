/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 17 juil. 2010
 * @todo comment
 */

#ifndef OPENGL_HPP_
#define OPENGL_HPP_
#define IN_OPENGL_HPP_

#include <string>
#include <boost/integer.hpp>

#define GL3_PROTOTYPES 1
#include <GL3/gl3.h>

#include <logging/logging.hpp>

namespace std {
  typedef ::boost::uint64_t uint64_t;
  typedef ::boost::int64_t int64_t;
  typedef ::boost::uint32_t uint32_t;
  typedef ::boost::int32_t int32_t;
  typedef ::boost::uint16_t uint16_t;
  typedef ::boost::int16_t int16_t;
  typedef ::boost::uint8_t uint8_t;
  typedef ::boost::int8_t int8_t;
}

namespace gtulu {
  typedef ::std::uint32_t location_t;
  typedef ::std::uint32_t handle_t;
} // namespace gtulu

#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#undef IN_OPENGL_HPP_

#endif /* OPENGL_HPP_ */
