/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_RENDERBUFFER_HPP_
#define GTULU_INTERNAL_OBJECT_RENDERBUFFER_HPP_

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
      void slot_binder< renderbuffer_base >::bind(::std::uint32_t handle_) {
        fnc::gl_bind_renderbuffer::call< typename TargetType::aspect::format >(handle_);
      }
    } // namespace object

    namespace renderbuffer {

      template< typename TargetType >
      struct renderbuffer_slot: private fc::target::is_renderbuffer< TargetType > {
          static inline void bind(gio::plug< gio::renderbuffer_base > const& buffer) {
            gio::slot_binder< gio::renderbuffer_base >::bind< typename TargetType::aspect::format >(buffer);
          }
          static inline void unbind(gio::plug< gio::renderbuffer_base > const& buffer) {
            gio::slot_binder< gio::renderbuffer_base >::clear< typename TargetType::aspect::format >();
          }
      };

    } // namespace renderbuffer

    namespace gir = ::gtulu::internal::renderbuffer;

    namespace object {

      struct renderbuffer_base: public plug< renderbuffer_base > {
      };

      template< typename RenderbufferFormat >
      struct renderbuffer: public renderbuffer_base,
                           public object< renderbuffer_base >,
                           public drawable,
                           private RenderbufferFormat {
          inline void bind() const {
            gir::renderbuffer_slot< typename RenderbufferFormat::target >::bind(*this);
          }

          inline void unbind() const {
            gir::renderbuffer_slot< typename RenderbufferFormat::target >::unbind(*this);
          }
      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_RENDERBUFFER_HPP_ */
