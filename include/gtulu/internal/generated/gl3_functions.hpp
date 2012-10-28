/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

/******************************************************************************
 * THIS FILE IS AUTO GENERATED FROM generate-functions -u -l gtulu3.3,                              *
 * ANY CHANGE WILL BE OVERWRITTEN                                             *
 ******************************************************************************/

#ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
# error "gtulu/internal/generated/functions.hpp should not be included directly, please include gtulu/internal/functions.hpp instead."
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_GL_3_FUNCTIONS_HPP_
# define GTULU_INTERNAL_GENERATED_GL_3_FUNCTIONS_HPP_

# include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {
    namespace generated {

      namespace gl3 {
        namespace function {

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct active_texture;

          template< >
          struct active_texture< > {
            static void call(gtulu::constant_base const& texture);
          };

          template< typename _1 >
          struct active_texture< _1 > {
            typedef _1 texture_t;

            inline static void call() { active_texture< >::call(texture_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct attach_shader;

          template< >
          struct attach_shader< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct begin_conditional_render;

          template< >
          struct begin_conditional_render< > {
            static void call(gtulu::uint32_t const id, gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct begin_conditional_render< _1 > {
            typedef _1 mode_t;

            inline static void call(gtulu::uint32_t const id) { begin_conditional_render< >::call(id, mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct begin_query;

          template< >
          struct begin_query< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const id);
          };

          template< typename _1 >
          struct begin_query< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const id) { begin_query< >::call(target_t(), id); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct begin_transform_feedback;

          template< >
          struct begin_transform_feedback< > {
            static void call(gtulu::constant_base const& primitive_mode);
          };

          template< typename _1 >
          struct begin_transform_feedback< _1 > {
            typedef _1 primitive_mode_t;

            inline static void call() { begin_transform_feedback< >::call(primitive_mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_attrib_location;

          template< >
          struct bind_attrib_location< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const index, std::string const& name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_buffer;

          template< >
          struct bind_buffer< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const buffer);
          };

          template< typename _1 >
          struct bind_buffer< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const buffer) { bind_buffer< >::call(target_t(), buffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_buffer_base;

          template< >
          struct bind_buffer_base< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::uint32_t const buffer);
          };

          template< typename _1 >
          struct bind_buffer_base< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const index, gtulu::uint32_t const buffer) { bind_buffer_base< >::call(target_t(), index, buffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_buffer_range;

          template< >
          struct bind_buffer_range< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::uint32_t const buffer, gtulu::int64_t const offset, gtulu::int64_t const size);
          };

          template< typename _1 >
          struct bind_buffer_range< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const index, gtulu::uint32_t const buffer, gtulu::int64_t const offset, gtulu::int64_t const size) { bind_buffer_range< >::call(target_t(), index, buffer, offset, size); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_frag_data_location;

          template< >
          struct bind_frag_data_location< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const color_number, std::string const& name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_frag_data_location_indexed;

          template< >
          struct bind_frag_data_location_indexed< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const color_number, gtulu::uint32_t const index, std::string const& name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_framebuffer;

          template< >
          struct bind_framebuffer< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const framebuffer);
          };

          template< typename _1 >
          struct bind_framebuffer< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const framebuffer) { bind_framebuffer< >::call(target_t(), framebuffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_renderbuffer;

          template< >
          struct bind_renderbuffer< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const renderbuffer);
          };

          template< typename _1 >
          struct bind_renderbuffer< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const renderbuffer) { bind_renderbuffer< >::call(target_t(), renderbuffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_sampler;

          template< >
          struct bind_sampler< > {
            static void call(gtulu::uint32_t const unit, gtulu::uint32_t const sampler);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_texture;

          template< >
          struct bind_texture< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const texture);
          };

          template< typename _1 >
          struct bind_texture< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const texture) { bind_texture< >::call(target_t(), texture); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_vertex_array;

          template< >
          struct bind_vertex_array< > {
            static void call(gtulu::uint32_t const array);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_color;

          template< >
          struct blend_color< > {
            static void call(gtulu::float32_t const red, gtulu::float32_t const green, gtulu::float32_t const blue, gtulu::float32_t const alpha);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_equation;

          template< >
          struct blend_equation< > {
            static void call(gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct blend_equation< _1 > {
            typedef _1 mode_t;

            inline static void call() { blend_equation< >::call(mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_equation_separate;

          template< >
          struct blend_equation_separate< > {
            static void call(gtulu::constant_base const& mode_rgb, gtulu::constant_base const& mode_alpha);
          };

          template< typename _1, typename _2 >
          struct blend_equation_separate< _1, _2 > {
            typedef _1 mode_rgb_t;
            typedef _2 mode_alpha_t;

            inline static void call() { blend_equation_separate< >::call(mode_rgb_t(), mode_alpha_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_func;

          template< >
          struct blend_func< > {
            static void call(gtulu::constant_base const& src, gtulu::constant_base const& dst);
          };

          template< typename _1, typename _2 >
          struct blend_func< _1, _2 > {
            typedef _1 src_t;
            typedef _2 dst_t;

            inline static void call() { blend_func< >::call(src_t(), dst_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_func_separate;

          template< >
          struct blend_func_separate< > {
            static void call(gtulu::constant_base const& src_rgb, gtulu::constant_base const& dst_rgb, gtulu::constant_base const& src_alpha, gtulu::constant_base const& dst_alpha);
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct blend_func_separate< _1, _2, _3, _4 > {
            typedef _1 src_rgb_t;
            typedef _2 dst_rgb_t;
            typedef _3 src_alpha_t;
            typedef _4 dst_alpha_t;

            inline static void call() { blend_func_separate< >::call(src_rgb_t(), dst_rgb_t(), src_alpha_t(), dst_alpha_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blit_framebuffer;

          template< >
          struct blit_framebuffer< > {
            static void call(gtulu::int32_t const src_x_0, gtulu::int32_t const src_y_0, gtulu::int32_t const src_x_1, gtulu::int32_t const src_y_1, gtulu::int32_t const dst_x_0, gtulu::int32_t const dst_y_0, gtulu::int32_t const dst_x_1, gtulu::int32_t const dst_y_1, gtulu::uint32_t const mask, gtulu::constant_base const& filter);
          };

          template< typename _1 >
          struct blit_framebuffer< _1 > {
            typedef _1 filter_t;

            inline static void call(gtulu::int32_t const src_x_0, gtulu::int32_t const src_y_0, gtulu::int32_t const src_x_1, gtulu::int32_t const src_y_1, gtulu::int32_t const dst_x_0, gtulu::int32_t const dst_y_0, gtulu::int32_t const dst_x_1, gtulu::int32_t const dst_y_1, gtulu::uint32_t const mask) { blit_framebuffer< >::call(src_x_0, src_y_0, src_x_1, src_y_1, dst_x_0, dst_y_0, dst_x_1, dst_y_1, mask, filter_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct buffer_data;

          template< >
          struct buffer_data< > {
            static void call(gtulu::constant_base const& target, gtulu::int64_t const size, void const* data, gtulu::constant_base const& usage);
          };

          template< typename _1, typename _2 >
          struct buffer_data< _1, _2 > {
            typedef _1 target_t;
            typedef _2 usage_t;

            inline static void call(gtulu::int64_t const size, void const* data) { buffer_data< >::call(target_t(), size, data, usage_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct buffer_sub_data;

          template< >
          struct buffer_sub_data< > {
            static void call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const size, void const* data);
          };

          template< typename _1 >
          struct buffer_sub_data< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::int64_t const offset, gtulu::int64_t const size, void const* data) { buffer_sub_data< >::call(target_t(), offset, size, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct check_framebuffer_status;

          template< >
          struct check_framebuffer_status< > {
            static gtulu::uint32_t call(gtulu::constant_base const& target);
          };

          template< typename _1 >
          struct check_framebuffer_status< _1 > {
            typedef _1 target_t;

            inline static gtulu::uint32_t call() { return check_framebuffer_status< >::call(target_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clamp_color;

          template< >
          struct clamp_color< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& clamp);
          };

          template< typename _1, typename _2 >
          struct clamp_color< _1, _2 > {
            typedef _1 target_t;
            typedef _2 clamp_t;

            inline static void call() { clamp_color< >::call(target_t(), clamp_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear;

          template< >
          struct clear< > {
            static void call(gtulu::uint32_t const mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_buffer;

          template< >
          struct clear_buffer< > {
            static void call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::float32_t const* value);
            static void call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::int32_t const* value);
            static void call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::uint32_t const* value);
          };

          template< typename _1 >
          struct clear_buffer< _1 > {
            typedef _1 buffer_t;

            inline static void call(gtulu::int32_t const drawbuffer, gtulu::float32_t const* value) { clear_buffer< >::call(buffer_t(), drawbuffer, value); }
            inline static void call(gtulu::int32_t const drawbuffer, gtulu::int32_t const* value) { clear_buffer< >::call(buffer_t(), drawbuffer, value); }
            inline static void call(gtulu::int32_t const drawbuffer, gtulu::uint32_t const* value) { clear_buffer< >::call(buffer_t(), drawbuffer, value); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_buffer_float;

          template< >
          struct clear_buffer_float< > {
            static void call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::float32_t const depth, gtulu::int32_t const stencil);
          };

          template< typename _1 >
          struct clear_buffer_float< _1 > {
            typedef _1 buffer_t;

            inline static void call(gtulu::int32_t const drawbuffer, gtulu::float32_t const depth, gtulu::int32_t const stencil) { clear_buffer_float< >::call(buffer_t(), drawbuffer, depth, stencil); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_color;

          template< >
          struct clear_color< > {
            static void call(gtulu::float32_t const red, gtulu::float32_t const green, gtulu::float32_t const blue, gtulu::float32_t const alpha);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_depth;

          template< >
          struct clear_depth< > {
            static void call(gtulu::float64_t const d);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_stencil;

          template< >
          struct clear_stencil< > {
            static void call(gtulu::int32_t const s);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct client_wait_sync;

          template< >
          struct client_wait_sync< > {
            // static gtulu::uint32_t call(__invalid* sync, gtulu::uint32_t const flags, gtulu::uint64_t const timeout);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct color_mask;

          template< >
          struct color_mask< > {
            static void call(bool const r, bool const g, bool const b, bool const a);
            static void call(gtulu::uint32_t const buf, bool const r, bool const g, bool const b, bool const a);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct compile_shader;

          template< >
          struct compile_shader< > {
            static void call(gtulu::uint32_t const shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct compressed_tex_image;

          template< >
          struct compressed_tex_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data);
          };

          template< typename _1, typename _2 >
          struct compressed_tex_image< _1, _2 > {
            typedef _1 target_t;
            typedef _2 internalformat_t;

            inline static void call(gtulu::int32_t const level, gtulu::int32_t const width, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data) { compressed_tex_image< >::call(target_t(), level, internalformat_t(), width, border, image_size, data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data) { compressed_tex_image< >::call(target_t(), level, internalformat_t(), width, height, border, image_size, data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data) { compressed_tex_image< >::call(target_t(), level, internalformat_t(), width, height, depth, border, image_size, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct compressed_tex_sub_image;

          template< >
          struct compressed_tex_sub_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const width, gtulu::constant_base const& format, gtulu::int32_t const image_size, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::constant_base const& format, gtulu::int32_t const image_size, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::constant_base const& format, gtulu::int32_t const image_size, void const* data);
          };

          template< typename _1, typename _2 >
          struct compressed_tex_sub_image< _1, _2 > {
            typedef _1 target_t;
            typedef _2 format_t;

            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const width, gtulu::int32_t const image_size, void const* data) { compressed_tex_sub_image< >::call(target_t(), level, xoffset, width, format_t(), image_size, data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const image_size, void const* data) { compressed_tex_sub_image< >::call(target_t(), level, xoffset, yoffset, width, height, format_t(), image_size, data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::int32_t const image_size, void const* data) { compressed_tex_sub_image< >::call(target_t(), level, xoffset, yoffset, zoffset, width, height, depth, format_t(), image_size, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct copy_buffer_sub_data;

          template< >
          struct copy_buffer_sub_data< > {
            static void call(gtulu::constant_base const& readtarget, gtulu::constant_base const& writetarget, gtulu::int64_t const readoffset, gtulu::int64_t const writeoffset, gtulu::int64_t const size);
          };

          template< typename _1, typename _2 >
          struct copy_buffer_sub_data< _1, _2 > {
            typedef _1 readtarget_t;
            typedef _2 writetarget_t;

            inline static void call(gtulu::int64_t const readoffset, gtulu::int64_t const writeoffset, gtulu::int64_t const size) { copy_buffer_sub_data< >::call(readtarget_t(), writetarget_t(), readoffset, writeoffset, size); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct copy_tex_image;

          template< >
          struct copy_tex_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const border);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border);
          };

          template< typename _1, typename _2 >
          struct copy_tex_image< _1, _2 > {
            typedef _1 target_t;
            typedef _2 internalformat_t;

            inline static void call(gtulu::int32_t const level, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const border) { copy_tex_image< >::call(target_t(), level, internalformat_t(), x, y, width, border); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border) { copy_tex_image< >::call(target_t(), level, internalformat_t(), x, y, width, height, border); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct copy_tex_sub_image;

          template< >
          struct copy_tex_sub_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height);
          };

          template< typename _1 >
          struct copy_tex_sub_image< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width) { copy_tex_sub_image< >::call(target_t(), level, xoffset, x, y, width); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height) { copy_tex_sub_image< >::call(target_t(), level, xoffset, yoffset, x, y, width, height); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height) { copy_tex_sub_image< >::call(target_t(), level, xoffset, yoffset, zoffset, x, y, width, height); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_program;

          template< >
          struct create_program< > {
            static gtulu::uint32_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct create_shader;

          template< >
          struct create_shader< > {
            static gtulu::uint32_t call(gtulu::constant_base const& type);
          };

          template< typename _1 >
          struct create_shader< _1 > {
            typedef _1 type_t;

            inline static gtulu::uint32_t call() { return create_shader< >::call(type_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct cull_face;

          template< >
          struct cull_face< > {
            static void call(gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct cull_face< _1 > {
            typedef _1 mode_t;

            inline static void call() { cull_face< >::call(mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_buffers;

          template< >
          struct delete_buffers< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t const* buffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_framebuffers;

          template< >
          struct delete_framebuffers< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t const* framebuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_program;

          template< >
          struct delete_program< > {
            static void call(gtulu::uint32_t const program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_queries;

          template< >
          struct delete_queries< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t const* ids);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_renderbuffers;

          template< >
          struct delete_renderbuffers< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t const* renderbuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_samplers;

          template< >
          struct delete_samplers< > {
            static void call(gtulu::int32_t const count, gtulu::uint32_t const* samplers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_shader;

          template< >
          struct delete_shader< > {
            static void call(gtulu::uint32_t const shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_sync;

          template< >
          struct delete_sync< > {
            // static void call(__invalid* sync);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_textures;

          template< >
          struct delete_textures< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t const* textures);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_vertex_arrays;

          template< >
          struct delete_vertex_arrays< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t const* arrays);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct depth_func;

          template< >
          struct depth_func< > {
            static void call(gtulu::constant_base const& func);
          };

          template< typename _1 >
          struct depth_func< _1 > {
            typedef _1 func_t;

            inline static void call() { depth_func< >::call(func_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct depth_mask;

          template< >
          struct depth_mask< > {
            static void call(bool const flag);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct depth_range;

          template< >
          struct depth_range< > {
            static void call(gtulu::float64_t const n, gtulu::float64_t const f);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct detach_shader;

          template< >
          struct detach_shader< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct disable;

          template< >
          struct disable< > {
            static void call(gtulu::constant_base const& target);
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const index);
          };

          template< typename _1 >
          struct disable< _1 > {
            typedef _1 target_t;

            inline static void call() { disable< >::call(target_t()); }
            inline static void call(gtulu::uint32_t const index) { disable< >::call(target_t(), index); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct disable_vertex_attrib_array;

          template< >
          struct disable_vertex_attrib_array< > {
            static void call(gtulu::uint32_t const index);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_arrays;

          template< >
          struct draw_arrays< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const first, gtulu::int32_t const count);
          };

          template< typename _1 >
          struct draw_arrays< _1 > {
            typedef _1 mode_t;

            inline static void call(gtulu::int32_t const first, gtulu::int32_t const count) { draw_arrays< >::call(mode_t(), first, count); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_arrays_instanced;

          template< >
          struct draw_arrays_instanced< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const first, gtulu::int32_t const count, gtulu::int32_t const instancecount);
          };

          template< typename _1 >
          struct draw_arrays_instanced< _1 > {
            typedef _1 mode_t;

            inline static void call(gtulu::int32_t const first, gtulu::int32_t const count, gtulu::int32_t const instancecount) { draw_arrays_instanced< >::call(mode_t(), first, count, instancecount); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_buffer;

          template< >
          struct draw_buffer< > {
            static void call(gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct draw_buffer< _1 > {
            typedef _1 mode_t;

            inline static void call() { draw_buffer< >::call(mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_buffers;

          template< >
          struct draw_buffers< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t const* bufs);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_elements;

          template< >
          struct draw_elements< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices);
          };

          template< typename _1, typename _2 >
          struct draw_elements< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::int32_t const count, void const* indices) { draw_elements< >::call(mode_t(), count, type_t(), indices); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_elements_base_vertex;

          template< >
          struct draw_elements_base_vertex< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const basevertex);
          };

          template< typename _1, typename _2 >
          struct draw_elements_base_vertex< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::int32_t const count, void const* indices, gtulu::int32_t const basevertex) { draw_elements_base_vertex< >::call(mode_t(), count, type_t(), indices, basevertex); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_elements_instanced;

          template< >
          struct draw_elements_instanced< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const instancecount);
          };

          template< typename _1, typename _2 >
          struct draw_elements_instanced< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::int32_t const count, void const* indices, gtulu::int32_t const instancecount) { draw_elements_instanced< >::call(mode_t(), count, type_t(), indices, instancecount); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_elements_instanced_base_vertex;

          template< >
          struct draw_elements_instanced_base_vertex< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const instancecount, gtulu::int32_t const basevertex);
          };

          template< typename _1, typename _2 >
          struct draw_elements_instanced_base_vertex< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::int32_t const count, void const* indices, gtulu::int32_t const instancecount, gtulu::int32_t const basevertex) { draw_elements_instanced_base_vertex< >::call(mode_t(), count, type_t(), indices, instancecount, basevertex); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_range_elements;

          template< >
          struct draw_range_elements< > {
            static void call(gtulu::constant_base const& mode, gtulu::uint32_t const start, gtulu::uint32_t const end, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices);
          };

          template< typename _1, typename _2 >
          struct draw_range_elements< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::uint32_t const start, gtulu::uint32_t const end, gtulu::int32_t const count, void const* indices) { draw_range_elements< >::call(mode_t(), start, end, count, type_t(), indices); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_range_elements_base_vertex;

          template< >
          struct draw_range_elements_base_vertex< > {
            static void call(gtulu::constant_base const& mode, gtulu::uint32_t const start, gtulu::uint32_t const end, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const basevertex);
          };

          template< typename _1, typename _2 >
          struct draw_range_elements_base_vertex< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::uint32_t const start, gtulu::uint32_t const end, gtulu::int32_t const count, void const* indices, gtulu::int32_t const basevertex) { draw_range_elements_base_vertex< >::call(mode_t(), start, end, count, type_t(), indices, basevertex); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct enable;

          template< >
          struct enable< > {
            static void call(gtulu::constant_base const& target);
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const index);
          };

          template< typename _1 >
          struct enable< _1 > {
            typedef _1 target_t;

            inline static void call() { enable< >::call(target_t()); }
            inline static void call(gtulu::uint32_t const index) { enable< >::call(target_t(), index); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct enable_vertex_attrib_array;

          template< >
          struct enable_vertex_attrib_array< > {
            static void call(gtulu::uint32_t const index);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct end_conditional_render;

          template< >
          struct end_conditional_render< > {
            static void call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct end_query;

          template< >
          struct end_query< > {
            static void call(gtulu::constant_base const& target);
          };

          template< typename _1 >
          struct end_query< _1 > {
            typedef _1 target_t;

            inline static void call() { end_query< >::call(target_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct end_transform_feedback;

          template< >
          struct end_transform_feedback< > {
            static void call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct fence_sync;

          template< >
          struct fence_sync< > {
            // static __invalid* call(gtulu::constant_base const& condition, gtulu::uint32_t const flags);
          };

          template< typename _1 >
          struct fence_sync< _1 > {
            typedef _1 condition_t;

            // inline static __invalid* call(gtulu::uint32_t const flags) { return fence_sync<  >::call(condition_t(), flags); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct finish;

          template< >
          struct finish< > {
            static void call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct flush;

          template< >
          struct flush< > {
            static void call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct flush_mapped_buffer_range;

          template< >
          struct flush_mapped_buffer_range< > {
            static void call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const length);
          };

          template< typename _1 >
          struct flush_mapped_buffer_range< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::int64_t const offset, gtulu::int64_t const length) { flush_mapped_buffer_range< >::call(target_t(), offset, length); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct framebuffer_renderbuffer;

          template< >
          struct framebuffer_renderbuffer< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& renderbuffertarget, gtulu::uint32_t const renderbuffer);
          };

          template< typename _1, typename _2, typename _3 >
          struct framebuffer_renderbuffer< _1, _2, _3 > {
            typedef _1 target_t;
            typedef _2 attachment_t;
            typedef _3 renderbuffertarget_t;

            inline static void call(gtulu::uint32_t const renderbuffer) { framebuffer_renderbuffer< >::call(target_t(), attachment_t(), renderbuffertarget_t(), renderbuffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct framebuffer_texture;

          template< >
          struct framebuffer_texture< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::uint32_t const texture, gtulu::int32_t const level);
          };

          template< typename _1 >
          struct framebuffer_texture< _1 > {
            typedef _1 Dimension;
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t const texture, gtulu::int32_t const level);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t const texture, gtulu::int32_t const level, gtulu::int32_t const layer);
          };

          template< typename _1, typename _2 >
          struct framebuffer_texture< _1, _2 > {
            typedef _1 target_t;
            typedef _2 attachment_t;

            inline static void call(gtulu::uint32_t const texture, gtulu::int32_t const level) { framebuffer_texture< >::call(target_t(), attachment_t(), texture, level); }
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct framebuffer_texture< _1, _2, _3, _4 > {
            typedef _1 target_t;
            typedef _2 attachment_t;
            typedef _3 textarget_t;
            typedef _4 Dimension;

            inline static void call(gtulu::uint32_t const texture, gtulu::int32_t const level) { framebuffer_texture< Dimension >::call(target_t(), attachment_t(), textarget_t(), texture, level); }
            inline static void call(gtulu::uint32_t const texture, gtulu::int32_t const level, gtulu::int32_t const layer) { framebuffer_texture< Dimension >::call(target_t(), attachment_t(), textarget_t(), texture, level, layer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct framebuffer_texture_layer;

          template< >
          struct framebuffer_texture_layer< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::uint32_t const texture, gtulu::int32_t const level, gtulu::int32_t const layer);
          };

          template< typename _1, typename _2 >
          struct framebuffer_texture_layer< _1, _2 > {
            typedef _1 target_t;
            typedef _2 attachment_t;

            inline static void call(gtulu::uint32_t const texture, gtulu::int32_t const level, gtulu::int32_t const layer) { framebuffer_texture_layer< >::call(target_t(), attachment_t(), texture, level, layer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct front_face;

          template< >
          struct front_face< > {
            static void call(gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct front_face< _1 > {
            typedef _1 mode_t;

            inline static void call() { front_face< >::call(mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_buffers;

          template< >
          struct gen_buffers< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t* buffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_framebuffers;

          template< >
          struct gen_framebuffers< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t* framebuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_queries;

          template< >
          struct gen_queries< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t* ids);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_renderbuffers;

          template< >
          struct gen_renderbuffers< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t* renderbuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_samplers;

          template< >
          struct gen_samplers< > {
            static void call(gtulu::int32_t const count, gtulu::uint32_t* samplers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_textures;

          template< >
          struct gen_textures< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t* textures);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_vertex_arrays;

          template< >
          struct gen_vertex_arrays< > {
            static void call(gtulu::int32_t const n, gtulu::uint32_t* arrays);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct generate_mipmap;

          template< >
          struct generate_mipmap< > {
            static void call(gtulu::constant_base const& target);
          };

          template< typename _1 >
          struct generate_mipmap< _1 > {
            typedef _1 target_t;

            inline static void call() { generate_mipmap< >::call(target_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_attrib;

          template< >
          struct get_active_attrib< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const index, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_uniform;

          template< >
          struct get_active_uniform< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const index, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_uniform_block;

          template< >
          struct get_active_uniform_block< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_block_index, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_active_uniform_block< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_block_index, gtulu::int32_t* params) { get_active_uniform_block< >::call(program, uniform_block_index, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_uniform_block_name;

          template< >
          struct get_active_uniform_block_name< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_block_index, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* uniform_block_name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_uniform_name;

          template< >
          struct get_active_uniform_name< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_index, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* uniform_name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_uniforms;

          template< >
          struct get_active_uniforms< > {
            static void call(gtulu::uint32_t const program, gtulu::int32_t const uniform_count, gtulu::uint32_t const* uniform_indices, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_active_uniforms< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const program, gtulu::int32_t const uniform_count, gtulu::uint32_t const* uniform_indices, gtulu::int32_t* params) { get_active_uniforms< >::call(program, uniform_count, uniform_indices, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_attached_shaders;

          template< >
          struct get_attached_shaders< > {
            static void call(gtulu::uint32_t const program, gtulu::int32_t const max_count, gtulu::int32_t* count, gtulu::uint32_t* shaders);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_attrib_location;

          template< >
          struct get_attrib_location< > {
            static gtulu::int32_t call(gtulu::uint32_t const program, std::string const& name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_boolean;

          template< >
          struct get_boolean< > {
            static void call(gtulu::constant_base const& pname, gtulu::uint8_t* params);
          };

          template< typename _1 >
          struct get_boolean< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint8_t* params) { get_boolean< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_boolean_indexed;

          template< >
          struct get_boolean_indexed< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::uint8_t* data);
          };

          template< typename _1 >
          struct get_boolean_indexed< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const index, gtulu::uint8_t* data) { get_boolean_indexed< >::call(target_t(), index, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_buffer_parameter;

          template< >
          struct get_buffer_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* data);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int64_t* data);
          };

          template< typename _1, typename _2 >
          struct get_buffer_parameter< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::int32_t* data) { get_buffer_parameter< >::call(target_t(), pname_t(), data); }
            inline static void call(gtulu::int64_t* data) { get_buffer_parameter< >::call(target_t(), pname_t(), data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_buffer_pointer;

          template< >
          struct get_buffer_pointer< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, void** params);
          };

          template< typename _1, typename _2 >
          struct get_buffer_pointer< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(void** params) { get_buffer_pointer< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_buffer_sub_data;

          template< >
          struct get_buffer_sub_data< > {
            static void call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const size, void* data);
          };

          template< typename _1 >
          struct get_buffer_sub_data< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::int64_t const offset, gtulu::int64_t const size, void* data) { get_buffer_sub_data< >::call(target_t(), offset, size, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_compressed_tex_image;

          template< >
          struct get_compressed_tex_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const lod, void* img);
          };

          template< typename _1 >
          struct get_compressed_tex_image< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::int32_t const lod, void* img) { get_compressed_tex_image< >::call(target_t(), lod, img); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_double;

          template< >
          struct get_double< > {
            static void call(gtulu::constant_base const& pname, gtulu::float64_t* params);
          };

          template< typename _1 >
          struct get_double< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::float64_t* params) { get_double< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_error;

          template< >
          struct get_error< > {
            static gtulu::uint32_t call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_float;

          template< >
          struct get_float< > {
            static void call(gtulu::constant_base const& pname, gtulu::float32_t* params);
          };

          template< typename _1 >
          struct get_float< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::float32_t* params) { get_float< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_frag_data_index;

          template< >
          struct get_frag_data_index< > {
            static gtulu::int32_t call(gtulu::uint32_t const program, std::string const& name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_frag_data_location;

          template< >
          struct get_frag_data_location< > {
            static gtulu::int32_t call(gtulu::uint32_t const program, std::string const& name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_framebuffer_attachment_parameter;

          template< >
          struct get_framebuffer_attachment_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2, typename _3 >
          struct get_framebuffer_attachment_parameter< _1, _2, _3 > {
            typedef _1 target_t;
            typedef _2 attachment_t;
            typedef _3 pname_t;

            inline static void call(gtulu::int32_t* params) { get_framebuffer_attachment_parameter< >::call(target_t(), attachment_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_integer;

          template< >
          struct get_integer< > {
            static void call(gtulu::constant_base const& pname, gtulu::int32_t* params);
            static void call(gtulu::constant_base const& pname, gtulu::int64_t* params);
          };

          template< typename _1 >
          struct get_integer< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::int32_t* params) { get_integer< >::call(pname_t(), params); }
            inline static void call(gtulu::int64_t* params) { get_integer< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_integer_indexed;

          template< >
          struct get_integer_indexed< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::int32_t* data);
            static void call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::int64_t* data);
          };

          template< typename _1 >
          struct get_integer_indexed< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const index, gtulu::int32_t* data) { get_integer_indexed< >::call(target_t(), index, data); }
            inline static void call(gtulu::uint32_t const index, gtulu::int64_t* data) { get_integer_indexed< >::call(target_t(), index, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_multisample;

          template< >
          struct get_multisample< > {
            static void call(gtulu::constant_base const& pname, gtulu::uint32_t const index, gtulu::float32_t* val);
          };

          template< typename _1 >
          struct get_multisample< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const index, gtulu::float32_t* val) { get_multisample< >::call(pname_t(), index, val); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_program;

          template< >
          struct get_program< > {
            static void call(gtulu::uint32_t const program, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_program< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const program, gtulu::int32_t* params) { get_program< >::call(program, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_program_info_log;

          template< >
          struct get_program_info_log< > {
            static void call(gtulu::uint32_t const program, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* info_log);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_query;

          template< >
          struct get_query< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2 >
          struct get_query< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::int32_t* params) { get_query< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_query_object;

          template< >
          struct get_query_object< > {
            static void call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::int32_t* params);
            static void call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::int64_t* params);
            static void call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::uint32_t* params);
            static void call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::uint64_t* params);
          };

          template< typename _1 >
          struct get_query_object< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const id, gtulu::int32_t* params) { get_query_object< >::call(id, pname_t(), params); }
            inline static void call(gtulu::uint32_t const id, gtulu::int64_t* params) { get_query_object< >::call(id, pname_t(), params); }
            inline static void call(gtulu::uint32_t const id, gtulu::uint32_t* params) { get_query_object< >::call(id, pname_t(), params); }
            inline static void call(gtulu::uint32_t const id, gtulu::uint64_t* params) { get_query_object< >::call(id, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_renderbuffer_parameter;

          template< >
          struct get_renderbuffer_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2 >
          struct get_renderbuffer_parameter< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::int32_t* params) { get_renderbuffer_parameter< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_sampler_parameter;

          template< >
          struct get_sampler_parameter< > {
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::float32_t* params);
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_sampler_parameter< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const sampler, gtulu::float32_t* params) { get_sampler_parameter< >::call(sampler, pname_t(), params); }
            inline static void call(gtulu::uint32_t const sampler, gtulu::int32_t* params) { get_sampler_parameter< >::call(sampler, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_sampler_parameter_integer;

          template< >
          struct get_sampler_parameter_integer< > {
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t* params);
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::uint32_t* params);
          };

          template< typename _1 >
          struct get_sampler_parameter_integer< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const sampler, gtulu::int32_t* params) { get_sampler_parameter_integer< >::call(sampler, pname_t(), params); }
            inline static void call(gtulu::uint32_t const sampler, gtulu::uint32_t* params) { get_sampler_parameter_integer< >::call(sampler, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_shader;

          template< >
          struct get_shader< > {
            static void call(gtulu::uint32_t const shader, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_shader< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const shader, gtulu::int32_t* params) { get_shader< >::call(shader, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_shader_info_log;

          template< >
          struct get_shader_info_log< > {
            static void call(gtulu::uint32_t const shader, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* info_log);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_shader_source;

          template< >
          struct get_shader_source< > {
            static void call(gtulu::uint32_t const shader, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* source);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_string;

          template< >
          struct get_string< > {
            static gtulu::uint8_t const* call(gtulu::constant_base const& name);
            static gtulu::uint8_t const* call(gtulu::constant_base const& name, gtulu::uint32_t const index);
          };

          template< typename _1 >
          struct get_string< _1 > {
            typedef _1 name_t;

            inline static gtulu::uint8_t const* call() { return get_string< >::call(name_t()); }
            inline static gtulu::uint8_t const* call(gtulu::uint32_t const index) { return get_string< >::call(name_t(), index); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_sync;

          template< >
          struct get_sync< > {
            // static void call(__invalid* sync, gtulu::constant_base const& pname, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* values);
          };

          template< typename _1 >
          struct get_sync< _1 > {
            typedef _1 pname_t;

            // inline static void call(__invalid* sync, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* values) {  get_sync<  >::call(sync, pname_t(), buf_size, length, values); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_tex_image;

          template< >
          struct get_tex_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& format, gtulu::constant_base const& type, void* img);
          };

          template< typename _1, typename _2, typename _3 >
          struct get_tex_image< _1, _2, _3 > {
            typedef _1 target_t;
            typedef _2 format_t;
            typedef _3 type_t;

            inline static void call(gtulu::int32_t const level, void* img) { get_tex_image< >::call(target_t(), level, format_t(), type_t(), img); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_tex_level_parameter;

          template< >
          struct get_tex_level_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& pname, gtulu::float32_t* params);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2 >
          struct get_tex_level_parameter< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::int32_t const level, gtulu::float32_t* params) { get_tex_level_parameter< >::call(target_t(), level, pname_t(), params); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t* params) { get_tex_level_parameter< >::call(target_t(), level, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_tex_parameter;

          template< >
          struct get_tex_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t* params);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2 >
          struct get_tex_parameter< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::float32_t* params) { get_tex_parameter< >::call(target_t(), pname_t(), params); }
            inline static void call(gtulu::int32_t* params) { get_tex_parameter< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_tex_parameter_integer;

          template< >
          struct get_tex_parameter_integer< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::uint32_t* params);
          };

          template< typename _1, typename _2 >
          struct get_tex_parameter_integer< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::int32_t* params) { get_tex_parameter_integer< >::call(target_t(), pname_t(), params); }
            inline static void call(gtulu::uint32_t* params) { get_tex_parameter_integer< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_transform_feedback_varying;

          template< >
          struct get_transform_feedback_varying< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const index, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_uniform;

          template< >
          struct get_uniform< > {
            static void call(gtulu::uint32_t const program, gtulu::int32_t const location, gtulu::float32_t* params);
            static void call(gtulu::uint32_t const program, gtulu::int32_t const location, gtulu::int32_t* params);
            static void call(gtulu::uint32_t const program, gtulu::int32_t const location, gtulu::uint32_t* params);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_uniform_block_index;

          template< >
          struct get_uniform_block_index< > {
            static gtulu::uint32_t call(gtulu::uint32_t const program, std::string const& uniform_block_name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_uniform_indices;

          template< >
          struct get_uniform_indices< > {
            static void call(gtulu::uint32_t const program, gtulu::int32_t const uniform_count, char const** uniform_names, gtulu::uint32_t* uniform_indices);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_uniform_location;

          template< >
          struct get_uniform_location< > {
            static gtulu::int32_t call(gtulu::uint32_t const program, std::string const& name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_vertex_attrib;

          template< >
          struct get_vertex_attrib< > {
            static void call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::float32_t* params);
            static void call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::float64_t* params);
            static void call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_vertex_attrib< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const index, gtulu::float32_t* params) { get_vertex_attrib< >::call(index, pname_t(), params); }
            inline static void call(gtulu::uint32_t const index, gtulu::float64_t* params) { get_vertex_attrib< >::call(index, pname_t(), params); }
            inline static void call(gtulu::uint32_t const index, gtulu::int32_t* params) { get_vertex_attrib< >::call(index, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_vertex_attrib_integer;

          template< >
          struct get_vertex_attrib_integer< > {
            static void call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::int32_t* params);
            static void call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::uint32_t* params);
          };

          template< typename _1 >
          struct get_vertex_attrib_integer< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const index, gtulu::int32_t* params) { get_vertex_attrib_integer< >::call(index, pname_t(), params); }
            inline static void call(gtulu::uint32_t const index, gtulu::uint32_t* params) { get_vertex_attrib_integer< >::call(index, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_vertex_attrib_pointer;

          template< >
          struct get_vertex_attrib_pointer< > {
            static void call(gtulu::uint32_t const index, gtulu::constant_base const& pname, void** pointer);
          };

          template< typename _1 >
          struct get_vertex_attrib_pointer< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const index, void** pointer) { get_vertex_attrib_pointer< >::call(index, pname_t(), pointer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct hint;

          template< >
          struct hint< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& mode);
          };

          template< typename _1, typename _2 >
          struct hint< _1, _2 > {
            typedef _1 target_t;
            typedef _2 mode_t;

            inline static void call() { hint< >::call(target_t(), mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_buffer;

          template< >
          struct is_buffer< > {
            static bool call(gtulu::uint32_t const buffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_enabled;

          template< >
          struct is_enabled< > {
            static bool call(gtulu::constant_base const& cap);
            static bool call(gtulu::constant_base const& cap, gtulu::uint32_t const index);
          };

          template< typename _1 >
          struct is_enabled< _1 > {
            typedef _1 cap_t;

            inline static bool call() { return is_enabled< >::call(cap_t()); }
            inline static bool call(gtulu::uint32_t const index) { return is_enabled< >::call(cap_t(), index); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_framebuffer;

          template< >
          struct is_framebuffer< > {
            static bool call(gtulu::uint32_t const framebuffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_program;

          template< >
          struct is_program< > {
            static bool call(gtulu::uint32_t const program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_query;

          template< >
          struct is_query< > {
            static bool call(gtulu::uint32_t const id);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_renderbuffer;

          template< >
          struct is_renderbuffer< > {
            static bool call(gtulu::uint32_t const renderbuffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_sampler;

          template< >
          struct is_sampler< > {
            static bool call(gtulu::uint32_t const sampler);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_shader;

          template< >
          struct is_shader< > {
            static bool call(gtulu::uint32_t const shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_sync;

          template< >
          struct is_sync< > {
            // static bool call(__invalid* sync);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_texture;

          template< >
          struct is_texture< > {
            static bool call(gtulu::uint32_t const texture);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_vertex_array;

          template< >
          struct is_vertex_array< > {
            static bool call(gtulu::uint32_t const array);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct line_width;

          template< >
          struct line_width< > {
            static void call(gtulu::float32_t const width);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct link_program;

          template< >
          struct link_program< > {
            static void call(gtulu::uint32_t const program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct logic_op;

          template< >
          struct logic_op< > {
            static void call(gtulu::constant_base const& opcode);
          };

          template< typename _1 >
          struct logic_op< _1 > {
            typedef _1 opcode_t;

            inline static void call() { logic_op< >::call(opcode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct map_buffer;

          template< >
          struct map_buffer< > {
            static void* call(gtulu::constant_base const& target, gtulu::constant_base const& access);
          };

          template< typename _1, typename _2 >
          struct map_buffer< _1, _2 > {
            typedef _1 target_t;
            typedef _2 access_t;

            inline static void* call() { return map_buffer< >::call(target_t(), access_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct map_buffer_range;

          template< >
          struct map_buffer_range< > {
            static void* call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const length, gtulu::uint32_t const access);
          };

          template< typename _1 >
          struct map_buffer_range< _1 > {
            typedef _1 target_t;

            inline static void* call(gtulu::int64_t const offset, gtulu::int64_t const length, gtulu::uint32_t const access) { return map_buffer_range< >::call(target_t(), offset, length, access); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct multi_draw_arrays;

          template< >
          struct multi_draw_arrays< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const* first, gtulu::int32_t const* count, gtulu::int32_t const drawcount);
          };

          template< typename _1 >
          struct multi_draw_arrays< _1 > {
            typedef _1 mode_t;

            inline static void call(gtulu::int32_t const* first, gtulu::int32_t const* count, gtulu::int32_t const drawcount) { multi_draw_arrays< >::call(mode_t(), first, count, drawcount); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct multi_draw_elements;

          template< >
          struct multi_draw_elements< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const* count, gtulu::constant_base const& type, void const* const* indices, gtulu::int32_t const drawcount);
          };

          template< typename _1, typename _2 >
          struct multi_draw_elements< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::int32_t const* count, void const* const* indices, gtulu::int32_t const drawcount) { multi_draw_elements< >::call(mode_t(), count, type_t(), indices, drawcount); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct multi_draw_elements_base_vertex;

          template< >
          struct multi_draw_elements_base_vertex< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t const* count, gtulu::constant_base const& type, void const* const* indices, gtulu::int32_t const drawcount, gtulu::int32_t const* basevertex);
          };

          template< typename _1, typename _2 >
          struct multi_draw_elements_base_vertex< _1, _2 > {
            typedef _1 mode_t;
            typedef _2 type_t;

            inline static void call(gtulu::int32_t const* count, void const* const* indices, gtulu::int32_t const drawcount, gtulu::int32_t const* basevertex) { multi_draw_elements_base_vertex< >::call(mode_t(), count, type_t(), indices, drawcount, basevertex); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct pixel_store;

          template< >
          struct pixel_store< > {
            static void call(gtulu::constant_base const& pname, gtulu::float32_t const param);
            static void call(gtulu::constant_base const& pname, gtulu::int32_t const param);
          };

          template< typename _1 >
          struct pixel_store< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::float32_t const param) { pixel_store< >::call(pname_t(), param); }
            inline static void call(gtulu::int32_t const param) { pixel_store< >::call(pname_t(), param); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct point_parameter;

          template< >
          struct point_parameter< > {
            static void call(gtulu::constant_base const& pname, gtulu::float32_t const param);
            static void call(gtulu::constant_base const& pname, gtulu::float32_t const* params);
            static void call(gtulu::constant_base const& pname, gtulu::int32_t const param);
            static void call(gtulu::constant_base const& pname, gtulu::int32_t const* params);
          };

          template< typename _1 >
          struct point_parameter< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::float32_t const param) { point_parameter< >::call(pname_t(), param); }
            inline static void call(gtulu::float32_t const* params) { point_parameter< >::call(pname_t(), params); }
            inline static void call(gtulu::int32_t const param) { point_parameter< >::call(pname_t(), param); }
            inline static void call(gtulu::int32_t const* params) { point_parameter< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct point_size;

          template< >
          struct point_size< > {
            static void call(gtulu::float32_t const size);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct polygon_mode;

          template< >
          struct polygon_mode< > {
            static void call(gtulu::constant_base const& face, gtulu::constant_base const& mode);
          };

          template< typename _1, typename _2 >
          struct polygon_mode< _1, _2 > {
            typedef _1 face_t;
            typedef _2 mode_t;

            inline static void call() { polygon_mode< >::call(face_t(), mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct polygon_offset;

          template< >
          struct polygon_offset< > {
            static void call(gtulu::float32_t const factor, gtulu::float32_t const units);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct primitive_restart_index;

          template< >
          struct primitive_restart_index< > {
            static void call(gtulu::uint32_t const index);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct provoking_vertex;

          template< >
          struct provoking_vertex< > {
            static void call(gtulu::constant_base const& provoke_mode);
          };

          template< typename _1 >
          struct provoking_vertex< _1 > {
            typedef _1 provoke_mode_t;

            inline static void call() { provoking_vertex< >::call(provoke_mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct query_counter;

          template< >
          struct query_counter< > {
            static void call(gtulu::uint32_t const id, gtulu::constant_base const& target);
          };

          template< typename _1 >
          struct query_counter< _1 > {
            typedef _1 target_t;

            inline static void call(gtulu::uint32_t const id) { query_counter< >::call(id, target_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct read_buffer;

          template< >
          struct read_buffer< > {
            static void call(gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct read_buffer< _1 > {
            typedef _1 mode_t;

            inline static void call() { read_buffer< >::call(mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct read_pixels;

          template< >
          struct read_pixels< > {
            static void call(gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::constant_base const& format, gtulu::constant_base const& type, void* data);
          };

          template< typename _1, typename _2 >
          struct read_pixels< _1, _2 > {
            typedef _1 format_t;
            typedef _2 type_t;

            inline static void call(gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height, void* data) { read_pixels< >::call(x, y, width, height, format_t(), type_t(), data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct renderbuffer_storage;

          template< >
          struct renderbuffer_storage< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height);
          };

          template< typename _1, typename _2 >
          struct renderbuffer_storage< _1, _2 > {
            typedef _1 target_t;
            typedef _2 internalformat_t;

            inline static void call(gtulu::int32_t const width, gtulu::int32_t const height) { renderbuffer_storage< >::call(target_t(), internalformat_t(), width, height); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct renderbuffer_storage_multisample;

          template< >
          struct renderbuffer_storage_multisample< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const samples, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height);
          };

          template< typename _1, typename _2 >
          struct renderbuffer_storage_multisample< _1, _2 > {
            typedef _1 target_t;
            typedef _2 internalformat_t;

            inline static void call(gtulu::int32_t const samples, gtulu::int32_t const width, gtulu::int32_t const height) { renderbuffer_storage_multisample< >::call(target_t(), samples, internalformat_t(), width, height); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct sample_coverage;

          template< >
          struct sample_coverage< > {
            static void call(gtulu::float32_t const value, bool const invert);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct sample_mask;

          template< >
          struct sample_mask< > {
            static void call(gtulu::uint32_t const mask_number, gtulu::uint32_t const mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct sampler_parameter;

          template< >
          struct sampler_parameter< > {
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::float32_t const param);
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::float32_t const* params);
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t const param);
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t const* params);
          };

          template< typename _1 >
          struct sampler_parameter< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const sampler, gtulu::float32_t const param) { sampler_parameter< >::call(sampler, pname_t(), param); }
            inline static void call(gtulu::uint32_t const sampler, gtulu::float32_t const* params) { sampler_parameter< >::call(sampler, pname_t(), params); }
            inline static void call(gtulu::uint32_t const sampler, gtulu::int32_t const param) { sampler_parameter< >::call(sampler, pname_t(), param); }
            inline static void call(gtulu::uint32_t const sampler, gtulu::int32_t const* params) { sampler_parameter< >::call(sampler, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct sampler_parameter_integer;

          template< >
          struct sampler_parameter_integer< > {
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t const* params);
            static void call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::uint32_t const* params);
          };

          template< typename _1 >
          struct sampler_parameter_integer< _1 > {
            typedef _1 pname_t;

            inline static void call(gtulu::uint32_t const sampler, gtulu::int32_t const* params) { sampler_parameter_integer< >::call(sampler, pname_t(), params); }
            inline static void call(gtulu::uint32_t const sampler, gtulu::uint32_t const* params) { sampler_parameter_integer< >::call(sampler, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct scissor;

          template< >
          struct scissor< > {
            static void call(gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct shader_source;

          template< >
          struct shader_source< > {
            static void call(gtulu::uint32_t const shader, gtulu::int32_t const count, char const* const* string, gtulu::int32_t const* length);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_func;

          template< >
          struct stencil_func< > {
            static void call(gtulu::constant_base const& func, gtulu::int32_t const ref, gtulu::uint32_t const mask);
          };

          template< typename _1 >
          struct stencil_func< _1 > {
            typedef _1 func_t;

            inline static void call(gtulu::int32_t const ref, gtulu::uint32_t const mask) { stencil_func< >::call(func_t(), ref, mask); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_func_separate;

          template< >
          struct stencil_func_separate< > {
            static void call(gtulu::constant_base const& face, gtulu::constant_base const& func, gtulu::int32_t const ref, gtulu::uint32_t const mask);
          };

          template< typename _1, typename _2 >
          struct stencil_func_separate< _1, _2 > {
            typedef _1 face_t;
            typedef _2 func_t;

            inline static void call(gtulu::int32_t const ref, gtulu::uint32_t const mask) { stencil_func_separate< >::call(face_t(), func_t(), ref, mask); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_mask;

          template< >
          struct stencil_mask< > {
            static void call(gtulu::uint32_t const mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_mask_separate;

          template< >
          struct stencil_mask_separate< > {
            static void call(gtulu::constant_base const& face, gtulu::uint32_t const mask);
          };

          template< typename _1 >
          struct stencil_mask_separate< _1 > {
            typedef _1 face_t;

            inline static void call(gtulu::uint32_t const mask) { stencil_mask_separate< >::call(face_t(), mask); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_op;

          template< >
          struct stencil_op< > {
            static void call(gtulu::constant_base const& sfail, gtulu::constant_base const& dpfail, gtulu::constant_base const& dppass);
          };

          template< typename _1, typename _2, typename _3 >
          struct stencil_op< _1, _2, _3 > {
            typedef _1 sfail_t;
            typedef _2 dpfail_t;
            typedef _3 dppass_t;

            inline static void call() { stencil_op< >::call(sfail_t(), dpfail_t(), dppass_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_op_separate;

          template< >
          struct stencil_op_separate< > {
            static void call(gtulu::constant_base const& face, gtulu::constant_base const& sfail, gtulu::constant_base const& dpfail, gtulu::constant_base const& dppass);
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct stencil_op_separate< _1, _2, _3, _4 > {
            typedef _1 face_t;
            typedef _2 sfail_t;
            typedef _3 dpfail_t;
            typedef _4 dppass_t;

            inline static void call() { stencil_op_separate< >::call(face_t(), sfail_t(), dpfail_t(), dppass_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_buffer;

          template< >
          struct tex_buffer< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::uint32_t const buffer);
          };

          template< typename _1, typename _2 >
          struct tex_buffer< _1, _2 > {
            typedef _1 target_t;
            typedef _2 internalformat_t;

            inline static void call(gtulu::uint32_t const buffer) { tex_buffer< >::call(target_t(), internalformat_t(), buffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_image;

          template< >
          struct tex_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::int32_t const border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data);
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct tex_image< _1, _2, _3, _4 > {
            typedef _1 target_t;
            typedef _2 internalformat_t;
            typedef _3 format_t;
            typedef _4 type_t;

            inline static void call(gtulu::int32_t const level, gtulu::int32_t const width, gtulu::int32_t const border, void const* data) { tex_image< >::call(target_t(), level, internalformat_t(), width, border, format_t(), type_t(), data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border, void const* data) { tex_image< >::call(target_t(), level, internalformat_t(), width, height, border, format_t(), type_t(), data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::int32_t const border, void const* data) { tex_image< >::call(target_t(), level, internalformat_t(), width, height, depth, border, format_t(), type_t(), data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_image_multisample;

          template< >
          struct tex_image_multisample< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const samples, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, bool const fixedsamplelocations);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const samples, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, bool const fixedsamplelocations);
          };

          template< typename _1, typename _2 >
          struct tex_image_multisample< _1, _2 > {
            typedef _1 target_t;
            typedef _2 internalformat_t;

            inline static void call(gtulu::int32_t const samples, gtulu::int32_t const width, gtulu::int32_t const height, bool const fixedsamplelocations) { tex_image_multisample< >::call(target_t(), samples, internalformat_t(), width, height, fixedsamplelocations); }
            inline static void call(gtulu::int32_t const samples, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, bool const fixedsamplelocations) { tex_image_multisample< >::call(target_t(), samples, internalformat_t(), width, height, depth, fixedsamplelocations); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_parameter;

          template< >
          struct tex_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t const param);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t const* params);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const param);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const* params);
          };

          template< typename _1, typename _2 >
          struct tex_parameter< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::float32_t const param) { tex_parameter< >::call(target_t(), pname_t(), param); }
            inline static void call(gtulu::float32_t const* params) { tex_parameter< >::call(target_t(), pname_t(), params); }
            inline static void call(gtulu::int32_t const param) { tex_parameter< >::call(target_t(), pname_t(), param); }
            inline static void call(gtulu::int32_t const* params) { tex_parameter< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_parameter_integer;

          template< >
          struct tex_parameter_integer< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const* params);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::uint32_t const* params);
          };

          template< typename _1, typename _2 >
          struct tex_parameter_integer< _1, _2 > {
            typedef _1 target_t;
            typedef _2 pname_t;

            inline static void call(gtulu::int32_t const* params) { tex_parameter_integer< >::call(target_t(), pname_t(), params); }
            inline static void call(gtulu::uint32_t const* params) { tex_parameter_integer< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_sub_image;

          template< >
          struct tex_sub_image< > {
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const width, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data);
            static void call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data);
          };

          template< typename _1, typename _2, typename _3 >
          struct tex_sub_image< _1, _2, _3 > {
            typedef _1 target_t;
            typedef _2 format_t;
            typedef _3 type_t;

            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const width, void const* data) { tex_sub_image< >::call(target_t(), level, xoffset, width, format_t(), type_t(), data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const width, gtulu::int32_t const height, void const* data) { tex_sub_image< >::call(target_t(), level, xoffset, yoffset, width, height, format_t(), type_t(), data); }
            inline static void call(gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, void const* data) { tex_sub_image< >::call(target_t(), level, xoffset, yoffset, zoffset, width, height, depth, format_t(), type_t(), data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct transform_feedback_varyings;

          template< >
          struct transform_feedback_varyings< > {
            static void call(gtulu::uint32_t const program, gtulu::int32_t const count, char const* const* varyings, gtulu::constant_base const& buffer_mode);
          };

          template< typename _1 >
          struct transform_feedback_varyings< _1 > {
            typedef _1 buffer_mode_t;

            inline static void call(gtulu::uint32_t const program, gtulu::int32_t const count, char const* const* varyings) { transform_feedback_varyings< >::call(program, count, varyings, buffer_mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct uniform;

          template< >
          struct uniform< > {
            static void call(gtulu::int32_t const location, gtulu::float32_t const v_0);
            static void call(gtulu::int32_t const location, gtulu::float32_t const v_0, gtulu::float32_t const v_1);
            static void call(gtulu::int32_t const location, gtulu::float32_t const v_0, gtulu::float32_t const v_1, gtulu::float32_t const v_2);
            static void call(gtulu::int32_t const location, gtulu::float32_t const v_0, gtulu::float32_t const v_1, gtulu::float32_t const v_2, gtulu::float32_t const v_3);
            static void call(gtulu::int32_t const location, gtulu::int32_t const v_0);
            static void call(gtulu::int32_t const location, gtulu::int32_t const v_0, gtulu::int32_t const v_1);
            static void call(gtulu::int32_t const location, gtulu::int32_t const v_0, gtulu::int32_t const v_1, gtulu::int32_t const v_2);
            static void call(gtulu::int32_t const location, gtulu::int32_t const v_0, gtulu::int32_t const v_1, gtulu::int32_t const v_2, gtulu::int32_t const v_3);
            static void call(gtulu::int32_t const location, gtulu::uint32_t const v_0);
            static void call(gtulu::int32_t const location, gtulu::uint32_t const v_0, gtulu::uint32_t const v_1);
            static void call(gtulu::int32_t const location, gtulu::uint32_t const v_0, gtulu::uint32_t const v_1, gtulu::uint32_t const v_2);
            static void call(gtulu::int32_t const location, gtulu::uint32_t const v_0, gtulu::uint32_t const v_1, gtulu::uint32_t const v_2, gtulu::uint32_t const v_3);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat2x2< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat2x3< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat2x4< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat3x2< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat3x3< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat3x4< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat4x2< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat4x3< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::mat4x4< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec1< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec1< gtulu::int32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec1< gtulu::uint32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec2< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec2< gtulu::int32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec2< gtulu::uint32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec3< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec3< gtulu::int32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec3< gtulu::uint32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec4< gtulu::float32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec4< gtulu::int32_t > > const& values);
            static void call(gtulu::int32_t const location, std::vector< gtulu::vec4< gtulu::uint32_t > > const& values);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct uniform_block_binding;

          template< >
          struct uniform_block_binding< > {
            static void call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_block_index, gtulu::uint32_t const uniform_block_binding);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct unmap_buffer;

          template< >
          struct unmap_buffer< > {
            static bool call(gtulu::constant_base const& target);
          };

          template< typename _1 >
          struct unmap_buffer< _1 > {
            typedef _1 target_t;

            inline static bool call() { return unmap_buffer< >::call(target_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct use_program;

          template< >
          struct use_program< > {
            static void call(gtulu::uint32_t const program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct validate_program;

          template< >
          struct validate_program< > {
            static void call(gtulu::uint32_t const program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib;

          template< >
          struct vertex_attrib< > {
            static void call(gtulu::uint32_t const index, gtulu::float32_t const x);
            static void call(gtulu::uint32_t const index, gtulu::float32_t const x, gtulu::float32_t const y);
            static void call(gtulu::uint32_t const index, gtulu::float32_t const x, gtulu::float32_t const y, gtulu::float32_t const z);
            static void call(gtulu::uint32_t const index, gtulu::float32_t const x, gtulu::float32_t const y, gtulu::float32_t const z, gtulu::float32_t const w);
            static void call(gtulu::uint32_t const index, gtulu::float64_t const x);
            static void call(gtulu::uint32_t const index, gtulu::float64_t const x, gtulu::float64_t const y);
            static void call(gtulu::uint32_t const index, gtulu::float64_t const x, gtulu::float64_t const y, gtulu::float64_t const z);
            static void call(gtulu::uint32_t const index, gtulu::float64_t const x, gtulu::float64_t const y, gtulu::float64_t const z, gtulu::float64_t const w);
            static void call(gtulu::uint32_t const index, gtulu::int16_t const x);
            static void call(gtulu::uint32_t const index, gtulu::int16_t const x, gtulu::int16_t const y);
            static void call(gtulu::uint32_t const index, gtulu::int16_t const x, gtulu::int16_t const y, gtulu::int16_t const z);
            static void call(gtulu::uint32_t const index, gtulu::int16_t const x, gtulu::int16_t const y, gtulu::int16_t const z, gtulu::int16_t const w);
            static void call(gtulu::uint32_t const index, gtulu::vec1< gtulu::float32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec1< gtulu::float64_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec1< gtulu::int16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec2< gtulu::float32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec2< gtulu::float64_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec2< gtulu::int16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec3< gtulu::float32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec3< gtulu::float64_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec3< gtulu::int16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::float32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::float64_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int8_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint8_t > const& v);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib_divisor;

          template< >
          struct vertex_attrib_divisor< > {
            static void call(gtulu::uint32_t const index, gtulu::uint32_t const divisor);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib_integer;

          template< >
          struct vertex_attrib_integer< > {
            static void call(gtulu::uint32_t const index, gtulu::int32_t const x);
            static void call(gtulu::uint32_t const index, gtulu::int32_t const x, gtulu::int32_t const y);
            static void call(gtulu::uint32_t const index, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const z);
            static void call(gtulu::uint32_t const index, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const z, gtulu::int32_t const w);
            static void call(gtulu::uint32_t const index, gtulu::uint32_t const x);
            static void call(gtulu::uint32_t const index, gtulu::uint32_t const x, gtulu::uint32_t const y);
            static void call(gtulu::uint32_t const index, gtulu::uint32_t const x, gtulu::uint32_t const y, gtulu::uint32_t const z);
            static void call(gtulu::uint32_t const index, gtulu::uint32_t const x, gtulu::uint32_t const y, gtulu::uint32_t const z, gtulu::uint32_t const w);
            static void call(gtulu::uint32_t const index, gtulu::vec1< gtulu::int32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec1< gtulu::uint32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec2< gtulu::int32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec2< gtulu::uint32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec3< gtulu::int32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec3< gtulu::uint32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int8_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint8_t > const& v);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib_normalized;

          template< >
          struct vertex_attrib_normalized< > {
            static void call(gtulu::uint32_t const index, gtulu::uint8_t const x, gtulu::uint8_t const y, gtulu::uint8_t const z, gtulu::uint8_t const w);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int8_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint16_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint32_t > const& v);
            static void call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint8_t > const& v);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib_pointer;

          template< >
          struct vertex_attrib_pointer< > {
            static void call(gtulu::uint32_t const index, gtulu::int32_t const size, gtulu::constant_base const& type, bool const normalized, gtulu::int32_t const stride, void const* pointer);
          };

          template< typename _1 >
          struct vertex_attrib_pointer< _1 > {
            typedef _1 type_t;

            inline static void call(gtulu::uint32_t const index, gtulu::int32_t const size, bool const normalized, gtulu::int32_t const stride, void const* pointer) { vertex_attrib_pointer< >::call(index, size, type_t(), normalized, stride, pointer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib_pointer_integer;

          template< >
          struct vertex_attrib_pointer_integer< > {
            static void call(gtulu::uint32_t const index, gtulu::int32_t const size, gtulu::constant_base const& type, gtulu::int32_t const stride, void const* pointer);
          };

          template< typename _1 >
          struct vertex_attrib_pointer_integer< _1 > {
            typedef _1 type_t;

            inline static void call(gtulu::uint32_t const index, gtulu::int32_t const size, gtulu::int32_t const stride, void const* pointer) { vertex_attrib_pointer_integer< >::call(index, size, type_t(), stride, pointer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct viewport;

          template< >
          struct viewport< > {
            static void call(gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct wait_sync;

          template< >
          struct wait_sync< > {
            // static void call(__invalid* sync, gtulu::uint32_t const flags, gtulu::uint64_t const timeout);
          };

        }
      }

    }
  }
}

#endif /* GTULU_INTERNAL_GENERATED_GL_3_FUNCTIONS_HPP_ */
