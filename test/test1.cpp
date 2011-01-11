/**
 * @file
 * @date 9 janv. 2011
 * @todo comment
 */

#include "common.hpp"
#include "generated/test1_program_format.hpp"

using namespace gtulu::internal;

int main(int argc, char *argv[]) {
  init_gl(argc, argv);

  typedef ftext::texture_format_selector< ft::gl_texture_2d >::format texture_format;
  gio::texture< texture_format > texture;
  gio::buffer< fd::gl_unsigned_byte > buffer;
  gio::program< gifp::test1_program_format > program;

  program.set_background(texture);

  ::boost::shared_ptr< gifp::test1_program_format::vertexarray_t > vertexarray = program.new_vertexarray();
  vertexarray->set_position(buffer);
  vertexarray->set_texture_position(0, 0);
  vertexarray->draw(program, 0, 10);

  close_gl();
  return 0;
}
