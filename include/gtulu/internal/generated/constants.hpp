/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */
 
/******************************************************************************
 * THIS FILE IS AUTO GENERATED FROM scripts/generate_gl_headers.py,           *
 * ANY CHANGE WILL BE OVERWRITTEN                                             *
 ******************************************************************************/
 
#ifndef IN_GTULU_INTERNAL_CONSTANTS_HPP_
# error "gtulu/internal/generated/constants.hpp should not be included directly, please include gtulu/internal/constants.hpp instead."
#endif /* IN_GTULU_INTERNAL_CONSTANTS_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_CONSTANTS_HPP_
#define GTULU_INTERNAL_GENERATED_CONSTANTS_HPP_

#include "gtulu/internal/generated/constants_fwd.hpp"

namespace gtulu {
  namespace internal {
  
    namespace generated {
    } // namespace generated

    namespace gig = ::gtulu::internal::generated;

    namespace generated {

      namespace gl {
      namespace v1_0 {
        namespace cst {
          struct gl_version_1_0: public ::gtulu::internal::constant::gl_constant< gl_version_1_0 > {
              static inline char const* name() { return "version_1_0"; }
              static ::std::uint64_t const value = GL_VERSION_1_0;
          };
        } // namespace cst
      } // namespace v1_0
      namespace v1_1 {
        namespace cst {
          struct gl_alpha: public ::gtulu::internal::constant::gl_constant< gl_alpha > {
              static inline char const* name() { return "alpha"; }
              static ::std::uint64_t const value = GL_ALPHA;
          };
          struct gl_always: public ::gtulu::internal::constant::gl_constant< gl_always > {
              static inline char const* name() { return "always"; }
              static ::std::uint64_t const value = GL_ALWAYS;
          };
          struct gl_and: public ::gtulu::internal::constant::gl_constant< gl_and > {
              static inline char const* name() { return "and"; }
              static ::std::uint64_t const value = GL_AND;
          };
          struct gl_and_inverted: public ::gtulu::internal::constant::gl_constant< gl_and_inverted > {
              static inline char const* name() { return "and_inverted"; }
              static ::std::uint64_t const value = GL_AND_INVERTED;
          };
          struct gl_and_reverse: public ::gtulu::internal::constant::gl_constant< gl_and_reverse > {
              static inline char const* name() { return "and_reverse"; }
              static ::std::uint64_t const value = GL_AND_REVERSE;
          };
          struct gl_back: public ::gtulu::internal::constant::gl_constant< gl_back > {
              static inline char const* name() { return "back"; }
              static ::std::uint64_t const value = GL_BACK;
          };
          struct gl_back_left: public ::gtulu::internal::constant::gl_constant< gl_back_left > {
              static inline char const* name() { return "back_left"; }
              static ::std::uint64_t const value = GL_BACK_LEFT;
          };
          struct gl_back_right: public ::gtulu::internal::constant::gl_constant< gl_back_right > {
              static inline char const* name() { return "back_right"; }
              static ::std::uint64_t const value = GL_BACK_RIGHT;
          };
          struct gl_blend: public ::gtulu::internal::constant::gl_constant< gl_blend > {
              static inline char const* name() { return "blend"; }
              static ::std::uint64_t const value = GL_BLEND;
          };
          struct gl_blend_dst: public ::gtulu::internal::constant::gl_constant< gl_blend_dst > {
              static inline char const* name() { return "blend_dst"; }
              static ::std::uint64_t const value = GL_BLEND_DST;
          };
          struct gl_blend_src: public ::gtulu::internal::constant::gl_constant< gl_blend_src > {
              static inline char const* name() { return "blend_src"; }
              static ::std::uint64_t const value = GL_BLEND_SRC;
          };
          struct gl_blue: public ::gtulu::internal::constant::gl_constant< gl_blue > {
              static inline char const* name() { return "blue"; }
              static ::std::uint64_t const value = GL_BLUE;
          };
          struct gl_byte: public ::gtulu::internal::constant::gl_constant< gl_byte > {
              static inline char const* name() { return "byte"; }
              static ::std::uint64_t const value = GL_BYTE;
          };
          struct gl_ccw: public ::gtulu::internal::constant::gl_constant< gl_ccw > {
              static inline char const* name() { return "ccw"; }
              static ::std::uint64_t const value = GL_CCW;
          };
          struct gl_clear: public ::gtulu::internal::constant::gl_constant< gl_clear > {
              static inline char const* name() { return "clear"; }
              static ::std::uint64_t const value = GL_CLEAR;
          };
          struct gl_color: public ::gtulu::internal::constant::gl_constant< gl_color > {
              static inline char const* name() { return "color"; }
              static ::std::uint64_t const value = GL_COLOR;
          };
          struct gl_color_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_color_buffer_bit > {
              static inline char const* name() { return "color_buffer_bit"; }
              static ::std::uint64_t const value = GL_COLOR_BUFFER_BIT;
          };
          struct gl_color_clear_value: public ::gtulu::internal::constant::gl_constant< gl_color_clear_value > {
              static inline char const* name() { return "color_clear_value"; }
              static ::std::uint64_t const value = GL_COLOR_CLEAR_VALUE;
          };
          struct gl_color_logic_op: public ::gtulu::internal::constant::gl_constant< gl_color_logic_op > {
              static inline char const* name() { return "color_logic_op"; }
              static ::std::uint64_t const value = GL_COLOR_LOGIC_OP;
          };
          struct gl_color_writemask: public ::gtulu::internal::constant::gl_constant< gl_color_writemask > {
              static inline char const* name() { return "color_writemask"; }
              static ::std::uint64_t const value = GL_COLOR_WRITEMASK;
          };
          struct gl_copy: public ::gtulu::internal::constant::gl_constant< gl_copy > {
              static inline char const* name() { return "copy"; }
              static ::std::uint64_t const value = GL_COPY;
          };
          struct gl_copy_inverted: public ::gtulu::internal::constant::gl_constant< gl_copy_inverted > {
              static inline char const* name() { return "copy_inverted"; }
              static ::std::uint64_t const value = GL_COPY_INVERTED;
          };
          struct gl_cull_face: public ::gtulu::internal::constant::gl_constant< gl_cull_face > {
              static inline char const* name() { return "cull_face"; }
              static ::std::uint64_t const value = GL_CULL_FACE;
          };
          struct gl_cull_face_mode: public ::gtulu::internal::constant::gl_constant< gl_cull_face_mode > {
              static inline char const* name() { return "cull_face_mode"; }
              static ::std::uint64_t const value = GL_CULL_FACE_MODE;
          };
          struct gl_cw: public ::gtulu::internal::constant::gl_constant< gl_cw > {
              static inline char const* name() { return "cw"; }
              static ::std::uint64_t const value = GL_CW;
          };
          struct gl_decr: public ::gtulu::internal::constant::gl_constant< gl_decr > {
              static inline char const* name() { return "decr"; }
              static ::std::uint64_t const value = GL_DECR;
          };
          struct gl_depth: public ::gtulu::internal::constant::gl_constant< gl_depth > {
              static inline char const* name() { return "depth"; }
              static ::std::uint64_t const value = GL_DEPTH;
          };
          struct gl_depth_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_depth_buffer_bit > {
              static inline char const* name() { return "depth_buffer_bit"; }
              static ::std::uint64_t const value = GL_DEPTH_BUFFER_BIT;
          };
          struct gl_depth_clear_value: public ::gtulu::internal::constant::gl_constant< gl_depth_clear_value > {
              static inline char const* name() { return "depth_clear_value"; }
              static ::std::uint64_t const value = GL_DEPTH_CLEAR_VALUE;
          };
          struct gl_depth_component: public ::gtulu::internal::constant::gl_constant< gl_depth_component > {
              static inline char const* name() { return "depth_component"; }
              static ::std::uint64_t const value = GL_DEPTH_COMPONENT;
          };
          struct gl_depth_func: public ::gtulu::internal::constant::gl_constant< gl_depth_func > {
              static inline char const* name() { return "depth_func"; }
              static ::std::uint64_t const value = GL_DEPTH_FUNC;
          };
          struct gl_depth_range: public ::gtulu::internal::constant::gl_constant< gl_depth_range > {
              static inline char const* name() { return "depth_range"; }
              static ::std::uint64_t const value = GL_DEPTH_RANGE;
          };
          struct gl_depth_test: public ::gtulu::internal::constant::gl_constant< gl_depth_test > {
              static inline char const* name() { return "depth_test"; }
              static ::std::uint64_t const value = GL_DEPTH_TEST;
          };
          struct gl_depth_writemask: public ::gtulu::internal::constant::gl_constant< gl_depth_writemask > {
              static inline char const* name() { return "depth_writemask"; }
              static ::std::uint64_t const value = GL_DEPTH_WRITEMASK;
          };
          struct gl_dither: public ::gtulu::internal::constant::gl_constant< gl_dither > {
              static inline char const* name() { return "dither"; }
              static ::std::uint64_t const value = GL_DITHER;
          };
          struct gl_dont_care: public ::gtulu::internal::constant::gl_constant< gl_dont_care > {
              static inline char const* name() { return "dont_care"; }
              static ::std::uint64_t const value = GL_DONT_CARE;
          };
          struct gl_double: public ::gtulu::internal::constant::gl_constant< gl_double > {
              static inline char const* name() { return "double"; }
              static ::std::uint64_t const value = GL_DOUBLE;
          };
          struct gl_doublebuffer: public ::gtulu::internal::constant::gl_constant< gl_doublebuffer > {
              static inline char const* name() { return "doublebuffer"; }
              static ::std::uint64_t const value = GL_DOUBLEBUFFER;
          };
          struct gl_draw_buffer: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer > {
              static inline char const* name() { return "draw_buffer"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER;
          };
          struct gl_dst_alpha: public ::gtulu::internal::constant::gl_constant< gl_dst_alpha > {
              static inline char const* name() { return "dst_alpha"; }
              static ::std::uint64_t const value = GL_DST_ALPHA;
          };
          struct gl_dst_color: public ::gtulu::internal::constant::gl_constant< gl_dst_color > {
              static inline char const* name() { return "dst_color"; }
              static ::std::uint64_t const value = GL_DST_COLOR;
          };
          struct gl_equal: public ::gtulu::internal::constant::gl_constant< gl_equal > {
              static inline char const* name() { return "equal"; }
              static ::std::uint64_t const value = GL_EQUAL;
          };
          struct gl_equiv: public ::gtulu::internal::constant::gl_constant< gl_equiv > {
              static inline char const* name() { return "equiv"; }
              static ::std::uint64_t const value = GL_EQUIV;
          };
          struct gl_extensions: public ::gtulu::internal::constant::gl_constant< gl_extensions > {
              static inline char const* name() { return "extensions"; }
              static ::std::uint64_t const value = GL_EXTENSIONS;
          };
          struct gl_false: public ::gtulu::internal::constant::gl_constant< gl_false > {
              static inline char const* name() { return "false"; }
              static ::std::uint64_t const value = GL_FALSE;
          };
          struct gl_fastest: public ::gtulu::internal::constant::gl_constant< gl_fastest > {
              static inline char const* name() { return "fastest"; }
              static ::std::uint64_t const value = GL_FASTEST;
          };
          struct gl_fill: public ::gtulu::internal::constant::gl_constant< gl_fill > {
              static inline char const* name() { return "fill"; }
              static ::std::uint64_t const value = GL_FILL;
          };
          struct gl_float: public ::gtulu::internal::constant::gl_constant< gl_float > {
              static inline char const* name() { return "float"; }
              static ::std::uint64_t const value = GL_FLOAT;
          };
          struct gl_front: public ::gtulu::internal::constant::gl_constant< gl_front > {
              static inline char const* name() { return "front"; }
              static ::std::uint64_t const value = GL_FRONT;
          };
          struct gl_front_and_back: public ::gtulu::internal::constant::gl_constant< gl_front_and_back > {
              static inline char const* name() { return "front_and_back"; }
              static ::std::uint64_t const value = GL_FRONT_AND_BACK;
          };
          struct gl_front_face: public ::gtulu::internal::constant::gl_constant< gl_front_face > {
              static inline char const* name() { return "front_face"; }
              static ::std::uint64_t const value = GL_FRONT_FACE;
          };
          struct gl_front_left: public ::gtulu::internal::constant::gl_constant< gl_front_left > {
              static inline char const* name() { return "front_left"; }
              static ::std::uint64_t const value = GL_FRONT_LEFT;
          };
          struct gl_front_right: public ::gtulu::internal::constant::gl_constant< gl_front_right > {
              static inline char const* name() { return "front_right"; }
              static ::std::uint64_t const value = GL_FRONT_RIGHT;
          };
          struct gl_gequal: public ::gtulu::internal::constant::gl_constant< gl_gequal > {
              static inline char const* name() { return "gequal"; }
              static ::std::uint64_t const value = GL_GEQUAL;
          };
          struct gl_greater: public ::gtulu::internal::constant::gl_constant< gl_greater > {
              static inline char const* name() { return "greater"; }
              static ::std::uint64_t const value = GL_GREATER;
          };
          struct gl_green: public ::gtulu::internal::constant::gl_constant< gl_green > {
              static inline char const* name() { return "green"; }
              static ::std::uint64_t const value = GL_GREEN;
          };
          struct gl_incr: public ::gtulu::internal::constant::gl_constant< gl_incr > {
              static inline char const* name() { return "incr"; }
              static ::std::uint64_t const value = GL_INCR;
          };
          struct gl_int: public ::gtulu::internal::constant::gl_constant< gl_int > {
              static inline char const* name() { return "int"; }
              static ::std::uint64_t const value = GL_INT;
          };
          struct gl_invalid_enum: public ::gtulu::internal::constant::gl_constant< gl_invalid_enum > {
              static inline char const* name() { return "invalid_enum"; }
              static ::std::uint64_t const value = GL_INVALID_ENUM;
          };
          struct gl_invalid_operation: public ::gtulu::internal::constant::gl_constant< gl_invalid_operation > {
              static inline char const* name() { return "invalid_operation"; }
              static ::std::uint64_t const value = GL_INVALID_OPERATION;
          };
          struct gl_invalid_value: public ::gtulu::internal::constant::gl_constant< gl_invalid_value > {
              static inline char const* name() { return "invalid_value"; }
              static ::std::uint64_t const value = GL_INVALID_VALUE;
          };
          struct gl_invert: public ::gtulu::internal::constant::gl_constant< gl_invert > {
              static inline char const* name() { return "invert"; }
              static ::std::uint64_t const value = GL_INVERT;
          };
          struct gl_keep: public ::gtulu::internal::constant::gl_constant< gl_keep > {
              static inline char const* name() { return "keep"; }
              static ::std::uint64_t const value = GL_KEEP;
          };
          struct gl_left: public ::gtulu::internal::constant::gl_constant< gl_left > {
              static inline char const* name() { return "left"; }
              static ::std::uint64_t const value = GL_LEFT;
          };
          struct gl_lequal: public ::gtulu::internal::constant::gl_constant< gl_lequal > {
              static inline char const* name() { return "lequal"; }
              static ::std::uint64_t const value = GL_LEQUAL;
          };
          struct gl_less: public ::gtulu::internal::constant::gl_constant< gl_less > {
              static inline char const* name() { return "less"; }
              static ::std::uint64_t const value = GL_LESS;
          };
          struct gl_line: public ::gtulu::internal::constant::gl_constant< gl_line > {
              static inline char const* name() { return "line"; }
              static ::std::uint64_t const value = GL_LINE;
          };
          struct gl_linear: public ::gtulu::internal::constant::gl_constant< gl_linear > {
              static inline char const* name() { return "linear"; }
              static ::std::uint64_t const value = GL_LINEAR;
          };
          struct gl_linear_mipmap_linear: public ::gtulu::internal::constant::gl_constant< gl_linear_mipmap_linear > {
              static inline char const* name() { return "linear_mipmap_linear"; }
              static ::std::uint64_t const value = GL_LINEAR_MIPMAP_LINEAR;
          };
          struct gl_linear_mipmap_nearest: public ::gtulu::internal::constant::gl_constant< gl_linear_mipmap_nearest > {
              static inline char const* name() { return "linear_mipmap_nearest"; }
              static ::std::uint64_t const value = GL_LINEAR_MIPMAP_NEAREST;
          };
          struct gl_lines: public ::gtulu::internal::constant::gl_constant< gl_lines > {
              static inline char const* name() { return "lines"; }
              static ::std::uint64_t const value = GL_LINES;
          };
          struct gl_line_loop: public ::gtulu::internal::constant::gl_constant< gl_line_loop > {
              static inline char const* name() { return "line_loop"; }
              static ::std::uint64_t const value = GL_LINE_LOOP;
          };
          struct gl_line_smooth: public ::gtulu::internal::constant::gl_constant< gl_line_smooth > {
              static inline char const* name() { return "line_smooth"; }
              static ::std::uint64_t const value = GL_LINE_SMOOTH;
          };
          struct gl_line_smooth_hint: public ::gtulu::internal::constant::gl_constant< gl_line_smooth_hint > {
              static inline char const* name() { return "line_smooth_hint"; }
              static ::std::uint64_t const value = GL_LINE_SMOOTH_HINT;
          };
          struct gl_line_strip: public ::gtulu::internal::constant::gl_constant< gl_line_strip > {
              static inline char const* name() { return "line_strip"; }
              static ::std::uint64_t const value = GL_LINE_STRIP;
          };
          struct gl_line_width: public ::gtulu::internal::constant::gl_constant< gl_line_width > {
              static inline char const* name() { return "line_width"; }
              static ::std::uint64_t const value = GL_LINE_WIDTH;
          };
          struct gl_line_width_granularity: public ::gtulu::internal::constant::gl_constant< gl_line_width_granularity > {
              static inline char const* name() { return "line_width_granularity"; }
              static ::std::uint64_t const value = GL_LINE_WIDTH_GRANULARITY;
          };
          struct gl_line_width_range: public ::gtulu::internal::constant::gl_constant< gl_line_width_range > {
              static inline char const* name() { return "line_width_range"; }
              static ::std::uint64_t const value = GL_LINE_WIDTH_RANGE;
          };
          struct gl_logic_op_mode: public ::gtulu::internal::constant::gl_constant< gl_logic_op_mode > {
              static inline char const* name() { return "logic_op_mode"; }
              static ::std::uint64_t const value = GL_LOGIC_OP_MODE;
          };
          struct gl_max_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_texture_size > {
              static inline char const* name() { return "max_texture_size"; }
              static ::std::uint64_t const value = GL_MAX_TEXTURE_SIZE;
          };
          struct gl_max_viewport_dims: public ::gtulu::internal::constant::gl_constant< gl_max_viewport_dims > {
              static inline char const* name() { return "max_viewport_dims"; }
              static ::std::uint64_t const value = GL_MAX_VIEWPORT_DIMS;
          };
          struct gl_nand: public ::gtulu::internal::constant::gl_constant< gl_nand > {
              static inline char const* name() { return "nand"; }
              static ::std::uint64_t const value = GL_NAND;
          };
          struct gl_nearest: public ::gtulu::internal::constant::gl_constant< gl_nearest > {
              static inline char const* name() { return "nearest"; }
              static ::std::uint64_t const value = GL_NEAREST;
          };
          struct gl_nearest_mipmap_linear: public ::gtulu::internal::constant::gl_constant< gl_nearest_mipmap_linear > {
              static inline char const* name() { return "nearest_mipmap_linear"; }
              static ::std::uint64_t const value = GL_NEAREST_MIPMAP_LINEAR;
          };
          struct gl_nearest_mipmap_nearest: public ::gtulu::internal::constant::gl_constant< gl_nearest_mipmap_nearest > {
              static inline char const* name() { return "nearest_mipmap_nearest"; }
              static ::std::uint64_t const value = GL_NEAREST_MIPMAP_NEAREST;
          };
          struct gl_never: public ::gtulu::internal::constant::gl_constant< gl_never > {
              static inline char const* name() { return "never"; }
              static ::std::uint64_t const value = GL_NEVER;
          };
          struct gl_nicest: public ::gtulu::internal::constant::gl_constant< gl_nicest > {
              static inline char const* name() { return "nicest"; }
              static ::std::uint64_t const value = GL_NICEST;
          };
          struct gl_none: public ::gtulu::internal::constant::gl_constant< gl_none > {
              static inline char const* name() { return "none"; }
              static ::std::uint64_t const value = GL_NONE;
          };
          struct gl_noop: public ::gtulu::internal::constant::gl_constant< gl_noop > {
              static inline char const* name() { return "noop"; }
              static ::std::uint64_t const value = GL_NOOP;
          };
          struct gl_nor: public ::gtulu::internal::constant::gl_constant< gl_nor > {
              static inline char const* name() { return "nor"; }
              static ::std::uint64_t const value = GL_NOR;
          };
          struct gl_notequal: public ::gtulu::internal::constant::gl_constant< gl_notequal > {
              static inline char const* name() { return "notequal"; }
              static ::std::uint64_t const value = GL_NOTEQUAL;
          };
          struct gl_no_error: public ::gtulu::internal::constant::gl_constant< gl_no_error > {
              static inline char const* name() { return "no_error"; }
              static ::std::uint64_t const value = GL_NO_ERROR;
          };
          struct gl_one: public ::gtulu::internal::constant::gl_constant< gl_one > {
              static inline char const* name() { return "one"; }
              static ::std::uint64_t const value = GL_ONE;
          };
          struct gl_one_minus_dst_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_dst_alpha > {
              static inline char const* name() { return "one_minus_dst_alpha"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_DST_ALPHA;
          };
          struct gl_one_minus_dst_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_dst_color > {
              static inline char const* name() { return "one_minus_dst_color"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_DST_COLOR;
          };
          struct gl_one_minus_src_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src_alpha > {
              static inline char const* name() { return "one_minus_src_alpha"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_SRC_ALPHA;
          };
          struct gl_one_minus_src_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src_color > {
              static inline char const* name() { return "one_minus_src_color"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_SRC_COLOR;
          };
          struct gl_or: public ::gtulu::internal::constant::gl_constant< gl_or > {
              static inline char const* name() { return "or"; }
              static ::std::uint64_t const value = GL_OR;
          };
          struct gl_or_inverted: public ::gtulu::internal::constant::gl_constant< gl_or_inverted > {
              static inline char const* name() { return "or_inverted"; }
              static ::std::uint64_t const value = GL_OR_INVERTED;
          };
          struct gl_or_reverse: public ::gtulu::internal::constant::gl_constant< gl_or_reverse > {
              static inline char const* name() { return "or_reverse"; }
              static ::std::uint64_t const value = GL_OR_REVERSE;
          };
          struct gl_out_of_memory: public ::gtulu::internal::constant::gl_constant< gl_out_of_memory > {
              static inline char const* name() { return "out_of_memory"; }
              static ::std::uint64_t const value = GL_OUT_OF_MEMORY;
          };
          struct gl_pack_alignment: public ::gtulu::internal::constant::gl_constant< gl_pack_alignment > {
              static inline char const* name() { return "pack_alignment"; }
              static ::std::uint64_t const value = GL_PACK_ALIGNMENT;
          };
          struct gl_pack_lsb_first: public ::gtulu::internal::constant::gl_constant< gl_pack_lsb_first > {
              static inline char const* name() { return "pack_lsb_first"; }
              static ::std::uint64_t const value = GL_PACK_LSB_FIRST;
          };
          struct gl_pack_row_length: public ::gtulu::internal::constant::gl_constant< gl_pack_row_length > {
              static inline char const* name() { return "pack_row_length"; }
              static ::std::uint64_t const value = GL_PACK_ROW_LENGTH;
          };
          struct gl_pack_skip_pixels: public ::gtulu::internal::constant::gl_constant< gl_pack_skip_pixels > {
              static inline char const* name() { return "pack_skip_pixels"; }
              static ::std::uint64_t const value = GL_PACK_SKIP_PIXELS;
          };
          struct gl_pack_skip_rows: public ::gtulu::internal::constant::gl_constant< gl_pack_skip_rows > {
              static inline char const* name() { return "pack_skip_rows"; }
              static ::std::uint64_t const value = GL_PACK_SKIP_ROWS;
          };
          struct gl_pack_swap_bytes: public ::gtulu::internal::constant::gl_constant< gl_pack_swap_bytes > {
              static inline char const* name() { return "pack_swap_bytes"; }
              static ::std::uint64_t const value = GL_PACK_SWAP_BYTES;
          };
          struct gl_point: public ::gtulu::internal::constant::gl_constant< gl_point > {
              static inline char const* name() { return "point"; }
              static ::std::uint64_t const value = GL_POINT;
          };
          struct gl_points: public ::gtulu::internal::constant::gl_constant< gl_points > {
              static inline char const* name() { return "points"; }
              static ::std::uint64_t const value = GL_POINTS;
          };
          struct gl_point_size: public ::gtulu::internal::constant::gl_constant< gl_point_size > {
              static inline char const* name() { return "point_size"; }
              static ::std::uint64_t const value = GL_POINT_SIZE;
          };
          struct gl_point_size_granularity: public ::gtulu::internal::constant::gl_constant< gl_point_size_granularity > {
              static inline char const* name() { return "point_size_granularity"; }
              static ::std::uint64_t const value = GL_POINT_SIZE_GRANULARITY;
          };
          struct gl_point_size_range: public ::gtulu::internal::constant::gl_constant< gl_point_size_range > {
              static inline char const* name() { return "point_size_range"; }
              static ::std::uint64_t const value = GL_POINT_SIZE_RANGE;
          };
          struct gl_polygon_offset_factor: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_factor > {
              static inline char const* name() { return "polygon_offset_factor"; }
              static ::std::uint64_t const value = GL_POLYGON_OFFSET_FACTOR;
          };
          struct gl_polygon_offset_fill: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_fill > {
              static inline char const* name() { return "polygon_offset_fill"; }
              static ::std::uint64_t const value = GL_POLYGON_OFFSET_FILL;
          };
          struct gl_polygon_offset_line: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_line > {
              static inline char const* name() { return "polygon_offset_line"; }
              static ::std::uint64_t const value = GL_POLYGON_OFFSET_LINE;
          };
          struct gl_polygon_offset_point: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_point > {
              static inline char const* name() { return "polygon_offset_point"; }
              static ::std::uint64_t const value = GL_POLYGON_OFFSET_POINT;
          };
          struct gl_polygon_offset_units: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_units > {
              static inline char const* name() { return "polygon_offset_units"; }
              static ::std::uint64_t const value = GL_POLYGON_OFFSET_UNITS;
          };
          struct gl_polygon_smooth: public ::gtulu::internal::constant::gl_constant< gl_polygon_smooth > {
              static inline char const* name() { return "polygon_smooth"; }
              static ::std::uint64_t const value = GL_POLYGON_SMOOTH;
          };
          struct gl_polygon_smooth_hint: public ::gtulu::internal::constant::gl_constant< gl_polygon_smooth_hint > {
              static inline char const* name() { return "polygon_smooth_hint"; }
              static ::std::uint64_t const value = GL_POLYGON_SMOOTH_HINT;
          };
          struct gl_proxy_texture_1d: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_1d > {
              static inline char const* name() { return "proxy_texture_1d"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_1D;
          };
          struct gl_proxy_texture_2d: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d > {
              static inline char const* name() { return "proxy_texture_2d"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_2D;
          };
          struct gl_r3_g3_b2: public ::gtulu::internal::constant::gl_constant< gl_r3_g3_b2 > {
              static inline char const* name() { return "r3_g3_b2"; }
              static ::std::uint64_t const value = GL_R3_G3_B2;
          };
          struct gl_read_buffer: public ::gtulu::internal::constant::gl_constant< gl_read_buffer > {
              static inline char const* name() { return "read_buffer"; }
              static ::std::uint64_t const value = GL_READ_BUFFER;
          };
          struct gl_red: public ::gtulu::internal::constant::gl_constant< gl_red > {
              static inline char const* name() { return "red"; }
              static ::std::uint64_t const value = GL_RED;
          };
          struct gl_renderer: public ::gtulu::internal::constant::gl_constant< gl_renderer > {
              static inline char const* name() { return "renderer"; }
              static ::std::uint64_t const value = GL_RENDERER;
          };
          struct gl_repeat: public ::gtulu::internal::constant::gl_constant< gl_repeat > {
              static inline char const* name() { return "repeat"; }
              static ::std::uint64_t const value = GL_REPEAT;
          };
          struct gl_replace: public ::gtulu::internal::constant::gl_constant< gl_replace > {
              static inline char const* name() { return "replace"; }
              static ::std::uint64_t const value = GL_REPLACE;
          };
          struct gl_rgb: public ::gtulu::internal::constant::gl_constant< gl_rgb > {
              static inline char const* name() { return "rgb"; }
              static ::std::uint64_t const value = GL_RGB;
          };
          struct gl_rgb10: public ::gtulu::internal::constant::gl_constant< gl_rgb10 > {
              static inline char const* name() { return "rgb10"; }
              static ::std::uint64_t const value = GL_RGB10;
          };
          struct gl_rgb10_a2: public ::gtulu::internal::constant::gl_constant< gl_rgb10_a2 > {
              static inline char const* name() { return "rgb10_a2"; }
              static ::std::uint64_t const value = GL_RGB10_A2;
          };
          struct gl_rgb12: public ::gtulu::internal::constant::gl_constant< gl_rgb12 > {
              static inline char const* name() { return "rgb12"; }
              static ::std::uint64_t const value = GL_RGB12;
          };
          struct gl_rgb16: public ::gtulu::internal::constant::gl_constant< gl_rgb16 > {
              static inline char const* name() { return "rgb16"; }
              static ::std::uint64_t const value = GL_RGB16;
          };
          struct gl_rgb4: public ::gtulu::internal::constant::gl_constant< gl_rgb4 > {
              static inline char const* name() { return "rgb4"; }
              static ::std::uint64_t const value = GL_RGB4;
          };
          struct gl_rgb5: public ::gtulu::internal::constant::gl_constant< gl_rgb5 > {
              static inline char const* name() { return "rgb5"; }
              static ::std::uint64_t const value = GL_RGB5;
          };
          struct gl_rgb5_a1: public ::gtulu::internal::constant::gl_constant< gl_rgb5_a1 > {
              static inline char const* name() { return "rgb5_a1"; }
              static ::std::uint64_t const value = GL_RGB5_A1;
          };
          struct gl_rgb8: public ::gtulu::internal::constant::gl_constant< gl_rgb8 > {
              static inline char const* name() { return "rgb8"; }
              static ::std::uint64_t const value = GL_RGB8;
          };
          struct gl_rgba: public ::gtulu::internal::constant::gl_constant< gl_rgba > {
              static inline char const* name() { return "rgba"; }
              static ::std::uint64_t const value = GL_RGBA;
          };
          struct gl_rgba12: public ::gtulu::internal::constant::gl_constant< gl_rgba12 > {
              static inline char const* name() { return "rgba12"; }
              static ::std::uint64_t const value = GL_RGBA12;
          };
          struct gl_rgba16: public ::gtulu::internal::constant::gl_constant< gl_rgba16 > {
              static inline char const* name() { return "rgba16"; }
              static ::std::uint64_t const value = GL_RGBA16;
          };
          struct gl_rgba2: public ::gtulu::internal::constant::gl_constant< gl_rgba2 > {
              static inline char const* name() { return "rgba2"; }
              static ::std::uint64_t const value = GL_RGBA2;
          };
          struct gl_rgba4: public ::gtulu::internal::constant::gl_constant< gl_rgba4 > {
              static inline char const* name() { return "rgba4"; }
              static ::std::uint64_t const value = GL_RGBA4;
          };
          struct gl_rgba8: public ::gtulu::internal::constant::gl_constant< gl_rgba8 > {
              static inline char const* name() { return "rgba8"; }
              static ::std::uint64_t const value = GL_RGBA8;
          };
          struct gl_right: public ::gtulu::internal::constant::gl_constant< gl_right > {
              static inline char const* name() { return "right"; }
              static ::std::uint64_t const value = GL_RIGHT;
          };
          struct gl_scissor_box: public ::gtulu::internal::constant::gl_constant< gl_scissor_box > {
              static inline char const* name() { return "scissor_box"; }
              static ::std::uint64_t const value = GL_SCISSOR_BOX;
          };
          struct gl_scissor_test: public ::gtulu::internal::constant::gl_constant< gl_scissor_test > {
              static inline char const* name() { return "scissor_test"; }
              static ::std::uint64_t const value = GL_SCISSOR_TEST;
          };
          struct gl_set: public ::gtulu::internal::constant::gl_constant< gl_set > {
              static inline char const* name() { return "set"; }
              static ::std::uint64_t const value = GL_SET;
          };
          struct gl_short: public ::gtulu::internal::constant::gl_constant< gl_short > {
              static inline char const* name() { return "short"; }
              static ::std::uint64_t const value = GL_SHORT;
          };
          struct gl_src_alpha: public ::gtulu::internal::constant::gl_constant< gl_src_alpha > {
              static inline char const* name() { return "src_alpha"; }
              static ::std::uint64_t const value = GL_SRC_ALPHA;
          };
          struct gl_src_alpha_saturate: public ::gtulu::internal::constant::gl_constant< gl_src_alpha_saturate > {
              static inline char const* name() { return "src_alpha_saturate"; }
              static ::std::uint64_t const value = GL_SRC_ALPHA_SATURATE;
          };
          struct gl_src_color: public ::gtulu::internal::constant::gl_constant< gl_src_color > {
              static inline char const* name() { return "src_color"; }
              static ::std::uint64_t const value = GL_SRC_COLOR;
          };
          struct gl_stencil: public ::gtulu::internal::constant::gl_constant< gl_stencil > {
              static inline char const* name() { return "stencil"; }
              static ::std::uint64_t const value = GL_STENCIL;
          };
          struct gl_stencil_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_stencil_buffer_bit > {
              static inline char const* name() { return "stencil_buffer_bit"; }
              static ::std::uint64_t const value = GL_STENCIL_BUFFER_BIT;
          };
          struct gl_stencil_clear_value: public ::gtulu::internal::constant::gl_constant< gl_stencil_clear_value > {
              static inline char const* name() { return "stencil_clear_value"; }
              static ::std::uint64_t const value = GL_STENCIL_CLEAR_VALUE;
          };
          struct gl_stencil_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_fail > {
              static inline char const* name() { return "stencil_fail"; }
              static ::std::uint64_t const value = GL_STENCIL_FAIL;
          };
          struct gl_stencil_func: public ::gtulu::internal::constant::gl_constant< gl_stencil_func > {
              static inline char const* name() { return "stencil_func"; }
              static ::std::uint64_t const value = GL_STENCIL_FUNC;
          };
          struct gl_stencil_index: public ::gtulu::internal::constant::gl_constant< gl_stencil_index > {
              static inline char const* name() { return "stencil_index"; }
              static ::std::uint64_t const value = GL_STENCIL_INDEX;
          };
          struct gl_stencil_pass_depth_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_pass_depth_fail > {
              static inline char const* name() { return "stencil_pass_depth_fail"; }
              static ::std::uint64_t const value = GL_STENCIL_PASS_DEPTH_FAIL;
          };
          struct gl_stencil_pass_depth_pass: public ::gtulu::internal::constant::gl_constant< gl_stencil_pass_depth_pass > {
              static inline char const* name() { return "stencil_pass_depth_pass"; }
              static ::std::uint64_t const value = GL_STENCIL_PASS_DEPTH_PASS;
          };
          struct gl_stencil_ref: public ::gtulu::internal::constant::gl_constant< gl_stencil_ref > {
              static inline char const* name() { return "stencil_ref"; }
              static ::std::uint64_t const value = GL_STENCIL_REF;
          };
          struct gl_stencil_test: public ::gtulu::internal::constant::gl_constant< gl_stencil_test > {
              static inline char const* name() { return "stencil_test"; }
              static ::std::uint64_t const value = GL_STENCIL_TEST;
          };
          struct gl_stencil_value_mask: public ::gtulu::internal::constant::gl_constant< gl_stencil_value_mask > {
              static inline char const* name() { return "stencil_value_mask"; }
              static ::std::uint64_t const value = GL_STENCIL_VALUE_MASK;
          };
          struct gl_stencil_writemask: public ::gtulu::internal::constant::gl_constant< gl_stencil_writemask > {
              static inline char const* name() { return "stencil_writemask"; }
              static ::std::uint64_t const value = GL_STENCIL_WRITEMASK;
          };
          struct gl_stereo: public ::gtulu::internal::constant::gl_constant< gl_stereo > {
              static inline char const* name() { return "stereo"; }
              static ::std::uint64_t const value = GL_STEREO;
          };
          struct gl_subpixel_bits: public ::gtulu::internal::constant::gl_constant< gl_subpixel_bits > {
              static inline char const* name() { return "subpixel_bits"; }
              static ::std::uint64_t const value = GL_SUBPIXEL_BITS;
          };
          struct gl_texture: public ::gtulu::internal::constant::gl_constant< gl_texture > {
              static inline char const* name() { return "texture"; }
              static ::std::uint64_t const value = GL_TEXTURE;
          };
          struct gl_texture_1d: public ::gtulu::internal::constant::gl_constant< gl_texture_1d > {
              static inline char const* name() { return "texture_1d"; }
              static ::std::uint64_t const value = GL_TEXTURE_1D;
          };
          struct gl_texture_2d: public ::gtulu::internal::constant::gl_constant< gl_texture_2d > {
              static inline char const* name() { return "texture_2d"; }
              static ::std::uint64_t const value = GL_TEXTURE_2D;
          };
          struct gl_texture_alpha_size: public ::gtulu::internal::constant::gl_constant< gl_texture_alpha_size > {
              static inline char const* name() { return "texture_alpha_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_ALPHA_SIZE;
          };
          struct gl_texture_binding_1d: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_1d > {
              static inline char const* name() { return "texture_binding_1d"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_1D;
          };
          struct gl_texture_binding_2d: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d > {
              static inline char const* name() { return "texture_binding_2d"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_2D;
          };
          struct gl_texture_blue_size: public ::gtulu::internal::constant::gl_constant< gl_texture_blue_size > {
              static inline char const* name() { return "texture_blue_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_BLUE_SIZE;
          };
          struct gl_texture_border_color: public ::gtulu::internal::constant::gl_constant< gl_texture_border_color > {
              static inline char const* name() { return "texture_border_color"; }
              static ::std::uint64_t const value = GL_TEXTURE_BORDER_COLOR;
          };
          struct gl_texture_green_size: public ::gtulu::internal::constant::gl_constant< gl_texture_green_size > {
              static inline char const* name() { return "texture_green_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_GREEN_SIZE;
          };
          struct gl_texture_height: public ::gtulu::internal::constant::gl_constant< gl_texture_height > {
              static inline char const* name() { return "texture_height"; }
              static ::std::uint64_t const value = GL_TEXTURE_HEIGHT;
          };
          struct gl_texture_internal_format: public ::gtulu::internal::constant::gl_constant< gl_texture_internal_format > {
              static inline char const* name() { return "texture_internal_format"; }
              static ::std::uint64_t const value = GL_TEXTURE_INTERNAL_FORMAT;
          };
          struct gl_texture_mag_filter: public ::gtulu::internal::constant::gl_constant< gl_texture_mag_filter > {
              static inline char const* name() { return "texture_mag_filter"; }
              static ::std::uint64_t const value = GL_TEXTURE_MAG_FILTER;
          };
          struct gl_texture_min_filter: public ::gtulu::internal::constant::gl_constant< gl_texture_min_filter > {
              static inline char const* name() { return "texture_min_filter"; }
              static ::std::uint64_t const value = GL_TEXTURE_MIN_FILTER;
          };
          struct gl_texture_red_size: public ::gtulu::internal::constant::gl_constant< gl_texture_red_size > {
              static inline char const* name() { return "texture_red_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_RED_SIZE;
          };
          struct gl_texture_width: public ::gtulu::internal::constant::gl_constant< gl_texture_width > {
              static inline char const* name() { return "texture_width"; }
              static ::std::uint64_t const value = GL_TEXTURE_WIDTH;
          };
          struct gl_texture_wrap_s: public ::gtulu::internal::constant::gl_constant< gl_texture_wrap_s > {
              static inline char const* name() { return "texture_wrap_s"; }
              static ::std::uint64_t const value = GL_TEXTURE_WRAP_S;
          };
          struct gl_texture_wrap_t: public ::gtulu::internal::constant::gl_constant< gl_texture_wrap_t > {
              static inline char const* name() { return "texture_wrap_t"; }
              static ::std::uint64_t const value = GL_TEXTURE_WRAP_T;
          };
          struct gl_triangles: public ::gtulu::internal::constant::gl_constant< gl_triangles > {
              static inline char const* name() { return "triangles"; }
              static ::std::uint64_t const value = GL_TRIANGLES;
          };
          struct gl_triangle_fan: public ::gtulu::internal::constant::gl_constant< gl_triangle_fan > {
              static inline char const* name() { return "triangle_fan"; }
              static ::std::uint64_t const value = GL_TRIANGLE_FAN;
          };
          struct gl_triangle_strip: public ::gtulu::internal::constant::gl_constant< gl_triangle_strip > {
              static inline char const* name() { return "triangle_strip"; }
              static ::std::uint64_t const value = GL_TRIANGLE_STRIP;
          };
          struct gl_true: public ::gtulu::internal::constant::gl_constant< gl_true > {
              static inline char const* name() { return "true"; }
              static ::std::uint64_t const value = GL_TRUE;
          };
          struct gl_unpack_alignment: public ::gtulu::internal::constant::gl_constant< gl_unpack_alignment > {
              static inline char const* name() { return "unpack_alignment"; }
              static ::std::uint64_t const value = GL_UNPACK_ALIGNMENT;
          };
          struct gl_unpack_lsb_first: public ::gtulu::internal::constant::gl_constant< gl_unpack_lsb_first > {
              static inline char const* name() { return "unpack_lsb_first"; }
              static ::std::uint64_t const value = GL_UNPACK_LSB_FIRST;
          };
          struct gl_unpack_row_length: public ::gtulu::internal::constant::gl_constant< gl_unpack_row_length > {
              static inline char const* name() { return "unpack_row_length"; }
              static ::std::uint64_t const value = GL_UNPACK_ROW_LENGTH;
          };
          struct gl_unpack_skip_pixels: public ::gtulu::internal::constant::gl_constant< gl_unpack_skip_pixels > {
              static inline char const* name() { return "unpack_skip_pixels"; }
              static ::std::uint64_t const value = GL_UNPACK_SKIP_PIXELS;
          };
          struct gl_unpack_skip_rows: public ::gtulu::internal::constant::gl_constant< gl_unpack_skip_rows > {
              static inline char const* name() { return "unpack_skip_rows"; }
              static ::std::uint64_t const value = GL_UNPACK_SKIP_ROWS;
          };
          struct gl_unpack_swap_bytes: public ::gtulu::internal::constant::gl_constant< gl_unpack_swap_bytes > {
              static inline char const* name() { return "unpack_swap_bytes"; }
              static ::std::uint64_t const value = GL_UNPACK_SWAP_BYTES;
          };
          struct gl_unsigned_byte: public ::gtulu::internal::constant::gl_constant< gl_unsigned_byte > {
              static inline char const* name() { return "unsigned_byte"; }
              static ::std::uint64_t const value = GL_UNSIGNED_BYTE;
          };
          struct gl_unsigned_int: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int > {
              static inline char const* name() { return "unsigned_int"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT;
          };
          struct gl_unsigned_short: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short > {
              static inline char const* name() { return "unsigned_short"; }
              static ::std::uint64_t const value = GL_UNSIGNED_SHORT;
          };
          struct gl_vendor: public ::gtulu::internal::constant::gl_constant< gl_vendor > {
              static inline char const* name() { return "vendor"; }
              static ::std::uint64_t const value = GL_VENDOR;
          };
          struct gl_version: public ::gtulu::internal::constant::gl_constant< gl_version > {
              static inline char const* name() { return "version"; }
              static ::std::uint64_t const value = GL_VERSION;
          };
          struct gl_version_1_1: public ::gtulu::internal::constant::gl_constant< gl_version_1_1 > {
              static inline char const* name() { return "version_1_1"; }
              static ::std::uint64_t const value = GL_VERSION_1_1;
          };
          struct gl_viewport: public ::gtulu::internal::constant::gl_constant< gl_viewport > {
              static inline char const* name() { return "viewport"; }
              static ::std::uint64_t const value = GL_VIEWPORT;
          };
          struct gl_xor: public ::gtulu::internal::constant::gl_constant< gl_xor > {
              static inline char const* name() { return "xor"; }
              static ::std::uint64_t const value = GL_XOR;
          };
          struct gl_zero: public ::gtulu::internal::constant::gl_constant< gl_zero > {
              static inline char const* name() { return "zero"; }
              static ::std::uint64_t const value = GL_ZERO;
          };
        } // namespace cst
      } // namespace v1_1
      namespace v1_2 {
        namespace cst {
          struct gl_aliased_line_width_range: public ::gtulu::internal::constant::gl_constant< gl_aliased_line_width_range > {
              static inline char const* name() { return "aliased_line_width_range"; }
              static ::std::uint64_t const value = GL_ALIASED_LINE_WIDTH_RANGE;
          };
          struct gl_bgr: public ::gtulu::internal::constant::gl_constant< gl_bgr > {
              static inline char const* name() { return "bgr"; }
              static ::std::uint64_t const value = GL_BGR;
          };
          struct gl_bgra: public ::gtulu::internal::constant::gl_constant< gl_bgra > {
              static inline char const* name() { return "bgra"; }
              static ::std::uint64_t const value = GL_BGRA;
          };
          struct gl_clamp_to_edge: public ::gtulu::internal::constant::gl_constant< gl_clamp_to_edge > {
              static inline char const* name() { return "clamp_to_edge"; }
              static ::std::uint64_t const value = GL_CLAMP_TO_EDGE;
          };
          struct gl_max_3d_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_3d_texture_size > {
              static inline char const* name() { return "max_3d_texture_size"; }
              static ::std::uint64_t const value = GL_MAX_3D_TEXTURE_SIZE;
          };
          struct gl_max_elements_indices: public ::gtulu::internal::constant::gl_constant< gl_max_elements_indices > {
              static inline char const* name() { return "max_elements_indices"; }
              static ::std::uint64_t const value = GL_MAX_ELEMENTS_INDICES;
          };
          struct gl_max_elements_vertices: public ::gtulu::internal::constant::gl_constant< gl_max_elements_vertices > {
              static inline char const* name() { return "max_elements_vertices"; }
              static ::std::uint64_t const value = GL_MAX_ELEMENTS_VERTICES;
          };
          struct gl_pack_image_height: public ::gtulu::internal::constant::gl_constant< gl_pack_image_height > {
              static inline char const* name() { return "pack_image_height"; }
              static ::std::uint64_t const value = GL_PACK_IMAGE_HEIGHT;
          };
          struct gl_pack_skip_images: public ::gtulu::internal::constant::gl_constant< gl_pack_skip_images > {
              static inline char const* name() { return "pack_skip_images"; }
              static ::std::uint64_t const value = GL_PACK_SKIP_IMAGES;
          };
          struct gl_proxy_texture_3d: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_3d > {
              static inline char const* name() { return "proxy_texture_3d"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_3D;
          };
          struct gl_smooth_line_width_granularity: public ::gtulu::internal::constant::gl_constant< gl_smooth_line_width_granularity > {
              static inline char const* name() { return "smooth_line_width_granularity"; }
              static ::std::uint64_t const value = GL_SMOOTH_LINE_WIDTH_GRANULARITY;
          };
          struct gl_smooth_line_width_range: public ::gtulu::internal::constant::gl_constant< gl_smooth_line_width_range > {
              static inline char const* name() { return "smooth_line_width_range"; }
              static ::std::uint64_t const value = GL_SMOOTH_LINE_WIDTH_RANGE;
          };
          struct gl_smooth_point_size_granularity: public ::gtulu::internal::constant::gl_constant< gl_smooth_point_size_granularity > {
              static inline char const* name() { return "smooth_point_size_granularity"; }
              static ::std::uint64_t const value = GL_SMOOTH_POINT_SIZE_GRANULARITY;
          };
          struct gl_smooth_point_size_range: public ::gtulu::internal::constant::gl_constant< gl_smooth_point_size_range > {
              static inline char const* name() { return "smooth_point_size_range"; }
              static ::std::uint64_t const value = GL_SMOOTH_POINT_SIZE_RANGE;
          };
          struct gl_texture_3d: public ::gtulu::internal::constant::gl_constant< gl_texture_3d > {
              static inline char const* name() { return "texture_3d"; }
              static ::std::uint64_t const value = GL_TEXTURE_3D;
          };
          struct gl_texture_base_level: public ::gtulu::internal::constant::gl_constant< gl_texture_base_level > {
              static inline char const* name() { return "texture_base_level"; }
              static ::std::uint64_t const value = GL_TEXTURE_BASE_LEVEL;
          };
          struct gl_texture_binding_3d: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_3d > {
              static inline char const* name() { return "texture_binding_3d"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_3D;
          };
          struct gl_texture_depth: public ::gtulu::internal::constant::gl_constant< gl_texture_depth > {
              static inline char const* name() { return "texture_depth"; }
              static ::std::uint64_t const value = GL_TEXTURE_DEPTH;
          };
          struct gl_texture_max_level: public ::gtulu::internal::constant::gl_constant< gl_texture_max_level > {
              static inline char const* name() { return "texture_max_level"; }
              static ::std::uint64_t const value = GL_TEXTURE_MAX_LEVEL;
          };
          struct gl_texture_max_lod: public ::gtulu::internal::constant::gl_constant< gl_texture_max_lod > {
              static inline char const* name() { return "texture_max_lod"; }
              static ::std::uint64_t const value = GL_TEXTURE_MAX_LOD;
          };
          struct gl_texture_min_lod: public ::gtulu::internal::constant::gl_constant< gl_texture_min_lod > {
              static inline char const* name() { return "texture_min_lod"; }
              static ::std::uint64_t const value = GL_TEXTURE_MIN_LOD;
          };
          struct gl_texture_wrap_r: public ::gtulu::internal::constant::gl_constant< gl_texture_wrap_r > {
              static inline char const* name() { return "texture_wrap_r"; }
              static ::std::uint64_t const value = GL_TEXTURE_WRAP_R;
          };
          struct gl_unpack_image_height: public ::gtulu::internal::constant::gl_constant< gl_unpack_image_height > {
              static inline char const* name() { return "unpack_image_height"; }
              static ::std::uint64_t const value = GL_UNPACK_IMAGE_HEIGHT;
          };
          struct gl_unpack_skip_images: public ::gtulu::internal::constant::gl_constant< gl_unpack_skip_images > {
              static inline char const* name() { return "unpack_skip_images"; }
              static ::std::uint64_t const value = GL_UNPACK_SKIP_IMAGES;
          };
          struct gl_unsigned_byte_2_3_3_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_byte_2_3_3_rev > {
              static inline char const* name() { return "unsigned_byte_2_3_3_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_BYTE_2_3_3_REV;
          };
          struct gl_unsigned_byte_3_3_2: public ::gtulu::internal::constant::gl_constant< gl_unsigned_byte_3_3_2 > {
              static inline char const* name() { return "unsigned_byte_3_3_2"; }
              static ::std::uint64_t const value = GL_UNSIGNED_BYTE_3_3_2;
          };
          struct gl_unsigned_int_10_10_10_2: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_10_10_10_2 > {
              static inline char const* name() { return "unsigned_int_10_10_10_2"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_10_10_10_2;
          };
          struct gl_unsigned_int_2_10_10_10_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_2_10_10_10_rev > {
              static inline char const* name() { return "unsigned_int_2_10_10_10_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_2_10_10_10_REV;
          };
          struct gl_unsigned_int_8_8_8_8: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_8_8_8_8 > {
              static inline char const* name() { return "unsigned_int_8_8_8_8"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_8_8_8_8;
          };
          struct gl_unsigned_int_8_8_8_8_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_8_8_8_8_rev > {
              static inline char const* name() { return "unsigned_int_8_8_8_8_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_8_8_8_8_REV;
          };
          struct gl_unsigned_short_1_5_5_5_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_1_5_5_5_rev > {
              static inline char const* name() { return "unsigned_short_1_5_5_5_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_SHORT_1_5_5_5_REV;
          };
          struct gl_unsigned_short_4_4_4_4: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_4_4_4_4 > {
              static inline char const* name() { return "unsigned_short_4_4_4_4"; }
              static ::std::uint64_t const value = GL_UNSIGNED_SHORT_4_4_4_4;
          };
          struct gl_unsigned_short_4_4_4_4_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_4_4_4_4_rev > {
              static inline char const* name() { return "unsigned_short_4_4_4_4_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_SHORT_4_4_4_4_REV;
          };
          struct gl_unsigned_short_5_5_5_1: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_5_5_5_1 > {
              static inline char const* name() { return "unsigned_short_5_5_5_1"; }
              static ::std::uint64_t const value = GL_UNSIGNED_SHORT_5_5_5_1;
          };
          struct gl_unsigned_short_5_6_5: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_5_6_5 > {
              static inline char const* name() { return "unsigned_short_5_6_5"; }
              static ::std::uint64_t const value = GL_UNSIGNED_SHORT_5_6_5;
          };
          struct gl_unsigned_short_5_6_5_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_5_6_5_rev > {
              static inline char const* name() { return "unsigned_short_5_6_5_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_SHORT_5_6_5_REV;
          };
          struct gl_version_1_2: public ::gtulu::internal::constant::gl_constant< gl_version_1_2 > {
              static inline char const* name() { return "version_1_2"; }
              static ::std::uint64_t const value = GL_VERSION_1_2;
          };
        } // namespace cst
      } // namespace v1_2
      namespace v1_3 {
        namespace cst {
          struct gl_active_texture: public ::gtulu::internal::constant::gl_constant< gl_active_texture > {
              static inline char const* name() { return "active_texture"; }
              static ::std::uint64_t const value = GL_ACTIVE_TEXTURE;
          };
          struct gl_clamp_to_border: public ::gtulu::internal::constant::gl_constant< gl_clamp_to_border > {
              static inline char const* name() { return "clamp_to_border"; }
              static ::std::uint64_t const value = GL_CLAMP_TO_BORDER;
          };
          struct gl_compressed_rgb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgb > {
              static inline char const* name() { return "compressed_rgb"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RGB;
          };
          struct gl_compressed_rgba: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgba > {
              static inline char const* name() { return "compressed_rgba"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RGBA;
          };
          struct gl_compressed_texture_formats: public ::gtulu::internal::constant::gl_constant< gl_compressed_texture_formats > {
              static inline char const* name() { return "compressed_texture_formats"; }
              static ::std::uint64_t const value = GL_COMPRESSED_TEXTURE_FORMATS;
          };
          struct gl_max_cube_map_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_cube_map_texture_size > {
              static inline char const* name() { return "max_cube_map_texture_size"; }
              static ::std::uint64_t const value = GL_MAX_CUBE_MAP_TEXTURE_SIZE;
          };
          struct gl_multisample: public ::gtulu::internal::constant::gl_constant< gl_multisample > {
              static inline char const* name() { return "multisample"; }
              static ::std::uint64_t const value = GL_MULTISAMPLE;
          };
          struct gl_num_compressed_texture_formats: public ::gtulu::internal::constant::gl_constant< gl_num_compressed_texture_formats > {
              static inline char const* name() { return "num_compressed_texture_formats"; }
              static ::std::uint64_t const value = GL_NUM_COMPRESSED_TEXTURE_FORMATS;
          };
          struct gl_proxy_texture_cube_map: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_cube_map > {
              static inline char const* name() { return "proxy_texture_cube_map"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_CUBE_MAP;
          };
          struct gl_samples: public ::gtulu::internal::constant::gl_constant< gl_samples > {
              static inline char const* name() { return "samples"; }
              static ::std::uint64_t const value = GL_SAMPLES;
          };
          struct gl_sample_alpha_to_coverage: public ::gtulu::internal::constant::gl_constant< gl_sample_alpha_to_coverage > {
              static inline char const* name() { return "sample_alpha_to_coverage"; }
              static ::std::uint64_t const value = GL_SAMPLE_ALPHA_TO_COVERAGE;
          };
          struct gl_sample_alpha_to_one: public ::gtulu::internal::constant::gl_constant< gl_sample_alpha_to_one > {
              static inline char const* name() { return "sample_alpha_to_one"; }
              static ::std::uint64_t const value = GL_SAMPLE_ALPHA_TO_ONE;
          };
          struct gl_sample_buffers: public ::gtulu::internal::constant::gl_constant< gl_sample_buffers > {
              static inline char const* name() { return "sample_buffers"; }
              static ::std::uint64_t const value = GL_SAMPLE_BUFFERS;
          };
          struct gl_sample_coverage: public ::gtulu::internal::constant::gl_constant< gl_sample_coverage > {
              static inline char const* name() { return "sample_coverage"; }
              static ::std::uint64_t const value = GL_SAMPLE_COVERAGE;
          };
          struct gl_sample_coverage_invert: public ::gtulu::internal::constant::gl_constant< gl_sample_coverage_invert > {
              static inline char const* name() { return "sample_coverage_invert"; }
              static ::std::uint64_t const value = GL_SAMPLE_COVERAGE_INVERT;
          };
          struct gl_sample_coverage_value: public ::gtulu::internal::constant::gl_constant< gl_sample_coverage_value > {
              static inline char const* name() { return "sample_coverage_value"; }
              static ::std::uint64_t const value = GL_SAMPLE_COVERAGE_VALUE;
          };
          struct gl_texture0: public ::gtulu::internal::constant::gl_constant< gl_texture0 > {
              static inline char const* name() { return "texture0"; }
              static ::std::uint64_t const value = GL_TEXTURE0;
          };
          struct gl_texture1: public ::gtulu::internal::constant::gl_constant< gl_texture1 > {
              static inline char const* name() { return "texture1"; }
              static ::std::uint64_t const value = GL_TEXTURE1;
          };
          struct gl_texture10: public ::gtulu::internal::constant::gl_constant< gl_texture10 > {
              static inline char const* name() { return "texture10"; }
              static ::std::uint64_t const value = GL_TEXTURE10;
          };
          struct gl_texture11: public ::gtulu::internal::constant::gl_constant< gl_texture11 > {
              static inline char const* name() { return "texture11"; }
              static ::std::uint64_t const value = GL_TEXTURE11;
          };
          struct gl_texture12: public ::gtulu::internal::constant::gl_constant< gl_texture12 > {
              static inline char const* name() { return "texture12"; }
              static ::std::uint64_t const value = GL_TEXTURE12;
          };
          struct gl_texture13: public ::gtulu::internal::constant::gl_constant< gl_texture13 > {
              static inline char const* name() { return "texture13"; }
              static ::std::uint64_t const value = GL_TEXTURE13;
          };
          struct gl_texture14: public ::gtulu::internal::constant::gl_constant< gl_texture14 > {
              static inline char const* name() { return "texture14"; }
              static ::std::uint64_t const value = GL_TEXTURE14;
          };
          struct gl_texture15: public ::gtulu::internal::constant::gl_constant< gl_texture15 > {
              static inline char const* name() { return "texture15"; }
              static ::std::uint64_t const value = GL_TEXTURE15;
          };
          struct gl_texture16: public ::gtulu::internal::constant::gl_constant< gl_texture16 > {
              static inline char const* name() { return "texture16"; }
              static ::std::uint64_t const value = GL_TEXTURE16;
          };
          struct gl_texture17: public ::gtulu::internal::constant::gl_constant< gl_texture17 > {
              static inline char const* name() { return "texture17"; }
              static ::std::uint64_t const value = GL_TEXTURE17;
          };
          struct gl_texture18: public ::gtulu::internal::constant::gl_constant< gl_texture18 > {
              static inline char const* name() { return "texture18"; }
              static ::std::uint64_t const value = GL_TEXTURE18;
          };
          struct gl_texture19: public ::gtulu::internal::constant::gl_constant< gl_texture19 > {
              static inline char const* name() { return "texture19"; }
              static ::std::uint64_t const value = GL_TEXTURE19;
          };
          struct gl_texture2: public ::gtulu::internal::constant::gl_constant< gl_texture2 > {
              static inline char const* name() { return "texture2"; }
              static ::std::uint64_t const value = GL_TEXTURE2;
          };
          struct gl_texture20: public ::gtulu::internal::constant::gl_constant< gl_texture20 > {
              static inline char const* name() { return "texture20"; }
              static ::std::uint64_t const value = GL_TEXTURE20;
          };
          struct gl_texture21: public ::gtulu::internal::constant::gl_constant< gl_texture21 > {
              static inline char const* name() { return "texture21"; }
              static ::std::uint64_t const value = GL_TEXTURE21;
          };
          struct gl_texture22: public ::gtulu::internal::constant::gl_constant< gl_texture22 > {
              static inline char const* name() { return "texture22"; }
              static ::std::uint64_t const value = GL_TEXTURE22;
          };
          struct gl_texture23: public ::gtulu::internal::constant::gl_constant< gl_texture23 > {
              static inline char const* name() { return "texture23"; }
              static ::std::uint64_t const value = GL_TEXTURE23;
          };
          struct gl_texture24: public ::gtulu::internal::constant::gl_constant< gl_texture24 > {
              static inline char const* name() { return "texture24"; }
              static ::std::uint64_t const value = GL_TEXTURE24;
          };
          struct gl_texture25: public ::gtulu::internal::constant::gl_constant< gl_texture25 > {
              static inline char const* name() { return "texture25"; }
              static ::std::uint64_t const value = GL_TEXTURE25;
          };
          struct gl_texture26: public ::gtulu::internal::constant::gl_constant< gl_texture26 > {
              static inline char const* name() { return "texture26"; }
              static ::std::uint64_t const value = GL_TEXTURE26;
          };
          struct gl_texture27: public ::gtulu::internal::constant::gl_constant< gl_texture27 > {
              static inline char const* name() { return "texture27"; }
              static ::std::uint64_t const value = GL_TEXTURE27;
          };
          struct gl_texture28: public ::gtulu::internal::constant::gl_constant< gl_texture28 > {
              static inline char const* name() { return "texture28"; }
              static ::std::uint64_t const value = GL_TEXTURE28;
          };
          struct gl_texture29: public ::gtulu::internal::constant::gl_constant< gl_texture29 > {
              static inline char const* name() { return "texture29"; }
              static ::std::uint64_t const value = GL_TEXTURE29;
          };
          struct gl_texture3: public ::gtulu::internal::constant::gl_constant< gl_texture3 > {
              static inline char const* name() { return "texture3"; }
              static ::std::uint64_t const value = GL_TEXTURE3;
          };
          struct gl_texture30: public ::gtulu::internal::constant::gl_constant< gl_texture30 > {
              static inline char const* name() { return "texture30"; }
              static ::std::uint64_t const value = GL_TEXTURE30;
          };
          struct gl_texture31: public ::gtulu::internal::constant::gl_constant< gl_texture31 > {
              static inline char const* name() { return "texture31"; }
              static ::std::uint64_t const value = GL_TEXTURE31;
          };
          struct gl_texture4: public ::gtulu::internal::constant::gl_constant< gl_texture4 > {
              static inline char const* name() { return "texture4"; }
              static ::std::uint64_t const value = GL_TEXTURE4;
          };
          struct gl_texture5: public ::gtulu::internal::constant::gl_constant< gl_texture5 > {
              static inline char const* name() { return "texture5"; }
              static ::std::uint64_t const value = GL_TEXTURE5;
          };
          struct gl_texture6: public ::gtulu::internal::constant::gl_constant< gl_texture6 > {
              static inline char const* name() { return "texture6"; }
              static ::std::uint64_t const value = GL_TEXTURE6;
          };
          struct gl_texture7: public ::gtulu::internal::constant::gl_constant< gl_texture7 > {
              static inline char const* name() { return "texture7"; }
              static ::std::uint64_t const value = GL_TEXTURE7;
          };
          struct gl_texture8: public ::gtulu::internal::constant::gl_constant< gl_texture8 > {
              static inline char const* name() { return "texture8"; }
              static ::std::uint64_t const value = GL_TEXTURE8;
          };
          struct gl_texture9: public ::gtulu::internal::constant::gl_constant< gl_texture9 > {
              static inline char const* name() { return "texture9"; }
              static ::std::uint64_t const value = GL_TEXTURE9;
          };
          struct gl_texture_binding_cube_map: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_cube_map > {
              static inline char const* name() { return "texture_binding_cube_map"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_CUBE_MAP;
          };
          struct gl_texture_compressed: public ::gtulu::internal::constant::gl_constant< gl_texture_compressed > {
              static inline char const* name() { return "texture_compressed"; }
              static ::std::uint64_t const value = GL_TEXTURE_COMPRESSED;
          };
          struct gl_texture_compressed_image_size: public ::gtulu::internal::constant::gl_constant< gl_texture_compressed_image_size > {
              static inline char const* name() { return "texture_compressed_image_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
          };
          struct gl_texture_compression_hint: public ::gtulu::internal::constant::gl_constant< gl_texture_compression_hint > {
              static inline char const* name() { return "texture_compression_hint"; }
              static ::std::uint64_t const value = GL_TEXTURE_COMPRESSION_HINT;
          };
          struct gl_texture_cube_map: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map > {
              static inline char const* name() { return "texture_cube_map"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP;
          };
          struct gl_texture_cube_map_negative_x: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_negative_x > {
              static inline char const* name() { return "texture_cube_map_negative_x"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
          };
          struct gl_texture_cube_map_negative_y: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_negative_y > {
              static inline char const* name() { return "texture_cube_map_negative_y"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
          };
          struct gl_texture_cube_map_negative_z: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_negative_z > {
              static inline char const* name() { return "texture_cube_map_negative_z"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
          };
          struct gl_texture_cube_map_positive_x: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_positive_x > {
              static inline char const* name() { return "texture_cube_map_positive_x"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_POSITIVE_X;
          };
          struct gl_texture_cube_map_positive_y: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_positive_y > {
              static inline char const* name() { return "texture_cube_map_positive_y"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
          };
          struct gl_texture_cube_map_positive_z: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_positive_z > {
              static inline char const* name() { return "texture_cube_map_positive_z"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
          };
          struct gl_version_1_3: public ::gtulu::internal::constant::gl_constant< gl_version_1_3 > {
              static inline char const* name() { return "version_1_3"; }
              static ::std::uint64_t const value = GL_VERSION_1_3;
          };
        } // namespace cst
      } // namespace v1_3
      namespace v1_4 {
        namespace cst {
          struct gl_blend_dst_alpha: public ::gtulu::internal::constant::gl_constant< gl_blend_dst_alpha > {
              static inline char const* name() { return "blend_dst_alpha"; }
              static ::std::uint64_t const value = GL_BLEND_DST_ALPHA;
          };
          struct gl_blend_dst_rgb: public ::gtulu::internal::constant::gl_constant< gl_blend_dst_rgb > {
              static inline char const* name() { return "blend_dst_rgb"; }
              static ::std::uint64_t const value = GL_BLEND_DST_RGB;
          };
          struct gl_blend_src_alpha: public ::gtulu::internal::constant::gl_constant< gl_blend_src_alpha > {
              static inline char const* name() { return "blend_src_alpha"; }
              static ::std::uint64_t const value = GL_BLEND_SRC_ALPHA;
          };
          struct gl_blend_src_rgb: public ::gtulu::internal::constant::gl_constant< gl_blend_src_rgb > {
              static inline char const* name() { return "blend_src_rgb"; }
              static ::std::uint64_t const value = GL_BLEND_SRC_RGB;
          };
          struct gl_decr_wrap: public ::gtulu::internal::constant::gl_constant< gl_decr_wrap > {
              static inline char const* name() { return "decr_wrap"; }
              static ::std::uint64_t const value = GL_DECR_WRAP;
          };
          struct gl_depth_component16: public ::gtulu::internal::constant::gl_constant< gl_depth_component16 > {
              static inline char const* name() { return "depth_component16"; }
              static ::std::uint64_t const value = GL_DEPTH_COMPONENT16;
          };
          struct gl_depth_component24: public ::gtulu::internal::constant::gl_constant< gl_depth_component24 > {
              static inline char const* name() { return "depth_component24"; }
              static ::std::uint64_t const value = GL_DEPTH_COMPONENT24;
          };
          struct gl_depth_component32: public ::gtulu::internal::constant::gl_constant< gl_depth_component32 > {
              static inline char const* name() { return "depth_component32"; }
              static ::std::uint64_t const value = GL_DEPTH_COMPONENT32;
          };
          struct gl_incr_wrap: public ::gtulu::internal::constant::gl_constant< gl_incr_wrap > {
              static inline char const* name() { return "incr_wrap"; }
              static ::std::uint64_t const value = GL_INCR_WRAP;
          };
          struct gl_max_texture_lod_bias: public ::gtulu::internal::constant::gl_constant< gl_max_texture_lod_bias > {
              static inline char const* name() { return "max_texture_lod_bias"; }
              static ::std::uint64_t const value = GL_MAX_TEXTURE_LOD_BIAS;
          };
          struct gl_mirrored_repeat: public ::gtulu::internal::constant::gl_constant< gl_mirrored_repeat > {
              static inline char const* name() { return "mirrored_repeat"; }
              static ::std::uint64_t const value = GL_MIRRORED_REPEAT;
          };
          struct gl_point_fade_threshold_size: public ::gtulu::internal::constant::gl_constant< gl_point_fade_threshold_size > {
              static inline char const* name() { return "point_fade_threshold_size"; }
              static ::std::uint64_t const value = GL_POINT_FADE_THRESHOLD_SIZE;
          };
          struct gl_texture_compare_func: public ::gtulu::internal::constant::gl_constant< gl_texture_compare_func > {
              static inline char const* name() { return "texture_compare_func"; }
              static ::std::uint64_t const value = GL_TEXTURE_COMPARE_FUNC;
          };
          struct gl_texture_compare_mode: public ::gtulu::internal::constant::gl_constant< gl_texture_compare_mode > {
              static inline char const* name() { return "texture_compare_mode"; }
              static ::std::uint64_t const value = GL_TEXTURE_COMPARE_MODE;
          };
          struct gl_texture_depth_size: public ::gtulu::internal::constant::gl_constant< gl_texture_depth_size > {
              static inline char const* name() { return "texture_depth_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_DEPTH_SIZE;
          };
          struct gl_texture_lod_bias: public ::gtulu::internal::constant::gl_constant< gl_texture_lod_bias > {
              static inline char const* name() { return "texture_lod_bias"; }
              static ::std::uint64_t const value = GL_TEXTURE_LOD_BIAS;
          };
          struct gl_version_1_4: public ::gtulu::internal::constant::gl_constant< gl_version_1_4 > {
              static inline char const* name() { return "version_1_4"; }
              static ::std::uint64_t const value = GL_VERSION_1_4;
          };
        } // namespace cst
      } // namespace v1_4
      namespace v1_5 {
        namespace cst {
          struct gl_array_buffer: public ::gtulu::internal::constant::gl_constant< gl_array_buffer > {
              static inline char const* name() { return "array_buffer"; }
              static ::std::uint64_t const value = GL_ARRAY_BUFFER;
          };
          struct gl_array_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_array_buffer_binding > {
              static inline char const* name() { return "array_buffer_binding"; }
              static ::std::uint64_t const value = GL_ARRAY_BUFFER_BINDING;
          };
          struct gl_buffer_access: public ::gtulu::internal::constant::gl_constant< gl_buffer_access > {
              static inline char const* name() { return "buffer_access"; }
              static ::std::uint64_t const value = GL_BUFFER_ACCESS;
          };
          struct gl_buffer_mapped: public ::gtulu::internal::constant::gl_constant< gl_buffer_mapped > {
              static inline char const* name() { return "buffer_mapped"; }
              static ::std::uint64_t const value = GL_BUFFER_MAPPED;
          };
          struct gl_buffer_map_pointer: public ::gtulu::internal::constant::gl_constant< gl_buffer_map_pointer > {
              static inline char const* name() { return "buffer_map_pointer"; }
              static ::std::uint64_t const value = GL_BUFFER_MAP_POINTER;
          };
          struct gl_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_buffer_size > {
              static inline char const* name() { return "buffer_size"; }
              static ::std::uint64_t const value = GL_BUFFER_SIZE;
          };
          struct gl_buffer_usage: public ::gtulu::internal::constant::gl_constant< gl_buffer_usage > {
              static inline char const* name() { return "buffer_usage"; }
              static ::std::uint64_t const value = GL_BUFFER_USAGE;
          };
          struct gl_current_query: public ::gtulu::internal::constant::gl_constant< gl_current_query > {
              static inline char const* name() { return "current_query"; }
              static ::std::uint64_t const value = GL_CURRENT_QUERY;
          };
          struct gl_dynamic_copy: public ::gtulu::internal::constant::gl_constant< gl_dynamic_copy > {
              static inline char const* name() { return "dynamic_copy"; }
              static ::std::uint64_t const value = GL_DYNAMIC_COPY;
          };
          struct gl_dynamic_draw: public ::gtulu::internal::constant::gl_constant< gl_dynamic_draw > {
              static inline char const* name() { return "dynamic_draw"; }
              static ::std::uint64_t const value = GL_DYNAMIC_DRAW;
          };
          struct gl_dynamic_read: public ::gtulu::internal::constant::gl_constant< gl_dynamic_read > {
              static inline char const* name() { return "dynamic_read"; }
              static ::std::uint64_t const value = GL_DYNAMIC_READ;
          };
          struct gl_element_array_buffer: public ::gtulu::internal::constant::gl_constant< gl_element_array_buffer > {
              static inline char const* name() { return "element_array_buffer"; }
              static ::std::uint64_t const value = GL_ELEMENT_ARRAY_BUFFER;
          };
          struct gl_element_array_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_element_array_buffer_binding > {
              static inline char const* name() { return "element_array_buffer_binding"; }
              static ::std::uint64_t const value = GL_ELEMENT_ARRAY_BUFFER_BINDING;
          };
          struct gl_query_counter_bits: public ::gtulu::internal::constant::gl_constant< gl_query_counter_bits > {
              static inline char const* name() { return "query_counter_bits"; }
              static ::std::uint64_t const value = GL_QUERY_COUNTER_BITS;
          };
          struct gl_query_result: public ::gtulu::internal::constant::gl_constant< gl_query_result > {
              static inline char const* name() { return "query_result"; }
              static ::std::uint64_t const value = GL_QUERY_RESULT;
          };
          struct gl_query_result_available: public ::gtulu::internal::constant::gl_constant< gl_query_result_available > {
              static inline char const* name() { return "query_result_available"; }
              static ::std::uint64_t const value = GL_QUERY_RESULT_AVAILABLE;
          };
          struct gl_read_only: public ::gtulu::internal::constant::gl_constant< gl_read_only > {
              static inline char const* name() { return "read_only"; }
              static ::std::uint64_t const value = GL_READ_ONLY;
          };
          struct gl_read_write: public ::gtulu::internal::constant::gl_constant< gl_read_write > {
              static inline char const* name() { return "read_write"; }
              static ::std::uint64_t const value = GL_READ_WRITE;
          };
          struct gl_samples_passed: public ::gtulu::internal::constant::gl_constant< gl_samples_passed > {
              static inline char const* name() { return "samples_passed"; }
              static ::std::uint64_t const value = GL_SAMPLES_PASSED;
          };
          struct gl_static_copy: public ::gtulu::internal::constant::gl_constant< gl_static_copy > {
              static inline char const* name() { return "static_copy"; }
              static ::std::uint64_t const value = GL_STATIC_COPY;
          };
          struct gl_static_draw: public ::gtulu::internal::constant::gl_constant< gl_static_draw > {
              static inline char const* name() { return "static_draw"; }
              static ::std::uint64_t const value = GL_STATIC_DRAW;
          };
          struct gl_static_read: public ::gtulu::internal::constant::gl_constant< gl_static_read > {
              static inline char const* name() { return "static_read"; }
              static ::std::uint64_t const value = GL_STATIC_READ;
          };
          struct gl_stream_copy: public ::gtulu::internal::constant::gl_constant< gl_stream_copy > {
              static inline char const* name() { return "stream_copy"; }
              static ::std::uint64_t const value = GL_STREAM_COPY;
          };
          struct gl_stream_draw: public ::gtulu::internal::constant::gl_constant< gl_stream_draw > {
              static inline char const* name() { return "stream_draw"; }
              static ::std::uint64_t const value = GL_STREAM_DRAW;
          };
          struct gl_stream_read: public ::gtulu::internal::constant::gl_constant< gl_stream_read > {
              static inline char const* name() { return "stream_read"; }
              static ::std::uint64_t const value = GL_STREAM_READ;
          };
          struct gl_version_1_5: public ::gtulu::internal::constant::gl_constant< gl_version_1_5 > {
              static inline char const* name() { return "version_1_5"; }
              static ::std::uint64_t const value = GL_VERSION_1_5;
          };
          struct gl_vertex_attrib_array_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_buffer_binding > {
              static inline char const* name() { return "vertex_attrib_array_buffer_binding"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
          };
          struct gl_write_only: public ::gtulu::internal::constant::gl_constant< gl_write_only > {
              static inline char const* name() { return "write_only"; }
              static ::std::uint64_t const value = GL_WRITE_ONLY;
          };
        } // namespace cst
      } // namespace v1_5
      namespace v2_0 {
        namespace cst {
          struct gl_active_attributes: public ::gtulu::internal::constant::gl_constant< gl_active_attributes > {
              static inline char const* name() { return "active_attributes"; }
              static ::std::uint64_t const value = GL_ACTIVE_ATTRIBUTES;
          };
          struct gl_active_attribute_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_attribute_max_length > {
              static inline char const* name() { return "active_attribute_max_length"; }
              static ::std::uint64_t const value = GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
          };
          struct gl_active_uniforms: public ::gtulu::internal::constant::gl_constant< gl_active_uniforms > {
              static inline char const* name() { return "active_uniforms"; }
              static ::std::uint64_t const value = GL_ACTIVE_UNIFORMS;
          };
          struct gl_active_uniform_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_uniform_max_length > {
              static inline char const* name() { return "active_uniform_max_length"; }
              static ::std::uint64_t const value = GL_ACTIVE_UNIFORM_MAX_LENGTH;
          };
          struct gl_attached_shaders: public ::gtulu::internal::constant::gl_constant< gl_attached_shaders > {
              static inline char const* name() { return "attached_shaders"; }
              static ::std::uint64_t const value = GL_ATTACHED_SHADERS;
          };
          struct gl_blend_equation_alpha: public ::gtulu::internal::constant::gl_constant< gl_blend_equation_alpha > {
              static inline char const* name() { return "blend_equation_alpha"; }
              static ::std::uint64_t const value = GL_BLEND_EQUATION_ALPHA;
          };
          struct gl_blend_equation_rgb: public ::gtulu::internal::constant::gl_constant< gl_blend_equation_rgb > {
              static inline char const* name() { return "blend_equation_rgb"; }
              static ::std::uint64_t const value = GL_BLEND_EQUATION_RGB;
          };
          struct gl_bool: public ::gtulu::internal::constant::gl_constant< gl_bool > {
              static inline char const* name() { return "bool"; }
              static ::std::uint64_t const value = GL_BOOL;
          };
          struct gl_bool_vec2: public ::gtulu::internal::constant::gl_constant< gl_bool_vec2 > {
              static inline char const* name() { return "bool_vec2"; }
              static ::std::uint64_t const value = GL_BOOL_VEC2;
          };
          struct gl_bool_vec3: public ::gtulu::internal::constant::gl_constant< gl_bool_vec3 > {
              static inline char const* name() { return "bool_vec3"; }
              static ::std::uint64_t const value = GL_BOOL_VEC3;
          };
          struct gl_bool_vec4: public ::gtulu::internal::constant::gl_constant< gl_bool_vec4 > {
              static inline char const* name() { return "bool_vec4"; }
              static ::std::uint64_t const value = GL_BOOL_VEC4;
          };
          struct gl_compile_status: public ::gtulu::internal::constant::gl_constant< gl_compile_status > {
              static inline char const* name() { return "compile_status"; }
              static ::std::uint64_t const value = GL_COMPILE_STATUS;
          };
          struct gl_current_program: public ::gtulu::internal::constant::gl_constant< gl_current_program > {
              static inline char const* name() { return "current_program"; }
              static ::std::uint64_t const value = GL_CURRENT_PROGRAM;
          };
          struct gl_current_vertex_attrib: public ::gtulu::internal::constant::gl_constant< gl_current_vertex_attrib > {
              static inline char const* name() { return "current_vertex_attrib"; }
              static ::std::uint64_t const value = GL_CURRENT_VERTEX_ATTRIB;
          };
          struct gl_delete_status: public ::gtulu::internal::constant::gl_constant< gl_delete_status > {
              static inline char const* name() { return "delete_status"; }
              static ::std::uint64_t const value = GL_DELETE_STATUS;
          };
          struct gl_draw_buffer0: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer0 > {
              static inline char const* name() { return "draw_buffer0"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER0;
          };
          struct gl_draw_buffer1: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer1 > {
              static inline char const* name() { return "draw_buffer1"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER1;
          };
          struct gl_draw_buffer10: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer10 > {
              static inline char const* name() { return "draw_buffer10"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER10;
          };
          struct gl_draw_buffer11: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer11 > {
              static inline char const* name() { return "draw_buffer11"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER11;
          };
          struct gl_draw_buffer12: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer12 > {
              static inline char const* name() { return "draw_buffer12"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER12;
          };
          struct gl_draw_buffer13: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer13 > {
              static inline char const* name() { return "draw_buffer13"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER13;
          };
          struct gl_draw_buffer14: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer14 > {
              static inline char const* name() { return "draw_buffer14"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER14;
          };
          struct gl_draw_buffer15: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer15 > {
              static inline char const* name() { return "draw_buffer15"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER15;
          };
          struct gl_draw_buffer2: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer2 > {
              static inline char const* name() { return "draw_buffer2"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER2;
          };
          struct gl_draw_buffer3: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer3 > {
              static inline char const* name() { return "draw_buffer3"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER3;
          };
          struct gl_draw_buffer4: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer4 > {
              static inline char const* name() { return "draw_buffer4"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER4;
          };
          struct gl_draw_buffer5: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer5 > {
              static inline char const* name() { return "draw_buffer5"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER5;
          };
          struct gl_draw_buffer6: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer6 > {
              static inline char const* name() { return "draw_buffer6"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER6;
          };
          struct gl_draw_buffer7: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer7 > {
              static inline char const* name() { return "draw_buffer7"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER7;
          };
          struct gl_draw_buffer8: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer8 > {
              static inline char const* name() { return "draw_buffer8"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER8;
          };
          struct gl_draw_buffer9: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer9 > {
              static inline char const* name() { return "draw_buffer9"; }
              static ::std::uint64_t const value = GL_DRAW_BUFFER9;
          };
          struct gl_float_mat2: public ::gtulu::internal::constant::gl_constant< gl_float_mat2 > {
              static inline char const* name() { return "float_mat2"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT2;
          };
          struct gl_float_mat3: public ::gtulu::internal::constant::gl_constant< gl_float_mat3 > {
              static inline char const* name() { return "float_mat3"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT3;
          };
          struct gl_float_mat4: public ::gtulu::internal::constant::gl_constant< gl_float_mat4 > {
              static inline char const* name() { return "float_mat4"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT4;
          };
          struct gl_float_vec2: public ::gtulu::internal::constant::gl_constant< gl_float_vec2 > {
              static inline char const* name() { return "float_vec2"; }
              static ::std::uint64_t const value = GL_FLOAT_VEC2;
          };
          struct gl_float_vec3: public ::gtulu::internal::constant::gl_constant< gl_float_vec3 > {
              static inline char const* name() { return "float_vec3"; }
              static ::std::uint64_t const value = GL_FLOAT_VEC3;
          };
          struct gl_float_vec4: public ::gtulu::internal::constant::gl_constant< gl_float_vec4 > {
              static inline char const* name() { return "float_vec4"; }
              static ::std::uint64_t const value = GL_FLOAT_VEC4;
          };
          struct gl_fragment_shader: public ::gtulu::internal::constant::gl_constant< gl_fragment_shader > {
              static inline char const* name() { return "fragment_shader"; }
              static ::std::uint64_t const value = GL_FRAGMENT_SHADER;
          };
          struct gl_fragment_shader_derivative_hint: public ::gtulu::internal::constant::gl_constant< gl_fragment_shader_derivative_hint > {
              static inline char const* name() { return "fragment_shader_derivative_hint"; }
              static ::std::uint64_t const value = GL_FRAGMENT_SHADER_DERIVATIVE_HINT;
          };
          struct gl_info_log_length: public ::gtulu::internal::constant::gl_constant< gl_info_log_length > {
              static inline char const* name() { return "info_log_length"; }
              static ::std::uint64_t const value = GL_INFO_LOG_LENGTH;
          };
          struct gl_int_vec2: public ::gtulu::internal::constant::gl_constant< gl_int_vec2 > {
              static inline char const* name() { return "int_vec2"; }
              static ::std::uint64_t const value = GL_INT_VEC2;
          };
          struct gl_int_vec3: public ::gtulu::internal::constant::gl_constant< gl_int_vec3 > {
              static inline char const* name() { return "int_vec3"; }
              static ::std::uint64_t const value = GL_INT_VEC3;
          };
          struct gl_int_vec4: public ::gtulu::internal::constant::gl_constant< gl_int_vec4 > {
              static inline char const* name() { return "int_vec4"; }
              static ::std::uint64_t const value = GL_INT_VEC4;
          };
          struct gl_link_status: public ::gtulu::internal::constant::gl_constant< gl_link_status > {
              static inline char const* name() { return "link_status"; }
              static ::std::uint64_t const value = GL_LINK_STATUS;
          };
          struct gl_lower_left: public ::gtulu::internal::constant::gl_constant< gl_lower_left > {
              static inline char const* name() { return "lower_left"; }
              static ::std::uint64_t const value = GL_LOWER_LEFT;
          };
          struct gl_max_combined_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_combined_texture_image_units > {
              static inline char const* name() { return "max_combined_texture_image_units"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_draw_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_draw_buffers > {
              static inline char const* name() { return "max_draw_buffers"; }
              static ::std::uint64_t const value = GL_MAX_DRAW_BUFFERS;
          };
          struct gl_max_fragment_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_uniform_components > {
              static inline char const* name() { return "max_fragment_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
          };
          struct gl_max_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_texture_image_units > {
              static inline char const* name() { return "max_texture_image_units"; }
              static ::std::uint64_t const value = GL_MAX_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_varying_floats: public ::gtulu::internal::constant::gl_constant< gl_max_varying_floats > {
              static inline char const* name() { return "max_varying_floats"; }
              static ::std::uint64_t const value = GL_MAX_VARYING_FLOATS;
          };
          struct gl_max_vertex_attribs: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_attribs > {
              static inline char const* name() { return "max_vertex_attribs"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_ATTRIBS;
          };
          struct gl_max_vertex_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_texture_image_units > {
              static inline char const* name() { return "max_vertex_texture_image_units"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_vertex_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_uniform_components > {
              static inline char const* name() { return "max_vertex_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_UNIFORM_COMPONENTS;
          };
          struct gl_point_sprite_coord_origin: public ::gtulu::internal::constant::gl_constant< gl_point_sprite_coord_origin > {
              static inline char const* name() { return "point_sprite_coord_origin"; }
              static ::std::uint64_t const value = GL_POINT_SPRITE_COORD_ORIGIN;
          };
          struct gl_sampler_1d: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d > {
              static inline char const* name() { return "sampler_1d"; }
              static ::std::uint64_t const value = GL_SAMPLER_1D;
          };
          struct gl_sampler_1d_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d_shadow > {
              static inline char const* name() { return "sampler_1d_shadow"; }
              static ::std::uint64_t const value = GL_SAMPLER_1D_SHADOW;
          };
          struct gl_sampler_2d: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d > {
              static inline char const* name() { return "sampler_2d"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D;
          };
          struct gl_sampler_2d_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_shadow > {
              static inline char const* name() { return "sampler_2d_shadow"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D_SHADOW;
          };
          struct gl_sampler_3d: public ::gtulu::internal::constant::gl_constant< gl_sampler_3d > {
              static inline char const* name() { return "sampler_3d"; }
              static ::std::uint64_t const value = GL_SAMPLER_3D;
          };
          struct gl_sampler_cube: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube > {
              static inline char const* name() { return "sampler_cube"; }
              static ::std::uint64_t const value = GL_SAMPLER_CUBE;
          };
          struct gl_shader_source_length: public ::gtulu::internal::constant::gl_constant< gl_shader_source_length > {
              static inline char const* name() { return "shader_source_length"; }
              static ::std::uint64_t const value = GL_SHADER_SOURCE_LENGTH;
          };
          struct gl_shader_type: public ::gtulu::internal::constant::gl_constant< gl_shader_type > {
              static inline char const* name() { return "shader_type"; }
              static ::std::uint64_t const value = GL_SHADER_TYPE;
          };
          struct gl_shading_language_version: public ::gtulu::internal::constant::gl_constant< gl_shading_language_version > {
              static inline char const* name() { return "shading_language_version"; }
              static ::std::uint64_t const value = GL_SHADING_LANGUAGE_VERSION;
          };
          struct gl_stencil_back_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_fail > {
              static inline char const* name() { return "stencil_back_fail"; }
              static ::std::uint64_t const value = GL_STENCIL_BACK_FAIL;
          };
          struct gl_stencil_back_func: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_func > {
              static inline char const* name() { return "stencil_back_func"; }
              static ::std::uint64_t const value = GL_STENCIL_BACK_FUNC;
          };
          struct gl_stencil_back_pass_depth_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_pass_depth_fail > {
              static inline char const* name() { return "stencil_back_pass_depth_fail"; }
              static ::std::uint64_t const value = GL_STENCIL_BACK_PASS_DEPTH_FAIL;
          };
          struct gl_stencil_back_pass_depth_pass: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_pass_depth_pass > {
              static inline char const* name() { return "stencil_back_pass_depth_pass"; }
              static ::std::uint64_t const value = GL_STENCIL_BACK_PASS_DEPTH_PASS;
          };
          struct gl_stencil_back_ref: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_ref > {
              static inline char const* name() { return "stencil_back_ref"; }
              static ::std::uint64_t const value = GL_STENCIL_BACK_REF;
          };
          struct gl_stencil_back_value_mask: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_value_mask > {
              static inline char const* name() { return "stencil_back_value_mask"; }
              static ::std::uint64_t const value = GL_STENCIL_BACK_VALUE_MASK;
          };
          struct gl_stencil_back_writemask: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_writemask > {
              static inline char const* name() { return "stencil_back_writemask"; }
              static ::std::uint64_t const value = GL_STENCIL_BACK_WRITEMASK;
          };
          struct gl_upper_left: public ::gtulu::internal::constant::gl_constant< gl_upper_left > {
              static inline char const* name() { return "upper_left"; }
              static ::std::uint64_t const value = GL_UPPER_LEFT;
          };
          struct gl_validate_status: public ::gtulu::internal::constant::gl_constant< gl_validate_status > {
              static inline char const* name() { return "validate_status"; }
              static ::std::uint64_t const value = GL_VALIDATE_STATUS;
          };
          struct gl_version_2_0: public ::gtulu::internal::constant::gl_constant< gl_version_2_0 > {
              static inline char const* name() { return "version_2_0"; }
              static ::std::uint64_t const value = GL_VERSION_2_0;
          };
          struct gl_vertex_attrib_array_enabled: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_enabled > {
              static inline char const* name() { return "vertex_attrib_array_enabled"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_ENABLED;
          };
          struct gl_vertex_attrib_array_normalized: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_normalized > {
              static inline char const* name() { return "vertex_attrib_array_normalized"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
          };
          struct gl_vertex_attrib_array_pointer: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_pointer > {
              static inline char const* name() { return "vertex_attrib_array_pointer"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_POINTER;
          };
          struct gl_vertex_attrib_array_size: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_size > {
              static inline char const* name() { return "vertex_attrib_array_size"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_SIZE;
          };
          struct gl_vertex_attrib_array_stride: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_stride > {
              static inline char const* name() { return "vertex_attrib_array_stride"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_STRIDE;
          };
          struct gl_vertex_attrib_array_type: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_type > {
              static inline char const* name() { return "vertex_attrib_array_type"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_TYPE;
          };
          struct gl_vertex_program_point_size: public ::gtulu::internal::constant::gl_constant< gl_vertex_program_point_size > {
              static inline char const* name() { return "vertex_program_point_size"; }
              static ::std::uint64_t const value = GL_VERTEX_PROGRAM_POINT_SIZE;
          };
          struct gl_vertex_shader: public ::gtulu::internal::constant::gl_constant< gl_vertex_shader > {
              static inline char const* name() { return "vertex_shader"; }
              static ::std::uint64_t const value = GL_VERTEX_SHADER;
          };
        } // namespace cst
      } // namespace v2_0
      namespace v2_1 {
        namespace cst {
          struct gl_compressed_srgb: public ::gtulu::internal::constant::gl_constant< gl_compressed_srgb > {
              static inline char const* name() { return "compressed_srgb"; }
              static ::std::uint64_t const value = GL_COMPRESSED_SRGB;
          };
          struct gl_compressed_srgb_alpha: public ::gtulu::internal::constant::gl_constant< gl_compressed_srgb_alpha > {
              static inline char const* name() { return "compressed_srgb_alpha"; }
              static ::std::uint64_t const value = GL_COMPRESSED_SRGB_ALPHA;
          };
          struct gl_float_mat2x3: public ::gtulu::internal::constant::gl_constant< gl_float_mat2x3 > {
              static inline char const* name() { return "float_mat2x3"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT2x3;
          };
          struct gl_float_mat2x4: public ::gtulu::internal::constant::gl_constant< gl_float_mat2x4 > {
              static inline char const* name() { return "float_mat2x4"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT2x4;
          };
          struct gl_float_mat3x2: public ::gtulu::internal::constant::gl_constant< gl_float_mat3x2 > {
              static inline char const* name() { return "float_mat3x2"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT3x2;
          };
          struct gl_float_mat3x4: public ::gtulu::internal::constant::gl_constant< gl_float_mat3x4 > {
              static inline char const* name() { return "float_mat3x4"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT3x4;
          };
          struct gl_float_mat4x2: public ::gtulu::internal::constant::gl_constant< gl_float_mat4x2 > {
              static inline char const* name() { return "float_mat4x2"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT4x2;
          };
          struct gl_float_mat4x3: public ::gtulu::internal::constant::gl_constant< gl_float_mat4x3 > {
              static inline char const* name() { return "float_mat4x3"; }
              static ::std::uint64_t const value = GL_FLOAT_MAT4x3;
          };
          struct gl_pixel_pack_buffer: public ::gtulu::internal::constant::gl_constant< gl_pixel_pack_buffer > {
              static inline char const* name() { return "pixel_pack_buffer"; }
              static ::std::uint64_t const value = GL_PIXEL_PACK_BUFFER;
          };
          struct gl_pixel_pack_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_pixel_pack_buffer_binding > {
              static inline char const* name() { return "pixel_pack_buffer_binding"; }
              static ::std::uint64_t const value = GL_PIXEL_PACK_BUFFER_BINDING;
          };
          struct gl_pixel_unpack_buffer: public ::gtulu::internal::constant::gl_constant< gl_pixel_unpack_buffer > {
              static inline char const* name() { return "pixel_unpack_buffer"; }
              static ::std::uint64_t const value = GL_PIXEL_UNPACK_BUFFER;
          };
          struct gl_pixel_unpack_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_pixel_unpack_buffer_binding > {
              static inline char const* name() { return "pixel_unpack_buffer_binding"; }
              static ::std::uint64_t const value = GL_PIXEL_UNPACK_BUFFER_BINDING;
          };
          struct gl_srgb: public ::gtulu::internal::constant::gl_constant< gl_srgb > {
              static inline char const* name() { return "srgb"; }
              static ::std::uint64_t const value = GL_SRGB;
          };
          struct gl_srgb8: public ::gtulu::internal::constant::gl_constant< gl_srgb8 > {
              static inline char const* name() { return "srgb8"; }
              static ::std::uint64_t const value = GL_SRGB8;
          };
          struct gl_srgb8_alpha8: public ::gtulu::internal::constant::gl_constant< gl_srgb8_alpha8 > {
              static inline char const* name() { return "srgb8_alpha8"; }
              static ::std::uint64_t const value = GL_SRGB8_ALPHA8;
          };
          struct gl_srgb_alpha: public ::gtulu::internal::constant::gl_constant< gl_srgb_alpha > {
              static inline char const* name() { return "srgb_alpha"; }
              static ::std::uint64_t const value = GL_SRGB_ALPHA;
          };
          struct gl_version_2_1: public ::gtulu::internal::constant::gl_constant< gl_version_2_1 > {
              static inline char const* name() { return "version_2_1"; }
              static ::std::uint64_t const value = GL_VERSION_2_1;
          };
        } // namespace cst
      } // namespace v2_1
      namespace v3_0 {
        namespace cst {
          struct gl_bgra_integer: public ::gtulu::internal::constant::gl_constant< gl_bgra_integer > {
              static inline char const* name() { return "bgra_integer"; }
              static ::std::uint64_t const value = GL_BGRA_INTEGER;
          };
          struct gl_bgr_integer: public ::gtulu::internal::constant::gl_constant< gl_bgr_integer > {
              static inline char const* name() { return "bgr_integer"; }
              static ::std::uint64_t const value = GL_BGR_INTEGER;
          };
          struct gl_blue_integer: public ::gtulu::internal::constant::gl_constant< gl_blue_integer > {
              static inline char const* name() { return "blue_integer"; }
              static ::std::uint64_t const value = GL_BLUE_INTEGER;
          };
          struct gl_buffer_access_flags: public ::gtulu::internal::constant::gl_constant< gl_buffer_access_flags > {
              static inline char const* name() { return "buffer_access_flags"; }
              static ::std::uint64_t const value = GL_BUFFER_ACCESS_FLAGS;
          };
          struct gl_buffer_map_length: public ::gtulu::internal::constant::gl_constant< gl_buffer_map_length > {
              static inline char const* name() { return "buffer_map_length"; }
              static ::std::uint64_t const value = GL_BUFFER_MAP_LENGTH;
          };
          struct gl_buffer_map_offset: public ::gtulu::internal::constant::gl_constant< gl_buffer_map_offset > {
              static inline char const* name() { return "buffer_map_offset"; }
              static ::std::uint64_t const value = GL_BUFFER_MAP_OFFSET;
          };
          struct gl_clamp_read_color: public ::gtulu::internal::constant::gl_constant< gl_clamp_read_color > {
              static inline char const* name() { return "clamp_read_color"; }
              static ::std::uint64_t const value = GL_CLAMP_READ_COLOR;
          };
          struct gl_clip_distance0: public ::gtulu::internal::constant::gl_constant< gl_clip_distance0 > {
              static inline char const* name() { return "clip_distance0"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE0;
          };
          struct gl_clip_distance1: public ::gtulu::internal::constant::gl_constant< gl_clip_distance1 > {
              static inline char const* name() { return "clip_distance1"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE1;
          };
          struct gl_clip_distance2: public ::gtulu::internal::constant::gl_constant< gl_clip_distance2 > {
              static inline char const* name() { return "clip_distance2"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE2;
          };
          struct gl_clip_distance3: public ::gtulu::internal::constant::gl_constant< gl_clip_distance3 > {
              static inline char const* name() { return "clip_distance3"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE3;
          };
          struct gl_clip_distance4: public ::gtulu::internal::constant::gl_constant< gl_clip_distance4 > {
              static inline char const* name() { return "clip_distance4"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE4;
          };
          struct gl_clip_distance5: public ::gtulu::internal::constant::gl_constant< gl_clip_distance5 > {
              static inline char const* name() { return "clip_distance5"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE5;
          };
          struct gl_clip_distance6: public ::gtulu::internal::constant::gl_constant< gl_clip_distance6 > {
              static inline char const* name() { return "clip_distance6"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE6;
          };
          struct gl_clip_distance7: public ::gtulu::internal::constant::gl_constant< gl_clip_distance7 > {
              static inline char const* name() { return "clip_distance7"; }
              static ::std::uint64_t const value = GL_CLIP_DISTANCE7;
          };
          struct gl_compare_ref_to_texture: public ::gtulu::internal::constant::gl_constant< gl_compare_ref_to_texture > {
              static inline char const* name() { return "compare_ref_to_texture"; }
              static ::std::uint64_t const value = GL_COMPARE_REF_TO_TEXTURE;
          };
          struct gl_compressed_red: public ::gtulu::internal::constant::gl_constant< gl_compressed_red > {
              static inline char const* name() { return "compressed_red"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RED;
          };
          struct gl_compressed_rg: public ::gtulu::internal::constant::gl_constant< gl_compressed_rg > {
              static inline char const* name() { return "compressed_rg"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RG;
          };
          struct gl_context_flags: public ::gtulu::internal::constant::gl_constant< gl_context_flags > {
              static inline char const* name() { return "context_flags"; }
              static ::std::uint64_t const value = GL_CONTEXT_FLAGS;
          };
          struct gl_context_flag_forward_compatible_bit: public ::gtulu::internal::constant::gl_constant< gl_context_flag_forward_compatible_bit > {
              static inline char const* name() { return "context_flag_forward_compatible_bit"; }
              static ::std::uint64_t const value = GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
          };
          struct gl_depth_buffer: public ::gtulu::internal::constant::gl_constant< gl_depth_buffer > {
              static inline char const* name() { return "depth_buffer"; }
              static ::std::uint64_t const value = GL_DEPTH_BUFFER;
          };
          struct gl_fixed_only: public ::gtulu::internal::constant::gl_constant< gl_fixed_only > {
              static inline char const* name() { return "fixed_only"; }
              static ::std::uint64_t const value = GL_FIXED_ONLY;
          };
          struct gl_green_integer: public ::gtulu::internal::constant::gl_constant< gl_green_integer > {
              static inline char const* name() { return "green_integer"; }
              static ::std::uint64_t const value = GL_GREEN_INTEGER;
          };
          struct gl_interleaved_attribs: public ::gtulu::internal::constant::gl_constant< gl_interleaved_attribs > {
              static inline char const* name() { return "interleaved_attribs"; }
              static ::std::uint64_t const value = GL_INTERLEAVED_ATTRIBS;
          };
          struct gl_int_sampler_1d: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_1d > {
              static inline char const* name() { return "int_sampler_1d"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_1D;
          };
          struct gl_int_sampler_1d_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_1d_array > {
              static inline char const* name() { return "int_sampler_1d_array"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_1D_ARRAY;
          };
          struct gl_int_sampler_2d: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d > {
              static inline char const* name() { return "int_sampler_2d"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_2D;
          };
          struct gl_int_sampler_2d_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_array > {
              static inline char const* name() { return "int_sampler_2d_array"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_2D_ARRAY;
          };
          struct gl_int_sampler_3d: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_3d > {
              static inline char const* name() { return "int_sampler_3d"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_3D;
          };
          struct gl_int_sampler_cube: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_cube > {
              static inline char const* name() { return "int_sampler_cube"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_CUBE;
          };
          struct gl_major_version: public ::gtulu::internal::constant::gl_constant< gl_major_version > {
              static inline char const* name() { return "major_version"; }
              static ::std::uint64_t const value = GL_MAJOR_VERSION;
          };
          struct gl_max_array_texture_layers: public ::gtulu::internal::constant::gl_constant< gl_max_array_texture_layers > {
              static inline char const* name() { return "max_array_texture_layers"; }
              static ::std::uint64_t const value = GL_MAX_ARRAY_TEXTURE_LAYERS;
          };
          struct gl_max_clip_distances: public ::gtulu::internal::constant::gl_constant< gl_max_clip_distances > {
              static inline char const* name() { return "max_clip_distances"; }
              static ::std::uint64_t const value = GL_MAX_CLIP_DISTANCES;
          };
          struct gl_max_program_texel_offset: public ::gtulu::internal::constant::gl_constant< gl_max_program_texel_offset > {
              static inline char const* name() { return "max_program_texel_offset"; }
              static ::std::uint64_t const value = GL_MAX_PROGRAM_TEXEL_OFFSET;
          };
          struct gl_max_transform_feedback_interleaved_components: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_interleaved_components > {
              static inline char const* name() { return "max_transform_feedback_interleaved_components"; }
              static ::std::uint64_t const value = GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
          };
          struct gl_max_transform_feedback_separate_attribs: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_separate_attribs > {
              static inline char const* name() { return "max_transform_feedback_separate_attribs"; }
              static ::std::uint64_t const value = GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
          };
          struct gl_max_transform_feedback_separate_components: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_separate_components > {
              static inline char const* name() { return "max_transform_feedback_separate_components"; }
              static ::std::uint64_t const value = GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
          };
          struct gl_max_varying_components: public ::gtulu::internal::constant::gl_constant< gl_max_varying_components > {
              static inline char const* name() { return "max_varying_components"; }
              static ::std::uint64_t const value = GL_MAX_VARYING_COMPONENTS;
          };
          struct gl_minor_version: public ::gtulu::internal::constant::gl_constant< gl_minor_version > {
              static inline char const* name() { return "minor_version"; }
              static ::std::uint64_t const value = GL_MINOR_VERSION;
          };
          struct gl_min_program_texel_offset: public ::gtulu::internal::constant::gl_constant< gl_min_program_texel_offset > {
              static inline char const* name() { return "min_program_texel_offset"; }
              static ::std::uint64_t const value = GL_MIN_PROGRAM_TEXEL_OFFSET;
          };
          struct gl_num_extensions: public ::gtulu::internal::constant::gl_constant< gl_num_extensions > {
              static inline char const* name() { return "num_extensions"; }
              static ::std::uint64_t const value = GL_NUM_EXTENSIONS;
          };
          struct gl_primitives_generated: public ::gtulu::internal::constant::gl_constant< gl_primitives_generated > {
              static inline char const* name() { return "primitives_generated"; }
              static ::std::uint64_t const value = GL_PRIMITIVES_GENERATED;
          };
          struct gl_proxy_texture_1d_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_1d_array > {
              static inline char const* name() { return "proxy_texture_1d_array"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_1D_ARRAY;
          };
          struct gl_proxy_texture_2d_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d_array > {
              static inline char const* name() { return "proxy_texture_2d_array"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_2D_ARRAY;
          };
          struct gl_query_by_region_no_wait: public ::gtulu::internal::constant::gl_constant< gl_query_by_region_no_wait > {
              static inline char const* name() { return "query_by_region_no_wait"; }
              static ::std::uint64_t const value = GL_QUERY_BY_REGION_NO_WAIT;
          };
          struct gl_query_by_region_wait: public ::gtulu::internal::constant::gl_constant< gl_query_by_region_wait > {
              static inline char const* name() { return "query_by_region_wait"; }
              static ::std::uint64_t const value = GL_QUERY_BY_REGION_WAIT;
          };
          struct gl_query_no_wait: public ::gtulu::internal::constant::gl_constant< gl_query_no_wait > {
              static inline char const* name() { return "query_no_wait"; }
              static ::std::uint64_t const value = GL_QUERY_NO_WAIT;
          };
          struct gl_query_wait: public ::gtulu::internal::constant::gl_constant< gl_query_wait > {
              static inline char const* name() { return "query_wait"; }
              static ::std::uint64_t const value = GL_QUERY_WAIT;
          };
          struct gl_r11f_g11f_b10f: public ::gtulu::internal::constant::gl_constant< gl_r11f_g11f_b10f > {
              static inline char const* name() { return "r11f_g11f_b10f"; }
              static ::std::uint64_t const value = GL_R11F_G11F_B10F;
          };
          struct gl_rasterizer_discard: public ::gtulu::internal::constant::gl_constant< gl_rasterizer_discard > {
              static inline char const* name() { return "rasterizer_discard"; }
              static ::std::uint64_t const value = GL_RASTERIZER_DISCARD;
          };
          struct gl_red_integer: public ::gtulu::internal::constant::gl_constant< gl_red_integer > {
              static inline char const* name() { return "red_integer"; }
              static ::std::uint64_t const value = GL_RED_INTEGER;
          };
          struct gl_rgb16f: public ::gtulu::internal::constant::gl_constant< gl_rgb16f > {
              static inline char const* name() { return "rgb16f"; }
              static ::std::uint64_t const value = GL_RGB16F;
          };
          struct gl_rgb16i: public ::gtulu::internal::constant::gl_constant< gl_rgb16i > {
              static inline char const* name() { return "rgb16i"; }
              static ::std::uint64_t const value = GL_RGB16I;
          };
          struct gl_rgb16ui: public ::gtulu::internal::constant::gl_constant< gl_rgb16ui > {
              static inline char const* name() { return "rgb16ui"; }
              static ::std::uint64_t const value = GL_RGB16UI;
          };
          struct gl_rgb32f: public ::gtulu::internal::constant::gl_constant< gl_rgb32f > {
              static inline char const* name() { return "rgb32f"; }
              static ::std::uint64_t const value = GL_RGB32F;
          };
          struct gl_rgb32i: public ::gtulu::internal::constant::gl_constant< gl_rgb32i > {
              static inline char const* name() { return "rgb32i"; }
              static ::std::uint64_t const value = GL_RGB32I;
          };
          struct gl_rgb32ui: public ::gtulu::internal::constant::gl_constant< gl_rgb32ui > {
              static inline char const* name() { return "rgb32ui"; }
              static ::std::uint64_t const value = GL_RGB32UI;
          };
          struct gl_rgb8i: public ::gtulu::internal::constant::gl_constant< gl_rgb8i > {
              static inline char const* name() { return "rgb8i"; }
              static ::std::uint64_t const value = GL_RGB8I;
          };
          struct gl_rgb8ui: public ::gtulu::internal::constant::gl_constant< gl_rgb8ui > {
              static inline char const* name() { return "rgb8ui"; }
              static ::std::uint64_t const value = GL_RGB8UI;
          };
          struct gl_rgb9_e5: public ::gtulu::internal::constant::gl_constant< gl_rgb9_e5 > {
              static inline char const* name() { return "rgb9_e5"; }
              static ::std::uint64_t const value = GL_RGB9_E5;
          };
          struct gl_rgba16f: public ::gtulu::internal::constant::gl_constant< gl_rgba16f > {
              static inline char const* name() { return "rgba16f"; }
              static ::std::uint64_t const value = GL_RGBA16F;
          };
          struct gl_rgba16i: public ::gtulu::internal::constant::gl_constant< gl_rgba16i > {
              static inline char const* name() { return "rgba16i"; }
              static ::std::uint64_t const value = GL_RGBA16I;
          };
          struct gl_rgba16ui: public ::gtulu::internal::constant::gl_constant< gl_rgba16ui > {
              static inline char const* name() { return "rgba16ui"; }
              static ::std::uint64_t const value = GL_RGBA16UI;
          };
          struct gl_rgba32f: public ::gtulu::internal::constant::gl_constant< gl_rgba32f > {
              static inline char const* name() { return "rgba32f"; }
              static ::std::uint64_t const value = GL_RGBA32F;
          };
          struct gl_rgba32i: public ::gtulu::internal::constant::gl_constant< gl_rgba32i > {
              static inline char const* name() { return "rgba32i"; }
              static ::std::uint64_t const value = GL_RGBA32I;
          };
          struct gl_rgba32ui: public ::gtulu::internal::constant::gl_constant< gl_rgba32ui > {
              static inline char const* name() { return "rgba32ui"; }
              static ::std::uint64_t const value = GL_RGBA32UI;
          };
          struct gl_rgba8i: public ::gtulu::internal::constant::gl_constant< gl_rgba8i > {
              static inline char const* name() { return "rgba8i"; }
              static ::std::uint64_t const value = GL_RGBA8I;
          };
          struct gl_rgba8ui: public ::gtulu::internal::constant::gl_constant< gl_rgba8ui > {
              static inline char const* name() { return "rgba8ui"; }
              static ::std::uint64_t const value = GL_RGBA8UI;
          };
          struct gl_rgba_integer: public ::gtulu::internal::constant::gl_constant< gl_rgba_integer > {
              static inline char const* name() { return "rgba_integer"; }
              static ::std::uint64_t const value = GL_RGBA_INTEGER;
          };
          struct gl_rgb_integer: public ::gtulu::internal::constant::gl_constant< gl_rgb_integer > {
              static inline char const* name() { return "rgb_integer"; }
              static ::std::uint64_t const value = GL_RGB_INTEGER;
          };
          struct gl_sampler_1d_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d_array > {
              static inline char const* name() { return "sampler_1d_array"; }
              static ::std::uint64_t const value = GL_SAMPLER_1D_ARRAY;
          };
          struct gl_sampler_1d_array_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d_array_shadow > {
              static inline char const* name() { return "sampler_1d_array_shadow"; }
              static ::std::uint64_t const value = GL_SAMPLER_1D_ARRAY_SHADOW;
          };
          struct gl_sampler_2d_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_array > {
              static inline char const* name() { return "sampler_2d_array"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D_ARRAY;
          };
          struct gl_sampler_2d_array_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_array_shadow > {
              static inline char const* name() { return "sampler_2d_array_shadow"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D_ARRAY_SHADOW;
          };
          struct gl_sampler_cube_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_shadow > {
              static inline char const* name() { return "sampler_cube_shadow"; }
              static ::std::uint64_t const value = GL_SAMPLER_CUBE_SHADOW;
          };
          struct gl_separate_attribs: public ::gtulu::internal::constant::gl_constant< gl_separate_attribs > {
              static inline char const* name() { return "separate_attribs"; }
              static ::std::uint64_t const value = GL_SEPARATE_ATTRIBS;
          };
          struct gl_stencil_buffer: public ::gtulu::internal::constant::gl_constant< gl_stencil_buffer > {
              static inline char const* name() { return "stencil_buffer"; }
              static ::std::uint64_t const value = GL_STENCIL_BUFFER;
          };
          struct gl_texture_1d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_1d_array > {
              static inline char const* name() { return "texture_1d_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_1D_ARRAY;
          };
          struct gl_texture_2d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_2d_array > {
              static inline char const* name() { return "texture_2d_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_2D_ARRAY;
          };
          struct gl_texture_binding_1d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_1d_array > {
              static inline char const* name() { return "texture_binding_1d_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_1D_ARRAY;
          };
          struct gl_texture_binding_2d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d_array > {
              static inline char const* name() { return "texture_binding_2d_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_2D_ARRAY;
          };
          struct gl_texture_shared_size: public ::gtulu::internal::constant::gl_constant< gl_texture_shared_size > {
              static inline char const* name() { return "texture_shared_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_SHARED_SIZE;
          };
          struct gl_transform_feedback_buffer: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer > {
              static inline char const* name() { return "transform_feedback_buffer"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BUFFER;
          };
          struct gl_transform_feedback_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_binding > {
              static inline char const* name() { return "transform_feedback_buffer_binding"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
          };
          struct gl_transform_feedback_buffer_mode: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_mode > {
              static inline char const* name() { return "transform_feedback_buffer_mode"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
          };
          struct gl_transform_feedback_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_size > {
              static inline char const* name() { return "transform_feedback_buffer_size"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
          };
          struct gl_transform_feedback_buffer_start: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_start > {
              static inline char const* name() { return "transform_feedback_buffer_start"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BUFFER_START;
          };
          struct gl_transform_feedback_primitives_written: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_primitives_written > {
              static inline char const* name() { return "transform_feedback_primitives_written"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
          };
          struct gl_transform_feedback_varyings: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_varyings > {
              static inline char const* name() { return "transform_feedback_varyings"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_VARYINGS;
          };
          struct gl_transform_feedback_varying_max_length: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_varying_max_length > {
              static inline char const* name() { return "transform_feedback_varying_max_length"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
          };
          struct gl_unsigned_int_10f_11f_11f_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_10f_11f_11f_rev > {
              static inline char const* name() { return "unsigned_int_10f_11f_11f_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_10F_11F_11F_REV;
          };
          struct gl_unsigned_int_5_9_9_9_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_5_9_9_9_rev > {
              static inline char const* name() { return "unsigned_int_5_9_9_9_rev"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_5_9_9_9_REV;
          };
          struct gl_unsigned_int_sampler_1d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_1d > {
              static inline char const* name() { return "unsigned_int_sampler_1d"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_1D;
          };
          struct gl_unsigned_int_sampler_1d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_1d_array > {
              static inline char const* name() { return "unsigned_int_sampler_1d_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_1D_ARRAY;
          };
          struct gl_unsigned_int_sampler_2d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d > {
              static inline char const* name() { return "unsigned_int_sampler_2d"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_2D;
          };
          struct gl_unsigned_int_sampler_2d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_array > {
              static inline char const* name() { return "unsigned_int_sampler_2d_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
          };
          struct gl_unsigned_int_sampler_3d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_3d > {
              static inline char const* name() { return "unsigned_int_sampler_3d"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_3D;
          };
          struct gl_unsigned_int_sampler_cube: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_cube > {
              static inline char const* name() { return "unsigned_int_sampler_cube"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_CUBE;
          };
          struct gl_unsigned_int_vec2: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_vec2 > {
              static inline char const* name() { return "unsigned_int_vec2"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_VEC2;
          };
          struct gl_unsigned_int_vec3: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_vec3 > {
              static inline char const* name() { return "unsigned_int_vec3"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_VEC3;
          };
          struct gl_unsigned_int_vec4: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_vec4 > {
              static inline char const* name() { return "unsigned_int_vec4"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_VEC4;
          };
          struct gl_version_3_0: public ::gtulu::internal::constant::gl_constant< gl_version_3_0 > {
              static inline char const* name() { return "version_3_0"; }
              static ::std::uint64_t const value = GL_VERSION_3_0;
          };
          struct gl_vertex_attrib_array_integer: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_integer > {
              static inline char const* name() { return "vertex_attrib_array_integer"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_INTEGER;
          };
        } // namespace cst
      } // namespace v3_0
      namespace v3_1 {
        namespace cst {
          struct gl_int_sampler_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_rect > {
              static inline char const* name() { return "int_sampler_2d_rect"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_2D_RECT;
          };
          struct gl_int_sampler_buffer: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_buffer > {
              static inline char const* name() { return "int_sampler_buffer"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_BUFFER;
          };
          struct gl_max_rectangle_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_rectangle_texture_size > {
              static inline char const* name() { return "max_rectangle_texture_size"; }
              static ::std::uint64_t const value = GL_MAX_RECTANGLE_TEXTURE_SIZE;
          };
          struct gl_max_texture_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_max_texture_buffer_size > {
              static inline char const* name() { return "max_texture_buffer_size"; }
              static ::std::uint64_t const value = GL_MAX_TEXTURE_BUFFER_SIZE;
          };
          struct gl_primitive_restart: public ::gtulu::internal::constant::gl_constant< gl_primitive_restart > {
              static inline char const* name() { return "primitive_restart"; }
              static ::std::uint64_t const value = GL_PRIMITIVE_RESTART;
          };
          struct gl_primitive_restart_index: public ::gtulu::internal::constant::gl_constant< gl_primitive_restart_index > {
              static inline char const* name() { return "primitive_restart_index"; }
              static ::std::uint64_t const value = GL_PRIMITIVE_RESTART_INDEX;
          };
          struct gl_proxy_texture_rectangle: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_rectangle > {
              static inline char const* name() { return "proxy_texture_rectangle"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_RECTANGLE;
          };
          struct gl_r16_snorm: public ::gtulu::internal::constant::gl_constant< gl_r16_snorm > {
              static inline char const* name() { return "r16_snorm"; }
              static ::std::uint64_t const value = GL_R16_SNORM;
          };
          struct gl_r8_snorm: public ::gtulu::internal::constant::gl_constant< gl_r8_snorm > {
              static inline char const* name() { return "r8_snorm"; }
              static ::std::uint64_t const value = GL_R8_SNORM;
          };
          struct gl_red_snorm: public ::gtulu::internal::constant::gl_constant< gl_red_snorm > {
              static inline char const* name() { return "red_snorm"; }
              static ::std::uint64_t const value = GL_RED_SNORM;
          };
          struct gl_rg16_snorm: public ::gtulu::internal::constant::gl_constant< gl_rg16_snorm > {
              static inline char const* name() { return "rg16_snorm"; }
              static ::std::uint64_t const value = GL_RG16_SNORM;
          };
          struct gl_rg8_snorm: public ::gtulu::internal::constant::gl_constant< gl_rg8_snorm > {
              static inline char const* name() { return "rg8_snorm"; }
              static ::std::uint64_t const value = GL_RG8_SNORM;
          };
          struct gl_rgb16_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgb16_snorm > {
              static inline char const* name() { return "rgb16_snorm"; }
              static ::std::uint64_t const value = GL_RGB16_SNORM;
          };
          struct gl_rgb8_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgb8_snorm > {
              static inline char const* name() { return "rgb8_snorm"; }
              static ::std::uint64_t const value = GL_RGB8_SNORM;
          };
          struct gl_rgba16_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgba16_snorm > {
              static inline char const* name() { return "rgba16_snorm"; }
              static ::std::uint64_t const value = GL_RGBA16_SNORM;
          };
          struct gl_rgba8_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgba8_snorm > {
              static inline char const* name() { return "rgba8_snorm"; }
              static ::std::uint64_t const value = GL_RGBA8_SNORM;
          };
          struct gl_rgba_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgba_snorm > {
              static inline char const* name() { return "rgba_snorm"; }
              static ::std::uint64_t const value = GL_RGBA_SNORM;
          };
          struct gl_rgb_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgb_snorm > {
              static inline char const* name() { return "rgb_snorm"; }
              static ::std::uint64_t const value = GL_RGB_SNORM;
          };
          struct gl_rg_snorm: public ::gtulu::internal::constant::gl_constant< gl_rg_snorm > {
              static inline char const* name() { return "rg_snorm"; }
              static ::std::uint64_t const value = GL_RG_SNORM;
          };
          struct gl_sampler_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_rect > {
              static inline char const* name() { return "sampler_2d_rect"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D_RECT;
          };
          struct gl_sampler_2d_rect_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_rect_shadow > {
              static inline char const* name() { return "sampler_2d_rect_shadow"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D_RECT_SHADOW;
          };
          struct gl_sampler_buffer: public ::gtulu::internal::constant::gl_constant< gl_sampler_buffer > {
              static inline char const* name() { return "sampler_buffer"; }
              static ::std::uint64_t const value = GL_SAMPLER_BUFFER;
          };
          struct gl_signed_normalized: public ::gtulu::internal::constant::gl_constant< gl_signed_normalized > {
              static inline char const* name() { return "signed_normalized"; }
              static ::std::uint64_t const value = GL_SIGNED_NORMALIZED;
          };
          struct gl_texture_binding_buffer: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_buffer > {
              static inline char const* name() { return "texture_binding_buffer"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_BUFFER;
          };
          struct gl_texture_binding_rectangle: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_rectangle > {
              static inline char const* name() { return "texture_binding_rectangle"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_RECTANGLE;
          };
          struct gl_texture_buffer: public ::gtulu::internal::constant::gl_constant< gl_texture_buffer > {
              static inline char const* name() { return "texture_buffer"; }
              static ::std::uint64_t const value = GL_TEXTURE_BUFFER;
          };
          struct gl_texture_buffer_data_store_binding: public ::gtulu::internal::constant::gl_constant< gl_texture_buffer_data_store_binding > {
              static inline char const* name() { return "texture_buffer_data_store_binding"; }
              static ::std::uint64_t const value = GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
          };
          struct gl_texture_buffer_format: public ::gtulu::internal::constant::gl_constant< gl_texture_buffer_format > {
              static inline char const* name() { return "texture_buffer_format"; }
              static ::std::uint64_t const value = GL_TEXTURE_BUFFER_FORMAT;
          };
          struct gl_texture_rectangle: public ::gtulu::internal::constant::gl_constant< gl_texture_rectangle > {
              static inline char const* name() { return "texture_rectangle"; }
              static ::std::uint64_t const value = GL_TEXTURE_RECTANGLE;
          };
          struct gl_unsigned_int_sampler_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_rect > {
              static inline char const* name() { return "unsigned_int_sampler_2d_rect"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_2D_RECT;
          };
          struct gl_unsigned_int_sampler_buffer: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_buffer > {
              static inline char const* name() { return "unsigned_int_sampler_buffer"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_BUFFER;
          };
          struct gl_version_3_1: public ::gtulu::internal::constant::gl_constant< gl_version_3_1 > {
              static inline char const* name() { return "version_3_1"; }
              static ::std::uint64_t const value = GL_VERSION_3_1;
          };
        } // namespace cst
      } // namespace v3_1
      namespace v3_2 {
        namespace cst {
          struct gl_context_compatibility_profile_bit: public ::gtulu::internal::constant::gl_constant< gl_context_compatibility_profile_bit > {
              static inline char const* name() { return "context_compatibility_profile_bit"; }
              static ::std::uint64_t const value = GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;
          };
          struct gl_context_core_profile_bit: public ::gtulu::internal::constant::gl_constant< gl_context_core_profile_bit > {
              static inline char const* name() { return "context_core_profile_bit"; }
              static ::std::uint64_t const value = GL_CONTEXT_CORE_PROFILE_BIT;
          };
          struct gl_context_profile_mask: public ::gtulu::internal::constant::gl_constant< gl_context_profile_mask > {
              static inline char const* name() { return "context_profile_mask"; }
              static ::std::uint64_t const value = GL_CONTEXT_PROFILE_MASK;
          };
          struct gl_framebuffer_attachment_layered: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_layered > {
              static inline char const* name() { return "framebuffer_attachment_layered"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_LAYERED;
          };
          struct gl_framebuffer_incomplete_layer_targets: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_layer_targets > {
              static inline char const* name() { return "framebuffer_incomplete_layer_targets"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;
          };
          struct gl_geometry_input_type: public ::gtulu::internal::constant::gl_constant< gl_geometry_input_type > {
              static inline char const* name() { return "geometry_input_type"; }
              static ::std::uint64_t const value = GL_GEOMETRY_INPUT_TYPE;
          };
          struct gl_geometry_output_type: public ::gtulu::internal::constant::gl_constant< gl_geometry_output_type > {
              static inline char const* name() { return "geometry_output_type"; }
              static ::std::uint64_t const value = GL_GEOMETRY_OUTPUT_TYPE;
          };
          struct gl_geometry_shader: public ::gtulu::internal::constant::gl_constant< gl_geometry_shader > {
              static inline char const* name() { return "geometry_shader"; }
              static ::std::uint64_t const value = GL_GEOMETRY_SHADER;
          };
          struct gl_geometry_vertices_out: public ::gtulu::internal::constant::gl_constant< gl_geometry_vertices_out > {
              static inline char const* name() { return "geometry_vertices_out"; }
              static ::std::uint64_t const value = GL_GEOMETRY_VERTICES_OUT;
          };
          struct gl_lines_adjacency: public ::gtulu::internal::constant::gl_constant< gl_lines_adjacency > {
              static inline char const* name() { return "lines_adjacency"; }
              static ::std::uint64_t const value = GL_LINES_ADJACENCY;
          };
          struct gl_line_strip_adjacency: public ::gtulu::internal::constant::gl_constant< gl_line_strip_adjacency > {
              static inline char const* name() { return "line_strip_adjacency"; }
              static ::std::uint64_t const value = GL_LINE_STRIP_ADJACENCY;
          };
          struct gl_max_fragment_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_input_components > {
              static inline char const* name() { return "max_fragment_input_components"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_INPUT_COMPONENTS;
          };
          struct gl_max_geometry_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_input_components > {
              static inline char const* name() { return "max_geometry_input_components"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_INPUT_COMPONENTS;
          };
          struct gl_max_geometry_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_output_components > {
              static inline char const* name() { return "max_geometry_output_components"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
          };
          struct gl_max_geometry_output_vertices: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_output_vertices > {
              static inline char const* name() { return "max_geometry_output_vertices"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_OUTPUT_VERTICES;
          };
          struct gl_max_geometry_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_texture_image_units > {
              static inline char const* name() { return "max_geometry_texture_image_units"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_geometry_total_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_total_output_components > {
              static inline char const* name() { return "max_geometry_total_output_components"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
          };
          struct gl_max_geometry_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_uniform_components > {
              static inline char const* name() { return "max_geometry_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
          };
          struct gl_max_vertex_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_output_components > {
              static inline char const* name() { return "max_vertex_output_components"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_OUTPUT_COMPONENTS;
          };
          struct gl_program_point_size: public ::gtulu::internal::constant::gl_constant< gl_program_point_size > {
              static inline char const* name() { return "program_point_size"; }
              static ::std::uint64_t const value = GL_PROGRAM_POINT_SIZE;
          };
          struct gl_triangles_adjacency: public ::gtulu::internal::constant::gl_constant< gl_triangles_adjacency > {
              static inline char const* name() { return "triangles_adjacency"; }
              static ::std::uint64_t const value = GL_TRIANGLES_ADJACENCY;
          };
          struct gl_triangle_strip_adjacency: public ::gtulu::internal::constant::gl_constant< gl_triangle_strip_adjacency > {
              static inline char const* name() { return "triangle_strip_adjacency"; }
              static ::std::uint64_t const value = GL_TRIANGLE_STRIP_ADJACENCY;
          };
          struct gl_version_3_2: public ::gtulu::internal::constant::gl_constant< gl_version_3_2 > {
              static inline char const* name() { return "version_3_2"; }
              static ::std::uint64_t const value = GL_VERSION_3_2;
          };
        } // namespace cst
      } // namespace v3_2
      namespace v3_3 {
        namespace cst {
          struct gl_version_3_3: public ::gtulu::internal::constant::gl_constant< gl_version_3_3 > {
              static inline char const* name() { return "version_3_3"; }
              static ::std::uint64_t const value = GL_VERSION_3_3;
          };
          struct gl_vertex_attrib_array_divisor: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_divisor > {
              static inline char const* name() { return "vertex_attrib_array_divisor"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_DIVISOR;
          };
        } // namespace cst
      } // namespace v3_3
      namespace v4_0 {
        namespace cst {
          struct gl_int_sampler_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_cube_map_array > {
              static inline char const* name() { return "int_sampler_cube_map_array"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_CUBE_MAP_ARRAY;
          };
          struct gl_max_program_texture_gather_offset: public ::gtulu::internal::constant::gl_constant< gl_max_program_texture_gather_offset > {
              static inline char const* name() { return "max_program_texture_gather_offset"; }
              static ::std::uint64_t const value = GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
          };
          struct gl_min_program_texture_gather_offset: public ::gtulu::internal::constant::gl_constant< gl_min_program_texture_gather_offset > {
              static inline char const* name() { return "min_program_texture_gather_offset"; }
              static ::std::uint64_t const value = GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
          };
          struct gl_min_sample_shading_value: public ::gtulu::internal::constant::gl_constant< gl_min_sample_shading_value > {
              static inline char const* name() { return "min_sample_shading_value"; }
              static ::std::uint64_t const value = GL_MIN_SAMPLE_SHADING_VALUE;
          };
          struct gl_proxy_texture_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_cube_map_array > {
              static inline char const* name() { return "proxy_texture_cube_map_array"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_CUBE_MAP_ARRAY;
          };
          struct gl_sampler_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array > {
              static inline char const* name() { return "sampler_cube_map_array"; }
              static ::std::uint64_t const value = GL_SAMPLER_CUBE_MAP_ARRAY;
          };
          struct gl_sampler_cube_map_array_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array_shadow > {
              static inline char const* name() { return "sampler_cube_map_array_shadow"; }
              static ::std::uint64_t const value = GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
          };
          struct gl_sample_shading: public ::gtulu::internal::constant::gl_constant< gl_sample_shading > {
              static inline char const* name() { return "sample_shading"; }
              static ::std::uint64_t const value = GL_SAMPLE_SHADING;
          };
          struct gl_texture_binding_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_cube_map_array > {
              static inline char const* name() { return "texture_binding_cube_map_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
          };
          struct gl_texture_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_array > {
              static inline char const* name() { return "texture_cube_map_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_ARRAY;
          };
          struct gl_unsigned_int_sampler_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_cube_map_array > {
              static inline char const* name() { return "unsigned_int_sampler_cube_map_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
          };
          struct gl_version_4_0: public ::gtulu::internal::constant::gl_constant< gl_version_4_0 > {
              static inline char const* name() { return "version_4_0"; }
              static ::std::uint64_t const value = GL_VERSION_4_0;
          };
        } // namespace cst
      } // namespace v4_0
      namespace v4_1 {
        namespace cst {
          struct gl_version_4_1: public ::gtulu::internal::constant::gl_constant< gl_version_4_1 > {
              static inline char const* name() { return "version_4_1"; }
              static ::std::uint64_t const value = GL_VERSION_4_1;
          };
        } // namespace cst
      } // namespace v4_1
      namespace v4_2 {
        namespace cst {
          struct gl_version_4_2: public ::gtulu::internal::constant::gl_constant< gl_version_4_2 > {
              static inline char const* name() { return "version_4_2"; }
              static ::std::uint64_t const value = GL_VERSION_4_2;
          };
        } // namespace cst
      } // namespace v4_2
      } // namespace gl
      namespace arb {
      namespace es2_compatibility {
        namespace cst {
          struct gl_arb_es2_compatibility: public ::gtulu::internal::constant::gl_constant< gl_arb_es2_compatibility > {
              static inline char const* name() { return "arb_es2_compatibility"; }
              static ::std::uint64_t const value = GL_ARB_ES2_compatibility;
          };
          struct gl_fixed: public ::gtulu::internal::constant::gl_constant< gl_fixed > {
              static inline char const* name() { return "fixed"; }
              static ::std::uint64_t const value = GL_FIXED;
          };
          struct gl_high_float: public ::gtulu::internal::constant::gl_constant< gl_high_float > {
              static inline char const* name() { return "high_float"; }
              static ::std::uint64_t const value = GL_HIGH_FLOAT;
          };
          struct gl_high_int: public ::gtulu::internal::constant::gl_constant< gl_high_int > {
              static inline char const* name() { return "high_int"; }
              static ::std::uint64_t const value = GL_HIGH_INT;
          };
          struct gl_implementation_color_read_format: public ::gtulu::internal::constant::gl_constant< gl_implementation_color_read_format > {
              static inline char const* name() { return "implementation_color_read_format"; }
              static ::std::uint64_t const value = GL_IMPLEMENTATION_COLOR_READ_FORMAT;
          };
          struct gl_implementation_color_read_type: public ::gtulu::internal::constant::gl_constant< gl_implementation_color_read_type > {
              static inline char const* name() { return "implementation_color_read_type"; }
              static ::std::uint64_t const value = GL_IMPLEMENTATION_COLOR_READ_TYPE;
          };
          struct gl_low_float: public ::gtulu::internal::constant::gl_constant< gl_low_float > {
              static inline char const* name() { return "low_float"; }
              static ::std::uint64_t const value = GL_LOW_FLOAT;
          };
          struct gl_low_int: public ::gtulu::internal::constant::gl_constant< gl_low_int > {
              static inline char const* name() { return "low_int"; }
              static ::std::uint64_t const value = GL_LOW_INT;
          };
          struct gl_max_fragment_uniform_vectors: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_uniform_vectors > {
              static inline char const* name() { return "max_fragment_uniform_vectors"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_UNIFORM_VECTORS;
          };
          struct gl_max_varying_vectors: public ::gtulu::internal::constant::gl_constant< gl_max_varying_vectors > {
              static inline char const* name() { return "max_varying_vectors"; }
              static ::std::uint64_t const value = GL_MAX_VARYING_VECTORS;
          };
          struct gl_max_vertex_uniform_vectors: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_uniform_vectors > {
              static inline char const* name() { return "max_vertex_uniform_vectors"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_UNIFORM_VECTORS;
          };
          struct gl_medium_float: public ::gtulu::internal::constant::gl_constant< gl_medium_float > {
              static inline char const* name() { return "medium_float"; }
              static ::std::uint64_t const value = GL_MEDIUM_FLOAT;
          };
          struct gl_medium_int: public ::gtulu::internal::constant::gl_constant< gl_medium_int > {
              static inline char const* name() { return "medium_int"; }
              static ::std::uint64_t const value = GL_MEDIUM_INT;
          };
          struct gl_num_shader_binary_formats: public ::gtulu::internal::constant::gl_constant< gl_num_shader_binary_formats > {
              static inline char const* name() { return "num_shader_binary_formats"; }
              static ::std::uint64_t const value = GL_NUM_SHADER_BINARY_FORMATS;
          };
          struct gl_shader_compiler: public ::gtulu::internal::constant::gl_constant< gl_shader_compiler > {
              static inline char const* name() { return "shader_compiler"; }
              static ::std::uint64_t const value = GL_SHADER_COMPILER;
          };
        } // namespace cst
      } // namespace es2_compatibility
      namespace base_instance {
        namespace cst {
          struct gl_arb_base_instance: public ::gtulu::internal::constant::gl_constant< gl_arb_base_instance > {
              static inline char const* name() { return "arb_base_instance"; }
              static ::std::uint64_t const value = GL_ARB_base_instance;
          };
        } // namespace cst
      } // namespace base_instance
      namespace blend_func_extended {
        namespace cst {
          struct gl_arb_blend_func_extended: public ::gtulu::internal::constant::gl_constant< gl_arb_blend_func_extended > {
              static inline char const* name() { return "arb_blend_func_extended"; }
              static ::std::uint64_t const value = GL_ARB_blend_func_extended;
          };
          struct gl_max_dual_source_draw_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_dual_source_draw_buffers > {
              static inline char const* name() { return "max_dual_source_draw_buffers"; }
              static ::std::uint64_t const value = GL_MAX_DUAL_SOURCE_DRAW_BUFFERS;
          };
          struct gl_one_minus_src1_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src1_alpha > {
              static inline char const* name() { return "one_minus_src1_alpha"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_SRC1_ALPHA;
          };
          struct gl_one_minus_src1_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src1_color > {
              static inline char const* name() { return "one_minus_src1_color"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_SRC1_COLOR;
          };
          struct gl_src1_color: public ::gtulu::internal::constant::gl_constant< gl_src1_color > {
              static inline char const* name() { return "src1_color"; }
              static ::std::uint64_t const value = GL_SRC1_COLOR;
          };
        } // namespace cst
      } // namespace blend_func_extended
      namespace cl_event {
        namespace cst {
          struct gl_arb_cl_event: public ::gtulu::internal::constant::gl_constant< gl_arb_cl_event > {
              static inline char const* name() { return "arb_cl_event"; }
              static ::std::uint64_t const value = GL_ARB_cl_event;
          };
          struct gl_sync_cl_event_arb: public ::gtulu::internal::constant::gl_constant< gl_sync_cl_event_arb > {
              static inline char const* name() { return "sync_cl_event_arb"; }
              static ::std::uint64_t const value = GL_SYNC_CL_EVENT_ARB;
          };
          struct gl_sync_cl_event_complete_arb: public ::gtulu::internal::constant::gl_constant< gl_sync_cl_event_complete_arb > {
              static inline char const* name() { return "sync_cl_event_complete_arb"; }
              static ::std::uint64_t const value = GL_SYNC_CL_EVENT_COMPLETE_ARB;
          };
        } // namespace cst
      } // namespace cl_event
      namespace compressed_texture_pixel_storage {
        namespace cst {
          struct gl_arb_compressed_texture_pixel_storage: public ::gtulu::internal::constant::gl_constant< gl_arb_compressed_texture_pixel_storage > {
              static inline char const* name() { return "arb_compressed_texture_pixel_storage"; }
              static ::std::uint64_t const value = GL_ARB_compressed_texture_pixel_storage;
          };
          struct gl_pack_compressed_block_depth: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_depth > {
              static inline char const* name() { return "pack_compressed_block_depth"; }
              static ::std::uint64_t const value = GL_PACK_COMPRESSED_BLOCK_DEPTH;
          };
          struct gl_pack_compressed_block_height: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_height > {
              static inline char const* name() { return "pack_compressed_block_height"; }
              static ::std::uint64_t const value = GL_PACK_COMPRESSED_BLOCK_HEIGHT;
          };
          struct gl_pack_compressed_block_size: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_size > {
              static inline char const* name() { return "pack_compressed_block_size"; }
              static ::std::uint64_t const value = GL_PACK_COMPRESSED_BLOCK_SIZE;
          };
          struct gl_pack_compressed_block_width: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_width > {
              static inline char const* name() { return "pack_compressed_block_width"; }
              static ::std::uint64_t const value = GL_PACK_COMPRESSED_BLOCK_WIDTH;
          };
          struct gl_unpack_compressed_block_depth: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_depth > {
              static inline char const* name() { return "unpack_compressed_block_depth"; }
              static ::std::uint64_t const value = GL_UNPACK_COMPRESSED_BLOCK_DEPTH;
          };
          struct gl_unpack_compressed_block_height: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_height > {
              static inline char const* name() { return "unpack_compressed_block_height"; }
              static ::std::uint64_t const value = GL_UNPACK_COMPRESSED_BLOCK_HEIGHT;
          };
          struct gl_unpack_compressed_block_size: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_size > {
              static inline char const* name() { return "unpack_compressed_block_size"; }
              static ::std::uint64_t const value = GL_UNPACK_COMPRESSED_BLOCK_SIZE;
          };
          struct gl_unpack_compressed_block_width: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_width > {
              static inline char const* name() { return "unpack_compressed_block_width"; }
              static ::std::uint64_t const value = GL_UNPACK_COMPRESSED_BLOCK_WIDTH;
          };
        } // namespace cst
      } // namespace compressed_texture_pixel_storage
      namespace conservative_depth {
        namespace cst {
          struct gl_arb_conservative_depth: public ::gtulu::internal::constant::gl_constant< gl_arb_conservative_depth > {
              static inline char const* name() { return "arb_conservative_depth"; }
              static ::std::uint64_t const value = GL_ARB_conservative_depth;
          };
        } // namespace cst
      } // namespace conservative_depth
      namespace copy_buffer {
        namespace cst {
          struct gl_arb_copy_buffer: public ::gtulu::internal::constant::gl_constant< gl_arb_copy_buffer > {
              static inline char const* name() { return "arb_copy_buffer"; }
              static ::std::uint64_t const value = GL_ARB_copy_buffer;
          };
          struct gl_copy_read_buffer: public ::gtulu::internal::constant::gl_constant< gl_copy_read_buffer > {
              static inline char const* name() { return "copy_read_buffer"; }
              static ::std::uint64_t const value = GL_COPY_READ_BUFFER;
          };
          struct gl_copy_write_buffer: public ::gtulu::internal::constant::gl_constant< gl_copy_write_buffer > {
              static inline char const* name() { return "copy_write_buffer"; }
              static ::std::uint64_t const value = GL_COPY_WRITE_BUFFER;
          };
        } // namespace cst
      } // namespace copy_buffer
      namespace debug_output {
        namespace cst {
          struct gl_arb_debug_output: public ::gtulu::internal::constant::gl_constant< gl_arb_debug_output > {
              static inline char const* name() { return "arb_debug_output"; }
              static ::std::uint64_t const value = GL_ARB_debug_output;
          };
          struct gl_debug_callback_function_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_callback_function_arb > {
              static inline char const* name() { return "debug_callback_function_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_CALLBACK_FUNCTION_ARB;
          };
          struct gl_debug_callback_user_param_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_callback_user_param_arb > {
              static inline char const* name() { return "debug_callback_user_param_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_CALLBACK_USER_PARAM_ARB;
          };
          struct gl_debug_logged_messages_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_logged_messages_arb > {
              static inline char const* name() { return "debug_logged_messages_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_LOGGED_MESSAGES_ARB;
          };
          struct gl_debug_next_logged_message_length_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_next_logged_message_length_arb > {
              static inline char const* name() { return "debug_next_logged_message_length_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB;
          };
          struct gl_debug_output_synchronous_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_output_synchronous_arb > {
              static inline char const* name() { return "debug_output_synchronous_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB;
          };
          struct gl_debug_severity_high_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_severity_high_arb > {
              static inline char const* name() { return "debug_severity_high_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SEVERITY_HIGH_ARB;
          };
          struct gl_debug_severity_low_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_severity_low_arb > {
              static inline char const* name() { return "debug_severity_low_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SEVERITY_LOW_ARB;
          };
          struct gl_debug_severity_medium_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_severity_medium_arb > {
              static inline char const* name() { return "debug_severity_medium_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SEVERITY_MEDIUM_ARB;
          };
          struct gl_debug_source_api_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_api_arb > {
              static inline char const* name() { return "debug_source_api_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SOURCE_API_ARB;
          };
          struct gl_debug_source_application_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_application_arb > {
              static inline char const* name() { return "debug_source_application_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SOURCE_APPLICATION_ARB;
          };
          struct gl_debug_source_other_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_other_arb > {
              static inline char const* name() { return "debug_source_other_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SOURCE_OTHER_ARB;
          };
          struct gl_debug_source_shader_compiler_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_shader_compiler_arb > {
              static inline char const* name() { return "debug_source_shader_compiler_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SOURCE_SHADER_COMPILER_ARB;
          };
          struct gl_debug_source_third_party_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_third_party_arb > {
              static inline char const* name() { return "debug_source_third_party_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SOURCE_THIRD_PARTY_ARB;
          };
          struct gl_debug_source_window_system_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_window_system_arb > {
              static inline char const* name() { return "debug_source_window_system_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB;
          };
          struct gl_debug_type_deprecated_behavior_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_deprecated_behavior_arb > {
              static inline char const* name() { return "debug_type_deprecated_behavior_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB;
          };
          struct gl_debug_type_error_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_error_arb > {
              static inline char const* name() { return "debug_type_error_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_TYPE_ERROR_ARB;
          };
          struct gl_debug_type_other_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_other_arb > {
              static inline char const* name() { return "debug_type_other_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_TYPE_OTHER_ARB;
          };
          struct gl_debug_type_performance_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_performance_arb > {
              static inline char const* name() { return "debug_type_performance_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_TYPE_PERFORMANCE_ARB;
          };
          struct gl_debug_type_portability_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_portability_arb > {
              static inline char const* name() { return "debug_type_portability_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_TYPE_PORTABILITY_ARB;
          };
          struct gl_debug_type_undefined_behavior_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_undefined_behavior_arb > {
              static inline char const* name() { return "debug_type_undefined_behavior_arb"; }
              static ::std::uint64_t const value = GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB;
          };
          struct gl_max_debug_logged_messages_arb: public ::gtulu::internal::constant::gl_constant< gl_max_debug_logged_messages_arb > {
              static inline char const* name() { return "max_debug_logged_messages_arb"; }
              static ::std::uint64_t const value = GL_MAX_DEBUG_LOGGED_MESSAGES_ARB;
          };
          struct gl_max_debug_message_length_arb: public ::gtulu::internal::constant::gl_constant< gl_max_debug_message_length_arb > {
              static inline char const* name() { return "max_debug_message_length_arb"; }
              static ::std::uint64_t const value = GL_MAX_DEBUG_MESSAGE_LENGTH_ARB;
          };
        } // namespace cst
      } // namespace debug_output
      namespace depth_buffer_float {
        namespace cst {
          struct gl_arb_depth_buffer_float: public ::gtulu::internal::constant::gl_constant< gl_arb_depth_buffer_float > {
              static inline char const* name() { return "arb_depth_buffer_float"; }
              static ::std::uint64_t const value = GL_ARB_depth_buffer_float;
          };
          struct gl_depth32f_stencil8: public ::gtulu::internal::constant::gl_constant< gl_depth32f_stencil8 > {
              static inline char const* name() { return "depth32f_stencil8"; }
              static ::std::uint64_t const value = GL_DEPTH32F_STENCIL8;
          };
          struct gl_depth_component32f: public ::gtulu::internal::constant::gl_constant< gl_depth_component32f > {
              static inline char const* name() { return "depth_component32f"; }
              static ::std::uint64_t const value = GL_DEPTH_COMPONENT32F;
          };
          struct gl_float_32_unsigned_int_24_8_rev: public ::gtulu::internal::constant::gl_constant< gl_float_32_unsigned_int_24_8_rev > {
              static inline char const* name() { return "float_32_unsigned_int_24_8_rev"; }
              static ::std::uint64_t const value = GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
          };
        } // namespace cst
      } // namespace depth_buffer_float
      namespace depth_clamp {
        namespace cst {
          struct gl_arb_depth_clamp: public ::gtulu::internal::constant::gl_constant< gl_arb_depth_clamp > {
              static inline char const* name() { return "arb_depth_clamp"; }
              static ::std::uint64_t const value = GL_ARB_depth_clamp;
          };
          struct gl_depth_clamp: public ::gtulu::internal::constant::gl_constant< gl_depth_clamp > {
              static inline char const* name() { return "depth_clamp"; }
              static ::std::uint64_t const value = GL_DEPTH_CLAMP;
          };
        } // namespace cst
      } // namespace depth_clamp
      namespace draw_buffers_blend {
        namespace cst {
          struct gl_arb_draw_buffers_blend: public ::gtulu::internal::constant::gl_constant< gl_arb_draw_buffers_blend > {
              static inline char const* name() { return "arb_draw_buffers_blend"; }
              static ::std::uint64_t const value = GL_ARB_draw_buffers_blend;
          };
        } // namespace cst
      } // namespace draw_buffers_blend
      namespace draw_elements_base_vertex {
        namespace cst {
          struct gl_arb_draw_elements_base_vertex: public ::gtulu::internal::constant::gl_constant< gl_arb_draw_elements_base_vertex > {
              static inline char const* name() { return "arb_draw_elements_base_vertex"; }
              static ::std::uint64_t const value = GL_ARB_draw_elements_base_vertex;
          };
        } // namespace cst
      } // namespace draw_elements_base_vertex
      namespace draw_indirect {
        namespace cst {
          struct gl_arb_draw_indirect: public ::gtulu::internal::constant::gl_constant< gl_arb_draw_indirect > {
              static inline char const* name() { return "arb_draw_indirect"; }
              static ::std::uint64_t const value = GL_ARB_draw_indirect;
          };
          struct gl_draw_indirect_buffer: public ::gtulu::internal::constant::gl_constant< gl_draw_indirect_buffer > {
              static inline char const* name() { return "draw_indirect_buffer"; }
              static ::std::uint64_t const value = GL_DRAW_INDIRECT_BUFFER;
          };
          struct gl_draw_indirect_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_draw_indirect_buffer_binding > {
              static inline char const* name() { return "draw_indirect_buffer_binding"; }
              static ::std::uint64_t const value = GL_DRAW_INDIRECT_BUFFER_BINDING;
          };
        } // namespace cst
      } // namespace draw_indirect
      namespace explicit_attrib_location {
        namespace cst {
          struct gl_arb_explicit_attrib_location: public ::gtulu::internal::constant::gl_constant< gl_arb_explicit_attrib_location > {
              static inline char const* name() { return "arb_explicit_attrib_location"; }
              static ::std::uint64_t const value = GL_ARB_explicit_attrib_location;
          };
        } // namespace cst
      } // namespace explicit_attrib_location
      namespace fragment_coord_conventions {
        namespace cst {
          struct gl_arb_fragment_coord_conventions: public ::gtulu::internal::constant::gl_constant< gl_arb_fragment_coord_conventions > {
              static inline char const* name() { return "arb_fragment_coord_conventions"; }
              static ::std::uint64_t const value = GL_ARB_fragment_coord_conventions;
          };
        } // namespace cst
      } // namespace fragment_coord_conventions
      namespace framebuffer_object {
        namespace cst {
          struct gl_arb_framebuffer_object: public ::gtulu::internal::constant::gl_constant< gl_arb_framebuffer_object > {
              static inline char const* name() { return "arb_framebuffer_object"; }
              static ::std::uint64_t const value = GL_ARB_framebuffer_object;
          };
          struct gl_color_attachment0: public ::gtulu::internal::constant::gl_constant< gl_color_attachment0 > {
              static inline char const* name() { return "color_attachment0"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT0;
          };
          struct gl_color_attachment1: public ::gtulu::internal::constant::gl_constant< gl_color_attachment1 > {
              static inline char const* name() { return "color_attachment1"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT1;
          };
          struct gl_color_attachment10: public ::gtulu::internal::constant::gl_constant< gl_color_attachment10 > {
              static inline char const* name() { return "color_attachment10"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT10;
          };
          struct gl_color_attachment11: public ::gtulu::internal::constant::gl_constant< gl_color_attachment11 > {
              static inline char const* name() { return "color_attachment11"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT11;
          };
          struct gl_color_attachment12: public ::gtulu::internal::constant::gl_constant< gl_color_attachment12 > {
              static inline char const* name() { return "color_attachment12"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT12;
          };
          struct gl_color_attachment13: public ::gtulu::internal::constant::gl_constant< gl_color_attachment13 > {
              static inline char const* name() { return "color_attachment13"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT13;
          };
          struct gl_color_attachment14: public ::gtulu::internal::constant::gl_constant< gl_color_attachment14 > {
              static inline char const* name() { return "color_attachment14"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT14;
          };
          struct gl_color_attachment15: public ::gtulu::internal::constant::gl_constant< gl_color_attachment15 > {
              static inline char const* name() { return "color_attachment15"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT15;
          };
          struct gl_color_attachment2: public ::gtulu::internal::constant::gl_constant< gl_color_attachment2 > {
              static inline char const* name() { return "color_attachment2"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT2;
          };
          struct gl_color_attachment3: public ::gtulu::internal::constant::gl_constant< gl_color_attachment3 > {
              static inline char const* name() { return "color_attachment3"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT3;
          };
          struct gl_color_attachment4: public ::gtulu::internal::constant::gl_constant< gl_color_attachment4 > {
              static inline char const* name() { return "color_attachment4"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT4;
          };
          struct gl_color_attachment5: public ::gtulu::internal::constant::gl_constant< gl_color_attachment5 > {
              static inline char const* name() { return "color_attachment5"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT5;
          };
          struct gl_color_attachment6: public ::gtulu::internal::constant::gl_constant< gl_color_attachment6 > {
              static inline char const* name() { return "color_attachment6"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT6;
          };
          struct gl_color_attachment7: public ::gtulu::internal::constant::gl_constant< gl_color_attachment7 > {
              static inline char const* name() { return "color_attachment7"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT7;
          };
          struct gl_color_attachment8: public ::gtulu::internal::constant::gl_constant< gl_color_attachment8 > {
              static inline char const* name() { return "color_attachment8"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT8;
          };
          struct gl_color_attachment9: public ::gtulu::internal::constant::gl_constant< gl_color_attachment9 > {
              static inline char const* name() { return "color_attachment9"; }
              static ::std::uint64_t const value = GL_COLOR_ATTACHMENT9;
          };
          struct gl_depth24_stencil8: public ::gtulu::internal::constant::gl_constant< gl_depth24_stencil8 > {
              static inline char const* name() { return "depth24_stencil8"; }
              static ::std::uint64_t const value = GL_DEPTH24_STENCIL8;
          };
          struct gl_depth_attachment: public ::gtulu::internal::constant::gl_constant< gl_depth_attachment > {
              static inline char const* name() { return "depth_attachment"; }
              static ::std::uint64_t const value = GL_DEPTH_ATTACHMENT;
          };
          struct gl_depth_stencil: public ::gtulu::internal::constant::gl_constant< gl_depth_stencil > {
              static inline char const* name() { return "depth_stencil"; }
              static ::std::uint64_t const value = GL_DEPTH_STENCIL;
          };
          struct gl_depth_stencil_attachment: public ::gtulu::internal::constant::gl_constant< gl_depth_stencil_attachment > {
              static inline char const* name() { return "depth_stencil_attachment"; }
              static ::std::uint64_t const value = GL_DEPTH_STENCIL_ATTACHMENT;
          };
          struct gl_draw_framebuffer: public ::gtulu::internal::constant::gl_constant< gl_draw_framebuffer > {
              static inline char const* name() { return "draw_framebuffer"; }
              static ::std::uint64_t const value = GL_DRAW_FRAMEBUFFER;
          };
          struct gl_draw_framebuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_draw_framebuffer_binding > {
              static inline char const* name() { return "draw_framebuffer_binding"; }
              static ::std::uint64_t const value = GL_DRAW_FRAMEBUFFER_BINDING;
          };
          struct gl_framebuffer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer > {
              static inline char const* name() { return "framebuffer"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER;
          };
          struct gl_framebuffer_attachment_alpha_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_alpha_size > {
              static inline char const* name() { return "framebuffer_attachment_alpha_size"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
          };
          struct gl_framebuffer_attachment_blue_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_blue_size > {
              static inline char const* name() { return "framebuffer_attachment_blue_size"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
          };
          struct gl_framebuffer_attachment_color_encoding: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_color_encoding > {
              static inline char const* name() { return "framebuffer_attachment_color_encoding"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
          };
          struct gl_framebuffer_attachment_component_type: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_component_type > {
              static inline char const* name() { return "framebuffer_attachment_component_type"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
          };
          struct gl_framebuffer_attachment_depth_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_depth_size > {
              static inline char const* name() { return "framebuffer_attachment_depth_size"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
          };
          struct gl_framebuffer_attachment_green_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_green_size > {
              static inline char const* name() { return "framebuffer_attachment_green_size"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
          };
          struct gl_framebuffer_attachment_object_name: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_object_name > {
              static inline char const* name() { return "framebuffer_attachment_object_name"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
          };
          struct gl_framebuffer_attachment_object_type: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_object_type > {
              static inline char const* name() { return "framebuffer_attachment_object_type"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
          };
          struct gl_framebuffer_attachment_red_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_red_size > {
              static inline char const* name() { return "framebuffer_attachment_red_size"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
          };
          struct gl_framebuffer_attachment_stencil_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_stencil_size > {
              static inline char const* name() { return "framebuffer_attachment_stencil_size"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
          };
          struct gl_framebuffer_attachment_texture_cube_map_face: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_texture_cube_map_face > {
              static inline char const* name() { return "framebuffer_attachment_texture_cube_map_face"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
          };
          struct gl_framebuffer_attachment_texture_layer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_texture_layer > {
              static inline char const* name() { return "framebuffer_attachment_texture_layer"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
          };
          struct gl_framebuffer_attachment_texture_level: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_texture_level > {
              static inline char const* name() { return "framebuffer_attachment_texture_level"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
          };
          struct gl_framebuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_binding > {
              static inline char const* name() { return "framebuffer_binding"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_BINDING;
          };
          struct gl_framebuffer_complete: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_complete > {
              static inline char const* name() { return "framebuffer_complete"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_COMPLETE;
          };
          struct gl_framebuffer_default: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_default > {
              static inline char const* name() { return "framebuffer_default"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_DEFAULT;
          };
          struct gl_framebuffer_incomplete_attachment: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_attachment > {
              static inline char const* name() { return "framebuffer_incomplete_attachment"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
          };
          struct gl_framebuffer_incomplete_draw_buffer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_draw_buffer > {
              static inline char const* name() { return "framebuffer_incomplete_draw_buffer"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER;
          };
          struct gl_framebuffer_incomplete_missing_attachment: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_missing_attachment > {
              static inline char const* name() { return "framebuffer_incomplete_missing_attachment"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
          };
          struct gl_framebuffer_incomplete_multisample: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_multisample > {
              static inline char const* name() { return "framebuffer_incomplete_multisample"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
          };
          struct gl_framebuffer_incomplete_read_buffer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_read_buffer > {
              static inline char const* name() { return "framebuffer_incomplete_read_buffer"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER;
          };
          struct gl_framebuffer_undefined: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_undefined > {
              static inline char const* name() { return "framebuffer_undefined"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_UNDEFINED;
          };
          struct gl_framebuffer_unsupported: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_unsupported > {
              static inline char const* name() { return "framebuffer_unsupported"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_UNSUPPORTED;
          };
          struct gl_invalid_framebuffer_operation: public ::gtulu::internal::constant::gl_constant< gl_invalid_framebuffer_operation > {
              static inline char const* name() { return "invalid_framebuffer_operation"; }
              static ::std::uint64_t const value = GL_INVALID_FRAMEBUFFER_OPERATION;
          };
          struct gl_max_color_attachments: public ::gtulu::internal::constant::gl_constant< gl_max_color_attachments > {
              static inline char const* name() { return "max_color_attachments"; }
              static ::std::uint64_t const value = GL_MAX_COLOR_ATTACHMENTS;
          };
          struct gl_max_renderbuffer_size: public ::gtulu::internal::constant::gl_constant< gl_max_renderbuffer_size > {
              static inline char const* name() { return "max_renderbuffer_size"; }
              static ::std::uint64_t const value = GL_MAX_RENDERBUFFER_SIZE;
          };
          struct gl_max_samples: public ::gtulu::internal::constant::gl_constant< gl_max_samples > {
              static inline char const* name() { return "max_samples"; }
              static ::std::uint64_t const value = GL_MAX_SAMPLES;
          };
          struct gl_read_framebuffer: public ::gtulu::internal::constant::gl_constant< gl_read_framebuffer > {
              static inline char const* name() { return "read_framebuffer"; }
              static ::std::uint64_t const value = GL_READ_FRAMEBUFFER;
          };
          struct gl_read_framebuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_read_framebuffer_binding > {
              static inline char const* name() { return "read_framebuffer_binding"; }
              static ::std::uint64_t const value = GL_READ_FRAMEBUFFER_BINDING;
          };
          struct gl_renderbuffer: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer > {
              static inline char const* name() { return "renderbuffer"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER;
          };
          struct gl_renderbuffer_alpha_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_alpha_size > {
              static inline char const* name() { return "renderbuffer_alpha_size"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_ALPHA_SIZE;
          };
          struct gl_renderbuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_binding > {
              static inline char const* name() { return "renderbuffer_binding"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_BINDING;
          };
          struct gl_renderbuffer_blue_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_blue_size > {
              static inline char const* name() { return "renderbuffer_blue_size"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_BLUE_SIZE;
          };
          struct gl_renderbuffer_depth_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_depth_size > {
              static inline char const* name() { return "renderbuffer_depth_size"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_DEPTH_SIZE;
          };
          struct gl_renderbuffer_green_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_green_size > {
              static inline char const* name() { return "renderbuffer_green_size"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_GREEN_SIZE;
          };
          struct gl_renderbuffer_height: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_height > {
              static inline char const* name() { return "renderbuffer_height"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_HEIGHT;
          };
          struct gl_renderbuffer_internal_format: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_internal_format > {
              static inline char const* name() { return "renderbuffer_internal_format"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_INTERNAL_FORMAT;
          };
          struct gl_renderbuffer_red_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_red_size > {
              static inline char const* name() { return "renderbuffer_red_size"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_RED_SIZE;
          };
          struct gl_renderbuffer_samples: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_samples > {
              static inline char const* name() { return "renderbuffer_samples"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_SAMPLES;
          };
          struct gl_renderbuffer_stencil_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_stencil_size > {
              static inline char const* name() { return "renderbuffer_stencil_size"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_STENCIL_SIZE;
          };
          struct gl_renderbuffer_width: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_width > {
              static inline char const* name() { return "renderbuffer_width"; }
              static ::std::uint64_t const value = GL_RENDERBUFFER_WIDTH;
          };
          struct gl_stencil_attachment: public ::gtulu::internal::constant::gl_constant< gl_stencil_attachment > {
              static inline char const* name() { return "stencil_attachment"; }
              static ::std::uint64_t const value = GL_STENCIL_ATTACHMENT;
          };
          struct gl_stencil_index1: public ::gtulu::internal::constant::gl_constant< gl_stencil_index1 > {
              static inline char const* name() { return "stencil_index1"; }
              static ::std::uint64_t const value = GL_STENCIL_INDEX1;
          };
          struct gl_stencil_index16: public ::gtulu::internal::constant::gl_constant< gl_stencil_index16 > {
              static inline char const* name() { return "stencil_index16"; }
              static ::std::uint64_t const value = GL_STENCIL_INDEX16;
          };
          struct gl_stencil_index4: public ::gtulu::internal::constant::gl_constant< gl_stencil_index4 > {
              static inline char const* name() { return "stencil_index4"; }
              static ::std::uint64_t const value = GL_STENCIL_INDEX4;
          };
          struct gl_stencil_index8: public ::gtulu::internal::constant::gl_constant< gl_stencil_index8 > {
              static inline char const* name() { return "stencil_index8"; }
              static ::std::uint64_t const value = GL_STENCIL_INDEX8;
          };
          struct gl_texture_alpha_type: public ::gtulu::internal::constant::gl_constant< gl_texture_alpha_type > {
              static inline char const* name() { return "texture_alpha_type"; }
              static ::std::uint64_t const value = GL_TEXTURE_ALPHA_TYPE;
          };
          struct gl_texture_blue_type: public ::gtulu::internal::constant::gl_constant< gl_texture_blue_type > {
              static inline char const* name() { return "texture_blue_type"; }
              static ::std::uint64_t const value = GL_TEXTURE_BLUE_TYPE;
          };
          struct gl_texture_depth_type: public ::gtulu::internal::constant::gl_constant< gl_texture_depth_type > {
              static inline char const* name() { return "texture_depth_type"; }
              static ::std::uint64_t const value = GL_TEXTURE_DEPTH_TYPE;
          };
          struct gl_texture_green_type: public ::gtulu::internal::constant::gl_constant< gl_texture_green_type > {
              static inline char const* name() { return "texture_green_type"; }
              static ::std::uint64_t const value = GL_TEXTURE_GREEN_TYPE;
          };
          struct gl_texture_red_type: public ::gtulu::internal::constant::gl_constant< gl_texture_red_type > {
              static inline char const* name() { return "texture_red_type"; }
              static ::std::uint64_t const value = GL_TEXTURE_RED_TYPE;
          };
          struct gl_texture_stencil_size: public ::gtulu::internal::constant::gl_constant< gl_texture_stencil_size > {
              static inline char const* name() { return "texture_stencil_size"; }
              static ::std::uint64_t const value = GL_TEXTURE_STENCIL_SIZE;
          };
          struct gl_unsigned_int_24_8: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_24_8 > {
              static inline char const* name() { return "unsigned_int_24_8"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_24_8;
          };
          struct gl_unsigned_normalized: public ::gtulu::internal::constant::gl_constant< gl_unsigned_normalized > {
              static inline char const* name() { return "unsigned_normalized"; }
              static ::std::uint64_t const value = GL_UNSIGNED_NORMALIZED;
          };
        } // namespace cst
      } // namespace framebuffer_object
      namespace framebuffer_srgb {
        namespace cst {
          struct gl_arb_framebuffer_srgb: public ::gtulu::internal::constant::gl_constant< gl_arb_framebuffer_srgb > {
              static inline char const* name() { return "arb_framebuffer_srgb"; }
              static ::std::uint64_t const value = GL_ARB_framebuffer_sRGB;
          };
          struct gl_framebuffer_srgb: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_srgb > {
              static inline char const* name() { return "framebuffer_srgb"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_SRGB;
          };
        } // namespace cst
      } // namespace framebuffer_srgb
      namespace get_program_binary {
        namespace cst {
          struct gl_arb_get_program_binary: public ::gtulu::internal::constant::gl_constant< gl_arb_get_program_binary > {
              static inline char const* name() { return "arb_get_program_binary"; }
              static ::std::uint64_t const value = GL_ARB_get_program_binary;
          };
          struct gl_num_program_binary_formats: public ::gtulu::internal::constant::gl_constant< gl_num_program_binary_formats > {
              static inline char const* name() { return "num_program_binary_formats"; }
              static ::std::uint64_t const value = GL_NUM_PROGRAM_BINARY_FORMATS;
          };
          struct gl_program_binary_formats: public ::gtulu::internal::constant::gl_constant< gl_program_binary_formats > {
              static inline char const* name() { return "program_binary_formats"; }
              static ::std::uint64_t const value = GL_PROGRAM_BINARY_FORMATS;
          };
          struct gl_program_binary_length: public ::gtulu::internal::constant::gl_constant< gl_program_binary_length > {
              static inline char const* name() { return "program_binary_length"; }
              static ::std::uint64_t const value = GL_PROGRAM_BINARY_LENGTH;
          };
          struct gl_program_binary_retrievable_hint: public ::gtulu::internal::constant::gl_constant< gl_program_binary_retrievable_hint > {
              static inline char const* name() { return "program_binary_retrievable_hint"; }
              static ::std::uint64_t const value = GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
          };
        } // namespace cst
      } // namespace get_program_binary
      namespace gpu_shader5 {
        namespace cst {
          struct gl_arb_gpu_shader5: public ::gtulu::internal::constant::gl_constant< gl_arb_gpu_shader5 > {
              static inline char const* name() { return "arb_gpu_shader5"; }
              static ::std::uint64_t const value = GL_ARB_gpu_shader5;
          };
          struct gl_fragment_interpolation_offset_bits: public ::gtulu::internal::constant::gl_constant< gl_fragment_interpolation_offset_bits > {
              static inline char const* name() { return "fragment_interpolation_offset_bits"; }
              static ::std::uint64_t const value = GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
          };
          struct gl_geometry_shader_invocations: public ::gtulu::internal::constant::gl_constant< gl_geometry_shader_invocations > {
              static inline char const* name() { return "geometry_shader_invocations"; }
              static ::std::uint64_t const value = GL_GEOMETRY_SHADER_INVOCATIONS;
          };
          struct gl_max_fragment_interpolation_offset: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_interpolation_offset > {
              static inline char const* name() { return "max_fragment_interpolation_offset"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
          };
          struct gl_max_geometry_shader_invocations: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_shader_invocations > {
              static inline char const* name() { return "max_geometry_shader_invocations"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
          };
          struct gl_min_fragment_interpolation_offset: public ::gtulu::internal::constant::gl_constant< gl_min_fragment_interpolation_offset > {
              static inline char const* name() { return "min_fragment_interpolation_offset"; }
              static ::std::uint64_t const value = GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
          };
        } // namespace cst
      } // namespace gpu_shader5
      namespace gpu_shader_fp64 {
        namespace cst {
          struct gl_arb_gpu_shader_fp64: public ::gtulu::internal::constant::gl_constant< gl_arb_gpu_shader_fp64 > {
              static inline char const* name() { return "arb_gpu_shader_fp64"; }
              static ::std::uint64_t const value = GL_ARB_gpu_shader_fp64;
          };
          struct gl_double_mat2: public ::gtulu::internal::constant::gl_constant< gl_double_mat2 > {
              static inline char const* name() { return "double_mat2"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT2;
          };
          struct gl_double_mat2x3: public ::gtulu::internal::constant::gl_constant< gl_double_mat2x3 > {
              static inline char const* name() { return "double_mat2x3"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT2x3;
          };
          struct gl_double_mat2x4: public ::gtulu::internal::constant::gl_constant< gl_double_mat2x4 > {
              static inline char const* name() { return "double_mat2x4"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT2x4;
          };
          struct gl_double_mat3: public ::gtulu::internal::constant::gl_constant< gl_double_mat3 > {
              static inline char const* name() { return "double_mat3"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT3;
          };
          struct gl_double_mat3x2: public ::gtulu::internal::constant::gl_constant< gl_double_mat3x2 > {
              static inline char const* name() { return "double_mat3x2"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT3x2;
          };
          struct gl_double_mat3x4: public ::gtulu::internal::constant::gl_constant< gl_double_mat3x4 > {
              static inline char const* name() { return "double_mat3x4"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT3x4;
          };
          struct gl_double_mat4: public ::gtulu::internal::constant::gl_constant< gl_double_mat4 > {
              static inline char const* name() { return "double_mat4"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT4;
          };
          struct gl_double_mat4x2: public ::gtulu::internal::constant::gl_constant< gl_double_mat4x2 > {
              static inline char const* name() { return "double_mat4x2"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT4x2;
          };
          struct gl_double_mat4x3: public ::gtulu::internal::constant::gl_constant< gl_double_mat4x3 > {
              static inline char const* name() { return "double_mat4x3"; }
              static ::std::uint64_t const value = GL_DOUBLE_MAT4x3;
          };
          struct gl_double_vec2: public ::gtulu::internal::constant::gl_constant< gl_double_vec2 > {
              static inline char const* name() { return "double_vec2"; }
              static ::std::uint64_t const value = GL_DOUBLE_VEC2;
          };
          struct gl_double_vec3: public ::gtulu::internal::constant::gl_constant< gl_double_vec3 > {
              static inline char const* name() { return "double_vec3"; }
              static ::std::uint64_t const value = GL_DOUBLE_VEC3;
          };
          struct gl_double_vec4: public ::gtulu::internal::constant::gl_constant< gl_double_vec4 > {
              static inline char const* name() { return "double_vec4"; }
              static ::std::uint64_t const value = GL_DOUBLE_VEC4;
          };
        } // namespace cst
      } // namespace gpu_shader_fp64
      namespace half_float_pixel {
        namespace cst {
        } // namespace cst
      } // namespace half_float_pixel
      namespace half_float_vertex {
        namespace cst {
          struct gl_arb_half_float_vertex: public ::gtulu::internal::constant::gl_constant< gl_arb_half_float_vertex > {
              static inline char const* name() { return "arb_half_float_vertex"; }
              static ::std::uint64_t const value = GL_ARB_half_float_vertex;
          };
          struct gl_half_float: public ::gtulu::internal::constant::gl_constant< gl_half_float > {
              static inline char const* name() { return "half_float"; }
              static ::std::uint64_t const value = GL_HALF_FLOAT;
          };
        } // namespace cst
      } // namespace half_float_vertex
      namespace imaging {
        namespace cst {
          struct gl_blend_color: public ::gtulu::internal::constant::gl_constant< gl_blend_color > {
              static inline char const* name() { return "blend_color"; }
              static ::std::uint64_t const value = GL_BLEND_COLOR;
          };
          struct gl_blend_equation: public ::gtulu::internal::constant::gl_constant< gl_blend_equation > {
              static inline char const* name() { return "blend_equation"; }
              static ::std::uint64_t const value = GL_BLEND_EQUATION;
          };
          struct gl_constant_alpha: public ::gtulu::internal::constant::gl_constant< gl_constant_alpha > {
              static inline char const* name() { return "constant_alpha"; }
              static ::std::uint64_t const value = GL_CONSTANT_ALPHA;
          };
          struct gl_constant_color: public ::gtulu::internal::constant::gl_constant< gl_constant_color > {
              static inline char const* name() { return "constant_color"; }
              static ::std::uint64_t const value = GL_CONSTANT_COLOR;
          };
          struct gl_func_add: public ::gtulu::internal::constant::gl_constant< gl_func_add > {
              static inline char const* name() { return "func_add"; }
              static ::std::uint64_t const value = GL_FUNC_ADD;
          };
          struct gl_func_reverse_subtract: public ::gtulu::internal::constant::gl_constant< gl_func_reverse_subtract > {
              static inline char const* name() { return "func_reverse_subtract"; }
              static ::std::uint64_t const value = GL_FUNC_REVERSE_SUBTRACT;
          };
          struct gl_func_subtract: public ::gtulu::internal::constant::gl_constant< gl_func_subtract > {
              static inline char const* name() { return "func_subtract"; }
              static ::std::uint64_t const value = GL_FUNC_SUBTRACT;
          };
          struct gl_max: public ::gtulu::internal::constant::gl_constant< gl_max > {
              static inline char const* name() { return "max"; }
              static ::std::uint64_t const value = GL_MAX;
          };
          struct gl_min: public ::gtulu::internal::constant::gl_constant< gl_min > {
              static inline char const* name() { return "min"; }
              static ::std::uint64_t const value = GL_MIN;
          };
          struct gl_one_minus_constant_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_constant_alpha > {
              static inline char const* name() { return "one_minus_constant_alpha"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_CONSTANT_ALPHA;
          };
          struct gl_one_minus_constant_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_constant_color > {
              static inline char const* name() { return "one_minus_constant_color"; }
              static ::std::uint64_t const value = GL_ONE_MINUS_CONSTANT_COLOR;
          };
        } // namespace cst
      } // namespace imaging
      namespace internalformat_query {
        namespace cst {
          struct gl_arb_internalformat_query: public ::gtulu::internal::constant::gl_constant< gl_arb_internalformat_query > {
              static inline char const* name() { return "arb_internalformat_query"; }
              static ::std::uint64_t const value = GL_ARB_internalformat_query;
          };
          struct gl_num_sample_counts: public ::gtulu::internal::constant::gl_constant< gl_num_sample_counts > {
              static inline char const* name() { return "num_sample_counts"; }
              static ::std::uint64_t const value = GL_NUM_SAMPLE_COUNTS;
          };
        } // namespace cst
      } // namespace internalformat_query
      namespace map_buffer_alignment {
        namespace cst {
          struct gl_arb_map_buffer_alignment: public ::gtulu::internal::constant::gl_constant< gl_arb_map_buffer_alignment > {
              static inline char const* name() { return "arb_map_buffer_alignment"; }
              static ::std::uint64_t const value = GL_ARB_map_buffer_alignment;
          };
          struct gl_min_map_buffer_alignment: public ::gtulu::internal::constant::gl_constant< gl_min_map_buffer_alignment > {
              static inline char const* name() { return "min_map_buffer_alignment"; }
              static ::std::uint64_t const value = GL_MIN_MAP_BUFFER_ALIGNMENT;
          };
        } // namespace cst
      } // namespace map_buffer_alignment
      namespace map_buffer_range {
        namespace cst {
          struct gl_arb_map_buffer_range: public ::gtulu::internal::constant::gl_constant< gl_arb_map_buffer_range > {
              static inline char const* name() { return "arb_map_buffer_range"; }
              static ::std::uint64_t const value = GL_ARB_map_buffer_range;
          };
          struct gl_map_flush_explicit_bit: public ::gtulu::internal::constant::gl_constant< gl_map_flush_explicit_bit > {
              static inline char const* name() { return "map_flush_explicit_bit"; }
              static ::std::uint64_t const value = GL_MAP_FLUSH_EXPLICIT_BIT;
          };
          struct gl_map_invalidate_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_map_invalidate_buffer_bit > {
              static inline char const* name() { return "map_invalidate_buffer_bit"; }
              static ::std::uint64_t const value = GL_MAP_INVALIDATE_BUFFER_BIT;
          };
          struct gl_map_invalidate_range_bit: public ::gtulu::internal::constant::gl_constant< gl_map_invalidate_range_bit > {
              static inline char const* name() { return "map_invalidate_range_bit"; }
              static ::std::uint64_t const value = GL_MAP_INVALIDATE_RANGE_BIT;
          };
          struct gl_map_read_bit: public ::gtulu::internal::constant::gl_constant< gl_map_read_bit > {
              static inline char const* name() { return "map_read_bit"; }
              static ::std::uint64_t const value = GL_MAP_READ_BIT;
          };
          struct gl_map_unsynchronized_bit: public ::gtulu::internal::constant::gl_constant< gl_map_unsynchronized_bit > {
              static inline char const* name() { return "map_unsynchronized_bit"; }
              static ::std::uint64_t const value = GL_MAP_UNSYNCHRONIZED_BIT;
          };
          struct gl_map_write_bit: public ::gtulu::internal::constant::gl_constant< gl_map_write_bit > {
              static inline char const* name() { return "map_write_bit"; }
              static ::std::uint64_t const value = GL_MAP_WRITE_BIT;
          };
        } // namespace cst
      } // namespace map_buffer_range
      namespace occlusion_query2 {
        namespace cst {
          struct gl_any_samples_passed: public ::gtulu::internal::constant::gl_constant< gl_any_samples_passed > {
              static inline char const* name() { return "any_samples_passed"; }
              static ::std::uint64_t const value = GL_ANY_SAMPLES_PASSED;
          };
          struct gl_arb_occlusion_query2: public ::gtulu::internal::constant::gl_constant< gl_arb_occlusion_query2 > {
              static inline char const* name() { return "arb_occlusion_query2"; }
              static ::std::uint64_t const value = GL_ARB_occlusion_query2;
          };
        } // namespace cst
      } // namespace occlusion_query2
      namespace provoking_vertex {
        namespace cst {
          struct gl_arb_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_arb_provoking_vertex > {
              static inline char const* name() { return "arb_provoking_vertex"; }
              static ::std::uint64_t const value = GL_ARB_provoking_vertex;
          };
          struct gl_first_vertex_convention: public ::gtulu::internal::constant::gl_constant< gl_first_vertex_convention > {
              static inline char const* name() { return "first_vertex_convention"; }
              static ::std::uint64_t const value = GL_FIRST_VERTEX_CONVENTION;
          };
          struct gl_last_vertex_convention: public ::gtulu::internal::constant::gl_constant< gl_last_vertex_convention > {
              static inline char const* name() { return "last_vertex_convention"; }
              static ::std::uint64_t const value = GL_LAST_VERTEX_CONVENTION;
          };
          struct gl_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_provoking_vertex > {
              static inline char const* name() { return "provoking_vertex"; }
              static ::std::uint64_t const value = GL_PROVOKING_VERTEX;
          };
          struct gl_quads_follow_provoking_vertex_convention: public ::gtulu::internal::constant::gl_constant< gl_quads_follow_provoking_vertex_convention > {
              static inline char const* name() { return "quads_follow_provoking_vertex_convention"; }
              static ::std::uint64_t const value = GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION;
          };
        } // namespace cst
      } // namespace provoking_vertex
      namespace robustness {
        namespace cst {
          struct gl_arb_robustness: public ::gtulu::internal::constant::gl_constant< gl_arb_robustness > {
              static inline char const* name() { return "arb_robustness"; }
              static ::std::uint64_t const value = GL_ARB_robustness;
          };
          struct gl_context_flag_robust_access_bit_arb: public ::gtulu::internal::constant::gl_constant< gl_context_flag_robust_access_bit_arb > {
              static inline char const* name() { return "context_flag_robust_access_bit_arb"; }
              static ::std::uint64_t const value = GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB;
          };
          struct gl_guilty_context_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_guilty_context_reset_arb > {
              static inline char const* name() { return "guilty_context_reset_arb"; }
              static ::std::uint64_t const value = GL_GUILTY_CONTEXT_RESET_ARB;
          };
          struct gl_innocent_context_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_innocent_context_reset_arb > {
              static inline char const* name() { return "innocent_context_reset_arb"; }
              static ::std::uint64_t const value = GL_INNOCENT_CONTEXT_RESET_ARB;
          };
          struct gl_lose_context_on_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_lose_context_on_reset_arb > {
              static inline char const* name() { return "lose_context_on_reset_arb"; }
              static ::std::uint64_t const value = GL_LOSE_CONTEXT_ON_RESET_ARB;
          };
          struct gl_no_reset_notification_arb: public ::gtulu::internal::constant::gl_constant< gl_no_reset_notification_arb > {
              static inline char const* name() { return "no_reset_notification_arb"; }
              static ::std::uint64_t const value = GL_NO_RESET_NOTIFICATION_ARB;
          };
          struct gl_reset_notification_strategy_arb: public ::gtulu::internal::constant::gl_constant< gl_reset_notification_strategy_arb > {
              static inline char const* name() { return "reset_notification_strategy_arb"; }
              static ::std::uint64_t const value = GL_RESET_NOTIFICATION_STRATEGY_ARB;
          };
          struct gl_unknown_context_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_unknown_context_reset_arb > {
              static inline char const* name() { return "unknown_context_reset_arb"; }
              static ::std::uint64_t const value = GL_UNKNOWN_CONTEXT_RESET_ARB;
          };
        } // namespace cst
      } // namespace robustness
      namespace sample_shading {
        namespace cst {
          struct gl_arb_sample_shading: public ::gtulu::internal::constant::gl_constant< gl_arb_sample_shading > {
              static inline char const* name() { return "arb_sample_shading"; }
              static ::std::uint64_t const value = GL_ARB_sample_shading;
          };
          struct gl_min_sample_shading_value_arb: public ::gtulu::internal::constant::gl_constant< gl_min_sample_shading_value_arb > {
              static inline char const* name() { return "min_sample_shading_value_arb"; }
              static ::std::uint64_t const value = GL_MIN_SAMPLE_SHADING_VALUE_ARB;
          };
          struct gl_sample_shading_arb: public ::gtulu::internal::constant::gl_constant< gl_sample_shading_arb > {
              static inline char const* name() { return "sample_shading_arb"; }
              static ::std::uint64_t const value = GL_SAMPLE_SHADING_ARB;
          };
        } // namespace cst
      } // namespace sample_shading
      namespace sampler_objects {
        namespace cst {
          struct gl_arb_sampler_objects: public ::gtulu::internal::constant::gl_constant< gl_arb_sampler_objects > {
              static inline char const* name() { return "arb_sampler_objects"; }
              static ::std::uint64_t const value = GL_ARB_sampler_objects;
          };
          struct gl_sampler_binding: public ::gtulu::internal::constant::gl_constant< gl_sampler_binding > {
              static inline char const* name() { return "sampler_binding"; }
              static ::std::uint64_t const value = GL_SAMPLER_BINDING;
          };
        } // namespace cst
      } // namespace sampler_objects
      namespace seamless_cube_map {
        namespace cst {
          struct gl_arb_seamless_cube_map: public ::gtulu::internal::constant::gl_constant< gl_arb_seamless_cube_map > {
              static inline char const* name() { return "arb_seamless_cube_map"; }
              static ::std::uint64_t const value = GL_ARB_seamless_cube_map;
          };
          struct gl_texture_cube_map_seamless: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_seamless > {
              static inline char const* name() { return "texture_cube_map_seamless"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_SEAMLESS;
          };
        } // namespace cst
      } // namespace seamless_cube_map
      namespace separate_shader_objects {
        namespace cst {
          struct gl_active_program: public ::gtulu::internal::constant::gl_constant< gl_active_program > {
              static inline char const* name() { return "active_program"; }
              static ::std::uint64_t const value = GL_ACTIVE_PROGRAM;
          };
          struct gl_all_shader_bits: public ::gtulu::internal::constant::gl_constant< gl_all_shader_bits > {
              static inline char const* name() { return "all_shader_bits"; }
              static ::std::uint64_t const value = GL_ALL_SHADER_BITS;
          };
          struct gl_arb_separate_shader_objects: public ::gtulu::internal::constant::gl_constant< gl_arb_separate_shader_objects > {
              static inline char const* name() { return "arb_separate_shader_objects"; }
              static ::std::uint64_t const value = GL_ARB_separate_shader_objects;
          };
          struct gl_fragment_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_fragment_shader_bit > {
              static inline char const* name() { return "fragment_shader_bit"; }
              static ::std::uint64_t const value = GL_FRAGMENT_SHADER_BIT;
          };
          struct gl_geometry_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_geometry_shader_bit > {
              static inline char const* name() { return "geometry_shader_bit"; }
              static ::std::uint64_t const value = GL_GEOMETRY_SHADER_BIT;
          };
          struct gl_program_pipeline_binding: public ::gtulu::internal::constant::gl_constant< gl_program_pipeline_binding > {
              static inline char const* name() { return "program_pipeline_binding"; }
              static ::std::uint64_t const value = GL_PROGRAM_PIPELINE_BINDING;
          };
          struct gl_program_separable: public ::gtulu::internal::constant::gl_constant< gl_program_separable > {
              static inline char const* name() { return "program_separable"; }
              static ::std::uint64_t const value = GL_PROGRAM_SEPARABLE;
          };
          struct gl_tess_control_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_tess_control_shader_bit > {
              static inline char const* name() { return "tess_control_shader_bit"; }
              static ::std::uint64_t const value = GL_TESS_CONTROL_SHADER_BIT;
          };
          struct gl_tess_evaluation_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_tess_evaluation_shader_bit > {
              static inline char const* name() { return "tess_evaluation_shader_bit"; }
              static ::std::uint64_t const value = GL_TESS_EVALUATION_SHADER_BIT;
          };
          struct gl_vertex_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_vertex_shader_bit > {
              static inline char const* name() { return "vertex_shader_bit"; }
              static ::std::uint64_t const value = GL_VERTEX_SHADER_BIT;
          };
        } // namespace cst
      } // namespace separate_shader_objects
      namespace shader_atomic_counters {
        namespace cst {
          struct gl_active_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_active_atomic_counter_buffers > {
              static inline char const* name() { return "active_atomic_counter_buffers"; }
              static ::std::uint64_t const value = GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_arb_shader_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_atomic_counters > {
              static inline char const* name() { return "arb_shader_atomic_counters"; }
              static ::std::uint64_t const value = GL_ARB_shader_atomic_counters;
          };
          struct gl_atomic_counter_buffer: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer > {
              static inline char const* name() { return "atomic_counter_buffer"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER;
          };
          struct gl_atomic_counter_buffer_active_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_active_atomic_counters > {
              static inline char const* name() { return "atomic_counter_buffer_active_atomic_counters"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS;
          };
          struct gl_atomic_counter_buffer_active_atomic_counter_indices: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_active_atomic_counter_indices > {
              static inline char const* name() { return "atomic_counter_buffer_active_atomic_counter_indices"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES;
          };
          struct gl_atomic_counter_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_binding > {
              static inline char const* name() { return "atomic_counter_buffer_binding"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_BINDING;
          };
          struct gl_atomic_counter_buffer_data_size: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_data_size > {
              static inline char const* name() { return "atomic_counter_buffer_data_size"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE;
          };
          struct gl_atomic_counter_buffer_referenced_by_fragment_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_fragment_shader > {
              static inline char const* name() { return "atomic_counter_buffer_referenced_by_fragment_shader"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_geometry_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_geometry_shader > {
              static inline char const* name() { return "atomic_counter_buffer_referenced_by_geometry_shader"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_tess_control_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_tess_control_shader > {
              static inline char const* name() { return "atomic_counter_buffer_referenced_by_tess_control_shader"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_tess_evaluation_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_tess_evaluation_shader > {
              static inline char const* name() { return "atomic_counter_buffer_referenced_by_tess_evaluation_shader"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_vertex_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_vertex_shader > {
              static inline char const* name() { return "atomic_counter_buffer_referenced_by_vertex_shader"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER;
          };
          struct gl_atomic_counter_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_size > {
              static inline char const* name() { return "atomic_counter_buffer_size"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_SIZE;
          };
          struct gl_atomic_counter_buffer_start: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_start > {
              static inline char const* name() { return "atomic_counter_buffer_start"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BUFFER_START;
          };
          struct gl_max_atomic_counter_buffer_bindings: public ::gtulu::internal::constant::gl_constant< gl_max_atomic_counter_buffer_bindings > {
              static inline char const* name() { return "max_atomic_counter_buffer_bindings"; }
              static ::std::uint64_t const value = GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
          };
          struct gl_max_atomic_counter_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_max_atomic_counter_buffer_size > {
              static inline char const* name() { return "max_atomic_counter_buffer_size"; }
              static ::std::uint64_t const value = GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
          };
          struct gl_max_combined_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_combined_atomic_counters > {
              static inline char const* name() { return "max_combined_atomic_counters"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_ATOMIC_COUNTERS;
          };
          struct gl_max_combined_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_combined_atomic_counter_buffers > {
              static inline char const* name() { return "max_combined_atomic_counter_buffers"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_fragment_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_atomic_counters > {
              static inline char const* name() { return "max_fragment_atomic_counters"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
          };
          struct gl_max_fragment_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_atomic_counter_buffers > {
              static inline char const* name() { return "max_fragment_atomic_counter_buffers"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_geometry_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_atomic_counters > {
              static inline char const* name() { return "max_geometry_atomic_counters"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
          };
          struct gl_max_geometry_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_atomic_counter_buffers > {
              static inline char const* name() { return "max_geometry_atomic_counter_buffers"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_tess_control_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_atomic_counters > {
              static inline char const* name() { return "max_tess_control_atomic_counters"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
          };
          struct gl_max_tess_control_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_atomic_counter_buffers > {
              static inline char const* name() { return "max_tess_control_atomic_counter_buffers"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_tess_evaluation_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_atomic_counters > {
              static inline char const* name() { return "max_tess_evaluation_atomic_counters"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
          };
          struct gl_max_tess_evaluation_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_atomic_counter_buffers > {
              static inline char const* name() { return "max_tess_evaluation_atomic_counter_buffers"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_vertex_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_atomic_counters > {
              static inline char const* name() { return "max_vertex_atomic_counters"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_ATOMIC_COUNTERS;
          };
          struct gl_max_vertex_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_atomic_counter_buffers > {
              static inline char const* name() { return "max_vertex_atomic_counter_buffers"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_uniform_atomic_counter_buffer_index: public ::gtulu::internal::constant::gl_constant< gl_uniform_atomic_counter_buffer_index > {
              static inline char const* name() { return "uniform_atomic_counter_buffer_index"; }
              static ::std::uint64_t const value = GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX;
          };
          struct gl_unsigned_int_atomic_counter: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_atomic_counter > {
              static inline char const* name() { return "unsigned_int_atomic_counter"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_ATOMIC_COUNTER;
          };
        } // namespace cst
      } // namespace shader_atomic_counters
      namespace shader_bit_encoding {
        namespace cst {
          struct gl_arb_shader_bit_encoding: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_bit_encoding > {
              static inline char const* name() { return "arb_shader_bit_encoding"; }
              static ::std::uint64_t const value = GL_ARB_shader_bit_encoding;
          };
        } // namespace cst
      } // namespace shader_bit_encoding
      namespace shader_image_load_store {
        namespace cst {
          struct gl_all_barrier_bits: public ::gtulu::internal::constant::gl_constant< gl_all_barrier_bits > {
              static inline char const* name() { return "all_barrier_bits"; }
              static ::std::uint64_t const value = GL_ALL_BARRIER_BITS;
          };
          struct gl_arb_shader_image_load_store: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_image_load_store > {
              static inline char const* name() { return "arb_shader_image_load_store"; }
              static ::std::uint64_t const value = GL_ARB_shader_image_load_store;
          };
          struct gl_atomic_counter_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_barrier_bit > {
              static inline char const* name() { return "atomic_counter_barrier_bit"; }
              static ::std::uint64_t const value = GL_ATOMIC_COUNTER_BARRIER_BIT;
          };
          struct gl_buffer_update_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_buffer_update_barrier_bit > {
              static inline char const* name() { return "buffer_update_barrier_bit"; }
              static ::std::uint64_t const value = GL_BUFFER_UPDATE_BARRIER_BIT;
          };
          struct gl_command_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_command_barrier_bit > {
              static inline char const* name() { return "command_barrier_bit"; }
              static ::std::uint64_t const value = GL_COMMAND_BARRIER_BIT;
          };
          struct gl_element_array_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_element_array_barrier_bit > {
              static inline char const* name() { return "element_array_barrier_bit"; }
              static ::std::uint64_t const value = GL_ELEMENT_ARRAY_BARRIER_BIT;
          };
          struct gl_framebuffer_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_barrier_bit > {
              static inline char const* name() { return "framebuffer_barrier_bit"; }
              static ::std::uint64_t const value = GL_FRAMEBUFFER_BARRIER_BIT;
          };
          struct gl_image_1d: public ::gtulu::internal::constant::gl_constant< gl_image_1d > {
              static inline char const* name() { return "image_1d"; }
              static ::std::uint64_t const value = GL_IMAGE_1D;
          };
          struct gl_image_1d_array: public ::gtulu::internal::constant::gl_constant< gl_image_1d_array > {
              static inline char const* name() { return "image_1d_array"; }
              static ::std::uint64_t const value = GL_IMAGE_1D_ARRAY;
          };
          struct gl_image_2d: public ::gtulu::internal::constant::gl_constant< gl_image_2d > {
              static inline char const* name() { return "image_2d"; }
              static ::std::uint64_t const value = GL_IMAGE_2D;
          };
          struct gl_image_2d_array: public ::gtulu::internal::constant::gl_constant< gl_image_2d_array > {
              static inline char const* name() { return "image_2d_array"; }
              static ::std::uint64_t const value = GL_IMAGE_2D_ARRAY;
          };
          struct gl_image_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_image_2d_multisample > {
              static inline char const* name() { return "image_2d_multisample"; }
              static ::std::uint64_t const value = GL_IMAGE_2D_MULTISAMPLE;
          };
          struct gl_image_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_image_2d_multisample_array > {
              static inline char const* name() { return "image_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_IMAGE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_image_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_image_2d_rect > {
              static inline char const* name() { return "image_2d_rect"; }
              static ::std::uint64_t const value = GL_IMAGE_2D_RECT;
          };
          struct gl_image_3d: public ::gtulu::internal::constant::gl_constant< gl_image_3d > {
              static inline char const* name() { return "image_3d"; }
              static ::std::uint64_t const value = GL_IMAGE_3D;
          };
          struct gl_image_binding_access: public ::gtulu::internal::constant::gl_constant< gl_image_binding_access > {
              static inline char const* name() { return "image_binding_access"; }
              static ::std::uint64_t const value = GL_IMAGE_BINDING_ACCESS;
          };
          struct gl_image_binding_format: public ::gtulu::internal::constant::gl_constant< gl_image_binding_format > {
              static inline char const* name() { return "image_binding_format"; }
              static ::std::uint64_t const value = GL_IMAGE_BINDING_FORMAT;
          };
          struct gl_image_binding_layer: public ::gtulu::internal::constant::gl_constant< gl_image_binding_layer > {
              static inline char const* name() { return "image_binding_layer"; }
              static ::std::uint64_t const value = GL_IMAGE_BINDING_LAYER;
          };
          struct gl_image_binding_layered: public ::gtulu::internal::constant::gl_constant< gl_image_binding_layered > {
              static inline char const* name() { return "image_binding_layered"; }
              static ::std::uint64_t const value = GL_IMAGE_BINDING_LAYERED;
          };
          struct gl_image_binding_level: public ::gtulu::internal::constant::gl_constant< gl_image_binding_level > {
              static inline char const* name() { return "image_binding_level"; }
              static ::std::uint64_t const value = GL_IMAGE_BINDING_LEVEL;
          };
          struct gl_image_binding_name: public ::gtulu::internal::constant::gl_constant< gl_image_binding_name > {
              static inline char const* name() { return "image_binding_name"; }
              static ::std::uint64_t const value = GL_IMAGE_BINDING_NAME;
          };
          struct gl_image_buffer: public ::gtulu::internal::constant::gl_constant< gl_image_buffer > {
              static inline char const* name() { return "image_buffer"; }
              static ::std::uint64_t const value = GL_IMAGE_BUFFER;
          };
          struct gl_image_cube: public ::gtulu::internal::constant::gl_constant< gl_image_cube > {
              static inline char const* name() { return "image_cube"; }
              static ::std::uint64_t const value = GL_IMAGE_CUBE;
          };
          struct gl_image_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_image_cube_map_array > {
              static inline char const* name() { return "image_cube_map_array"; }
              static ::std::uint64_t const value = GL_IMAGE_CUBE_MAP_ARRAY;
          };
          struct gl_image_format_compatibility_by_class: public ::gtulu::internal::constant::gl_constant< gl_image_format_compatibility_by_class > {
              static inline char const* name() { return "image_format_compatibility_by_class"; }
              static ::std::uint64_t const value = GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
          };
          struct gl_image_format_compatibility_by_size: public ::gtulu::internal::constant::gl_constant< gl_image_format_compatibility_by_size > {
              static inline char const* name() { return "image_format_compatibility_by_size"; }
              static ::std::uint64_t const value = GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
          };
          struct gl_image_format_compatibility_type: public ::gtulu::internal::constant::gl_constant< gl_image_format_compatibility_type > {
              static inline char const* name() { return "image_format_compatibility_type"; }
              static ::std::uint64_t const value = GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
          };
          struct gl_int_image_1d: public ::gtulu::internal::constant::gl_constant< gl_int_image_1d > {
              static inline char const* name() { return "int_image_1d"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_1D;
          };
          struct gl_int_image_1d_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_1d_array > {
              static inline char const* name() { return "int_image_1d_array"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_1D_ARRAY;
          };
          struct gl_int_image_2d: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d > {
              static inline char const* name() { return "int_image_2d"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_2D;
          };
          struct gl_int_image_2d_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_array > {
              static inline char const* name() { return "int_image_2d_array"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_2D_ARRAY;
          };
          struct gl_int_image_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_multisample > {
              static inline char const* name() { return "int_image_2d_multisample"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_2D_MULTISAMPLE;
          };
          struct gl_int_image_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_multisample_array > {
              static inline char const* name() { return "int_image_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_int_image_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_rect > {
              static inline char const* name() { return "int_image_2d_rect"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_2D_RECT;
          };
          struct gl_int_image_3d: public ::gtulu::internal::constant::gl_constant< gl_int_image_3d > {
              static inline char const* name() { return "int_image_3d"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_3D;
          };
          struct gl_int_image_buffer: public ::gtulu::internal::constant::gl_constant< gl_int_image_buffer > {
              static inline char const* name() { return "int_image_buffer"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_BUFFER;
          };
          struct gl_int_image_cube: public ::gtulu::internal::constant::gl_constant< gl_int_image_cube > {
              static inline char const* name() { return "int_image_cube"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_CUBE;
          };
          struct gl_int_image_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_cube_map_array > {
              static inline char const* name() { return "int_image_cube_map_array"; }
              static ::std::uint64_t const value = GL_INT_IMAGE_CUBE_MAP_ARRAY;
          };
          struct gl_max_combined_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_combined_image_uniforms > {
              static inline char const* name() { return "max_combined_image_uniforms"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_IMAGE_UNIFORMS;
          };
          struct gl_max_combined_image_units_and_fragment_outputs: public ::gtulu::internal::constant::gl_constant< gl_max_combined_image_units_and_fragment_outputs > {
              static inline char const* name() { return "max_combined_image_units_and_fragment_outputs"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS;
          };
          struct gl_max_fragment_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_image_uniforms > {
              static inline char const* name() { return "max_fragment_image_uniforms"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
          };
          struct gl_max_geometry_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_image_uniforms > {
              static inline char const* name() { return "max_geometry_image_uniforms"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
          };
          struct gl_max_image_samples: public ::gtulu::internal::constant::gl_constant< gl_max_image_samples > {
              static inline char const* name() { return "max_image_samples"; }
              static ::std::uint64_t const value = GL_MAX_IMAGE_SAMPLES;
          };
          struct gl_max_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_image_units > {
              static inline char const* name() { return "max_image_units"; }
              static ::std::uint64_t const value = GL_MAX_IMAGE_UNITS;
          };
          struct gl_max_tess_control_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_image_uniforms > {
              static inline char const* name() { return "max_tess_control_image_uniforms"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
          };
          struct gl_max_tess_evaluation_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_image_uniforms > {
              static inline char const* name() { return "max_tess_evaluation_image_uniforms"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
          };
          struct gl_max_vertex_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_image_uniforms > {
              static inline char const* name() { return "max_vertex_image_uniforms"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_IMAGE_UNIFORMS;
          };
          struct gl_pixel_buffer_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_pixel_buffer_barrier_bit > {
              static inline char const* name() { return "pixel_buffer_barrier_bit"; }
              static ::std::uint64_t const value = GL_PIXEL_BUFFER_BARRIER_BIT;
          };
          struct gl_shader_image_access_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_shader_image_access_barrier_bit > {
              static inline char const* name() { return "shader_image_access_barrier_bit"; }
              static ::std::uint64_t const value = GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
          };
          struct gl_texture_fetch_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_texture_fetch_barrier_bit > {
              static inline char const* name() { return "texture_fetch_barrier_bit"; }
              static ::std::uint64_t const value = GL_TEXTURE_FETCH_BARRIER_BIT;
          };
          struct gl_texture_update_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_texture_update_barrier_bit > {
              static inline char const* name() { return "texture_update_barrier_bit"; }
              static ::std::uint64_t const value = GL_TEXTURE_UPDATE_BARRIER_BIT;
          };
          struct gl_transform_feedback_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_barrier_bit > {
              static inline char const* name() { return "transform_feedback_barrier_bit"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
          };
          struct gl_uniform_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_uniform_barrier_bit > {
              static inline char const* name() { return "uniform_barrier_bit"; }
              static ::std::uint64_t const value = GL_UNIFORM_BARRIER_BIT;
          };
          struct gl_unsigned_int_image_1d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_1d > {
              static inline char const* name() { return "unsigned_int_image_1d"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_1D;
          };
          struct gl_unsigned_int_image_1d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_1d_array > {
              static inline char const* name() { return "unsigned_int_image_1d_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_1D_ARRAY;
          };
          struct gl_unsigned_int_image_2d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d > {
              static inline char const* name() { return "unsigned_int_image_2d"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_2D;
          };
          struct gl_unsigned_int_image_2d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_array > {
              static inline char const* name() { return "unsigned_int_image_2d_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
          };
          struct gl_unsigned_int_image_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_multisample > {
              static inline char const* name() { return "unsigned_int_image_2d_multisample"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE;
          };
          struct gl_unsigned_int_image_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_multisample_array > {
              static inline char const* name() { return "unsigned_int_image_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_unsigned_int_image_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_rect > {
              static inline char const* name() { return "unsigned_int_image_2d_rect"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_2D_RECT;
          };
          struct gl_unsigned_int_image_3d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_3d > {
              static inline char const* name() { return "unsigned_int_image_3d"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_3D;
          };
          struct gl_unsigned_int_image_buffer: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_buffer > {
              static inline char const* name() { return "unsigned_int_image_buffer"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_BUFFER;
          };
          struct gl_unsigned_int_image_cube: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_cube > {
              static inline char const* name() { return "unsigned_int_image_cube"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_CUBE;
          };
          struct gl_unsigned_int_image_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_cube_map_array > {
              static inline char const* name() { return "unsigned_int_image_cube_map_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
          };
          struct gl_vertex_attrib_array_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_barrier_bit > {
              static inline char const* name() { return "vertex_attrib_array_barrier_bit"; }
              static ::std::uint64_t const value = GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
          };
        } // namespace cst
      } // namespace shader_image_load_store
      namespace shader_objects {
        namespace cst {
        } // namespace cst
      } // namespace shader_objects
      namespace shader_precision {
        namespace cst {
        } // namespace cst
      } // namespace shader_precision
      namespace shader_stencil_export {
        namespace cst {
          struct gl_arb_shader_stencil_export: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_stencil_export > {
              static inline char const* name() { return "arb_shader_stencil_export"; }
              static ::std::uint64_t const value = GL_ARB_shader_stencil_export;
          };
        } // namespace cst
      } // namespace shader_stencil_export
      namespace shader_subroutine {
        namespace cst {
          struct gl_active_subroutines: public ::gtulu::internal::constant::gl_constant< gl_active_subroutines > {
              static inline char const* name() { return "active_subroutines"; }
              static ::std::uint64_t const value = GL_ACTIVE_SUBROUTINES;
          };
          struct gl_active_subroutine_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_max_length > {
              static inline char const* name() { return "active_subroutine_max_length"; }
              static ::std::uint64_t const value = GL_ACTIVE_SUBROUTINE_MAX_LENGTH;
          };
          struct gl_active_subroutine_uniforms: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_uniforms > {
              static inline char const* name() { return "active_subroutine_uniforms"; }
              static ::std::uint64_t const value = GL_ACTIVE_SUBROUTINE_UNIFORMS;
          };
          struct gl_active_subroutine_uniform_locations: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_uniform_locations > {
              static inline char const* name() { return "active_subroutine_uniform_locations"; }
              static ::std::uint64_t const value = GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS;
          };
          struct gl_active_subroutine_uniform_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_uniform_max_length > {
              static inline char const* name() { return "active_subroutine_uniform_max_length"; }
              static ::std::uint64_t const value = GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH;
          };
          struct gl_arb_shader_subroutine: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_subroutine > {
              static inline char const* name() { return "arb_shader_subroutine"; }
              static ::std::uint64_t const value = GL_ARB_shader_subroutine;
          };
          struct gl_compatible_subroutines: public ::gtulu::internal::constant::gl_constant< gl_compatible_subroutines > {
              static inline char const* name() { return "compatible_subroutines"; }
              static ::std::uint64_t const value = GL_COMPATIBLE_SUBROUTINES;
          };
          struct gl_max_subroutines: public ::gtulu::internal::constant::gl_constant< gl_max_subroutines > {
              static inline char const* name() { return "max_subroutines"; }
              static ::std::uint64_t const value = GL_MAX_SUBROUTINES;
          };
          struct gl_max_subroutine_uniform_locations: public ::gtulu::internal::constant::gl_constant< gl_max_subroutine_uniform_locations > {
              static inline char const* name() { return "max_subroutine_uniform_locations"; }
              static ::std::uint64_t const value = GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS;
          };
          struct gl_num_compatible_subroutines: public ::gtulu::internal::constant::gl_constant< gl_num_compatible_subroutines > {
              static inline char const* name() { return "num_compatible_subroutines"; }
              static ::std::uint64_t const value = GL_NUM_COMPATIBLE_SUBROUTINES;
          };
        } // namespace cst
      } // namespace shader_subroutine
      namespace shading_language_420pack {
        namespace cst {
          struct gl_arb_shading_language_420pack: public ::gtulu::internal::constant::gl_constant< gl_arb_shading_language_420pack > {
              static inline char const* name() { return "arb_shading_language_420pack"; }
              static ::std::uint64_t const value = GL_ARB_shading_language_420pack;
          };
        } // namespace cst
      } // namespace shading_language_420pack
      namespace shading_language_include {
        namespace cst {
          struct gl_arb_shading_language_include: public ::gtulu::internal::constant::gl_constant< gl_arb_shading_language_include > {
              static inline char const* name() { return "arb_shading_language_include"; }
              static ::std::uint64_t const value = GL_ARB_shading_language_include;
          };
          struct gl_named_string_length_arb: public ::gtulu::internal::constant::gl_constant< gl_named_string_length_arb > {
              static inline char const* name() { return "named_string_length_arb"; }
              static ::std::uint64_t const value = GL_NAMED_STRING_LENGTH_ARB;
          };
          struct gl_named_string_type_arb: public ::gtulu::internal::constant::gl_constant< gl_named_string_type_arb > {
              static inline char const* name() { return "named_string_type_arb"; }
              static ::std::uint64_t const value = GL_NAMED_STRING_TYPE_ARB;
          };
          struct gl_shader_include_arb: public ::gtulu::internal::constant::gl_constant< gl_shader_include_arb > {
              static inline char const* name() { return "shader_include_arb"; }
              static ::std::uint64_t const value = GL_SHADER_INCLUDE_ARB;
          };
        } // namespace cst
      } // namespace shading_language_include
      namespace shading_language_packing {
        namespace cst {
          struct gl_arb_shading_language_packing: public ::gtulu::internal::constant::gl_constant< gl_arb_shading_language_packing > {
              static inline char const* name() { return "arb_shading_language_packing"; }
              static ::std::uint64_t const value = GL_ARB_shading_language_packing;
          };
        } // namespace cst
      } // namespace shading_language_packing
      namespace sync {
        namespace cst {
          struct gl_already_signaled: public ::gtulu::internal::constant::gl_constant< gl_already_signaled > {
              static inline char const* name() { return "already_signaled"; }
              static ::std::uint64_t const value = GL_ALREADY_SIGNALED;
          };
          struct gl_arb_sync: public ::gtulu::internal::constant::gl_constant< gl_arb_sync > {
              static inline char const* name() { return "arb_sync"; }
              static ::std::uint64_t const value = GL_ARB_sync;
          };
          struct gl_condition_satisfied: public ::gtulu::internal::constant::gl_constant< gl_condition_satisfied > {
              static inline char const* name() { return "condition_satisfied"; }
              static ::std::uint64_t const value = GL_CONDITION_SATISFIED;
          };
          struct gl_max_server_wait_timeout: public ::gtulu::internal::constant::gl_constant< gl_max_server_wait_timeout > {
              static inline char const* name() { return "max_server_wait_timeout"; }
              static ::std::uint64_t const value = GL_MAX_SERVER_WAIT_TIMEOUT;
          };
          struct gl_object_type: public ::gtulu::internal::constant::gl_constant< gl_object_type > {
              static inline char const* name() { return "object_type"; }
              static ::std::uint64_t const value = GL_OBJECT_TYPE;
          };
          struct gl_signaled: public ::gtulu::internal::constant::gl_constant< gl_signaled > {
              static inline char const* name() { return "signaled"; }
              static ::std::uint64_t const value = GL_SIGNALED;
          };
          struct gl_sync_condition: public ::gtulu::internal::constant::gl_constant< gl_sync_condition > {
              static inline char const* name() { return "sync_condition"; }
              static ::std::uint64_t const value = GL_SYNC_CONDITION;
          };
          struct gl_sync_fence: public ::gtulu::internal::constant::gl_constant< gl_sync_fence > {
              static inline char const* name() { return "sync_fence"; }
              static ::std::uint64_t const value = GL_SYNC_FENCE;
          };
          struct gl_sync_flags: public ::gtulu::internal::constant::gl_constant< gl_sync_flags > {
              static inline char const* name() { return "sync_flags"; }
              static ::std::uint64_t const value = GL_SYNC_FLAGS;
          };
          struct gl_sync_flush_commands_bit: public ::gtulu::internal::constant::gl_constant< gl_sync_flush_commands_bit > {
              static inline char const* name() { return "sync_flush_commands_bit"; }
              static ::std::uint64_t const value = GL_SYNC_FLUSH_COMMANDS_BIT;
          };
          struct gl_sync_gpu_commands_complete: public ::gtulu::internal::constant::gl_constant< gl_sync_gpu_commands_complete > {
              static inline char const* name() { return "sync_gpu_commands_complete"; }
              static ::std::uint64_t const value = GL_SYNC_GPU_COMMANDS_COMPLETE;
          };
          struct gl_sync_status: public ::gtulu::internal::constant::gl_constant< gl_sync_status > {
              static inline char const* name() { return "sync_status"; }
              static ::std::uint64_t const value = GL_SYNC_STATUS;
          };
          struct gl_timeout_expired: public ::gtulu::internal::constant::gl_constant< gl_timeout_expired > {
              static inline char const* name() { return "timeout_expired"; }
              static ::std::uint64_t const value = GL_TIMEOUT_EXPIRED;
          };
          struct gl_timeout_ignored: public ::gtulu::internal::constant::gl_constant< gl_timeout_ignored > {
              static inline char const* name() { return "timeout_ignored"; }
              static ::std::uint64_t const value = GL_TIMEOUT_IGNORED;
          };
          struct gl_unsignaled: public ::gtulu::internal::constant::gl_constant< gl_unsignaled > {
              static inline char const* name() { return "unsignaled"; }
              static ::std::uint64_t const value = GL_UNSIGNALED;
          };
          struct gl_wait_failed: public ::gtulu::internal::constant::gl_constant< gl_wait_failed > {
              static inline char const* name() { return "wait_failed"; }
              static ::std::uint64_t const value = GL_WAIT_FAILED;
          };
        } // namespace cst
      } // namespace sync
      namespace tessellation_shader {
        namespace cst {
          struct gl_arb_tessellation_shader: public ::gtulu::internal::constant::gl_constant< gl_arb_tessellation_shader > {
              static inline char const* name() { return "arb_tessellation_shader"; }
              static ::std::uint64_t const value = GL_ARB_tessellation_shader;
          };
          struct gl_fractional_even: public ::gtulu::internal::constant::gl_constant< gl_fractional_even > {
              static inline char const* name() { return "fractional_even"; }
              static ::std::uint64_t const value = GL_FRACTIONAL_EVEN;
          };
          struct gl_fractional_odd: public ::gtulu::internal::constant::gl_constant< gl_fractional_odd > {
              static inline char const* name() { return "fractional_odd"; }
              static ::std::uint64_t const value = GL_FRACTIONAL_ODD;
          };
          struct gl_isolines: public ::gtulu::internal::constant::gl_constant< gl_isolines > {
              static inline char const* name() { return "isolines"; }
              static ::std::uint64_t const value = GL_ISOLINES;
          };
          struct gl_max_combined_tess_control_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_tess_control_uniform_components > {
              static inline char const* name() { return "max_combined_tess_control_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
          };
          struct gl_max_combined_tess_evaluation_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_tess_evaluation_uniform_components > {
              static inline char const* name() { return "max_combined_tess_evaluation_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
          };
          struct gl_max_patch_vertices: public ::gtulu::internal::constant::gl_constant< gl_max_patch_vertices > {
              static inline char const* name() { return "max_patch_vertices"; }
              static ::std::uint64_t const value = GL_MAX_PATCH_VERTICES;
          };
          struct gl_max_tess_control_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_input_components > {
              static inline char const* name() { return "max_tess_control_input_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
          };
          struct gl_max_tess_control_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_output_components > {
              static inline char const* name() { return "max_tess_control_output_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
          };
          struct gl_max_tess_control_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_texture_image_units > {
              static inline char const* name() { return "max_tess_control_texture_image_units"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_tess_control_total_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_total_output_components > {
              static inline char const* name() { return "max_tess_control_total_output_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
          };
          struct gl_max_tess_control_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_uniform_blocks > {
              static inline char const* name() { return "max_tess_control_uniform_blocks"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
          };
          struct gl_max_tess_control_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_uniform_components > {
              static inline char const* name() { return "max_tess_control_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
          };
          struct gl_max_tess_evaluation_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_input_components > {
              static inline char const* name() { return "max_tess_evaluation_input_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
          };
          struct gl_max_tess_evaluation_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_output_components > {
              static inline char const* name() { return "max_tess_evaluation_output_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
          };
          struct gl_max_tess_evaluation_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_texture_image_units > {
              static inline char const* name() { return "max_tess_evaluation_texture_image_units"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_tess_evaluation_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_uniform_blocks > {
              static inline char const* name() { return "max_tess_evaluation_uniform_blocks"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
          };
          struct gl_max_tess_evaluation_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_uniform_components > {
              static inline char const* name() { return "max_tess_evaluation_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
          };
          struct gl_max_tess_gen_level: public ::gtulu::internal::constant::gl_constant< gl_max_tess_gen_level > {
              static inline char const* name() { return "max_tess_gen_level"; }
              static ::std::uint64_t const value = GL_MAX_TESS_GEN_LEVEL;
          };
          struct gl_max_tess_patch_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_patch_components > {
              static inline char const* name() { return "max_tess_patch_components"; }
              static ::std::uint64_t const value = GL_MAX_TESS_PATCH_COMPONENTS;
          };
          struct gl_patches: public ::gtulu::internal::constant::gl_constant< gl_patches > {
              static inline char const* name() { return "patches"; }
              static ::std::uint64_t const value = GL_PATCHES;
          };
          struct gl_patch_default_inner_level: public ::gtulu::internal::constant::gl_constant< gl_patch_default_inner_level > {
              static inline char const* name() { return "patch_default_inner_level"; }
              static ::std::uint64_t const value = GL_PATCH_DEFAULT_INNER_LEVEL;
          };
          struct gl_patch_default_outer_level: public ::gtulu::internal::constant::gl_constant< gl_patch_default_outer_level > {
              static inline char const* name() { return "patch_default_outer_level"; }
              static ::std::uint64_t const value = GL_PATCH_DEFAULT_OUTER_LEVEL;
          };
          struct gl_patch_vertices: public ::gtulu::internal::constant::gl_constant< gl_patch_vertices > {
              static inline char const* name() { return "patch_vertices"; }
              static ::std::uint64_t const value = GL_PATCH_VERTICES;
          };
          struct gl_tess_control_output_vertices: public ::gtulu::internal::constant::gl_constant< gl_tess_control_output_vertices > {
              static inline char const* name() { return "tess_control_output_vertices"; }
              static ::std::uint64_t const value = GL_TESS_CONTROL_OUTPUT_VERTICES;
          };
          struct gl_tess_control_shader: public ::gtulu::internal::constant::gl_constant< gl_tess_control_shader > {
              static inline char const* name() { return "tess_control_shader"; }
              static ::std::uint64_t const value = GL_TESS_CONTROL_SHADER;
          };
          struct gl_tess_evaluation_shader: public ::gtulu::internal::constant::gl_constant< gl_tess_evaluation_shader > {
              static inline char const* name() { return "tess_evaluation_shader"; }
              static ::std::uint64_t const value = GL_TESS_EVALUATION_SHADER;
          };
          struct gl_tess_gen_mode: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_mode > {
              static inline char const* name() { return "tess_gen_mode"; }
              static ::std::uint64_t const value = GL_TESS_GEN_MODE;
          };
          struct gl_tess_gen_point_mode: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_point_mode > {
              static inline char const* name() { return "tess_gen_point_mode"; }
              static ::std::uint64_t const value = GL_TESS_GEN_POINT_MODE;
          };
          struct gl_tess_gen_spacing: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_spacing > {
              static inline char const* name() { return "tess_gen_spacing"; }
              static ::std::uint64_t const value = GL_TESS_GEN_SPACING;
          };
          struct gl_tess_gen_vertex_order: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_vertex_order > {
              static inline char const* name() { return "tess_gen_vertex_order"; }
              static ::std::uint64_t const value = GL_TESS_GEN_VERTEX_ORDER;
          };
          struct gl_uniform_block_referenced_by_tess_control_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_tess_control_shader > {
              static inline char const* name() { return "uniform_block_referenced_by_tess_control_shader"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER;
          };
          struct gl_uniform_block_referenced_by_tess_evaluation_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_tess_evaluation_shader > {
              static inline char const* name() { return "uniform_block_referenced_by_tess_evaluation_shader"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER;
          };
        } // namespace cst
      } // namespace tessellation_shader
      namespace texture_buffer_object_rgb32 {
        namespace cst {
          struct gl_arb_texture_buffer_object_rgb32: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_buffer_object_rgb32 > {
              static inline char const* name() { return "arb_texture_buffer_object_rgb32"; }
              static ::std::uint64_t const value = GL_ARB_texture_buffer_object_rgb32;
          };
        } // namespace cst
      } // namespace texture_buffer_object_rgb32
      namespace texture_compression_bptc {
        namespace cst {
          struct gl_arb_texture_compression_bptc: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_compression_bptc > {
              static inline char const* name() { return "arb_texture_compression_bptc"; }
              static ::std::uint64_t const value = GL_ARB_texture_compression_bptc;
          };
          struct gl_compressed_rgba_bptc_unorm_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgba_bptc_unorm_arb > {
              static inline char const* name() { return "compressed_rgba_bptc_unorm_arb"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RGBA_BPTC_UNORM_ARB;
          };
          struct gl_compressed_rgb_bptc_signed_float_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgb_bptc_signed_float_arb > {
              static inline char const* name() { return "compressed_rgb_bptc_signed_float_arb"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB;
          };
          struct gl_compressed_rgb_bptc_unsigned_float_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgb_bptc_unsigned_float_arb > {
              static inline char const* name() { return "compressed_rgb_bptc_unsigned_float_arb"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB;
          };
          struct gl_compressed_srgb_alpha_bptc_unorm_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_srgb_alpha_bptc_unorm_arb > {
              static inline char const* name() { return "compressed_srgb_alpha_bptc_unorm_arb"; }
              static ::std::uint64_t const value = GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB;
          };
        } // namespace cst
      } // namespace texture_compression_bptc
      namespace texture_compression_rgtc {
        namespace cst {
          struct gl_arb_texture_compression_rgtc: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_compression_rgtc > {
              static inline char const* name() { return "arb_texture_compression_rgtc"; }
              static ::std::uint64_t const value = GL_ARB_texture_compression_rgtc;
          };
          struct gl_compressed_red_rgtc1: public ::gtulu::internal::constant::gl_constant< gl_compressed_red_rgtc1 > {
              static inline char const* name() { return "compressed_red_rgtc1"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RED_RGTC1;
          };
          struct gl_compressed_rg_rgtc2: public ::gtulu::internal::constant::gl_constant< gl_compressed_rg_rgtc2 > {
              static inline char const* name() { return "compressed_rg_rgtc2"; }
              static ::std::uint64_t const value = GL_COMPRESSED_RG_RGTC2;
          };
          struct gl_compressed_signed_red_rgtc1: public ::gtulu::internal::constant::gl_constant< gl_compressed_signed_red_rgtc1 > {
              static inline char const* name() { return "compressed_signed_red_rgtc1"; }
              static ::std::uint64_t const value = GL_COMPRESSED_SIGNED_RED_RGTC1;
          };
          struct gl_compressed_signed_rg_rgtc2: public ::gtulu::internal::constant::gl_constant< gl_compressed_signed_rg_rgtc2 > {
              static inline char const* name() { return "compressed_signed_rg_rgtc2"; }
              static ::std::uint64_t const value = GL_COMPRESSED_SIGNED_RG_RGTC2;
          };
        } // namespace cst
      } // namespace texture_compression_rgtc
      namespace texture_cube_map_array {
        namespace cst {
          struct gl_arb_texture_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_cube_map_array > {
              static inline char const* name() { return "arb_texture_cube_map_array"; }
              static ::std::uint64_t const value = GL_ARB_texture_cube_map_array;
          };
          struct gl_int_sampler_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_cube_map_array_arb > {
              static inline char const* name() { return "int_sampler_cube_map_array_arb"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_proxy_texture_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_cube_map_array_arb > {
              static inline char const* name() { return "proxy_texture_cube_map_array_arb"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_sampler_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array_arb > {
              static inline char const* name() { return "sampler_cube_map_array_arb"; }
              static ::std::uint64_t const value = GL_SAMPLER_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_sampler_cube_map_array_shadow_arb: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array_shadow_arb > {
              static inline char const* name() { return "sampler_cube_map_array_shadow_arb"; }
              static ::std::uint64_t const value = GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB;
          };
          struct gl_texture_binding_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_cube_map_array_arb > {
              static inline char const* name() { return "texture_binding_cube_map_array_arb"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_texture_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_array_arb > {
              static inline char const* name() { return "texture_cube_map_array_arb"; }
              static ::std::uint64_t const value = GL_TEXTURE_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_unsigned_int_sampler_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_cube_map_array_arb > {
              static inline char const* name() { return "unsigned_int_sampler_cube_map_array_arb"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB;
          };
        } // namespace cst
      } // namespace texture_cube_map_array
      namespace texture_gather {
        namespace cst {
          struct gl_arb_texture_gather: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_gather > {
              static inline char const* name() { return "arb_texture_gather"; }
              static ::std::uint64_t const value = GL_ARB_texture_gather;
          };
          struct gl_max_program_texture_gather_offset_arb: public ::gtulu::internal::constant::gl_constant< gl_max_program_texture_gather_offset_arb > {
              static inline char const* name() { return "max_program_texture_gather_offset_arb"; }
              static ::std::uint64_t const value = GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB;
          };
          struct gl_min_program_texture_gather_offset_arb: public ::gtulu::internal::constant::gl_constant< gl_min_program_texture_gather_offset_arb > {
              static inline char const* name() { return "min_program_texture_gather_offset_arb"; }
              static ::std::uint64_t const value = GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB;
          };
        } // namespace cst
      } // namespace texture_gather
      namespace texture_multisample {
        namespace cst {
          struct gl_arb_texture_multisample: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_multisample > {
              static inline char const* name() { return "arb_texture_multisample"; }
              static ::std::uint64_t const value = GL_ARB_texture_multisample;
          };
          struct gl_int_sampler_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_multisample > {
              static inline char const* name() { return "int_sampler_2d_multisample"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_2D_MULTISAMPLE;
          };
          struct gl_int_sampler_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_multisample_array > {
              static inline char const* name() { return "int_sampler_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_max_color_texture_samples: public ::gtulu::internal::constant::gl_constant< gl_max_color_texture_samples > {
              static inline char const* name() { return "max_color_texture_samples"; }
              static ::std::uint64_t const value = GL_MAX_COLOR_TEXTURE_SAMPLES;
          };
          struct gl_max_depth_texture_samples: public ::gtulu::internal::constant::gl_constant< gl_max_depth_texture_samples > {
              static inline char const* name() { return "max_depth_texture_samples"; }
              static ::std::uint64_t const value = GL_MAX_DEPTH_TEXTURE_SAMPLES;
          };
          struct gl_max_integer_samples: public ::gtulu::internal::constant::gl_constant< gl_max_integer_samples > {
              static inline char const* name() { return "max_integer_samples"; }
              static ::std::uint64_t const value = GL_MAX_INTEGER_SAMPLES;
          };
          struct gl_max_sample_mask_words: public ::gtulu::internal::constant::gl_constant< gl_max_sample_mask_words > {
              static inline char const* name() { return "max_sample_mask_words"; }
              static ::std::uint64_t const value = GL_MAX_SAMPLE_MASK_WORDS;
          };
          struct gl_proxy_texture_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d_multisample > {
              static inline char const* name() { return "proxy_texture_2d_multisample"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_2D_MULTISAMPLE;
          };
          struct gl_proxy_texture_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d_multisample_array > {
              static inline char const* name() { return "proxy_texture_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_sampler_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_multisample > {
              static inline char const* name() { return "sampler_2d_multisample"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D_MULTISAMPLE;
          };
          struct gl_sampler_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_multisample_array > {
              static inline char const* name() { return "sampler_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_sample_mask: public ::gtulu::internal::constant::gl_constant< gl_sample_mask > {
              static inline char const* name() { return "sample_mask"; }
              static ::std::uint64_t const value = GL_SAMPLE_MASK;
          };
          struct gl_sample_mask_value: public ::gtulu::internal::constant::gl_constant< gl_sample_mask_value > {
              static inline char const* name() { return "sample_mask_value"; }
              static ::std::uint64_t const value = GL_SAMPLE_MASK_VALUE;
          };
          struct gl_sample_position: public ::gtulu::internal::constant::gl_constant< gl_sample_position > {
              static inline char const* name() { return "sample_position"; }
              static ::std::uint64_t const value = GL_SAMPLE_POSITION;
          };
          struct gl_texture_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_texture_2d_multisample > {
              static inline char const* name() { return "texture_2d_multisample"; }
              static ::std::uint64_t const value = GL_TEXTURE_2D_MULTISAMPLE;
          };
          struct gl_texture_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_texture_2d_multisample_array > {
              static inline char const* name() { return "texture_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_texture_binding_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d_multisample > {
              static inline char const* name() { return "texture_binding_2d_multisample"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_2D_MULTISAMPLE;
          };
          struct gl_texture_binding_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d_multisample_array > {
              static inline char const* name() { return "texture_binding_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_texture_fixed_sample_locations: public ::gtulu::internal::constant::gl_constant< gl_texture_fixed_sample_locations > {
              static inline char const* name() { return "texture_fixed_sample_locations"; }
              static ::std::uint64_t const value = GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
          };
          struct gl_texture_samples: public ::gtulu::internal::constant::gl_constant< gl_texture_samples > {
              static inline char const* name() { return "texture_samples"; }
              static ::std::uint64_t const value = GL_TEXTURE_SAMPLES;
          };
          struct gl_unsigned_int_sampler_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_multisample > {
              static inline char const* name() { return "unsigned_int_sampler_2d_multisample"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
          };
          struct gl_unsigned_int_sampler_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_multisample_array > {
              static inline char const* name() { return "unsigned_int_sampler_2d_multisample_array"; }
              static ::std::uint64_t const value = GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
          };
        } // namespace cst
      } // namespace texture_multisample
      namespace texture_query_lod {
        namespace cst {
          struct gl_arb_texture_query_lod: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_query_lod > {
              static inline char const* name() { return "arb_texture_query_lod"; }
              static ::std::uint64_t const value = GL_ARB_texture_query_lod;
          };
        } // namespace cst
      } // namespace texture_query_lod
      namespace texture_rg {
        namespace cst {
          struct gl_arb_texture_rg: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_rg > {
              static inline char const* name() { return "arb_texture_rg"; }
              static ::std::uint64_t const value = GL_ARB_texture_rg;
          };
          struct gl_r16: public ::gtulu::internal::constant::gl_constant< gl_r16 > {
              static inline char const* name() { return "r16"; }
              static ::std::uint64_t const value = GL_R16;
          };
          struct gl_r16f: public ::gtulu::internal::constant::gl_constant< gl_r16f > {
              static inline char const* name() { return "r16f"; }
              static ::std::uint64_t const value = GL_R16F;
          };
          struct gl_r16i: public ::gtulu::internal::constant::gl_constant< gl_r16i > {
              static inline char const* name() { return "r16i"; }
              static ::std::uint64_t const value = GL_R16I;
          };
          struct gl_r16ui: public ::gtulu::internal::constant::gl_constant< gl_r16ui > {
              static inline char const* name() { return "r16ui"; }
              static ::std::uint64_t const value = GL_R16UI;
          };
          struct gl_r32f: public ::gtulu::internal::constant::gl_constant< gl_r32f > {
              static inline char const* name() { return "r32f"; }
              static ::std::uint64_t const value = GL_R32F;
          };
          struct gl_r32i: public ::gtulu::internal::constant::gl_constant< gl_r32i > {
              static inline char const* name() { return "r32i"; }
              static ::std::uint64_t const value = GL_R32I;
          };
          struct gl_r32ui: public ::gtulu::internal::constant::gl_constant< gl_r32ui > {
              static inline char const* name() { return "r32ui"; }
              static ::std::uint64_t const value = GL_R32UI;
          };
          struct gl_r8: public ::gtulu::internal::constant::gl_constant< gl_r8 > {
              static inline char const* name() { return "r8"; }
              static ::std::uint64_t const value = GL_R8;
          };
          struct gl_r8i: public ::gtulu::internal::constant::gl_constant< gl_r8i > {
              static inline char const* name() { return "r8i"; }
              static ::std::uint64_t const value = GL_R8I;
          };
          struct gl_r8ui: public ::gtulu::internal::constant::gl_constant< gl_r8ui > {
              static inline char const* name() { return "r8ui"; }
              static ::std::uint64_t const value = GL_R8UI;
          };
          struct gl_rg: public ::gtulu::internal::constant::gl_constant< gl_rg > {
              static inline char const* name() { return "rg"; }
              static ::std::uint64_t const value = GL_RG;
          };
          struct gl_rg16: public ::gtulu::internal::constant::gl_constant< gl_rg16 > {
              static inline char const* name() { return "rg16"; }
              static ::std::uint64_t const value = GL_RG16;
          };
          struct gl_rg16f: public ::gtulu::internal::constant::gl_constant< gl_rg16f > {
              static inline char const* name() { return "rg16f"; }
              static ::std::uint64_t const value = GL_RG16F;
          };
          struct gl_rg16i: public ::gtulu::internal::constant::gl_constant< gl_rg16i > {
              static inline char const* name() { return "rg16i"; }
              static ::std::uint64_t const value = GL_RG16I;
          };
          struct gl_rg16ui: public ::gtulu::internal::constant::gl_constant< gl_rg16ui > {
              static inline char const* name() { return "rg16ui"; }
              static ::std::uint64_t const value = GL_RG16UI;
          };
          struct gl_rg32f: public ::gtulu::internal::constant::gl_constant< gl_rg32f > {
              static inline char const* name() { return "rg32f"; }
              static ::std::uint64_t const value = GL_RG32F;
          };
          struct gl_rg32i: public ::gtulu::internal::constant::gl_constant< gl_rg32i > {
              static inline char const* name() { return "rg32i"; }
              static ::std::uint64_t const value = GL_RG32I;
          };
          struct gl_rg32ui: public ::gtulu::internal::constant::gl_constant< gl_rg32ui > {
              static inline char const* name() { return "rg32ui"; }
              static ::std::uint64_t const value = GL_RG32UI;
          };
          struct gl_rg8: public ::gtulu::internal::constant::gl_constant< gl_rg8 > {
              static inline char const* name() { return "rg8"; }
              static ::std::uint64_t const value = GL_RG8;
          };
          struct gl_rg8i: public ::gtulu::internal::constant::gl_constant< gl_rg8i > {
              static inline char const* name() { return "rg8i"; }
              static ::std::uint64_t const value = GL_RG8I;
          };
          struct gl_rg8ui: public ::gtulu::internal::constant::gl_constant< gl_rg8ui > {
              static inline char const* name() { return "rg8ui"; }
              static ::std::uint64_t const value = GL_RG8UI;
          };
          struct gl_rg_integer: public ::gtulu::internal::constant::gl_constant< gl_rg_integer > {
              static inline char const* name() { return "rg_integer"; }
              static ::std::uint64_t const value = GL_RG_INTEGER;
          };
        } // namespace cst
      } // namespace texture_rg
      namespace texture_rgb10_a2ui {
        namespace cst {
          struct gl_arb_texture_rgb10_a2ui: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_rgb10_a2ui > {
              static inline char const* name() { return "arb_texture_rgb10_a2ui"; }
              static ::std::uint64_t const value = GL_ARB_texture_rgb10_a2ui;
          };
          struct gl_rgb10_a2ui: public ::gtulu::internal::constant::gl_constant< gl_rgb10_a2ui > {
              static inline char const* name() { return "rgb10_a2ui"; }
              static ::std::uint64_t const value = GL_RGB10_A2UI;
          };
        } // namespace cst
      } // namespace texture_rgb10_a2ui
      namespace texture_storage {
        namespace cst {
          struct gl_arb_texture_storage: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_storage > {
              static inline char const* name() { return "arb_texture_storage"; }
              static ::std::uint64_t const value = GL_ARB_texture_storage;
          };
          struct gl_texture_immutable_format: public ::gtulu::internal::constant::gl_constant< gl_texture_immutable_format > {
              static inline char const* name() { return "texture_immutable_format"; }
              static ::std::uint64_t const value = GL_TEXTURE_IMMUTABLE_FORMAT;
          };
        } // namespace cst
      } // namespace texture_storage
      namespace texture_swizzle {
        namespace cst {
          struct gl_arb_texture_swizzle: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_swizzle > {
              static inline char const* name() { return "arb_texture_swizzle"; }
              static ::std::uint64_t const value = GL_ARB_texture_swizzle;
          };
          struct gl_texture_swizzle_a: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_a > {
              static inline char const* name() { return "texture_swizzle_a"; }
              static ::std::uint64_t const value = GL_TEXTURE_SWIZZLE_A;
          };
          struct gl_texture_swizzle_b: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_b > {
              static inline char const* name() { return "texture_swizzle_b"; }
              static ::std::uint64_t const value = GL_TEXTURE_SWIZZLE_B;
          };
          struct gl_texture_swizzle_g: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_g > {
              static inline char const* name() { return "texture_swizzle_g"; }
              static ::std::uint64_t const value = GL_TEXTURE_SWIZZLE_G;
          };
          struct gl_texture_swizzle_r: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_r > {
              static inline char const* name() { return "texture_swizzle_r"; }
              static ::std::uint64_t const value = GL_TEXTURE_SWIZZLE_R;
          };
          struct gl_texture_swizzle_rgba: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_rgba > {
              static inline char const* name() { return "texture_swizzle_rgba"; }
              static ::std::uint64_t const value = GL_TEXTURE_SWIZZLE_RGBA;
          };
        } // namespace cst
      } // namespace texture_swizzle
      namespace timer_query {
        namespace cst {
          struct gl_arb_timer_query: public ::gtulu::internal::constant::gl_constant< gl_arb_timer_query > {
              static inline char const* name() { return "arb_timer_query"; }
              static ::std::uint64_t const value = GL_ARB_timer_query;
          };
          struct gl_timestamp: public ::gtulu::internal::constant::gl_constant< gl_timestamp > {
              static inline char const* name() { return "timestamp"; }
              static ::std::uint64_t const value = GL_TIMESTAMP;
          };
          struct gl_time_elapsed: public ::gtulu::internal::constant::gl_constant< gl_time_elapsed > {
              static inline char const* name() { return "time_elapsed"; }
              static ::std::uint64_t const value = GL_TIME_ELAPSED;
          };
        } // namespace cst
      } // namespace timer_query
      namespace transform_feedback2 {
        namespace cst {
          struct gl_arb_transform_feedback2: public ::gtulu::internal::constant::gl_constant< gl_arb_transform_feedback2 > {
              static inline char const* name() { return "arb_transform_feedback2"; }
              static ::std::uint64_t const value = GL_ARB_transform_feedback2;
          };
          struct gl_transform_feedback: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback > {
              static inline char const* name() { return "transform_feedback"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK;
          };
          struct gl_transform_feedback_binding: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_binding > {
              static inline char const* name() { return "transform_feedback_binding"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BINDING;
          };
          struct gl_transform_feedback_buffer_active: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_active > {
              static inline char const* name() { return "transform_feedback_buffer_active"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE;
          };
          struct gl_transform_feedback_buffer_paused: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_paused > {
              static inline char const* name() { return "transform_feedback_buffer_paused"; }
              static ::std::uint64_t const value = GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED;
          };
        } // namespace cst
      } // namespace transform_feedback2
      namespace transform_feedback3 {
        namespace cst {
          struct gl_arb_transform_feedback3: public ::gtulu::internal::constant::gl_constant< gl_arb_transform_feedback3 > {
              static inline char const* name() { return "arb_transform_feedback3"; }
              static ::std::uint64_t const value = GL_ARB_transform_feedback3;
          };
          struct gl_max_transform_feedback_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_buffers > {
              static inline char const* name() { return "max_transform_feedback_buffers"; }
              static ::std::uint64_t const value = GL_MAX_TRANSFORM_FEEDBACK_BUFFERS;
          };
          struct gl_max_vertex_streams: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_streams > {
              static inline char const* name() { return "max_vertex_streams"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_STREAMS;
          };
        } // namespace cst
      } // namespace transform_feedback3
      namespace transform_feedback_instanced {
        namespace cst {
          struct gl_arb_transform_feedback_instanced: public ::gtulu::internal::constant::gl_constant< gl_arb_transform_feedback_instanced > {
              static inline char const* name() { return "arb_transform_feedback_instanced"; }
              static ::std::uint64_t const value = GL_ARB_transform_feedback_instanced;
          };
        } // namespace cst
      } // namespace transform_feedback_instanced
      namespace uniform_buffer_object {
        namespace cst {
          struct gl_active_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_active_uniform_blocks > {
              static inline char const* name() { return "active_uniform_blocks"; }
              static ::std::uint64_t const value = GL_ACTIVE_UNIFORM_BLOCKS;
          };
          struct gl_active_uniform_block_max_name_length: public ::gtulu::internal::constant::gl_constant< gl_active_uniform_block_max_name_length > {
              static inline char const* name() { return "active_uniform_block_max_name_length"; }
              static ::std::uint64_t const value = GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
          };
          struct gl_arb_uniform_buffer_object: public ::gtulu::internal::constant::gl_constant< gl_arb_uniform_buffer_object > {
              static inline char const* name() { return "arb_uniform_buffer_object"; }
              static ::std::uint64_t const value = GL_ARB_uniform_buffer_object;
          };
          struct gl_invalid_index: public ::gtulu::internal::constant::gl_constant< gl_invalid_index > {
              static inline char const* name() { return "invalid_index"; }
              static ::std::uint64_t const value = GL_INVALID_INDEX;
          };
          struct gl_max_combined_fragment_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_fragment_uniform_components > {
              static inline char const* name() { return "max_combined_fragment_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
          };
          struct gl_max_combined_geometry_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_geometry_uniform_components > {
              static inline char const* name() { return "max_combined_geometry_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
          };
          struct gl_max_combined_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_combined_uniform_blocks > {
              static inline char const* name() { return "max_combined_uniform_blocks"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_UNIFORM_BLOCKS;
          };
          struct gl_max_combined_vertex_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_vertex_uniform_components > {
              static inline char const* name() { return "max_combined_vertex_uniform_components"; }
              static ::std::uint64_t const value = GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
          };
          struct gl_max_fragment_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_uniform_blocks > {
              static inline char const* name() { return "max_fragment_uniform_blocks"; }
              static ::std::uint64_t const value = GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
          };
          struct gl_max_geometry_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_uniform_blocks > {
              static inline char const* name() { return "max_geometry_uniform_blocks"; }
              static ::std::uint64_t const value = GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
          };
          struct gl_max_uniform_block_size: public ::gtulu::internal::constant::gl_constant< gl_max_uniform_block_size > {
              static inline char const* name() { return "max_uniform_block_size"; }
              static ::std::uint64_t const value = GL_MAX_UNIFORM_BLOCK_SIZE;
          };
          struct gl_max_uniform_buffer_bindings: public ::gtulu::internal::constant::gl_constant< gl_max_uniform_buffer_bindings > {
              static inline char const* name() { return "max_uniform_buffer_bindings"; }
              static ::std::uint64_t const value = GL_MAX_UNIFORM_BUFFER_BINDINGS;
          };
          struct gl_max_vertex_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_uniform_blocks > {
              static inline char const* name() { return "max_vertex_uniform_blocks"; }
              static ::std::uint64_t const value = GL_MAX_VERTEX_UNIFORM_BLOCKS;
          };
          struct gl_uniform_array_stride: public ::gtulu::internal::constant::gl_constant< gl_uniform_array_stride > {
              static inline char const* name() { return "uniform_array_stride"; }
              static ::std::uint64_t const value = GL_UNIFORM_ARRAY_STRIDE;
          };
          struct gl_uniform_block_active_uniforms: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_active_uniforms > {
              static inline char const* name() { return "uniform_block_active_uniforms"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
          };
          struct gl_uniform_block_active_uniform_indices: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_active_uniform_indices > {
              static inline char const* name() { return "uniform_block_active_uniform_indices"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
          };
          struct gl_uniform_block_binding: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_binding > {
              static inline char const* name() { return "uniform_block_binding"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_BINDING;
          };
          struct gl_uniform_block_data_size: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_data_size > {
              static inline char const* name() { return "uniform_block_data_size"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_DATA_SIZE;
          };
          struct gl_uniform_block_index: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_index > {
              static inline char const* name() { return "uniform_block_index"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_INDEX;
          };
          struct gl_uniform_block_name_length: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_name_length > {
              static inline char const* name() { return "uniform_block_name_length"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_NAME_LENGTH;
          };
          struct gl_uniform_block_referenced_by_fragment_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_fragment_shader > {
              static inline char const* name() { return "uniform_block_referenced_by_fragment_shader"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
          };
          struct gl_uniform_block_referenced_by_geometry_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_geometry_shader > {
              static inline char const* name() { return "uniform_block_referenced_by_geometry_shader"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER;
          };
          struct gl_uniform_block_referenced_by_vertex_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_vertex_shader > {
              static inline char const* name() { return "uniform_block_referenced_by_vertex_shader"; }
              static ::std::uint64_t const value = GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
          };
          struct gl_uniform_buffer: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer > {
              static inline char const* name() { return "uniform_buffer"; }
              static ::std::uint64_t const value = GL_UNIFORM_BUFFER;
          };
          struct gl_uniform_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_binding > {
              static inline char const* name() { return "uniform_buffer_binding"; }
              static ::std::uint64_t const value = GL_UNIFORM_BUFFER_BINDING;
          };
          struct gl_uniform_buffer_offset_alignment: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_offset_alignment > {
              static inline char const* name() { return "uniform_buffer_offset_alignment"; }
              static ::std::uint64_t const value = GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
          };
          struct gl_uniform_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_size > {
              static inline char const* name() { return "uniform_buffer_size"; }
              static ::std::uint64_t const value = GL_UNIFORM_BUFFER_SIZE;
          };
          struct gl_uniform_buffer_start: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_start > {
              static inline char const* name() { return "uniform_buffer_start"; }
              static ::std::uint64_t const value = GL_UNIFORM_BUFFER_START;
          };
          struct gl_uniform_is_row_major: public ::gtulu::internal::constant::gl_constant< gl_uniform_is_row_major > {
              static inline char const* name() { return "uniform_is_row_major"; }
              static ::std::uint64_t const value = GL_UNIFORM_IS_ROW_MAJOR;
          };
          struct gl_uniform_matrix_stride: public ::gtulu::internal::constant::gl_constant< gl_uniform_matrix_stride > {
              static inline char const* name() { return "uniform_matrix_stride"; }
              static ::std::uint64_t const value = GL_UNIFORM_MATRIX_STRIDE;
          };
          struct gl_uniform_name_length: public ::gtulu::internal::constant::gl_constant< gl_uniform_name_length > {
              static inline char const* name() { return "uniform_name_length"; }
              static ::std::uint64_t const value = GL_UNIFORM_NAME_LENGTH;
          };
          struct gl_uniform_offset: public ::gtulu::internal::constant::gl_constant< gl_uniform_offset > {
              static inline char const* name() { return "uniform_offset"; }
              static ::std::uint64_t const value = GL_UNIFORM_OFFSET;
          };
          struct gl_uniform_size: public ::gtulu::internal::constant::gl_constant< gl_uniform_size > {
              static inline char const* name() { return "uniform_size"; }
              static ::std::uint64_t const value = GL_UNIFORM_SIZE;
          };
          struct gl_uniform_type: public ::gtulu::internal::constant::gl_constant< gl_uniform_type > {
              static inline char const* name() { return "uniform_type"; }
              static ::std::uint64_t const value = GL_UNIFORM_TYPE;
          };
        } // namespace cst
      } // namespace uniform_buffer_object
      namespace vertex_array_bgra {
        namespace cst {
          struct gl_arb_vertex_array_bgra: public ::gtulu::internal::constant::gl_constant< gl_arb_vertex_array_bgra > {
              static inline char const* name() { return "arb_vertex_array_bgra"; }
              static ::std::uint64_t const value = GL_ARB_vertex_array_bgra;
          };
        } // namespace cst
      } // namespace vertex_array_bgra
      namespace vertex_array_object {
        namespace cst {
          struct gl_arb_vertex_array_object: public ::gtulu::internal::constant::gl_constant< gl_arb_vertex_array_object > {
              static inline char const* name() { return "arb_vertex_array_object"; }
              static ::std::uint64_t const value = GL_ARB_vertex_array_object;
          };
          struct gl_vertex_array_binding: public ::gtulu::internal::constant::gl_constant< gl_vertex_array_binding > {
              static inline char const* name() { return "vertex_array_binding"; }
              static ::std::uint64_t const value = GL_VERTEX_ARRAY_BINDING;
          };
        } // namespace cst
      } // namespace vertex_array_object
      namespace vertex_attrib_64bit {
        namespace cst {
          struct gl_arb_vertex_attrib_64bit: public ::gtulu::internal::constant::gl_constant< gl_arb_vertex_attrib_64bit > {
              static inline char const* name() { return "arb_vertex_attrib_64bit"; }
              static ::std::uint64_t const value = GL_ARB_vertex_attrib_64bit;
          };
        } // namespace cst
      } // namespace vertex_attrib_64bit
      namespace vertex_buffer_object {
        namespace cst {
        } // namespace cst
      } // namespace vertex_buffer_object
      namespace vertex_type_2_10_10_10_rev {
        namespace cst {
          struct gl_arb_vertex_type_2_10_10_10_rev: public ::gtulu::internal::constant::gl_constant< gl_arb_vertex_type_2_10_10_10_rev > {
              static inline char const* name() { return "arb_vertex_type_2_10_10_10_rev"; }
              static ::std::uint64_t const value = GL_ARB_vertex_type_2_10_10_10_rev;
          };
          struct gl_int_2_10_10_10_rev: public ::gtulu::internal::constant::gl_constant< gl_int_2_10_10_10_rev > {
              static inline char const* name() { return "int_2_10_10_10_rev"; }
              static ::std::uint64_t const value = GL_INT_2_10_10_10_REV;
          };
        } // namespace cst
      } // namespace vertex_type_2_10_10_10_rev
      namespace viewport_array {
        namespace cst {
          struct gl_arb_viewport_array: public ::gtulu::internal::constant::gl_constant< gl_arb_viewport_array > {
              static inline char const* name() { return "arb_viewport_array"; }
              static ::std::uint64_t const value = GL_ARB_viewport_array;
          };
          struct gl_layer_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_layer_provoking_vertex > {
              static inline char const* name() { return "layer_provoking_vertex"; }
              static ::std::uint64_t const value = GL_LAYER_PROVOKING_VERTEX;
          };
          struct gl_max_viewports: public ::gtulu::internal::constant::gl_constant< gl_max_viewports > {
              static inline char const* name() { return "max_viewports"; }
              static ::std::uint64_t const value = GL_MAX_VIEWPORTS;
          };
          struct gl_undefined_vertex: public ::gtulu::internal::constant::gl_constant< gl_undefined_vertex > {
              static inline char const* name() { return "undefined_vertex"; }
              static ::std::uint64_t const value = GL_UNDEFINED_VERTEX;
          };
          struct gl_viewport_bounds_range: public ::gtulu::internal::constant::gl_constant< gl_viewport_bounds_range > {
              static inline char const* name() { return "viewport_bounds_range"; }
              static ::std::uint64_t const value = GL_VIEWPORT_BOUNDS_RANGE;
          };
          struct gl_viewport_index_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_viewport_index_provoking_vertex > {
              static inline char const* name() { return "viewport_index_provoking_vertex"; }
              static ::std::uint64_t const value = GL_VIEWPORT_INDEX_PROVOKING_VERTEX;
          };
          struct gl_viewport_subpixel_bits: public ::gtulu::internal::constant::gl_constant< gl_viewport_subpixel_bits > {
              static inline char const* name() { return "viewport_subpixel_bits"; }
              static ::std::uint64_t const value = GL_VIEWPORT_SUBPIXEL_BITS;
          };
        } // namespace cst
      } // namespace viewport_array
      } // namespace arb
      namespace ext {
      namespace timer_query {
        namespace cst {
        } // namespace cst
      } // namespace timer_query
      } // namespace ext
      namespace nv {
      namespace half_float {
        namespace cst {
        } // namespace cst
      } // namespace half_float
      namespace vdpau_interop {
        namespace cst {
        } // namespace cst
      } // namespace vdpau_interop
      } // namespace nv
      namespace amd {
      namespace debug_output {
        namespace cst {
        } // namespace cst
      } // namespace debug_output
      } // namespace amd
      namespace other {
      } // namespace other

    } // namespace generated
    
  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_GENERATED_CONSTANTS_HPP_ */


