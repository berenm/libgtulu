/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#include "gtulu/namespaces.hpp"

#include "gtulu/internal/context.hpp"

#include <boost/chrono.hpp>
#include <boost/timer.hpp>

int main(int argc, char *argv[]) {
  using namespace gtulu::internal;

  context::context_info main_context = context::context::create(argc, argv);
  main_context.release();

  context::context_info alternate_context = context::context::create(argc, argv);

  boost::chrono::high_resolution_clock::time_point from;
  boost::chrono::high_resolution_clock::time_point to;
  from = boost::chrono::high_resolution_clock::now();
  for (int i = 0; i < 100000; ++i) {
    alternate_context.acquire();
    alternate_context.release();
    main_context.acquire();
    main_context.release();
  }
  to = boost::chrono::high_resolution_clock::now();
  ::std::cout << "context switch takes: " << (to - from) / 200000 << ::std::endl;

  alternate_context.release();

  main_context.acquire();
  context::context::destroy();

  return 0;
}
