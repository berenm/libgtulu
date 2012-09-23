/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/context.hpp"
#include "generated/test1_program_format.hpp"

int main(int argc, char* argv[]) {
  using namespace gtulu::internal;

  context::context::create(argc, argv);

  // Select default texture format for 2d texture.
  typedef ftex::select_format< ftgt::gl_texture_2d, fcmn::component::red_green_blue, fnum::float32_ >::type texture_format;
  obj::texture< texture_format > texture;

  // New data buffers.
  float                                 postisions_data[] = {
    -0.9f, 0.9f, -0.9f, -0.9f, 0.9f, 0.9f, 0.9f, -0.9f
  };
  float                                 texture_positions_data[] = { 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f };
  std::uint8_t                          indexes_data[]           = { 0, 1, 2, 3 };
  obj::buffer< fdat::gl_float >         positions(postisions_data);
  obj::buffer< fdat::gl_float >         texture_positions(texture_positions_data);
  obj::buffer< fdat::gl_unsigned_byte > indexes(indexes_data);

  // New shader program.
  obj::program< fprg::test1_program_format > program;

  // Bind the uniform sampler named "background" to texture.
  program.set_background(texture);

  // Get a new vertexarray to set vertex attributes.
  boost::shared_ptr< fprg::test1_program_format::vertexarray_t > vertexarray = program.new_vertexarray();

  // Bind the vertex attribute named "position" to the positions buffer and "texture_position" to the texture_positions buffer.
  vertexarray->set_position(positions);
  vertexarray->set_texture_position(texture_positions);

  // Draw the elements described with this vertex array, the given indexes buffer and the default framebuffer (draw to window).
  vertexarray->draw< drw::mode::gl_triangle_strip >(program, *program.get_default_framebuffer(), indexes, 4);

  context::context::destroy();
  return 0;
}
