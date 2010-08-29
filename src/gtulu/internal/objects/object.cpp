/**
 * @file
 * @date 21 nov. 2009
 * @todo comment
 */

#include "gtulu/internal/objects/object.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      object_base::object_base() :
        handle_(0) {
      }

      object_base::object_base(const ::boost::uint32_t handle_in) :
        handle_(handle_in) {
      }

      ::boost::uint32_t object_base::operator *() const {
        return handle_;
      }

      template< >
      object< texture_base >::object() {
        __gl_debug(glGenTextures, (1)(&handle_));
        glGenTextures(1, &handle_);
        __gl_check_error
      }
      template< >
      object< texture_base >::~object() {
        __gl_debug(glDeleteTextures, (1)(&handle_));
        glDeleteTextures(1, &handle_);
        __gl_check_error
      }

      template< >
      object< buffer_base >::object() {
        __gl_debug(glGenBuffers, (1)(&handle_));
        glGenBuffers(1, &handle_);
        __gl_check_error
      }
      template< >
      object< buffer_base >::~object() {
        __gl_debug(glDeleteBuffers, (1)(&handle_));
        glDeleteBuffers(1, &handle_);
        __gl_check_error
      }

      template< >
      object< renderbuffer_base >::object() {
        __gl_debug(glGenRenderbuffers, (1)(&handle_));
        glGenRenderbuffers(1, &handle_);
        __gl_check_error
      }
      template< >
      object< renderbuffer_base >::~object() {
        __gl_debug(glDeleteRenderbuffers, (1)(&handle_));
        glDeleteRenderbuffers(1, &handle_);
        __gl_check_error
      }

      template< >
      object< framebuffer_base >::object() {
        __gl_debug(glGenFramebuffers, (1)(&handle_));
        glGenFramebuffers(1, &handle_);
        __gl_check_error
      }
      template< >
      object< framebuffer_base >::~object() {
        __gl_debug(glDeleteFramebuffers, (1)(&handle_));
        glDeleteFramebuffers(1, &handle_);
        __gl_check_error
      }

      template< >
      object< vertexarray_base >::object() {
        __gl_debug(glGenVertexArrays, (1)(&handle_));
        glGenVertexArrays(1, &handle_);
        __gl_check_error
      }
      template< >
      object< vertexarray_base >::~object() {
        __gl_debug(glDeleteVertexArrays, (1)(&handle_));
        glDeleteVertexArrays(1, &handle_);
        __gl_check_error
      }

      template< >
      object< query_base >::object() {
        __gl_debug(glGenQueries, (1)(&handle_));
        glGenQueries(1, &handle_);
        __gl_check_error
      }
      template< >
      object< query_base >::~object() {
        __gl_debug(glDeleteQueries, (1)(&handle_));
        glDeleteQueries(1, &handle_);
        __gl_check_error
      }

      template< >
      object< program_base >::object() {
        __gl_debug(glCreateProgram, (""));
        handle_ = glCreateProgram();
        __gl_check_error
      }
      template< >
      object< program_base >::~object() {
        __gl_debug(glDeleteProgram, (handle_));
        glDeleteProgram(handle_);
        __gl_check_error
      }

      template< >
      object< shader_base >::object() {
      }
      template< >
      object< shader_base >::~object() {
        __gl_debug(glDeleteShader, (handle_));
        glDeleteShader(handle_);
        __gl_check_error
      }
    } // namespace objects

  } // namespace internal
} // namespace gtulu
