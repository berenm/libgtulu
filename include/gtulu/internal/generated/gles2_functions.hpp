/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

/******************************************************************************
 * THIS FILE IS AUTO GENERATED FROM generate-functions -u -l gles2,                              *
 * ANY CHANGE WILL BE OVERWRITTEN                                             *
 ******************************************************************************/

#ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
# error "gtulu/internal/generated/functions.hpp should not be included directly, please include gtulu/internal/functions.hpp instead."
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_GLES_2_FUNCTIONS_HPP_
# define GTULU_INTERNAL_GENERATED_GLES_2_FUNCTIONS_HPP_

# include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {
    namespace generated {

      namespace gles2 {
        namespace function {

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct active_texture;

          template< >
          struct active_texture< > {
            static void call(gtulu::constant_base const& texture);
          };

          template< typename _1 >
          struct active_texture< _1 > {
            typedef _1              TextureConstant;
            typedef TextureConstant texture_t;
            inline static void call() { active_texture< >::call(texture_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct attach_shader;

          template< >
          struct attach_shader< > {
            static void call(gtulu::uint32_t program, gtulu::uint32_t shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_attrib_location;

          template< >
          struct bind_attrib_location< > {
            static void call(gtulu::uint32_t program, gtulu::uint32_t index, char const* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_buffer;

          template< >
          struct bind_buffer< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t buffer);
          };

          template< typename _1 >
          struct bind_buffer< _1 > {
            typedef _1             TargetConstant;
            typedef TargetConstant target_t;
            inline static void call(gtulu::uint32_t buffer) { bind_buffer< >::call(target_t(), buffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_framebuffer;

          template< >
          struct bind_framebuffer< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t framebuffer);
          };

          template< typename _1 >
          struct bind_framebuffer< _1 > {
            typedef _1             TargetConstant;
            typedef TargetConstant target_t;
            inline static void call(gtulu::uint32_t framebuffer) { bind_framebuffer< >::call(target_t(), framebuffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_renderbuffer;

          template< >
          struct bind_renderbuffer< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t renderbuffer);
          };

          template< typename _1 >
          struct bind_renderbuffer< _1 > {
            typedef _1             TargetConstant;
            typedef TargetConstant target_t;
            inline static void call(gtulu::uint32_t renderbuffer) { bind_renderbuffer< >::call(target_t(), renderbuffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct bind_texture;

          template< >
          struct bind_texture< > {
            static void call(gtulu::constant_base const& target, gtulu::uint32_t texture);
          };

          template< typename _1 >
          struct bind_texture< _1 > {
            typedef _1             TargetConstant;
            typedef TargetConstant target_t;
            inline static void call(gtulu::uint32_t texture) { bind_texture< >::call(target_t(), texture); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_color;

          template< >
          struct blend_color< > {
            static void call(gtulu::float32_t red, gtulu::float32_t green, gtulu::float32_t blue, gtulu::float32_t alpha);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_equation;

          template< >
          struct blend_equation< > {
            static void call(gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct blend_equation< _1 > {
            typedef _1           ModeConstant;
            typedef ModeConstant mode_t;
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
            typedef _1                ModeRgbConstant;
            typedef _2                ModeAlphaConstant;
            typedef ModeAlphaConstant mode_alpha_t;
            typedef ModeRgbConstant   mode_rgb_t;
            inline static void call() { blend_equation_separate< >::call(mode_rgb_t(), mode_alpha_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_func;

          template< >
          struct blend_func< > {
            static void call(gtulu::constant_base const& sfactor, gtulu::constant_base const& dfactor);
          };

          template< typename _1, typename _2 >
          struct blend_func< _1, _2 > {
            typedef _1              SfactorConstant;
            typedef _2              DfactorConstant;
            typedef SfactorConstant sfactor_t;
            typedef DfactorConstant dfactor_t;
            inline static void call() { blend_func< >::call(sfactor_t(), dfactor_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct blend_func_separate;

          template< >
          struct blend_func_separate< > {
            static void call(gtulu::constant_base const& src_rgb, gtulu::constant_base const& dst_rgb, gtulu::constant_base const& src_alpha, gtulu::constant_base const& dst_alpha);
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct blend_func_separate< _1, _2, _3, _4 > {
            typedef _1               SrcRgbConstant;
            typedef _2               DstRgbConstant;
            typedef _3               SrcAlphaConstant;
            typedef _4               DstAlphaConstant;
            typedef SrcAlphaConstant src_alpha_t;
            typedef DstAlphaConstant dst_alpha_t;
            typedef DstRgbConstant   dst_rgb_t;
            typedef SrcRgbConstant   src_rgb_t;
            inline static void call() { blend_func_separate< >::call(src_rgb_t(), dst_rgb_t(), src_alpha_t(), dst_alpha_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct buffer_data;

          template< >
          struct buffer_data< > {
            static void call(gtulu::constant_base const& target, gtulu::int64_t size, void const* data, gtulu::constant_base const& usage);
          };

          template< typename _1, typename _2 >
          struct buffer_data< _1, _2 > {
            typedef _1             TargetConstant;
            typedef _2             UsageConstant;
            typedef TargetConstant target_t;
            typedef UsageConstant  usage_t;
            inline static void call(gtulu::int64_t size, void const* data) { buffer_data< >::call(target_t(), size, data, usage_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct buffer_sub_data;

          template< >
          struct buffer_sub_data< > {
            static void call(gtulu::constant_base const& target, gtulu::int64_t offset, gtulu::int64_t size, void const* data);
          };

          template< typename _1 >
          struct buffer_sub_data< _1 > {
            typedef _1             TargetConstant;
            typedef TargetConstant target_t;
            inline static void call(gtulu::int64_t offset, gtulu::int64_t size, void const* data) { buffer_sub_data< >::call(target_t(), offset, size, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct check_framebuffer_status;

          template< >
          struct check_framebuffer_status< > {
            static gtulu::uint32_t call(gtulu::constant_base const& target);
          };

          template< typename _1 >
          struct check_framebuffer_status< _1 > {
            typedef _1             TargetConstant;
            typedef TargetConstant target_t;
            inline static gtulu::uint32_t call() { return check_framebuffer_status< >::call(target_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear;

          template< >
          struct clear< > {
            static void call(gtulu::uint32_t mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_color;

          template< >
          struct clear_color< > {
            static void call(gtulu::float32_t red, gtulu::float32_t green, gtulu::float32_t blue, gtulu::float32_t alpha);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_depth;

          template< >
          struct clear_depth< > {
            static void call(gtulu::float32_t depth);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct clear_stencil;

          template< >
          struct clear_stencil< > {
            static void call(gtulu::int32_t s);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct color_mask;

          template< >
          struct color_mask< > {
            static void call(bool red, bool green, bool blue, bool alpha);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct compile_shader;

          template< >
          struct compile_shader< > {
            static void call(gtulu::uint32_t shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct compressed_tex_image;

          template< typename _1 >
          struct compressed_tex_image< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border, gtulu::int32_t image_size, void const* data);
          };

          template< typename _1, typename _2, typename _3 >
          struct compressed_tex_image< _1, _2, _3 > {
            typedef _1                     TargetConstant;
            typedef _2                     InternalformatConstant;
            typedef _3                     Cardinality;
            typedef InternalformatConstant internalformat_t;
            typedef TargetConstant         target_t;
            inline static void call(gtulu::int32_t level, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border, gtulu::int32_t image_size, void const* data) { compressed_tex_image< Cardinality >::call(target_t(), level, internalformat_t(), width, height, border, image_size, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct compressed_tex_sub_image;

          template< typename _1 >
          struct compressed_tex_sub_image< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t width, gtulu::int32_t height, gtulu::constant_base const& format, gtulu::int32_t image_size, void const* data);
          };

          template< typename _1, typename _2, typename _3 >
          struct compressed_tex_sub_image< _1, _2, _3 > {
            typedef _1             TargetConstant;
            typedef _2             FormatConstant;
            typedef _3             Cardinality;
            typedef TargetConstant target_t;
            typedef FormatConstant format_t;
            inline static void call(gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t image_size, void const* data) { compressed_tex_sub_image< Cardinality >::call(target_t(), level, xoffset, yoffset, width, height, format_t(), image_size, data); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct copy_tex_image;

          template< typename _1 >
          struct copy_tex_image< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border);
          };

          template< typename _1, typename _2, typename _3 >
          struct copy_tex_image< _1, _2, _3 > {
            typedef _1                     TargetConstant;
            typedef _2                     InternalformatConstant;
            typedef _3                     Cardinality;
            typedef InternalformatConstant internalformat_t;
            typedef TargetConstant         target_t;
            inline static void call(gtulu::int32_t level, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border) { copy_tex_image< Cardinality >::call(target_t(), level, internalformat_t(), x, y, width, height, border); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct copy_tex_sub_image;

          template< typename _1 >
          struct copy_tex_sub_image< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height);
          };

          template< typename _1, typename _2 >
          struct copy_tex_sub_image< _1, _2 > {
            typedef _1             TargetConstant;
            typedef _2             Cardinality;
            typedef TargetConstant target_t;
            inline static void call(gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height) { copy_tex_sub_image< Cardinality >::call(target_t(), level, xoffset, yoffset, x, y, width, height); }
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
            typedef _1           TypeConstant;
            typedef TypeConstant type_t;
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
            typedef _1           ModeConstant;
            typedef ModeConstant mode_t;
            inline static void call() { cull_face< >::call(mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_buffers;

          template< >
          struct delete_buffers< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t const* buffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_framebuffers;

          template< >
          struct delete_framebuffers< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t const* framebuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_program;

          template< >
          struct delete_program< > {
            static void call(gtulu::uint32_t program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_renderbuffers;

          template< >
          struct delete_renderbuffers< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t const* renderbuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_shader;

          template< >
          struct delete_shader< > {
            static void call(gtulu::uint32_t shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct delete_textures;

          template< >
          struct delete_textures< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t const* textures);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct depth_func;

          template< >
          struct depth_func< > {
            static void call(gtulu::constant_base const& func);
          };

          template< typename _1 >
          struct depth_func< _1 > {
            typedef _1           FuncConstant;
            typedef FuncConstant func_t;
            inline static void call() { depth_func< >::call(func_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct depth_mask;

          template< >
          struct depth_mask< > {
            static void call(bool flag);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct depth_range;

          template< >
          struct depth_range< > {
            static void call(gtulu::float32_t z_near, gtulu::float32_t z_far);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct detach_shader;

          template< >
          struct detach_shader< > {
            static void call(gtulu::uint32_t program, gtulu::uint32_t shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct disable;

          template< >
          struct disable< > {
            static void call(gtulu::constant_base const& cap);
          };

          template< typename _1 >
          struct disable< _1 > {
            typedef _1          CapConstant;
            typedef CapConstant cap_t;
            inline static void call() { disable< >::call(cap_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct disable_vertex_attrib_array;

          template< >
          struct disable_vertex_attrib_array< > {
            static void call(gtulu::uint32_t index);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_arrays;

          template< >
          struct draw_arrays< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t first, gtulu::int32_t count);
          };

          template< typename _1 >
          struct draw_arrays< _1 > {
            typedef _1           ModeConstant;
            typedef ModeConstant mode_t;
            inline static void call(gtulu::int32_t first, gtulu::int32_t count) { draw_arrays< >::call(mode_t(), first, count); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct draw_elements;

          template< >
          struct draw_elements< > {
            static void call(gtulu::constant_base const& mode, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices);
          };

          template< typename _1, typename _2 >
          struct draw_elements< _1, _2 > {
            typedef _1           ModeConstant;
            typedef _2           TypeConstant;
            typedef ModeConstant mode_t;
            typedef TypeConstant type_t;
            inline static void call(gtulu::int32_t count, void const* indices) { draw_elements< >::call(mode_t(), count, type_t(), indices); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct enable;

          template< >
          struct enable< > {
            static void call(gtulu::constant_base const& cap);
          };

          template< typename _1 >
          struct enable< _1 > {
            typedef _1          CapConstant;
            typedef CapConstant cap_t;
            inline static void call() { enable< >::call(cap_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct enable_vertex_attrib_array;

          template< >
          struct enable_vertex_attrib_array< > {
            static void call(gtulu::uint32_t index);
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
          struct framebuffer_renderbuffer;

          template< >
          struct framebuffer_renderbuffer< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& renderbuffertarget, gtulu::uint32_t renderbuffer);
          };

          template< typename _1, typename _2, typename _3 >
          struct framebuffer_renderbuffer< _1, _2, _3 > {
            typedef _1                         TargetConstant;
            typedef _2                         AttachmentConstant;
            typedef _3                         RenderbuffertargetConstant;
            typedef RenderbuffertargetConstant renderbuffertarget_t;
            typedef AttachmentConstant         attachment_t;
            typedef TargetConstant             target_t;
            inline static void call(gtulu::uint32_t renderbuffer) { framebuffer_renderbuffer< >::call(target_t(), attachment_t(), renderbuffertarget_t(), renderbuffer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct framebuffer_texture;

          template< typename _1 >
          struct framebuffer_texture< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t texture, gtulu::int32_t level);
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct framebuffer_texture< _1, _2, _3, _4 > {
            typedef _1                 TargetConstant;
            typedef _2                 AttachmentConstant;
            typedef _3                 TextargetConstant;
            typedef _4                 Cardinality;
            typedef AttachmentConstant attachment_t;
            typedef TargetConstant     target_t;
            typedef TextargetConstant  textarget_t;
            inline static void call(gtulu::uint32_t texture, gtulu::int32_t level) { framebuffer_texture< Cardinality >::call(target_t(), attachment_t(), textarget_t(), texture, level); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct front_face;

          template< >
          struct front_face< > {
            static void call(gtulu::constant_base const& mode);
          };

          template< typename _1 >
          struct front_face< _1 > {
            typedef _1           ModeConstant;
            typedef ModeConstant mode_t;
            inline static void call() { front_face< >::call(mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_buffers;

          template< >
          struct gen_buffers< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t* buffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_framebuffers;

          template< >
          struct gen_framebuffers< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t* framebuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_renderbuffers;

          template< >
          struct gen_renderbuffers< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t* renderbuffers);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct gen_textures;

          template< >
          struct gen_textures< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t* textures);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct generate_mipmap;

          template< >
          struct generate_mipmap< > {
            static void call(gtulu::constant_base const& target);
          };

          template< typename _1 >
          struct generate_mipmap< _1 > {
            typedef _1             TargetConstant;
            typedef TargetConstant target_t;
            inline static void call() { generate_mipmap< >::call(target_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_attrib;

          template< >
          struct get_active_attrib< > {
            static void call(gtulu::uint32_t program, gtulu::uint32_t index, gtulu::int32_t bufsize, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_active_uniform;

          template< >
          struct get_active_uniform< > {
            static void call(gtulu::uint32_t program, gtulu::uint32_t index, gtulu::int32_t bufsize, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_attached_shaders;

          template< >
          struct get_attached_shaders< > {
            static void call(gtulu::uint32_t program, gtulu::int32_t maxcount, gtulu::int32_t* count, gtulu::uint32_t* shaders);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_attrib_location;

          template< >
          struct get_attrib_location< > {
            static gtulu::int32_t call(gtulu::uint32_t program, char const* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_boolean;

          template< >
          struct get_boolean< > {
            static void call(gtulu::constant_base const& pname, gtulu::uint8_t* params);
          };

          template< typename _1 >
          struct get_boolean< _1 > {
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::uint8_t* params) { get_boolean< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_buffer_parameter;

          template< >
          struct get_buffer_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2 >
          struct get_buffer_parameter< _1, _2 > {
            typedef _1             TargetConstant;
            typedef _2             PnameConstant;
            typedef TargetConstant target_t;
            typedef PnameConstant  pname_t;
            inline static void call(gtulu::int32_t* params) { get_buffer_parameter< >::call(target_t(), pname_t(), params); }
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
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::float32_t* params) { get_float< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_framebuffer_attachment_parameter;

          template< >
          struct get_framebuffer_attachment_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2, typename _3 >
          struct get_framebuffer_attachment_parameter< _1, _2, _3 > {
            typedef _1                 TargetConstant;
            typedef _2                 AttachmentConstant;
            typedef _3                 PnameConstant;
            typedef PnameConstant      pname_t;
            typedef AttachmentConstant attachment_t;
            typedef TargetConstant     target_t;
            inline static void call(gtulu::int32_t* params) { get_framebuffer_attachment_parameter< >::call(target_t(), attachment_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_integer;

          template< >
          struct get_integer< > {
            static void call(gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_integer< _1 > {
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::int32_t* params) { get_integer< >::call(pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_program;

          template< >
          struct get_program< > {
            static void call(gtulu::uint32_t program, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_program< _1 > {
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::uint32_t program, gtulu::int32_t* params) { get_program< >::call(program, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_program_info_log;

          template< >
          struct get_program_info_log< > {
            static void call(gtulu::uint32_t program, gtulu::int32_t bufsize, gtulu::int32_t* length, char* infolog);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_renderbuffer_parameter;

          template< >
          struct get_renderbuffer_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1, typename _2 >
          struct get_renderbuffer_parameter< _1, _2 > {
            typedef _1             TargetConstant;
            typedef _2             PnameConstant;
            typedef TargetConstant target_t;
            typedef PnameConstant  pname_t;
            inline static void call(gtulu::int32_t* params) { get_renderbuffer_parameter< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_shader;

          template< >
          struct get_shader< > {
            static void call(gtulu::uint32_t shader, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_shader< _1 > {
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::uint32_t shader, gtulu::int32_t* params) { get_shader< >::call(shader, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_shader_info_log;

          template< >
          struct get_shader_info_log< > {
            static void call(gtulu::uint32_t shader, gtulu::int32_t bufsize, gtulu::int32_t* length, char* infolog);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_shader_precision_format;

          template< >
          struct get_shader_precision_format< > {
            static void call(gtulu::constant_base const& shadertype, gtulu::constant_base const& precisiontype, gtulu::int32_t* range, gtulu::int32_t* precision);
          };

          template< typename _1, typename _2 >
          struct get_shader_precision_format< _1, _2 > {
            typedef _1                    ShadertypeConstant;
            typedef _2                    PrecisiontypeConstant;
            typedef PrecisiontypeConstant precisiontype_t;
            typedef ShadertypeConstant    shadertype_t;
            inline static void call(gtulu::int32_t* range, gtulu::int32_t* precision) { get_shader_precision_format< >::call(shadertype_t(), precisiontype_t(), range, precision); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_shader_source;

          template< >
          struct get_shader_source< > {
            static void call(gtulu::uint32_t shader, gtulu::int32_t bufsize, gtulu::int32_t* length, char* source);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_string;

          template< >
          struct get_string< > {
            static gtulu::uint8_t const* call(gtulu::constant_base const& name);
          };

          template< typename _1 >
          struct get_string< _1 > {
            typedef _1           NameConstant;
            typedef NameConstant name_t;
            inline static gtulu::uint8_t const* call() { return get_string< >::call(name_t()); }
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
            typedef _1             TargetConstant;
            typedef _2             PnameConstant;
            typedef TargetConstant target_t;
            typedef PnameConstant  pname_t;
            inline static void call(gtulu::float32_t* params) { get_tex_parameter< >::call(target_t(), pname_t(), params); }
            inline static void call(gtulu::int32_t* params) { get_tex_parameter< >::call(target_t(), pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_uniform;

          template< >
          struct get_uniform< > {
            static void call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float32_t* params);
            static void call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t* params);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_uniform_location;

          template< >
          struct get_uniform_location< > {
            static gtulu::int32_t call(gtulu::uint32_t program, char const* name);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_vertex_attrib;

          template< >
          struct get_vertex_attrib< > {
            static void call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::float32_t* params);
            static void call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::int32_t* params);
          };

          template< typename _1 >
          struct get_vertex_attrib< _1 > {
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::uint32_t index, gtulu::float32_t* params) { get_vertex_attrib< >::call(index, pname_t(), params); }
            inline static void call(gtulu::uint32_t index, gtulu::int32_t* params) { get_vertex_attrib< >::call(index, pname_t(), params); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct get_vertex_attrib_pointer;

          template< >
          struct get_vertex_attrib_pointer< > {
            static void call(gtulu::uint32_t index, gtulu::constant_base const& pname, void** pointer);
          };

          template< typename _1 >
          struct get_vertex_attrib_pointer< _1 > {
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::uint32_t index, void** pointer) { get_vertex_attrib_pointer< >::call(index, pname_t(), pointer); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct hint;

          template< >
          struct hint< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& mode);
          };

          template< typename _1, typename _2 >
          struct hint< _1, _2 > {
            typedef _1             TargetConstant;
            typedef _2             ModeConstant;
            typedef TargetConstant target_t;
            typedef ModeConstant   mode_t;
            inline static void call() { hint< >::call(target_t(), mode_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_buffer;

          template< >
          struct is_buffer< > {
            static bool call(gtulu::uint32_t buffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_enabled;

          template< >
          struct is_enabled< > {
            static bool call(gtulu::constant_base const& cap);
          };

          template< typename _1 >
          struct is_enabled< _1 > {
            typedef _1          CapConstant;
            typedef CapConstant cap_t;
            inline static bool call() { return is_enabled< >::call(cap_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_framebuffer;

          template< >
          struct is_framebuffer< > {
            static bool call(gtulu::uint32_t framebuffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_program;

          template< >
          struct is_program< > {
            static bool call(gtulu::uint32_t program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_renderbuffer;

          template< >
          struct is_renderbuffer< > {
            static bool call(gtulu::uint32_t renderbuffer);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_shader;

          template< >
          struct is_shader< > {
            static bool call(gtulu::uint32_t shader);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct is_texture;

          template< >
          struct is_texture< > {
            static bool call(gtulu::uint32_t texture);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct line_width;

          template< >
          struct line_width< > {
            static void call(gtulu::float32_t width);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct link_program;

          template< >
          struct link_program< > {
            static void call(gtulu::uint32_t program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct pixel_store;

          template< >
          struct pixel_store< > {
            static void call(gtulu::constant_base const& pname, gtulu::int32_t param);
          };

          template< typename _1 >
          struct pixel_store< _1 > {
            typedef _1            PnameConstant;
            typedef PnameConstant pname_t;
            inline static void call(gtulu::int32_t param) { pixel_store< >::call(pname_t(), param); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct polygon_offset;

          template< >
          struct polygon_offset< > {
            static void call(gtulu::float32_t factor, gtulu::float32_t units);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct read_pixels;

          template< >
          struct read_pixels< > {
            static void call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height, gtulu::constant_base const& format, gtulu::constant_base const& type, void* pixels);
          };

          template< typename _1, typename _2 >
          struct read_pixels< _1, _2 > {
            typedef _1             FormatConstant;
            typedef _2             TypeConstant;
            typedef TypeConstant   type_t;
            typedef FormatConstant format_t;
            inline static void call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height, void* pixels) { read_pixels< >::call(x, y, width, height, format_t(), type_t(), pixels); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct release_shader_compiler;

          template< >
          struct release_shader_compiler< > {
            static void call();
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct renderbuffer_storage;

          template< >
          struct renderbuffer_storage< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height);
          };

          template< typename _1, typename _2 >
          struct renderbuffer_storage< _1, _2 > {
            typedef _1                     TargetConstant;
            typedef _2                     InternalformatConstant;
            typedef InternalformatConstant internalformat_t;
            typedef TargetConstant         target_t;
            inline static void call(gtulu::int32_t width, gtulu::int32_t height) { renderbuffer_storage< >::call(target_t(), internalformat_t(), width, height); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct sample_coverage;

          template< >
          struct sample_coverage< > {
            static void call(gtulu::float32_t value, bool invert);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct scissor;

          template< >
          struct scissor< > {
            static void call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct shader_binary;

          template< >
          struct shader_binary< > {
            static void call(gtulu::int32_t n, gtulu::uint32_t const* shaders, gtulu::constant_base const& binaryformat, void const* binary, gtulu::int32_t length);
          };

          template< typename _1 >
          struct shader_binary< _1 > {
            typedef _1                   BinaryformatConstant;
            typedef BinaryformatConstant binaryformat_t;
            inline static void call(gtulu::int32_t n, gtulu::uint32_t const* shaders, void const* binary, gtulu::int32_t length) { shader_binary< >::call(n, shaders, binaryformat_t(), binary, length); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct shader_source;

          template< >
          struct shader_source< > {
            static void call(gtulu::uint32_t shader, gtulu::int32_t count, char const* const* string, gtulu::int32_t const* length);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_func;

          template< >
          struct stencil_func< > {
            static void call(gtulu::constant_base const& func, gtulu::int32_t ref, gtulu::uint32_t mask);
          };

          template< typename _1 >
          struct stencil_func< _1 > {
            typedef _1           FuncConstant;
            typedef FuncConstant func_t;
            inline static void call(gtulu::int32_t ref, gtulu::uint32_t mask) { stencil_func< >::call(func_t(), ref, mask); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_func_separate;

          template< >
          struct stencil_func_separate< > {
            static void call(gtulu::constant_base const& face, gtulu::constant_base const& func, gtulu::int32_t ref, gtulu::uint32_t mask);
          };

          template< typename _1, typename _2 >
          struct stencil_func_separate< _1, _2 > {
            typedef _1           FaceConstant;
            typedef _2           FuncConstant;
            typedef FaceConstant face_t;
            typedef FuncConstant func_t;
            inline static void call(gtulu::int32_t ref, gtulu::uint32_t mask) { stencil_func_separate< >::call(face_t(), func_t(), ref, mask); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_mask;

          template< >
          struct stencil_mask< > {
            static void call(gtulu::uint32_t mask);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_mask_separate;

          template< >
          struct stencil_mask_separate< > {
            static void call(gtulu::constant_base const& face, gtulu::uint32_t mask);
          };

          template< typename _1 >
          struct stencil_mask_separate< _1 > {
            typedef _1           FaceConstant;
            typedef FaceConstant face_t;
            inline static void call(gtulu::uint32_t mask) { stencil_mask_separate< >::call(face_t(), mask); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_op;

          template< >
          struct stencil_op< > {
            static void call(gtulu::constant_base const& fail, gtulu::constant_base const& zfail, gtulu::constant_base const& zpass);
          };

          template< typename _1, typename _2, typename _3 >
          struct stencil_op< _1, _2, _3 > {
            typedef _1            FailConstant;
            typedef _2            ZfailConstant;
            typedef _3            ZpassConstant;
            typedef ZfailConstant zfail_t;
            typedef FailConstant  fail_t;
            typedef ZpassConstant zpass_t;
            inline static void call() { stencil_op< >::call(fail_t(), zfail_t(), zpass_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct stencil_op_separate;

          template< >
          struct stencil_op_separate< > {
            static void call(gtulu::constant_base const& face, gtulu::constant_base const& fail, gtulu::constant_base const& zfail, gtulu::constant_base const& zpass);
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct stencil_op_separate< _1, _2, _3, _4 > {
            typedef _1            FaceConstant;
            typedef _2            FailConstant;
            typedef _3            ZfailConstant;
            typedef _4            ZpassConstant;
            typedef ZfailConstant zfail_t;
            typedef FaceConstant  face_t;
            typedef FailConstant  fail_t;
            typedef ZpassConstant zpass_t;
            inline static void call() { stencil_op_separate< >::call(face_t(), fail_t(), zfail_t(), zpass_t()); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_image;

          template< typename _1 >
          struct tex_image< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels);
          };

          template< typename _1, typename _2, typename _3, typename _4, typename _5 >
          struct tex_image< _1, _2, _3, _4, _5 > {
            typedef _1                     TargetConstant;
            typedef _2                     InternalformatConstant;
            typedef _3                     FormatConstant;
            typedef _4                     TypeConstant;
            typedef _5                     Cardinality;
            typedef FormatConstant         format_t;
            typedef TargetConstant         target_t;
            typedef TypeConstant           type_t;
            typedef InternalformatConstant internalformat_t;
            inline static void call(gtulu::int32_t level, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border, void const* pixels) { tex_image< Cardinality >::call(target_t(), level, internalformat_t(), width, height, border, format_t(), type_t(), pixels); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_parameter;

          template< >
          struct tex_parameter< > {
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t param);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t const* params);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const* params);
            static void call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t param);
          };

          template< typename _1, typename _2 >
          struct tex_parameter< _1, _2 > {
            typedef _1             TargetConstant;
            typedef _2             PnameConstant;
            typedef TargetConstant target_t;
            typedef PnameConstant  pname_t;
            inline static void call(gtulu::float32_t param) { tex_parameter< >::call(target_t(), pname_t(), param); }
            inline static void call(gtulu::int32_t const* params) { tex_parameter< >::call(target_t(), pname_t(), params); }
            inline static void call(gtulu::float32_t const* params) { tex_parameter< >::call(target_t(), pname_t(), params); }
            inline static void call(gtulu::int32_t param) { tex_parameter< >::call(target_t(), pname_t(), param); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct tex_sub_image;

          template< typename _1 >
          struct tex_sub_image< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t width, gtulu::int32_t height, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels);
          };

          template< typename _1, typename _2, typename _3, typename _4 >
          struct tex_sub_image< _1, _2, _3, _4 > {
            typedef _1             TargetConstant;
            typedef _2             FormatConstant;
            typedef _3             TypeConstant;
            typedef _4             Cardinality;
            typedef FormatConstant format_t;
            typedef TargetConstant target_t;
            typedef TypeConstant   type_t;
            inline static void call(gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t width, gtulu::int32_t height, void const* pixels) { tex_sub_image< Cardinality >::call(target_t(), level, xoffset, yoffset, width, height, format_t(), type_t(), pixels); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct uniform;

          template< typename _1 >
          struct uniform< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::int32_t location, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t z);
            static void call(gtulu::int32_t location, gtulu::float32_t x, gtulu::float32_t y);
            static void call(gtulu::int32_t location, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t z, gtulu::int32_t w);
            static void call(gtulu::int32_t location, gtulu::int32_t x, gtulu::int32_t y);
            static void call(gtulu::int32_t location, gtulu::int32_t x);
            static void call(gtulu::int32_t location, gtulu::float32_t x);
            static void call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* v);
            static void call(gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* v);
            static void call(gtulu::int32_t location, gtulu::float32_t x, gtulu::float32_t y, gtulu::float32_t z);
            static void call(gtulu::int32_t location, gtulu::float32_t x, gtulu::float32_t y, gtulu::float32_t z, gtulu::float32_t w);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct uniform_matrix;

          template< typename _1 >
          struct uniform_matrix< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct use_program;

          template< >
          struct use_program< > {
            static void call(gtulu::uint32_t program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct validate_program;

          template< >
          struct validate_program< > {
            static void call(gtulu::uint32_t program);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib;

          template< typename _1 >
          struct vertex_attrib< _1 > {
            typedef _1 Cardinality;
            static void call(gtulu::uint32_t indx, gtulu::float32_t x, gtulu::float32_t y, gtulu::float32_t z);
            static void call(gtulu::uint32_t indx, gtulu::float32_t x);
            static void call(gtulu::uint32_t indx, gtulu::float32_t x, gtulu::float32_t y, gtulu::float32_t z, gtulu::float32_t w);
            static void call(gtulu::uint32_t indx, gtulu::float32_t x, gtulu::float32_t y);
            static void call(gtulu::uint32_t indx, gtulu::float32_t const* values);
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct vertex_attrib_pointer;

          template< >
          struct vertex_attrib_pointer< > {
            static void call(gtulu::uint32_t indx, gtulu::int32_t size, gtulu::constant_base const& type, bool normalized, gtulu::int32_t stride, void const* ptr);
          };

          template< typename _1 >
          struct vertex_attrib_pointer< _1 > {
            typedef _1           TypeConstant;
            typedef TypeConstant type_t;
            inline static void call(gtulu::uint32_t indx, gtulu::int32_t size, bool normalized, gtulu::int32_t stride, void const* ptr) { vertex_attrib_pointer< >::call(indx, size, type_t(), normalized, stride, ptr); }
          };

          template< typename _1 = void, typename _2 = void, typename _3 = void, typename _4 = void, typename _5 = void, typename _6 = void >
          struct viewport;

          template< >
          struct viewport< > {
            static void call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height);
          };

        }
      }

    }
  }
}

#endif /* GTULU_INTERNAL_GENERATED_GLES_2_FUNCTIONS_HPP_ */
