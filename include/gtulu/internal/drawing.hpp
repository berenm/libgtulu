/**
 * @file
 * @date 18 juil. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_DRAWING_HPP_
#define GTULU_INTERNAL_DRAWING_HPP_

#include "gtulu/opengl.hpp"

#include "gtulu/internal/objects/buffer.hpp"
#include "gtulu/internal/formats/data.hpp"

namespace gtulu {
  namespace internal {

    namespace drawing {

#define DRAWING_MODES ((points, GL_POINTS)) \
                      ((lines, GL_LINES)) \
                      ((line_strip, GL_LINE_STRIP)) \
                      ((lines_adjacency, GL_LINES_ADJACENCY)) \
                      ((line_strip_adjacency, GL_LINE_STRIP_ADJACENCY)) \
                      ((line_loop, GL_LINE_LOOP)) \
                      ((triangles, GL_TRIANGLES)) \
                      ((triangle_strip, GL_TRIANGLE_STRIP)) \
                      ((triangles_adjacency, GL_TRIANGLES_ADJACENCY)) \
                      ((triangle_strip_adjacency, GL_TRIANGLE_STRIP_ADJACENCY)) \
                      ((triangle_fan, GL_TRIANGLE_FAN)) \

      namespace mode {
#define CONSTANT_LIST DRAWING_MODES
#include "meta/declare_constants.hpp"
#undef CONSTANT_LIST
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
              __gl_debug(glDrawElements, (mode::from_type< drawing_mode_t >())(count)(fdf::from_type< typename buffer_format_t::info::format >())(reinterpret_cast< GLvoid* > (offset)));
              glDrawElements(mode::from_type< drawing_mode_t >::value, count, fdf::from_type<
                  typename buffer_format_t::info::format >::value, reinterpret_cast< GLvoid* > (offset));
            } else {
              __gl_debug(glDrawElementsBaseVertex, (mode::from_type< drawing_mode_t >())(count)(fdf::from_type< typename buffer_format_t::info::format >())(reinterpret_cast< GLvoid* > (offset))(base_vertex));
              glDrawElementsBaseVertex(mode::from_type< drawing_mode_t >::value, count, fdf::from_type<
                  typename buffer_format_t::info::format >::value, reinterpret_cast< GLvoid* > (offset), base_vertex);
            }
            __gl_check_error
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t count, const ::boost::uint32_t offset,
                                  const ::boost::uint32_t instance_count, const ::boost::uint32_t base_vertex) {
            gib::element_array_buffer_slot::bind(buffer);
            if (base_vertex == 0) {
              __gl_debug(glDrawElementsInstanced, (mode::from_type< drawing_mode_t >())(count)(fdf::from_type< typename buffer_format_t::info::format >())(reinterpret_cast< GLvoid* > (offset))(instance_count));
              glDrawElementsInstanced(mode::from_type< drawing_mode_t >::value, count, fdf::from_type<
                  typename buffer_format_t::info::format >::value, reinterpret_cast< GLvoid* > (offset), instance_count);
            } else {
              __gl_debug(glDrawElementsInstancedBaseVertex, (mode::from_type< drawing_mode_t >())(count)(fdf::from_type< typename buffer_format_t::info::format >())(reinterpret_cast< GLvoid* > (offset))(instance_count)(base_vertex));
              glDrawElementsInstancedBaseVertex(mode::from_type< drawing_mode_t >::value, count, fdf::from_type<
                  typename buffer_format_t::info::format >::value, reinterpret_cast< GLvoid* > (offset),
                  instance_count, base_vertex);
            }
            __gl_check_error
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t count, const ::boost::uint32_t min_index,
                                  const ::boost::uint32_t max_index, const ::boost::uint32_t offset,
                                  const ::boost::uint32_t base_vertex) {
            gib::element_array_buffer_slot::bind(buffer);
            if (base_vertex == 0) {
              __gl_debug(glDrawRangeElements, (mode::from_type< drawing_mode_t >())(min_index)(max_index)(count)(fdf::from_type< typename buffer_format_t::info::format >())(reinterpret_cast< GLvoid* > (offset)));
              glDrawRangeElements(mode::from_type< drawing_mode_t >::value, min_index, max_index, count,
                  fdf::from_type< typename buffer_format_t::info::format >::value, reinterpret_cast< GLvoid* > (offset));
            } else {
              __gl_debug(glDrawRangeElementsBaseVertex, (mode::from_type< drawing_mode_t >())(min_index)(max_index)(count)(fdf::from_type< typename buffer_format_t::info::format >())(reinterpret_cast< GLvoid* > (offset))(base_vertex));
              glDrawRangeElementsBaseVertex(mode::from_type< drawing_mode_t >::value, min_index, max_index, count,
                  fdf::from_type< typename buffer_format_t::info::format >::value,
                  reinterpret_cast< GLvoid* > (offset), base_vertex);
            }
            __gl_check_error
          }

          inline static void draw(const gio::buffer< buffer_format_t, buffer_usage_t >& buffer,
                                  const ::boost::uint32_t counts[], const ::boost::uint32_t offsets[],
                                  const ::std::size_t count) {
            gib::element_array_buffer_slot::bind(buffer);
            __gl_debug(glMultiDrawElements, (mode::from_type< drawing_mode_t >())(counts)(fdf::from_type< typename buffer_format_t::info::format >())(offsets)(count));
            glMultiDrawElements(mode::from_type< drawing_mode_t >::value, counts, fdf::from_type<
                typename buffer_format_t::info::format >::value, offsets, count);
            __gl_check_error
          }
      };

      struct drawable {
        protected:
          template< typename drawing_mode_t >
          inline void draw(const ::boost::uint32_t start, const ::boost::uint32_t count,
                           const ::boost::uint32_t instance_count) {
            if (instance_count > 1) {
              __gl_debug(glDrawArraysInstanced, (mode::from_type< drawing_mode_t >())(start)(count)(instance_count));
              glDrawArraysInstanced(mode::from_type< drawing_mode_t >::value, start, count, instance_count);
            } else {
              __gl_debug(glDrawArrays, (mode::from_type< drawing_mode_t >())(start)(count));
              glDrawArrays(mode::from_type< drawing_mode_t >::value, start, count);
            }
            __gl_check_error
          }

          template< typename drawing_mode_t >
          inline void draw(const ::boost::uint32_t starts[], const ::boost::uint32_t counts[],
                           const ::std::size_t count) {
            __gl_debug(glMultiDrawArrays, (mode::from_type< drawing_mode_t >())(starts)(counts)(count));
            glMultiDrawArrays(mode::from_type< drawing_mode_t >::value, starts, counts, count);
            __gl_check_error
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
