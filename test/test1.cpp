/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#include "common.hpp"
#include "generated/test1_program_format.hpp"

using namespace gtulu::internal;

int main(int argc, char *argv[]) {
  init_gl(argc, argv);

  // Select default texture format for 2d texture.
  typedef ftext::texture_format_selector< ft::gl_texture_2d >::format texture_format;
  gio::texture< texture_format > texture;

  // New data buffers.
  float postisions_data[] = { -0.9f, 0.9f, -0.9f, -0.9f, 0.9f, 0.9f, 0.9f, -0.9f };
  float texture_positions_data[] = { 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f };
  ::std::uint8_t indexes_data[] = { 0, 1, 2, 3 };
  gio::buffer< fd::gl_float > positions(8, postisions_data);
  gio::buffer< fd::gl_float > texture_positions(8, texture_positions_data);
  gio::buffer< fd::gl_unsigned_byte > indexes(4, indexes_data);

  // New shader program.
  gio::program< gifp::test1_program_format > program;

  // Bind the uniform sampler named "background" to texture.
  program.set_background(texture);

  // Get a new vertexarray to set vertex attributes.
  ::boost::shared_ptr< gifp::test1_program_format::vertexarray_t > vertexarray = program.new_vertexarray();

  // Bind the vertex attribute named "position" to the positions buffer and "texture_position" to the texture_positions buffer.
  vertexarray->set_position(positions);
  vertexarray->set_texture_position(texture_positions);

  // Draw the elements described with this vertex array, the given indexes buffer and the default framebuffer (draw to window).
  vertexarray->draw< gidm::gl_triangle_strip >(program, *program.get_default_framebuffer(), indexes, 4);

  close_gl();
  return 0;
}
