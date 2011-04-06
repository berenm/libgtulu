/**
 * @file
 * @date 9 janv. 2011
 * @todo comment
 * @copyright 2008-2011. All rights reserved.
 */

#include "common.hpp"
#include "generated/test3_program_format.hpp"

using namespace gtulu::internal;

int main(int argc, char *argv[]) {
  init_gl(argc, argv);

  gifp::test3_program_format program;

  close_gl();
  return 0;
}
