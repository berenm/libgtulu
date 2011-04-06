/**
 * @file
 * @date 13 août 2010
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#ifndef GTULU_INTERNAL_OBJECTS_BASES_FWD_HPP_
#define GTULU_INTERNAL_OBJECTS_BASES_FWD_HPP_

#include "gtulu/opengl.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      struct object_base;

      struct texture_base;
      struct buffer_base;
      struct renderbuffer_base;
      struct framebuffer_base;
      struct vertexarray_base;
      struct query_base;

      struct shader_base;
      struct program_base;

      template< typename program_format_t >
      struct program;
      template< typename renderbuffer_format_t >
      struct renderbuffer;
      template< typename shader_format_t >
      struct shader;
      template< typename texture_format_t >
      struct texture;
      template< typename vertexarray_format_t >
      struct vertexarray;
    } // namespace objects

    namespace gio = ::gtulu::internal::objects;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_BASES_FWD_HPP_ */
