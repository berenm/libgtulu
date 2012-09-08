/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef OPENGL_HPP_
#define OPENGL_HPP_
#define IN_OPENGL_HPP_

#include "gtulu/namespaces.hpp"

#include <string>
#include <cstdint>

#define GLCOREARB_PROTOTYPES 1
#include <GL/glcorearb.h>

#define GLX_GLXEXT_PROTOTYPES 1
#include <GL/glx.h>
#include <GL/glxext.h>

#include <cairo/cairo.h>
#include <pango/pango.h>
#include <pango/pango-layout.h>
#include <pango/pangocairo.h>

#include "gtulu/utils/logging.hpp"

namespace gtulu {
  typedef std::int32_t  location_t;
  typedef std::uint32_t handle_t;

  typedef std::uint8_t  uint8_t;
  typedef std::uint16_t uint16_t;
  typedef std::uint32_t uint32_t;
  typedef std::uint64_t uint64_t;

  typedef std::int8_t  int8_t;
  typedef std::int16_t int16_t;
  typedef std::int32_t int32_t;
  typedef std::int64_t int64_t;

  typedef float  float32_t;
  typedef double float64_t;
} // namespace gtulu

#include <boost/config.hpp>
#ifdef BOOST_NO_CONSTEXPR
# define constexpr const
#endif // ifdef BOOST_NO_CONSTEXPR

#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/error.hpp"
#include "gtulu/internal/functions.hpp"

#undef IN_OPENGL_HPP_

#endif /* OPENGL_HPP_ */
