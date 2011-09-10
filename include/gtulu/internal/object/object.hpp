/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_OBJECT_HPP_
#define GTULU_INTERNAL_OBJECT_OBJECT_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      struct object_base {
        protected:
          ::std::uint32_t handle_;
          object_base();
          explicit object_base(::std::uint32_t const handle_in);

        public:
          ::std::uint32_t operator*() const;
      };

      template< typename ObjectType >
      struct object: virtual public object_base {
          object();
          ~object();
      };

      template< typename ObjectType >
      struct plug: virtual public object_base {
      };

      template< typename ObjectType >
      struct slot_binder {
          template< typename TargetType = void >
          static void bind(plug< ObjectType > const& pluggable_object) {
            bind< TargetType >(*pluggable_object);
          }

          template< typename TargetType = void >
          static void clear() {
            bind< TargetType >(0);
          }

        protected:
          template< typename TargetType = void >
          static void bind(::std::uint32_t handle_);
      };
    } // namespace object

    namespace gio = ::gtulu::internal::object;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_OBJECT_HPP_ */
