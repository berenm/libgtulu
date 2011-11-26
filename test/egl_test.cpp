/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 */

#include <EGL/egl.h>
#include <GL/glx.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

template< int Parameter >
void print_config_attrib(EGLDisplay& display, EGLConfig& config) {
  EGLint value;
  eglGetConfigAttrib(display, config, Parameter, &value);

  if (value > 1024 * 1024) {
    std::cout << std::setw(5) << (value / 1024 / 1024) << "M ";
  } else if (value > 1024) {
    std::cout << std::setw(5) << (value / 1024) << "k ";
  } else {
    std::cout << std::setw(6) << value << " ";
  }
}

template< >
void print_config_attrib< EGL_COLOR_BUFFER_TYPE >(EGLDisplay& display, EGLConfig& config) {
  EGLint value;
  eglGetConfigAttrib(display, config, EGL_COLOR_BUFFER_TYPE, &value);
  switch (value) {
    case EGL_RGB_BUFFER:
      std::cout << "   RGB ";
      break;
    case EGL_LUMINANCE_BUFFER:
      std::cout << "   LUM ";
      break;
    default:
      std::cout << "     ? ";
      break;
  }
}

template< >
void print_config_attrib< EGL_CONFIG_CAVEAT >(EGLDisplay& display, EGLConfig& config) {
  EGLint value;
  eglGetConfigAttrib(display, config, EGL_CONFIG_CAVEAT, &value);
  switch (value) {
    case EGL_NONE:
      std::cout << "     - ";
      break;
    case EGL_SLOW_CONFIG:
      std::cout << "  SLOW ";
      break;
    case EGL_NON_CONFORMANT_CONFIG:
      std::cout << " NCONF ";
      break;
    default:
      std::cout << "     ? ";
      break;
  }
}

template< >
void print_config_attrib< EGL_CONFORMANT >(EGLDisplay& display, EGLConfig& config) {
  EGLint value;
  eglGetConfigAttrib(display, config, EGL_CONFORMANT, &value);
  char conf[] = ".-..-. ";
  if (value & EGL_OPENGL_BIT) {
    conf[0] = 'G';
  }
  if (value & EGL_OPENGL_ES_BIT) {
    conf[2] = 'E';
    conf[3] = '1';
  }
  if (value & EGL_OPENGL_ES2_BIT) {
    conf[2] = 'E';
    conf[3] = '2';
  }
  if (value & EGL_OPENVG_BIT) {
    conf[5] = 'V';
  }
  std::cout << conf;
}

template< >
void print_config_attrib< EGL_RENDERABLE_TYPE >(EGLDisplay& display, EGLConfig& config) {
  EGLint value;
  eglGetConfigAttrib(display, config, EGL_RENDERABLE_TYPE, &value);
  char rdr[] = ".-..-. ";
  if (value & EGL_OPENGL_BIT) {
    rdr[0] = 'G';
  }
  if (value & EGL_OPENGL_ES_BIT) {
    rdr[2] = 'E';
    rdr[3] = '1';
  }
  if (value & EGL_OPENGL_ES2_BIT) {
    rdr[2] = 'E';
    rdr[3] = '2';
  }
  if (value & EGL_OPENVG_BIT) {
    rdr[5] = 'V';
  }
  std::cout << rdr;
}

template< >
void print_config_attrib< EGL_SURFACE_TYPE >(EGLDisplay& display, EGLConfig& config) {
  EGLint value;
  eglGetConfigAttrib(display, config, EGL_SURFACE_TYPE, &value);
  char surf[] = ".......";
  if (value & EGL_WINDOW_BIT) {
    surf[0] = 'W';
  }
  if (value & EGL_PIXMAP_BIT) {
    surf[1] = 'X';
  }
  if (value & EGL_PBUFFER_BIT) {
    surf[2] = 'P';
  }
  if (value & EGL_MULTISAMPLE_RESOLVE_BOX_BIT) {
    surf[3] = 'B';
  }
  if (value & EGL_SWAP_BEHAVIOR_PRESERVED_BIT) {
    surf[4] = 'S';
  }
  if (value & EGL_VG_COLORSPACE_LINEAR_BIT) {
    surf[5] = 'C';
  }
  if (value & EGL_VG_ALPHA_FORMAT_PRE_BIT) {
    surf[6] = 'A';
  }
  std::cout << surf;
}

template< >
void print_config_attrib< EGL_TRANSPARENT_TYPE >(EGLDisplay& display, EGLConfig& config) {
  EGLint value;
  eglGetConfigAttrib(display, config, EGL_TRANSPARENT_TYPE, &value);
  switch (value) {
    case EGL_NONE:
      std::cout << "     - ";
      break;
    case EGL_TRANSPARENT_RGB:
      std::cout << "   RGB ";
      break;
    default:
      std::cout << "     ? ";
      break;
  }
}

int main(int argc, char **argv) {
  setenv("EGL_DRIVER", "egl_glx", 0);

  EGLNativeDisplayType native_display = XOpenDisplay(NULL);
  EGLDisplay display = eglGetDisplay(native_display);

  EGLint major;
  EGLint minor;
  eglInitialize(display, &major, &minor);

  std::cout << "EGL_CLIENT_APIS: " << eglQueryString(display, EGL_CLIENT_APIS) << std::endl;
  std::cout << "EGL_EXTENSIONS: " << eglQueryString(display, EGL_EXTENSIONS) << std::endl;
  std::cout << "EGL_VENDOR: " << eglQueryString(display, EGL_VENDOR) << std::endl;
  std::cout << "EGL_VERSION: " << eglQueryString(display, EGL_VERSION) << std::endl;

  EGLint config_count;
  eglGetConfigs(display, NULL, 0, &config_count);

  EGLConfig* configs = new EGLConfig[config_count];
  eglGetConfigs(display, configs, config_count, &config_count);

  EGLint attributes[] = { EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT, EGL_SURFACE_TYPE, EGL_WINDOW_BIT, EGL_NONE };
  eglChooseConfig(display, attributes, configs, config_count, &config_count);

  std::cout
      << "BUF_SZ RED_SZ GRE_SZ BLU_SZ LUM_SZ ALP_SZ AMS_SZ  T_RGB T_RGBA COL_BF CAVEAT     ID CONFMT DEP_SZ  LEVEL M_PB_W M_PB_H M_PB_P MX_SWP MN_SWP NTV_RD NTV_VI NTV_VT  RDR_T SM_BUF SM_NUM STC_SZ SURF_T TS_TYP TS_RED TS_GRE TS_BLU\n";
  for (size_t i = 0; i < config_count; ++i) {
    EGLConfig& config = configs[i];
    EGLint value;
    print_config_attrib< EGL_BUFFER_SIZE >(display, config);
    print_config_attrib< EGL_RED_SIZE >(display, config);
    print_config_attrib< EGL_GREEN_SIZE >(display, config);
    print_config_attrib< EGL_BLUE_SIZE >(display, config);
    print_config_attrib< EGL_LUMINANCE_SIZE >(display, config);
    print_config_attrib< EGL_ALPHA_SIZE >(display, config);
    print_config_attrib< EGL_ALPHA_MASK_SIZE >(display, config);
    print_config_attrib< EGL_BIND_TO_TEXTURE_RGB >(display, config);
    print_config_attrib< EGL_BIND_TO_TEXTURE_RGBA >(display, config);
    print_config_attrib< EGL_COLOR_BUFFER_TYPE >(display, config);
    print_config_attrib< EGL_CONFIG_CAVEAT >(display, config);
    print_config_attrib< EGL_CONFIG_ID >(display, config);
    print_config_attrib< EGL_CONFORMANT >(display, config);
    print_config_attrib< EGL_DEPTH_SIZE >(display, config);
    print_config_attrib< EGL_LEVEL >(display, config);
    print_config_attrib< EGL_MAX_PBUFFER_WIDTH >(display, config);
    print_config_attrib< EGL_MAX_PBUFFER_HEIGHT >(display, config);
    print_config_attrib< EGL_MAX_PBUFFER_PIXELS >(display, config);
    print_config_attrib< EGL_MAX_SWAP_INTERVAL >(display, config);
    print_config_attrib< EGL_MIN_SWAP_INTERVAL >(display, config);
    print_config_attrib< EGL_NATIVE_RENDERABLE >(display, config);
    print_config_attrib< EGL_NATIVE_VISUAL_ID >(display, config);
    print_config_attrib< EGL_NATIVE_VISUAL_TYPE >(display, config);
    print_config_attrib< EGL_RENDERABLE_TYPE >(display, config);
    print_config_attrib< EGL_SAMPLE_BUFFERS >(display, config);
    print_config_attrib< EGL_SAMPLES >(display, config);
    print_config_attrib< EGL_STENCIL_SIZE >(display, config);
    print_config_attrib< EGL_SURFACE_TYPE >(display, config);
    print_config_attrib< EGL_TRANSPARENT_TYPE >(display, config);
    print_config_attrib< EGL_TRANSPARENT_RED_VALUE >(display, config);
    print_config_attrib< EGL_TRANSPARENT_GREEN_VALUE >(display, config);
    print_config_attrib< EGL_TRANSPARENT_BLUE_VALUE >(display, config);
    std::cout << "\n";
  }

  eglCreateWindowSurface(display, configs[0], NULL, NULL);

  delete[] configs;

  eglTerminate(display);
}
