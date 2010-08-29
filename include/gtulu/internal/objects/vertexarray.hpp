/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_VERTEXARRAY_HPP_
#define GTULU_INTERNAL_OBJECTS_VERTEXARRAY_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/object.hpp"

#include "gtulu/internal/drawing.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< vertexarray_base >::bind(const plug< vertexarray_base >& pluggable_object) {
        __gl_debug(glBindVertexArray, (*pluggable_object));
        glBindVertexArray(*pluggable_object);
        __gl_check_error
      }
      template< >
      template< typename target_type_t >
      void slot_binder< vertexarray_base >::clear() {
        __gl_debug(glBindVertexArray, (0));
        glBindVertexArray(0);
        __gl_check_error
      }
    } // namespace objects

    namespace vertexarray {
      struct vertexarray_slot {
          static inline void bind(const gio::plug< gio::vertexarray_base >& vertexarray) {
            gio::slot_binder< gio::vertexarray_base >::bind(vertexarray);
          }
          static inline void unbind(const gio::plug< gio::vertexarray_base >& vertexarray) {
            gio::slot_binder< gio::vertexarray_base >::clear();
          }
      };
    } // namespace vertexarray

    namespace giv = ::gtulu::internal::vertexarray;

    namespace objects {

      struct vertexarray_base: public plug< vertexarray_base > {
      };

      template< typename vertexarray_format_t >
      struct vertexarray: public vertexarray_base,
                          public object< vertexarray_base > ,
                          public vertexarray_format_t,
                          public gid::drawable {
          inline void bind() const {
            giv::vertexarray_slot::bind(*this);
          }

          inline void unbind() const {
            giv::vertexarray_slot::unbind(*this);
          }
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_VERTEXARRAY_HPP_ */
