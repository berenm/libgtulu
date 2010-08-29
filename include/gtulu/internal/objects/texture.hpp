/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_OBJECTS_TEXTURE_HPP_
#define GTULU_INTERNAL_OBJECTS_TEXTURE_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/objects/object.hpp"
#include "gtulu/internal/objects/drawable.hpp"

#include "gtulu/internal/formats/constraints/target.hpp"
#include "gtulu/internal/formats/conversions/data.hpp"

#include "gtulu/internal/objects/texture/base.hpp"

#include <boost/shared_ptr.hpp>

namespace gtulu {
  namespace internal {

    namespace objects {
      template< >
      template< typename target_type_t >
      void slot_binder< texture_base >::bind(const plug< texture_base >& pluggable_object) {
        __gl_debug(glBindTexture, (ftf::from_type< typename target_type_t::info::format >())(*pluggable_object))
        glBindTexture(ftf::from_type< typename target_type_t::info::format >::value, *pluggable_object);
        __gl_check_error
      }
      template< >
      template< typename target_type_t >
      void slot_binder< texture_base >::clear() {
        __gl_debug(glBindTexture, (ftf::from_type< typename target_type_t::info::format >())(0))
        glBindTexture(ftf::from_type< typename target_type_t::info::format >::value, 0);
        __gl_check_error
      }
    } // namespace objects

    namespace texture {

      template< typename target_type_t >
      struct texture_slot: private ft::is_of_target_base< target_type_t, ftb::texture > {
          static inline void bind(const gio::plug< gio::texture_base >& buffer) {
            gio::slot_binder< gio::texture_base >::bind< target_type_t >(buffer);
          }
          static inline void unbind(const gio::plug< gio::texture_base >& buffer) {
            gio::slot_binder< gio::texture_base >::clear< target_type_t >();
          }
      };

    } // namespace texture

    namespace git = ::gtulu::internal::texture;

    namespace objects {

      template< typename texture_format_t >
      struct texture: public texture_base,
                      public object< texture_base > ,
                      public drawable,
                      private texture_format_t,
                      public texture_format_t::loader {
          inline void bind() const {
            git::texture_slot< typename texture_format_t::target >::bind(*this);
          }

          inline void unbind() const {
            git::texture_slot< typename texture_format_t::target >::unbind(*this);
          }

          typedef typename fd::to_typename< typename texture_format_t::data::info::value_type >::type data_type;

          inline void load(const data_type* data, ::std::size_t size, ::std::size_t width, ::std::size_t height,
                           ::std::size_t level) {
            bind();
            texture_format_t::loader::load(data, size, width, height, 0, level);
          }

          inline void load(const data_type* data, ::std::size_t width, ::std::size_t height) {
            load(data, 0, width, height, 0);
            __gl_debug(glGenerateMipmap, (ftf::from_type< typename texture_format_t::target::info::format >()))
            glGenerateMipmap(ftf::from_type< typename texture_format_t::target::info::format >::value);
            __gl_check_error
          }
      };

    } // namespace objects

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECTS_TEXTURE_HPP_ */
