/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_BASES_FWD_HPP_
#define GTULU_INTERNAL_OBJECT_BASES_FWD_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      struct object_base;

      struct texture_base;
      struct buffer_base;
      struct renderbuffer_base;
      struct framebuffer_base;
      struct vertexarray_base;
      struct query_base;

      struct shader_base;
      struct program_base;

      template< typename ProgramFormat >
      struct program;
      template< typename RenderbufferFormat >
      struct renderbuffer;
      template< typename ShaderFormat >
      struct shader;
      template< typename TextureFormat >
      struct texture;
      template< typename BufferFormat >
      struct buffer;
      template< typename VertexarrayFormat >
      struct vertexarray;
    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_BASES_FWD_HPP_ */
