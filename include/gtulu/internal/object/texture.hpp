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

#include "gtulu/internal/property/texture.hpp"
#include "gtulu/internal/property/texture_lod.hpp"

#include <boost/shared_ptr.hpp>

namespace gtulu {
  namespace internal {

    namespace object {
      template< >
      template< typename TargetType >
      void slot_binder< texture_base >::bind(std::uint32_t handle_) {
        fct::bind_texture< typename TargetType::aspect::format >::call(handle_);
      }

    } // namespace object

    namespace texture {

      template< typename TargetType >
      struct texture_slot : private fcmn::target::is_texture< TargetType > {
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
      struct texture : virtual public texture_base,
        virtual public object< texture_base >,
        public drawable,
        private TextureFormat {
        typedef texture_lod< TextureFormat > lod_type;

        texture() :
          texture_base(), object< texture_base >(), drawable(), level_zero_(*this, 0) {
          bind();
        }

        texture(std::size_t const width, std::size_t const height=1, std::size_t const depth=1) :
          texture_base(), object< texture_base >(), drawable(), level_zero_(*this, 0) {
          resize(width, height, depth);
        }

        template< typename SourceStore > texture(SourceStore const& source_store) :
          texture_base(), object< texture_base >(), drawable(), level_zero_(*this, 0) {
          sto::init(*this, source_store);
        }

        void resize(std::size_t const width, std::size_t const height=1, std::size_t const depth=1) {
          sto::init(*this, sto::data::empty< typename TextureFormat::data_format >(width, height, depth));
        }

        inline void compute_mipmaps() {
          bind();
          fct::generate_mipmap< typename TextureFormat::target_format::aspect::format >::call();
        }

        inline void bind() const {
          tex::texture_slot< typename TextureFormat::target_format >::bind(*this);
        }

        inline void unbind() const {
          tex::texture_slot< typename TextureFormat::target_format >::unbind(*this);
        }

        operator lod_type&() {
          return level_zero_;
        }
        operator lod_type const&() const {
          return level_zero_;
        }

        lod_type level(std::uint32_t level) {
          return lod_type(*this, level);
        }

        std::size_t width() const {
          return level_zero_.width();
        }

        std::size_t height() const {
          return level_zero_.height();
        }

        std::size_t depth() const {
          return level_zero_.depth();
        }

        protected:
          lod_type level_zero_;
      };

      template< typename TextureFormat >
      struct texture_lod : public pro::properties_type< texture_lod< TextureFormat > > {
        typedef texture< TextureFormat >                             texture_type;
        typedef pro::properties_type< texture_lod< TextureFormat > > properties_type;

        texture_type const& get_texture() const {
          return texture_;
        }

        std::uint32_t get_level() const {
          return level_;
        }

        protected:
          texture_lod(texture_type& texture, std::uint32_t level) :
            properties_type(*this), texture_(texture), level_(level) {}

          texture_type& texture_;
          std::uint32_t level_;

          friend struct texture< TextureFormat >;

      };

    } // namespace object

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_TEXTURE_HPP_ */
