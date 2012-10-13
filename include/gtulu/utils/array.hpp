/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_UTILS_ARRAY_HPP_
#define GTULU_UTILS_ARRAY_HPP_

#include "gtulu/namespaces.hpp"

#include <array>
#include <iosfwd>

template< class _CharT, typename T, size_t const Size, class _Traits = std::char_traits< _CharT > >
static inline std::basic_ostream< _CharT, _Traits >& std::operator<<(std::basic_ostream< _CharT, _Traits >& stream, std::array< T, Size > const& a) {
  stream << "[";

  for (size_t i = 0; i < Size; ++i) {
    stream << (i == 0 ? "" : ", ") << a[i];
  }

  stream << "]";
  return stream;
}

#endif /* GTULU_UTILS_ARRAY_HPP_ */
