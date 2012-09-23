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
#include "generated/plot_image_program_format.hpp"

#include "gtulu/internal/storage/data/traits.hpp"
#include "gtulu/internal/storage.hpp"

int main(int argc, char* argv[]) {
  using namespace gtulu::internal;
  namespace bgil = ::boost::gil;

  ctx::context::create(argc, argv);

  std::string output_file = "plot-output.png";
  std::size_t width       = 4096;
  std::size_t height      = 1024;
  float       max_y       = 9.0;

  if (argc > 1)
    output_file = argv[1];

  if (argc > 2)
    width = boost::lexical_cast< std::size_t >(argv[2]);

  if (argc > 3)
    height = boost::lexical_cast< std::size_t >(argv[3]);

  if (argc > 4)
    max_y = boost::lexical_cast< float >(argv[4]);

  std::vector< std::size_t > x_positions;
  std::vector< std::size_t > y_positions;

  std::size_t max_x = std::numeric_limits< std::size_t >::min();
  std::size_t min_x = std::numeric_limits< std::size_t >::max();

  while (std::cin.good()) {
    std::size_t x_position;
    std::cin >> x_position;
    x_positions.push_back(x_position);
    max_x = std::max(x_position, max_x);

    if (min_x == std::numeric_limits< std::size_t >::max()) {
      min_x = x_position;
    }

    std::size_t y_position;
    std::cin >> y_position;
    y_positions.push_back(y_position);

    // max_y = std::max(static_cast< float >(log(y_position) / log(10)), max_y);
  }

  std::vector< float > host_positions;

  auto x_it = x_positions.begin();
  auto y_it = y_positions.begin();
  for (; x_it != x_positions.end() && y_it != y_positions.end(); ++x_it, ++y_it) {
    host_positions.push_back(2.0 * (*x_it - min_x) / (max_x - min_x) - 1.0);
    host_positions.push_back(-2.0 * log(*y_it) / log(10) / (max_y) + 1.0);
  }

  obj::buffer< fdat::gl_float > positions(host_positions);

  obj::program< fprg::plot_image_program_format > program;

  auto framebuffer = program.new_framebuffer();
  auto vertexarray = program.new_vertexarray();
  vertexarray->set_position(positions);

  bgil::rgb8_image_t output_image;
  output_image.recreate(width, height);

  // Select default texture format for 2d texture.
  typedef ftex::select_format< ftgt::gl_texture_2d, fcmn::component::red_green_blue, fnum::ufixed8_ >::type texture_format;
  obj::texture< texture_format > output_texture(width, height);

  /* ----- PNG Version ---------------------------------------------------------------------------------------------- */
  glEnable(GL_LINE_SMOOTH);
  glEnable(GL_POLYGON_SMOOTH);
  glEnable(GL_VERTEX_PROGRAM_POINT_SIZE);
  glEnable(GL_MULTISAMPLE);
  glHint(GL_LINE_SMOOTH_HINT, GL_NICEST);
  glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST);
  glEnable(GL_BLEND);
  glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

  framebuffer->set_viewport(output_image.width(), output_image.height(), 10, 0, 0, 0);
  framebuffer->set_output_image(output_texture);

  glClearColor(1.0, 1.0, 1.0, 1.0);
  glClear(GL_COLOR_BUFFER_BIT);

  vertexarray->draw< drw::mode::gl_points >(program, *framebuffer, 0, host_positions.size() / 2);
  __gtulu_info() << "resized images on GPU.";

  __gtulu_info() << "reading output image from GPU...";
  sto::copy(output_image, output_texture);
  __gtulu_info() << "read output image from GPU.";

  __gtulu_info() << "writing png output image to disk...";
  bgil::write_view(output_file, boost::gil::view(output_image), bgil::png_tag());
  __gtulu_info() << "written png output image to disk.";

  ctx::context::destroy();
  return 0;
} // main
