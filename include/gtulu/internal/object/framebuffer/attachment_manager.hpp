/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_attachment_manager_HPP_
#define GTULU_INTERNAL_attachment_manager_HPP_

#include "gtulu/opengl.hpp"

#include "gtulu/internal/object/texture.hpp"
#include "gtulu/internal/object/renderbuffer.hpp"

#include <boost/thread/tss.hpp>
#include <boost/smart_ptr.hpp>

#include <map>

namespace gtulu {
  namespace internal {

    struct attachment: gio::object_base {
        explicit attachment(::std::uint32_t const handle_in) :
            object_base(handle_in) {
        }

        cst::gl_constant_base get_color() {
          return cst::runtime_constant(cst::gl_color_attachment0(), handle_);
        }
    };

    struct attachment_manager: ::boost::noncopyable {
        typedef ::std::map< ::std::uint32_t, ::boost::weak_ptr< attachment > > attachment_map;
        typedef ::std::map< ::std::uint32_t, ::boost::shared_ptr< attachment > > attachment_mappings_map;

        ::std::uint32_t max_attachment;
        attachment_mappings_map attachment_mappings;
        attachment_map attachments;

        attachment_manager();
        ~attachment_manager();

        ::boost::shared_ptr< attachment > get_current(gio::texture_base const& texture);
        ::boost::shared_ptr< attachment > get_new(gio::texture_base const& texture);
        ::boost::shared_ptr< attachment > get_current_or_new(gio::texture_base const& texture);

        ::boost::shared_ptr< attachment > get_current(gio::renderbuffer_base const& renderbuffer);
        ::boost::shared_ptr< attachment > get_new(gio::renderbuffer_base const& renderbuffer);
        ::boost::shared_ptr< attachment > get_current_or_new(gio::renderbuffer_base const& renderbuffer);

        void clear();

      protected:
        ::boost::shared_ptr< attachment > get_current(::std::uint32_t const handle);
        ::boost::shared_ptr< attachment > get_new(::std::uint32_t const handle);
        ::boost::shared_ptr< attachment > get_current_or_new(::std::uint32_t const handle);
    };

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_attachment_manager_HPP_ */
