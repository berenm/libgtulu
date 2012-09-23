/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
#include "gtulu_opengl_pch.hpp"

#include "gtulu/namespaces.hpp"

#include "gtulu/platform.hpp"
#include "gtulu/internal/context.hpp"
#include "gtulu/internal/context_info.hpp"

#ifdef GTULU_PLATFORM_LINUX

#else // ifdef GTULU_PLATFORM_LINUX
# include <GL/glfw3.h>

#endif // ifdef GTULU_PLATFORM_LINUX

#include <iostream>

void init_gl(std::int32_t argc, char** argv) {
  using namespace gtulu::internal;

#ifdef GTULU_PLATFORM_LINUX

#else // ifdef GTULU_PLATFORM_LINUX

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

#endif // ifdef GTULU_PLATFORM_LINUX

  std::string const gl_vendor                   = ctx::gl_vendor::get();
  std::string const gl_renderer                 = ctx::gl_renderer::get();
  std::string const gl_version                  = ctx::gl_version::get();
  std::string const gl_shading_language_version = ctx::gl_shading_language_version::get();

  __gtulu_info() << ctx::parameter::gl_vendor() << ": " << gl_vendor;
  __gtulu_info() << ctx::parameter::gl_renderer() << ": " << gl_renderer;
  __gtulu_info() << ctx::parameter::gl_version() << ": " << gl_version;
  __gtulu_info() << ctx::parameter::gl_shading_language_version() << ": " << gl_shading_language_version;
}

void close_gl() {
#ifdef GTULU_PLATFORM_LINUX

#else // ifdef GTULU_PLATFORM_LINUX
  glfwCloseWindow(glfwGetCurrentWindow());
  glfwTerminate();

#endif // ifdef GTULU_PLATFORM_LINUX
}

void main_loop() {}

void swap_buffers() {
#ifdef GTULU_PLATFORM_LINUX
  glXSwapBuffers(glXGetCurrentDisplay(), glXGetCurrentDrawable());

#else // ifdef GTULU_PLATFORM_LINUX
  glfwSwapBuffers();

#endif // ifdef GTULU_PLATFORM_LINUX
}
