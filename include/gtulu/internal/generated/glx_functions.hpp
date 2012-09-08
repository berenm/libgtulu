/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

/******************************************************************************
 * THIS FILE IS AUTO GENERATED FROM generate-functions -u -l glx,                              *
 * ANY CHANGE WILL BE OVERWRITTEN                                             *
 ******************************************************************************/

#ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
# error "gtulu/internal/generated/functions.hpp should not be included directly, please include gtulu/internal/functions.hpp instead."
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_GLX_FUNCTIONS_HPP_
# define GTULU_INTERNAL_GENERATED_GLX_FUNCTIONS_HPP_

# include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {
    namespace generated {

      namespace glx {
        namespace function {

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct choose_fb_config;

          template< >
          struct choose_fb_config< > {
            // static __invalid** call(_XDisplay* dpy, gtulu::int32_t screen, gtulu::int32_t const* attrib_list, gtulu::int32_t* nitems);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct choose_visual;

          template< >
          struct choose_visual< > {
            static* call(_XDisplay * dpy, gtulu::int32_t screen, gtulu::int32_t * attrib_list);

          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct copy_context;

          template< >
          struct copy_context< > {
            // static void call(_XDisplay* dpy, __invalid* src, __invalid* dst, gtulu::uint64_t mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_context;

          template< >
          struct create_context< > {
            // static __invalid* call(_XDisplay* dpy, * vis, __invalid* share_list, gtulu::int32_t direct);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_glx_pixmap;

          template< >
          struct create_glx_pixmap< > {
            static gtulu::uint64_t call(_XDisplay * dpy, *visual, gtulu::uint64_t pixmap);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_new_context;

          template< >
          struct create_new_context< > {
            // static __invalid* call(_XDisplay* dpy, __invalid* config, gtulu::int32_t render_type, __invalid* share_list, gtulu::int32_t direct);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_pbuffer;

          template< >
          struct create_pbuffer< > {
            // static gtulu::uint64_t call(_XDisplay* dpy, __invalid* config, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_pixmap;

          template< >
          struct create_pixmap< > {
            // static gtulu::uint64_t call(_XDisplay* dpy, __invalid* config, gtulu::uint64_t pixmap, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_window;

          template< >
          struct create_window< > {
            // static gtulu::uint64_t call(_XDisplay* dpy, __invalid* config, gtulu::uint64_t win, gtulu::int32_t const* attrib_list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct destroy_context;

          template< >
          struct destroy_context< > {
            // static void call(_XDisplay* dpy, __invalid* ctx);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct destroy_glx_pixmap;

          template< >
          struct destroy_glx_pixmap< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t pixmap);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct destroy_pbuffer;

          template< >
          struct destroy_pbuffer< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t pbuf);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct destroy_pixmap;

          template< >
          struct destroy_pixmap< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t pixmap);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct destroy_window;

          template< >
          struct destroy_window< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t window);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct free_memoryNV;

          template< >
          struct free_memoryNV< > {
            static void call(void* pointer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_client_string;

          template< >
          struct get_client_string< > {
            static char const* call(_XDisplay* dpy, gtulu::int32_t name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_config;

          template< >
          struct get_config< > {
            static gtulu::int32_t call(_XDisplay * dpy, *visual, gtulu::int32_t attrib, gtulu::int32_t * value);
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
            static _XDisplay* call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_current_drawable;

          template< >
          struct get_current_drawable< > {
            static gtulu::uint64_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_current_read_drawable;

          template< >
          struct get_current_read_drawable< > {
            static gtulu::uint64_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_fb_config;

          template< >
          struct get_fb_config< > {
            // static __invalid** call(_XDisplay* dpy, gtulu::int32_t screen, gtulu::int32_t* nelements);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_fb_config_attrib;

          template< >
          struct get_fb_config_attrib< > {
            // static gtulu::int32_t call(_XDisplay* dpy, __invalid* config, gtulu::int32_t attribute, gtulu::int32_t* value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_proc_address;

          template< >
          struct get_proc_address< > {
            static < function - proto > *call(gtulu::uint8_t const* procname);

          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_selected_event;

          template< >
          struct get_selected_event< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t drawable, gtulu::uint64_t* mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_visual_from_fb_config;

          template< >
          struct get_visual_from_fb_config< > {
            // static * call(_XDisplay* dpy, __invalid* config);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_direct;

          template< >
          struct is_direct< > {
            // static gtulu::int32_t call(_XDisplay* dpy, __invalid* ctx);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct make_context_current;

          template< >
          struct make_context_current< > {
            // static gtulu::int32_t call(_XDisplay* dpy, gtulu::uint64_t draw, gtulu::uint64_t read, __invalid* ctx);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct make_current;

          template< >
          struct make_current< > {
            // static gtulu::int32_t call(_XDisplay* dpy, gtulu::uint64_t drawable, __invalid* ctx);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct memoryAllocateNV;

          template< >
          struct memoryAllocateNV< > {
            static void* call(gtulu::int32_t size, gtulu::float32_t readfreq, gtulu::float32_t writefreq, gtulu::float32_t priority);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_context;

          template< >
          struct query_context< > {
            // static gtulu::int32_t call(_XDisplay* dpy, __invalid* ctx, gtulu::int32_t attribute, gtulu::int32_t* value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_drawable;

          template< >
          struct query_drawable< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t draw, gtulu::int32_t attribute, gtulu::uint32_t* value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_extension;

          template< >
          struct query_extension< > {
            static gtulu::int32_t call(_XDisplay* dpy, gtulu::int32_t* errorb, gtulu::int32_t* event);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_extensions_string;

          template< >
          struct query_extensions_string< > {
            static char const* call(_XDisplay* dpy, gtulu::int32_t screen);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_server_string;

          template< >
          struct query_server_string< > {
            static char const* call(_XDisplay* dpy, gtulu::int32_t screen, gtulu::int32_t name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_version;

          template< >
          struct query_version< > {
            static gtulu::int32_t call(_XDisplay* dpy, gtulu::int32_t* maj, gtulu::int32_t* min);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct select_event;

          template< >
          struct select_event< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t drawable, gtulu::uint64_t mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct swap_buffers;

          template< >
          struct swap_buffers< > {
            static void call(_XDisplay* dpy, gtulu::uint64_t drawable);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct use_x_font;

          template< >
          struct use_x_font< > {
            static void call(gtulu::uint64_t font, gtulu::int32_t first, gtulu::int32_t count, gtulu::int32_t list);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct wait_gl;

          template< >
          struct wait_gl< > {
            static void call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct wait_x;

          template< >
          struct wait_x< > {
            static void call();
          };

        }
      }

    }
  }
}

#endif /* GTULU_INTERNAL_GENERATED_GLX_FUNCTIONS_HPP_ */
