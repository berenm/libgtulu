/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_UTILS_LOGGING_HPP_
#define GTULU_UTILS_LOGGING_HPP_

#include "gtulu/namespaces.hpp"

#include <logging/logging.hpp>

#define __gtulu_fatal() __fatal()
#define __gtulu_error() __error()
#define __gtulu_warn()  __warn()
#define __gtulu_info()  __info()
#define __gtulu_debug() __debug()

namespace gtulu {
  namespace logging {
    static constexpr char module_name[] = "gtulu";
  }
}

#endif /* GTULU_UTILS_LOGGING_HPP_ */
