/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERFACE_OBJECT_BUFFER_HPP_
#define GTULU_INTERFACE_OBJECT_BUFFER_HPP_

#include "gtulu/opengl.hpp"

#include <boost/shared_ptr.hpp>

namespace gtulu {
  namespace interface {
    namespace object {

      struct mapped_buffer;

      struct buffer;
      typedef ::boost::shared_ptr< buffer > buffer_ptr;

      struct buffer {
          static buffer_ptr create();

          void read();
          void write();

          ::boost::shared_ptr< mapped_buffer > map();

          bool is_mapped();
          ::std::uint32_t get_size();
          ::std::uint32_t get_usage();

        protected:
          void bind();
          void unbind();

          buffer();
          buffer(::std::size_t const size, data_type_t const* data = 0);
      };

      struct mapped_buffer {
          typedef void* ptr_type;

          mapped_buffer();
          ~mapped_buffer();

          void flush();
          ptr_type* operator *();
          ptr_type const* operator *();

          ::std::uint32_t get_access();
      };

    } // namespace object
  } // namespace interface
} // namespace gtulu

#endif /* GTULU_INTERFACE_OBJECT_BUFFER_HPP_ */
