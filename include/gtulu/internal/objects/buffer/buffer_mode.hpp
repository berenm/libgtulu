/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 30 mai 2010
 * @todo comment
 */

#ifndef BUFFER_MODE_HPP_
#define BUFFER_MODE_HPP_

#include "gtulu/opengl.hpp"

namespace buffer {
  namespace side {
    struct gl;
    struct client;
    struct any;
  }

  namespace use {
    struct once;
    struct few;
    struct many;
  }

  template< typename from_use_t, typename to_use_t >
  struct use_mode {
  };
  template< typename from_t, typename to_t >
  struct side_mode {
  };

  typedef use_mode< use::one, use::few > stream_mode;
  typedef use_mode< use::one, use::many > static_mode;
  typedef use_mode< use::many, use::many > dynamic_mode;

  typedef side_mode< side::client, use::gl > write_mode;
  typedef side_mode< side::gl, side::client > read_mode;
  typedef side_mode< side::gl, side::gl > copy_mode;

  template< typename use_mode, typename side_mode >
  struct mode;

  template< typename from_t, typename from_use_t, typename to_t, typename to_use_t >
  struct mode_selector;

  template< >
  struct mode_selector< side::client, use::once, side::gl, use::few > {
      ::std::uint32_t value = GL_STREAM_DRAW;
  };
  template< >
  struct mode_selector< side::gl, use::once, side::client, use::few > {
      ::std::uint32_t value = GL_STREAM_READ;
  };
  template< >
  struct mode_selector< side::gl, use::once, side::gl, use::few > {
      ::std::uint32_t value = GL_STREAM_COPY;
  };

  template< >
  struct mode_selector< side::client, use::once, side::gl, use::many > {
      ::std::uint32_t value = GL_STATIC_DRAW;
  };
  template< >
  struct mode_selector< side::gl, use::once, side::client, use::many > {
      ::std::uint32_t value = GL_STATIC_READ;
  };
  template< >
  struct mode_selector< side::gl, use::once, side::gl, use::many > {
      ::std::uint32_t value = GL_STATIC_COPY;
  };

  template< >
  struct mode_selector< side::client, use::many, side::gl, use::many > {
      ::std::uint32_t value = GL_DYNAMIC_DRAW;
  };
  template< >
  struct mode_selector< side::gl, use::many, side::client, use::many > {
      ::std::uint32_t value = GL_DYNAMIC_READ;
  };
  template< >
  struct mode_selector< side::gl, use::many, side::gl, use::many > {
      ::std::uint32_t value = GL_DYNAMIC_COPY;
  };

}

#endif /* BUFFER_MODE_HPP_ */
