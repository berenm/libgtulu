/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"

#include "gtulu/internal/context.hpp"
#include "gtulu/internal/context_info.hpp"

namespace gtulu {
  namespace internal {

    namespace context {

      static int _x_error(Display* display, XErrorEvent* error) {
        return 0;
      }

      template< >
      template< >
      void platform_context< toolkit::glx, platform::linux_ >::_create< policy::detached >(int    arg_count,
                                                                                           char** arg_values) {
        XSetErrorHandler(_x_error);

        Display* display = NULL;
        display = XOpenDisplay(NULL);
        if (display == NULL) {
          __gtulu_fatal() << "unable to open X display.";

        } else {
          int          framebuffer_config_count = 0;
          GLXFBConfig* framebuffer_configs      = NULL;
          framebuffer_configs = glXChooseFBConfig(display, DefaultScreen(display), NULL, &framebuffer_config_count);
          if (framebuffer_configs == NULL) {
            __gtulu_fatal() << "unable to retrieve framebuffer configuration.";

          } else {
            int        context_attribs[] = {
              GLX_CONTEXT_MAJOR_VERSION_ARB, 3,                                GLX_CONTEXT_MINOR_VERSION_ARB, 3,

              // GLX_CONTEXT_FLAGS_ARB, GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB | GLX_CONTEXT_DEBUG_BIT_ARB,
              GLX_CONTEXT_PROFILE_MASK_ARB,  GLX_CONTEXT_CORE_PROFILE_BIT_ARB, None
            };
            GLXContext context = NULL;
            context = glXCreateContextAttribsARB(display, framebuffer_configs[0], NULL, true, context_attribs);
            XFree(framebuffer_configs);

            if (context == NULL) {
              __gtulu_fatal() << "unable to create OpenGL context.";

            } else {
              XSync(display, false);

              context_info_t context_info(display, context);
              if (!context_info.try_acquire()) {
                __gtulu_error() << "unable to create detached context.";

                context_info.drawable = DefaultRootWindow(display);
                context_info.readable = DefaultRootWindow(display);

                if (!context_info.try_acquire()) {
                  __gtulu_fatal() << "unable to attach context to default drawable.";
                }
              }
            }
          }
        }
      }

      template< >
      void platform_context< toolkit::glx, platform::linux_ >::_destroy() {
        context_info_t context_info = current_context_info_t();

        context_info.acquire();
        context_info.release();

        glXDestroyContext(context_info.display, context_info.context);
        XCloseDisplay(context_info.display);
      }

    } // namespace context

  } // namespace internal
} // namespace gtulu
