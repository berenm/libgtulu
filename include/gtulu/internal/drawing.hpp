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

      typedef ::std::uint32_t draw_mode_t;

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
          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer_in,
                                  const ::std::uint32_t count_in,
                                  const ::std::uint32_t offset_in,
                                  const ::std::uint32_t base_vertex_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            if (base_vertex_in == 0) {
              fnc::gl_draw_elements::call< drawing_mode_t, typename buffer_format_t::info::format >(count_in,
                                                                                                    reinterpret_cast< GLvoid* > (offset_in));
            } else {
              fnc::gl_draw_elements_base_vertex::call< drawing_mode_t, typename buffer_format_t::info::format >(count_in,
                                                                                                                reinterpret_cast< GLvoid* > (offset_in),
                                                                                                                base_vertex_in);
            }
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer_in,
                                  const ::std::uint32_t count_in,
                                  const ::std::uint32_t offset_in,
                                  const ::std::uint32_t instance_count_in,
                                  const ::std::uint32_t base_vertex_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            if (base_vertex_in == 0) {
              fnc::gl_draw_elements_instanced::call< drawing_mode_t, typename buffer_format_t::info::format >(count_in,
                                                                                                              reinterpret_cast< GLvoid* > (offset_in),
                                                                                                              instance_count_in);
            } else {
              fnc::gl_draw_elements_instanced_base_vertex::call< drawing_mode_t, typename buffer_format_t::info::format >(count_in,
                                                                                                                          reinterpret_cast< GLvoid* > (offset_in),
                                                                                                                          instance_count_in,
                                                                                                                          base_vertex_in);
            }
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer_in,
                                  const ::std::uint32_t count_in,
                                  const ::std::uint32_t min_index_in,
                                  const ::std::uint32_t max_index_in,
                                  const ::std::uint32_t offset_in,
                                  const ::std::uint32_t base_vertex_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            if (base_vertex_in == 0) {
              fnc::gl_draw_range_elements::call< drawing_mode_t, typename buffer_format_t::info::format >(min_index_in,
                                                                                                          max_index_in,
                                                                                                          count_in,
                                                                                                          reinterpret_cast< GLvoid* > (offset_in));
            } else {
              fnc::gl_draw_range_elements_base_vertex::call< drawing_mode_t, typename buffer_format_t::info::format >(min_index_in,
                                                                                                                      max_index_in,
                                                                                                                      count_in,
                                                                                                                      reinterpret_cast< GLvoid* > (offset_in),
                                                                                                                      base_vertex_in);
            }
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer_in,
                                  const ::std::uint32_t counts_in[],
                                  const ::std::uint32_t offsets_in[],
                                  const ::std::size_t count_in) {
            gib::element_array_buffer_slot::bind(buffer_in);
            fnc::gl_multi_draw_elements::call< drawing_mode_t, typename buffer_format_t::info::format >(counts_in,
                                                                                                        offsets_in,
                                                                                                        count_in);
          }
      };

      struct drawable {
        protected:
          template< typename drawing_mode_t >
          inline void draw(const ::std::uint32_t start_in,
                           const ::std::uint32_t count_in,
                           const ::std::uint32_t instance_count_in) {
            if (instance_count_in > 1) {
              fnc::gl_draw_arrays_instanced::call< drawing_mode_t >(start_in, count_in, instance_count_in);
            } else {
              fnc::gl_draw_arrays::call< drawing_mode_t >(start_in, count_in);
            }
          }

          template< typename drawing_mode_t >
          inline void draw(const ::std::uint32_t starts_in[],
                           const ::std::uint32_t counts_in[],
                           const ::std::size_t count_in) {
            fnc::gl_multi_draw_arrays::call< drawing_mode_t >(starts_in, counts_in, count_in);
          }

          template< typename drawing_mode_t, typename buffer_format_t, typename buffer_usage_t >
          inline void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer_in,
                           const ::std::uint32_t count_in,
                           const ::std::uint32_t offset_in,
                           const ::std::uint32_t instance_count_in,
                           const ::std::uint32_t base_vertex_in) {
            if (instance_count_in > 1) {
              checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer_in,
                                                                                      count_in,
                                                                                      offset_in,
                                                                                      instance_count_in,
                                                                                      base_vertex_in);
            } else {
              checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer_in,
                                                                                      count_in,
                                                                                      offset_in,
                                                                                      base_vertex_in);
            }
          }

          template< typename drawing_mode_t, typename buffer_format_t, typename buffer_usage_t >
          inline void draw(const draw_mode_t mode_in,
                           const gio::buffer< buffer_format_t, buffer_usage_t >& buffer_in,
                           const ::std::uint32_t count_in,
                           const ::std::uint32_t min_index_in,
                           const ::std::uint32_t max_index_in,
                           const ::std::uint32_t offset_in,
                           const ::std::uint32_t base_vertex_in) {
            checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer_in,
                                                                                    count_in,
                                                                                    min_index_in,
                                                                                    max_index_in,
                                                                                    offset_in,
                                                                                    base_vertex_in);
          }

          template< typename drawing_mode_t, typename buffer_format_t, typename buffer_usage_t >
          inline static void draw(const draw_mode_t mode_in,
                                  const gio::buffer< buffer_format_t, buffer_usage_t >& buffer_in,
                                  const ::std::uint32_t counts_in[],
                                  const ::std::uint32_t offsets_in[],
                                  const ::std::size_t count_in) {
            checked_drawer< drawing_mode_t, buffer_format_t, buffer_usage_t >::draw(buffer_in,
                                                                                    counts_in,
                                                                                    offsets_in,
                                                                                    count_in);
          }
      };

    } // namespace drawing

    namespace gid = ::gtulu::internal::drawing;
    namespace gidm = ::gtulu::internal::drawing::mode;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_DRAWING_HPP_ */
