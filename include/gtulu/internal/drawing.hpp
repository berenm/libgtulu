/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_DRAWING_HPP_
#define GTULU_INTERNAL_DRAWING_HPP_

#include "gtulu/namespaces.hpp"
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
                                (gl_points)
                                (gl_lines)
                                (gl_line_strip)
                                (gl_lines_adjacency)
                                (gl_line_strip_adjacency)
                                (gl_line_loop)
                                (gl_triangles)
                                (gl_triangle_strip)
                                (gl_triangles_adjacency)
                                (gl_triangle_strip_adjacency)
                                (gl_triangle_fan)
                          )

      typedef std::uint32_t draw_mode_t;

      template< typename BufferFormat >
      struct is_buffer_unsigned_integer;

      template< >
      struct is_buffer_unsigned_integer< fdat::gl_unsigned_byte > {};

      template< >
      struct is_buffer_unsigned_integer< fdat::gl_unsigned_short > {};

      template< >
      struct is_buffer_unsigned_integer< fdat::gl_unsigned_int > {};

      template< typename DrawingMode, typename BufferFormat >
      struct checked_drawer : is_buffer_unsigned_integer< BufferFormat > {
        inline static void draw(obj::buffer< BufferFormat > const& buffer, std::uint32_t const count, std::uint32_t const offset, std::uint32_t const base_vertex) {
          buf::element_array_buffer_slot::bind(buffer);

          if (base_vertex == 0) {
            fct::draw_elements< DrawingMode, typename BufferFormat::aspect::format >::call(count, reinterpret_cast< GLvoid* >(offset));
          } else {
            fct::draw_elements_base_vertex< DrawingMode, typename BufferFormat::aspect::format >::call(count, reinterpret_cast< GLvoid* >(offset), base_vertex);
          }
        }

        inline static void draw(obj::buffer< BufferFormat > const& buffer, std::uint32_t const count, std::uint32_t const offset, std::uint32_t const instance_count, std::uint32_t const base_vertex) {
          buf::element_array_buffer_slot::bind(buffer);
          if (base_vertex == 0) {
            fct::draw_elements_instanced< DrawingMode, typename BufferFormat::aspect::format >::call(count, reinterpret_cast< GLvoid* >(offset), instance_count);
          } else {
            fct::draw_elements_instanced_base_vertex< DrawingMode, typename BufferFormat::aspect::format >::call(count, reinterpret_cast< GLvoid* >(offset), instance_count, base_vertex);
          }
        }

        inline static void draw(obj::buffer< BufferFormat > const& buffer, std::uint32_t const count, std::uint32_t const min_index, std::uint32_t const max_index, std::uint32_t const offset, std::uint32_t const base_vertex) {
          buf::element_array_buffer_slot::bind(buffer);
          if (base_vertex == 0) {
            fct::draw_range_elements< DrawingMode, typename BufferFormat::aspect::format >::call(min_index, max_index, count, reinterpret_cast< GLvoid* >(offset));
          } else {
            fct::draw_range_elements_base_vertex< DrawingMode, typename BufferFormat::aspect::format >::call(min_index, max_index, count, reinterpret_cast< GLvoid* >(offset), base_vertex);
          }
        }

        inline static void draw(obj::buffer< BufferFormat > const& buffer, std::uint32_t const counts[], std::uint32_t const offsets[], std::size_t const count) {
          buf::element_array_buffer_slot::bind(buffer);
          fct::multi_draw_elements< DrawingMode, typename BufferFormat::aspect::format >::call(counts, offsets, count);
        }

      };

      struct drawable {
        template< typename DrawingMode >
        inline static void draw(std::uint32_t const start, std::uint32_t const count, std::uint32_t const instance_count) {
          if (instance_count > 1) {
            fct::draw_arrays_instanced< DrawingMode >::call(start, count, instance_count);
          } else {
            fct::draw_arrays< DrawingMode >::call(start, count);
          }
        }

        template< typename DrawingMode >
        inline static void draw(std::uint32_t const starts[], std::uint32_t const counts[], std::size_t const count) {
          fct::multi_draw_arrays< DrawingMode >::call(starts, counts, count);
        }

        template< typename DrawingMode, typename BufferFormat >
        inline static void draw(obj::buffer< BufferFormat > const& buffer, std::uint32_t const count, std::uint32_t const offset, std::uint32_t const instance_count, std::uint32_t const base_vertex) {
          if (instance_count > 1) {
            checked_drawer< DrawingMode, BufferFormat >::draw(buffer, count, offset, instance_count, base_vertex);
          } else {
            checked_drawer< DrawingMode, BufferFormat >::draw(buffer, count, offset, base_vertex);
          }
        }

        template< typename DrawingMode, typename BufferFormat >
        inline static void draw(draw_mode_t const mode, obj::buffer< BufferFormat > const& buffer, std::uint32_t const count, std::uint32_t const min_index, std::uint32_t const max_index, std::uint32_t const offset, std::uint32_t const base_vertex) {
          checked_drawer< DrawingMode, BufferFormat >::draw(buffer, count, min_index, max_index, offset, base_vertex);
        }

        template< typename DrawingMode, typename BufferFormat >
        inline static void draw(draw_mode_t const mode, obj::buffer< BufferFormat > const& buffer, std::uint32_t const counts[], std::uint32_t const offsets[], std::size_t const count) {
          checked_drawer< DrawingMode, BufferFormat >::draw(buffer, counts, offsets, count);
        }

      };

    } // namespace drawing

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DRAWING_HPP_ */
