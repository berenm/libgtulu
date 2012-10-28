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
        template< typename ... Ts > context_info_base(Ts ... vs) : ContextImpl(vs ...) {}

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
      struct glx_context_impl {
        Display*    display;
        GLXContext  context;
        GLXDrawable drawable;
        GLXDrawable readable;
        bool        status;

        glx_context_impl(Display* const display, GLXContext const context, GLXDrawable const drawable, GLXDrawable const readable) :
          display(display),
          context(context),
          drawable(drawable),
          readable(readable) {}

        bool acquire() {
          return glXMakeContextCurrent(display, drawable, readable, context);
        }

        void release() {
          glXMakeContextCurrent(display, None, None, NULL);
        }

      };

      struct glx_context : context_info_base< glx_context_impl > {
        glx_context(Display* const display=nullptr, GLXContext const context=nullptr, GLXDrawable const drawable=None, GLXDrawable const readable=None) :
          context_info_base< glx_context_impl >(display, context, drawable, readable) {}
      };

      struct glx_current_context : public glx_context {
        glx_current_context() :
          glx_context(glXGetCurrentDisplay(), glXGetCurrentContext(), glXGetCurrentDrawable(), glXGetCurrentReadDrawable()) {}
      };

      typedef glx_context         context_info;
      typedef glx_current_context current_context_info;

    } // namespace context

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_PLATFORM_LINUX */

#endif /* GTULU_INTERNAL_CONTEXT_INFO_HPP_ */
