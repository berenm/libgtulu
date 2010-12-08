/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_TEXTURE_UNIT_MANAGER_HPP_
#define GTULU_INTERNAL_TEXTURE_UNIT_MANAGER_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/texture.hpp"

#include <boost/thread/tss.hpp>
#include <boost/smart_ptr.hpp>

#include <map>

namespace gtulu {
  namespace internal {

    struct texture_unit: gio::object_base {
        explicit texture_unit(const ::std::uint32_t handle_in) :
          object_base(handle_in) {
        }

        void activate() {
          fnc::gl_active_texture::call( cst::runtime_constant(cst::gl_texture0(), handle_));
        }

        template< typename texture_format_t >
        void bind(const gio::texture< texture_format_t >& texture_in) {
          activate();
          texture_in.bind();
        }
    };

    struct texture_unit_manager {
        typedef ::std::map< ::std::uint32_t, ::boost::weak_ptr< texture_unit > > texture_unit_map;
        typedef ::std::map< ::std::uint32_t, ::boost::shared_ptr< texture_unit > > texture_unit_mappings_map;

        static ::boost::thread_specific_ptr< texture_unit_manager > instance_ptr;
        static texture_unit_manager& instance();

        ::std::uint32_t max_texture_unit;
        texture_unit_mappings_map texture_unit_mappings;
        texture_unit_map texture_units;

        texture_unit_manager();
        ~texture_unit_manager();

        ::boost::shared_ptr< texture_unit > get_current(const gio::texture_base& texture_in);
        ::boost::shared_ptr< texture_unit > get_new(const gio::texture_base& texture_in);
        ::boost::shared_ptr< texture_unit > get_current_or_new(const gio::texture_base& texture_in);

        void clear();
    };

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_TEXTURE_UNIT_MANAGER_HPP_ */
