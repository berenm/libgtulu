/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FUNCTION_FWD_HPP_
#define GTULU_INTERNAL_FUNCTION_FWD_HPP_

#include "gtulu/namespaces.hpp"
#include <string>
#include <boost/integer.hpp>

#define IN_GTULU_INTERNAL_FUNCTIONS_HPP_
#include "gtulu/internal/generated/gl3_functions.hpp"
#undef IN_GTULU_INTERNAL_FUNCTIONS_HPP_

namespace gtulu {
  namespace internal {

    namespace function {

      using namespace generated::gl3::function;

    } // namespace function

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FUNCTION_FWD_HPP_ */
