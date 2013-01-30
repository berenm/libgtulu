cmake_minimum_required(VERSION 2.8)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
include(CMakeExtraBootstrap)

include(GNUInstallDirs)
include(ParseVersion)
include(AddSubmodule)
include(GtuluCompiler)
include(FindCotire)
include(FindCXX11)
include(FindOpenGL)
include(FixCCache)
include(FixStaticLink)

project(libgtulu CXX)
parse_version(libgtulu DEBIAN)

add_submodule(logging lib/logging
  INCLUDE_DIRS include lib/boost-log
)
add_submodule(boost-gil-contributions lib/boost-gil-contributions
  INCLUDE_DIRS .
)
add_submodule(registry lib/registry
  INCLUDE_DIRS include
)

find_package(Boost COMPONENTS program_options filesystem system regex thread chrono REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(PANGO REQUIRED pangocairo)

include_directories(
  ${PANGO_INCLUDE_DIRS}
  ${OPENGL_INCLUDE_DIRS}
  ${Boost_INCLUDE_DIRS}
)
link_directories(
  ${PANGO_LIBRARY_DIRS}
  ${OPENGL_LIBRARY_DIRS}
  ${Boost_LIBRARY_DIRS}
)

if(NOT EXISTS "scripts/clang" OR "${GTULU_FORCE_DOWNLOAD}" EQUAL 1)
  file(MAKE_DIRECTORY "scripts/clang")
  message(STATUS "Downloading clang/__init__.py...")
  file(DOWNLOAD "http://llvm.org/svn/llvm-project/cfe/trunk/bindings/python/clang/__init__.py" "scripts/clang/__init__.py")

  message(STATUS "Downloading clang/cindex.py...")
  file(DOWNLOAD "http://llvm.org/svn/llvm-project/cfe/trunk/bindings/python/clang/cindex.py" "scripts/clang/cindex.py")
endif()

include_directories(include)

# -------------------------------------------------------------------------
# libgtulu
file(GLOB_RECURSE libgtulu_SOURCES src/lib/*.cpp)
add_library(gtulu SHARED
  ${libgtulu_SOURCES}
)
set_target_properties(gtulu PROPERTIES
  VERSION   ${libgtulu_VERSION}
  SOVERSION ${libgtulu_SOVERSION}
  SONAME    libgtulu${libgtulu_SOVERSION}
  COTIRE_PREFIX_HEADER_INCLUDE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/include/gtulu_opengl_pch.hpp"
)
target_link_libraries(gtulu
  ${PANGO_LIBRARIES}
  ${OPENGL_LIBRARIES}
  ${Boost_LIBRARIES}
  logging
)
add_definitions(-DBOOST_BUILD_PCH_ENABLED)

# -------------------------------------------------------------------------
# gtulu-compiler
file(GLOB_RECURSE GTULU_COMPILER_SOURCES src/bin/compile.cpp)
add_executable(gtulu-compiler
  ${GTULU_COMPILER_SOURCES}
)
target_link_libraries(gtulu-compiler
  gtulu
  ${Boost_LIBRARIES}
)

# -------------------------------------------------------------------------
# installation
install(TARGETS gtulu gtulu-compiler
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
install(DIRECTORY include/gtulu
                  include/meta
                  ${registry_SOURCE_DIR}/include/EGL
                  ${registry_SOURCE_DIR}/include/GL
                  ${registry_SOURCE_DIR}/include/GLES2
                  ${registry_SOURCE_DIR}/include/KHR
                  ${boost-gil-contributions_SOURCE_DIR}/boost
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

# -------------------------------------------------------------------------
# tests
if(CMAKE_BUILD_TESTS)
  enable_testing()

  execute_process(COMMAND ${CMAKE_COMMAND} -E copy_directory ${CMAKE_CURRENT_SOURCE_DIR}/test/data ${CMAKE_CURRENT_BINARY_DIR}/test/data)

  add_gtulu_program(test1
    SOURCES     test/shaders/test1.vs test/shaders/test1.fs
    DESTINATION test/generated
  )
  add_gtulu_program(test2
    SOURCES     test/shaders/test2.vs test/shaders/test2.fs
    DESTINATION test/generated
  )
  add_gtulu_program(test3
    SOURCES     test/shaders/test3.vs test/shaders/test3.fs
    DESTINATION test/generated
  )
  add_gtulu_program(print_image
    SOURCES     test/shaders/print_image.vs test/shaders/print_image.fs
    DESTINATION test/generated
  )
  add_gtulu_program(plot_image
    SOURCES     test/shaders/plot_image.vs test/shaders/plot_image.fs
    DESTINATION test/generated
  )

  add_executable(unit-test-1
    test/test1.cpp
    ${GTULU_PROGRAM_TEST1_SOURCES}
  )
  target_link_libraries(unit-test-1 gtulu)
  add_test(unit-test-1 unit-test-1)

  add_executable(unit-test-2
    test/test2.cpp
    ${GTULU_PROGRAM_TEST2_SOURCES}
  )
  target_link_libraries(unit-test-2 gtulu)
  add_test(unit-test-2 unit-test-2)

  add_executable(unit-test-3
    test/test3.cpp
    ${GTULU_PROGRAM_TEST3_SOURCES}
  )
  target_link_libraries(unit-test-3 gtulu)
  add_test(unit-test-3 unit-test-3)

  add_executable(unit-test-context-switch
    test/context_switch.cpp
  )
  target_link_libraries(unit-test-context-switch gtulu)
  add_test(unit-test-context-switch unit-test-context-switch)

  add_executable(unit-test-print-image
    test/print_image.cpp
    ${GTULU_PROGRAM_PRINT_IMAGE_SOURCES}
  )
  target_link_libraries(unit-test-print-image gtulu png12)
  add_test(unit-test-print-image unit-test-print-image)

  add_executable(unit-test-pango-render
    test/pango_render_test.cpp
    ${GTULU_PROGRAM_PRINT_IMAGE_SOURCES}
  )
  target_link_libraries(unit-test-pango-render gtulu png12)
  add_test(unit-test-pango-render unit-test-pango-render)

  add_executable(unit-test-pango-create
    test/pango_create_test.cpp
    ${GTULU_PROGRAM_PRINT_IMAGE_SOURCES}
  )
  target_link_libraries(unit-test-pango-create gtulu png12)
  add_test(unit-test-pango-create unit-test-pango-create)

  add_executable(unit-test-plot-image
    test/plot_image.cpp
    ${GTULU_PROGRAM_PLOT_IMAGE_SOURCES}
  )
  target_link_libraries(unit-test-plot-image gtulu png12)
  # add_test(unit-test-plot-image unit-test-plot-image)
endif()
