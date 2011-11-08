/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_TEXTURE_HPP_
#define GTULU_INTERNAL_OBJECT_TEXTURE_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/object.hpp"
#include "gtulu/internal/object/drawable.hpp"

#include "gtulu/internal/format/constraint/target.hpp"
#include "gtulu/internal/format/conversion/common.hpp"

#include "gtulu/internal/object/texture/base.hpp"

#include "gtulu/internal/storage.hpp"
#include "gtulu/internal/storage/data/empty.hpp"

#include <boost/shared_ptr.hpp>

namespace gtulu {
  namespace internal {

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< texture_base >::bind(std::uint32_t handle_) {
        fct::gl_bind_texture< typename TargetType::aspect::format >::call(handle_);
      }
    } // namespace object

    namespace texture {

      template< typename TargetType >
      struct texture_slot: private fcmn::target::is_texture< TargetType > {
          static inline void bind(obj::plug< obj::texture_base > const& buffer) {
            obj::slot_binder< obj::texture_base >::bind< TargetType >(buffer);
          }
          static inline void unbind(obj::plug< obj::texture_base > const& buffer) {
            obj::slot_binder< obj::texture_base >::clear< TargetType >();
          }
          static inline void clear() {
            obj::slot_binder< obj::texture_base >::clear< TargetType >();
          }
      };

    } // namespace texture

    namespace object {

      template< typename TextureFormat >
      struct texture: public texture_base, public object< texture_base >, public drawable, private TextureFormat {
          texture() {
            bind();
          }

          texture(std::size_t const width, std::size_t const height = 1, std::size_t const depth = 1) :
              object< buffer_base >() {
            resize(width, height, depth);
          }
          template< typename SourceStore >
          texture(SourceStore const& source_store) :
              object< buffer_base >() {
            sto::init(*this, source_store);
          }

          void resize(std::size_t const width, std::size_t const height = 1, std::size_t const depth = 1) {
            sto::init(*this, sto::data::empty< typename TextureFormat::data_format >(width, height, depth));
          }

          template< typename MinFilter >
          inline void set_minification() {
            fct::gl_tex_parameter< typename TextureFormat::target_format::aspect::format, cst::gl_texture_min_filter >::call(MinFilter::value);
          }

          inline void compute_mipmaps() {
            bind();
            fct::gl_generate_mipmap< typename TextureFormat::target_format::aspect::format >::call();
          }

          inline void bind() const {
            tex::texture_slot< typename TextureFormat::target_format >::bind(*this);
          }

          inline void unbind() const {
            tex::texture_slot< typename TextureFormat::target_format >::unbind(*this);
          }
      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_TEXTURE_HPP_ */
