/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_CONTEXT_INFO_HPP_
#define GTULU_INTERNAL_CONTEXT_INFO_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/platform.hpp"

namespace gtulu {
  namespace internal {

    namespace context {

      template< typename ContextImpl >
      struct context_info_base: ContextImpl {
          typedef ::boost::mutex base_type;

          void acquire() {
            while (!ContextImpl::acquire()) {
              ::boost::this_thread::sleep(::boost::posix_time::milliseconds(1));
            }
          }
          bool try_acquire() {
            return ContextImpl::acquire();
          }
          void release() {
            ContextImpl::release();
          }
      };

    } // namespace context

    namespace gic = ::gtulu::internal::context;

  } // namespace internal
} // namespace gtulu

#ifdef GTULU_PLATFORM_LINUX

#define GLX_GLXEXT_PROTOTYPES
#include <GL/glx.h>
#include <GL/glxext.h>

namespace gtulu {
  namespace internal {

    namespace context {
      struct glx_context_impl {
          Display* display;
          GLXDrawable drawable;
          GLXDrawable readable;
          GLXContext context;
          bool status;

          bool acquire() {
            return glXMakeContextCurrent(display, drawable, readable, context);
          }

          void release() {
            glXMakeContextCurrent(display, None, None, NULL);
          }
      };

      struct glx_context: context_info_base< glx_context_impl > {
          glx_context(Display* const display_in = nullptr,
                      GLXContext const context_in = nullptr,
                      GLXDrawable const drawable_in = None,
                      GLXDrawable const readable_in = None) {
            display = display_in;
            drawable = drawable_in;
            readable = readable_in;
            context = context_in;
          }
      };
      struct glx_current_context: public glx_context {
          glx_current_context() :
              glx_context(glXGetCurrentDisplay(),
                          glXGetCurrentContext(),
                          glXGetCurrentDrawable(),
                          glXGetCurrentReadDrawable()) {
          }
      };

      typedef glx_context context_info;
      typedef glx_current_context current_context_info;

    } // namespace context

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_PLATFORM_LINUX */

#endif /* GTULU_INTERNAL_CONTEXT_INFO_HPP_ */

