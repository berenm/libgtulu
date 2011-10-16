/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/object/framebuffer.hpp"

namespace gtulu {
  namespace internal {

    namespace framebuffer {
      namespace status {
        cst::gl_constant_base const get(std::uint32_t value) {
          switch (value) {
            case gl_framebuffer_undefined::value:
              return gl_framebuffer_undefined();
            case gl_framebuffer_incomplete_attachment::value:
              return gl_framebuffer_incomplete_attachment();
            case gl_framebuffer_incomplete_missing_attachment::value:
              return gl_framebuffer_incomplete_missing_attachment();
            case gl_framebuffer_unsupported::value:
              return gl_framebuffer_unsupported();
            case gl_framebuffer_incomplete_multisample::value:
              return gl_framebuffer_incomplete_multisample();
            case gl_framebuffer_incomplete_layer_targets::value:
              return gl_framebuffer_incomplete_layer_targets();
            case gl_framebuffer_complete::value:
              return gl_framebuffer_complete();
            default:
              return cst::invalid_constant();
          }
        }
      } // namespace status
    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu
