/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_CONTEXT_INFO_HPP_
#define GTULU_INTERNAL_CONTEXT_INFO_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/platform.hpp"

#include <boost/thread.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>

namespace gtulu {
  namespace internal {

    namespace context {

      template< typename ContextImpl >
      struct context_info_base : ContextImpl {
        template< typename... Ts > context_info_base(Ts... vs) : ContextImpl(vs...) {}

        void acquire() {
          while (!ContextImpl::acquire()) {
            boost::this_thread::sleep(boost::posix_time::milliseconds(1));

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

  } // namespace internal
} // namespace gtulu

#ifdef GTULU_PLATFORM_LINUX

namespace gtulu {
  namespace internal {

    namespace context {
      struct egl_context_impl {
        EGLDisplay display;
        EGLContext context;
        EGLSurface drawable;
        EGLSurface readable;
        bool       status;

        egl_context_impl(EGLDisplay const display, EGLContext const context, EGLSurface const drawable, EGLSurface const readable) :
          display(display),
          context(context),
          drawable(drawable),
          readable(readable) {}

        bool acquire() {
          return eglMakeCurrent(display, drawable, readable, context);
        }

        void release() {
          eglMakeCurrent(display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
        }

      };

      struct egl_context : context_info_base< egl_context_impl > {
        egl_context(EGLDisplay const display=nullptr, EGLContext const context=EGL_NO_CONTEXT, EGLSurface const drawable=EGL_NO_SURFACE, EGLSurface const readable=EGL_NO_SURFACE) :
          context_info_base< egl_context_impl >(display, context, drawable, readable) {}
      };

      struct egl_current_context : public egl_context {
        egl_current_context() :
          egl_context(eglGetCurrentDisplay(), eglGetCurrentContext(), eglGetCurrentSurface(EGL_DRAW), eglGetCurrentSurface(EGL_READ)) {}
      };

      typedef egl_context         context_info;
      typedef egl_current_context current_context_info;

    } // namespace context

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_PLATFORM_LINUX */

#endif /* GTULU_INTERNAL_CONTEXT_INFO_HPP_ */
