/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECT_VERTEXARRAY_HPP_
#define GTULU_INTERNAL_OBJECT_VERTEXARRAY_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"

#include "gtulu/internal/drawing.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< vertexarray_base >::bind(::std::uint32_t handle_) {
        static ::std::uint32_t bound_handle_ = 0;

        if (bound_handle_ != handle_) {
          fnc::gl_bind_vertex_array::call(handle_);
          bound_handle_ = handle_;
        }
      }
    } // namespace object

    namespace vertexarray {
      struct vertexarray_slot {
          static inline void bind(gio::plug< gio::vertexarray_base > const& vertexarray) {
            gio::slot_binder< gio::vertexarray_base >::bind(vertexarray);
          }
          static inline void unbind(gio::plug< gio::vertexarray_base > const& vertexarray) {
            gio::slot_binder< gio::vertexarray_base >::clear();
          }
      };
    } // namespace vertexarray

    namespace giv = ::gtulu::internal::vertexarray;

    namespace object {

      struct vertexarray_base: public plug< vertexarray_base > {
          inline void bind() const {
            giv::vertexarray_slot::bind(*this);
          }

          inline void unbind() const {
            giv::vertexarray_slot::unbind(*this);
          }
      };

      template< typename VertexarrayFormat >
      struct vertexarray: public object< vertexarray_base >, public VertexarrayFormat {
      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_VERTEXARRAY_HPP_ */
