/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_OBJECT_HPP_
#define GTULU_INTERNAL_OBJECTS_OBJECT_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      struct object_base {
        protected:
          ::std::uint32_t handle_;
          object_base();
          explicit object_base(::std::uint32_t const handle_in);

        public:
          ::std::uint32_t operator*() const;
      };

      template< typename object_type_t >
      struct object: virtual public object_base {
          object();
          ~object();
      };

      template< typename object_type_t >
      struct plug: virtual public object_base {
      };

      template< typename object_type_t >
      struct slot_binder {
          template< typename target_type_t = void >
          static void bind(plug< object_type_t > const& pluggable_object) {
            bind< target_type_t >(*pluggable_object);
          }

          template< typename target_type_t = void >
          static void clear() {
            bind< target_type_t >(0);
          }

        protected:
          template< typename target_type_t = void >
          static void bind(::std::uint32_t handle_);
      };
    } // namespace objects

    namespace gio = ::gtulu::internal::objects;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_OBJECT_HPP_ */
