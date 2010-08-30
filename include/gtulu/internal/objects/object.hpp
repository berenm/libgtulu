/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_OBJECT_HPP_
#define GTULU_INTERNAL_OBJECTS_OBJECT_HPP_

#include "gtulu/opengl.hpp"

#include "gtulu/internal/objects/object_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      struct object_base {
        protected:
          ::boost::uint32_t handle_;
          object_base();
          explicit object_base(const ::boost::uint32_t handle_in);

        public:
          ::boost::uint32_t operator*() const;
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
          static void bind(const plug< object_type_t >& pluggable_object) {
            bind< target_type_t > (*pluggable_object);
          }

          template< typename target_type_t = void >
          static void clear() {
            bind< target_type_t > (0);
          }

        protected:
          template< typename target_type_t = void >
          static void bind(::boost::uint32_t handle_);
      };
    } // namespace objects

    namespace gio = ::gtulu::internal::objects;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_OBJECT_HPP_ */
