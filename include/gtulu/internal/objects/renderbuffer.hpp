/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_RENDERBUFFER_HPP_
#define GTULU_INTERNAL_OBJECTS_RENDERBUFFER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/objects/drawable.hpp"

#include "gtulu/internal/formats/constraints/target.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< renderbuffer_base >::bind(::std::uint32_t handle_) {
        fnc::gl_bind_renderbuffer::call< typename target_type_t::info::format >(handle_);
      }
    } // namespace objects

    namespace renderbuffer {

      template< typename target_type_t >
      struct renderbuffer_slot: private ft::is_of_target_base< target_type_t, ft::base::renderbuffer > {
          static inline void bind(gio::plug< gio::renderbuffer_base > const& buffer) {
            gio::slot_binder< gio::renderbuffer_base >::bind< typename target_type_t::info::format >(buffer);
          }
          static inline void unbind(gio::plug< gio::renderbuffer_base > const& buffer) {
            gio::slot_binder< gio::renderbuffer_base >::clear< typename target_type_t::info::format >();
          }
      };

    } // namespace renderbuffer

    namespace gir = ::gtulu::internal::renderbuffer;

    namespace objects {

      struct renderbuffer_base: public plug< renderbuffer_base > {
      };

      template< typename renderbuffer_format_t >
      struct renderbuffer: public renderbuffer_base,
                           public object< renderbuffer_base > ,
                           public drawable,
                           private renderbuffer_format_t {
          inline void bind() const {
            gir::renderbuffer_slot< typename renderbuffer_format_t::target >::bind(*this);
          }

          inline void unbind() const {
            gir::renderbuffer_slot< typename renderbuffer_format_t::target >::unbind(*this);
          }
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_RENDERBUFFER_HPP_ */
