/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#include "gtulu/namespaces.hpp"

#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>

#include "gtulu/internal/context.hpp"
#include "generated/client_program_format.hpp"

#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage.hpp"

int main(int argc, char *argv[]) {
  using namespace gtulu::internal;
  namespace bgil = ::boost::gil;

  ctx::context::create(argc, argv);

  float const positions_data[] = { -1.0f, 1.0f, -1.0f, -1.0f, 1.0f, 1.0f, 1.0f, -1.0f };
  float const coordinates_data[] = { 0.0f, 40.0f, 0.0f, 0.0f, 80.0f, 40.0f, 80.0f, 0.0f };
  std::uint8_t const indexes_data[] = { 0, 1, 2, 3 };

  obj::buffer< fdat::gl_float > positions(positions_data);
  obj::buffer< fdat::gl_float > coordinates(coordinates_data);
  obj::buffer< fdat::gl_unsigned_byte > indexes(indexes_data);

  obj::program< fprg::client_program_format > program;
  auto framebuffer = program.new_framebuffer();
  auto vertexarray = program.new_vertexarray();

  // Bind the vertex attribute named "position" to the positions buffer and "texture_position" to the texture_positions buffer.
  vertexarray->set_position(positions);
  vertexarray->set_coordinates(coordinates);

  // Select default texture format for 2d texture.
  typedef ftex::select_format< ftgt::gl_texture_2d, fcmn::component::red_green_blue, fnum::ufixed8_ >::type texture_format;
  typedef ftex::select_format< ftgt::gl_texture_3d, fcmn::component::red_green_blue, fnum::ufixed8_ >::type texture_format_3d;
  typedef ftex::select_format< ftgt::gl_texture_2d, fcmn::component::red_green_blue, fnum::uint8_ >::type utexture_format;
  obj::texture< utexture_format > characters;
  obj::texture< utexture_format > tiles;
  obj::texture< utexture_format > tiles_color;
  obj::texture< texture_format_3d > tilesets;
  obj::texture< texture_format > output_texture;

  /* ----- PNG Version ---------------------------------------------------------------------------------------------- */

  // Bind the uniform sampler named "background" to texture.
  program.set_characters(characters);
  program.set_tiles(tiles);
  program.set_tiles_color(tiles_color);
  program.set_tilesets(tilesets);

  program.set_use_tile(0);

  framebuffer->set_viewport(500, 500, 10, 0, 0, 0);
  framebuffer->set_output_image(output_texture);
  vertexarray->draw< drw::mode::gl_triangle_strip >(program, *framebuffer, indexes, 4);

//  __gtulu_info() << "reading output image from GPU...";
//  sto::copy(output_image, output_texture);
//  __gtulu_info() << "read output image from GPU.";
//
//  __gtulu_info() << "writing png output image to disk...";
//  bgil::write_view("test/data/mona_lisa_out.png", boost::gil::view(output_image), bgil::png_tag());
  __gtulu_info() << "written png output image to disk.";

  ctx::context::destroy();
  return 0;
}
