/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_OBJECT_HPP_
#define GTULU_INTERNAL_OBJECT_OBJECT_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      namespace detail {

        template< typename ObjectType >
        static inline handle_t create();

#define DEFINE_CREATE(type_m, function_m) \
  template< >                             \
  handle_t create< type_m >() {           \
    handle_t handle;                      \
    fct::function_m< >::call(1, &handle); \
    return handle;                        \
  }

        DEFINE_CREATE(texture_base, gen_textures)
        DEFINE_CREATE(buffer_base, gen_buffers)
        DEFINE_CREATE(renderbuffer_base, gen_renderbuffers)
        DEFINE_CREATE(framebuffer_base, gen_framebuffers)
        DEFINE_CREATE(vertexarray_base, gen_vertex_arrays)
        DEFINE_CREATE(query_base, gen_queries)

        template< >
        handle_t create< program_base >() {
          return fct::create_program< >::call();
        }

        template< >
        handle_t create< shader_base >() {
          // we'll create it somewhere else
          return 0;
        }

#undef DEFINE_CREATE

        template< typename ObjectType >
        static inline void destroy(handle_t& handle);

#define DEFINE_DESTROY(type_m, function_m)    \
  template< >                                 \
  void destroy< type_m >(handle_t & handle) { \
    fct::function_m< >::call(1, &handle);     \
  }

        DEFINE_DESTROY(texture_base, delete_textures)
        DEFINE_DESTROY(buffer_base, delete_buffers)
        DEFINE_DESTROY(renderbuffer_base, delete_renderbuffers)
        DEFINE_DESTROY(framebuffer_base, delete_framebuffers)
        DEFINE_DESTROY(vertexarray_base, delete_vertex_arrays)
        DEFINE_DESTROY(query_base, delete_queries)

#undef DEFINE_DESTROY

        template< >
        void destroy< program_base >(handle_t& handle) {
          fct::delete_program< >::call(handle);
        }

        template< >
        void destroy< shader_base >(handle_t& handle) {
          fct::delete_shader< >::call(handle);
        }

      } // namespace detail

      struct object_base {
        handle_t operator*() const {
          return handle_;
        }

        protected:
          handle_t handle_;

          object_base() :
            handle_(0) {}

          explicit object_base(handle_t const& handle_in) :
            handle_(handle_in) {}

      };

      template< typename ObjectType >
      struct object : virtual public object_base {
        object() {
          handle_ = detail::create< ObjectType >();
        }

        virtual ~object() {
          detail::destroy< ObjectType >(handle_);
        }

      };

      template< typename ObjectType >
      struct plug : virtual public object_base {};

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
          static void bind(std::uint32_t handle_);
      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_OBJECT_HPP_ */
