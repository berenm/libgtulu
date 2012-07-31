/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_TEXTURE_UNIT_MANAGER_HPP_
#define GTULU_INTERNAL_TEXTURE_UNIT_MANAGER_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/texture.hpp"

#include <boost/thread/tss.hpp>
#include <boost/smart_ptr.hpp>

#include <map>

namespace gtulu {
  namespace internal {

    struct texture_unit: obj::object_base {
        explicit texture_unit(const std::int32_t handle_in) :
            object_base(handle_in) {
        }

        void activate() {
          fct::active_texture< >::call(cst::runtime_constant(cst::gl_texture0(), handle_));
        }

        template< typename TextureFormat >
        void bind(obj::texture< TextureFormat > const& texture_in) {
          activate();
          texture_in.bind();
        }
    };

    struct texture_unit_manager {
        typedef std::map< std::uint32_t, boost::weak_ptr< texture_unit > > texture_unit_map;
        typedef std::map< std::uint32_t, boost::shared_ptr< texture_unit > > texture_unit_mappings_map;

        static boost::thread_specific_ptr< texture_unit_manager > instance_ptr;
        static texture_unit_manager& instance();

        std::int32_t max_texture_unit;
        texture_unit_mappings_map texture_unit_mappings;
        texture_unit_map texture_units;

        texture_unit_manager();
        ~texture_unit_manager();

        boost::shared_ptr< texture_unit > get_current(obj::texture_base const& texture_in);
        boost::shared_ptr< texture_unit > get_new(obj::texture_base const& texture_in);
        boost::shared_ptr< texture_unit > get_current_or_new(obj::texture_base const& texture_in);

        void clear();
    };

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_TEXTURE_UNIT_MANAGER_HPP_ */
