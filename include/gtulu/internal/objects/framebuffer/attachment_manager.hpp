/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_attachment_manager_HPP_
#define GTULU_INTERNAL_attachment_manager_HPP_

#include "gtulu/opengl.hpp"

#include "gtulu/internal/objects/texture.hpp"
#include "gtulu/internal/objects/renderbuffer.hpp"

#include <boost/thread/tss.hpp>
#include <boost/smart_ptr.hpp>

#include <map>

namespace gtulu {
  namespace internal {

    struct attachment: gio::object_base {
        explicit attachment(const ::boost::uint32_t handle_in) :
          object_base(handle_in) {
        }

        cst::gl_constant_base get_color() {
          return cst::runtime_constant(cst::gl_color_attachment0(), handle_);
        }
    };

    struct attachment_manager: ::boost::noncopyable {
        typedef ::std::map< ::boost::uint32_t, ::boost::weak_ptr< attachment > > attachment_map;
        typedef ::std::map< ::boost::uint32_t, ::boost::shared_ptr< attachment > > attachment_mappings_map;

        ::boost::uint32_t max_attachment;
        attachment_mappings_map attachment_mappings;
        attachment_map attachments;

        attachment_manager();
        ~attachment_manager();

        ::boost::shared_ptr< attachment > get_current(const gio::texture_base& texture);
        ::boost::shared_ptr< attachment > get_new(const gio::texture_base& texture);
        ::boost::shared_ptr< attachment > get_current_or_new(const gio::texture_base& texture);

        ::boost::shared_ptr< attachment > get_current(const gio::renderbuffer_base& renderbuffer);
        ::boost::shared_ptr< attachment > get_new(const gio::renderbuffer_base& renderbuffer);
        ::boost::shared_ptr< attachment > get_current_or_new(const gio::renderbuffer_base& renderbuffer);

        void clear();

      protected:
        ::boost::shared_ptr< attachment > get_current(const ::boost::uint32_t handle);
        ::boost::shared_ptr< attachment > get_new(const ::boost::uint32_t handle);
        ::boost::shared_ptr< attachment > get_current_or_new(const ::boost::uint32_t handle);
    };

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_attachment_manager_HPP_ */
