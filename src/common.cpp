/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#include "gtulu/internal/context.hpp"
#include <logging/logging.hpp>

#include <GL/glfw.h>

#include <iostream>
#include "common.hpp"

void init_gl(::std::int32_t argc, char** argv) {

  glfwInit();
  GLFWvidmode mode;
  glfwGetDesktopMode(&mode);

  glfwOpenWindowHint(GLFW_WINDOW_NO_RESIZE, GL_TRUE);
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MAJOR, 3);
  glfwOpenWindowHint(GLFW_OPENGL_VERSION_MINOR, 3);
  glfwOpenWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
  glfwOpenWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_FALSE);
  glfwOpenWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  glfwOpenWindow(1, 1, mode.RedBits, mode.GreenBits, mode.BlueBits, 8, 8, 8, GLFW_WINDOW);

  namespace gic = ::gtulu::internal::gic;
  namespace gicp = ::gtulu::internal::gicp;

  ::std::string const gl_vendor = gic::gl_vendor::get();
  ::std::string const gl_renderer = gic::gl_renderer::get();
  ::std::string const gl_version = gic::gl_version::get();
  ::std::string const gl_shading_language_version = gic::gl_shading_language_version::get();

  __info << gicp::gl_vendor() << ": " << gl_vendor;
  __info << gicp::gl_renderer() << ": " << gl_renderer;
  __info << gicp::gl_version() << ": " << gl_version;
  __info << gicp::gl_shading_language_version() << ": " << gl_shading_language_version;
}

void close_gl() {
  glfwCloseWindow();
  glfwTerminate();
}

void main_loop() {
}

void swap_buffers() {
  glfwSwapBuffers();
}
