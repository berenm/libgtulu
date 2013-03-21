#ifndef __GTULU_UTILS_STL_OSTREAM_HPP__
#define __GTULU_UTILS_STL_OSTREAM_HPP__

#include <cstdint>
#include <ostream>

static inline boost::log::formatting_ostream& operator<<(boost::log::formatting_ostream& s, uint8_t const* t) {
  s << static_cast< void const* >(t);
  return s;
}

#endif // ifndef __GTULU_UTILS_STL_OSTREAM_HPP__
