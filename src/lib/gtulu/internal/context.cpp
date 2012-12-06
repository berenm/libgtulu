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
      void platform_context< toolkit::egl, platform::linux_ >::_create< policy::detached >(int arg_count, char** arg_values) {
        setenv("EGL_DRIVER", "egl_glx", 0);
        XSetErrorHandler(_x_error);

        EGLNativeDisplayType const native_display = XOpenDisplay(nullptr);
        EGLDisplay const           display        = eglGetDisplay(native_display);

        if (display == nullptr) {
          __gtulu_fatal() << "Unable to open X display.";
          throw std::runtime_error("Unable to open X display.");
        }

        eglInitialize(display, nullptr, nullptr);

        __gtulu_info() << "EGL client-apis: " << eglQueryString(display, EGL_CLIENT_APIS);
        __gtulu_info() << "EGL extensions: " << eglQueryString(display, EGL_EXTENSIONS);
        __gtulu_info() << "EGL vendor: " << eglQueryString(display, EGL_VENDOR);
        __gtulu_info() << "EGL version: " << eglQueryString(display, EGL_VERSION);

        EGLint       config_count;
        EGLint const attributes[] = {
          EGL_CONFIG_CAVEAT,   EGL_NONE,
          EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT,
          EGL_CONFORMANT,      EGL_OPENGL_BIT,
          EGL_SURFACE_TYPE,    EGL_WINDOW_BIT | EGL_PBUFFER_BIT | EGL_PIXMAP_BIT,
          EGL_NONE
        };

        if (eglChooseConfig(display, attributes, nullptr, 0, &config_count) != EGL_TRUE) {
          __gtulu_fatal() << "Unable to retrieve framebuffer configurations count.";
          throw std::runtime_error("Unable to retrieve framebuffer configurations count.");
        }

        EGLConfig* const configs = new EGLConfig[config_count];
        if (eglChooseConfig(display, attributes, configs, config_count, &config_count) != EGL_TRUE) {
          __gtulu_fatal() << "Unable to choose framebuffer configuration.";
          throw std::runtime_error("Unable to choose framebuffer configuration.");
        }

        eglBindAPI(EGL_OPENGL_API);
        EGLint const     context_attributes[] = {
          // EGL_CONTEXT_FLAGS_KHR, EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR | EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR,
          // EGL_CONTEXT_CLIENT_VERSION ,       3,
          // EGL_CONTEXT_MINOR_VERSION_KHR,       3,
          // EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR, EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR,
          EGL_NONE
        };
        EGLContext const context = eglCreateContext(display, configs[0], EGL_NO_CONTEXT, context_attributes);
        if (context == EGL_NO_CONTEXT) {
          __gtulu_fatal() << "Unable to create OpenGL context.";
          throw std::runtime_error("Unable to create OpenGL context.");
        }

        // XSync(native_display, false);

        context_info_t context_info(display, context, eglCreatePbufferSurface(display, configs[0], nullptr), eglCreatePbufferSurface(display, configs[0], nullptr));
        if (!context_info.try_acquire()) {
          __gtulu_fatal() << "Unable to attach context to default drawable.";
          throw std::runtime_error("Unable to attach context to default drawable.");
        }

        delete[] configs;
      } // _create

      template< >
      void platform_context< toolkit::egl, platform::linux_ >::_destroy() {
        context_info_t context_info = current_context_info_t();

        context_info.acquire();
        context_info.release();

        eglDestroyContext(context_info.display, context_info.context);
        eglDestroySurface(context_info.display, context_info.drawable);
        eglDestroySurface(context_info.display, context_info.readable);
        eglTerminate(context_info.display);

        // XCloseDisplay(context_info.display);
      }

    } // namespace context

  } // namespace internal
} // namespace gtulu
