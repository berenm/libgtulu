/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#include "gtulu/namespaces.hpp"

#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/gil/extension/io_new/png_read.hpp>
#include <boost/gil/extension/io_new/png_write.hpp>
#include <boost/gil/extension/io_new/jpeg_read.hpp>
#include <boost/gil/extension/io_new/jpeg_write.hpp>

#include "gtulu/internal/context.hpp"
#include "generated/print_image_program_format.hpp"

#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage.hpp"

int main(int argc, char* argv[]) {
  using namespace gtulu::internal;
  namespace bgil = ::boost::gil;

  ctx::context::create(argc, argv);

  float const        positions_data[] = {
    -1.0f, 1.0f, -1.0f, -1.0f, 1.0f, 1.0f, 1.0f, -1.0f
  };
  float const        texture_positions_data[] = { 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f, 0.0f };
  std::uint8_t const indexes_data[]           = { 0, 1, 2, 3 };

  obj::buffer< fdat::gl_float >         positions(positions_data);
  obj::buffer< fdat::gl_float >         texture_positions(texture_positions_data);
  obj::buffer< fdat::gl_unsigned_byte > indexes(indexes_data);

  obj::program< fprg::print_image_program_format > program;

  auto framebuffer = program.new_framebuffer();

  // Get a new vertexarray to set vertex attributes.
  auto vertexarray = program.new_vertexarray();

  // Bind the vertex attribute named "position" to the positions buffer and "texture_position" to the texture_positions buffer.
  vertexarray->set_position(positions);
  vertexarray->set_texture_position(texture_positions);

  bgil::rgb8_image_t image;
  bgil::rgb8_image_t output_image;

  // Select default texture format for 2d texture.
  typedef ftex::select_format< ftgt::gl_texture_2d, fcmn::component::red_green_blue, fnum::ufixed8_ >::type texture_format;
  obj::texture< texture_format > texture;
  obj::texture< texture_format > output_texture;

  /* ----- PNG Version ---------------------------------------------------------------------------------------------- */

  __gtulu_info() << "loading png image from disk...";
  bgil::read_image("test/data/mona_lisa.png", image, bgil::png_tag());
  __gtulu_info() << "loaded png image from disk.";

  __gtulu_info() << "initializing output image...";
  output_image.recreate(image.width() / 4, image.height() / 4);
  output_texture.resize(image.width() / 4, image.height() / 4);
  __gtulu_info() << "initialized output image.";

  __gtulu_info() << "loading images to GPU...";
  sto::init(texture, image);
  __gtulu_info() << "loaded images to GPU.";

  __gtulu_info() << "resizing images on GPU...";

  // Bind the uniform sampler named "background" to texture.
  program.set_background(texture);

  framebuffer->set_viewport(output_image.width(), output_image.height(), 10, 0, 0, 0);
  framebuffer->set_output_image(output_texture);
  vertexarray->draw< drw::mode::gl_triangle_strip >(program, *framebuffer, indexes, 4);
  __gtulu_info() << "resized images on GPU.";

  __gtulu_info() << "reading output image from GPU...";
  sto::copy(output_image, output_texture);
  __gtulu_info() << "read output image from GPU.";

  __gtulu_info() << "writing png output image to disk...";
  bgil::write_view("test/data/mona_lisa_out.png", boost::gil::view(output_image), bgil::png_tag());
  __gtulu_info() << "written png output image to disk.";

  // /* ----- JPEG Version --------------------------------------------------------------------------------------------- */
  //
  // __gtulu_info() << "loading jpg image from disk...";
  // bgil::read_image("test/data/mona_lisa.jpg", image, bgil::jpeg_tag());
  // __gtulu_info() << "loaded jpg image from disk.";
  //
  // __gtulu_info() << "initializing output image...";
  // output_image.recreate(image.width() / 4, image.height() / 4);
  // output_texture.resize(image.width() / 4, image.height() / 4);
  // __gtulu_info() << "initialized output image.";
  //
  // __gtulu_info() << "loading images to GPU...";
  // texture.resize(image.width(), image.height());
  // sto::copy(texture, image);
  // __gtulu_info() << "loaded images to GPU.";
  //
  // __gtulu_info() << "resizing images on GPU...";
  // // Bind the uniform sampler named "background" to texture.
  // program.set_background(texture);
  //
  // framebuffer->set_viewport(output_image.width(), output_image.height(), 10, 0, 0, 0);
  // framebuffer->set_output_image(output_texture);
  // vertexarray->draw< drw::mode::gl_triangle_strip >(program, *framebuffer, indexes, 4);
  // __gtulu_info() << "resized images on GPU.";
  //
  // __gtulu_info() << "reading output image from GPU...";
  // sto::copy(output_image, output_texture);
  // __gtulu_info() << "read output image from GPU.";
  //
  // __gtulu_info() << "writing jpg output image to disk...";
  // bgil::write_view("test/data/mona_lisa_out.jpg", boost::gil::view(output_image), bgil::jpeg_tag());
  // __gtulu_info() << "written jpg output image to disk.";

  ctx::context::destroy();
  return 0;
} // main
