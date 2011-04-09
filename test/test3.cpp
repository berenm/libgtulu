/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 9 janv. 2011
 * @todo comment
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
