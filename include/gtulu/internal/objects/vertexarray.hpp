/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_VERTEXARRAY_HPP_
#define GTULU_INTERNAL_OBJECTS_VERTEXARRAY_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"

#include "gtulu/internal/drawing.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< vertexarray_base >::bind(::std::uint32_t handle_) {
        static ::std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fnc::gl_bind_vertex_array::call(handle_);
          bound_handle_ = handle_;
        }
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
          inline void bind() const {
            giv::vertexarray_slot::bind(*this);
          }

          inline void unbind() const {
            giv::vertexarray_slot::unbind(*this);
          }
      };

      template< typename vertexarray_format_t >
      struct vertexarray: public object< vertexarray_base > , public vertexarray_format_t {
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_VERTEXARRAY_HPP_ */
