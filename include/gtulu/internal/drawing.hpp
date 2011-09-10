/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_DRAWING_HPP_
#define GTULU_INTERNAL_DRAWING_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/object/buffer.hpp"
#include "gtulu/internal/format/data.hpp"

namespace gtulu {
  namespace internal {

    namespace drawing {

      META_ASPECT_DECLARE(mode,
                          Mode,
                          using cst::,
                          (gl_points) (gl_lines) (gl_line_strip) (gl_lines_adjacency) (gl_line_strip_adjacency) (gl_line_loop) (gl_triangles) (gl_triangle_strip) (gl_triangles_adjacency) (gl_triangle_strip_adjacency) (gl_triangle_fan))

      typedef ::std::uint32_t draw_mode_t;

      template< typename BufferFormat >
      struct is_buffer_unsigned_integer;
      template< >
      struct is_buffer_unsigned_integer< fd::gl_unsigned_byte > {
      };
      template< >
      struct is_buffer_unsigned_integer< fd::gl_unsigned_short > {
      };
      template< >
      struct is_buffer_unsigned_integer< fd::gl_unsigned_int > {
      };

      template< typename DrawingMode, typename BufferFormat, typename BufferUsage >
      struct checked_drawer: is_buffer_unsigned_integer< BufferFormat > {
          inline static void draw(gio::buffer< BufferFormat, BufferUsage > const& buffer_in,
          ::std::uint32_t const count_in
                                  ,
                                  ::std::uint32_t const offset_in
                                  ,
                                  ::std::uint32_t const base_vertex_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            if (base_vertex_in == 0) {
              fnc::gl_draw_elements::call< DrawingMode, typename BufferFormat::info::format >(count_in,
                                                                                              reinterpret_cast< GLvoid* >(offset_in));
            } else {
              fnc::gl_draw_elements_base_vertex::call< DrawingMode, typename BufferFormat::info::format >(count_in,
                                                                                                          reinterpret_cast< GLvoid* >(offset_in),
                                                                                                          base_vertex_in);
            }
          }

          inline static void draw(gio::buffer< BufferFormat, BufferUsage > const& buffer_in,
          ::std::uint32_t const count_in
                                  ,
                                  ::std::uint32_t const offset_in
                                  ,
                                  ::std::uint32_t const instance_count_in
                                  ,
                                  ::std::uint32_t const base_vertex_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            if (base_vertex_in == 0) {
              fnc::gl_draw_elements_instanced::call< DrawingMode, typename BufferFormat::info::format >(count_in,
                                                                                                        reinterpret_cast< GLvoid* >(offset_in),
                                                                                                        instance_count_in);
            } else {
              fnc::gl_draw_elements_instanced_base_vertex::call< DrawingMode, typename BufferFormat::info::format >(count_in,
                                                                                                                    reinterpret_cast< GLvoid* >(offset_in),
                                                                                                                    instance_count_in,
                                                                                                                    base_vertex_in);
            }
          }

          inline static void draw(gio::buffer< BufferFormat, BufferUsage > const& buffer_in,
          ::std::uint32_t const count_in
                                  ,
                                  ::std::uint32_t const min_index_in
                                  ,
                                  ::std::uint32_t const max_index_in
                                  ,
                                  ::std::uint32_t const offset_in
                                  ,
                                  ::std::uint32_t const base_vertex_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            if (base_vertex_in == 0) {
              fnc::gl_draw_range_elements::call< DrawingMode, typename BufferFormat::info::format >(min_index_in,
                                                                                                    max_index_in,
                                                                                                    count_in,
                                                                                                    reinterpret_cast< GLvoid* >(offset_in));
            } else {
              fnc::gl_draw_range_elements_base_vertex::call< DrawingMode, typename BufferFormat::info::format >(min_index_in,
                                                                                                                max_index_in,
                                                                                                                count_in,
                                                                                                                reinterpret_cast< GLvoid* >(offset_in),
                                                                                                                base_vertex_in);
            }
          }

          inline static void draw(gio::buffer< BufferFormat, BufferUsage > const& buffer_in,
          ::std::uint32_t const counts_in[]
                                  ,
                                  ::std::uint32_t const offsets_in[]
                                  ,
                                  ::std::size_t const count_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            fnc::gl_multi_draw_elements::call< DrawingMode, typename BufferFormat::info::format >(counts_in,
                                                                                                  offsets_in,
                                                                                                  count_in);
          }
      };

      struct drawable {
        protected:
          template< typename DrawingMode >
          inline void draw(::std::uint32_t const start_in,
                           ::std::uint32_t const count_in,
                           ::std::uint32_t const instance_count_in) {
            if (instance_count_in > 1) {
              fnc::gl_draw_arrays_instanced::call< DrawingMode >(start_in, count_in, instance_count_in);
            } else {
              fnc::gl_draw_arrays::call< DrawingMode >(start_in, count_in);
            }
          }

          template< typename DrawingMode >
          inline void draw(::std::uint32_t const starts_in[],
                           ::std::uint32_t const counts_in[],
                           ::std::size_t const count_in) {
            fnc::gl_multi_draw_arrays::call< DrawingMode >(starts_in, counts_in, count_in);
          }

          template< typename DrawingMode, typename BufferFormat, typename BufferUsage >
          inline void draw(gio::buffer< BufferFormat, BufferUsage > const& buffer_in,
          ::std::uint32_t const count_in
                           ,
                           ::std::uint32_t const offset_in
                           ,
                           ::std::uint32_t const instance_count_in
                           ,
                           ::std::uint32_t const base_vertex_in) {
            if (instance_count_in > 1) {
              checked_drawer< DrawingMode, BufferFormat, BufferUsage >::draw(buffer_in,
                                                                             count_in,
                                                                             offset_in,
                                                                             instance_count_in,
                                                                             base_vertex_in);
            } else {
              checked_drawer< DrawingMode, BufferFormat, BufferUsage >::draw(buffer_in,
                                                                             count_in,
                                                                             offset_in,
                                                                             base_vertex_in);
            }
          }

          template< typename DrawingMode, typename BufferFormat, typename BufferUsage >
          inline void draw(draw_mode_t const mode_in, gio::buffer< BufferFormat, BufferUsage > const& buffer_in,
          ::std::uint32_t const count_in
                           ,
                           ::std::uint32_t const min_index_in
                           ,
                           ::std::uint32_t const max_index_in
                           ,
                           ::std::uint32_t const offset_in
                           ,
                           ::std::uint32_t const base_vertex_in) {
            checked_drawer< DrawingMode, BufferFormat, BufferUsage >::draw(buffer_in,
                                                                           count_in,
                                                                           min_index_in,
                                                                           max_index_in,
                                                                           offset_in,
                                                                           base_vertex_in);
          }

          template< typename DrawingMode, typename BufferFormat, typename BufferUsage >
          inline static void draw(draw_mode_t const mode_in, gio::buffer< BufferFormat, BufferUsage > const& buffer_in ,
          ::std::uint32_t const counts_in[]
                                  ,
                                  ::std::uint32_t const offsets_in[]
                                  ,
                                  ::std::size_t const count_in) {
            checked_drawer< DrawingMode, BufferFormat, BufferUsage >::draw(buffer_in, counts_in, offsets_in, count_in);
          }
      };

    } // namespace drawing

    namespace gid = ::gtulu::internal::drawing;
    namespace gidm = ::gtulu::internal::drawing::mode;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DRAWING_HPP_ */
