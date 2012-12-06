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
#include <array>
#include <cstdint>

#define GLCOREARB_PROTOTYPES 1
#define GLAPI                extern __attribute__((weak))
#include <GL/glcorearb.h>

#include <EGL/egl.h>
#include <EGL/eglext.h>

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

  template< class T > using vec1 = std::array< T, 1 >;
  template< class T > using vec2 = std::array< T, 2 >;
  template< class T > using vec3 = std::array< T, 3 >;
  template< class T > using vec4 = std::array< T, 4 >;

  template< class T > using mat2x2 = std::array< std::array< T, 2 >, 2 >;
  template< class T > using mat2x3 = std::array< std::array< T, 2 >, 3 >;
  template< class T > using mat2x4 = std::array< std::array< T, 2 >, 4 >;
  template< class T > using mat3x2 = std::array< std::array< T, 3 >, 2 >;
  template< class T > using mat3x3 = std::array< std::array< T, 3 >, 3 >;
  template< class T > using mat3x4 = std::array< std::array< T, 3 >, 4 >;
  template< class T > using mat4x2 = std::array< std::array< T, 4 >, 2 >;
  template< class T > using mat4x3 = std::array< std::array< T, 4 >, 3 >;
  template< class T > using mat4x4 = std::array< std::array< T, 4 >, 4 >;

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
