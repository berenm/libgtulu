/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#include <GL/freeglut.h>

#include <iostream>

#include "common.hpp"

#include <logging/logging.hpp>

static void reshape(::boost::int32_t w, ::boost::int32_t h) {
  glViewport(0, 0, w, h);
}

void init_gl(::boost::int32_t argc, char** argv) {
  glutInit(&argc, argv);

  glutInitContextVersion(3, 3);
  glutInitContextFlags(GLUT_DEBUG); // GLUT_FORWARD_COMPATIBLE
  glutInitContextProfile(GLUT_CORE_PROFILE); // GLUT_COMPATIBILITY_PROFILE
  glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
  glutInitWindowSize(500, 500);
  glutInitWindowPosition(100, 100);

  glutCreateWindow(argv[0]);

  glutSetOption(GLUT_ACTION_ON_WINDOW_CLOSE, GLUT_ACTION_GLUTMAINLOOP_RETURNS);
  glutDisplayFunc(do_frame); // Register The Display Function
  glutReshapeFunc(reshape);

  __info
    << "Vendor: " << glGetString(GL_VENDOR);
  __info
    << "Renderer: " << glGetString(GL_RENDERER);
  __info
    << "Version: " << glGetString(GL_VERSION);
  __info
    << "GLSL: " << glGetString(GL_SHADING_LANGUAGE_VERSION);
}

void close_gl() {
}

void main_loop() {
  glutMainLoop();
}

void swap_buffers() {
  glutSwapBuffers();
}
