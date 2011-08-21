/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/objects/object.hpp"

#include "gtulu/internal/functions.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      object_base::object_base() :
          handle_(0) {
      }

      object_base::object_base(const ::std::uint32_t handle_in) :
          handle_(handle_in) {
      }

      ::std::uint32_t object_base::operator *() const {
        return handle_;
      }

      template< >
      object< texture_base >::object() {
        fnc::gl_gen_textures::call(1, &handle_);
      }
      template< >
      object< texture_base >::~object() {
        fnc::gl_delete_textures::call(1, &handle_);
      }

      template< >
      object< buffer_base >::object() {
        fnc::gl_gen_buffers::call(1, &handle_);
      }
      template< >
      object< buffer_base >::~object() {
        fnc::gl_delete_buffers::call(1, &handle_);
      }

      template< >
      object< renderbuffer_base >::object() {
        fnc::gl_gen_renderbuffers::call(1, &handle_);
      }
      template< >
      object< renderbuffer_base >::~object() {
        fnc::gl_delete_renderbuffers::call(1, &handle_);
      }

      template< >
      object< framebuffer_base >::object() {
        fnc::gl_gen_framebuffers::call(1, &handle_);
      }
      template< >
      object< framebuffer_base >::~object() {
        fnc::gl_delete_framebuffers::call(1, &handle_);
      }

      template< >
      object< vertexarray_base >::object() {
        fnc::gl_gen_vertex_arrays::call(1, &handle_);
      }
      template< >
      object< vertexarray_base >::~object() {
        fnc::gl_delete_vertex_arrays::call(1, &handle_);
      }

      template< >
      object< query_base >::object() {
        fnc::gl_gen_queries::call(1, &handle_);
      }
      template< >
      object< query_base >::~object() {
        fnc::gl_delete_queries::call(1, &handle_);
      }

      template< >
      object< program_base >::object() {
        handle_ = fnc::gl_create_program::call();

      }
      template< >
      object< program_base >::~object() {
        fnc::gl_delete_program::call(handle_);
      }

      template< >
      object< shader_base >::object() {
      }
      template< >
      object< shader_base >::~object() {
        fnc::gl_delete_shader::call(handle_);
      }
    } // namespace objects

  } // namespace internal
} // namespace gtulu
