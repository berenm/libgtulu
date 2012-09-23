/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_UTILS_LOGGING_HPP_
#define GTULU_UTILS_LOGGING_HPP_

#include "gtulu/namespaces.hpp"

#ifndef GTULU_LOGGING_INITIALIZED
# define GTULU_LOGGING_INITIALIZED

// #if defined(GTULU_USE_LIBLOGGING)
# include <logging/logging.hpp>

// #endif

# ifdef __logML
#  define __gtulu_logL(level_m) __logML(gtulu, level_m)
# else // ifdef __logML
#  define __gtulu_logL(level_m) \
  if (0)                        \
    std::cout
# endif // ifdef __logML

# define __gtulu_fatal() __gtulu_logL(fatal)
# define __gtulu_error() __gtulu_logL(error)
# define __gtulu_warn()  __gtulu_logL(warning)
# define __gtulu_info()  __gtulu_logL(info)

# if defined(GTULU_NO_DEBUG) || defined(NDEBUG)
#  define __gtulu_debug() \
  if (0)                  \
    std::cout
# else // if defined(GTULU_NO_DEBUG) || defined(NDEBUG)
#  define __gtulu_debug() __gtulu_logL(debug)
# endif // if defined(GTULU_NO_DEBUG) || defined(NDEBUG)

#endif /* GTULU_LOGGING_INITIALIZED */

#endif /* GTULU_UTILS_LOGGING_HPP_ */
