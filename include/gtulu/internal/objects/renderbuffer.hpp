/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_RENDERBUFFER_HPP_
#define GTULU_INTERNAL_OBJECTS_RENDERBUFFER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/objects/drawable.hpp"

#include "gtulu/internal/formats/constraints/target.hpp"

namespace gtulu {
  namespace internal {

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< renderbuffer_base >::bind(::boost::uint32_t handle_) {
        __gl_debug(glBindRenderbuffer, (ftf::from_type< typename target_type_t::info::format >())(handle_))
        glBindRenderbuffer(ftf::from_type< typename target_type_t::info::format >::value, handle_);
        __gl_check_error
      }
    } // namespace objects

    namespace renderbuffer {

      template< typename target_type_t >
      struct renderbuffer_slot: private ft::is_of_target_base< target_type_t, ft::base::renderbuffer > {
          static inline void bind(const gio::plug< gio::renderbuffer_base >& buffer) {
            gio::slot_binder< gio::renderbuffer_base >::bind(ft::format::from_type<
                typename target_type_t::info::format >::value, buffer);
          }
          static inline void unbind(const gio::plug< gio::renderbuffer_base >& buffer) {
            gio::slot_binder< gio::renderbuffer_base >::clear(ft::format::from_type<
                typename target_type_t::info::format >::value);
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
