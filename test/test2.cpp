/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/context.hpp"
#include "generated/test2_program_format.hpp"

int main(int argc, char* argv[]) {
  using namespace gtulu::internal;

  context::context::create(argc, argv);

  obj::program< fprg::test2_program_format > program;

  context::context::destroy();
  return 0;
}
