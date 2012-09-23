/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_RENDERBUFFER_HPP_
#define GTULU_INTERNAL_OBJECT_RENDERBUFFER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"
#include "gtulu/internal/object/drawable.hpp"

#include "gtulu/internal/format/constraint/target.hpp"

namespace gtulu {
  namespace internal {

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< renderbuffer_base >::bind(std::uint32_t handle_) {
        fct::bind_renderbuffer< typename TargetType::aspect::format >::call(handle_);
      }

    } // namespace object

    namespace renderbuffer {

      template< typename TargetType >
      struct renderbuffer_slot : private fcmn::target::is_renderbuffer< TargetType > {
        static inline void bind(obj::plug< obj::renderbuffer_base > const& buffer) {
          obj::slot_binder< obj::renderbuffer_base >::bind< typename TargetType::aspect::format >(buffer);

        }

        static inline void unbind(obj::plug< obj::renderbuffer_base > const& buffer) {
          obj::slot_binder< obj::renderbuffer_base >::clear< typename TargetType::aspect::format >();
        }

        static inline void clear() {
          obj::slot_binder< obj::renderbuffer_base >::clear< typename TargetType::aspect::format >();
        }

      };

    } // namespace renderbuffer

    namespace object {

      struct renderbuffer_base : public plug< renderbuffer_base > {};

      template< typename RenderbufferFormat >
      struct renderbuffer : virtual public renderbuffer_base,
        virtual public object< renderbuffer_base >,
        public drawable,
        private RenderbufferFormat {
        inline void bind() const {
          rdb::renderbuffer_slot< typename RenderbufferFormat::target >::bind(*this);

        }

        inline void unbind() const {
          rdb::renderbuffer_slot< typename RenderbufferFormat::target >::unbind(*this);
        }

      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_RENDERBUFFER_HPP_ */
