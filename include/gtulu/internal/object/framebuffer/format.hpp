/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_OBJECT_FRAMEBUFFER_FORMAT_HPP_
#define GTULU_INTERNAL_OBJECT_FRAMEBUFFER_FORMAT_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/framebuffer.hpp"

#include "gtulu/internal/object/framebuffer/attachment_manager.hpp"
#include "gtulu/internal/object/framebuffer/attacher.hpp"

#include <vector>

namespace gtulu {
  namespace internal {

    namespace framebuffer {

      template< typename DrawableType >
      struct framebuffer_format_base;

      template< >
      struct framebuffer_format_base< obj::drawable const& > {
          attachment_manager manager;
          std::vector< std::uint32_t > colors;

          framebuffer_format_base() {
            colors.resize(manager.max_attachment, 0);
          }

          void bind_colors() const {
            fct::gl_draw_buffers< >::call(colors.size(), colors.data());
          }

          template< typename FramebufferSlotType, typename TextureFormat >
          void set(std::uint32_t const location, obj::texture< TextureFormat > const& drawable) {
            boost::shared_ptr< attachment > attachment = manager.get_current_or_new(drawable);
            fbf::attacher< FramebufferSlotType >::template attach< fbf::layered::no >(attachment->get_color(),
                                                                                      drawable,
                                                                                      0,
                                                                                      0);
            colors[location] = std::uint32_t(attachment->get_color());
          }

          template< typename FramebufferSlotType >
          void set(std::uint32_t const location, obj::renderbuffer_base const& drawable) {
            boost::shared_ptr< attachment > attachment = manager.get_current_or_new(drawable);
            fbf::attacher< FramebufferSlotType >::attach(attachment->get_color(), drawable);
            colors[location] = std::uint32_t(attachment->get_color());
          }
      };

      template< >
      struct framebuffer_format_base< const obj::default_drawable > {
          std::vector< std::uint32_t > colors;

          framebuffer_format_base() {
            colors.resize(4, 0);
          }

          void bind_colors() const {
            fct::gl_draw_buffers< >::call(4, colors.data());
          }

          template< typename FramebufferSlotType >
          void set(std::uint32_t const location, obj::default_drawable const drawable) {
            colors[location] = static_cast< std::uint32_t >(drawable);
          }
      };

    } // namespace framebuffer

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_OBJECT_FRAMEBUFFER_FORMAT_HPP_ */
