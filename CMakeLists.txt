cmake_minimum_required(VERSION 2.8)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

include(GNUInstallDirs)
include(GtuluCompiler)

project(libgtulu CXX)

find_package(Boost COMPONENTS program_options filesystem system regex thread chrono REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(PANGO    REQUIRED pangocairo)
#pkg_check_modules(OPENGL   REQUIRED gl) # On debian, pkg-config finds the MESA libGL.so, this isn't right.
set(OPENGL_LIBRARIES :libGL.so.1)

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

if(NOT EXISTS "include/GL3/gl3.h")
  file(MAKE_DIRECTORY "include/GL3")
  file(DOWNLOAD "http://www.opengl.org/registry/api/gl3.h" "${CMAKE_SOURCE_DIR}/include/GL3/gl3.h")
endif()


# -------------------------------------------------------------------------
# project version
file(READ version LIBGTULU_VERSION)
string(REGEX REPLACE "\\..*$" "" LIBGTULU_SOVERSION "${LIBGTULU_VERSION}")

include_directories(include)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

# -------------------------------------------------------------------------
# libgtulu
file(GLOB_RECURSE LIBGTULU_SOURCES src/lib/*.cpp)
add_library(gtulu SHARED
  ${LIBGTULU_SOURCES}
)
set_target_properties(gtulu PROPERTIES
  VERSION   "${LIBGTULU_VERSION}"
  SOVERSION "${LIBGTULU_SOVERSION}"
  SONAME    "libgtulu${LIBGTULU_SOVERSION}"
)
target_link_libraries(gtulu
  ${PANGO_LIBRARIES}
  ${OPENGL_LIBRARIES}
  ${Boost_LIBRARIES}
)

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
install(DIRECTORY include
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

# -------------------------------------------------------------------------
# tests
enable_testing()

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

if(EXISTS "${Boost_INCLUDE_DIRS}/boost/gil/extensions/io_new/png_read.hpp")
  add_executable(unit-test-print-image
    test/print_image.cpp
    ${GTULU_PROGRAM_PRINT_IMAGE_SOURCES}
  )
  target_link_libraries(unit-test-print-image gtulu)
  add_test(unit-test-print-image unit-test-print-image)

  add_executable(unit-test-pango
    test/pango_test.cpp
    ${GTULU_PROGRAM_PRINT_IMAGE_SOURCES}
  )
  target_link_libraries(unit-test-pango gtulu)
  add_test(unit-test-pango unit-test-pango)
endif()
