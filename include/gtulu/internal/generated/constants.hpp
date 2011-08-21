/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
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
              static constexpr char name[] = "version_1_0";
              static constexpr ::std::uint64_t value = GL_VERSION_1_0;
          };
        } // namespace cst
      } // namespace v1_0
      namespace v1_1 {
        namespace cst {
          struct gl_alpha: public ::gtulu::internal::constant::gl_constant< gl_alpha > {
              static constexpr char name[] = "alpha";
              static constexpr ::std::uint64_t value = GL_ALPHA;
          };
          struct gl_always: public ::gtulu::internal::constant::gl_constant< gl_always > {
              static constexpr char name[] = "always";
              static constexpr ::std::uint64_t value = GL_ALWAYS;
          };
          struct gl_and: public ::gtulu::internal::constant::gl_constant< gl_and > {
              static constexpr char name[] = "and";
              static constexpr ::std::uint64_t value = GL_AND;
          };
          struct gl_and_inverted: public ::gtulu::internal::constant::gl_constant< gl_and_inverted > {
              static constexpr char name[] = "and_inverted";
              static constexpr ::std::uint64_t value = GL_AND_INVERTED;
          };
          struct gl_and_reverse: public ::gtulu::internal::constant::gl_constant< gl_and_reverse > {
              static constexpr char name[] = "and_reverse";
              static constexpr ::std::uint64_t value = GL_AND_REVERSE;
          };
          struct gl_back: public ::gtulu::internal::constant::gl_constant< gl_back > {
              static constexpr char name[] = "back";
              static constexpr ::std::uint64_t value = GL_BACK;
          };
          struct gl_back_left: public ::gtulu::internal::constant::gl_constant< gl_back_left > {
              static constexpr char name[] = "back_left";
              static constexpr ::std::uint64_t value = GL_BACK_LEFT;
          };
          struct gl_back_right: public ::gtulu::internal::constant::gl_constant< gl_back_right > {
              static constexpr char name[] = "back_right";
              static constexpr ::std::uint64_t value = GL_BACK_RIGHT;
          };
          struct gl_blend: public ::gtulu::internal::constant::gl_constant< gl_blend > {
              static constexpr char name[] = "blend";
              static constexpr ::std::uint64_t value = GL_BLEND;
          };
          struct gl_blend_dst: public ::gtulu::internal::constant::gl_constant< gl_blend_dst > {
              static constexpr char name[] = "blend_dst";
              static constexpr ::std::uint64_t value = GL_BLEND_DST;
          };
          struct gl_blend_src: public ::gtulu::internal::constant::gl_constant< gl_blend_src > {
              static constexpr char name[] = "blend_src";
              static constexpr ::std::uint64_t value = GL_BLEND_SRC;
          };
          struct gl_blue: public ::gtulu::internal::constant::gl_constant< gl_blue > {
              static constexpr char name[] = "blue";
              static constexpr ::std::uint64_t value = GL_BLUE;
          };
          struct gl_byte: public ::gtulu::internal::constant::gl_constant< gl_byte > {
              static constexpr char name[] = "byte";
              static constexpr ::std::uint64_t value = GL_BYTE;
          };
          struct gl_ccw: public ::gtulu::internal::constant::gl_constant< gl_ccw > {
              static constexpr char name[] = "ccw";
              static constexpr ::std::uint64_t value = GL_CCW;
          };
          struct gl_clear: public ::gtulu::internal::constant::gl_constant< gl_clear > {
              static constexpr char name[] = "clear";
              static constexpr ::std::uint64_t value = GL_CLEAR;
          };
          struct gl_color: public ::gtulu::internal::constant::gl_constant< gl_color > {
              static constexpr char name[] = "color";
              static constexpr ::std::uint64_t value = GL_COLOR;
          };
          struct gl_color_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_color_buffer_bit > {
              static constexpr char name[] = "color_buffer_bit";
              static constexpr ::std::uint64_t value = GL_COLOR_BUFFER_BIT;
          };
          struct gl_color_clear_value: public ::gtulu::internal::constant::gl_constant< gl_color_clear_value > {
              static constexpr char name[] = "color_clear_value";
              static constexpr ::std::uint64_t value = GL_COLOR_CLEAR_VALUE;
          };
          struct gl_color_logic_op: public ::gtulu::internal::constant::gl_constant< gl_color_logic_op > {
              static constexpr char name[] = "color_logic_op";
              static constexpr ::std::uint64_t value = GL_COLOR_LOGIC_OP;
          };
          struct gl_color_writemask: public ::gtulu::internal::constant::gl_constant< gl_color_writemask > {
              static constexpr char name[] = "color_writemask";
              static constexpr ::std::uint64_t value = GL_COLOR_WRITEMASK;
          };
          struct gl_copy: public ::gtulu::internal::constant::gl_constant< gl_copy > {
              static constexpr char name[] = "copy";
              static constexpr ::std::uint64_t value = GL_COPY;
          };
          struct gl_copy_inverted: public ::gtulu::internal::constant::gl_constant< gl_copy_inverted > {
              static constexpr char name[] = "copy_inverted";
              static constexpr ::std::uint64_t value = GL_COPY_INVERTED;
          };
          struct gl_cull_face: public ::gtulu::internal::constant::gl_constant< gl_cull_face > {
              static constexpr char name[] = "cull_face";
              static constexpr ::std::uint64_t value = GL_CULL_FACE;
          };
          struct gl_cull_face_mode: public ::gtulu::internal::constant::gl_constant< gl_cull_face_mode > {
              static constexpr char name[] = "cull_face_mode";
              static constexpr ::std::uint64_t value = GL_CULL_FACE_MODE;
          };
          struct gl_cw: public ::gtulu::internal::constant::gl_constant< gl_cw > {
              static constexpr char name[] = "cw";
              static constexpr ::std::uint64_t value = GL_CW;
          };
          struct gl_decr: public ::gtulu::internal::constant::gl_constant< gl_decr > {
              static constexpr char name[] = "decr";
              static constexpr ::std::uint64_t value = GL_DECR;
          };
          struct gl_depth: public ::gtulu::internal::constant::gl_constant< gl_depth > {
              static constexpr char name[] = "depth";
              static constexpr ::std::uint64_t value = GL_DEPTH;
          };
          struct gl_depth_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_depth_buffer_bit > {
              static constexpr char name[] = "depth_buffer_bit";
              static constexpr ::std::uint64_t value = GL_DEPTH_BUFFER_BIT;
          };
          struct gl_depth_clear_value: public ::gtulu::internal::constant::gl_constant< gl_depth_clear_value > {
              static constexpr char name[] = "depth_clear_value";
              static constexpr ::std::uint64_t value = GL_DEPTH_CLEAR_VALUE;
          };
          struct gl_depth_component: public ::gtulu::internal::constant::gl_constant< gl_depth_component > {
              static constexpr char name[] = "depth_component";
              static constexpr ::std::uint64_t value = GL_DEPTH_COMPONENT;
          };
          struct gl_depth_func: public ::gtulu::internal::constant::gl_constant< gl_depth_func > {
              static constexpr char name[] = "depth_func";
              static constexpr ::std::uint64_t value = GL_DEPTH_FUNC;
          };
          struct gl_depth_range: public ::gtulu::internal::constant::gl_constant< gl_depth_range > {
              static constexpr char name[] = "depth_range";
              static constexpr ::std::uint64_t value = GL_DEPTH_RANGE;
          };
          struct gl_depth_test: public ::gtulu::internal::constant::gl_constant< gl_depth_test > {
              static constexpr char name[] = "depth_test";
              static constexpr ::std::uint64_t value = GL_DEPTH_TEST;
          };
          struct gl_depth_writemask: public ::gtulu::internal::constant::gl_constant< gl_depth_writemask > {
              static constexpr char name[] = "depth_writemask";
              static constexpr ::std::uint64_t value = GL_DEPTH_WRITEMASK;
          };
          struct gl_dither: public ::gtulu::internal::constant::gl_constant< gl_dither > {
              static constexpr char name[] = "dither";
              static constexpr ::std::uint64_t value = GL_DITHER;
          };
          struct gl_dont_care: public ::gtulu::internal::constant::gl_constant< gl_dont_care > {
              static constexpr char name[] = "dont_care";
              static constexpr ::std::uint64_t value = GL_DONT_CARE;
          };
          struct gl_double: public ::gtulu::internal::constant::gl_constant< gl_double > {
              static constexpr char name[] = "double";
              static constexpr ::std::uint64_t value = GL_DOUBLE;
          };
          struct gl_doublebuffer: public ::gtulu::internal::constant::gl_constant< gl_doublebuffer > {
              static constexpr char name[] = "doublebuffer";
              static constexpr ::std::uint64_t value = GL_DOUBLEBUFFER;
          };
          struct gl_draw_buffer: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer > {
              static constexpr char name[] = "draw_buffer";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER;
          };
          struct gl_dst_alpha: public ::gtulu::internal::constant::gl_constant< gl_dst_alpha > {
              static constexpr char name[] = "dst_alpha";
              static constexpr ::std::uint64_t value = GL_DST_ALPHA;
          };
          struct gl_dst_color: public ::gtulu::internal::constant::gl_constant< gl_dst_color > {
              static constexpr char name[] = "dst_color";
              static constexpr ::std::uint64_t value = GL_DST_COLOR;
          };
          struct gl_equal: public ::gtulu::internal::constant::gl_constant< gl_equal > {
              static constexpr char name[] = "equal";
              static constexpr ::std::uint64_t value = GL_EQUAL;
          };
          struct gl_equiv: public ::gtulu::internal::constant::gl_constant< gl_equiv > {
              static constexpr char name[] = "equiv";
              static constexpr ::std::uint64_t value = GL_EQUIV;
          };
          struct gl_extensions: public ::gtulu::internal::constant::gl_constant< gl_extensions > {
              static constexpr char name[] = "extensions";
              static constexpr ::std::uint64_t value = GL_EXTENSIONS;
          };
          struct gl_false: public ::gtulu::internal::constant::gl_constant< gl_false > {
              static constexpr char name[] = "false";
              static constexpr ::std::uint64_t value = GL_FALSE;
          };
          struct gl_fastest: public ::gtulu::internal::constant::gl_constant< gl_fastest > {
              static constexpr char name[] = "fastest";
              static constexpr ::std::uint64_t value = GL_FASTEST;
          };
          struct gl_fill: public ::gtulu::internal::constant::gl_constant< gl_fill > {
              static constexpr char name[] = "fill";
              static constexpr ::std::uint64_t value = GL_FILL;
          };
          struct gl_float: public ::gtulu::internal::constant::gl_constant< gl_float > {
              static constexpr char name[] = "float";
              static constexpr ::std::uint64_t value = GL_FLOAT;
          };
          struct gl_front: public ::gtulu::internal::constant::gl_constant< gl_front > {
              static constexpr char name[] = "front";
              static constexpr ::std::uint64_t value = GL_FRONT;
          };
          struct gl_front_and_back: public ::gtulu::internal::constant::gl_constant< gl_front_and_back > {
              static constexpr char name[] = "front_and_back";
              static constexpr ::std::uint64_t value = GL_FRONT_AND_BACK;
          };
          struct gl_front_face: public ::gtulu::internal::constant::gl_constant< gl_front_face > {
              static constexpr char name[] = "front_face";
              static constexpr ::std::uint64_t value = GL_FRONT_FACE;
          };
          struct gl_front_left: public ::gtulu::internal::constant::gl_constant< gl_front_left > {
              static constexpr char name[] = "front_left";
              static constexpr ::std::uint64_t value = GL_FRONT_LEFT;
          };
          struct gl_front_right: public ::gtulu::internal::constant::gl_constant< gl_front_right > {
              static constexpr char name[] = "front_right";
              static constexpr ::std::uint64_t value = GL_FRONT_RIGHT;
          };
          struct gl_gequal: public ::gtulu::internal::constant::gl_constant< gl_gequal > {
              static constexpr char name[] = "gequal";
              static constexpr ::std::uint64_t value = GL_GEQUAL;
          };
          struct gl_greater: public ::gtulu::internal::constant::gl_constant< gl_greater > {
              static constexpr char name[] = "greater";
              static constexpr ::std::uint64_t value = GL_GREATER;
          };
          struct gl_green: public ::gtulu::internal::constant::gl_constant< gl_green > {
              static constexpr char name[] = "green";
              static constexpr ::std::uint64_t value = GL_GREEN;
          };
          struct gl_incr: public ::gtulu::internal::constant::gl_constant< gl_incr > {
              static constexpr char name[] = "incr";
              static constexpr ::std::uint64_t value = GL_INCR;
          };
          struct gl_int: public ::gtulu::internal::constant::gl_constant< gl_int > {
              static constexpr char name[] = "int";
              static constexpr ::std::uint64_t value = GL_INT;
          };
          struct gl_invalid_enum: public ::gtulu::internal::constant::gl_constant< gl_invalid_enum > {
              static constexpr char name[] = "invalid_enum";
              static constexpr ::std::uint64_t value = GL_INVALID_ENUM;
          };
          struct gl_invalid_operation: public ::gtulu::internal::constant::gl_constant< gl_invalid_operation > {
              static constexpr char name[] = "invalid_operation";
              static constexpr ::std::uint64_t value = GL_INVALID_OPERATION;
          };
          struct gl_invalid_value: public ::gtulu::internal::constant::gl_constant< gl_invalid_value > {
              static constexpr char name[] = "invalid_value";
              static constexpr ::std::uint64_t value = GL_INVALID_VALUE;
          };
          struct gl_invert: public ::gtulu::internal::constant::gl_constant< gl_invert > {
              static constexpr char name[] = "invert";
              static constexpr ::std::uint64_t value = GL_INVERT;
          };
          struct gl_keep: public ::gtulu::internal::constant::gl_constant< gl_keep > {
              static constexpr char name[] = "keep";
              static constexpr ::std::uint64_t value = GL_KEEP;
          };
          struct gl_left: public ::gtulu::internal::constant::gl_constant< gl_left > {
              static constexpr char name[] = "left";
              static constexpr ::std::uint64_t value = GL_LEFT;
          };
          struct gl_lequal: public ::gtulu::internal::constant::gl_constant< gl_lequal > {
              static constexpr char name[] = "lequal";
              static constexpr ::std::uint64_t value = GL_LEQUAL;
          };
          struct gl_less: public ::gtulu::internal::constant::gl_constant< gl_less > {
              static constexpr char name[] = "less";
              static constexpr ::std::uint64_t value = GL_LESS;
          };
          struct gl_line: public ::gtulu::internal::constant::gl_constant< gl_line > {
              static constexpr char name[] = "line";
              static constexpr ::std::uint64_t value = GL_LINE;
          };
          struct gl_linear: public ::gtulu::internal::constant::gl_constant< gl_linear > {
              static constexpr char name[] = "linear";
              static constexpr ::std::uint64_t value = GL_LINEAR;
          };
          struct gl_linear_mipmap_linear: public ::gtulu::internal::constant::gl_constant< gl_linear_mipmap_linear > {
              static constexpr char name[] = "linear_mipmap_linear";
              static constexpr ::std::uint64_t value = GL_LINEAR_MIPMAP_LINEAR;
          };
          struct gl_linear_mipmap_nearest: public ::gtulu::internal::constant::gl_constant< gl_linear_mipmap_nearest > {
              static constexpr char name[] = "linear_mipmap_nearest";
              static constexpr ::std::uint64_t value = GL_LINEAR_MIPMAP_NEAREST;
          };
          struct gl_lines: public ::gtulu::internal::constant::gl_constant< gl_lines > {
              static constexpr char name[] = "lines";
              static constexpr ::std::uint64_t value = GL_LINES;
          };
          struct gl_line_loop: public ::gtulu::internal::constant::gl_constant< gl_line_loop > {
              static constexpr char name[] = "line_loop";
              static constexpr ::std::uint64_t value = GL_LINE_LOOP;
          };
          struct gl_line_smooth: public ::gtulu::internal::constant::gl_constant< gl_line_smooth > {
              static constexpr char name[] = "line_smooth";
              static constexpr ::std::uint64_t value = GL_LINE_SMOOTH;
          };
          struct gl_line_smooth_hint: public ::gtulu::internal::constant::gl_constant< gl_line_smooth_hint > {
              static constexpr char name[] = "line_smooth_hint";
              static constexpr ::std::uint64_t value = GL_LINE_SMOOTH_HINT;
          };
          struct gl_line_strip: public ::gtulu::internal::constant::gl_constant< gl_line_strip > {
              static constexpr char name[] = "line_strip";
              static constexpr ::std::uint64_t value = GL_LINE_STRIP;
          };
          struct gl_line_width: public ::gtulu::internal::constant::gl_constant< gl_line_width > {
              static constexpr char name[] = "line_width";
              static constexpr ::std::uint64_t value = GL_LINE_WIDTH;
          };
          struct gl_line_width_granularity: public ::gtulu::internal::constant::gl_constant< gl_line_width_granularity > {
              static constexpr char name[] = "line_width_granularity";
              static constexpr ::std::uint64_t value = GL_LINE_WIDTH_GRANULARITY;
          };
          struct gl_line_width_range: public ::gtulu::internal::constant::gl_constant< gl_line_width_range > {
              static constexpr char name[] = "line_width_range";
              static constexpr ::std::uint64_t value = GL_LINE_WIDTH_RANGE;
          };
          struct gl_logic_op_mode: public ::gtulu::internal::constant::gl_constant< gl_logic_op_mode > {
              static constexpr char name[] = "logic_op_mode";
              static constexpr ::std::uint64_t value = GL_LOGIC_OP_MODE;
          };
          struct gl_max_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_texture_size > {
              static constexpr char name[] = "max_texture_size";
              static constexpr ::std::uint64_t value = GL_MAX_TEXTURE_SIZE;
          };
          struct gl_max_viewport_dims: public ::gtulu::internal::constant::gl_constant< gl_max_viewport_dims > {
              static constexpr char name[] = "max_viewport_dims";
              static constexpr ::std::uint64_t value = GL_MAX_VIEWPORT_DIMS;
          };
          struct gl_nand: public ::gtulu::internal::constant::gl_constant< gl_nand > {
              static constexpr char name[] = "nand";
              static constexpr ::std::uint64_t value = GL_NAND;
          };
          struct gl_nearest: public ::gtulu::internal::constant::gl_constant< gl_nearest > {
              static constexpr char name[] = "nearest";
              static constexpr ::std::uint64_t value = GL_NEAREST;
          };
          struct gl_nearest_mipmap_linear: public ::gtulu::internal::constant::gl_constant< gl_nearest_mipmap_linear > {
              static constexpr char name[] = "nearest_mipmap_linear";
              static constexpr ::std::uint64_t value = GL_NEAREST_MIPMAP_LINEAR;
          };
          struct gl_nearest_mipmap_nearest: public ::gtulu::internal::constant::gl_constant< gl_nearest_mipmap_nearest > {
              static constexpr char name[] = "nearest_mipmap_nearest";
              static constexpr ::std::uint64_t value = GL_NEAREST_MIPMAP_NEAREST;
          };
          struct gl_never: public ::gtulu::internal::constant::gl_constant< gl_never > {
              static constexpr char name[] = "never";
              static constexpr ::std::uint64_t value = GL_NEVER;
          };
          struct gl_nicest: public ::gtulu::internal::constant::gl_constant< gl_nicest > {
              static constexpr char name[] = "nicest";
              static constexpr ::std::uint64_t value = GL_NICEST;
          };
          struct gl_none: public ::gtulu::internal::constant::gl_constant< gl_none > {
              static constexpr char name[] = "none";
              static constexpr ::std::uint64_t value = GL_NONE;
          };
          struct gl_noop: public ::gtulu::internal::constant::gl_constant< gl_noop > {
              static constexpr char name[] = "noop";
              static constexpr ::std::uint64_t value = GL_NOOP;
          };
          struct gl_nor: public ::gtulu::internal::constant::gl_constant< gl_nor > {
              static constexpr char name[] = "nor";
              static constexpr ::std::uint64_t value = GL_NOR;
          };
          struct gl_notequal: public ::gtulu::internal::constant::gl_constant< gl_notequal > {
              static constexpr char name[] = "notequal";
              static constexpr ::std::uint64_t value = GL_NOTEQUAL;
          };
          struct gl_no_error: public ::gtulu::internal::constant::gl_constant< gl_no_error > {
              static constexpr char name[] = "no_error";
              static constexpr ::std::uint64_t value = GL_NO_ERROR;
          };
          struct gl_one: public ::gtulu::internal::constant::gl_constant< gl_one > {
              static constexpr char name[] = "one";
              static constexpr ::std::uint64_t value = GL_ONE;
          };
          struct gl_one_minus_dst_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_dst_alpha > {
              static constexpr char name[] = "one_minus_dst_alpha";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_DST_ALPHA;
          };
          struct gl_one_minus_dst_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_dst_color > {
              static constexpr char name[] = "one_minus_dst_color";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_DST_COLOR;
          };
          struct gl_one_minus_src_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src_alpha > {
              static constexpr char name[] = "one_minus_src_alpha";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_SRC_ALPHA;
          };
          struct gl_one_minus_src_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src_color > {
              static constexpr char name[] = "one_minus_src_color";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_SRC_COLOR;
          };
          struct gl_or: public ::gtulu::internal::constant::gl_constant< gl_or > {
              static constexpr char name[] = "or";
              static constexpr ::std::uint64_t value = GL_OR;
          };
          struct gl_or_inverted: public ::gtulu::internal::constant::gl_constant< gl_or_inverted > {
              static constexpr char name[] = "or_inverted";
              static constexpr ::std::uint64_t value = GL_OR_INVERTED;
          };
          struct gl_or_reverse: public ::gtulu::internal::constant::gl_constant< gl_or_reverse > {
              static constexpr char name[] = "or_reverse";
              static constexpr ::std::uint64_t value = GL_OR_REVERSE;
          };
          struct gl_out_of_memory: public ::gtulu::internal::constant::gl_constant< gl_out_of_memory > {
              static constexpr char name[] = "out_of_memory";
              static constexpr ::std::uint64_t value = GL_OUT_OF_MEMORY;
          };
          struct gl_pack_alignment: public ::gtulu::internal::constant::gl_constant< gl_pack_alignment > {
              static constexpr char name[] = "pack_alignment";
              static constexpr ::std::uint64_t value = GL_PACK_ALIGNMENT;
          };
          struct gl_pack_lsb_first: public ::gtulu::internal::constant::gl_constant< gl_pack_lsb_first > {
              static constexpr char name[] = "pack_lsb_first";
              static constexpr ::std::uint64_t value = GL_PACK_LSB_FIRST;
          };
          struct gl_pack_row_length: public ::gtulu::internal::constant::gl_constant< gl_pack_row_length > {
              static constexpr char name[] = "pack_row_length";
              static constexpr ::std::uint64_t value = GL_PACK_ROW_LENGTH;
          };
          struct gl_pack_skip_pixels: public ::gtulu::internal::constant::gl_constant< gl_pack_skip_pixels > {
              static constexpr char name[] = "pack_skip_pixels";
              static constexpr ::std::uint64_t value = GL_PACK_SKIP_PIXELS;
          };
          struct gl_pack_skip_rows: public ::gtulu::internal::constant::gl_constant< gl_pack_skip_rows > {
              static constexpr char name[] = "pack_skip_rows";
              static constexpr ::std::uint64_t value = GL_PACK_SKIP_ROWS;
          };
          struct gl_pack_swap_bytes: public ::gtulu::internal::constant::gl_constant< gl_pack_swap_bytes > {
              static constexpr char name[] = "pack_swap_bytes";
              static constexpr ::std::uint64_t value = GL_PACK_SWAP_BYTES;
          };
          struct gl_point: public ::gtulu::internal::constant::gl_constant< gl_point > {
              static constexpr char name[] = "point";
              static constexpr ::std::uint64_t value = GL_POINT;
          };
          struct gl_points: public ::gtulu::internal::constant::gl_constant< gl_points > {
              static constexpr char name[] = "points";
              static constexpr ::std::uint64_t value = GL_POINTS;
          };
          struct gl_point_size: public ::gtulu::internal::constant::gl_constant< gl_point_size > {
              static constexpr char name[] = "point_size";
              static constexpr ::std::uint64_t value = GL_POINT_SIZE;
          };
          struct gl_point_size_granularity: public ::gtulu::internal::constant::gl_constant< gl_point_size_granularity > {
              static constexpr char name[] = "point_size_granularity";
              static constexpr ::std::uint64_t value = GL_POINT_SIZE_GRANULARITY;
          };
          struct gl_point_size_range: public ::gtulu::internal::constant::gl_constant< gl_point_size_range > {
              static constexpr char name[] = "point_size_range";
              static constexpr ::std::uint64_t value = GL_POINT_SIZE_RANGE;
          };
          struct gl_polygon_offset_factor: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_factor > {
              static constexpr char name[] = "polygon_offset_factor";
              static constexpr ::std::uint64_t value = GL_POLYGON_OFFSET_FACTOR;
          };
          struct gl_polygon_offset_fill: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_fill > {
              static constexpr char name[] = "polygon_offset_fill";
              static constexpr ::std::uint64_t value = GL_POLYGON_OFFSET_FILL;
          };
          struct gl_polygon_offset_line: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_line > {
              static constexpr char name[] = "polygon_offset_line";
              static constexpr ::std::uint64_t value = GL_POLYGON_OFFSET_LINE;
          };
          struct gl_polygon_offset_point: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_point > {
              static constexpr char name[] = "polygon_offset_point";
              static constexpr ::std::uint64_t value = GL_POLYGON_OFFSET_POINT;
          };
          struct gl_polygon_offset_units: public ::gtulu::internal::constant::gl_constant< gl_polygon_offset_units > {
              static constexpr char name[] = "polygon_offset_units";
              static constexpr ::std::uint64_t value = GL_POLYGON_OFFSET_UNITS;
          };
          struct gl_polygon_smooth: public ::gtulu::internal::constant::gl_constant< gl_polygon_smooth > {
              static constexpr char name[] = "polygon_smooth";
              static constexpr ::std::uint64_t value = GL_POLYGON_SMOOTH;
          };
          struct gl_polygon_smooth_hint: public ::gtulu::internal::constant::gl_constant< gl_polygon_smooth_hint > {
              static constexpr char name[] = "polygon_smooth_hint";
              static constexpr ::std::uint64_t value = GL_POLYGON_SMOOTH_HINT;
          };
          struct gl_proxy_texture_1d: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_1d > {
              static constexpr char name[] = "proxy_texture_1d";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_1D;
          };
          struct gl_proxy_texture_2d: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d > {
              static constexpr char name[] = "proxy_texture_2d";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_2D;
          };
          struct gl_r3_g3_b2: public ::gtulu::internal::constant::gl_constant< gl_r3_g3_b2 > {
              static constexpr char name[] = "r3_g3_b2";
              static constexpr ::std::uint64_t value = GL_R3_G3_B2;
          };
          struct gl_read_buffer: public ::gtulu::internal::constant::gl_constant< gl_read_buffer > {
              static constexpr char name[] = "read_buffer";
              static constexpr ::std::uint64_t value = GL_READ_BUFFER;
          };
          struct gl_red: public ::gtulu::internal::constant::gl_constant< gl_red > {
              static constexpr char name[] = "red";
              static constexpr ::std::uint64_t value = GL_RED;
          };
          struct gl_renderer: public ::gtulu::internal::constant::gl_constant< gl_renderer > {
              static constexpr char name[] = "renderer";
              static constexpr ::std::uint64_t value = GL_RENDERER;
          };
          struct gl_repeat: public ::gtulu::internal::constant::gl_constant< gl_repeat > {
              static constexpr char name[] = "repeat";
              static constexpr ::std::uint64_t value = GL_REPEAT;
          };
          struct gl_replace: public ::gtulu::internal::constant::gl_constant< gl_replace > {
              static constexpr char name[] = "replace";
              static constexpr ::std::uint64_t value = GL_REPLACE;
          };
          struct gl_rgb: public ::gtulu::internal::constant::gl_constant< gl_rgb > {
              static constexpr char name[] = "rgb";
              static constexpr ::std::uint64_t value = GL_RGB;
          };
          struct gl_rgb10: public ::gtulu::internal::constant::gl_constant< gl_rgb10 > {
              static constexpr char name[] = "rgb10";
              static constexpr ::std::uint64_t value = GL_RGB10;
          };
          struct gl_rgb10_a2: public ::gtulu::internal::constant::gl_constant< gl_rgb10_a2 > {
              static constexpr char name[] = "rgb10_a2";
              static constexpr ::std::uint64_t value = GL_RGB10_A2;
          };
          struct gl_rgb12: public ::gtulu::internal::constant::gl_constant< gl_rgb12 > {
              static constexpr char name[] = "rgb12";
              static constexpr ::std::uint64_t value = GL_RGB12;
          };
          struct gl_rgb16: public ::gtulu::internal::constant::gl_constant< gl_rgb16 > {
              static constexpr char name[] = "rgb16";
              static constexpr ::std::uint64_t value = GL_RGB16;
          };
          struct gl_rgb4: public ::gtulu::internal::constant::gl_constant< gl_rgb4 > {
              static constexpr char name[] = "rgb4";
              static constexpr ::std::uint64_t value = GL_RGB4;
          };
          struct gl_rgb5: public ::gtulu::internal::constant::gl_constant< gl_rgb5 > {
              static constexpr char name[] = "rgb5";
              static constexpr ::std::uint64_t value = GL_RGB5;
          };
          struct gl_rgb5_a1: public ::gtulu::internal::constant::gl_constant< gl_rgb5_a1 > {
              static constexpr char name[] = "rgb5_a1";
              static constexpr ::std::uint64_t value = GL_RGB5_A1;
          };
          struct gl_rgb8: public ::gtulu::internal::constant::gl_constant< gl_rgb8 > {
              static constexpr char name[] = "rgb8";
              static constexpr ::std::uint64_t value = GL_RGB8;
          };
          struct gl_rgba: public ::gtulu::internal::constant::gl_constant< gl_rgba > {
              static constexpr char name[] = "rgba";
              static constexpr ::std::uint64_t value = GL_RGBA;
          };
          struct gl_rgba12: public ::gtulu::internal::constant::gl_constant< gl_rgba12 > {
              static constexpr char name[] = "rgba12";
              static constexpr ::std::uint64_t value = GL_RGBA12;
          };
          struct gl_rgba16: public ::gtulu::internal::constant::gl_constant< gl_rgba16 > {
              static constexpr char name[] = "rgba16";
              static constexpr ::std::uint64_t value = GL_RGBA16;
          };
          struct gl_rgba2: public ::gtulu::internal::constant::gl_constant< gl_rgba2 > {
              static constexpr char name[] = "rgba2";
              static constexpr ::std::uint64_t value = GL_RGBA2;
          };
          struct gl_rgba4: public ::gtulu::internal::constant::gl_constant< gl_rgba4 > {
              static constexpr char name[] = "rgba4";
              static constexpr ::std::uint64_t value = GL_RGBA4;
          };
          struct gl_rgba8: public ::gtulu::internal::constant::gl_constant< gl_rgba8 > {
              static constexpr char name[] = "rgba8";
              static constexpr ::std::uint64_t value = GL_RGBA8;
          };
          struct gl_right: public ::gtulu::internal::constant::gl_constant< gl_right > {
              static constexpr char name[] = "right";
              static constexpr ::std::uint64_t value = GL_RIGHT;
          };
          struct gl_scissor_box: public ::gtulu::internal::constant::gl_constant< gl_scissor_box > {
              static constexpr char name[] = "scissor_box";
              static constexpr ::std::uint64_t value = GL_SCISSOR_BOX;
          };
          struct gl_scissor_test: public ::gtulu::internal::constant::gl_constant< gl_scissor_test > {
              static constexpr char name[] = "scissor_test";
              static constexpr ::std::uint64_t value = GL_SCISSOR_TEST;
          };
          struct gl_set: public ::gtulu::internal::constant::gl_constant< gl_set > {
              static constexpr char name[] = "set";
              static constexpr ::std::uint64_t value = GL_SET;
          };
          struct gl_short: public ::gtulu::internal::constant::gl_constant< gl_short > {
              static constexpr char name[] = "short";
              static constexpr ::std::uint64_t value = GL_SHORT;
          };
          struct gl_src_alpha: public ::gtulu::internal::constant::gl_constant< gl_src_alpha > {
              static constexpr char name[] = "src_alpha";
              static constexpr ::std::uint64_t value = GL_SRC_ALPHA;
          };
          struct gl_src_alpha_saturate: public ::gtulu::internal::constant::gl_constant< gl_src_alpha_saturate > {
              static constexpr char name[] = "src_alpha_saturate";
              static constexpr ::std::uint64_t value = GL_SRC_ALPHA_SATURATE;
          };
          struct gl_src_color: public ::gtulu::internal::constant::gl_constant< gl_src_color > {
              static constexpr char name[] = "src_color";
              static constexpr ::std::uint64_t value = GL_SRC_COLOR;
          };
          struct gl_stencil: public ::gtulu::internal::constant::gl_constant< gl_stencil > {
              static constexpr char name[] = "stencil";
              static constexpr ::std::uint64_t value = GL_STENCIL;
          };
          struct gl_stencil_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_stencil_buffer_bit > {
              static constexpr char name[] = "stencil_buffer_bit";
              static constexpr ::std::uint64_t value = GL_STENCIL_BUFFER_BIT;
          };
          struct gl_stencil_clear_value: public ::gtulu::internal::constant::gl_constant< gl_stencil_clear_value > {
              static constexpr char name[] = "stencil_clear_value";
              static constexpr ::std::uint64_t value = GL_STENCIL_CLEAR_VALUE;
          };
          struct gl_stencil_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_fail > {
              static constexpr char name[] = "stencil_fail";
              static constexpr ::std::uint64_t value = GL_STENCIL_FAIL;
          };
          struct gl_stencil_func: public ::gtulu::internal::constant::gl_constant< gl_stencil_func > {
              static constexpr char name[] = "stencil_func";
              static constexpr ::std::uint64_t value = GL_STENCIL_FUNC;
          };
          struct gl_stencil_index: public ::gtulu::internal::constant::gl_constant< gl_stencil_index > {
              static constexpr char name[] = "stencil_index";
              static constexpr ::std::uint64_t value = GL_STENCIL_INDEX;
          };
          struct gl_stencil_pass_depth_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_pass_depth_fail > {
              static constexpr char name[] = "stencil_pass_depth_fail";
              static constexpr ::std::uint64_t value = GL_STENCIL_PASS_DEPTH_FAIL;
          };
          struct gl_stencil_pass_depth_pass: public ::gtulu::internal::constant::gl_constant< gl_stencil_pass_depth_pass > {
              static constexpr char name[] = "stencil_pass_depth_pass";
              static constexpr ::std::uint64_t value = GL_STENCIL_PASS_DEPTH_PASS;
          };
          struct gl_stencil_ref: public ::gtulu::internal::constant::gl_constant< gl_stencil_ref > {
              static constexpr char name[] = "stencil_ref";
              static constexpr ::std::uint64_t value = GL_STENCIL_REF;
          };
          struct gl_stencil_test: public ::gtulu::internal::constant::gl_constant< gl_stencil_test > {
              static constexpr char name[] = "stencil_test";
              static constexpr ::std::uint64_t value = GL_STENCIL_TEST;
          };
          struct gl_stencil_value_mask: public ::gtulu::internal::constant::gl_constant< gl_stencil_value_mask > {
              static constexpr char name[] = "stencil_value_mask";
              static constexpr ::std::uint64_t value = GL_STENCIL_VALUE_MASK;
          };
          struct gl_stencil_writemask: public ::gtulu::internal::constant::gl_constant< gl_stencil_writemask > {
              static constexpr char name[] = "stencil_writemask";
              static constexpr ::std::uint64_t value = GL_STENCIL_WRITEMASK;
          };
          struct gl_stereo: public ::gtulu::internal::constant::gl_constant< gl_stereo > {
              static constexpr char name[] = "stereo";
              static constexpr ::std::uint64_t value = GL_STEREO;
          };
          struct gl_subpixel_bits: public ::gtulu::internal::constant::gl_constant< gl_subpixel_bits > {
              static constexpr char name[] = "subpixel_bits";
              static constexpr ::std::uint64_t value = GL_SUBPIXEL_BITS;
          };
          struct gl_texture: public ::gtulu::internal::constant::gl_constant< gl_texture > {
              static constexpr char name[] = "texture";
              static constexpr ::std::uint64_t value = GL_TEXTURE;
          };
          struct gl_texture_1d: public ::gtulu::internal::constant::gl_constant< gl_texture_1d > {
              static constexpr char name[] = "texture_1d";
              static constexpr ::std::uint64_t value = GL_TEXTURE_1D;
          };
          struct gl_texture_2d: public ::gtulu::internal::constant::gl_constant< gl_texture_2d > {
              static constexpr char name[] = "texture_2d";
              static constexpr ::std::uint64_t value = GL_TEXTURE_2D;
          };
          struct gl_texture_alpha_size: public ::gtulu::internal::constant::gl_constant< gl_texture_alpha_size > {
              static constexpr char name[] = "texture_alpha_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_ALPHA_SIZE;
          };
          struct gl_texture_binding_1d: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_1d > {
              static constexpr char name[] = "texture_binding_1d";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_1D;
          };
          struct gl_texture_binding_2d: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d > {
              static constexpr char name[] = "texture_binding_2d";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_2D;
          };
          struct gl_texture_blue_size: public ::gtulu::internal::constant::gl_constant< gl_texture_blue_size > {
              static constexpr char name[] = "texture_blue_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BLUE_SIZE;
          };
          struct gl_texture_border_color: public ::gtulu::internal::constant::gl_constant< gl_texture_border_color > {
              static constexpr char name[] = "texture_border_color";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BORDER_COLOR;
          };
          struct gl_texture_green_size: public ::gtulu::internal::constant::gl_constant< gl_texture_green_size > {
              static constexpr char name[] = "texture_green_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_GREEN_SIZE;
          };
          struct gl_texture_height: public ::gtulu::internal::constant::gl_constant< gl_texture_height > {
              static constexpr char name[] = "texture_height";
              static constexpr ::std::uint64_t value = GL_TEXTURE_HEIGHT;
          };
          struct gl_texture_internal_format: public ::gtulu::internal::constant::gl_constant< gl_texture_internal_format > {
              static constexpr char name[] = "texture_internal_format";
              static constexpr ::std::uint64_t value = GL_TEXTURE_INTERNAL_FORMAT;
          };
          struct gl_texture_mag_filter: public ::gtulu::internal::constant::gl_constant< gl_texture_mag_filter > {
              static constexpr char name[] = "texture_mag_filter";
              static constexpr ::std::uint64_t value = GL_TEXTURE_MAG_FILTER;
          };
          struct gl_texture_min_filter: public ::gtulu::internal::constant::gl_constant< gl_texture_min_filter > {
              static constexpr char name[] = "texture_min_filter";
              static constexpr ::std::uint64_t value = GL_TEXTURE_MIN_FILTER;
          };
          struct gl_texture_red_size: public ::gtulu::internal::constant::gl_constant< gl_texture_red_size > {
              static constexpr char name[] = "texture_red_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_RED_SIZE;
          };
          struct gl_texture_width: public ::gtulu::internal::constant::gl_constant< gl_texture_width > {
              static constexpr char name[] = "texture_width";
              static constexpr ::std::uint64_t value = GL_TEXTURE_WIDTH;
          };
          struct gl_texture_wrap_s: public ::gtulu::internal::constant::gl_constant< gl_texture_wrap_s > {
              static constexpr char name[] = "texture_wrap_s";
              static constexpr ::std::uint64_t value = GL_TEXTURE_WRAP_S;
          };
          struct gl_texture_wrap_t: public ::gtulu::internal::constant::gl_constant< gl_texture_wrap_t > {
              static constexpr char name[] = "texture_wrap_t";
              static constexpr ::std::uint64_t value = GL_TEXTURE_WRAP_T;
          };
          struct gl_triangles: public ::gtulu::internal::constant::gl_constant< gl_triangles > {
              static constexpr char name[] = "triangles";
              static constexpr ::std::uint64_t value = GL_TRIANGLES;
          };
          struct gl_triangle_fan: public ::gtulu::internal::constant::gl_constant< gl_triangle_fan > {
              static constexpr char name[] = "triangle_fan";
              static constexpr ::std::uint64_t value = GL_TRIANGLE_FAN;
          };
          struct gl_triangle_strip: public ::gtulu::internal::constant::gl_constant< gl_triangle_strip > {
              static constexpr char name[] = "triangle_strip";
              static constexpr ::std::uint64_t value = GL_TRIANGLE_STRIP;
          };
          struct gl_true: public ::gtulu::internal::constant::gl_constant< gl_true > {
              static constexpr char name[] = "true";
              static constexpr ::std::uint64_t value = GL_TRUE;
          };
          struct gl_unpack_alignment: public ::gtulu::internal::constant::gl_constant< gl_unpack_alignment > {
              static constexpr char name[] = "unpack_alignment";
              static constexpr ::std::uint64_t value = GL_UNPACK_ALIGNMENT;
          };
          struct gl_unpack_lsb_first: public ::gtulu::internal::constant::gl_constant< gl_unpack_lsb_first > {
              static constexpr char name[] = "unpack_lsb_first";
              static constexpr ::std::uint64_t value = GL_UNPACK_LSB_FIRST;
          };
          struct gl_unpack_row_length: public ::gtulu::internal::constant::gl_constant< gl_unpack_row_length > {
              static constexpr char name[] = "unpack_row_length";
              static constexpr ::std::uint64_t value = GL_UNPACK_ROW_LENGTH;
          };
          struct gl_unpack_skip_pixels: public ::gtulu::internal::constant::gl_constant< gl_unpack_skip_pixels > {
              static constexpr char name[] = "unpack_skip_pixels";
              static constexpr ::std::uint64_t value = GL_UNPACK_SKIP_PIXELS;
          };
          struct gl_unpack_skip_rows: public ::gtulu::internal::constant::gl_constant< gl_unpack_skip_rows > {
              static constexpr char name[] = "unpack_skip_rows";
              static constexpr ::std::uint64_t value = GL_UNPACK_SKIP_ROWS;
          };
          struct gl_unpack_swap_bytes: public ::gtulu::internal::constant::gl_constant< gl_unpack_swap_bytes > {
              static constexpr char name[] = "unpack_swap_bytes";
              static constexpr ::std::uint64_t value = GL_UNPACK_SWAP_BYTES;
          };
          struct gl_unsigned_byte: public ::gtulu::internal::constant::gl_constant< gl_unsigned_byte > {
              static constexpr char name[] = "unsigned_byte";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_BYTE;
          };
          struct gl_unsigned_int: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int > {
              static constexpr char name[] = "unsigned_int";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT;
          };
          struct gl_unsigned_short: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short > {
              static constexpr char name[] = "unsigned_short";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_SHORT;
          };
          struct gl_vendor: public ::gtulu::internal::constant::gl_constant< gl_vendor > {
              static constexpr char name[] = "vendor";
              static constexpr ::std::uint64_t value = GL_VENDOR;
          };
          struct gl_version: public ::gtulu::internal::constant::gl_constant< gl_version > {
              static constexpr char name[] = "version";
              static constexpr ::std::uint64_t value = GL_VERSION;
          };
          struct gl_version_1_1: public ::gtulu::internal::constant::gl_constant< gl_version_1_1 > {
              static constexpr char name[] = "version_1_1";
              static constexpr ::std::uint64_t value = GL_VERSION_1_1;
          };
          struct gl_viewport: public ::gtulu::internal::constant::gl_constant< gl_viewport > {
              static constexpr char name[] = "viewport";
              static constexpr ::std::uint64_t value = GL_VIEWPORT;
          };
          struct gl_xor: public ::gtulu::internal::constant::gl_constant< gl_xor > {
              static constexpr char name[] = "xor";
              static constexpr ::std::uint64_t value = GL_XOR;
          };
          struct gl_zero: public ::gtulu::internal::constant::gl_constant< gl_zero > {
              static constexpr char name[] = "zero";
              static constexpr ::std::uint64_t value = GL_ZERO;
          };
        } // namespace cst
      } // namespace v1_1
      namespace v1_2 {
        namespace cst {
          struct gl_aliased_line_width_range: public ::gtulu::internal::constant::gl_constant< gl_aliased_line_width_range > {
              static constexpr char name[] = "aliased_line_width_range";
              static constexpr ::std::uint64_t value = GL_ALIASED_LINE_WIDTH_RANGE;
          };
          struct gl_bgr: public ::gtulu::internal::constant::gl_constant< gl_bgr > {
              static constexpr char name[] = "bgr";
              static constexpr ::std::uint64_t value = GL_BGR;
          };
          struct gl_bgra: public ::gtulu::internal::constant::gl_constant< gl_bgra > {
              static constexpr char name[] = "bgra";
              static constexpr ::std::uint64_t value = GL_BGRA;
          };
          struct gl_clamp_to_edge: public ::gtulu::internal::constant::gl_constant< gl_clamp_to_edge > {
              static constexpr char name[] = "clamp_to_edge";
              static constexpr ::std::uint64_t value = GL_CLAMP_TO_EDGE;
          };
          struct gl_max_3d_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_3d_texture_size > {
              static constexpr char name[] = "max_3d_texture_size";
              static constexpr ::std::uint64_t value = GL_MAX_3D_TEXTURE_SIZE;
          };
          struct gl_max_elements_indices: public ::gtulu::internal::constant::gl_constant< gl_max_elements_indices > {
              static constexpr char name[] = "max_elements_indices";
              static constexpr ::std::uint64_t value = GL_MAX_ELEMENTS_INDICES;
          };
          struct gl_max_elements_vertices: public ::gtulu::internal::constant::gl_constant< gl_max_elements_vertices > {
              static constexpr char name[] = "max_elements_vertices";
              static constexpr ::std::uint64_t value = GL_MAX_ELEMENTS_VERTICES;
          };
          struct gl_pack_image_height: public ::gtulu::internal::constant::gl_constant< gl_pack_image_height > {
              static constexpr char name[] = "pack_image_height";
              static constexpr ::std::uint64_t value = GL_PACK_IMAGE_HEIGHT;
          };
          struct gl_pack_skip_images: public ::gtulu::internal::constant::gl_constant< gl_pack_skip_images > {
              static constexpr char name[] = "pack_skip_images";
              static constexpr ::std::uint64_t value = GL_PACK_SKIP_IMAGES;
          };
          struct gl_proxy_texture_3d: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_3d > {
              static constexpr char name[] = "proxy_texture_3d";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_3D;
          };
          struct gl_smooth_line_width_granularity: public ::gtulu::internal::constant::gl_constant< gl_smooth_line_width_granularity > {
              static constexpr char name[] = "smooth_line_width_granularity";
              static constexpr ::std::uint64_t value = GL_SMOOTH_LINE_WIDTH_GRANULARITY;
          };
          struct gl_smooth_line_width_range: public ::gtulu::internal::constant::gl_constant< gl_smooth_line_width_range > {
              static constexpr char name[] = "smooth_line_width_range";
              static constexpr ::std::uint64_t value = GL_SMOOTH_LINE_WIDTH_RANGE;
          };
          struct gl_smooth_point_size_granularity: public ::gtulu::internal::constant::gl_constant< gl_smooth_point_size_granularity > {
              static constexpr char name[] = "smooth_point_size_granularity";
              static constexpr ::std::uint64_t value = GL_SMOOTH_POINT_SIZE_GRANULARITY;
          };
          struct gl_smooth_point_size_range: public ::gtulu::internal::constant::gl_constant< gl_smooth_point_size_range > {
              static constexpr char name[] = "smooth_point_size_range";
              static constexpr ::std::uint64_t value = GL_SMOOTH_POINT_SIZE_RANGE;
          };
          struct gl_texture_3d: public ::gtulu::internal::constant::gl_constant< gl_texture_3d > {
              static constexpr char name[] = "texture_3d";
              static constexpr ::std::uint64_t value = GL_TEXTURE_3D;
          };
          struct gl_texture_base_level: public ::gtulu::internal::constant::gl_constant< gl_texture_base_level > {
              static constexpr char name[] = "texture_base_level";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BASE_LEVEL;
          };
          struct gl_texture_binding_3d: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_3d > {
              static constexpr char name[] = "texture_binding_3d";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_3D;
          };
          struct gl_texture_depth: public ::gtulu::internal::constant::gl_constant< gl_texture_depth > {
              static constexpr char name[] = "texture_depth";
              static constexpr ::std::uint64_t value = GL_TEXTURE_DEPTH;
          };
          struct gl_texture_max_level: public ::gtulu::internal::constant::gl_constant< gl_texture_max_level > {
              static constexpr char name[] = "texture_max_level";
              static constexpr ::std::uint64_t value = GL_TEXTURE_MAX_LEVEL;
          };
          struct gl_texture_max_lod: public ::gtulu::internal::constant::gl_constant< gl_texture_max_lod > {
              static constexpr char name[] = "texture_max_lod";
              static constexpr ::std::uint64_t value = GL_TEXTURE_MAX_LOD;
          };
          struct gl_texture_min_lod: public ::gtulu::internal::constant::gl_constant< gl_texture_min_lod > {
              static constexpr char name[] = "texture_min_lod";
              static constexpr ::std::uint64_t value = GL_TEXTURE_MIN_LOD;
          };
          struct gl_texture_wrap_r: public ::gtulu::internal::constant::gl_constant< gl_texture_wrap_r > {
              static constexpr char name[] = "texture_wrap_r";
              static constexpr ::std::uint64_t value = GL_TEXTURE_WRAP_R;
          };
          struct gl_unpack_image_height: public ::gtulu::internal::constant::gl_constant< gl_unpack_image_height > {
              static constexpr char name[] = "unpack_image_height";
              static constexpr ::std::uint64_t value = GL_UNPACK_IMAGE_HEIGHT;
          };
          struct gl_unpack_skip_images: public ::gtulu::internal::constant::gl_constant< gl_unpack_skip_images > {
              static constexpr char name[] = "unpack_skip_images";
              static constexpr ::std::uint64_t value = GL_UNPACK_SKIP_IMAGES;
          };
          struct gl_unsigned_byte_2_3_3_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_byte_2_3_3_rev > {
              static constexpr char name[] = "unsigned_byte_2_3_3_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_BYTE_2_3_3_REV;
          };
          struct gl_unsigned_byte_3_3_2: public ::gtulu::internal::constant::gl_constant< gl_unsigned_byte_3_3_2 > {
              static constexpr char name[] = "unsigned_byte_3_3_2";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_BYTE_3_3_2;
          };
          struct gl_unsigned_int_10_10_10_2: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_10_10_10_2 > {
              static constexpr char name[] = "unsigned_int_10_10_10_2";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_10_10_10_2;
          };
          struct gl_unsigned_int_2_10_10_10_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_2_10_10_10_rev > {
              static constexpr char name[] = "unsigned_int_2_10_10_10_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_2_10_10_10_REV;
          };
          struct gl_unsigned_int_8_8_8_8: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_8_8_8_8 > {
              static constexpr char name[] = "unsigned_int_8_8_8_8";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_8_8_8_8;
          };
          struct gl_unsigned_int_8_8_8_8_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_8_8_8_8_rev > {
              static constexpr char name[] = "unsigned_int_8_8_8_8_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_8_8_8_8_REV;
          };
          struct gl_unsigned_short_1_5_5_5_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_1_5_5_5_rev > {
              static constexpr char name[] = "unsigned_short_1_5_5_5_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_SHORT_1_5_5_5_REV;
          };
          struct gl_unsigned_short_4_4_4_4: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_4_4_4_4 > {
              static constexpr char name[] = "unsigned_short_4_4_4_4";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_SHORT_4_4_4_4;
          };
          struct gl_unsigned_short_4_4_4_4_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_4_4_4_4_rev > {
              static constexpr char name[] = "unsigned_short_4_4_4_4_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_SHORT_4_4_4_4_REV;
          };
          struct gl_unsigned_short_5_5_5_1: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_5_5_5_1 > {
              static constexpr char name[] = "unsigned_short_5_5_5_1";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_SHORT_5_5_5_1;
          };
          struct gl_unsigned_short_5_6_5: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_5_6_5 > {
              static constexpr char name[] = "unsigned_short_5_6_5";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_SHORT_5_6_5;
          };
          struct gl_unsigned_short_5_6_5_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_short_5_6_5_rev > {
              static constexpr char name[] = "unsigned_short_5_6_5_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_SHORT_5_6_5_REV;
          };
          struct gl_version_1_2: public ::gtulu::internal::constant::gl_constant< gl_version_1_2 > {
              static constexpr char name[] = "version_1_2";
              static constexpr ::std::uint64_t value = GL_VERSION_1_2;
          };
        } // namespace cst
      } // namespace v1_2
      namespace v1_3 {
        namespace cst {
          struct gl_active_texture: public ::gtulu::internal::constant::gl_constant< gl_active_texture > {
              static constexpr char name[] = "active_texture";
              static constexpr ::std::uint64_t value = GL_ACTIVE_TEXTURE;
          };
          struct gl_clamp_to_border: public ::gtulu::internal::constant::gl_constant< gl_clamp_to_border > {
              static constexpr char name[] = "clamp_to_border";
              static constexpr ::std::uint64_t value = GL_CLAMP_TO_BORDER;
          };
          struct gl_compressed_rgb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgb > {
              static constexpr char name[] = "compressed_rgb";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RGB;
          };
          struct gl_compressed_rgba: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgba > {
              static constexpr char name[] = "compressed_rgba";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RGBA;
          };
          struct gl_compressed_texture_formats: public ::gtulu::internal::constant::gl_constant< gl_compressed_texture_formats > {
              static constexpr char name[] = "compressed_texture_formats";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_TEXTURE_FORMATS;
          };
          struct gl_max_cube_map_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_cube_map_texture_size > {
              static constexpr char name[] = "max_cube_map_texture_size";
              static constexpr ::std::uint64_t value = GL_MAX_CUBE_MAP_TEXTURE_SIZE;
          };
          struct gl_multisample: public ::gtulu::internal::constant::gl_constant< gl_multisample > {
              static constexpr char name[] = "multisample";
              static constexpr ::std::uint64_t value = GL_MULTISAMPLE;
          };
          struct gl_num_compressed_texture_formats: public ::gtulu::internal::constant::gl_constant< gl_num_compressed_texture_formats > {
              static constexpr char name[] = "num_compressed_texture_formats";
              static constexpr ::std::uint64_t value = GL_NUM_COMPRESSED_TEXTURE_FORMATS;
          };
          struct gl_proxy_texture_cube_map: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_cube_map > {
              static constexpr char name[] = "proxy_texture_cube_map";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_CUBE_MAP;
          };
          struct gl_samples: public ::gtulu::internal::constant::gl_constant< gl_samples > {
              static constexpr char name[] = "samples";
              static constexpr ::std::uint64_t value = GL_SAMPLES;
          };
          struct gl_sample_alpha_to_coverage: public ::gtulu::internal::constant::gl_constant< gl_sample_alpha_to_coverage > {
              static constexpr char name[] = "sample_alpha_to_coverage";
              static constexpr ::std::uint64_t value = GL_SAMPLE_ALPHA_TO_COVERAGE;
          };
          struct gl_sample_alpha_to_one: public ::gtulu::internal::constant::gl_constant< gl_sample_alpha_to_one > {
              static constexpr char name[] = "sample_alpha_to_one";
              static constexpr ::std::uint64_t value = GL_SAMPLE_ALPHA_TO_ONE;
          };
          struct gl_sample_buffers: public ::gtulu::internal::constant::gl_constant< gl_sample_buffers > {
              static constexpr char name[] = "sample_buffers";
              static constexpr ::std::uint64_t value = GL_SAMPLE_BUFFERS;
          };
          struct gl_sample_coverage: public ::gtulu::internal::constant::gl_constant< gl_sample_coverage > {
              static constexpr char name[] = "sample_coverage";
              static constexpr ::std::uint64_t value = GL_SAMPLE_COVERAGE;
          };
          struct gl_sample_coverage_invert: public ::gtulu::internal::constant::gl_constant< gl_sample_coverage_invert > {
              static constexpr char name[] = "sample_coverage_invert";
              static constexpr ::std::uint64_t value = GL_SAMPLE_COVERAGE_INVERT;
          };
          struct gl_sample_coverage_value: public ::gtulu::internal::constant::gl_constant< gl_sample_coverage_value > {
              static constexpr char name[] = "sample_coverage_value";
              static constexpr ::std::uint64_t value = GL_SAMPLE_COVERAGE_VALUE;
          };
          struct gl_texture0: public ::gtulu::internal::constant::gl_constant< gl_texture0 > {
              static constexpr char name[] = "texture0";
              static constexpr ::std::uint64_t value = GL_TEXTURE0;
          };
          struct gl_texture1: public ::gtulu::internal::constant::gl_constant< gl_texture1 > {
              static constexpr char name[] = "texture1";
              static constexpr ::std::uint64_t value = GL_TEXTURE1;
          };
          struct gl_texture10: public ::gtulu::internal::constant::gl_constant< gl_texture10 > {
              static constexpr char name[] = "texture10";
              static constexpr ::std::uint64_t value = GL_TEXTURE10;
          };
          struct gl_texture11: public ::gtulu::internal::constant::gl_constant< gl_texture11 > {
              static constexpr char name[] = "texture11";
              static constexpr ::std::uint64_t value = GL_TEXTURE11;
          };
          struct gl_texture12: public ::gtulu::internal::constant::gl_constant< gl_texture12 > {
              static constexpr char name[] = "texture12";
              static constexpr ::std::uint64_t value = GL_TEXTURE12;
          };
          struct gl_texture13: public ::gtulu::internal::constant::gl_constant< gl_texture13 > {
              static constexpr char name[] = "texture13";
              static constexpr ::std::uint64_t value = GL_TEXTURE13;
          };
          struct gl_texture14: public ::gtulu::internal::constant::gl_constant< gl_texture14 > {
              static constexpr char name[] = "texture14";
              static constexpr ::std::uint64_t value = GL_TEXTURE14;
          };
          struct gl_texture15: public ::gtulu::internal::constant::gl_constant< gl_texture15 > {
              static constexpr char name[] = "texture15";
              static constexpr ::std::uint64_t value = GL_TEXTURE15;
          };
          struct gl_texture16: public ::gtulu::internal::constant::gl_constant< gl_texture16 > {
              static constexpr char name[] = "texture16";
              static constexpr ::std::uint64_t value = GL_TEXTURE16;
          };
          struct gl_texture17: public ::gtulu::internal::constant::gl_constant< gl_texture17 > {
              static constexpr char name[] = "texture17";
              static constexpr ::std::uint64_t value = GL_TEXTURE17;
          };
          struct gl_texture18: public ::gtulu::internal::constant::gl_constant< gl_texture18 > {
              static constexpr char name[] = "texture18";
              static constexpr ::std::uint64_t value = GL_TEXTURE18;
          };
          struct gl_texture19: public ::gtulu::internal::constant::gl_constant< gl_texture19 > {
              static constexpr char name[] = "texture19";
              static constexpr ::std::uint64_t value = GL_TEXTURE19;
          };
          struct gl_texture2: public ::gtulu::internal::constant::gl_constant< gl_texture2 > {
              static constexpr char name[] = "texture2";
              static constexpr ::std::uint64_t value = GL_TEXTURE2;
          };
          struct gl_texture20: public ::gtulu::internal::constant::gl_constant< gl_texture20 > {
              static constexpr char name[] = "texture20";
              static constexpr ::std::uint64_t value = GL_TEXTURE20;
          };
          struct gl_texture21: public ::gtulu::internal::constant::gl_constant< gl_texture21 > {
              static constexpr char name[] = "texture21";
              static constexpr ::std::uint64_t value = GL_TEXTURE21;
          };
          struct gl_texture22: public ::gtulu::internal::constant::gl_constant< gl_texture22 > {
              static constexpr char name[] = "texture22";
              static constexpr ::std::uint64_t value = GL_TEXTURE22;
          };
          struct gl_texture23: public ::gtulu::internal::constant::gl_constant< gl_texture23 > {
              static constexpr char name[] = "texture23";
              static constexpr ::std::uint64_t value = GL_TEXTURE23;
          };
          struct gl_texture24: public ::gtulu::internal::constant::gl_constant< gl_texture24 > {
              static constexpr char name[] = "texture24";
              static constexpr ::std::uint64_t value = GL_TEXTURE24;
          };
          struct gl_texture25: public ::gtulu::internal::constant::gl_constant< gl_texture25 > {
              static constexpr char name[] = "texture25";
              static constexpr ::std::uint64_t value = GL_TEXTURE25;
          };
          struct gl_texture26: public ::gtulu::internal::constant::gl_constant< gl_texture26 > {
              static constexpr char name[] = "texture26";
              static constexpr ::std::uint64_t value = GL_TEXTURE26;
          };
          struct gl_texture27: public ::gtulu::internal::constant::gl_constant< gl_texture27 > {
              static constexpr char name[] = "texture27";
              static constexpr ::std::uint64_t value = GL_TEXTURE27;
          };
          struct gl_texture28: public ::gtulu::internal::constant::gl_constant< gl_texture28 > {
              static constexpr char name[] = "texture28";
              static constexpr ::std::uint64_t value = GL_TEXTURE28;
          };
          struct gl_texture29: public ::gtulu::internal::constant::gl_constant< gl_texture29 > {
              static constexpr char name[] = "texture29";
              static constexpr ::std::uint64_t value = GL_TEXTURE29;
          };
          struct gl_texture3: public ::gtulu::internal::constant::gl_constant< gl_texture3 > {
              static constexpr char name[] = "texture3";
              static constexpr ::std::uint64_t value = GL_TEXTURE3;
          };
          struct gl_texture30: public ::gtulu::internal::constant::gl_constant< gl_texture30 > {
              static constexpr char name[] = "texture30";
              static constexpr ::std::uint64_t value = GL_TEXTURE30;
          };
          struct gl_texture31: public ::gtulu::internal::constant::gl_constant< gl_texture31 > {
              static constexpr char name[] = "texture31";
              static constexpr ::std::uint64_t value = GL_TEXTURE31;
          };
          struct gl_texture4: public ::gtulu::internal::constant::gl_constant< gl_texture4 > {
              static constexpr char name[] = "texture4";
              static constexpr ::std::uint64_t value = GL_TEXTURE4;
          };
          struct gl_texture5: public ::gtulu::internal::constant::gl_constant< gl_texture5 > {
              static constexpr char name[] = "texture5";
              static constexpr ::std::uint64_t value = GL_TEXTURE5;
          };
          struct gl_texture6: public ::gtulu::internal::constant::gl_constant< gl_texture6 > {
              static constexpr char name[] = "texture6";
              static constexpr ::std::uint64_t value = GL_TEXTURE6;
          };
          struct gl_texture7: public ::gtulu::internal::constant::gl_constant< gl_texture7 > {
              static constexpr char name[] = "texture7";
              static constexpr ::std::uint64_t value = GL_TEXTURE7;
          };
          struct gl_texture8: public ::gtulu::internal::constant::gl_constant< gl_texture8 > {
              static constexpr char name[] = "texture8";
              static constexpr ::std::uint64_t value = GL_TEXTURE8;
          };
          struct gl_texture9: public ::gtulu::internal::constant::gl_constant< gl_texture9 > {
              static constexpr char name[] = "texture9";
              static constexpr ::std::uint64_t value = GL_TEXTURE9;
          };
          struct gl_texture_binding_cube_map: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_cube_map > {
              static constexpr char name[] = "texture_binding_cube_map";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_CUBE_MAP;
          };
          struct gl_texture_compressed: public ::gtulu::internal::constant::gl_constant< gl_texture_compressed > {
              static constexpr char name[] = "texture_compressed";
              static constexpr ::std::uint64_t value = GL_TEXTURE_COMPRESSED;
          };
          struct gl_texture_compressed_image_size: public ::gtulu::internal::constant::gl_constant< gl_texture_compressed_image_size > {
              static constexpr char name[] = "texture_compressed_image_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_COMPRESSED_IMAGE_SIZE;
          };
          struct gl_texture_compression_hint: public ::gtulu::internal::constant::gl_constant< gl_texture_compression_hint > {
              static constexpr char name[] = "texture_compression_hint";
              static constexpr ::std::uint64_t value = GL_TEXTURE_COMPRESSION_HINT;
          };
          struct gl_texture_cube_map: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map > {
              static constexpr char name[] = "texture_cube_map";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP;
          };
          struct gl_texture_cube_map_negative_x: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_negative_x > {
              static constexpr char name[] = "texture_cube_map_negative_x";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_NEGATIVE_X;
          };
          struct gl_texture_cube_map_negative_y: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_negative_y > {
              static constexpr char name[] = "texture_cube_map_negative_y";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_NEGATIVE_Y;
          };
          struct gl_texture_cube_map_negative_z: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_negative_z > {
              static constexpr char name[] = "texture_cube_map_negative_z";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_NEGATIVE_Z;
          };
          struct gl_texture_cube_map_positive_x: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_positive_x > {
              static constexpr char name[] = "texture_cube_map_positive_x";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_POSITIVE_X;
          };
          struct gl_texture_cube_map_positive_y: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_positive_y > {
              static constexpr char name[] = "texture_cube_map_positive_y";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_POSITIVE_Y;
          };
          struct gl_texture_cube_map_positive_z: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_positive_z > {
              static constexpr char name[] = "texture_cube_map_positive_z";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_POSITIVE_Z;
          };
          struct gl_version_1_3: public ::gtulu::internal::constant::gl_constant< gl_version_1_3 > {
              static constexpr char name[] = "version_1_3";
              static constexpr ::std::uint64_t value = GL_VERSION_1_3;
          };
        } // namespace cst
      } // namespace v1_3
      namespace v1_4 {
        namespace cst {
          struct gl_blend_dst_alpha: public ::gtulu::internal::constant::gl_constant< gl_blend_dst_alpha > {
              static constexpr char name[] = "blend_dst_alpha";
              static constexpr ::std::uint64_t value = GL_BLEND_DST_ALPHA;
          };
          struct gl_blend_dst_rgb: public ::gtulu::internal::constant::gl_constant< gl_blend_dst_rgb > {
              static constexpr char name[] = "blend_dst_rgb";
              static constexpr ::std::uint64_t value = GL_BLEND_DST_RGB;
          };
          struct gl_blend_src_alpha: public ::gtulu::internal::constant::gl_constant< gl_blend_src_alpha > {
              static constexpr char name[] = "blend_src_alpha";
              static constexpr ::std::uint64_t value = GL_BLEND_SRC_ALPHA;
          };
          struct gl_blend_src_rgb: public ::gtulu::internal::constant::gl_constant< gl_blend_src_rgb > {
              static constexpr char name[] = "blend_src_rgb";
              static constexpr ::std::uint64_t value = GL_BLEND_SRC_RGB;
          };
          struct gl_decr_wrap: public ::gtulu::internal::constant::gl_constant< gl_decr_wrap > {
              static constexpr char name[] = "decr_wrap";
              static constexpr ::std::uint64_t value = GL_DECR_WRAP;
          };
          struct gl_depth_component16: public ::gtulu::internal::constant::gl_constant< gl_depth_component16 > {
              static constexpr char name[] = "depth_component16";
              static constexpr ::std::uint64_t value = GL_DEPTH_COMPONENT16;
          };
          struct gl_depth_component24: public ::gtulu::internal::constant::gl_constant< gl_depth_component24 > {
              static constexpr char name[] = "depth_component24";
              static constexpr ::std::uint64_t value = GL_DEPTH_COMPONENT24;
          };
          struct gl_depth_component32: public ::gtulu::internal::constant::gl_constant< gl_depth_component32 > {
              static constexpr char name[] = "depth_component32";
              static constexpr ::std::uint64_t value = GL_DEPTH_COMPONENT32;
          };
          struct gl_incr_wrap: public ::gtulu::internal::constant::gl_constant< gl_incr_wrap > {
              static constexpr char name[] = "incr_wrap";
              static constexpr ::std::uint64_t value = GL_INCR_WRAP;
          };
          struct gl_max_texture_lod_bias: public ::gtulu::internal::constant::gl_constant< gl_max_texture_lod_bias > {
              static constexpr char name[] = "max_texture_lod_bias";
              static constexpr ::std::uint64_t value = GL_MAX_TEXTURE_LOD_BIAS;
          };
          struct gl_mirrored_repeat: public ::gtulu::internal::constant::gl_constant< gl_mirrored_repeat > {
              static constexpr char name[] = "mirrored_repeat";
              static constexpr ::std::uint64_t value = GL_MIRRORED_REPEAT;
          };
          struct gl_point_fade_threshold_size: public ::gtulu::internal::constant::gl_constant< gl_point_fade_threshold_size > {
              static constexpr char name[] = "point_fade_threshold_size";
              static constexpr ::std::uint64_t value = GL_POINT_FADE_THRESHOLD_SIZE;
          };
          struct gl_texture_compare_func: public ::gtulu::internal::constant::gl_constant< gl_texture_compare_func > {
              static constexpr char name[] = "texture_compare_func";
              static constexpr ::std::uint64_t value = GL_TEXTURE_COMPARE_FUNC;
          };
          struct gl_texture_compare_mode: public ::gtulu::internal::constant::gl_constant< gl_texture_compare_mode > {
              static constexpr char name[] = "texture_compare_mode";
              static constexpr ::std::uint64_t value = GL_TEXTURE_COMPARE_MODE;
          };
          struct gl_texture_depth_size: public ::gtulu::internal::constant::gl_constant< gl_texture_depth_size > {
              static constexpr char name[] = "texture_depth_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_DEPTH_SIZE;
          };
          struct gl_texture_lod_bias: public ::gtulu::internal::constant::gl_constant< gl_texture_lod_bias > {
              static constexpr char name[] = "texture_lod_bias";
              static constexpr ::std::uint64_t value = GL_TEXTURE_LOD_BIAS;
          };
          struct gl_version_1_4: public ::gtulu::internal::constant::gl_constant< gl_version_1_4 > {
              static constexpr char name[] = "version_1_4";
              static constexpr ::std::uint64_t value = GL_VERSION_1_4;
          };
        } // namespace cst
      } // namespace v1_4
      namespace v1_5 {
        namespace cst {
          struct gl_array_buffer: public ::gtulu::internal::constant::gl_constant< gl_array_buffer > {
              static constexpr char name[] = "array_buffer";
              static constexpr ::std::uint64_t value = GL_ARRAY_BUFFER;
          };
          struct gl_array_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_array_buffer_binding > {
              static constexpr char name[] = "array_buffer_binding";
              static constexpr ::std::uint64_t value = GL_ARRAY_BUFFER_BINDING;
          };
          struct gl_buffer_access: public ::gtulu::internal::constant::gl_constant< gl_buffer_access > {
              static constexpr char name[] = "buffer_access";
              static constexpr ::std::uint64_t value = GL_BUFFER_ACCESS;
          };
          struct gl_buffer_mapped: public ::gtulu::internal::constant::gl_constant< gl_buffer_mapped > {
              static constexpr char name[] = "buffer_mapped";
              static constexpr ::std::uint64_t value = GL_BUFFER_MAPPED;
          };
          struct gl_buffer_map_pointer: public ::gtulu::internal::constant::gl_constant< gl_buffer_map_pointer > {
              static constexpr char name[] = "buffer_map_pointer";
              static constexpr ::std::uint64_t value = GL_BUFFER_MAP_POINTER;
          };
          struct gl_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_buffer_size > {
              static constexpr char name[] = "buffer_size";
              static constexpr ::std::uint64_t value = GL_BUFFER_SIZE;
          };
          struct gl_buffer_usage: public ::gtulu::internal::constant::gl_constant< gl_buffer_usage > {
              static constexpr char name[] = "buffer_usage";
              static constexpr ::std::uint64_t value = GL_BUFFER_USAGE;
          };
          struct gl_current_query: public ::gtulu::internal::constant::gl_constant< gl_current_query > {
              static constexpr char name[] = "current_query";
              static constexpr ::std::uint64_t value = GL_CURRENT_QUERY;
          };
          struct gl_dynamic_copy: public ::gtulu::internal::constant::gl_constant< gl_dynamic_copy > {
              static constexpr char name[] = "dynamic_copy";
              static constexpr ::std::uint64_t value = GL_DYNAMIC_COPY;
          };
          struct gl_dynamic_draw: public ::gtulu::internal::constant::gl_constant< gl_dynamic_draw > {
              static constexpr char name[] = "dynamic_draw";
              static constexpr ::std::uint64_t value = GL_DYNAMIC_DRAW;
          };
          struct gl_dynamic_read: public ::gtulu::internal::constant::gl_constant< gl_dynamic_read > {
              static constexpr char name[] = "dynamic_read";
              static constexpr ::std::uint64_t value = GL_DYNAMIC_READ;
          };
          struct gl_element_array_buffer: public ::gtulu::internal::constant::gl_constant< gl_element_array_buffer > {
              static constexpr char name[] = "element_array_buffer";
              static constexpr ::std::uint64_t value = GL_ELEMENT_ARRAY_BUFFER;
          };
          struct gl_element_array_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_element_array_buffer_binding > {
              static constexpr char name[] = "element_array_buffer_binding";
              static constexpr ::std::uint64_t value = GL_ELEMENT_ARRAY_BUFFER_BINDING;
          };
          struct gl_query_counter_bits: public ::gtulu::internal::constant::gl_constant< gl_query_counter_bits > {
              static constexpr char name[] = "query_counter_bits";
              static constexpr ::std::uint64_t value = GL_QUERY_COUNTER_BITS;
          };
          struct gl_query_result: public ::gtulu::internal::constant::gl_constant< gl_query_result > {
              static constexpr char name[] = "query_result";
              static constexpr ::std::uint64_t value = GL_QUERY_RESULT;
          };
          struct gl_query_result_available: public ::gtulu::internal::constant::gl_constant< gl_query_result_available > {
              static constexpr char name[] = "query_result_available";
              static constexpr ::std::uint64_t value = GL_QUERY_RESULT_AVAILABLE;
          };
          struct gl_read_only: public ::gtulu::internal::constant::gl_constant< gl_read_only > {
              static constexpr char name[] = "read_only";
              static constexpr ::std::uint64_t value = GL_READ_ONLY;
          };
          struct gl_read_write: public ::gtulu::internal::constant::gl_constant< gl_read_write > {
              static constexpr char name[] = "read_write";
              static constexpr ::std::uint64_t value = GL_READ_WRITE;
          };
          struct gl_samples_passed: public ::gtulu::internal::constant::gl_constant< gl_samples_passed > {
              static constexpr char name[] = "samples_passed";
              static constexpr ::std::uint64_t value = GL_SAMPLES_PASSED;
          };
          struct gl_static_copy: public ::gtulu::internal::constant::gl_constant< gl_static_copy > {
              static constexpr char name[] = "static_copy";
              static constexpr ::std::uint64_t value = GL_STATIC_COPY;
          };
          struct gl_static_draw: public ::gtulu::internal::constant::gl_constant< gl_static_draw > {
              static constexpr char name[] = "static_draw";
              static constexpr ::std::uint64_t value = GL_STATIC_DRAW;
          };
          struct gl_static_read: public ::gtulu::internal::constant::gl_constant< gl_static_read > {
              static constexpr char name[] = "static_read";
              static constexpr ::std::uint64_t value = GL_STATIC_READ;
          };
          struct gl_stream_copy: public ::gtulu::internal::constant::gl_constant< gl_stream_copy > {
              static constexpr char name[] = "stream_copy";
              static constexpr ::std::uint64_t value = GL_STREAM_COPY;
          };
          struct gl_stream_draw: public ::gtulu::internal::constant::gl_constant< gl_stream_draw > {
              static constexpr char name[] = "stream_draw";
              static constexpr ::std::uint64_t value = GL_STREAM_DRAW;
          };
          struct gl_stream_read: public ::gtulu::internal::constant::gl_constant< gl_stream_read > {
              static constexpr char name[] = "stream_read";
              static constexpr ::std::uint64_t value = GL_STREAM_READ;
          };
          struct gl_version_1_5: public ::gtulu::internal::constant::gl_constant< gl_version_1_5 > {
              static constexpr char name[] = "version_1_5";
              static constexpr ::std::uint64_t value = GL_VERSION_1_5;
          };
          struct gl_vertex_attrib_array_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_buffer_binding > {
              static constexpr char name[] = "vertex_attrib_array_buffer_binding";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
          };
          struct gl_write_only: public ::gtulu::internal::constant::gl_constant< gl_write_only > {
              static constexpr char name[] = "write_only";
              static constexpr ::std::uint64_t value = GL_WRITE_ONLY;
          };
        } // namespace cst
      } // namespace v1_5
      namespace v2_0 {
        namespace cst {
          struct gl_active_attributes: public ::gtulu::internal::constant::gl_constant< gl_active_attributes > {
              static constexpr char name[] = "active_attributes";
              static constexpr ::std::uint64_t value = GL_ACTIVE_ATTRIBUTES;
          };
          struct gl_active_attribute_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_attribute_max_length > {
              static constexpr char name[] = "active_attribute_max_length";
              static constexpr ::std::uint64_t value = GL_ACTIVE_ATTRIBUTE_MAX_LENGTH;
          };
          struct gl_active_uniforms: public ::gtulu::internal::constant::gl_constant< gl_active_uniforms > {
              static constexpr char name[] = "active_uniforms";
              static constexpr ::std::uint64_t value = GL_ACTIVE_UNIFORMS;
          };
          struct gl_active_uniform_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_uniform_max_length > {
              static constexpr char name[] = "active_uniform_max_length";
              static constexpr ::std::uint64_t value = GL_ACTIVE_UNIFORM_MAX_LENGTH;
          };
          struct gl_attached_shaders: public ::gtulu::internal::constant::gl_constant< gl_attached_shaders > {
              static constexpr char name[] = "attached_shaders";
              static constexpr ::std::uint64_t value = GL_ATTACHED_SHADERS;
          };
          struct gl_blend_equation_alpha: public ::gtulu::internal::constant::gl_constant< gl_blend_equation_alpha > {
              static constexpr char name[] = "blend_equation_alpha";
              static constexpr ::std::uint64_t value = GL_BLEND_EQUATION_ALPHA;
          };
          struct gl_blend_equation_rgb: public ::gtulu::internal::constant::gl_constant< gl_blend_equation_rgb > {
              static constexpr char name[] = "blend_equation_rgb";
              static constexpr ::std::uint64_t value = GL_BLEND_EQUATION_RGB;
          };
          struct gl_bool: public ::gtulu::internal::constant::gl_constant< gl_bool > {
              static constexpr char name[] = "bool";
              static constexpr ::std::uint64_t value = GL_BOOL;
          };
          struct gl_bool_vec2: public ::gtulu::internal::constant::gl_constant< gl_bool_vec2 > {
              static constexpr char name[] = "bool_vec2";
              static constexpr ::std::uint64_t value = GL_BOOL_VEC2;
          };
          struct gl_bool_vec3: public ::gtulu::internal::constant::gl_constant< gl_bool_vec3 > {
              static constexpr char name[] = "bool_vec3";
              static constexpr ::std::uint64_t value = GL_BOOL_VEC3;
          };
          struct gl_bool_vec4: public ::gtulu::internal::constant::gl_constant< gl_bool_vec4 > {
              static constexpr char name[] = "bool_vec4";
              static constexpr ::std::uint64_t value = GL_BOOL_VEC4;
          };
          struct gl_compile_status: public ::gtulu::internal::constant::gl_constant< gl_compile_status > {
              static constexpr char name[] = "compile_status";
              static constexpr ::std::uint64_t value = GL_COMPILE_STATUS;
          };
          struct gl_current_program: public ::gtulu::internal::constant::gl_constant< gl_current_program > {
              static constexpr char name[] = "current_program";
              static constexpr ::std::uint64_t value = GL_CURRENT_PROGRAM;
          };
          struct gl_current_vertex_attrib: public ::gtulu::internal::constant::gl_constant< gl_current_vertex_attrib > {
              static constexpr char name[] = "current_vertex_attrib";
              static constexpr ::std::uint64_t value = GL_CURRENT_VERTEX_ATTRIB;
          };
          struct gl_delete_status: public ::gtulu::internal::constant::gl_constant< gl_delete_status > {
              static constexpr char name[] = "delete_status";
              static constexpr ::std::uint64_t value = GL_DELETE_STATUS;
          };
          struct gl_draw_buffer0: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer0 > {
              static constexpr char name[] = "draw_buffer0";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER0;
          };
          struct gl_draw_buffer1: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer1 > {
              static constexpr char name[] = "draw_buffer1";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER1;
          };
          struct gl_draw_buffer10: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer10 > {
              static constexpr char name[] = "draw_buffer10";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER10;
          };
          struct gl_draw_buffer11: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer11 > {
              static constexpr char name[] = "draw_buffer11";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER11;
          };
          struct gl_draw_buffer12: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer12 > {
              static constexpr char name[] = "draw_buffer12";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER12;
          };
          struct gl_draw_buffer13: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer13 > {
              static constexpr char name[] = "draw_buffer13";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER13;
          };
          struct gl_draw_buffer14: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer14 > {
              static constexpr char name[] = "draw_buffer14";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER14;
          };
          struct gl_draw_buffer15: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer15 > {
              static constexpr char name[] = "draw_buffer15";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER15;
          };
          struct gl_draw_buffer2: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer2 > {
              static constexpr char name[] = "draw_buffer2";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER2;
          };
          struct gl_draw_buffer3: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer3 > {
              static constexpr char name[] = "draw_buffer3";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER3;
          };
          struct gl_draw_buffer4: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer4 > {
              static constexpr char name[] = "draw_buffer4";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER4;
          };
          struct gl_draw_buffer5: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer5 > {
              static constexpr char name[] = "draw_buffer5";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER5;
          };
          struct gl_draw_buffer6: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer6 > {
              static constexpr char name[] = "draw_buffer6";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER6;
          };
          struct gl_draw_buffer7: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer7 > {
              static constexpr char name[] = "draw_buffer7";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER7;
          };
          struct gl_draw_buffer8: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer8 > {
              static constexpr char name[] = "draw_buffer8";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER8;
          };
          struct gl_draw_buffer9: public ::gtulu::internal::constant::gl_constant< gl_draw_buffer9 > {
              static constexpr char name[] = "draw_buffer9";
              static constexpr ::std::uint64_t value = GL_DRAW_BUFFER9;
          };
          struct gl_float_mat2: public ::gtulu::internal::constant::gl_constant< gl_float_mat2 > {
              static constexpr char name[] = "float_mat2";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT2;
          };
          struct gl_float_mat3: public ::gtulu::internal::constant::gl_constant< gl_float_mat3 > {
              static constexpr char name[] = "float_mat3";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT3;
          };
          struct gl_float_mat4: public ::gtulu::internal::constant::gl_constant< gl_float_mat4 > {
              static constexpr char name[] = "float_mat4";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT4;
          };
          struct gl_float_vec2: public ::gtulu::internal::constant::gl_constant< gl_float_vec2 > {
              static constexpr char name[] = "float_vec2";
              static constexpr ::std::uint64_t value = GL_FLOAT_VEC2;
          };
          struct gl_float_vec3: public ::gtulu::internal::constant::gl_constant< gl_float_vec3 > {
              static constexpr char name[] = "float_vec3";
              static constexpr ::std::uint64_t value = GL_FLOAT_VEC3;
          };
          struct gl_float_vec4: public ::gtulu::internal::constant::gl_constant< gl_float_vec4 > {
              static constexpr char name[] = "float_vec4";
              static constexpr ::std::uint64_t value = GL_FLOAT_VEC4;
          };
          struct gl_fragment_shader: public ::gtulu::internal::constant::gl_constant< gl_fragment_shader > {
              static constexpr char name[] = "fragment_shader";
              static constexpr ::std::uint64_t value = GL_FRAGMENT_SHADER;
          };
          struct gl_fragment_shader_derivative_hint: public ::gtulu::internal::constant::gl_constant< gl_fragment_shader_derivative_hint > {
              static constexpr char name[] = "fragment_shader_derivative_hint";
              static constexpr ::std::uint64_t value = GL_FRAGMENT_SHADER_DERIVATIVE_HINT;
          };
          struct gl_info_log_length: public ::gtulu::internal::constant::gl_constant< gl_info_log_length > {
              static constexpr char name[] = "info_log_length";
              static constexpr ::std::uint64_t value = GL_INFO_LOG_LENGTH;
          };
          struct gl_int_vec2: public ::gtulu::internal::constant::gl_constant< gl_int_vec2 > {
              static constexpr char name[] = "int_vec2";
              static constexpr ::std::uint64_t value = GL_INT_VEC2;
          };
          struct gl_int_vec3: public ::gtulu::internal::constant::gl_constant< gl_int_vec3 > {
              static constexpr char name[] = "int_vec3";
              static constexpr ::std::uint64_t value = GL_INT_VEC3;
          };
          struct gl_int_vec4: public ::gtulu::internal::constant::gl_constant< gl_int_vec4 > {
              static constexpr char name[] = "int_vec4";
              static constexpr ::std::uint64_t value = GL_INT_VEC4;
          };
          struct gl_link_status: public ::gtulu::internal::constant::gl_constant< gl_link_status > {
              static constexpr char name[] = "link_status";
              static constexpr ::std::uint64_t value = GL_LINK_STATUS;
          };
          struct gl_lower_left: public ::gtulu::internal::constant::gl_constant< gl_lower_left > {
              static constexpr char name[] = "lower_left";
              static constexpr ::std::uint64_t value = GL_LOWER_LEFT;
          };
          struct gl_max_combined_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_combined_texture_image_units > {
              static constexpr char name[] = "max_combined_texture_image_units";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_draw_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_draw_buffers > {
              static constexpr char name[] = "max_draw_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_DRAW_BUFFERS;
          };
          struct gl_max_fragment_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_uniform_components > {
              static constexpr char name[] = "max_fragment_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_UNIFORM_COMPONENTS;
          };
          struct gl_max_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_texture_image_units > {
              static constexpr char name[] = "max_texture_image_units";
              static constexpr ::std::uint64_t value = GL_MAX_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_varying_floats: public ::gtulu::internal::constant::gl_constant< gl_max_varying_floats > {
              static constexpr char name[] = "max_varying_floats";
              static constexpr ::std::uint64_t value = GL_MAX_VARYING_FLOATS;
          };
          struct gl_max_vertex_attribs: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_attribs > {
              static constexpr char name[] = "max_vertex_attribs";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_ATTRIBS;
          };
          struct gl_max_vertex_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_texture_image_units > {
              static constexpr char name[] = "max_vertex_texture_image_units";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_vertex_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_uniform_components > {
              static constexpr char name[] = "max_vertex_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_UNIFORM_COMPONENTS;
          };
          struct gl_point_sprite_coord_origin: public ::gtulu::internal::constant::gl_constant< gl_point_sprite_coord_origin > {
              static constexpr char name[] = "point_sprite_coord_origin";
              static constexpr ::std::uint64_t value = GL_POINT_SPRITE_COORD_ORIGIN;
          };
          struct gl_sampler_1d: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d > {
              static constexpr char name[] = "sampler_1d";
              static constexpr ::std::uint64_t value = GL_SAMPLER_1D;
          };
          struct gl_sampler_1d_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d_shadow > {
              static constexpr char name[] = "sampler_1d_shadow";
              static constexpr ::std::uint64_t value = GL_SAMPLER_1D_SHADOW;
          };
          struct gl_sampler_2d: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d > {
              static constexpr char name[] = "sampler_2d";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D;
          };
          struct gl_sampler_2d_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_shadow > {
              static constexpr char name[] = "sampler_2d_shadow";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D_SHADOW;
          };
          struct gl_sampler_3d: public ::gtulu::internal::constant::gl_constant< gl_sampler_3d > {
              static constexpr char name[] = "sampler_3d";
              static constexpr ::std::uint64_t value = GL_SAMPLER_3D;
          };
          struct gl_sampler_cube: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube > {
              static constexpr char name[] = "sampler_cube";
              static constexpr ::std::uint64_t value = GL_SAMPLER_CUBE;
          };
          struct gl_shader_source_length: public ::gtulu::internal::constant::gl_constant< gl_shader_source_length > {
              static constexpr char name[] = "shader_source_length";
              static constexpr ::std::uint64_t value = GL_SHADER_SOURCE_LENGTH;
          };
          struct gl_shader_type: public ::gtulu::internal::constant::gl_constant< gl_shader_type > {
              static constexpr char name[] = "shader_type";
              static constexpr ::std::uint64_t value = GL_SHADER_TYPE;
          };
          struct gl_shading_language_version: public ::gtulu::internal::constant::gl_constant< gl_shading_language_version > {
              static constexpr char name[] = "shading_language_version";
              static constexpr ::std::uint64_t value = GL_SHADING_LANGUAGE_VERSION;
          };
          struct gl_stencil_back_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_fail > {
              static constexpr char name[] = "stencil_back_fail";
              static constexpr ::std::uint64_t value = GL_STENCIL_BACK_FAIL;
          };
          struct gl_stencil_back_func: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_func > {
              static constexpr char name[] = "stencil_back_func";
              static constexpr ::std::uint64_t value = GL_STENCIL_BACK_FUNC;
          };
          struct gl_stencil_back_pass_depth_fail: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_pass_depth_fail > {
              static constexpr char name[] = "stencil_back_pass_depth_fail";
              static constexpr ::std::uint64_t value = GL_STENCIL_BACK_PASS_DEPTH_FAIL;
          };
          struct gl_stencil_back_pass_depth_pass: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_pass_depth_pass > {
              static constexpr char name[] = "stencil_back_pass_depth_pass";
              static constexpr ::std::uint64_t value = GL_STENCIL_BACK_PASS_DEPTH_PASS;
          };
          struct gl_stencil_back_ref: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_ref > {
              static constexpr char name[] = "stencil_back_ref";
              static constexpr ::std::uint64_t value = GL_STENCIL_BACK_REF;
          };
          struct gl_stencil_back_value_mask: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_value_mask > {
              static constexpr char name[] = "stencil_back_value_mask";
              static constexpr ::std::uint64_t value = GL_STENCIL_BACK_VALUE_MASK;
          };
          struct gl_stencil_back_writemask: public ::gtulu::internal::constant::gl_constant< gl_stencil_back_writemask > {
              static constexpr char name[] = "stencil_back_writemask";
              static constexpr ::std::uint64_t value = GL_STENCIL_BACK_WRITEMASK;
          };
          struct gl_upper_left: public ::gtulu::internal::constant::gl_constant< gl_upper_left > {
              static constexpr char name[] = "upper_left";
              static constexpr ::std::uint64_t value = GL_UPPER_LEFT;
          };
          struct gl_validate_status: public ::gtulu::internal::constant::gl_constant< gl_validate_status > {
              static constexpr char name[] = "validate_status";
              static constexpr ::std::uint64_t value = GL_VALIDATE_STATUS;
          };
          struct gl_version_2_0: public ::gtulu::internal::constant::gl_constant< gl_version_2_0 > {
              static constexpr char name[] = "version_2_0";
              static constexpr ::std::uint64_t value = GL_VERSION_2_0;
          };
          struct gl_vertex_attrib_array_enabled: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_enabled > {
              static constexpr char name[] = "vertex_attrib_array_enabled";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_ENABLED;
          };
          struct gl_vertex_attrib_array_normalized: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_normalized > {
              static constexpr char name[] = "vertex_attrib_array_normalized";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_NORMALIZED;
          };
          struct gl_vertex_attrib_array_pointer: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_pointer > {
              static constexpr char name[] = "vertex_attrib_array_pointer";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_POINTER;
          };
          struct gl_vertex_attrib_array_size: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_size > {
              static constexpr char name[] = "vertex_attrib_array_size";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_SIZE;
          };
          struct gl_vertex_attrib_array_stride: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_stride > {
              static constexpr char name[] = "vertex_attrib_array_stride";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_STRIDE;
          };
          struct gl_vertex_attrib_array_type: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_type > {
              static constexpr char name[] = "vertex_attrib_array_type";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_TYPE;
          };
          struct gl_vertex_program_point_size: public ::gtulu::internal::constant::gl_constant< gl_vertex_program_point_size > {
              static constexpr char name[] = "vertex_program_point_size";
              static constexpr ::std::uint64_t value = GL_VERTEX_PROGRAM_POINT_SIZE;
          };
          struct gl_vertex_shader: public ::gtulu::internal::constant::gl_constant< gl_vertex_shader > {
              static constexpr char name[] = "vertex_shader";
              static constexpr ::std::uint64_t value = GL_VERTEX_SHADER;
          };
        } // namespace cst
      } // namespace v2_0
      namespace v2_1 {
        namespace cst {
          struct gl_compressed_srgb: public ::gtulu::internal::constant::gl_constant< gl_compressed_srgb > {
              static constexpr char name[] = "compressed_srgb";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_SRGB;
          };
          struct gl_compressed_srgb_alpha: public ::gtulu::internal::constant::gl_constant< gl_compressed_srgb_alpha > {
              static constexpr char name[] = "compressed_srgb_alpha";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_SRGB_ALPHA;
          };
          struct gl_float_mat2x3: public ::gtulu::internal::constant::gl_constant< gl_float_mat2x3 > {
              static constexpr char name[] = "float_mat2x3";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT2x3;
          };
          struct gl_float_mat2x4: public ::gtulu::internal::constant::gl_constant< gl_float_mat2x4 > {
              static constexpr char name[] = "float_mat2x4";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT2x4;
          };
          struct gl_float_mat3x2: public ::gtulu::internal::constant::gl_constant< gl_float_mat3x2 > {
              static constexpr char name[] = "float_mat3x2";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT3x2;
          };
          struct gl_float_mat3x4: public ::gtulu::internal::constant::gl_constant< gl_float_mat3x4 > {
              static constexpr char name[] = "float_mat3x4";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT3x4;
          };
          struct gl_float_mat4x2: public ::gtulu::internal::constant::gl_constant< gl_float_mat4x2 > {
              static constexpr char name[] = "float_mat4x2";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT4x2;
          };
          struct gl_float_mat4x3: public ::gtulu::internal::constant::gl_constant< gl_float_mat4x3 > {
              static constexpr char name[] = "float_mat4x3";
              static constexpr ::std::uint64_t value = GL_FLOAT_MAT4x3;
          };
          struct gl_pixel_pack_buffer: public ::gtulu::internal::constant::gl_constant< gl_pixel_pack_buffer > {
              static constexpr char name[] = "pixel_pack_buffer";
              static constexpr ::std::uint64_t value = GL_PIXEL_PACK_BUFFER;
          };
          struct gl_pixel_pack_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_pixel_pack_buffer_binding > {
              static constexpr char name[] = "pixel_pack_buffer_binding";
              static constexpr ::std::uint64_t value = GL_PIXEL_PACK_BUFFER_BINDING;
          };
          struct gl_pixel_unpack_buffer: public ::gtulu::internal::constant::gl_constant< gl_pixel_unpack_buffer > {
              static constexpr char name[] = "pixel_unpack_buffer";
              static constexpr ::std::uint64_t value = GL_PIXEL_UNPACK_BUFFER;
          };
          struct gl_pixel_unpack_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_pixel_unpack_buffer_binding > {
              static constexpr char name[] = "pixel_unpack_buffer_binding";
              static constexpr ::std::uint64_t value = GL_PIXEL_UNPACK_BUFFER_BINDING;
          };
          struct gl_srgb: public ::gtulu::internal::constant::gl_constant< gl_srgb > {
              static constexpr char name[] = "srgb";
              static constexpr ::std::uint64_t value = GL_SRGB;
          };
          struct gl_srgb8: public ::gtulu::internal::constant::gl_constant< gl_srgb8 > {
              static constexpr char name[] = "srgb8";
              static constexpr ::std::uint64_t value = GL_SRGB8;
          };
          struct gl_srgb8_alpha8: public ::gtulu::internal::constant::gl_constant< gl_srgb8_alpha8 > {
              static constexpr char name[] = "srgb8_alpha8";
              static constexpr ::std::uint64_t value = GL_SRGB8_ALPHA8;
          };
          struct gl_srgb_alpha: public ::gtulu::internal::constant::gl_constant< gl_srgb_alpha > {
              static constexpr char name[] = "srgb_alpha";
              static constexpr ::std::uint64_t value = GL_SRGB_ALPHA;
          };
          struct gl_version_2_1: public ::gtulu::internal::constant::gl_constant< gl_version_2_1 > {
              static constexpr char name[] = "version_2_1";
              static constexpr ::std::uint64_t value = GL_VERSION_2_1;
          };
        } // namespace cst
      } // namespace v2_1
      namespace v3_0 {
        namespace cst {
          struct gl_bgra_integer: public ::gtulu::internal::constant::gl_constant< gl_bgra_integer > {
              static constexpr char name[] = "bgra_integer";
              static constexpr ::std::uint64_t value = GL_BGRA_INTEGER;
          };
          struct gl_bgr_integer: public ::gtulu::internal::constant::gl_constant< gl_bgr_integer > {
              static constexpr char name[] = "bgr_integer";
              static constexpr ::std::uint64_t value = GL_BGR_INTEGER;
          };
          struct gl_blue_integer: public ::gtulu::internal::constant::gl_constant< gl_blue_integer > {
              static constexpr char name[] = "blue_integer";
              static constexpr ::std::uint64_t value = GL_BLUE_INTEGER;
          };
          struct gl_buffer_access_flags: public ::gtulu::internal::constant::gl_constant< gl_buffer_access_flags > {
              static constexpr char name[] = "buffer_access_flags";
              static constexpr ::std::uint64_t value = GL_BUFFER_ACCESS_FLAGS;
          };
          struct gl_buffer_map_length: public ::gtulu::internal::constant::gl_constant< gl_buffer_map_length > {
              static constexpr char name[] = "buffer_map_length";
              static constexpr ::std::uint64_t value = GL_BUFFER_MAP_LENGTH;
          };
          struct gl_buffer_map_offset: public ::gtulu::internal::constant::gl_constant< gl_buffer_map_offset > {
              static constexpr char name[] = "buffer_map_offset";
              static constexpr ::std::uint64_t value = GL_BUFFER_MAP_OFFSET;
          };
          struct gl_clamp_read_color: public ::gtulu::internal::constant::gl_constant< gl_clamp_read_color > {
              static constexpr char name[] = "clamp_read_color";
              static constexpr ::std::uint64_t value = GL_CLAMP_READ_COLOR;
          };
          struct gl_clip_distance0: public ::gtulu::internal::constant::gl_constant< gl_clip_distance0 > {
              static constexpr char name[] = "clip_distance0";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE0;
          };
          struct gl_clip_distance1: public ::gtulu::internal::constant::gl_constant< gl_clip_distance1 > {
              static constexpr char name[] = "clip_distance1";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE1;
          };
          struct gl_clip_distance2: public ::gtulu::internal::constant::gl_constant< gl_clip_distance2 > {
              static constexpr char name[] = "clip_distance2";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE2;
          };
          struct gl_clip_distance3: public ::gtulu::internal::constant::gl_constant< gl_clip_distance3 > {
              static constexpr char name[] = "clip_distance3";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE3;
          };
          struct gl_clip_distance4: public ::gtulu::internal::constant::gl_constant< gl_clip_distance4 > {
              static constexpr char name[] = "clip_distance4";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE4;
          };
          struct gl_clip_distance5: public ::gtulu::internal::constant::gl_constant< gl_clip_distance5 > {
              static constexpr char name[] = "clip_distance5";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE5;
          };
          struct gl_clip_distance6: public ::gtulu::internal::constant::gl_constant< gl_clip_distance6 > {
              static constexpr char name[] = "clip_distance6";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE6;
          };
          struct gl_clip_distance7: public ::gtulu::internal::constant::gl_constant< gl_clip_distance7 > {
              static constexpr char name[] = "clip_distance7";
              static constexpr ::std::uint64_t value = GL_CLIP_DISTANCE7;
          };
          struct gl_compare_ref_to_texture: public ::gtulu::internal::constant::gl_constant< gl_compare_ref_to_texture > {
              static constexpr char name[] = "compare_ref_to_texture";
              static constexpr ::std::uint64_t value = GL_COMPARE_REF_TO_TEXTURE;
          };
          struct gl_compressed_red: public ::gtulu::internal::constant::gl_constant< gl_compressed_red > {
              static constexpr char name[] = "compressed_red";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RED;
          };
          struct gl_compressed_rg: public ::gtulu::internal::constant::gl_constant< gl_compressed_rg > {
              static constexpr char name[] = "compressed_rg";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RG;
          };
          struct gl_context_flags: public ::gtulu::internal::constant::gl_constant< gl_context_flags > {
              static constexpr char name[] = "context_flags";
              static constexpr ::std::uint64_t value = GL_CONTEXT_FLAGS;
          };
          struct gl_context_flag_forward_compatible_bit: public ::gtulu::internal::constant::gl_constant< gl_context_flag_forward_compatible_bit > {
              static constexpr char name[] = "context_flag_forward_compatible_bit";
              static constexpr ::std::uint64_t value = GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT;
          };
          struct gl_depth_buffer: public ::gtulu::internal::constant::gl_constant< gl_depth_buffer > {
              static constexpr char name[] = "depth_buffer";
              static constexpr ::std::uint64_t value = GL_DEPTH_BUFFER;
          };
          struct gl_fixed_only: public ::gtulu::internal::constant::gl_constant< gl_fixed_only > {
              static constexpr char name[] = "fixed_only";
              static constexpr ::std::uint64_t value = GL_FIXED_ONLY;
          };
          struct gl_green_integer: public ::gtulu::internal::constant::gl_constant< gl_green_integer > {
              static constexpr char name[] = "green_integer";
              static constexpr ::std::uint64_t value = GL_GREEN_INTEGER;
          };
          struct gl_interleaved_attribs: public ::gtulu::internal::constant::gl_constant< gl_interleaved_attribs > {
              static constexpr char name[] = "interleaved_attribs";
              static constexpr ::std::uint64_t value = GL_INTERLEAVED_ATTRIBS;
          };
          struct gl_int_sampler_1d: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_1d > {
              static constexpr char name[] = "int_sampler_1d";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_1D;
          };
          struct gl_int_sampler_1d_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_1d_array > {
              static constexpr char name[] = "int_sampler_1d_array";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_1D_ARRAY;
          };
          struct gl_int_sampler_2d: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d > {
              static constexpr char name[] = "int_sampler_2d";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_2D;
          };
          struct gl_int_sampler_2d_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_array > {
              static constexpr char name[] = "int_sampler_2d_array";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_2D_ARRAY;
          };
          struct gl_int_sampler_3d: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_3d > {
              static constexpr char name[] = "int_sampler_3d";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_3D;
          };
          struct gl_int_sampler_cube: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_cube > {
              static constexpr char name[] = "int_sampler_cube";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_CUBE;
          };
          struct gl_major_version: public ::gtulu::internal::constant::gl_constant< gl_major_version > {
              static constexpr char name[] = "major_version";
              static constexpr ::std::uint64_t value = GL_MAJOR_VERSION;
          };
          struct gl_max_array_texture_layers: public ::gtulu::internal::constant::gl_constant< gl_max_array_texture_layers > {
              static constexpr char name[] = "max_array_texture_layers";
              static constexpr ::std::uint64_t value = GL_MAX_ARRAY_TEXTURE_LAYERS;
          };
          struct gl_max_clip_distances: public ::gtulu::internal::constant::gl_constant< gl_max_clip_distances > {
              static constexpr char name[] = "max_clip_distances";
              static constexpr ::std::uint64_t value = GL_MAX_CLIP_DISTANCES;
          };
          struct gl_max_program_texel_offset: public ::gtulu::internal::constant::gl_constant< gl_max_program_texel_offset > {
              static constexpr char name[] = "max_program_texel_offset";
              static constexpr ::std::uint64_t value = GL_MAX_PROGRAM_TEXEL_OFFSET;
          };
          struct gl_max_transform_feedback_interleaved_components: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_interleaved_components > {
              static constexpr char name[] = "max_transform_feedback_interleaved_components";
              static constexpr ::std::uint64_t value = GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
          };
          struct gl_max_transform_feedback_separate_attribs: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_separate_attribs > {
              static constexpr char name[] = "max_transform_feedback_separate_attribs";
              static constexpr ::std::uint64_t value = GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
          };
          struct gl_max_transform_feedback_separate_components: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_separate_components > {
              static constexpr char name[] = "max_transform_feedback_separate_components";
              static constexpr ::std::uint64_t value = GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
          };
          struct gl_max_varying_components: public ::gtulu::internal::constant::gl_constant< gl_max_varying_components > {
              static constexpr char name[] = "max_varying_components";
              static constexpr ::std::uint64_t value = GL_MAX_VARYING_COMPONENTS;
          };
          struct gl_minor_version: public ::gtulu::internal::constant::gl_constant< gl_minor_version > {
              static constexpr char name[] = "minor_version";
              static constexpr ::std::uint64_t value = GL_MINOR_VERSION;
          };
          struct gl_min_program_texel_offset: public ::gtulu::internal::constant::gl_constant< gl_min_program_texel_offset > {
              static constexpr char name[] = "min_program_texel_offset";
              static constexpr ::std::uint64_t value = GL_MIN_PROGRAM_TEXEL_OFFSET;
          };
          struct gl_num_extensions: public ::gtulu::internal::constant::gl_constant< gl_num_extensions > {
              static constexpr char name[] = "num_extensions";
              static constexpr ::std::uint64_t value = GL_NUM_EXTENSIONS;
          };
          struct gl_primitives_generated: public ::gtulu::internal::constant::gl_constant< gl_primitives_generated > {
              static constexpr char name[] = "primitives_generated";
              static constexpr ::std::uint64_t value = GL_PRIMITIVES_GENERATED;
          };
          struct gl_proxy_texture_1d_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_1d_array > {
              static constexpr char name[] = "proxy_texture_1d_array";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_1D_ARRAY;
          };
          struct gl_proxy_texture_2d_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d_array > {
              static constexpr char name[] = "proxy_texture_2d_array";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_2D_ARRAY;
          };
          struct gl_query_by_region_no_wait: public ::gtulu::internal::constant::gl_constant< gl_query_by_region_no_wait > {
              static constexpr char name[] = "query_by_region_no_wait";
              static constexpr ::std::uint64_t value = GL_QUERY_BY_REGION_NO_WAIT;
          };
          struct gl_query_by_region_wait: public ::gtulu::internal::constant::gl_constant< gl_query_by_region_wait > {
              static constexpr char name[] = "query_by_region_wait";
              static constexpr ::std::uint64_t value = GL_QUERY_BY_REGION_WAIT;
          };
          struct gl_query_no_wait: public ::gtulu::internal::constant::gl_constant< gl_query_no_wait > {
              static constexpr char name[] = "query_no_wait";
              static constexpr ::std::uint64_t value = GL_QUERY_NO_WAIT;
          };
          struct gl_query_wait: public ::gtulu::internal::constant::gl_constant< gl_query_wait > {
              static constexpr char name[] = "query_wait";
              static constexpr ::std::uint64_t value = GL_QUERY_WAIT;
          };
          struct gl_r11f_g11f_b10f: public ::gtulu::internal::constant::gl_constant< gl_r11f_g11f_b10f > {
              static constexpr char name[] = "r11f_g11f_b10f";
              static constexpr ::std::uint64_t value = GL_R11F_G11F_B10F;
          };
          struct gl_rasterizer_discard: public ::gtulu::internal::constant::gl_constant< gl_rasterizer_discard > {
              static constexpr char name[] = "rasterizer_discard";
              static constexpr ::std::uint64_t value = GL_RASTERIZER_DISCARD;
          };
          struct gl_red_integer: public ::gtulu::internal::constant::gl_constant< gl_red_integer > {
              static constexpr char name[] = "red_integer";
              static constexpr ::std::uint64_t value = GL_RED_INTEGER;
          };
          struct gl_rgb16f: public ::gtulu::internal::constant::gl_constant< gl_rgb16f > {
              static constexpr char name[] = "rgb16f";
              static constexpr ::std::uint64_t value = GL_RGB16F;
          };
          struct gl_rgb16i: public ::gtulu::internal::constant::gl_constant< gl_rgb16i > {
              static constexpr char name[] = "rgb16i";
              static constexpr ::std::uint64_t value = GL_RGB16I;
          };
          struct gl_rgb16ui: public ::gtulu::internal::constant::gl_constant< gl_rgb16ui > {
              static constexpr char name[] = "rgb16ui";
              static constexpr ::std::uint64_t value = GL_RGB16UI;
          };
          struct gl_rgb32f: public ::gtulu::internal::constant::gl_constant< gl_rgb32f > {
              static constexpr char name[] = "rgb32f";
              static constexpr ::std::uint64_t value = GL_RGB32F;
          };
          struct gl_rgb32i: public ::gtulu::internal::constant::gl_constant< gl_rgb32i > {
              static constexpr char name[] = "rgb32i";
              static constexpr ::std::uint64_t value = GL_RGB32I;
          };
          struct gl_rgb32ui: public ::gtulu::internal::constant::gl_constant< gl_rgb32ui > {
              static constexpr char name[] = "rgb32ui";
              static constexpr ::std::uint64_t value = GL_RGB32UI;
          };
          struct gl_rgb8i: public ::gtulu::internal::constant::gl_constant< gl_rgb8i > {
              static constexpr char name[] = "rgb8i";
              static constexpr ::std::uint64_t value = GL_RGB8I;
          };
          struct gl_rgb8ui: public ::gtulu::internal::constant::gl_constant< gl_rgb8ui > {
              static constexpr char name[] = "rgb8ui";
              static constexpr ::std::uint64_t value = GL_RGB8UI;
          };
          struct gl_rgb9_e5: public ::gtulu::internal::constant::gl_constant< gl_rgb9_e5 > {
              static constexpr char name[] = "rgb9_e5";
              static constexpr ::std::uint64_t value = GL_RGB9_E5;
          };
          struct gl_rgba16f: public ::gtulu::internal::constant::gl_constant< gl_rgba16f > {
              static constexpr char name[] = "rgba16f";
              static constexpr ::std::uint64_t value = GL_RGBA16F;
          };
          struct gl_rgba16i: public ::gtulu::internal::constant::gl_constant< gl_rgba16i > {
              static constexpr char name[] = "rgba16i";
              static constexpr ::std::uint64_t value = GL_RGBA16I;
          };
          struct gl_rgba16ui: public ::gtulu::internal::constant::gl_constant< gl_rgba16ui > {
              static constexpr char name[] = "rgba16ui";
              static constexpr ::std::uint64_t value = GL_RGBA16UI;
          };
          struct gl_rgba32f: public ::gtulu::internal::constant::gl_constant< gl_rgba32f > {
              static constexpr char name[] = "rgba32f";
              static constexpr ::std::uint64_t value = GL_RGBA32F;
          };
          struct gl_rgba32i: public ::gtulu::internal::constant::gl_constant< gl_rgba32i > {
              static constexpr char name[] = "rgba32i";
              static constexpr ::std::uint64_t value = GL_RGBA32I;
          };
          struct gl_rgba32ui: public ::gtulu::internal::constant::gl_constant< gl_rgba32ui > {
              static constexpr char name[] = "rgba32ui";
              static constexpr ::std::uint64_t value = GL_RGBA32UI;
          };
          struct gl_rgba8i: public ::gtulu::internal::constant::gl_constant< gl_rgba8i > {
              static constexpr char name[] = "rgba8i";
              static constexpr ::std::uint64_t value = GL_RGBA8I;
          };
          struct gl_rgba8ui: public ::gtulu::internal::constant::gl_constant< gl_rgba8ui > {
              static constexpr char name[] = "rgba8ui";
              static constexpr ::std::uint64_t value = GL_RGBA8UI;
          };
          struct gl_rgba_integer: public ::gtulu::internal::constant::gl_constant< gl_rgba_integer > {
              static constexpr char name[] = "rgba_integer";
              static constexpr ::std::uint64_t value = GL_RGBA_INTEGER;
          };
          struct gl_rgb_integer: public ::gtulu::internal::constant::gl_constant< gl_rgb_integer > {
              static constexpr char name[] = "rgb_integer";
              static constexpr ::std::uint64_t value = GL_RGB_INTEGER;
          };
          struct gl_sampler_1d_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d_array > {
              static constexpr char name[] = "sampler_1d_array";
              static constexpr ::std::uint64_t value = GL_SAMPLER_1D_ARRAY;
          };
          struct gl_sampler_1d_array_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_1d_array_shadow > {
              static constexpr char name[] = "sampler_1d_array_shadow";
              static constexpr ::std::uint64_t value = GL_SAMPLER_1D_ARRAY_SHADOW;
          };
          struct gl_sampler_2d_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_array > {
              static constexpr char name[] = "sampler_2d_array";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D_ARRAY;
          };
          struct gl_sampler_2d_array_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_array_shadow > {
              static constexpr char name[] = "sampler_2d_array_shadow";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D_ARRAY_SHADOW;
          };
          struct gl_sampler_cube_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_shadow > {
              static constexpr char name[] = "sampler_cube_shadow";
              static constexpr ::std::uint64_t value = GL_SAMPLER_CUBE_SHADOW;
          };
          struct gl_separate_attribs: public ::gtulu::internal::constant::gl_constant< gl_separate_attribs > {
              static constexpr char name[] = "separate_attribs";
              static constexpr ::std::uint64_t value = GL_SEPARATE_ATTRIBS;
          };
          struct gl_stencil_buffer: public ::gtulu::internal::constant::gl_constant< gl_stencil_buffer > {
              static constexpr char name[] = "stencil_buffer";
              static constexpr ::std::uint64_t value = GL_STENCIL_BUFFER;
          };
          struct gl_texture_1d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_1d_array > {
              static constexpr char name[] = "texture_1d_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_1D_ARRAY;
          };
          struct gl_texture_2d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_2d_array > {
              static constexpr char name[] = "texture_2d_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_2D_ARRAY;
          };
          struct gl_texture_binding_1d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_1d_array > {
              static constexpr char name[] = "texture_binding_1d_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_1D_ARRAY;
          };
          struct gl_texture_binding_2d_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d_array > {
              static constexpr char name[] = "texture_binding_2d_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_2D_ARRAY;
          };
          struct gl_texture_shared_size: public ::gtulu::internal::constant::gl_constant< gl_texture_shared_size > {
              static constexpr char name[] = "texture_shared_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_SHARED_SIZE;
          };
          struct gl_transform_feedback_buffer: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer > {
              static constexpr char name[] = "transform_feedback_buffer";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BUFFER;
          };
          struct gl_transform_feedback_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_binding > {
              static constexpr char name[] = "transform_feedback_buffer_binding";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BUFFER_BINDING;
          };
          struct gl_transform_feedback_buffer_mode: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_mode > {
              static constexpr char name[] = "transform_feedback_buffer_mode";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BUFFER_MODE;
          };
          struct gl_transform_feedback_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_size > {
              static constexpr char name[] = "transform_feedback_buffer_size";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BUFFER_SIZE;
          };
          struct gl_transform_feedback_buffer_start: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_start > {
              static constexpr char name[] = "transform_feedback_buffer_start";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BUFFER_START;
          };
          struct gl_transform_feedback_primitives_written: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_primitives_written > {
              static constexpr char name[] = "transform_feedback_primitives_written";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
          };
          struct gl_transform_feedback_varyings: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_varyings > {
              static constexpr char name[] = "transform_feedback_varyings";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_VARYINGS;
          };
          struct gl_transform_feedback_varying_max_length: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_varying_max_length > {
              static constexpr char name[] = "transform_feedback_varying_max_length";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH;
          };
          struct gl_unsigned_int_10f_11f_11f_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_10f_11f_11f_rev > {
              static constexpr char name[] = "unsigned_int_10f_11f_11f_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_10F_11F_11F_REV;
          };
          struct gl_unsigned_int_5_9_9_9_rev: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_5_9_9_9_rev > {
              static constexpr char name[] = "unsigned_int_5_9_9_9_rev";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_5_9_9_9_REV;
          };
          struct gl_unsigned_int_sampler_1d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_1d > {
              static constexpr char name[] = "unsigned_int_sampler_1d";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_1D;
          };
          struct gl_unsigned_int_sampler_1d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_1d_array > {
              static constexpr char name[] = "unsigned_int_sampler_1d_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_1D_ARRAY;
          };
          struct gl_unsigned_int_sampler_2d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d > {
              static constexpr char name[] = "unsigned_int_sampler_2d";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_2D;
          };
          struct gl_unsigned_int_sampler_2d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_array > {
              static constexpr char name[] = "unsigned_int_sampler_2d_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_2D_ARRAY;
          };
          struct gl_unsigned_int_sampler_3d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_3d > {
              static constexpr char name[] = "unsigned_int_sampler_3d";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_3D;
          };
          struct gl_unsigned_int_sampler_cube: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_cube > {
              static constexpr char name[] = "unsigned_int_sampler_cube";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_CUBE;
          };
          struct gl_unsigned_int_vec2: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_vec2 > {
              static constexpr char name[] = "unsigned_int_vec2";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_VEC2;
          };
          struct gl_unsigned_int_vec3: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_vec3 > {
              static constexpr char name[] = "unsigned_int_vec3";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_VEC3;
          };
          struct gl_unsigned_int_vec4: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_vec4 > {
              static constexpr char name[] = "unsigned_int_vec4";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_VEC4;
          };
          struct gl_version_3_0: public ::gtulu::internal::constant::gl_constant< gl_version_3_0 > {
              static constexpr char name[] = "version_3_0";
              static constexpr ::std::uint64_t value = GL_VERSION_3_0;
          };
          struct gl_vertex_attrib_array_integer: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_integer > {
              static constexpr char name[] = "vertex_attrib_array_integer";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_INTEGER;
          };
        } // namespace cst
      } // namespace v3_0
      namespace v3_1 {
        namespace cst {
          struct gl_int_sampler_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_rect > {
              static constexpr char name[] = "int_sampler_2d_rect";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_2D_RECT;
          };
          struct gl_int_sampler_buffer: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_buffer > {
              static constexpr char name[] = "int_sampler_buffer";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_BUFFER;
          };
          struct gl_max_rectangle_texture_size: public ::gtulu::internal::constant::gl_constant< gl_max_rectangle_texture_size > {
              static constexpr char name[] = "max_rectangle_texture_size";
              static constexpr ::std::uint64_t value = GL_MAX_RECTANGLE_TEXTURE_SIZE;
          };
          struct gl_max_texture_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_max_texture_buffer_size > {
              static constexpr char name[] = "max_texture_buffer_size";
              static constexpr ::std::uint64_t value = GL_MAX_TEXTURE_BUFFER_SIZE;
          };
          struct gl_primitive_restart: public ::gtulu::internal::constant::gl_constant< gl_primitive_restart > {
              static constexpr char name[] = "primitive_restart";
              static constexpr ::std::uint64_t value = GL_PRIMITIVE_RESTART;
          };
          struct gl_primitive_restart_index: public ::gtulu::internal::constant::gl_constant< gl_primitive_restart_index > {
              static constexpr char name[] = "primitive_restart_index";
              static constexpr ::std::uint64_t value = GL_PRIMITIVE_RESTART_INDEX;
          };
          struct gl_proxy_texture_rectangle: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_rectangle > {
              static constexpr char name[] = "proxy_texture_rectangle";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_RECTANGLE;
          };
          struct gl_r16_snorm: public ::gtulu::internal::constant::gl_constant< gl_r16_snorm > {
              static constexpr char name[] = "r16_snorm";
              static constexpr ::std::uint64_t value = GL_R16_SNORM;
          };
          struct gl_r8_snorm: public ::gtulu::internal::constant::gl_constant< gl_r8_snorm > {
              static constexpr char name[] = "r8_snorm";
              static constexpr ::std::uint64_t value = GL_R8_SNORM;
          };
          struct gl_red_snorm: public ::gtulu::internal::constant::gl_constant< gl_red_snorm > {
              static constexpr char name[] = "red_snorm";
              static constexpr ::std::uint64_t value = GL_RED_SNORM;
          };
          struct gl_rg16_snorm: public ::gtulu::internal::constant::gl_constant< gl_rg16_snorm > {
              static constexpr char name[] = "rg16_snorm";
              static constexpr ::std::uint64_t value = GL_RG16_SNORM;
          };
          struct gl_rg8_snorm: public ::gtulu::internal::constant::gl_constant< gl_rg8_snorm > {
              static constexpr char name[] = "rg8_snorm";
              static constexpr ::std::uint64_t value = GL_RG8_SNORM;
          };
          struct gl_rgb16_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgb16_snorm > {
              static constexpr char name[] = "rgb16_snorm";
              static constexpr ::std::uint64_t value = GL_RGB16_SNORM;
          };
          struct gl_rgb8_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgb8_snorm > {
              static constexpr char name[] = "rgb8_snorm";
              static constexpr ::std::uint64_t value = GL_RGB8_SNORM;
          };
          struct gl_rgba16_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgba16_snorm > {
              static constexpr char name[] = "rgba16_snorm";
              static constexpr ::std::uint64_t value = GL_RGBA16_SNORM;
          };
          struct gl_rgba8_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgba8_snorm > {
              static constexpr char name[] = "rgba8_snorm";
              static constexpr ::std::uint64_t value = GL_RGBA8_SNORM;
          };
          struct gl_rgba_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgba_snorm > {
              static constexpr char name[] = "rgba_snorm";
              static constexpr ::std::uint64_t value = GL_RGBA_SNORM;
          };
          struct gl_rgb_snorm: public ::gtulu::internal::constant::gl_constant< gl_rgb_snorm > {
              static constexpr char name[] = "rgb_snorm";
              static constexpr ::std::uint64_t value = GL_RGB_SNORM;
          };
          struct gl_rg_snorm: public ::gtulu::internal::constant::gl_constant< gl_rg_snorm > {
              static constexpr char name[] = "rg_snorm";
              static constexpr ::std::uint64_t value = GL_RG_SNORM;
          };
          struct gl_sampler_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_rect > {
              static constexpr char name[] = "sampler_2d_rect";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D_RECT;
          };
          struct gl_sampler_2d_rect_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_rect_shadow > {
              static constexpr char name[] = "sampler_2d_rect_shadow";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D_RECT_SHADOW;
          };
          struct gl_sampler_buffer: public ::gtulu::internal::constant::gl_constant< gl_sampler_buffer > {
              static constexpr char name[] = "sampler_buffer";
              static constexpr ::std::uint64_t value = GL_SAMPLER_BUFFER;
          };
          struct gl_signed_normalized: public ::gtulu::internal::constant::gl_constant< gl_signed_normalized > {
              static constexpr char name[] = "signed_normalized";
              static constexpr ::std::uint64_t value = GL_SIGNED_NORMALIZED;
          };
          struct gl_texture_binding_buffer: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_buffer > {
              static constexpr char name[] = "texture_binding_buffer";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_BUFFER;
          };
          struct gl_texture_binding_rectangle: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_rectangle > {
              static constexpr char name[] = "texture_binding_rectangle";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_RECTANGLE;
          };
          struct gl_texture_buffer: public ::gtulu::internal::constant::gl_constant< gl_texture_buffer > {
              static constexpr char name[] = "texture_buffer";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BUFFER;
          };
          struct gl_texture_buffer_data_store_binding: public ::gtulu::internal::constant::gl_constant< gl_texture_buffer_data_store_binding > {
              static constexpr char name[] = "texture_buffer_data_store_binding";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BUFFER_DATA_STORE_BINDING;
          };
          struct gl_texture_buffer_format: public ::gtulu::internal::constant::gl_constant< gl_texture_buffer_format > {
              static constexpr char name[] = "texture_buffer_format";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BUFFER_FORMAT;
          };
          struct gl_texture_rectangle: public ::gtulu::internal::constant::gl_constant< gl_texture_rectangle > {
              static constexpr char name[] = "texture_rectangle";
              static constexpr ::std::uint64_t value = GL_TEXTURE_RECTANGLE;
          };
          struct gl_unsigned_int_sampler_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_rect > {
              static constexpr char name[] = "unsigned_int_sampler_2d_rect";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_2D_RECT;
          };
          struct gl_unsigned_int_sampler_buffer: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_buffer > {
              static constexpr char name[] = "unsigned_int_sampler_buffer";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_BUFFER;
          };
          struct gl_version_3_1: public ::gtulu::internal::constant::gl_constant< gl_version_3_1 > {
              static constexpr char name[] = "version_3_1";
              static constexpr ::std::uint64_t value = GL_VERSION_3_1;
          };
        } // namespace cst
      } // namespace v3_1
      namespace v3_2 {
        namespace cst {
          struct gl_context_compatibility_profile_bit: public ::gtulu::internal::constant::gl_constant< gl_context_compatibility_profile_bit > {
              static constexpr char name[] = "context_compatibility_profile_bit";
              static constexpr ::std::uint64_t value = GL_CONTEXT_COMPATIBILITY_PROFILE_BIT;
          };
          struct gl_context_core_profile_bit: public ::gtulu::internal::constant::gl_constant< gl_context_core_profile_bit > {
              static constexpr char name[] = "context_core_profile_bit";
              static constexpr ::std::uint64_t value = GL_CONTEXT_CORE_PROFILE_BIT;
          };
          struct gl_context_profile_mask: public ::gtulu::internal::constant::gl_constant< gl_context_profile_mask > {
              static constexpr char name[] = "context_profile_mask";
              static constexpr ::std::uint64_t value = GL_CONTEXT_PROFILE_MASK;
          };
          struct gl_framebuffer_attachment_layered: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_layered > {
              static constexpr char name[] = "framebuffer_attachment_layered";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_LAYERED;
          };
          struct gl_framebuffer_incomplete_layer_targets: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_layer_targets > {
              static constexpr char name[] = "framebuffer_incomplete_layer_targets";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS;
          };
          struct gl_geometry_input_type: public ::gtulu::internal::constant::gl_constant< gl_geometry_input_type > {
              static constexpr char name[] = "geometry_input_type";
              static constexpr ::std::uint64_t value = GL_GEOMETRY_INPUT_TYPE;
          };
          struct gl_geometry_output_type: public ::gtulu::internal::constant::gl_constant< gl_geometry_output_type > {
              static constexpr char name[] = "geometry_output_type";
              static constexpr ::std::uint64_t value = GL_GEOMETRY_OUTPUT_TYPE;
          };
          struct gl_geometry_shader: public ::gtulu::internal::constant::gl_constant< gl_geometry_shader > {
              static constexpr char name[] = "geometry_shader";
              static constexpr ::std::uint64_t value = GL_GEOMETRY_SHADER;
          };
          struct gl_geometry_vertices_out: public ::gtulu::internal::constant::gl_constant< gl_geometry_vertices_out > {
              static constexpr char name[] = "geometry_vertices_out";
              static constexpr ::std::uint64_t value = GL_GEOMETRY_VERTICES_OUT;
          };
          struct gl_lines_adjacency: public ::gtulu::internal::constant::gl_constant< gl_lines_adjacency > {
              static constexpr char name[] = "lines_adjacency";
              static constexpr ::std::uint64_t value = GL_LINES_ADJACENCY;
          };
          struct gl_line_strip_adjacency: public ::gtulu::internal::constant::gl_constant< gl_line_strip_adjacency > {
              static constexpr char name[] = "line_strip_adjacency";
              static constexpr ::std::uint64_t value = GL_LINE_STRIP_ADJACENCY;
          };
          struct gl_max_fragment_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_input_components > {
              static constexpr char name[] = "max_fragment_input_components";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_INPUT_COMPONENTS;
          };
          struct gl_max_geometry_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_input_components > {
              static constexpr char name[] = "max_geometry_input_components";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_INPUT_COMPONENTS;
          };
          struct gl_max_geometry_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_output_components > {
              static constexpr char name[] = "max_geometry_output_components";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_OUTPUT_COMPONENTS;
          };
          struct gl_max_geometry_output_vertices: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_output_vertices > {
              static constexpr char name[] = "max_geometry_output_vertices";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_OUTPUT_VERTICES;
          };
          struct gl_max_geometry_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_texture_image_units > {
              static constexpr char name[] = "max_geometry_texture_image_units";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_geometry_total_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_total_output_components > {
              static constexpr char name[] = "max_geometry_total_output_components";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS;
          };
          struct gl_max_geometry_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_uniform_components > {
              static constexpr char name[] = "max_geometry_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_UNIFORM_COMPONENTS;
          };
          struct gl_max_vertex_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_output_components > {
              static constexpr char name[] = "max_vertex_output_components";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_OUTPUT_COMPONENTS;
          };
          struct gl_program_point_size: public ::gtulu::internal::constant::gl_constant< gl_program_point_size > {
              static constexpr char name[] = "program_point_size";
              static constexpr ::std::uint64_t value = GL_PROGRAM_POINT_SIZE;
          };
          struct gl_triangles_adjacency: public ::gtulu::internal::constant::gl_constant< gl_triangles_adjacency > {
              static constexpr char name[] = "triangles_adjacency";
              static constexpr ::std::uint64_t value = GL_TRIANGLES_ADJACENCY;
          };
          struct gl_triangle_strip_adjacency: public ::gtulu::internal::constant::gl_constant< gl_triangle_strip_adjacency > {
              static constexpr char name[] = "triangle_strip_adjacency";
              static constexpr ::std::uint64_t value = GL_TRIANGLE_STRIP_ADJACENCY;
          };
          struct gl_version_3_2: public ::gtulu::internal::constant::gl_constant< gl_version_3_2 > {
              static constexpr char name[] = "version_3_2";
              static constexpr ::std::uint64_t value = GL_VERSION_3_2;
          };
        } // namespace cst
      } // namespace v3_2
      namespace v3_3 {
        namespace cst {
          struct gl_version_3_3: public ::gtulu::internal::constant::gl_constant< gl_version_3_3 > {
              static constexpr char name[] = "version_3_3";
              static constexpr ::std::uint64_t value = GL_VERSION_3_3;
          };
          struct gl_vertex_attrib_array_divisor: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_divisor > {
              static constexpr char name[] = "vertex_attrib_array_divisor";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_DIVISOR;
          };
        } // namespace cst
      } // namespace v3_3
      namespace v4_0 {
        namespace cst {
          struct gl_int_sampler_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_cube_map_array > {
              static constexpr char name[] = "int_sampler_cube_map_array";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_CUBE_MAP_ARRAY;
          };
          struct gl_max_program_texture_gather_offset: public ::gtulu::internal::constant::gl_constant< gl_max_program_texture_gather_offset > {
              static constexpr char name[] = "max_program_texture_gather_offset";
              static constexpr ::std::uint64_t value = GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET;
          };
          struct gl_min_program_texture_gather_offset: public ::gtulu::internal::constant::gl_constant< gl_min_program_texture_gather_offset > {
              static constexpr char name[] = "min_program_texture_gather_offset";
              static constexpr ::std::uint64_t value = GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET;
          };
          struct gl_min_sample_shading_value: public ::gtulu::internal::constant::gl_constant< gl_min_sample_shading_value > {
              static constexpr char name[] = "min_sample_shading_value";
              static constexpr ::std::uint64_t value = GL_MIN_SAMPLE_SHADING_VALUE;
          };
          struct gl_proxy_texture_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_cube_map_array > {
              static constexpr char name[] = "proxy_texture_cube_map_array";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_CUBE_MAP_ARRAY;
          };
          struct gl_sampler_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array > {
              static constexpr char name[] = "sampler_cube_map_array";
              static constexpr ::std::uint64_t value = GL_SAMPLER_CUBE_MAP_ARRAY;
          };
          struct gl_sampler_cube_map_array_shadow: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array_shadow > {
              static constexpr char name[] = "sampler_cube_map_array_shadow";
              static constexpr ::std::uint64_t value = GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW;
          };
          struct gl_sample_shading: public ::gtulu::internal::constant::gl_constant< gl_sample_shading > {
              static constexpr char name[] = "sample_shading";
              static constexpr ::std::uint64_t value = GL_SAMPLE_SHADING;
          };
          struct gl_texture_binding_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_cube_map_array > {
              static constexpr char name[] = "texture_binding_cube_map_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_CUBE_MAP_ARRAY;
          };
          struct gl_texture_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_array > {
              static constexpr char name[] = "texture_cube_map_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_ARRAY;
          };
          struct gl_unsigned_int_sampler_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_cube_map_array > {
              static constexpr char name[] = "unsigned_int_sampler_cube_map_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY;
          };
          struct gl_version_4_0: public ::gtulu::internal::constant::gl_constant< gl_version_4_0 > {
              static constexpr char name[] = "version_4_0";
              static constexpr ::std::uint64_t value = GL_VERSION_4_0;
          };
        } // namespace cst
      } // namespace v4_0
      namespace v4_1 {
        namespace cst {
          struct gl_version_4_1: public ::gtulu::internal::constant::gl_constant< gl_version_4_1 > {
              static constexpr char name[] = "version_4_1";
              static constexpr ::std::uint64_t value = GL_VERSION_4_1;
          };
        } // namespace cst
      } // namespace v4_1
      namespace v4_2 {
        namespace cst {
          struct gl_version_4_2: public ::gtulu::internal::constant::gl_constant< gl_version_4_2 > {
              static constexpr char name[] = "version_4_2";
              static constexpr ::std::uint64_t value = GL_VERSION_4_2;
          };
        } // namespace cst
      } // namespace v4_2
      } // namespace gl
      namespace arb {
      namespace es2_compatibility {
        namespace cst {
          struct gl_arb_es2_compatibility: public ::gtulu::internal::constant::gl_constant< gl_arb_es2_compatibility > {
              static constexpr char name[] = "arb_es2_compatibility";
              static constexpr ::std::uint64_t value = GL_ARB_ES2_compatibility;
          };
          struct gl_fixed: public ::gtulu::internal::constant::gl_constant< gl_fixed > {
              static constexpr char name[] = "fixed";
              static constexpr ::std::uint64_t value = GL_FIXED;
          };
          struct gl_high_float: public ::gtulu::internal::constant::gl_constant< gl_high_float > {
              static constexpr char name[] = "high_float";
              static constexpr ::std::uint64_t value = GL_HIGH_FLOAT;
          };
          struct gl_high_int: public ::gtulu::internal::constant::gl_constant< gl_high_int > {
              static constexpr char name[] = "high_int";
              static constexpr ::std::uint64_t value = GL_HIGH_INT;
          };
          struct gl_implementation_color_read_format: public ::gtulu::internal::constant::gl_constant< gl_implementation_color_read_format > {
              static constexpr char name[] = "implementation_color_read_format";
              static constexpr ::std::uint64_t value = GL_IMPLEMENTATION_COLOR_READ_FORMAT;
          };
          struct gl_implementation_color_read_type: public ::gtulu::internal::constant::gl_constant< gl_implementation_color_read_type > {
              static constexpr char name[] = "implementation_color_read_type";
              static constexpr ::std::uint64_t value = GL_IMPLEMENTATION_COLOR_READ_TYPE;
          };
          struct gl_low_float: public ::gtulu::internal::constant::gl_constant< gl_low_float > {
              static constexpr char name[] = "low_float";
              static constexpr ::std::uint64_t value = GL_LOW_FLOAT;
          };
          struct gl_low_int: public ::gtulu::internal::constant::gl_constant< gl_low_int > {
              static constexpr char name[] = "low_int";
              static constexpr ::std::uint64_t value = GL_LOW_INT;
          };
          struct gl_max_fragment_uniform_vectors: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_uniform_vectors > {
              static constexpr char name[] = "max_fragment_uniform_vectors";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_UNIFORM_VECTORS;
          };
          struct gl_max_varying_vectors: public ::gtulu::internal::constant::gl_constant< gl_max_varying_vectors > {
              static constexpr char name[] = "max_varying_vectors";
              static constexpr ::std::uint64_t value = GL_MAX_VARYING_VECTORS;
          };
          struct gl_max_vertex_uniform_vectors: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_uniform_vectors > {
              static constexpr char name[] = "max_vertex_uniform_vectors";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_UNIFORM_VECTORS;
          };
          struct gl_medium_float: public ::gtulu::internal::constant::gl_constant< gl_medium_float > {
              static constexpr char name[] = "medium_float";
              static constexpr ::std::uint64_t value = GL_MEDIUM_FLOAT;
          };
          struct gl_medium_int: public ::gtulu::internal::constant::gl_constant< gl_medium_int > {
              static constexpr char name[] = "medium_int";
              static constexpr ::std::uint64_t value = GL_MEDIUM_INT;
          };
          struct gl_num_shader_binary_formats: public ::gtulu::internal::constant::gl_constant< gl_num_shader_binary_formats > {
              static constexpr char name[] = "num_shader_binary_formats";
              static constexpr ::std::uint64_t value = GL_NUM_SHADER_BINARY_FORMATS;
          };
          struct gl_shader_compiler: public ::gtulu::internal::constant::gl_constant< gl_shader_compiler > {
              static constexpr char name[] = "shader_compiler";
              static constexpr ::std::uint64_t value = GL_SHADER_COMPILER;
          };
        } // namespace cst
      } // namespace es2_compatibility
      namespace base_instance {
        namespace cst {
          struct gl_arb_base_instance: public ::gtulu::internal::constant::gl_constant< gl_arb_base_instance > {
              static constexpr char name[] = "arb_base_instance";
              static constexpr ::std::uint64_t value = GL_ARB_base_instance;
          };
        } // namespace cst
      } // namespace base_instance
      namespace blend_func_extended {
        namespace cst {
          struct gl_arb_blend_func_extended: public ::gtulu::internal::constant::gl_constant< gl_arb_blend_func_extended > {
              static constexpr char name[] = "arb_blend_func_extended";
              static constexpr ::std::uint64_t value = GL_ARB_blend_func_extended;
          };
          struct gl_max_dual_source_draw_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_dual_source_draw_buffers > {
              static constexpr char name[] = "max_dual_source_draw_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_DUAL_SOURCE_DRAW_BUFFERS;
          };
          struct gl_one_minus_src1_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src1_alpha > {
              static constexpr char name[] = "one_minus_src1_alpha";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_SRC1_ALPHA;
          };
          struct gl_one_minus_src1_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_src1_color > {
              static constexpr char name[] = "one_minus_src1_color";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_SRC1_COLOR;
          };
          struct gl_src1_color: public ::gtulu::internal::constant::gl_constant< gl_src1_color > {
              static constexpr char name[] = "src1_color";
              static constexpr ::std::uint64_t value = GL_SRC1_COLOR;
          };
        } // namespace cst
      } // namespace blend_func_extended
      namespace cl_event {
        namespace cst {
          struct gl_arb_cl_event: public ::gtulu::internal::constant::gl_constant< gl_arb_cl_event > {
              static constexpr char name[] = "arb_cl_event";
              static constexpr ::std::uint64_t value = GL_ARB_cl_event;
          };
          struct gl_sync_cl_event_arb: public ::gtulu::internal::constant::gl_constant< gl_sync_cl_event_arb > {
              static constexpr char name[] = "sync_cl_event_arb";
              static constexpr ::std::uint64_t value = GL_SYNC_CL_EVENT_ARB;
          };
          struct gl_sync_cl_event_complete_arb: public ::gtulu::internal::constant::gl_constant< gl_sync_cl_event_complete_arb > {
              static constexpr char name[] = "sync_cl_event_complete_arb";
              static constexpr ::std::uint64_t value = GL_SYNC_CL_EVENT_COMPLETE_ARB;
          };
        } // namespace cst
      } // namespace cl_event
      namespace compressed_texture_pixel_storage {
        namespace cst {
          struct gl_arb_compressed_texture_pixel_storage: public ::gtulu::internal::constant::gl_constant< gl_arb_compressed_texture_pixel_storage > {
              static constexpr char name[] = "arb_compressed_texture_pixel_storage";
              static constexpr ::std::uint64_t value = GL_ARB_compressed_texture_pixel_storage;
          };
          struct gl_pack_compressed_block_depth: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_depth > {
              static constexpr char name[] = "pack_compressed_block_depth";
              static constexpr ::std::uint64_t value = GL_PACK_COMPRESSED_BLOCK_DEPTH;
          };
          struct gl_pack_compressed_block_height: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_height > {
              static constexpr char name[] = "pack_compressed_block_height";
              static constexpr ::std::uint64_t value = GL_PACK_COMPRESSED_BLOCK_HEIGHT;
          };
          struct gl_pack_compressed_block_size: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_size > {
              static constexpr char name[] = "pack_compressed_block_size";
              static constexpr ::std::uint64_t value = GL_PACK_COMPRESSED_BLOCK_SIZE;
          };
          struct gl_pack_compressed_block_width: public ::gtulu::internal::constant::gl_constant< gl_pack_compressed_block_width > {
              static constexpr char name[] = "pack_compressed_block_width";
              static constexpr ::std::uint64_t value = GL_PACK_COMPRESSED_BLOCK_WIDTH;
          };
          struct gl_unpack_compressed_block_depth: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_depth > {
              static constexpr char name[] = "unpack_compressed_block_depth";
              static constexpr ::std::uint64_t value = GL_UNPACK_COMPRESSED_BLOCK_DEPTH;
          };
          struct gl_unpack_compressed_block_height: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_height > {
              static constexpr char name[] = "unpack_compressed_block_height";
              static constexpr ::std::uint64_t value = GL_UNPACK_COMPRESSED_BLOCK_HEIGHT;
          };
          struct gl_unpack_compressed_block_size: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_size > {
              static constexpr char name[] = "unpack_compressed_block_size";
              static constexpr ::std::uint64_t value = GL_UNPACK_COMPRESSED_BLOCK_SIZE;
          };
          struct gl_unpack_compressed_block_width: public ::gtulu::internal::constant::gl_constant< gl_unpack_compressed_block_width > {
              static constexpr char name[] = "unpack_compressed_block_width";
              static constexpr ::std::uint64_t value = GL_UNPACK_COMPRESSED_BLOCK_WIDTH;
          };
        } // namespace cst
      } // namespace compressed_texture_pixel_storage
      namespace conservative_depth {
        namespace cst {
          struct gl_arb_conservative_depth: public ::gtulu::internal::constant::gl_constant< gl_arb_conservative_depth > {
              static constexpr char name[] = "arb_conservative_depth";
              static constexpr ::std::uint64_t value = GL_ARB_conservative_depth;
          };
        } // namespace cst
      } // namespace conservative_depth
      namespace copy_buffer {
        namespace cst {
          struct gl_arb_copy_buffer: public ::gtulu::internal::constant::gl_constant< gl_arb_copy_buffer > {
              static constexpr char name[] = "arb_copy_buffer";
              static constexpr ::std::uint64_t value = GL_ARB_copy_buffer;
          };
          struct gl_copy_read_buffer: public ::gtulu::internal::constant::gl_constant< gl_copy_read_buffer > {
              static constexpr char name[] = "copy_read_buffer";
              static constexpr ::std::uint64_t value = GL_COPY_READ_BUFFER;
          };
          struct gl_copy_write_buffer: public ::gtulu::internal::constant::gl_constant< gl_copy_write_buffer > {
              static constexpr char name[] = "copy_write_buffer";
              static constexpr ::std::uint64_t value = GL_COPY_WRITE_BUFFER;
          };
        } // namespace cst
      } // namespace copy_buffer
      namespace debug_output {
        namespace cst {
          struct gl_arb_debug_output: public ::gtulu::internal::constant::gl_constant< gl_arb_debug_output > {
              static constexpr char name[] = "arb_debug_output";
              static constexpr ::std::uint64_t value = GL_ARB_debug_output;
          };
          struct gl_debug_callback_function_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_callback_function_arb > {
              static constexpr char name[] = "debug_callback_function_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_CALLBACK_FUNCTION_ARB;
          };
          struct gl_debug_callback_user_param_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_callback_user_param_arb > {
              static constexpr char name[] = "debug_callback_user_param_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_CALLBACK_USER_PARAM_ARB;
          };
          struct gl_debug_logged_messages_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_logged_messages_arb > {
              static constexpr char name[] = "debug_logged_messages_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_LOGGED_MESSAGES_ARB;
          };
          struct gl_debug_next_logged_message_length_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_next_logged_message_length_arb > {
              static constexpr char name[] = "debug_next_logged_message_length_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB;
          };
          struct gl_debug_output_synchronous_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_output_synchronous_arb > {
              static constexpr char name[] = "debug_output_synchronous_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB;
          };
          struct gl_debug_severity_high_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_severity_high_arb > {
              static constexpr char name[] = "debug_severity_high_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SEVERITY_HIGH_ARB;
          };
          struct gl_debug_severity_low_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_severity_low_arb > {
              static constexpr char name[] = "debug_severity_low_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SEVERITY_LOW_ARB;
          };
          struct gl_debug_severity_medium_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_severity_medium_arb > {
              static constexpr char name[] = "debug_severity_medium_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SEVERITY_MEDIUM_ARB;
          };
          struct gl_debug_source_api_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_api_arb > {
              static constexpr char name[] = "debug_source_api_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SOURCE_API_ARB;
          };
          struct gl_debug_source_application_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_application_arb > {
              static constexpr char name[] = "debug_source_application_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SOURCE_APPLICATION_ARB;
          };
          struct gl_debug_source_other_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_other_arb > {
              static constexpr char name[] = "debug_source_other_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SOURCE_OTHER_ARB;
          };
          struct gl_debug_source_shader_compiler_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_shader_compiler_arb > {
              static constexpr char name[] = "debug_source_shader_compiler_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SOURCE_SHADER_COMPILER_ARB;
          };
          struct gl_debug_source_third_party_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_third_party_arb > {
              static constexpr char name[] = "debug_source_third_party_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SOURCE_THIRD_PARTY_ARB;
          };
          struct gl_debug_source_window_system_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_source_window_system_arb > {
              static constexpr char name[] = "debug_source_window_system_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB;
          };
          struct gl_debug_type_deprecated_behavior_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_deprecated_behavior_arb > {
              static constexpr char name[] = "debug_type_deprecated_behavior_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB;
          };
          struct gl_debug_type_error_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_error_arb > {
              static constexpr char name[] = "debug_type_error_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_TYPE_ERROR_ARB;
          };
          struct gl_debug_type_other_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_other_arb > {
              static constexpr char name[] = "debug_type_other_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_TYPE_OTHER_ARB;
          };
          struct gl_debug_type_performance_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_performance_arb > {
              static constexpr char name[] = "debug_type_performance_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_TYPE_PERFORMANCE_ARB;
          };
          struct gl_debug_type_portability_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_portability_arb > {
              static constexpr char name[] = "debug_type_portability_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_TYPE_PORTABILITY_ARB;
          };
          struct gl_debug_type_undefined_behavior_arb: public ::gtulu::internal::constant::gl_constant< gl_debug_type_undefined_behavior_arb > {
              static constexpr char name[] = "debug_type_undefined_behavior_arb";
              static constexpr ::std::uint64_t value = GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB;
          };
          struct gl_max_debug_logged_messages_arb: public ::gtulu::internal::constant::gl_constant< gl_max_debug_logged_messages_arb > {
              static constexpr char name[] = "max_debug_logged_messages_arb";
              static constexpr ::std::uint64_t value = GL_MAX_DEBUG_LOGGED_MESSAGES_ARB;
          };
          struct gl_max_debug_message_length_arb: public ::gtulu::internal::constant::gl_constant< gl_max_debug_message_length_arb > {
              static constexpr char name[] = "max_debug_message_length_arb";
              static constexpr ::std::uint64_t value = GL_MAX_DEBUG_MESSAGE_LENGTH_ARB;
          };
        } // namespace cst
      } // namespace debug_output
      namespace depth_buffer_float {
        namespace cst {
          struct gl_arb_depth_buffer_float: public ::gtulu::internal::constant::gl_constant< gl_arb_depth_buffer_float > {
              static constexpr char name[] = "arb_depth_buffer_float";
              static constexpr ::std::uint64_t value = GL_ARB_depth_buffer_float;
          };
          struct gl_depth32f_stencil8: public ::gtulu::internal::constant::gl_constant< gl_depth32f_stencil8 > {
              static constexpr char name[] = "depth32f_stencil8";
              static constexpr ::std::uint64_t value = GL_DEPTH32F_STENCIL8;
          };
          struct gl_depth_component32f: public ::gtulu::internal::constant::gl_constant< gl_depth_component32f > {
              static constexpr char name[] = "depth_component32f";
              static constexpr ::std::uint64_t value = GL_DEPTH_COMPONENT32F;
          };
          struct gl_float_32_unsigned_int_24_8_rev: public ::gtulu::internal::constant::gl_constant< gl_float_32_unsigned_int_24_8_rev > {
              static constexpr char name[] = "float_32_unsigned_int_24_8_rev";
              static constexpr ::std::uint64_t value = GL_FLOAT_32_UNSIGNED_INT_24_8_REV;
          };
        } // namespace cst
      } // namespace depth_buffer_float
      namespace depth_clamp {
        namespace cst {
          struct gl_arb_depth_clamp: public ::gtulu::internal::constant::gl_constant< gl_arb_depth_clamp > {
              static constexpr char name[] = "arb_depth_clamp";
              static constexpr ::std::uint64_t value = GL_ARB_depth_clamp;
          };
          struct gl_depth_clamp: public ::gtulu::internal::constant::gl_constant< gl_depth_clamp > {
              static constexpr char name[] = "depth_clamp";
              static constexpr ::std::uint64_t value = GL_DEPTH_CLAMP;
          };
        } // namespace cst
      } // namespace depth_clamp
      namespace draw_buffers_blend {
        namespace cst {
          struct gl_arb_draw_buffers_blend: public ::gtulu::internal::constant::gl_constant< gl_arb_draw_buffers_blend > {
              static constexpr char name[] = "arb_draw_buffers_blend";
              static constexpr ::std::uint64_t value = GL_ARB_draw_buffers_blend;
          };
        } // namespace cst
      } // namespace draw_buffers_blend
      namespace draw_elements_base_vertex {
        namespace cst {
          struct gl_arb_draw_elements_base_vertex: public ::gtulu::internal::constant::gl_constant< gl_arb_draw_elements_base_vertex > {
              static constexpr char name[] = "arb_draw_elements_base_vertex";
              static constexpr ::std::uint64_t value = GL_ARB_draw_elements_base_vertex;
          };
        } // namespace cst
      } // namespace draw_elements_base_vertex
      namespace draw_indirect {
        namespace cst {
          struct gl_arb_draw_indirect: public ::gtulu::internal::constant::gl_constant< gl_arb_draw_indirect > {
              static constexpr char name[] = "arb_draw_indirect";
              static constexpr ::std::uint64_t value = GL_ARB_draw_indirect;
          };
          struct gl_draw_indirect_buffer: public ::gtulu::internal::constant::gl_constant< gl_draw_indirect_buffer > {
              static constexpr char name[] = "draw_indirect_buffer";
              static constexpr ::std::uint64_t value = GL_DRAW_INDIRECT_BUFFER;
          };
          struct gl_draw_indirect_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_draw_indirect_buffer_binding > {
              static constexpr char name[] = "draw_indirect_buffer_binding";
              static constexpr ::std::uint64_t value = GL_DRAW_INDIRECT_BUFFER_BINDING;
          };
        } // namespace cst
      } // namespace draw_indirect
      namespace explicit_attrib_location {
        namespace cst {
          struct gl_arb_explicit_attrib_location: public ::gtulu::internal::constant::gl_constant< gl_arb_explicit_attrib_location > {
              static constexpr char name[] = "arb_explicit_attrib_location";
              static constexpr ::std::uint64_t value = GL_ARB_explicit_attrib_location;
          };
        } // namespace cst
      } // namespace explicit_attrib_location
      namespace fragment_coord_conventions {
        namespace cst {
          struct gl_arb_fragment_coord_conventions: public ::gtulu::internal::constant::gl_constant< gl_arb_fragment_coord_conventions > {
              static constexpr char name[] = "arb_fragment_coord_conventions";
              static constexpr ::std::uint64_t value = GL_ARB_fragment_coord_conventions;
          };
        } // namespace cst
      } // namespace fragment_coord_conventions
      namespace framebuffer_object {
        namespace cst {
          struct gl_arb_framebuffer_object: public ::gtulu::internal::constant::gl_constant< gl_arb_framebuffer_object > {
              static constexpr char name[] = "arb_framebuffer_object";
              static constexpr ::std::uint64_t value = GL_ARB_framebuffer_object;
          };
          struct gl_color_attachment0: public ::gtulu::internal::constant::gl_constant< gl_color_attachment0 > {
              static constexpr char name[] = "color_attachment0";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT0;
          };
          struct gl_color_attachment1: public ::gtulu::internal::constant::gl_constant< gl_color_attachment1 > {
              static constexpr char name[] = "color_attachment1";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT1;
          };
          struct gl_color_attachment10: public ::gtulu::internal::constant::gl_constant< gl_color_attachment10 > {
              static constexpr char name[] = "color_attachment10";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT10;
          };
          struct gl_color_attachment11: public ::gtulu::internal::constant::gl_constant< gl_color_attachment11 > {
              static constexpr char name[] = "color_attachment11";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT11;
          };
          struct gl_color_attachment12: public ::gtulu::internal::constant::gl_constant< gl_color_attachment12 > {
              static constexpr char name[] = "color_attachment12";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT12;
          };
          struct gl_color_attachment13: public ::gtulu::internal::constant::gl_constant< gl_color_attachment13 > {
              static constexpr char name[] = "color_attachment13";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT13;
          };
          struct gl_color_attachment14: public ::gtulu::internal::constant::gl_constant< gl_color_attachment14 > {
              static constexpr char name[] = "color_attachment14";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT14;
          };
          struct gl_color_attachment15: public ::gtulu::internal::constant::gl_constant< gl_color_attachment15 > {
              static constexpr char name[] = "color_attachment15";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT15;
          };
          struct gl_color_attachment2: public ::gtulu::internal::constant::gl_constant< gl_color_attachment2 > {
              static constexpr char name[] = "color_attachment2";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT2;
          };
          struct gl_color_attachment3: public ::gtulu::internal::constant::gl_constant< gl_color_attachment3 > {
              static constexpr char name[] = "color_attachment3";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT3;
          };
          struct gl_color_attachment4: public ::gtulu::internal::constant::gl_constant< gl_color_attachment4 > {
              static constexpr char name[] = "color_attachment4";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT4;
          };
          struct gl_color_attachment5: public ::gtulu::internal::constant::gl_constant< gl_color_attachment5 > {
              static constexpr char name[] = "color_attachment5";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT5;
          };
          struct gl_color_attachment6: public ::gtulu::internal::constant::gl_constant< gl_color_attachment6 > {
              static constexpr char name[] = "color_attachment6";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT6;
          };
          struct gl_color_attachment7: public ::gtulu::internal::constant::gl_constant< gl_color_attachment7 > {
              static constexpr char name[] = "color_attachment7";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT7;
          };
          struct gl_color_attachment8: public ::gtulu::internal::constant::gl_constant< gl_color_attachment8 > {
              static constexpr char name[] = "color_attachment8";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT8;
          };
          struct gl_color_attachment9: public ::gtulu::internal::constant::gl_constant< gl_color_attachment9 > {
              static constexpr char name[] = "color_attachment9";
              static constexpr ::std::uint64_t value = GL_COLOR_ATTACHMENT9;
          };
          struct gl_depth24_stencil8: public ::gtulu::internal::constant::gl_constant< gl_depth24_stencil8 > {
              static constexpr char name[] = "depth24_stencil8";
              static constexpr ::std::uint64_t value = GL_DEPTH24_STENCIL8;
          };
          struct gl_depth_attachment: public ::gtulu::internal::constant::gl_constant< gl_depth_attachment > {
              static constexpr char name[] = "depth_attachment";
              static constexpr ::std::uint64_t value = GL_DEPTH_ATTACHMENT;
          };
          struct gl_depth_stencil: public ::gtulu::internal::constant::gl_constant< gl_depth_stencil > {
              static constexpr char name[] = "depth_stencil";
              static constexpr ::std::uint64_t value = GL_DEPTH_STENCIL;
          };
          struct gl_depth_stencil_attachment: public ::gtulu::internal::constant::gl_constant< gl_depth_stencil_attachment > {
              static constexpr char name[] = "depth_stencil_attachment";
              static constexpr ::std::uint64_t value = GL_DEPTH_STENCIL_ATTACHMENT;
          };
          struct gl_draw_framebuffer: public ::gtulu::internal::constant::gl_constant< gl_draw_framebuffer > {
              static constexpr char name[] = "draw_framebuffer";
              static constexpr ::std::uint64_t value = GL_DRAW_FRAMEBUFFER;
          };
          struct gl_draw_framebuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_draw_framebuffer_binding > {
              static constexpr char name[] = "draw_framebuffer_binding";
              static constexpr ::std::uint64_t value = GL_DRAW_FRAMEBUFFER_BINDING;
          };
          struct gl_framebuffer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer > {
              static constexpr char name[] = "framebuffer";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER;
          };
          struct gl_framebuffer_attachment_alpha_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_alpha_size > {
              static constexpr char name[] = "framebuffer_attachment_alpha_size";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
          };
          struct gl_framebuffer_attachment_blue_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_blue_size > {
              static constexpr char name[] = "framebuffer_attachment_blue_size";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
          };
          struct gl_framebuffer_attachment_color_encoding: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_color_encoding > {
              static constexpr char name[] = "framebuffer_attachment_color_encoding";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
          };
          struct gl_framebuffer_attachment_component_type: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_component_type > {
              static constexpr char name[] = "framebuffer_attachment_component_type";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
          };
          struct gl_framebuffer_attachment_depth_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_depth_size > {
              static constexpr char name[] = "framebuffer_attachment_depth_size";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
          };
          struct gl_framebuffer_attachment_green_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_green_size > {
              static constexpr char name[] = "framebuffer_attachment_green_size";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
          };
          struct gl_framebuffer_attachment_object_name: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_object_name > {
              static constexpr char name[] = "framebuffer_attachment_object_name";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
          };
          struct gl_framebuffer_attachment_object_type: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_object_type > {
              static constexpr char name[] = "framebuffer_attachment_object_type";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
          };
          struct gl_framebuffer_attachment_red_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_red_size > {
              static constexpr char name[] = "framebuffer_attachment_red_size";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE;
          };
          struct gl_framebuffer_attachment_stencil_size: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_stencil_size > {
              static constexpr char name[] = "framebuffer_attachment_stencil_size";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
          };
          struct gl_framebuffer_attachment_texture_cube_map_face: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_texture_cube_map_face > {
              static constexpr char name[] = "framebuffer_attachment_texture_cube_map_face";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
          };
          struct gl_framebuffer_attachment_texture_layer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_texture_layer > {
              static constexpr char name[] = "framebuffer_attachment_texture_layer";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
          };
          struct gl_framebuffer_attachment_texture_level: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_attachment_texture_level > {
              static constexpr char name[] = "framebuffer_attachment_texture_level";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
          };
          struct gl_framebuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_binding > {
              static constexpr char name[] = "framebuffer_binding";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_BINDING;
          };
          struct gl_framebuffer_complete: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_complete > {
              static constexpr char name[] = "framebuffer_complete";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_COMPLETE;
          };
          struct gl_framebuffer_default: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_default > {
              static constexpr char name[] = "framebuffer_default";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_DEFAULT;
          };
          struct gl_framebuffer_incomplete_attachment: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_attachment > {
              static constexpr char name[] = "framebuffer_incomplete_attachment";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
          };
          struct gl_framebuffer_incomplete_draw_buffer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_draw_buffer > {
              static constexpr char name[] = "framebuffer_incomplete_draw_buffer";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER;
          };
          struct gl_framebuffer_incomplete_missing_attachment: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_missing_attachment > {
              static constexpr char name[] = "framebuffer_incomplete_missing_attachment";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
          };
          struct gl_framebuffer_incomplete_multisample: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_multisample > {
              static constexpr char name[] = "framebuffer_incomplete_multisample";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
          };
          struct gl_framebuffer_incomplete_read_buffer: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_incomplete_read_buffer > {
              static constexpr char name[] = "framebuffer_incomplete_read_buffer";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER;
          };
          struct gl_framebuffer_undefined: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_undefined > {
              static constexpr char name[] = "framebuffer_undefined";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_UNDEFINED;
          };
          struct gl_framebuffer_unsupported: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_unsupported > {
              static constexpr char name[] = "framebuffer_unsupported";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_UNSUPPORTED;
          };
          struct gl_invalid_framebuffer_operation: public ::gtulu::internal::constant::gl_constant< gl_invalid_framebuffer_operation > {
              static constexpr char name[] = "invalid_framebuffer_operation";
              static constexpr ::std::uint64_t value = GL_INVALID_FRAMEBUFFER_OPERATION;
          };
          struct gl_max_color_attachments: public ::gtulu::internal::constant::gl_constant< gl_max_color_attachments > {
              static constexpr char name[] = "max_color_attachments";
              static constexpr ::std::uint64_t value = GL_MAX_COLOR_ATTACHMENTS;
          };
          struct gl_max_renderbuffer_size: public ::gtulu::internal::constant::gl_constant< gl_max_renderbuffer_size > {
              static constexpr char name[] = "max_renderbuffer_size";
              static constexpr ::std::uint64_t value = GL_MAX_RENDERBUFFER_SIZE;
          };
          struct gl_max_samples: public ::gtulu::internal::constant::gl_constant< gl_max_samples > {
              static constexpr char name[] = "max_samples";
              static constexpr ::std::uint64_t value = GL_MAX_SAMPLES;
          };
          struct gl_read_framebuffer: public ::gtulu::internal::constant::gl_constant< gl_read_framebuffer > {
              static constexpr char name[] = "read_framebuffer";
              static constexpr ::std::uint64_t value = GL_READ_FRAMEBUFFER;
          };
          struct gl_read_framebuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_read_framebuffer_binding > {
              static constexpr char name[] = "read_framebuffer_binding";
              static constexpr ::std::uint64_t value = GL_READ_FRAMEBUFFER_BINDING;
          };
          struct gl_renderbuffer: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer > {
              static constexpr char name[] = "renderbuffer";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER;
          };
          struct gl_renderbuffer_alpha_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_alpha_size > {
              static constexpr char name[] = "renderbuffer_alpha_size";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_ALPHA_SIZE;
          };
          struct gl_renderbuffer_binding: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_binding > {
              static constexpr char name[] = "renderbuffer_binding";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_BINDING;
          };
          struct gl_renderbuffer_blue_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_blue_size > {
              static constexpr char name[] = "renderbuffer_blue_size";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_BLUE_SIZE;
          };
          struct gl_renderbuffer_depth_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_depth_size > {
              static constexpr char name[] = "renderbuffer_depth_size";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_DEPTH_SIZE;
          };
          struct gl_renderbuffer_green_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_green_size > {
              static constexpr char name[] = "renderbuffer_green_size";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_GREEN_SIZE;
          };
          struct gl_renderbuffer_height: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_height > {
              static constexpr char name[] = "renderbuffer_height";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_HEIGHT;
          };
          struct gl_renderbuffer_internal_format: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_internal_format > {
              static constexpr char name[] = "renderbuffer_internal_format";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_INTERNAL_FORMAT;
          };
          struct gl_renderbuffer_red_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_red_size > {
              static constexpr char name[] = "renderbuffer_red_size";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_RED_SIZE;
          };
          struct gl_renderbuffer_samples: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_samples > {
              static constexpr char name[] = "renderbuffer_samples";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_SAMPLES;
          };
          struct gl_renderbuffer_stencil_size: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_stencil_size > {
              static constexpr char name[] = "renderbuffer_stencil_size";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_STENCIL_SIZE;
          };
          struct gl_renderbuffer_width: public ::gtulu::internal::constant::gl_constant< gl_renderbuffer_width > {
              static constexpr char name[] = "renderbuffer_width";
              static constexpr ::std::uint64_t value = GL_RENDERBUFFER_WIDTH;
          };
          struct gl_stencil_attachment: public ::gtulu::internal::constant::gl_constant< gl_stencil_attachment > {
              static constexpr char name[] = "stencil_attachment";
              static constexpr ::std::uint64_t value = GL_STENCIL_ATTACHMENT;
          };
          struct gl_stencil_index1: public ::gtulu::internal::constant::gl_constant< gl_stencil_index1 > {
              static constexpr char name[] = "stencil_index1";
              static constexpr ::std::uint64_t value = GL_STENCIL_INDEX1;
          };
          struct gl_stencil_index16: public ::gtulu::internal::constant::gl_constant< gl_stencil_index16 > {
              static constexpr char name[] = "stencil_index16";
              static constexpr ::std::uint64_t value = GL_STENCIL_INDEX16;
          };
          struct gl_stencil_index4: public ::gtulu::internal::constant::gl_constant< gl_stencil_index4 > {
              static constexpr char name[] = "stencil_index4";
              static constexpr ::std::uint64_t value = GL_STENCIL_INDEX4;
          };
          struct gl_stencil_index8: public ::gtulu::internal::constant::gl_constant< gl_stencil_index8 > {
              static constexpr char name[] = "stencil_index8";
              static constexpr ::std::uint64_t value = GL_STENCIL_INDEX8;
          };
          struct gl_texture_alpha_type: public ::gtulu::internal::constant::gl_constant< gl_texture_alpha_type > {
              static constexpr char name[] = "texture_alpha_type";
              static constexpr ::std::uint64_t value = GL_TEXTURE_ALPHA_TYPE;
          };
          struct gl_texture_blue_type: public ::gtulu::internal::constant::gl_constant< gl_texture_blue_type > {
              static constexpr char name[] = "texture_blue_type";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BLUE_TYPE;
          };
          struct gl_texture_depth_type: public ::gtulu::internal::constant::gl_constant< gl_texture_depth_type > {
              static constexpr char name[] = "texture_depth_type";
              static constexpr ::std::uint64_t value = GL_TEXTURE_DEPTH_TYPE;
          };
          struct gl_texture_green_type: public ::gtulu::internal::constant::gl_constant< gl_texture_green_type > {
              static constexpr char name[] = "texture_green_type";
              static constexpr ::std::uint64_t value = GL_TEXTURE_GREEN_TYPE;
          };
          struct gl_texture_red_type: public ::gtulu::internal::constant::gl_constant< gl_texture_red_type > {
              static constexpr char name[] = "texture_red_type";
              static constexpr ::std::uint64_t value = GL_TEXTURE_RED_TYPE;
          };
          struct gl_texture_stencil_size: public ::gtulu::internal::constant::gl_constant< gl_texture_stencil_size > {
              static constexpr char name[] = "texture_stencil_size";
              static constexpr ::std::uint64_t value = GL_TEXTURE_STENCIL_SIZE;
          };
          struct gl_unsigned_int_24_8: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_24_8 > {
              static constexpr char name[] = "unsigned_int_24_8";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_24_8;
          };
          struct gl_unsigned_normalized: public ::gtulu::internal::constant::gl_constant< gl_unsigned_normalized > {
              static constexpr char name[] = "unsigned_normalized";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_NORMALIZED;
          };
        } // namespace cst
      } // namespace framebuffer_object
      namespace framebuffer_srgb {
        namespace cst {
          struct gl_arb_framebuffer_srgb: public ::gtulu::internal::constant::gl_constant< gl_arb_framebuffer_srgb > {
              static constexpr char name[] = "arb_framebuffer_srgb";
              static constexpr ::std::uint64_t value = GL_ARB_framebuffer_sRGB;
          };
          struct gl_framebuffer_srgb: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_srgb > {
              static constexpr char name[] = "framebuffer_srgb";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_SRGB;
          };
        } // namespace cst
      } // namespace framebuffer_srgb
      namespace get_program_binary {
        namespace cst {
          struct gl_arb_get_program_binary: public ::gtulu::internal::constant::gl_constant< gl_arb_get_program_binary > {
              static constexpr char name[] = "arb_get_program_binary";
              static constexpr ::std::uint64_t value = GL_ARB_get_program_binary;
          };
          struct gl_num_program_binary_formats: public ::gtulu::internal::constant::gl_constant< gl_num_program_binary_formats > {
              static constexpr char name[] = "num_program_binary_formats";
              static constexpr ::std::uint64_t value = GL_NUM_PROGRAM_BINARY_FORMATS;
          };
          struct gl_program_binary_formats: public ::gtulu::internal::constant::gl_constant< gl_program_binary_formats > {
              static constexpr char name[] = "program_binary_formats";
              static constexpr ::std::uint64_t value = GL_PROGRAM_BINARY_FORMATS;
          };
          struct gl_program_binary_length: public ::gtulu::internal::constant::gl_constant< gl_program_binary_length > {
              static constexpr char name[] = "program_binary_length";
              static constexpr ::std::uint64_t value = GL_PROGRAM_BINARY_LENGTH;
          };
          struct gl_program_binary_retrievable_hint: public ::gtulu::internal::constant::gl_constant< gl_program_binary_retrievable_hint > {
              static constexpr char name[] = "program_binary_retrievable_hint";
              static constexpr ::std::uint64_t value = GL_PROGRAM_BINARY_RETRIEVABLE_HINT;
          };
        } // namespace cst
      } // namespace get_program_binary
      namespace gpu_shader5 {
        namespace cst {
          struct gl_arb_gpu_shader5: public ::gtulu::internal::constant::gl_constant< gl_arb_gpu_shader5 > {
              static constexpr char name[] = "arb_gpu_shader5";
              static constexpr ::std::uint64_t value = GL_ARB_gpu_shader5;
          };
          struct gl_fragment_interpolation_offset_bits: public ::gtulu::internal::constant::gl_constant< gl_fragment_interpolation_offset_bits > {
              static constexpr char name[] = "fragment_interpolation_offset_bits";
              static constexpr ::std::uint64_t value = GL_FRAGMENT_INTERPOLATION_OFFSET_BITS;
          };
          struct gl_geometry_shader_invocations: public ::gtulu::internal::constant::gl_constant< gl_geometry_shader_invocations > {
              static constexpr char name[] = "geometry_shader_invocations";
              static constexpr ::std::uint64_t value = GL_GEOMETRY_SHADER_INVOCATIONS;
          };
          struct gl_max_fragment_interpolation_offset: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_interpolation_offset > {
              static constexpr char name[] = "max_fragment_interpolation_offset";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_INTERPOLATION_OFFSET;
          };
          struct gl_max_geometry_shader_invocations: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_shader_invocations > {
              static constexpr char name[] = "max_geometry_shader_invocations";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_SHADER_INVOCATIONS;
          };
          struct gl_min_fragment_interpolation_offset: public ::gtulu::internal::constant::gl_constant< gl_min_fragment_interpolation_offset > {
              static constexpr char name[] = "min_fragment_interpolation_offset";
              static constexpr ::std::uint64_t value = GL_MIN_FRAGMENT_INTERPOLATION_OFFSET;
          };
        } // namespace cst
      } // namespace gpu_shader5
      namespace gpu_shader_fp64 {
        namespace cst {
          struct gl_arb_gpu_shader_fp64: public ::gtulu::internal::constant::gl_constant< gl_arb_gpu_shader_fp64 > {
              static constexpr char name[] = "arb_gpu_shader_fp64";
              static constexpr ::std::uint64_t value = GL_ARB_gpu_shader_fp64;
          };
          struct gl_double_mat2: public ::gtulu::internal::constant::gl_constant< gl_double_mat2 > {
              static constexpr char name[] = "double_mat2";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT2;
          };
          struct gl_double_mat2x3: public ::gtulu::internal::constant::gl_constant< gl_double_mat2x3 > {
              static constexpr char name[] = "double_mat2x3";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT2x3;
          };
          struct gl_double_mat2x4: public ::gtulu::internal::constant::gl_constant< gl_double_mat2x4 > {
              static constexpr char name[] = "double_mat2x4";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT2x4;
          };
          struct gl_double_mat3: public ::gtulu::internal::constant::gl_constant< gl_double_mat3 > {
              static constexpr char name[] = "double_mat3";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT3;
          };
          struct gl_double_mat3x2: public ::gtulu::internal::constant::gl_constant< gl_double_mat3x2 > {
              static constexpr char name[] = "double_mat3x2";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT3x2;
          };
          struct gl_double_mat3x4: public ::gtulu::internal::constant::gl_constant< gl_double_mat3x4 > {
              static constexpr char name[] = "double_mat3x4";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT3x4;
          };
          struct gl_double_mat4: public ::gtulu::internal::constant::gl_constant< gl_double_mat4 > {
              static constexpr char name[] = "double_mat4";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT4;
          };
          struct gl_double_mat4x2: public ::gtulu::internal::constant::gl_constant< gl_double_mat4x2 > {
              static constexpr char name[] = "double_mat4x2";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT4x2;
          };
          struct gl_double_mat4x3: public ::gtulu::internal::constant::gl_constant< gl_double_mat4x3 > {
              static constexpr char name[] = "double_mat4x3";
              static constexpr ::std::uint64_t value = GL_DOUBLE_MAT4x3;
          };
          struct gl_double_vec2: public ::gtulu::internal::constant::gl_constant< gl_double_vec2 > {
              static constexpr char name[] = "double_vec2";
              static constexpr ::std::uint64_t value = GL_DOUBLE_VEC2;
          };
          struct gl_double_vec3: public ::gtulu::internal::constant::gl_constant< gl_double_vec3 > {
              static constexpr char name[] = "double_vec3";
              static constexpr ::std::uint64_t value = GL_DOUBLE_VEC3;
          };
          struct gl_double_vec4: public ::gtulu::internal::constant::gl_constant< gl_double_vec4 > {
              static constexpr char name[] = "double_vec4";
              static constexpr ::std::uint64_t value = GL_DOUBLE_VEC4;
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
              static constexpr char name[] = "arb_half_float_vertex";
              static constexpr ::std::uint64_t value = GL_ARB_half_float_vertex;
          };
          struct gl_half_float: public ::gtulu::internal::constant::gl_constant< gl_half_float > {
              static constexpr char name[] = "half_float";
              static constexpr ::std::uint64_t value = GL_HALF_FLOAT;
          };
        } // namespace cst
      } // namespace half_float_vertex
      namespace imaging {
        namespace cst {
          struct gl_blend_color: public ::gtulu::internal::constant::gl_constant< gl_blend_color > {
              static constexpr char name[] = "blend_color";
              static constexpr ::std::uint64_t value = GL_BLEND_COLOR;
          };
          struct gl_blend_equation: public ::gtulu::internal::constant::gl_constant< gl_blend_equation > {
              static constexpr char name[] = "blend_equation";
              static constexpr ::std::uint64_t value = GL_BLEND_EQUATION;
          };
          struct gl_constant_alpha: public ::gtulu::internal::constant::gl_constant< gl_constant_alpha > {
              static constexpr char name[] = "constant_alpha";
              static constexpr ::std::uint64_t value = GL_CONSTANT_ALPHA;
          };
          struct gl_constant_color: public ::gtulu::internal::constant::gl_constant< gl_constant_color > {
              static constexpr char name[] = "constant_color";
              static constexpr ::std::uint64_t value = GL_CONSTANT_COLOR;
          };
          struct gl_func_add: public ::gtulu::internal::constant::gl_constant< gl_func_add > {
              static constexpr char name[] = "func_add";
              static constexpr ::std::uint64_t value = GL_FUNC_ADD;
          };
          struct gl_func_reverse_subtract: public ::gtulu::internal::constant::gl_constant< gl_func_reverse_subtract > {
              static constexpr char name[] = "func_reverse_subtract";
              static constexpr ::std::uint64_t value = GL_FUNC_REVERSE_SUBTRACT;
          };
          struct gl_func_subtract: public ::gtulu::internal::constant::gl_constant< gl_func_subtract > {
              static constexpr char name[] = "func_subtract";
              static constexpr ::std::uint64_t value = GL_FUNC_SUBTRACT;
          };
          struct gl_max: public ::gtulu::internal::constant::gl_constant< gl_max > {
              static constexpr char name[] = "max";
              static constexpr ::std::uint64_t value = GL_MAX;
          };
          struct gl_min: public ::gtulu::internal::constant::gl_constant< gl_min > {
              static constexpr char name[] = "min";
              static constexpr ::std::uint64_t value = GL_MIN;
          };
          struct gl_one_minus_constant_alpha: public ::gtulu::internal::constant::gl_constant< gl_one_minus_constant_alpha > {
              static constexpr char name[] = "one_minus_constant_alpha";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_CONSTANT_ALPHA;
          };
          struct gl_one_minus_constant_color: public ::gtulu::internal::constant::gl_constant< gl_one_minus_constant_color > {
              static constexpr char name[] = "one_minus_constant_color";
              static constexpr ::std::uint64_t value = GL_ONE_MINUS_CONSTANT_COLOR;
          };
        } // namespace cst
      } // namespace imaging
      namespace internalformat_query {
        namespace cst {
          struct gl_arb_internalformat_query: public ::gtulu::internal::constant::gl_constant< gl_arb_internalformat_query > {
              static constexpr char name[] = "arb_internalformat_query";
              static constexpr ::std::uint64_t value = GL_ARB_internalformat_query;
          };
          struct gl_num_sample_counts: public ::gtulu::internal::constant::gl_constant< gl_num_sample_counts > {
              static constexpr char name[] = "num_sample_counts";
              static constexpr ::std::uint64_t value = GL_NUM_SAMPLE_COUNTS;
          };
        } // namespace cst
      } // namespace internalformat_query
      namespace map_buffer_alignment {
        namespace cst {
          struct gl_arb_map_buffer_alignment: public ::gtulu::internal::constant::gl_constant< gl_arb_map_buffer_alignment > {
              static constexpr char name[] = "arb_map_buffer_alignment";
              static constexpr ::std::uint64_t value = GL_ARB_map_buffer_alignment;
          };
          struct gl_min_map_buffer_alignment: public ::gtulu::internal::constant::gl_constant< gl_min_map_buffer_alignment > {
              static constexpr char name[] = "min_map_buffer_alignment";
              static constexpr ::std::uint64_t value = GL_MIN_MAP_BUFFER_ALIGNMENT;
          };
        } // namespace cst
      } // namespace map_buffer_alignment
      namespace map_buffer_range {
        namespace cst {
          struct gl_arb_map_buffer_range: public ::gtulu::internal::constant::gl_constant< gl_arb_map_buffer_range > {
              static constexpr char name[] = "arb_map_buffer_range";
              static constexpr ::std::uint64_t value = GL_ARB_map_buffer_range;
          };
          struct gl_map_flush_explicit_bit: public ::gtulu::internal::constant::gl_constant< gl_map_flush_explicit_bit > {
              static constexpr char name[] = "map_flush_explicit_bit";
              static constexpr ::std::uint64_t value = GL_MAP_FLUSH_EXPLICIT_BIT;
          };
          struct gl_map_invalidate_buffer_bit: public ::gtulu::internal::constant::gl_constant< gl_map_invalidate_buffer_bit > {
              static constexpr char name[] = "map_invalidate_buffer_bit";
              static constexpr ::std::uint64_t value = GL_MAP_INVALIDATE_BUFFER_BIT;
          };
          struct gl_map_invalidate_range_bit: public ::gtulu::internal::constant::gl_constant< gl_map_invalidate_range_bit > {
              static constexpr char name[] = "map_invalidate_range_bit";
              static constexpr ::std::uint64_t value = GL_MAP_INVALIDATE_RANGE_BIT;
          };
          struct gl_map_read_bit: public ::gtulu::internal::constant::gl_constant< gl_map_read_bit > {
              static constexpr char name[] = "map_read_bit";
              static constexpr ::std::uint64_t value = GL_MAP_READ_BIT;
          };
          struct gl_map_unsynchronized_bit: public ::gtulu::internal::constant::gl_constant< gl_map_unsynchronized_bit > {
              static constexpr char name[] = "map_unsynchronized_bit";
              static constexpr ::std::uint64_t value = GL_MAP_UNSYNCHRONIZED_BIT;
          };
          struct gl_map_write_bit: public ::gtulu::internal::constant::gl_constant< gl_map_write_bit > {
              static constexpr char name[] = "map_write_bit";
              static constexpr ::std::uint64_t value = GL_MAP_WRITE_BIT;
          };
        } // namespace cst
      } // namespace map_buffer_range
      namespace occlusion_query2 {
        namespace cst {
          struct gl_any_samples_passed: public ::gtulu::internal::constant::gl_constant< gl_any_samples_passed > {
              static constexpr char name[] = "any_samples_passed";
              static constexpr ::std::uint64_t value = GL_ANY_SAMPLES_PASSED;
          };
          struct gl_arb_occlusion_query2: public ::gtulu::internal::constant::gl_constant< gl_arb_occlusion_query2 > {
              static constexpr char name[] = "arb_occlusion_query2";
              static constexpr ::std::uint64_t value = GL_ARB_occlusion_query2;
          };
        } // namespace cst
      } // namespace occlusion_query2
      namespace provoking_vertex {
        namespace cst {
          struct gl_arb_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_arb_provoking_vertex > {
              static constexpr char name[] = "arb_provoking_vertex";
              static constexpr ::std::uint64_t value = GL_ARB_provoking_vertex;
          };
          struct gl_first_vertex_convention: public ::gtulu::internal::constant::gl_constant< gl_first_vertex_convention > {
              static constexpr char name[] = "first_vertex_convention";
              static constexpr ::std::uint64_t value = GL_FIRST_VERTEX_CONVENTION;
          };
          struct gl_last_vertex_convention: public ::gtulu::internal::constant::gl_constant< gl_last_vertex_convention > {
              static constexpr char name[] = "last_vertex_convention";
              static constexpr ::std::uint64_t value = GL_LAST_VERTEX_CONVENTION;
          };
          struct gl_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_provoking_vertex > {
              static constexpr char name[] = "provoking_vertex";
              static constexpr ::std::uint64_t value = GL_PROVOKING_VERTEX;
          };
          struct gl_quads_follow_provoking_vertex_convention: public ::gtulu::internal::constant::gl_constant< gl_quads_follow_provoking_vertex_convention > {
              static constexpr char name[] = "quads_follow_provoking_vertex_convention";
              static constexpr ::std::uint64_t value = GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION;
          };
        } // namespace cst
      } // namespace provoking_vertex
      namespace robustness {
        namespace cst {
          struct gl_arb_robustness: public ::gtulu::internal::constant::gl_constant< gl_arb_robustness > {
              static constexpr char name[] = "arb_robustness";
              static constexpr ::std::uint64_t value = GL_ARB_robustness;
          };
          struct gl_context_flag_robust_access_bit_arb: public ::gtulu::internal::constant::gl_constant< gl_context_flag_robust_access_bit_arb > {
              static constexpr char name[] = "context_flag_robust_access_bit_arb";
              static constexpr ::std::uint64_t value = GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB;
          };
          struct gl_guilty_context_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_guilty_context_reset_arb > {
              static constexpr char name[] = "guilty_context_reset_arb";
              static constexpr ::std::uint64_t value = GL_GUILTY_CONTEXT_RESET_ARB;
          };
          struct gl_innocent_context_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_innocent_context_reset_arb > {
              static constexpr char name[] = "innocent_context_reset_arb";
              static constexpr ::std::uint64_t value = GL_INNOCENT_CONTEXT_RESET_ARB;
          };
          struct gl_lose_context_on_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_lose_context_on_reset_arb > {
              static constexpr char name[] = "lose_context_on_reset_arb";
              static constexpr ::std::uint64_t value = GL_LOSE_CONTEXT_ON_RESET_ARB;
          };
          struct gl_no_reset_notification_arb: public ::gtulu::internal::constant::gl_constant< gl_no_reset_notification_arb > {
              static constexpr char name[] = "no_reset_notification_arb";
              static constexpr ::std::uint64_t value = GL_NO_RESET_NOTIFICATION_ARB;
          };
          struct gl_reset_notification_strategy_arb: public ::gtulu::internal::constant::gl_constant< gl_reset_notification_strategy_arb > {
              static constexpr char name[] = "reset_notification_strategy_arb";
              static constexpr ::std::uint64_t value = GL_RESET_NOTIFICATION_STRATEGY_ARB;
          };
          struct gl_unknown_context_reset_arb: public ::gtulu::internal::constant::gl_constant< gl_unknown_context_reset_arb > {
              static constexpr char name[] = "unknown_context_reset_arb";
              static constexpr ::std::uint64_t value = GL_UNKNOWN_CONTEXT_RESET_ARB;
          };
        } // namespace cst
      } // namespace robustness
      namespace sample_shading {
        namespace cst {
          struct gl_arb_sample_shading: public ::gtulu::internal::constant::gl_constant< gl_arb_sample_shading > {
              static constexpr char name[] = "arb_sample_shading";
              static constexpr ::std::uint64_t value = GL_ARB_sample_shading;
          };
          struct gl_min_sample_shading_value_arb: public ::gtulu::internal::constant::gl_constant< gl_min_sample_shading_value_arb > {
              static constexpr char name[] = "min_sample_shading_value_arb";
              static constexpr ::std::uint64_t value = GL_MIN_SAMPLE_SHADING_VALUE_ARB;
          };
          struct gl_sample_shading_arb: public ::gtulu::internal::constant::gl_constant< gl_sample_shading_arb > {
              static constexpr char name[] = "sample_shading_arb";
              static constexpr ::std::uint64_t value = GL_SAMPLE_SHADING_ARB;
          };
        } // namespace cst
      } // namespace sample_shading
      namespace sampler_objects {
        namespace cst {
          struct gl_arb_sampler_objects: public ::gtulu::internal::constant::gl_constant< gl_arb_sampler_objects > {
              static constexpr char name[] = "arb_sampler_objects";
              static constexpr ::std::uint64_t value = GL_ARB_sampler_objects;
          };
          struct gl_sampler_binding: public ::gtulu::internal::constant::gl_constant< gl_sampler_binding > {
              static constexpr char name[] = "sampler_binding";
              static constexpr ::std::uint64_t value = GL_SAMPLER_BINDING;
          };
        } // namespace cst
      } // namespace sampler_objects
      namespace seamless_cube_map {
        namespace cst {
          struct gl_arb_seamless_cube_map: public ::gtulu::internal::constant::gl_constant< gl_arb_seamless_cube_map > {
              static constexpr char name[] = "arb_seamless_cube_map";
              static constexpr ::std::uint64_t value = GL_ARB_seamless_cube_map;
          };
          struct gl_texture_cube_map_seamless: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_seamless > {
              static constexpr char name[] = "texture_cube_map_seamless";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_SEAMLESS;
          };
        } // namespace cst
      } // namespace seamless_cube_map
      namespace separate_shader_objects {
        namespace cst {
          struct gl_active_program: public ::gtulu::internal::constant::gl_constant< gl_active_program > {
              static constexpr char name[] = "active_program";
              static constexpr ::std::uint64_t value = GL_ACTIVE_PROGRAM;
          };
          struct gl_all_shader_bits: public ::gtulu::internal::constant::gl_constant< gl_all_shader_bits > {
              static constexpr char name[] = "all_shader_bits";
              static constexpr ::std::uint64_t value = GL_ALL_SHADER_BITS;
          };
          struct gl_arb_separate_shader_objects: public ::gtulu::internal::constant::gl_constant< gl_arb_separate_shader_objects > {
              static constexpr char name[] = "arb_separate_shader_objects";
              static constexpr ::std::uint64_t value = GL_ARB_separate_shader_objects;
          };
          struct gl_fragment_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_fragment_shader_bit > {
              static constexpr char name[] = "fragment_shader_bit";
              static constexpr ::std::uint64_t value = GL_FRAGMENT_SHADER_BIT;
          };
          struct gl_geometry_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_geometry_shader_bit > {
              static constexpr char name[] = "geometry_shader_bit";
              static constexpr ::std::uint64_t value = GL_GEOMETRY_SHADER_BIT;
          };
          struct gl_program_pipeline_binding: public ::gtulu::internal::constant::gl_constant< gl_program_pipeline_binding > {
              static constexpr char name[] = "program_pipeline_binding";
              static constexpr ::std::uint64_t value = GL_PROGRAM_PIPELINE_BINDING;
          };
          struct gl_program_separable: public ::gtulu::internal::constant::gl_constant< gl_program_separable > {
              static constexpr char name[] = "program_separable";
              static constexpr ::std::uint64_t value = GL_PROGRAM_SEPARABLE;
          };
          struct gl_tess_control_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_tess_control_shader_bit > {
              static constexpr char name[] = "tess_control_shader_bit";
              static constexpr ::std::uint64_t value = GL_TESS_CONTROL_SHADER_BIT;
          };
          struct gl_tess_evaluation_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_tess_evaluation_shader_bit > {
              static constexpr char name[] = "tess_evaluation_shader_bit";
              static constexpr ::std::uint64_t value = GL_TESS_EVALUATION_SHADER_BIT;
          };
          struct gl_vertex_shader_bit: public ::gtulu::internal::constant::gl_constant< gl_vertex_shader_bit > {
              static constexpr char name[] = "vertex_shader_bit";
              static constexpr ::std::uint64_t value = GL_VERTEX_SHADER_BIT;
          };
        } // namespace cst
      } // namespace separate_shader_objects
      namespace shader_atomic_counters {
        namespace cst {
          struct gl_active_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_active_atomic_counter_buffers > {
              static constexpr char name[] = "active_atomic_counter_buffers";
              static constexpr ::std::uint64_t value = GL_ACTIVE_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_arb_shader_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_atomic_counters > {
              static constexpr char name[] = "arb_shader_atomic_counters";
              static constexpr ::std::uint64_t value = GL_ARB_shader_atomic_counters;
          };
          struct gl_atomic_counter_buffer: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer > {
              static constexpr char name[] = "atomic_counter_buffer";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER;
          };
          struct gl_atomic_counter_buffer_active_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_active_atomic_counters > {
              static constexpr char name[] = "atomic_counter_buffer_active_atomic_counters";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS;
          };
          struct gl_atomic_counter_buffer_active_atomic_counter_indices: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_active_atomic_counter_indices > {
              static constexpr char name[] = "atomic_counter_buffer_active_atomic_counter_indices";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES;
          };
          struct gl_atomic_counter_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_binding > {
              static constexpr char name[] = "atomic_counter_buffer_binding";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_BINDING;
          };
          struct gl_atomic_counter_buffer_data_size: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_data_size > {
              static constexpr char name[] = "atomic_counter_buffer_data_size";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE;
          };
          struct gl_atomic_counter_buffer_referenced_by_fragment_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_fragment_shader > {
              static constexpr char name[] = "atomic_counter_buffer_referenced_by_fragment_shader";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_geometry_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_geometry_shader > {
              static constexpr char name[] = "atomic_counter_buffer_referenced_by_geometry_shader";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_tess_control_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_tess_control_shader > {
              static constexpr char name[] = "atomic_counter_buffer_referenced_by_tess_control_shader";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_tess_evaluation_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_tess_evaluation_shader > {
              static constexpr char name[] = "atomic_counter_buffer_referenced_by_tess_evaluation_shader";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER;
          };
          struct gl_atomic_counter_buffer_referenced_by_vertex_shader: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_referenced_by_vertex_shader > {
              static constexpr char name[] = "atomic_counter_buffer_referenced_by_vertex_shader";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER;
          };
          struct gl_atomic_counter_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_size > {
              static constexpr char name[] = "atomic_counter_buffer_size";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_SIZE;
          };
          struct gl_atomic_counter_buffer_start: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_buffer_start > {
              static constexpr char name[] = "atomic_counter_buffer_start";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BUFFER_START;
          };
          struct gl_max_atomic_counter_buffer_bindings: public ::gtulu::internal::constant::gl_constant< gl_max_atomic_counter_buffer_bindings > {
              static constexpr char name[] = "max_atomic_counter_buffer_bindings";
              static constexpr ::std::uint64_t value = GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS;
          };
          struct gl_max_atomic_counter_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_max_atomic_counter_buffer_size > {
              static constexpr char name[] = "max_atomic_counter_buffer_size";
              static constexpr ::std::uint64_t value = GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE;
          };
          struct gl_max_combined_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_combined_atomic_counters > {
              static constexpr char name[] = "max_combined_atomic_counters";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_ATOMIC_COUNTERS;
          };
          struct gl_max_combined_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_combined_atomic_counter_buffers > {
              static constexpr char name[] = "max_combined_atomic_counter_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_fragment_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_atomic_counters > {
              static constexpr char name[] = "max_fragment_atomic_counters";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_ATOMIC_COUNTERS;
          };
          struct gl_max_fragment_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_atomic_counter_buffers > {
              static constexpr char name[] = "max_fragment_atomic_counter_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_geometry_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_atomic_counters > {
              static constexpr char name[] = "max_geometry_atomic_counters";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_ATOMIC_COUNTERS;
          };
          struct gl_max_geometry_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_atomic_counter_buffers > {
              static constexpr char name[] = "max_geometry_atomic_counter_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_tess_control_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_atomic_counters > {
              static constexpr char name[] = "max_tess_control_atomic_counters";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS;
          };
          struct gl_max_tess_control_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_atomic_counter_buffers > {
              static constexpr char name[] = "max_tess_control_atomic_counter_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_tess_evaluation_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_atomic_counters > {
              static constexpr char name[] = "max_tess_evaluation_atomic_counters";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS;
          };
          struct gl_max_tess_evaluation_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_atomic_counter_buffers > {
              static constexpr char name[] = "max_tess_evaluation_atomic_counter_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_max_vertex_atomic_counters: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_atomic_counters > {
              static constexpr char name[] = "max_vertex_atomic_counters";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_ATOMIC_COUNTERS;
          };
          struct gl_max_vertex_atomic_counter_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_atomic_counter_buffers > {
              static constexpr char name[] = "max_vertex_atomic_counter_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS;
          };
          struct gl_uniform_atomic_counter_buffer_index: public ::gtulu::internal::constant::gl_constant< gl_uniform_atomic_counter_buffer_index > {
              static constexpr char name[] = "uniform_atomic_counter_buffer_index";
              static constexpr ::std::uint64_t value = GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX;
          };
          struct gl_unsigned_int_atomic_counter: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_atomic_counter > {
              static constexpr char name[] = "unsigned_int_atomic_counter";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_ATOMIC_COUNTER;
          };
        } // namespace cst
      } // namespace shader_atomic_counters
      namespace shader_bit_encoding {
        namespace cst {
          struct gl_arb_shader_bit_encoding: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_bit_encoding > {
              static constexpr char name[] = "arb_shader_bit_encoding";
              static constexpr ::std::uint64_t value = GL_ARB_shader_bit_encoding;
          };
        } // namespace cst
      } // namespace shader_bit_encoding
      namespace shader_image_load_store {
        namespace cst {
          struct gl_all_barrier_bits: public ::gtulu::internal::constant::gl_constant< gl_all_barrier_bits > {
              static constexpr char name[] = "all_barrier_bits";
              static constexpr ::std::uint64_t value = GL_ALL_BARRIER_BITS;
          };
          struct gl_arb_shader_image_load_store: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_image_load_store > {
              static constexpr char name[] = "arb_shader_image_load_store";
              static constexpr ::std::uint64_t value = GL_ARB_shader_image_load_store;
          };
          struct gl_atomic_counter_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_atomic_counter_barrier_bit > {
              static constexpr char name[] = "atomic_counter_barrier_bit";
              static constexpr ::std::uint64_t value = GL_ATOMIC_COUNTER_BARRIER_BIT;
          };
          struct gl_buffer_update_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_buffer_update_barrier_bit > {
              static constexpr char name[] = "buffer_update_barrier_bit";
              static constexpr ::std::uint64_t value = GL_BUFFER_UPDATE_BARRIER_BIT;
          };
          struct gl_command_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_command_barrier_bit > {
              static constexpr char name[] = "command_barrier_bit";
              static constexpr ::std::uint64_t value = GL_COMMAND_BARRIER_BIT;
          };
          struct gl_element_array_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_element_array_barrier_bit > {
              static constexpr char name[] = "element_array_barrier_bit";
              static constexpr ::std::uint64_t value = GL_ELEMENT_ARRAY_BARRIER_BIT;
          };
          struct gl_framebuffer_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_framebuffer_barrier_bit > {
              static constexpr char name[] = "framebuffer_barrier_bit";
              static constexpr ::std::uint64_t value = GL_FRAMEBUFFER_BARRIER_BIT;
          };
          struct gl_image_1d: public ::gtulu::internal::constant::gl_constant< gl_image_1d > {
              static constexpr char name[] = "image_1d";
              static constexpr ::std::uint64_t value = GL_IMAGE_1D;
          };
          struct gl_image_1d_array: public ::gtulu::internal::constant::gl_constant< gl_image_1d_array > {
              static constexpr char name[] = "image_1d_array";
              static constexpr ::std::uint64_t value = GL_IMAGE_1D_ARRAY;
          };
          struct gl_image_2d: public ::gtulu::internal::constant::gl_constant< gl_image_2d > {
              static constexpr char name[] = "image_2d";
              static constexpr ::std::uint64_t value = GL_IMAGE_2D;
          };
          struct gl_image_2d_array: public ::gtulu::internal::constant::gl_constant< gl_image_2d_array > {
              static constexpr char name[] = "image_2d_array";
              static constexpr ::std::uint64_t value = GL_IMAGE_2D_ARRAY;
          };
          struct gl_image_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_image_2d_multisample > {
              static constexpr char name[] = "image_2d_multisample";
              static constexpr ::std::uint64_t value = GL_IMAGE_2D_MULTISAMPLE;
          };
          struct gl_image_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_image_2d_multisample_array > {
              static constexpr char name[] = "image_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_IMAGE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_image_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_image_2d_rect > {
              static constexpr char name[] = "image_2d_rect";
              static constexpr ::std::uint64_t value = GL_IMAGE_2D_RECT;
          };
          struct gl_image_3d: public ::gtulu::internal::constant::gl_constant< gl_image_3d > {
              static constexpr char name[] = "image_3d";
              static constexpr ::std::uint64_t value = GL_IMAGE_3D;
          };
          struct gl_image_binding_access: public ::gtulu::internal::constant::gl_constant< gl_image_binding_access > {
              static constexpr char name[] = "image_binding_access";
              static constexpr ::std::uint64_t value = GL_IMAGE_BINDING_ACCESS;
          };
          struct gl_image_binding_format: public ::gtulu::internal::constant::gl_constant< gl_image_binding_format > {
              static constexpr char name[] = "image_binding_format";
              static constexpr ::std::uint64_t value = GL_IMAGE_BINDING_FORMAT;
          };
          struct gl_image_binding_layer: public ::gtulu::internal::constant::gl_constant< gl_image_binding_layer > {
              static constexpr char name[] = "image_binding_layer";
              static constexpr ::std::uint64_t value = GL_IMAGE_BINDING_LAYER;
          };
          struct gl_image_binding_layered: public ::gtulu::internal::constant::gl_constant< gl_image_binding_layered > {
              static constexpr char name[] = "image_binding_layered";
              static constexpr ::std::uint64_t value = GL_IMAGE_BINDING_LAYERED;
          };
          struct gl_image_binding_level: public ::gtulu::internal::constant::gl_constant< gl_image_binding_level > {
              static constexpr char name[] = "image_binding_level";
              static constexpr ::std::uint64_t value = GL_IMAGE_BINDING_LEVEL;
          };
          struct gl_image_binding_name: public ::gtulu::internal::constant::gl_constant< gl_image_binding_name > {
              static constexpr char name[] = "image_binding_name";
              static constexpr ::std::uint64_t value = GL_IMAGE_BINDING_NAME;
          };
          struct gl_image_buffer: public ::gtulu::internal::constant::gl_constant< gl_image_buffer > {
              static constexpr char name[] = "image_buffer";
              static constexpr ::std::uint64_t value = GL_IMAGE_BUFFER;
          };
          struct gl_image_cube: public ::gtulu::internal::constant::gl_constant< gl_image_cube > {
              static constexpr char name[] = "image_cube";
              static constexpr ::std::uint64_t value = GL_IMAGE_CUBE;
          };
          struct gl_image_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_image_cube_map_array > {
              static constexpr char name[] = "image_cube_map_array";
              static constexpr ::std::uint64_t value = GL_IMAGE_CUBE_MAP_ARRAY;
          };
          struct gl_image_format_compatibility_by_class: public ::gtulu::internal::constant::gl_constant< gl_image_format_compatibility_by_class > {
              static constexpr char name[] = "image_format_compatibility_by_class";
              static constexpr ::std::uint64_t value = GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS;
          };
          struct gl_image_format_compatibility_by_size: public ::gtulu::internal::constant::gl_constant< gl_image_format_compatibility_by_size > {
              static constexpr char name[] = "image_format_compatibility_by_size";
              static constexpr ::std::uint64_t value = GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE;
          };
          struct gl_image_format_compatibility_type: public ::gtulu::internal::constant::gl_constant< gl_image_format_compatibility_type > {
              static constexpr char name[] = "image_format_compatibility_type";
              static constexpr ::std::uint64_t value = GL_IMAGE_FORMAT_COMPATIBILITY_TYPE;
          };
          struct gl_int_image_1d: public ::gtulu::internal::constant::gl_constant< gl_int_image_1d > {
              static constexpr char name[] = "int_image_1d";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_1D;
          };
          struct gl_int_image_1d_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_1d_array > {
              static constexpr char name[] = "int_image_1d_array";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_1D_ARRAY;
          };
          struct gl_int_image_2d: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d > {
              static constexpr char name[] = "int_image_2d";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_2D;
          };
          struct gl_int_image_2d_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_array > {
              static constexpr char name[] = "int_image_2d_array";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_2D_ARRAY;
          };
          struct gl_int_image_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_multisample > {
              static constexpr char name[] = "int_image_2d_multisample";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_2D_MULTISAMPLE;
          };
          struct gl_int_image_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_multisample_array > {
              static constexpr char name[] = "int_image_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_int_image_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_int_image_2d_rect > {
              static constexpr char name[] = "int_image_2d_rect";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_2D_RECT;
          };
          struct gl_int_image_3d: public ::gtulu::internal::constant::gl_constant< gl_int_image_3d > {
              static constexpr char name[] = "int_image_3d";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_3D;
          };
          struct gl_int_image_buffer: public ::gtulu::internal::constant::gl_constant< gl_int_image_buffer > {
              static constexpr char name[] = "int_image_buffer";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_BUFFER;
          };
          struct gl_int_image_cube: public ::gtulu::internal::constant::gl_constant< gl_int_image_cube > {
              static constexpr char name[] = "int_image_cube";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_CUBE;
          };
          struct gl_int_image_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_int_image_cube_map_array > {
              static constexpr char name[] = "int_image_cube_map_array";
              static constexpr ::std::uint64_t value = GL_INT_IMAGE_CUBE_MAP_ARRAY;
          };
          struct gl_max_combined_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_combined_image_uniforms > {
              static constexpr char name[] = "max_combined_image_uniforms";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_IMAGE_UNIFORMS;
          };
          struct gl_max_combined_image_units_and_fragment_outputs: public ::gtulu::internal::constant::gl_constant< gl_max_combined_image_units_and_fragment_outputs > {
              static constexpr char name[] = "max_combined_image_units_and_fragment_outputs";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS;
          };
          struct gl_max_fragment_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_image_uniforms > {
              static constexpr char name[] = "max_fragment_image_uniforms";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_IMAGE_UNIFORMS;
          };
          struct gl_max_geometry_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_image_uniforms > {
              static constexpr char name[] = "max_geometry_image_uniforms";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_IMAGE_UNIFORMS;
          };
          struct gl_max_image_samples: public ::gtulu::internal::constant::gl_constant< gl_max_image_samples > {
              static constexpr char name[] = "max_image_samples";
              static constexpr ::std::uint64_t value = GL_MAX_IMAGE_SAMPLES;
          };
          struct gl_max_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_image_units > {
              static constexpr char name[] = "max_image_units";
              static constexpr ::std::uint64_t value = GL_MAX_IMAGE_UNITS;
          };
          struct gl_max_tess_control_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_image_uniforms > {
              static constexpr char name[] = "max_tess_control_image_uniforms";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS;
          };
          struct gl_max_tess_evaluation_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_image_uniforms > {
              static constexpr char name[] = "max_tess_evaluation_image_uniforms";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS;
          };
          struct gl_max_vertex_image_uniforms: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_image_uniforms > {
              static constexpr char name[] = "max_vertex_image_uniforms";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_IMAGE_UNIFORMS;
          };
          struct gl_pixel_buffer_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_pixel_buffer_barrier_bit > {
              static constexpr char name[] = "pixel_buffer_barrier_bit";
              static constexpr ::std::uint64_t value = GL_PIXEL_BUFFER_BARRIER_BIT;
          };
          struct gl_shader_image_access_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_shader_image_access_barrier_bit > {
              static constexpr char name[] = "shader_image_access_barrier_bit";
              static constexpr ::std::uint64_t value = GL_SHADER_IMAGE_ACCESS_BARRIER_BIT;
          };
          struct gl_texture_fetch_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_texture_fetch_barrier_bit > {
              static constexpr char name[] = "texture_fetch_barrier_bit";
              static constexpr ::std::uint64_t value = GL_TEXTURE_FETCH_BARRIER_BIT;
          };
          struct gl_texture_update_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_texture_update_barrier_bit > {
              static constexpr char name[] = "texture_update_barrier_bit";
              static constexpr ::std::uint64_t value = GL_TEXTURE_UPDATE_BARRIER_BIT;
          };
          struct gl_transform_feedback_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_barrier_bit > {
              static constexpr char name[] = "transform_feedback_barrier_bit";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BARRIER_BIT;
          };
          struct gl_uniform_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_uniform_barrier_bit > {
              static constexpr char name[] = "uniform_barrier_bit";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BARRIER_BIT;
          };
          struct gl_unsigned_int_image_1d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_1d > {
              static constexpr char name[] = "unsigned_int_image_1d";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_1D;
          };
          struct gl_unsigned_int_image_1d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_1d_array > {
              static constexpr char name[] = "unsigned_int_image_1d_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_1D_ARRAY;
          };
          struct gl_unsigned_int_image_2d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d > {
              static constexpr char name[] = "unsigned_int_image_2d";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_2D;
          };
          struct gl_unsigned_int_image_2d_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_array > {
              static constexpr char name[] = "unsigned_int_image_2d_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_2D_ARRAY;
          };
          struct gl_unsigned_int_image_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_multisample > {
              static constexpr char name[] = "unsigned_int_image_2d_multisample";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE;
          };
          struct gl_unsigned_int_image_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_multisample_array > {
              static constexpr char name[] = "unsigned_int_image_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_unsigned_int_image_2d_rect: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_2d_rect > {
              static constexpr char name[] = "unsigned_int_image_2d_rect";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_2D_RECT;
          };
          struct gl_unsigned_int_image_3d: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_3d > {
              static constexpr char name[] = "unsigned_int_image_3d";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_3D;
          };
          struct gl_unsigned_int_image_buffer: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_buffer > {
              static constexpr char name[] = "unsigned_int_image_buffer";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_BUFFER;
          };
          struct gl_unsigned_int_image_cube: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_cube > {
              static constexpr char name[] = "unsigned_int_image_cube";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_CUBE;
          };
          struct gl_unsigned_int_image_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_image_cube_map_array > {
              static constexpr char name[] = "unsigned_int_image_cube_map_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY;
          };
          struct gl_vertex_attrib_array_barrier_bit: public ::gtulu::internal::constant::gl_constant< gl_vertex_attrib_array_barrier_bit > {
              static constexpr char name[] = "vertex_attrib_array_barrier_bit";
              static constexpr ::std::uint64_t value = GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT;
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
              static constexpr char name[] = "arb_shader_stencil_export";
              static constexpr ::std::uint64_t value = GL_ARB_shader_stencil_export;
          };
        } // namespace cst
      } // namespace shader_stencil_export
      namespace shader_subroutine {
        namespace cst {
          struct gl_active_subroutines: public ::gtulu::internal::constant::gl_constant< gl_active_subroutines > {
              static constexpr char name[] = "active_subroutines";
              static constexpr ::std::uint64_t value = GL_ACTIVE_SUBROUTINES;
          };
          struct gl_active_subroutine_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_max_length > {
              static constexpr char name[] = "active_subroutine_max_length";
              static constexpr ::std::uint64_t value = GL_ACTIVE_SUBROUTINE_MAX_LENGTH;
          };
          struct gl_active_subroutine_uniforms: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_uniforms > {
              static constexpr char name[] = "active_subroutine_uniforms";
              static constexpr ::std::uint64_t value = GL_ACTIVE_SUBROUTINE_UNIFORMS;
          };
          struct gl_active_subroutine_uniform_locations: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_uniform_locations > {
              static constexpr char name[] = "active_subroutine_uniform_locations";
              static constexpr ::std::uint64_t value = GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS;
          };
          struct gl_active_subroutine_uniform_max_length: public ::gtulu::internal::constant::gl_constant< gl_active_subroutine_uniform_max_length > {
              static constexpr char name[] = "active_subroutine_uniform_max_length";
              static constexpr ::std::uint64_t value = GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH;
          };
          struct gl_arb_shader_subroutine: public ::gtulu::internal::constant::gl_constant< gl_arb_shader_subroutine > {
              static constexpr char name[] = "arb_shader_subroutine";
              static constexpr ::std::uint64_t value = GL_ARB_shader_subroutine;
          };
          struct gl_compatible_subroutines: public ::gtulu::internal::constant::gl_constant< gl_compatible_subroutines > {
              static constexpr char name[] = "compatible_subroutines";
              static constexpr ::std::uint64_t value = GL_COMPATIBLE_SUBROUTINES;
          };
          struct gl_max_subroutines: public ::gtulu::internal::constant::gl_constant< gl_max_subroutines > {
              static constexpr char name[] = "max_subroutines";
              static constexpr ::std::uint64_t value = GL_MAX_SUBROUTINES;
          };
          struct gl_max_subroutine_uniform_locations: public ::gtulu::internal::constant::gl_constant< gl_max_subroutine_uniform_locations > {
              static constexpr char name[] = "max_subroutine_uniform_locations";
              static constexpr ::std::uint64_t value = GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS;
          };
          struct gl_num_compatible_subroutines: public ::gtulu::internal::constant::gl_constant< gl_num_compatible_subroutines > {
              static constexpr char name[] = "num_compatible_subroutines";
              static constexpr ::std::uint64_t value = GL_NUM_COMPATIBLE_SUBROUTINES;
          };
        } // namespace cst
      } // namespace shader_subroutine
      namespace shading_language_420pack {
        namespace cst {
          struct gl_arb_shading_language_420pack: public ::gtulu::internal::constant::gl_constant< gl_arb_shading_language_420pack > {
              static constexpr char name[] = "arb_shading_language_420pack";
              static constexpr ::std::uint64_t value = GL_ARB_shading_language_420pack;
          };
        } // namespace cst
      } // namespace shading_language_420pack
      namespace shading_language_include {
        namespace cst {
          struct gl_arb_shading_language_include: public ::gtulu::internal::constant::gl_constant< gl_arb_shading_language_include > {
              static constexpr char name[] = "arb_shading_language_include";
              static constexpr ::std::uint64_t value = GL_ARB_shading_language_include;
          };
          struct gl_named_string_length_arb: public ::gtulu::internal::constant::gl_constant< gl_named_string_length_arb > {
              static constexpr char name[] = "named_string_length_arb";
              static constexpr ::std::uint64_t value = GL_NAMED_STRING_LENGTH_ARB;
          };
          struct gl_named_string_type_arb: public ::gtulu::internal::constant::gl_constant< gl_named_string_type_arb > {
              static constexpr char name[] = "named_string_type_arb";
              static constexpr ::std::uint64_t value = GL_NAMED_STRING_TYPE_ARB;
          };
          struct gl_shader_include_arb: public ::gtulu::internal::constant::gl_constant< gl_shader_include_arb > {
              static constexpr char name[] = "shader_include_arb";
              static constexpr ::std::uint64_t value = GL_SHADER_INCLUDE_ARB;
          };
        } // namespace cst
      } // namespace shading_language_include
      namespace shading_language_packing {
        namespace cst {
          struct gl_arb_shading_language_packing: public ::gtulu::internal::constant::gl_constant< gl_arb_shading_language_packing > {
              static constexpr char name[] = "arb_shading_language_packing";
              static constexpr ::std::uint64_t value = GL_ARB_shading_language_packing;
          };
        } // namespace cst
      } // namespace shading_language_packing
      namespace sync {
        namespace cst {
          struct gl_already_signaled: public ::gtulu::internal::constant::gl_constant< gl_already_signaled > {
              static constexpr char name[] = "already_signaled";
              static constexpr ::std::uint64_t value = GL_ALREADY_SIGNALED;
          };
          struct gl_arb_sync: public ::gtulu::internal::constant::gl_constant< gl_arb_sync > {
              static constexpr char name[] = "arb_sync";
              static constexpr ::std::uint64_t value = GL_ARB_sync;
          };
          struct gl_condition_satisfied: public ::gtulu::internal::constant::gl_constant< gl_condition_satisfied > {
              static constexpr char name[] = "condition_satisfied";
              static constexpr ::std::uint64_t value = GL_CONDITION_SATISFIED;
          };
          struct gl_max_server_wait_timeout: public ::gtulu::internal::constant::gl_constant< gl_max_server_wait_timeout > {
              static constexpr char name[] = "max_server_wait_timeout";
              static constexpr ::std::uint64_t value = GL_MAX_SERVER_WAIT_TIMEOUT;
          };
          struct gl_object_type: public ::gtulu::internal::constant::gl_constant< gl_object_type > {
              static constexpr char name[] = "object_type";
              static constexpr ::std::uint64_t value = GL_OBJECT_TYPE;
          };
          struct gl_signaled: public ::gtulu::internal::constant::gl_constant< gl_signaled > {
              static constexpr char name[] = "signaled";
              static constexpr ::std::uint64_t value = GL_SIGNALED;
          };
          struct gl_sync_condition: public ::gtulu::internal::constant::gl_constant< gl_sync_condition > {
              static constexpr char name[] = "sync_condition";
              static constexpr ::std::uint64_t value = GL_SYNC_CONDITION;
          };
          struct gl_sync_fence: public ::gtulu::internal::constant::gl_constant< gl_sync_fence > {
              static constexpr char name[] = "sync_fence";
              static constexpr ::std::uint64_t value = GL_SYNC_FENCE;
          };
          struct gl_sync_flags: public ::gtulu::internal::constant::gl_constant< gl_sync_flags > {
              static constexpr char name[] = "sync_flags";
              static constexpr ::std::uint64_t value = GL_SYNC_FLAGS;
          };
          struct gl_sync_flush_commands_bit: public ::gtulu::internal::constant::gl_constant< gl_sync_flush_commands_bit > {
              static constexpr char name[] = "sync_flush_commands_bit";
              static constexpr ::std::uint64_t value = GL_SYNC_FLUSH_COMMANDS_BIT;
          };
          struct gl_sync_gpu_commands_complete: public ::gtulu::internal::constant::gl_constant< gl_sync_gpu_commands_complete > {
              static constexpr char name[] = "sync_gpu_commands_complete";
              static constexpr ::std::uint64_t value = GL_SYNC_GPU_COMMANDS_COMPLETE;
          };
          struct gl_sync_status: public ::gtulu::internal::constant::gl_constant< gl_sync_status > {
              static constexpr char name[] = "sync_status";
              static constexpr ::std::uint64_t value = GL_SYNC_STATUS;
          };
          struct gl_timeout_expired: public ::gtulu::internal::constant::gl_constant< gl_timeout_expired > {
              static constexpr char name[] = "timeout_expired";
              static constexpr ::std::uint64_t value = GL_TIMEOUT_EXPIRED;
          };
          struct gl_timeout_ignored: public ::gtulu::internal::constant::gl_constant< gl_timeout_ignored > {
              static constexpr char name[] = "timeout_ignored";
              static constexpr ::std::uint64_t value = GL_TIMEOUT_IGNORED;
          };
          struct gl_unsignaled: public ::gtulu::internal::constant::gl_constant< gl_unsignaled > {
              static constexpr char name[] = "unsignaled";
              static constexpr ::std::uint64_t value = GL_UNSIGNALED;
          };
          struct gl_wait_failed: public ::gtulu::internal::constant::gl_constant< gl_wait_failed > {
              static constexpr char name[] = "wait_failed";
              static constexpr ::std::uint64_t value = GL_WAIT_FAILED;
          };
        } // namespace cst
      } // namespace sync
      namespace tessellation_shader {
        namespace cst {
          struct gl_arb_tessellation_shader: public ::gtulu::internal::constant::gl_constant< gl_arb_tessellation_shader > {
              static constexpr char name[] = "arb_tessellation_shader";
              static constexpr ::std::uint64_t value = GL_ARB_tessellation_shader;
          };
          struct gl_fractional_even: public ::gtulu::internal::constant::gl_constant< gl_fractional_even > {
              static constexpr char name[] = "fractional_even";
              static constexpr ::std::uint64_t value = GL_FRACTIONAL_EVEN;
          };
          struct gl_fractional_odd: public ::gtulu::internal::constant::gl_constant< gl_fractional_odd > {
              static constexpr char name[] = "fractional_odd";
              static constexpr ::std::uint64_t value = GL_FRACTIONAL_ODD;
          };
          struct gl_isolines: public ::gtulu::internal::constant::gl_constant< gl_isolines > {
              static constexpr char name[] = "isolines";
              static constexpr ::std::uint64_t value = GL_ISOLINES;
          };
          struct gl_max_combined_tess_control_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_tess_control_uniform_components > {
              static constexpr char name[] = "max_combined_tess_control_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS;
          };
          struct gl_max_combined_tess_evaluation_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_tess_evaluation_uniform_components > {
              static constexpr char name[] = "max_combined_tess_evaluation_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS;
          };
          struct gl_max_patch_vertices: public ::gtulu::internal::constant::gl_constant< gl_max_patch_vertices > {
              static constexpr char name[] = "max_patch_vertices";
              static constexpr ::std::uint64_t value = GL_MAX_PATCH_VERTICES;
          };
          struct gl_max_tess_control_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_input_components > {
              static constexpr char name[] = "max_tess_control_input_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_INPUT_COMPONENTS;
          };
          struct gl_max_tess_control_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_output_components > {
              static constexpr char name[] = "max_tess_control_output_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS;
          };
          struct gl_max_tess_control_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_texture_image_units > {
              static constexpr char name[] = "max_tess_control_texture_image_units";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_tess_control_total_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_total_output_components > {
              static constexpr char name[] = "max_tess_control_total_output_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS;
          };
          struct gl_max_tess_control_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_uniform_blocks > {
              static constexpr char name[] = "max_tess_control_uniform_blocks";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS;
          };
          struct gl_max_tess_control_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_control_uniform_components > {
              static constexpr char name[] = "max_tess_control_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS;
          };
          struct gl_max_tess_evaluation_input_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_input_components > {
              static constexpr char name[] = "max_tess_evaluation_input_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS;
          };
          struct gl_max_tess_evaluation_output_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_output_components > {
              static constexpr char name[] = "max_tess_evaluation_output_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS;
          };
          struct gl_max_tess_evaluation_texture_image_units: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_texture_image_units > {
              static constexpr char name[] = "max_tess_evaluation_texture_image_units";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS;
          };
          struct gl_max_tess_evaluation_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_uniform_blocks > {
              static constexpr char name[] = "max_tess_evaluation_uniform_blocks";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS;
          };
          struct gl_max_tess_evaluation_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_evaluation_uniform_components > {
              static constexpr char name[] = "max_tess_evaluation_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS;
          };
          struct gl_max_tess_gen_level: public ::gtulu::internal::constant::gl_constant< gl_max_tess_gen_level > {
              static constexpr char name[] = "max_tess_gen_level";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_GEN_LEVEL;
          };
          struct gl_max_tess_patch_components: public ::gtulu::internal::constant::gl_constant< gl_max_tess_patch_components > {
              static constexpr char name[] = "max_tess_patch_components";
              static constexpr ::std::uint64_t value = GL_MAX_TESS_PATCH_COMPONENTS;
          };
          struct gl_patches: public ::gtulu::internal::constant::gl_constant< gl_patches > {
              static constexpr char name[] = "patches";
              static constexpr ::std::uint64_t value = GL_PATCHES;
          };
          struct gl_patch_default_inner_level: public ::gtulu::internal::constant::gl_constant< gl_patch_default_inner_level > {
              static constexpr char name[] = "patch_default_inner_level";
              static constexpr ::std::uint64_t value = GL_PATCH_DEFAULT_INNER_LEVEL;
          };
          struct gl_patch_default_outer_level: public ::gtulu::internal::constant::gl_constant< gl_patch_default_outer_level > {
              static constexpr char name[] = "patch_default_outer_level";
              static constexpr ::std::uint64_t value = GL_PATCH_DEFAULT_OUTER_LEVEL;
          };
          struct gl_patch_vertices: public ::gtulu::internal::constant::gl_constant< gl_patch_vertices > {
              static constexpr char name[] = "patch_vertices";
              static constexpr ::std::uint64_t value = GL_PATCH_VERTICES;
          };
          struct gl_tess_control_output_vertices: public ::gtulu::internal::constant::gl_constant< gl_tess_control_output_vertices > {
              static constexpr char name[] = "tess_control_output_vertices";
              static constexpr ::std::uint64_t value = GL_TESS_CONTROL_OUTPUT_VERTICES;
          };
          struct gl_tess_control_shader: public ::gtulu::internal::constant::gl_constant< gl_tess_control_shader > {
              static constexpr char name[] = "tess_control_shader";
              static constexpr ::std::uint64_t value = GL_TESS_CONTROL_SHADER;
          };
          struct gl_tess_evaluation_shader: public ::gtulu::internal::constant::gl_constant< gl_tess_evaluation_shader > {
              static constexpr char name[] = "tess_evaluation_shader";
              static constexpr ::std::uint64_t value = GL_TESS_EVALUATION_SHADER;
          };
          struct gl_tess_gen_mode: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_mode > {
              static constexpr char name[] = "tess_gen_mode";
              static constexpr ::std::uint64_t value = GL_TESS_GEN_MODE;
          };
          struct gl_tess_gen_point_mode: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_point_mode > {
              static constexpr char name[] = "tess_gen_point_mode";
              static constexpr ::std::uint64_t value = GL_TESS_GEN_POINT_MODE;
          };
          struct gl_tess_gen_spacing: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_spacing > {
              static constexpr char name[] = "tess_gen_spacing";
              static constexpr ::std::uint64_t value = GL_TESS_GEN_SPACING;
          };
          struct gl_tess_gen_vertex_order: public ::gtulu::internal::constant::gl_constant< gl_tess_gen_vertex_order > {
              static constexpr char name[] = "tess_gen_vertex_order";
              static constexpr ::std::uint64_t value = GL_TESS_GEN_VERTEX_ORDER;
          };
          struct gl_uniform_block_referenced_by_tess_control_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_tess_control_shader > {
              static constexpr char name[] = "uniform_block_referenced_by_tess_control_shader";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER;
          };
          struct gl_uniform_block_referenced_by_tess_evaluation_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_tess_evaluation_shader > {
              static constexpr char name[] = "uniform_block_referenced_by_tess_evaluation_shader";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER;
          };
        } // namespace cst
      } // namespace tessellation_shader
      namespace texture_buffer_object_rgb32 {
        namespace cst {
          struct gl_arb_texture_buffer_object_rgb32: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_buffer_object_rgb32 > {
              static constexpr char name[] = "arb_texture_buffer_object_rgb32";
              static constexpr ::std::uint64_t value = GL_ARB_texture_buffer_object_rgb32;
          };
        } // namespace cst
      } // namespace texture_buffer_object_rgb32
      namespace texture_compression_bptc {
        namespace cst {
          struct gl_arb_texture_compression_bptc: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_compression_bptc > {
              static constexpr char name[] = "arb_texture_compression_bptc";
              static constexpr ::std::uint64_t value = GL_ARB_texture_compression_bptc;
          };
          struct gl_compressed_rgba_bptc_unorm_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgba_bptc_unorm_arb > {
              static constexpr char name[] = "compressed_rgba_bptc_unorm_arb";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RGBA_BPTC_UNORM_ARB;
          };
          struct gl_compressed_rgb_bptc_signed_float_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgb_bptc_signed_float_arb > {
              static constexpr char name[] = "compressed_rgb_bptc_signed_float_arb";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB;
          };
          struct gl_compressed_rgb_bptc_unsigned_float_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_rgb_bptc_unsigned_float_arb > {
              static constexpr char name[] = "compressed_rgb_bptc_unsigned_float_arb";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB;
          };
          struct gl_compressed_srgb_alpha_bptc_unorm_arb: public ::gtulu::internal::constant::gl_constant< gl_compressed_srgb_alpha_bptc_unorm_arb > {
              static constexpr char name[] = "compressed_srgb_alpha_bptc_unorm_arb";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB;
          };
        } // namespace cst
      } // namespace texture_compression_bptc
      namespace texture_compression_rgtc {
        namespace cst {
          struct gl_arb_texture_compression_rgtc: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_compression_rgtc > {
              static constexpr char name[] = "arb_texture_compression_rgtc";
              static constexpr ::std::uint64_t value = GL_ARB_texture_compression_rgtc;
          };
          struct gl_compressed_red_rgtc1: public ::gtulu::internal::constant::gl_constant< gl_compressed_red_rgtc1 > {
              static constexpr char name[] = "compressed_red_rgtc1";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RED_RGTC1;
          };
          struct gl_compressed_rg_rgtc2: public ::gtulu::internal::constant::gl_constant< gl_compressed_rg_rgtc2 > {
              static constexpr char name[] = "compressed_rg_rgtc2";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_RG_RGTC2;
          };
          struct gl_compressed_signed_red_rgtc1: public ::gtulu::internal::constant::gl_constant< gl_compressed_signed_red_rgtc1 > {
              static constexpr char name[] = "compressed_signed_red_rgtc1";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_SIGNED_RED_RGTC1;
          };
          struct gl_compressed_signed_rg_rgtc2: public ::gtulu::internal::constant::gl_constant< gl_compressed_signed_rg_rgtc2 > {
              static constexpr char name[] = "compressed_signed_rg_rgtc2";
              static constexpr ::std::uint64_t value = GL_COMPRESSED_SIGNED_RG_RGTC2;
          };
        } // namespace cst
      } // namespace texture_compression_rgtc
      namespace texture_cube_map_array {
        namespace cst {
          struct gl_arb_texture_cube_map_array: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_cube_map_array > {
              static constexpr char name[] = "arb_texture_cube_map_array";
              static constexpr ::std::uint64_t value = GL_ARB_texture_cube_map_array;
          };
          struct gl_int_sampler_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_cube_map_array_arb > {
              static constexpr char name[] = "int_sampler_cube_map_array_arb";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_proxy_texture_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_cube_map_array_arb > {
              static constexpr char name[] = "proxy_texture_cube_map_array_arb";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_sampler_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array_arb > {
              static constexpr char name[] = "sampler_cube_map_array_arb";
              static constexpr ::std::uint64_t value = GL_SAMPLER_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_sampler_cube_map_array_shadow_arb: public ::gtulu::internal::constant::gl_constant< gl_sampler_cube_map_array_shadow_arb > {
              static constexpr char name[] = "sampler_cube_map_array_shadow_arb";
              static constexpr ::std::uint64_t value = GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB;
          };
          struct gl_texture_binding_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_cube_map_array_arb > {
              static constexpr char name[] = "texture_binding_cube_map_array_arb";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_texture_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_texture_cube_map_array_arb > {
              static constexpr char name[] = "texture_cube_map_array_arb";
              static constexpr ::std::uint64_t value = GL_TEXTURE_CUBE_MAP_ARRAY_ARB;
          };
          struct gl_unsigned_int_sampler_cube_map_array_arb: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_cube_map_array_arb > {
              static constexpr char name[] = "unsigned_int_sampler_cube_map_array_arb";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB;
          };
        } // namespace cst
      } // namespace texture_cube_map_array
      namespace texture_gather {
        namespace cst {
          struct gl_arb_texture_gather: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_gather > {
              static constexpr char name[] = "arb_texture_gather";
              static constexpr ::std::uint64_t value = GL_ARB_texture_gather;
          };
          struct gl_max_program_texture_gather_offset_arb: public ::gtulu::internal::constant::gl_constant< gl_max_program_texture_gather_offset_arb > {
              static constexpr char name[] = "max_program_texture_gather_offset_arb";
              static constexpr ::std::uint64_t value = GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB;
          };
          struct gl_min_program_texture_gather_offset_arb: public ::gtulu::internal::constant::gl_constant< gl_min_program_texture_gather_offset_arb > {
              static constexpr char name[] = "min_program_texture_gather_offset_arb";
              static constexpr ::std::uint64_t value = GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB;
          };
        } // namespace cst
      } // namespace texture_gather
      namespace texture_multisample {
        namespace cst {
          struct gl_arb_texture_multisample: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_multisample > {
              static constexpr char name[] = "arb_texture_multisample";
              static constexpr ::std::uint64_t value = GL_ARB_texture_multisample;
          };
          struct gl_int_sampler_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_multisample > {
              static constexpr char name[] = "int_sampler_2d_multisample";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_2D_MULTISAMPLE;
          };
          struct gl_int_sampler_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_int_sampler_2d_multisample_array > {
              static constexpr char name[] = "int_sampler_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_max_color_texture_samples: public ::gtulu::internal::constant::gl_constant< gl_max_color_texture_samples > {
              static constexpr char name[] = "max_color_texture_samples";
              static constexpr ::std::uint64_t value = GL_MAX_COLOR_TEXTURE_SAMPLES;
          };
          struct gl_max_depth_texture_samples: public ::gtulu::internal::constant::gl_constant< gl_max_depth_texture_samples > {
              static constexpr char name[] = "max_depth_texture_samples";
              static constexpr ::std::uint64_t value = GL_MAX_DEPTH_TEXTURE_SAMPLES;
          };
          struct gl_max_integer_samples: public ::gtulu::internal::constant::gl_constant< gl_max_integer_samples > {
              static constexpr char name[] = "max_integer_samples";
              static constexpr ::std::uint64_t value = GL_MAX_INTEGER_SAMPLES;
          };
          struct gl_max_sample_mask_words: public ::gtulu::internal::constant::gl_constant< gl_max_sample_mask_words > {
              static constexpr char name[] = "max_sample_mask_words";
              static constexpr ::std::uint64_t value = GL_MAX_SAMPLE_MASK_WORDS;
          };
          struct gl_proxy_texture_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d_multisample > {
              static constexpr char name[] = "proxy_texture_2d_multisample";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_2D_MULTISAMPLE;
          };
          struct gl_proxy_texture_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_proxy_texture_2d_multisample_array > {
              static constexpr char name[] = "proxy_texture_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_sampler_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_multisample > {
              static constexpr char name[] = "sampler_2d_multisample";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D_MULTISAMPLE;
          };
          struct gl_sampler_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_sampler_2d_multisample_array > {
              static constexpr char name[] = "sampler_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_SAMPLER_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_sample_mask: public ::gtulu::internal::constant::gl_constant< gl_sample_mask > {
              static constexpr char name[] = "sample_mask";
              static constexpr ::std::uint64_t value = GL_SAMPLE_MASK;
          };
          struct gl_sample_mask_value: public ::gtulu::internal::constant::gl_constant< gl_sample_mask_value > {
              static constexpr char name[] = "sample_mask_value";
              static constexpr ::std::uint64_t value = GL_SAMPLE_MASK_VALUE;
          };
          struct gl_sample_position: public ::gtulu::internal::constant::gl_constant< gl_sample_position > {
              static constexpr char name[] = "sample_position";
              static constexpr ::std::uint64_t value = GL_SAMPLE_POSITION;
          };
          struct gl_texture_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_texture_2d_multisample > {
              static constexpr char name[] = "texture_2d_multisample";
              static constexpr ::std::uint64_t value = GL_TEXTURE_2D_MULTISAMPLE;
          };
          struct gl_texture_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_texture_2d_multisample_array > {
              static constexpr char name[] = "texture_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_texture_binding_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d_multisample > {
              static constexpr char name[] = "texture_binding_2d_multisample";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_2D_MULTISAMPLE;
          };
          struct gl_texture_binding_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_texture_binding_2d_multisample_array > {
              static constexpr char name[] = "texture_binding_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY;
          };
          struct gl_texture_fixed_sample_locations: public ::gtulu::internal::constant::gl_constant< gl_texture_fixed_sample_locations > {
              static constexpr char name[] = "texture_fixed_sample_locations";
              static constexpr ::std::uint64_t value = GL_TEXTURE_FIXED_SAMPLE_LOCATIONS;
          };
          struct gl_texture_samples: public ::gtulu::internal::constant::gl_constant< gl_texture_samples > {
              static constexpr char name[] = "texture_samples";
              static constexpr ::std::uint64_t value = GL_TEXTURE_SAMPLES;
          };
          struct gl_unsigned_int_sampler_2d_multisample: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_multisample > {
              static constexpr char name[] = "unsigned_int_sampler_2d_multisample";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE;
          };
          struct gl_unsigned_int_sampler_2d_multisample_array: public ::gtulu::internal::constant::gl_constant< gl_unsigned_int_sampler_2d_multisample_array > {
              static constexpr char name[] = "unsigned_int_sampler_2d_multisample_array";
              static constexpr ::std::uint64_t value = GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY;
          };
        } // namespace cst
      } // namespace texture_multisample
      namespace texture_query_lod {
        namespace cst {
          struct gl_arb_texture_query_lod: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_query_lod > {
              static constexpr char name[] = "arb_texture_query_lod";
              static constexpr ::std::uint64_t value = GL_ARB_texture_query_lod;
          };
        } // namespace cst
      } // namespace texture_query_lod
      namespace texture_rg {
        namespace cst {
          struct gl_arb_texture_rg: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_rg > {
              static constexpr char name[] = "arb_texture_rg";
              static constexpr ::std::uint64_t value = GL_ARB_texture_rg;
          };
          struct gl_r16: public ::gtulu::internal::constant::gl_constant< gl_r16 > {
              static constexpr char name[] = "r16";
              static constexpr ::std::uint64_t value = GL_R16;
          };
          struct gl_r16f: public ::gtulu::internal::constant::gl_constant< gl_r16f > {
              static constexpr char name[] = "r16f";
              static constexpr ::std::uint64_t value = GL_R16F;
          };
          struct gl_r16i: public ::gtulu::internal::constant::gl_constant< gl_r16i > {
              static constexpr char name[] = "r16i";
              static constexpr ::std::uint64_t value = GL_R16I;
          };
          struct gl_r16ui: public ::gtulu::internal::constant::gl_constant< gl_r16ui > {
              static constexpr char name[] = "r16ui";
              static constexpr ::std::uint64_t value = GL_R16UI;
          };
          struct gl_r32f: public ::gtulu::internal::constant::gl_constant< gl_r32f > {
              static constexpr char name[] = "r32f";
              static constexpr ::std::uint64_t value = GL_R32F;
          };
          struct gl_r32i: public ::gtulu::internal::constant::gl_constant< gl_r32i > {
              static constexpr char name[] = "r32i";
              static constexpr ::std::uint64_t value = GL_R32I;
          };
          struct gl_r32ui: public ::gtulu::internal::constant::gl_constant< gl_r32ui > {
              static constexpr char name[] = "r32ui";
              static constexpr ::std::uint64_t value = GL_R32UI;
          };
          struct gl_r8: public ::gtulu::internal::constant::gl_constant< gl_r8 > {
              static constexpr char name[] = "r8";
              static constexpr ::std::uint64_t value = GL_R8;
          };
          struct gl_r8i: public ::gtulu::internal::constant::gl_constant< gl_r8i > {
              static constexpr char name[] = "r8i";
              static constexpr ::std::uint64_t value = GL_R8I;
          };
          struct gl_r8ui: public ::gtulu::internal::constant::gl_constant< gl_r8ui > {
              static constexpr char name[] = "r8ui";
              static constexpr ::std::uint64_t value = GL_R8UI;
          };
          struct gl_rg: public ::gtulu::internal::constant::gl_constant< gl_rg > {
              static constexpr char name[] = "rg";
              static constexpr ::std::uint64_t value = GL_RG;
          };
          struct gl_rg16: public ::gtulu::internal::constant::gl_constant< gl_rg16 > {
              static constexpr char name[] = "rg16";
              static constexpr ::std::uint64_t value = GL_RG16;
          };
          struct gl_rg16f: public ::gtulu::internal::constant::gl_constant< gl_rg16f > {
              static constexpr char name[] = "rg16f";
              static constexpr ::std::uint64_t value = GL_RG16F;
          };
          struct gl_rg16i: public ::gtulu::internal::constant::gl_constant< gl_rg16i > {
              static constexpr char name[] = "rg16i";
              static constexpr ::std::uint64_t value = GL_RG16I;
          };
          struct gl_rg16ui: public ::gtulu::internal::constant::gl_constant< gl_rg16ui > {
              static constexpr char name[] = "rg16ui";
              static constexpr ::std::uint64_t value = GL_RG16UI;
          };
          struct gl_rg32f: public ::gtulu::internal::constant::gl_constant< gl_rg32f > {
              static constexpr char name[] = "rg32f";
              static constexpr ::std::uint64_t value = GL_RG32F;
          };
          struct gl_rg32i: public ::gtulu::internal::constant::gl_constant< gl_rg32i > {
              static constexpr char name[] = "rg32i";
              static constexpr ::std::uint64_t value = GL_RG32I;
          };
          struct gl_rg32ui: public ::gtulu::internal::constant::gl_constant< gl_rg32ui > {
              static constexpr char name[] = "rg32ui";
              static constexpr ::std::uint64_t value = GL_RG32UI;
          };
          struct gl_rg8: public ::gtulu::internal::constant::gl_constant< gl_rg8 > {
              static constexpr char name[] = "rg8";
              static constexpr ::std::uint64_t value = GL_RG8;
          };
          struct gl_rg8i: public ::gtulu::internal::constant::gl_constant< gl_rg8i > {
              static constexpr char name[] = "rg8i";
              static constexpr ::std::uint64_t value = GL_RG8I;
          };
          struct gl_rg8ui: public ::gtulu::internal::constant::gl_constant< gl_rg8ui > {
              static constexpr char name[] = "rg8ui";
              static constexpr ::std::uint64_t value = GL_RG8UI;
          };
          struct gl_rg_integer: public ::gtulu::internal::constant::gl_constant< gl_rg_integer > {
              static constexpr char name[] = "rg_integer";
              static constexpr ::std::uint64_t value = GL_RG_INTEGER;
          };
        } // namespace cst
      } // namespace texture_rg
      namespace texture_rgb10_a2ui {
        namespace cst {
          struct gl_arb_texture_rgb10_a2ui: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_rgb10_a2ui > {
              static constexpr char name[] = "arb_texture_rgb10_a2ui";
              static constexpr ::std::uint64_t value = GL_ARB_texture_rgb10_a2ui;
          };
          struct gl_rgb10_a2ui: public ::gtulu::internal::constant::gl_constant< gl_rgb10_a2ui > {
              static constexpr char name[] = "rgb10_a2ui";
              static constexpr ::std::uint64_t value = GL_RGB10_A2UI;
          };
        } // namespace cst
      } // namespace texture_rgb10_a2ui
      namespace texture_storage {
        namespace cst {
          struct gl_arb_texture_storage: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_storage > {
              static constexpr char name[] = "arb_texture_storage";
              static constexpr ::std::uint64_t value = GL_ARB_texture_storage;
          };
          struct gl_texture_immutable_format: public ::gtulu::internal::constant::gl_constant< gl_texture_immutable_format > {
              static constexpr char name[] = "texture_immutable_format";
              static constexpr ::std::uint64_t value = GL_TEXTURE_IMMUTABLE_FORMAT;
          };
        } // namespace cst
      } // namespace texture_storage
      namespace texture_swizzle {
        namespace cst {
          struct gl_arb_texture_swizzle: public ::gtulu::internal::constant::gl_constant< gl_arb_texture_swizzle > {
              static constexpr char name[] = "arb_texture_swizzle";
              static constexpr ::std::uint64_t value = GL_ARB_texture_swizzle;
          };
          struct gl_texture_swizzle_a: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_a > {
              static constexpr char name[] = "texture_swizzle_a";
              static constexpr ::std::uint64_t value = GL_TEXTURE_SWIZZLE_A;
          };
          struct gl_texture_swizzle_b: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_b > {
              static constexpr char name[] = "texture_swizzle_b";
              static constexpr ::std::uint64_t value = GL_TEXTURE_SWIZZLE_B;
          };
          struct gl_texture_swizzle_g: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_g > {
              static constexpr char name[] = "texture_swizzle_g";
              static constexpr ::std::uint64_t value = GL_TEXTURE_SWIZZLE_G;
          };
          struct gl_texture_swizzle_r: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_r > {
              static constexpr char name[] = "texture_swizzle_r";
              static constexpr ::std::uint64_t value = GL_TEXTURE_SWIZZLE_R;
          };
          struct gl_texture_swizzle_rgba: public ::gtulu::internal::constant::gl_constant< gl_texture_swizzle_rgba > {
              static constexpr char name[] = "texture_swizzle_rgba";
              static constexpr ::std::uint64_t value = GL_TEXTURE_SWIZZLE_RGBA;
          };
        } // namespace cst
      } // namespace texture_swizzle
      namespace timer_query {
        namespace cst {
          struct gl_arb_timer_query: public ::gtulu::internal::constant::gl_constant< gl_arb_timer_query > {
              static constexpr char name[] = "arb_timer_query";
              static constexpr ::std::uint64_t value = GL_ARB_timer_query;
          };
          struct gl_timestamp: public ::gtulu::internal::constant::gl_constant< gl_timestamp > {
              static constexpr char name[] = "timestamp";
              static constexpr ::std::uint64_t value = GL_TIMESTAMP;
          };
          struct gl_time_elapsed: public ::gtulu::internal::constant::gl_constant< gl_time_elapsed > {
              static constexpr char name[] = "time_elapsed";
              static constexpr ::std::uint64_t value = GL_TIME_ELAPSED;
          };
        } // namespace cst
      } // namespace timer_query
      namespace transform_feedback2 {
        namespace cst {
          struct gl_arb_transform_feedback2: public ::gtulu::internal::constant::gl_constant< gl_arb_transform_feedback2 > {
              static constexpr char name[] = "arb_transform_feedback2";
              static constexpr ::std::uint64_t value = GL_ARB_transform_feedback2;
          };
          struct gl_transform_feedback: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback > {
              static constexpr char name[] = "transform_feedback";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK;
          };
          struct gl_transform_feedback_binding: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_binding > {
              static constexpr char name[] = "transform_feedback_binding";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BINDING;
          };
          struct gl_transform_feedback_buffer_active: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_active > {
              static constexpr char name[] = "transform_feedback_buffer_active";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE;
          };
          struct gl_transform_feedback_buffer_paused: public ::gtulu::internal::constant::gl_constant< gl_transform_feedback_buffer_paused > {
              static constexpr char name[] = "transform_feedback_buffer_paused";
              static constexpr ::std::uint64_t value = GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED;
          };
        } // namespace cst
      } // namespace transform_feedback2
      namespace transform_feedback3 {
        namespace cst {
          struct gl_arb_transform_feedback3: public ::gtulu::internal::constant::gl_constant< gl_arb_transform_feedback3 > {
              static constexpr char name[] = "arb_transform_feedback3";
              static constexpr ::std::uint64_t value = GL_ARB_transform_feedback3;
          };
          struct gl_max_transform_feedback_buffers: public ::gtulu::internal::constant::gl_constant< gl_max_transform_feedback_buffers > {
              static constexpr char name[] = "max_transform_feedback_buffers";
              static constexpr ::std::uint64_t value = GL_MAX_TRANSFORM_FEEDBACK_BUFFERS;
          };
          struct gl_max_vertex_streams: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_streams > {
              static constexpr char name[] = "max_vertex_streams";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_STREAMS;
          };
        } // namespace cst
      } // namespace transform_feedback3
      namespace transform_feedback_instanced {
        namespace cst {
          struct gl_arb_transform_feedback_instanced: public ::gtulu::internal::constant::gl_constant< gl_arb_transform_feedback_instanced > {
              static constexpr char name[] = "arb_transform_feedback_instanced";
              static constexpr ::std::uint64_t value = GL_ARB_transform_feedback_instanced;
          };
        } // namespace cst
      } // namespace transform_feedback_instanced
      namespace uniform_buffer_object {
        namespace cst {
          struct gl_active_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_active_uniform_blocks > {
              static constexpr char name[] = "active_uniform_blocks";
              static constexpr ::std::uint64_t value = GL_ACTIVE_UNIFORM_BLOCKS;
          };
          struct gl_active_uniform_block_max_name_length: public ::gtulu::internal::constant::gl_constant< gl_active_uniform_block_max_name_length > {
              static constexpr char name[] = "active_uniform_block_max_name_length";
              static constexpr ::std::uint64_t value = GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH;
          };
          struct gl_arb_uniform_buffer_object: public ::gtulu::internal::constant::gl_constant< gl_arb_uniform_buffer_object > {
              static constexpr char name[] = "arb_uniform_buffer_object";
              static constexpr ::std::uint64_t value = GL_ARB_uniform_buffer_object;
          };
          struct gl_invalid_index: public ::gtulu::internal::constant::gl_constant< gl_invalid_index > {
              static constexpr char name[] = "invalid_index";
              static constexpr ::std::uint64_t value = GL_INVALID_INDEX;
          };
          struct gl_max_combined_fragment_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_fragment_uniform_components > {
              static constexpr char name[] = "max_combined_fragment_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
          };
          struct gl_max_combined_geometry_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_geometry_uniform_components > {
              static constexpr char name[] = "max_combined_geometry_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS;
          };
          struct gl_max_combined_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_combined_uniform_blocks > {
              static constexpr char name[] = "max_combined_uniform_blocks";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_UNIFORM_BLOCKS;
          };
          struct gl_max_combined_vertex_uniform_components: public ::gtulu::internal::constant::gl_constant< gl_max_combined_vertex_uniform_components > {
              static constexpr char name[] = "max_combined_vertex_uniform_components";
              static constexpr ::std::uint64_t value = GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
          };
          struct gl_max_fragment_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_fragment_uniform_blocks > {
              static constexpr char name[] = "max_fragment_uniform_blocks";
              static constexpr ::std::uint64_t value = GL_MAX_FRAGMENT_UNIFORM_BLOCKS;
          };
          struct gl_max_geometry_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_geometry_uniform_blocks > {
              static constexpr char name[] = "max_geometry_uniform_blocks";
              static constexpr ::std::uint64_t value = GL_MAX_GEOMETRY_UNIFORM_BLOCKS;
          };
          struct gl_max_uniform_block_size: public ::gtulu::internal::constant::gl_constant< gl_max_uniform_block_size > {
              static constexpr char name[] = "max_uniform_block_size";
              static constexpr ::std::uint64_t value = GL_MAX_UNIFORM_BLOCK_SIZE;
          };
          struct gl_max_uniform_buffer_bindings: public ::gtulu::internal::constant::gl_constant< gl_max_uniform_buffer_bindings > {
              static constexpr char name[] = "max_uniform_buffer_bindings";
              static constexpr ::std::uint64_t value = GL_MAX_UNIFORM_BUFFER_BINDINGS;
          };
          struct gl_max_vertex_uniform_blocks: public ::gtulu::internal::constant::gl_constant< gl_max_vertex_uniform_blocks > {
              static constexpr char name[] = "max_vertex_uniform_blocks";
              static constexpr ::std::uint64_t value = GL_MAX_VERTEX_UNIFORM_BLOCKS;
          };
          struct gl_uniform_array_stride: public ::gtulu::internal::constant::gl_constant< gl_uniform_array_stride > {
              static constexpr char name[] = "uniform_array_stride";
              static constexpr ::std::uint64_t value = GL_UNIFORM_ARRAY_STRIDE;
          };
          struct gl_uniform_block_active_uniforms: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_active_uniforms > {
              static constexpr char name[] = "uniform_block_active_uniforms";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS;
          };
          struct gl_uniform_block_active_uniform_indices: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_active_uniform_indices > {
              static constexpr char name[] = "uniform_block_active_uniform_indices";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
          };
          struct gl_uniform_block_binding: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_binding > {
              static constexpr char name[] = "uniform_block_binding";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_BINDING;
          };
          struct gl_uniform_block_data_size: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_data_size > {
              static constexpr char name[] = "uniform_block_data_size";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_DATA_SIZE;
          };
          struct gl_uniform_block_index: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_index > {
              static constexpr char name[] = "uniform_block_index";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_INDEX;
          };
          struct gl_uniform_block_name_length: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_name_length > {
              static constexpr char name[] = "uniform_block_name_length";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_NAME_LENGTH;
          };
          struct gl_uniform_block_referenced_by_fragment_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_fragment_shader > {
              static constexpr char name[] = "uniform_block_referenced_by_fragment_shader";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
          };
          struct gl_uniform_block_referenced_by_geometry_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_geometry_shader > {
              static constexpr char name[] = "uniform_block_referenced_by_geometry_shader";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER;
          };
          struct gl_uniform_block_referenced_by_vertex_shader: public ::gtulu::internal::constant::gl_constant< gl_uniform_block_referenced_by_vertex_shader > {
              static constexpr char name[] = "uniform_block_referenced_by_vertex_shader";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
          };
          struct gl_uniform_buffer: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer > {
              static constexpr char name[] = "uniform_buffer";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BUFFER;
          };
          struct gl_uniform_buffer_binding: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_binding > {
              static constexpr char name[] = "uniform_buffer_binding";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BUFFER_BINDING;
          };
          struct gl_uniform_buffer_offset_alignment: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_offset_alignment > {
              static constexpr char name[] = "uniform_buffer_offset_alignment";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT;
          };
          struct gl_uniform_buffer_size: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_size > {
              static constexpr char name[] = "uniform_buffer_size";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BUFFER_SIZE;
          };
          struct gl_uniform_buffer_start: public ::gtulu::internal::constant::gl_constant< gl_uniform_buffer_start > {
              static constexpr char name[] = "uniform_buffer_start";
              static constexpr ::std::uint64_t value = GL_UNIFORM_BUFFER_START;
          };
          struct gl_uniform_is_row_major: public ::gtulu::internal::constant::gl_constant< gl_uniform_is_row_major > {
              static constexpr char name[] = "uniform_is_row_major";
              static constexpr ::std::uint64_t value = GL_UNIFORM_IS_ROW_MAJOR;
          };
          struct gl_uniform_matrix_stride: public ::gtulu::internal::constant::gl_constant< gl_uniform_matrix_stride > {
              static constexpr char name[] = "uniform_matrix_stride";
              static constexpr ::std::uint64_t value = GL_UNIFORM_MATRIX_STRIDE;
          };
          struct gl_uniform_name_length: public ::gtulu::internal::constant::gl_constant< gl_uniform_name_length > {
              static constexpr char name[] = "uniform_name_length";
              static constexpr ::std::uint64_t value = GL_UNIFORM_NAME_LENGTH;
          };
          struct gl_uniform_offset: public ::gtulu::internal::constant::gl_constant< gl_uniform_offset > {
              static constexpr char name[] = "uniform_offset";
              static constexpr ::std::uint64_t value = GL_UNIFORM_OFFSET;
          };
          struct gl_uniform_size: public ::gtulu::internal::constant::gl_constant< gl_uniform_size > {
              static constexpr char name[] = "uniform_size";
              static constexpr ::std::uint64_t value = GL_UNIFORM_SIZE;
          };
          struct gl_uniform_type: public ::gtulu::internal::constant::gl_constant< gl_uniform_type > {
              static constexpr char name[] = "uniform_type";
              static constexpr ::std::uint64_t value = GL_UNIFORM_TYPE;
          };
        } // namespace cst
      } // namespace uniform_buffer_object
      namespace vertex_array_bgra {
        namespace cst {
          struct gl_arb_vertex_array_bgra: public ::gtulu::internal::constant::gl_constant< gl_arb_vertex_array_bgra > {
              static constexpr char name[] = "arb_vertex_array_bgra";
              static constexpr ::std::uint64_t value = GL_ARB_vertex_array_bgra;
          };
        } // namespace cst
      } // namespace vertex_array_bgra
      namespace vertex_array_object {
        namespace cst {
          struct gl_arb_vertex_array_object: public ::gtulu::internal::constant::gl_constant< gl_arb_vertex_array_object > {
              static constexpr char name[] = "arb_vertex_array_object";
              static constexpr ::std::uint64_t value = GL_ARB_vertex_array_object;
          };
          struct gl_vertex_array_binding: public ::gtulu::internal::constant::gl_constant< gl_vertex_array_binding > {
              static constexpr char name[] = "vertex_array_binding";
              static constexpr ::std::uint64_t value = GL_VERTEX_ARRAY_BINDING;
          };
        } // namespace cst
      } // namespace vertex_array_object
      namespace vertex_attrib_64bit {
        namespace cst {
          struct gl_arb_vertex_attrib_64bit: public ::gtulu::internal::constant::gl_constant< gl_arb_vertex_attrib_64bit > {
              static constexpr char name[] = "arb_vertex_attrib_64bit";
              static constexpr ::std::uint64_t value = GL_ARB_vertex_attrib_64bit;
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
              static constexpr char name[] = "arb_vertex_type_2_10_10_10_rev";
              static constexpr ::std::uint64_t value = GL_ARB_vertex_type_2_10_10_10_rev;
          };
          struct gl_int_2_10_10_10_rev: public ::gtulu::internal::constant::gl_constant< gl_int_2_10_10_10_rev > {
              static constexpr char name[] = "int_2_10_10_10_rev";
              static constexpr ::std::uint64_t value = GL_INT_2_10_10_10_REV;
          };
        } // namespace cst
      } // namespace vertex_type_2_10_10_10_rev
      namespace viewport_array {
        namespace cst {
          struct gl_arb_viewport_array: public ::gtulu::internal::constant::gl_constant< gl_arb_viewport_array > {
              static constexpr char name[] = "arb_viewport_array";
              static constexpr ::std::uint64_t value = GL_ARB_viewport_array;
          };
          struct gl_layer_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_layer_provoking_vertex > {
              static constexpr char name[] = "layer_provoking_vertex";
              static constexpr ::std::uint64_t value = GL_LAYER_PROVOKING_VERTEX;
          };
          struct gl_max_viewports: public ::gtulu::internal::constant::gl_constant< gl_max_viewports > {
              static constexpr char name[] = "max_viewports";
              static constexpr ::std::uint64_t value = GL_MAX_VIEWPORTS;
          };
          struct gl_undefined_vertex: public ::gtulu::internal::constant::gl_constant< gl_undefined_vertex > {
              static constexpr char name[] = "undefined_vertex";
              static constexpr ::std::uint64_t value = GL_UNDEFINED_VERTEX;
          };
          struct gl_viewport_bounds_range: public ::gtulu::internal::constant::gl_constant< gl_viewport_bounds_range > {
              static constexpr char name[] = "viewport_bounds_range";
              static constexpr ::std::uint64_t value = GL_VIEWPORT_BOUNDS_RANGE;
          };
          struct gl_viewport_index_provoking_vertex: public ::gtulu::internal::constant::gl_constant< gl_viewport_index_provoking_vertex > {
              static constexpr char name[] = "viewport_index_provoking_vertex";
              static constexpr ::std::uint64_t value = GL_VIEWPORT_INDEX_PROVOKING_VERTEX;
          };
          struct gl_viewport_subpixel_bits: public ::gtulu::internal::constant::gl_constant< gl_viewport_subpixel_bits > {
              static constexpr char name[] = "viewport_subpixel_bits";
              static constexpr ::std::uint64_t value = GL_VIEWPORT_SUBPIXEL_BITS;
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


