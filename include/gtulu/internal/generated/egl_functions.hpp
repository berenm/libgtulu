/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

/******************************************************************************
 * THIS FILE IS AUTO GENERATED FROM generate-functions -u -l egl,                              *
 * ANY CHANGE WILL BE OVERWRITTEN                                             *
 ******************************************************************************/

#ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
# error "gtulu/internal/generated/functions.hpp should not be included directly, please include gtulu/internal/functions.hpp instead."
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_EGL_FUNCTIONS_HPP_
# define GTULU_INTERNAL_GENERATED_EGL_FUNCTIONS_HPP_

# include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {
    namespace generated {

      namespace egl {
        namespace function {

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct Terminate;

          template< >
          struct Terminate< > {
            // static gtulu::uint32_t call(__invalid* dpy);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bindAPI;

          template< >
          struct bindAPI< > {
            static gtulu::uint32_t call(gtulu::constant_base const& api);
          };

          template< typename _1 >
          struct bindAPI< _1 > {
            typedef _1          ApiConstant;
            typedef ApiConstant api_t;
            inline static gtulu::uint32_t call() { return bindAPI< >::call(api_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_tex_image;

          template< >
          struct bind_tex_image< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* surface, gtulu::int32_t buffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct choose_config;

          template< >
          struct choose_config< > {
            // static gtulu::uint32_t call(__invalid* dpy, gtulu::int32_t const* attrib_list, __invalid** configs, gtulu::int32_t config_size, gtulu::int32_t* num_config);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct copy_buffers;

          template< >
          struct copy_buffers< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* surface, gtulu::uint64_t target);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_context;

          template< >
          struct create_context< > {
            // static __invalid* call(__invalid* dpy, __invalid* config, __invalid* share_context, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_pbuffer_from_client_buffer;

          template< >
          struct create_pbuffer_from_client_buffer< > {
            // static __invalid* call(__invalid* dpy, gtulu::constant_base const& buftype, __invalid* buffer, __invalid* config, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 >
          struct create_pbuffer_from_client_buffer< _1 > {
            typedef _1              BuftypeConstant;
            typedef BuftypeConstant buftype_t;

            // inline static __invalid* call(__invalid* dpy, __invalid* buffer, __invalid* config, gtulu::int32_t const* attrib_list) { return create_pbuffer_from_client_buffer<  >::call(dpy, buftype_t(), buffer, config, attrib_list); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_pbuffer_surface;

          template< >
          struct create_pbuffer_surface< > {
            // static __invalid* call(__invalid* dpy, __invalid* config, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_pixmap_surface;

          template< >
          struct create_pixmap_surface< > {
            // static __invalid* call(__invalid* dpy, __invalid* config, gtulu::uint64_t pixmap, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_window_surface;

          template< >
          struct create_window_surface< > {
            // static __invalid* call(__invalid* dpy, __invalid* config, gtulu::uint64_t win, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct destroy_context;

          template< >
          struct destroy_context< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* ctx);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct destroy_surface;

          template< >
          struct destroy_surface< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* surface);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_config;

          template< >
          struct get_config< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid** configs, gtulu::int32_t config_size, gtulu::int32_t* num_config);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_config_attrib;

          template< >
          struct get_config_attrib< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* config, gtulu::int32_t attribute, gtulu::int32_t* value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_current_context;

          template< >
          struct get_current_context< > {
            // static __invalid* call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_current_display;

          template< >
          struct get_current_display< > {
            // static __invalid* call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_current_surface;

          template< >
          struct get_current_surface< > {
            // static __invalid* call(gtulu::int32_t readdraw);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_display;

          template< >
          struct get_display< > {
            // static __invalid* call(__invalid* display_id);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_error;

          template< >
          struct get_error< > {
            static gtulu::int32_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_proc_address;

          template< >
          struct get_proc_address< > {
            // static __invalid* call(char const* procname);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct initialize;

          template< >
          struct initialize< > {
            // static gtulu::uint32_t call(__invalid* dpy, gtulu::int32_t* major, gtulu::int32_t* minor);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct make_current;

          template< >
          struct make_current< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* draw, __invalid* read, __invalid* ctx);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct queryAPI;

          template< >
          struct queryAPI< > {
            static gtulu::uint32_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_context;

          template< >
          struct query_context< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* ctx, gtulu::int32_t attribute, gtulu::int32_t* value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_string;

          template< >
          struct query_string< > {
            // static char const* call(__invalid* dpy, gtulu::int32_t name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_surface;

          template< >
          struct query_surface< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* surface, gtulu::int32_t attribute, gtulu::int32_t* value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct releaseThrea;

          template< >
          struct releaseThrea< > {
            static gtulu::uint32_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct release_tex_image;

          template< >
          struct release_tex_image< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* surface, gtulu::int32_t buffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct surface_attrib;

          template< >
          struct surface_attrib< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* surface, gtulu::int32_t attribute, gtulu::int32_t value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct swapInterval;

          template< >
          struct swapInterval< > {
            // static gtulu::uint32_t call(__invalid* dpy, gtulu::int32_t interval);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct swap_buffers;

          template< >
          struct swap_buffers< > {
            // static gtulu::uint32_t call(__invalid* dpy, __invalid* surface);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct waitNative;

          template< >
          struct waitNative< > {
            static gtulu::uint32_t call(gtulu::int32_t engine);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct wait_client;

          template< >
          struct wait_client< > {
            static gtulu::uint32_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct wait_gl;

          template< >
          struct wait_gl< > {
            static gtulu::uint32_t call();
          };

        }
      }

    }
  }
}

#endif /* GTULU_INTERNAL_GENERATED_EGL_FUNCTIONS_HPP_ */
