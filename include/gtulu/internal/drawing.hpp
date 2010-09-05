/**
 * @file
 * @date 18 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_DRAWING_HPP_
#define GTULU_INTERNAL_DRAWING_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/objects/buffer.hpp"
#include "gtulu/internal/formats/data.hpp"

namespace gtulu {
  namespace internal {

    namespace drawing {

      namespace mode {
        typedef cst::gl_points gl_points;
        typedef cst::gl_lines gl_lines;
        typedef cst::gl_line_strip gl_line_strip;
        typedef cst::gl_lines_adjacency gl_lines_adjacency;
        typedef cst::gl_line_strip_adjacency gl_line_strip_adjacency;
        typedef cst::gl_line_loop gl_line_loop;
        typedef cst::gl_triangles gl_triangles;
        typedef cst::gl_triangle_strip gl_triangle_strip;
        typedef cst::gl_triangles_adjacency gl_triangles_adjacency;
        typedef cst::gl_triangle_strip_adjacency gl_triangle_strip_adjacency;
        typedef cst::gl_triangle_fan gl_triangle_fan;
      } // namespace mode

      typedef ::boost::uint32_t draw_mode_t;

      template< typename buffer_format_t >
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

      template< typename drawing_mode_t, typename buffer_format_t, typename buffer_usage_t >
      struct checked_drawer: is_buffer_unsigned_integer< buffer_format_t > {
          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t count, const ::boost::uint32_t offset,
                                  const ::boost::uint32_t base_vertex) {
            gib::element_array_buffer_slot::bind(buffer);
            if (base_vertex == 0) {
              fnc::gl_draw_elements::call< drawing_mode_t, typename buffer_format_t::info::format >(count,
                  reinterpret_cast< GLvoid* > (offset));
            } else {
              fnc::gl_draw_elements_base_vertex::call< drawing_mode_t, typename buffer_format_t::info::format >(count,
                  reinterpret_cast< GLvoid* > (offset), base_vertex);
            }
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t count, const ::boost::uint32_t offset,
                                  const ::boost::uint32_t instance_count, const ::boost::uint32_t base_vertex) {
            gib::element_array_buffer_slot::bind(buffer);
            if (base_vertex == 0) {
              fnc::gl_draw_elements_instanced::call< drawing_mode_t, typename buffer_format_t::info::format >(count,
                  reinterpret_cast< GLvoid* > (offset), instance_count);
            } else {
              fnc::gl_draw_elements_instanced_base_vertex::call< drawing_mode_t, typename buffer_format_t::info::format >(
                  count, reinterpret_cast< GLvoid* > (offset), instance_count, base_vertex);
            }
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t count, const ::boost::uint32_t min_index,
                                  const ::boost::uint32_t max_index, const ::boost::uint32_t offset,
                                  const ::boost::uint32_t base_vertex) {
            gib::element_array_buffer_slot::bind(buffer);
            if (base_vertex == 0) {
              fnc::gl_draw_range_elements::call< drawing_mode_t, typename buffer_format_t::info::format >(min_index,
                  max_index, count, reinterpret_cast< GLvoid* > (offset));
            } else {
              fnc::gl_draw_range_elements_base_vertex::call< drawing_mode_t, typename buffer_format_t::info::format >(
                  min_index, max_index, count, reinterpret_cast< GLvoid* > (offset), base_vertex);
            }
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t counts[], const ::boost::uint32_t offsets[],
                                  const ::std::size_t count) {
            gib::element_array_buffer_slot::bind(buffer);
            fnc::gl_multi_draw_elements::call< drawing_mode_t, typename buffer_format_t::info::format >(counts,
                offsets, count);
          }
      };

      struct drawable {
        protected:
          template< typename drawing_mode_t >
          inline void draw(const ::boost::uint32_t start, const ::boost::uint32_t count,
                           const ::boost::uint32_t instance_count) {
            if (instance_count > 1) {
              fnc::gl_draw_arrays_instanced::call< drawing_mode_t >(start, count, instance_count);
            } else {
              fnc::gl_draw_arrays::call< drawing_mode_t >(start, count);
            }
          }

          template< typename drawing_mode_t >
          inline void draw(const ::boost::uint32_t starts[], const ::boost::uint32_t counts[],
                           const ::std::size_t count) {
            fnc::gl_multi_draw_arrays::call< drawing_mode_t >(starts, counts, count);
          }

          template< typename drawing_mode_t, typename buffer_format_t, typename buffer_usage_t >
          inline void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer, const ::boost::uint32_t count,
                           const ::boost::uint32_t offset, const ::boost::uint32_t instance_count,
                           const ::boost::uint32_t base_vertex) {
            if (instance_count > 1) {
              checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer, count, offset,
                  instance_count, base_vertex);
            } else {
              checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer, count, offset,
                  base_vertex);
            }
          }

          template< typename drawing_mode_t, typename buffer_format_t, typename buffer_usage_t >
          inline void draw(const draw_mode_t mode, const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                           const ::boost::uint32_t count, const ::boost::uint32_t min_index,
                           const ::boost::uint32_t max_index, const ::boost::uint32_t offset,
                           const ::boost::uint32_t base_vertex) {
            checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer, count, min_index,
                max_index, offset, base_vertex);
          }

          template< typename drawing_mode_t, typename buffer_format_t, typename buffer_usage_t >
          inline static void draw(const draw_mode_t mode, const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t counts[], const ::boost::uint32_t offsets[],
                                  const ::std::size_t count) {
            checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer, counts, offsets, count);
          }
      };

    } // namespace drawing

    namespace gid = ::gtulu::internal::drawing;
    namespace gidm = ::gtulu::internal::drawing::mode;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DRAWING_HPP_ */
