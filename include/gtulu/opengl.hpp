/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef OPENGL_HPP_
#define OPENGL_HPP_
#define IN_OPENGL_HPP_

#include <string>
#include <cstdint>

#define GL3_PROTOTYPES 1
#include <GL3/gl3.h>

#include "gtulu/utils/logging.hpp"

namespace gtulu {
  typedef ::std::uint32_t location_t;
  typedef ::std::uint32_t handle_t;
} // namespace gtulu

#include <boost/config.hpp>
#ifdef BOOST_NO_CONSTEXPR
#define constexpr const
#endif

#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#undef IN_OPENGL_HPP_

#endif /* OPENGL_HPP_ */
