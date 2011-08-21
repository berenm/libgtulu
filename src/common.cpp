/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#include "gtulu/platform.hpp"
#include "gtulu/internal/context.hpp"
#include "gtulu/internal/context_info.hpp"
#include <logging/logging.hpp>

#ifdef GTULU_PLATFORM_LINUX

#else
#include <GL/glfw3.h>

#endif

#include <iostream>
#include "common.hpp"

static int _x_error(Display *display, XErrorEvent *error) {
  return 0;
}

void init_gl(::std::int32_t argc, char** argv) {
  XSetErrorHandler(_x_error);

#ifdef GTULU_PLATFORM_LINUX

  Display* display = NULL;
  display = XOpenDisplay(NULL);
  if (display == NULL) {
    __fatalM(gl)
    << "unable to open X display.";

  } else {
    int framebuffer_config_count = 0;
    GLXFBConfig* framebuffer_configs = NULL;
    framebuffer_configs = glXChooseFBConfig(display, DefaultScreen(display), NULL, &framebuffer_config_count);
    if (framebuffer_configs == NULL) {
      __fatalM(gl)
      << "unable to retrieve framebuffer configuration.";

    } else {
      int context_attribs[] = { GLX_CONTEXT_MAJOR_VERSION_ARB, 3, GLX_CONTEXT_MINOR_VERSION_ARB, 3,
      // GLX_CONTEXT_FLAGS_ARB, GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB | GLX_CONTEXT_DEBUG_BIT_ARB,
                                GLX_CONTEXT_PROFILE_MASK_ARB, GLX_CONTEXT_CORE_PROFILE_BIT_ARB, None };
      GLXContext context = NULL;
      context = glXCreateContextAttribsARB(display, framebuffer_configs[0], NULL, true, context_attribs);
      XFree(framebuffer_configs);

      if (context == NULL) {
        __fatalM(gl)
        << "unable to create OpenGL context.";

      } else {
        XSync(display, false);

        gtulu::internal::context::context_info context_info(display, context);
        if (!context_info.try_acquire()) {
          __errorM(gl)
          << "unable to create detached context.";

          context_info.drawable = DefaultRootWindow(display);
          context_info.readable = DefaultRootWindow(display);

          if (!context_info.try_acquire()) {
            __fatalM(gl)
            << "unable to attach context to default drawable.";
          }
        }
      }
    }
  }

#else

  glfwInit();
  GLFWvidmode mode;
  glfwGetDesktopMode(&mode);

  glfwOpenWindowHint(GLFW_WINDOW_NO_RESIZE, GL_TRUE);
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3);
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 3);
  glfwOpenWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  glfwOpenWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_FALSE);
  glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow window = glfwOpenWindow(1, 1, GLFW_WINDOWED, "framebuffer", NULL);
  glfwIconifyWindow(window);

#endif

  namespace gic = ::gtulu::internal::gic;
  namespace gicp = ::gtulu::internal::gicp;

  ::std::string const gl_vendor = gic::gl_vendor::get();
  ::std::string const gl_renderer = gic::gl_renderer::get();
  ::std::string const gl_version = gic::gl_version::get();
  ::std::string const gl_shading_language_version = gic::gl_shading_language_version::get();

  __info
  << gicp::gl_vendor() << ": " << gl_vendor;
  __info
  << gicp::gl_renderer() << ": " << gl_renderer;
  __info
  << gicp::gl_version() << ": " << gl_version;
  __info
  << gicp::gl_shading_language_version() << ": " << gl_shading_language_version;
}

void close_gl() {
#ifdef GTULU_PLATFORM_LINUX

  ::gtulu::internal::context::current_context_info context_info;
  context_info.release();
  XCloseDisplay(context_info.display);

#else
  glfwCloseWindow(glfwGetCurrentWindow());
  glfwTerminate();

#endif
}

void main_loop() {
}

void swap_buffers() {
#ifdef GTULU_PLATFORM_LINUX
  glXSwapBuffers(glXGetCurrentDisplay(), glXGetCurrentDrawable());

#else
  glfwSwapBuffers();

#endif
}
