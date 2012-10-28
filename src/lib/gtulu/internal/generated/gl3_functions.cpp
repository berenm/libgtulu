#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/utils/array.hpp"

namespace gtulu {
  namespace internal {
    namespace generated {

      namespace gl3 {
        namespace function {

          void active_texture< >::call(gtulu::constant_base const& texture) {
            __gtulu_debug() << "call glActiveTexture " "texture: '" << texture << "'";
            glActiveTexture(static_cast< std::uint32_t >(texture));
            __gtulu_check_error();

          }

          void attach_shader< >::call(gtulu::uint32_t const program, gtulu::uint32_t const shader) {
            __gtulu_debug() << "call glAttachShader " "program: '" << program << "'" ", " "shader: '" << shader << "'";
            glAttachShader(program, shader);
            __gtulu_check_error();

          }

          void begin_conditional_render< >::call(gtulu::uint32_t const id, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glBeginConditionalRender " "id: '" << id << "'" ", " "mode: '" << mode << "'";
            glBeginConditionalRender(id, static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void begin_query< >::call(gtulu::constant_base const& target, gtulu::uint32_t const id) {
            __gtulu_debug() << "call glBeginQuery " "target: '" << target << "'" ", " "id: '" << id << "'";
            glBeginQuery(static_cast< std::uint32_t >(target), id);
            __gtulu_check_error();

          }

          void begin_transform_feedback< >::call(gtulu::constant_base const& primitive_mode) {
            __gtulu_debug() << "call glBeginTransformFeedback " "primitive_mode: '" << primitive_mode << "'";
            glBeginTransformFeedback(static_cast< std::uint32_t >(primitive_mode));
            __gtulu_check_error();

          }

          void bind_attrib_location< >::call(gtulu::uint32_t const program, gtulu::uint32_t const index, std::string const& name) {
            __gtulu_debug() << "call glBindAttribLocation " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "name: '" << name << "'";
            glBindAttribLocation(program, index, name.c_str());
            __gtulu_check_error();

          }

          void bind_buffer< >::call(gtulu::constant_base const& target, gtulu::uint32_t const buffer) {
            __gtulu_debug() << "call glBindBuffer " "target: '" << target << "'" ", " "buffer: '" << buffer << "'";
            glBindBuffer(static_cast< std::uint32_t >(target), buffer);
            __gtulu_check_error();

          }

          void bind_buffer_base< >::call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::uint32_t const buffer) {
            __gtulu_debug() << "call glBindBufferBase " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "buffer: '" << buffer << "'";
            glBindBufferBase(static_cast< std::uint32_t >(target), index, buffer);
            __gtulu_check_error();

          }

          void bind_buffer_range< >::call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::uint32_t const buffer, gtulu::int64_t const offset, gtulu::int64_t const size) {
            __gtulu_debug() << "call glBindBufferRange " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "buffer: '" << buffer << "'" ", " "offset: '" << offset << "'" ", " "size: '" << size << "'";
            glBindBufferRange(static_cast< std::uint32_t >(target), index, buffer, offset, size);
            __gtulu_check_error();

          }

          void bind_frag_data_location< >::call(gtulu::uint32_t const program, gtulu::uint32_t const color_number, std::string const& name) {
            __gtulu_debug() << "call glBindFragDataLocation " "program: '" << program << "'" ", " "color_number: '" << color_number << "'" ", " "name: '" << name << "'";
            glBindFragDataLocation(program, color_number, name.c_str());
            __gtulu_check_error();

          }

          void bind_frag_data_location_indexed< >::call(gtulu::uint32_t const program, gtulu::uint32_t const color_number, gtulu::uint32_t const index, std::string const& name) {
            __gtulu_debug() << "call glBindFragDataLocationIndexed " "program: '" << program << "'" ", " "color_number: '" << color_number << "'" ", " "index: '" << index << "'" ", " "name: '" << name << "'";
            glBindFragDataLocationIndexed(program, color_number, index, name.c_str());
            __gtulu_check_error();

          }

          void bind_framebuffer< >::call(gtulu::constant_base const& target, gtulu::uint32_t const framebuffer) {
            __gtulu_debug() << "call glBindFramebuffer " "target: '" << target << "'" ", " "framebuffer: '" << framebuffer << "'";
            glBindFramebuffer(static_cast< std::uint32_t >(target), framebuffer);
            __gtulu_check_error();

          }

          void bind_renderbuffer< >::call(gtulu::constant_base const& target, gtulu::uint32_t const renderbuffer) {
            __gtulu_debug() << "call glBindRenderbuffer " "target: '" << target << "'" ", " "renderbuffer: '" << renderbuffer << "'";
            glBindRenderbuffer(static_cast< std::uint32_t >(target), renderbuffer);
            __gtulu_check_error();

          }

          void bind_sampler< >::call(gtulu::uint32_t const unit, gtulu::uint32_t const sampler) {
            __gtulu_debug() << "call glBindSampler " "unit: '" << unit << "'" ", " "sampler: '" << sampler << "'";
            glBindSampler(unit, sampler);
            __gtulu_check_error();

          }

          void bind_texture< >::call(gtulu::constant_base const& target, gtulu::uint32_t const texture) {
            __gtulu_debug() << "call glBindTexture " "target: '" << target << "'" ", " "texture: '" << texture << "'";
            glBindTexture(static_cast< std::uint32_t >(target), texture);
            __gtulu_check_error();

          }

          void bind_vertex_array< >::call(gtulu::uint32_t const array) {
            __gtulu_debug() << "call glBindVertexArray " "array: '" << array << "'";
            glBindVertexArray(array);
            __gtulu_check_error();

          }

          void blend_color< >::call(gtulu::float32_t const red, gtulu::float32_t const green, gtulu::float32_t const blue, gtulu::float32_t const alpha) {
            __gtulu_debug() << "call glBlendColor " "red: '" << red << "'" ", " "green: '" << green << "'" ", " "blue: '" << blue << "'" ", " "alpha: '" << alpha << "'";
            glBlendColor(red, green, blue, alpha);
            __gtulu_check_error();

          }

          void blend_equation< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glBlendEquation " "mode: '" << mode << "'";
            glBlendEquation(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void blend_equation_separate< >::call(gtulu::constant_base const& mode_rgb, gtulu::constant_base const& mode_alpha) {
            __gtulu_debug() << "call glBlendEquationSeparate " "mode_rgb: '" << mode_rgb << "'" ", " "mode_alpha: '" << mode_alpha << "'";
            glBlendEquationSeparate(static_cast< std::uint32_t >(mode_rgb), static_cast< std::uint32_t >(mode_alpha));
            __gtulu_check_error();

          }

          void blend_func< >::call(gtulu::constant_base const& src, gtulu::constant_base const& dst) {
            __gtulu_debug() << "call glBlendFunc " "src: '" << src << "'" ", " "dst: '" << dst << "'";
            glBlendFunc(static_cast< std::uint32_t >(src), static_cast< std::uint32_t >(dst));
            __gtulu_check_error();

          }

          void blend_func_separate< >::call(gtulu::constant_base const& src_rgb, gtulu::constant_base const& dst_rgb, gtulu::constant_base const& src_alpha, gtulu::constant_base const& dst_alpha) {
            __gtulu_debug() << "call glBlendFuncSeparate " "src_rgb: '" << src_rgb << "'" ", " "dst_rgb: '" << dst_rgb << "'" ", " "src_alpha: '" << src_alpha << "'" ", " "dst_alpha: '" << dst_alpha << "'";
            glBlendFuncSeparate(static_cast< std::uint32_t >(src_rgb), static_cast< std::uint32_t >(dst_rgb), static_cast< std::uint32_t >(src_alpha), static_cast< std::uint32_t >(dst_alpha));
            __gtulu_check_error();

          }

          void blit_framebuffer< >::call(gtulu::int32_t const src_x_0, gtulu::int32_t const src_y_0, gtulu::int32_t const src_x_1, gtulu::int32_t const src_y_1, gtulu::int32_t const dst_x_0, gtulu::int32_t const dst_y_0, gtulu::int32_t const dst_x_1, gtulu::int32_t const dst_y_1, gtulu::uint32_t const mask, gtulu::constant_base const& filter) {
            __gtulu_debug() << "call glBlitFramebuffer " "src_x_0: '" << src_x_0 << "'" ", " "src_y_0: '" << src_y_0 << "'" ", " "src_x_1: '" << src_x_1 << "'" ", " "src_y_1: '" << src_y_1 << "'" ", " "dst_x_0: '" << dst_x_0 << "'" ", " "dst_y_0: '" << dst_y_0 << "'" ", " "dst_x_1: '" << dst_x_1 << "'" ", " "dst_y_1: '" << dst_y_1 << "'" ", " "mask: '" << mask << "'" ", " "filter: '" << filter << "'";
            glBlitFramebuffer(src_x_0, src_y_0, src_x_1, src_y_1, dst_x_0, dst_y_0, dst_x_1, dst_y_1, mask, static_cast< std::uint32_t >(filter));
            __gtulu_check_error();

          }

          void buffer_data< >::call(gtulu::constant_base const& target, gtulu::int64_t const size, void const* data, gtulu::constant_base const& usage) {
            __gtulu_debug() << "call glBufferData " "target: '" << target << "'" ", " "size: '" << size << "'" ", " "data: '" << data << "'" ", " "usage: '" << usage << "'";
            glBufferData(static_cast< std::uint32_t >(target), size, data, static_cast< std::uint32_t >(usage));
            __gtulu_check_error();

          }

          void buffer_sub_data< >::call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const size, void const* data) {
            __gtulu_debug() << "call glBufferSubData " "target: '" << target << "'" ", " "offset: '" << offset << "'" ", " "size: '" << size << "'" ", " "data: '" << data << "'";
            glBufferSubData(static_cast< std::uint32_t >(target), offset, size, data);
            __gtulu_check_error();

          }

          gtulu::uint32_t check_framebuffer_status< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glCheckFramebufferStatus " "target: '" << target << "'";
            gtulu::uint32_t output = glCheckFramebufferStatus(static_cast< std::uint32_t >(target));
            __gtulu_check_error();
            return output;
          }

          void clamp_color< >::call(gtulu::constant_base const& target, gtulu::constant_base const& clamp) {
            __gtulu_debug() << "call glClampColor " "target: '" << target << "'" ", " "clamp: '" << clamp << "'";
            glClampColor(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(clamp));
            __gtulu_check_error();

          }

          void clear< >::call(gtulu::uint32_t const mask) {
            __gtulu_debug() << "call glClear " "mask: '" << mask << "'";
            glClear(mask);
            __gtulu_check_error();

          }

          void clear_buffer< >::call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glClearBufferfv " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "value: '" << value << "'";
            glClearBufferfv(static_cast< std::uint32_t >(buffer), drawbuffer, value);
            __gtulu_check_error();

          }

          void clear_buffer< >::call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glClearBufferiv " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "value: '" << value << "'";
            glClearBufferiv(static_cast< std::uint32_t >(buffer), drawbuffer, value);
            __gtulu_check_error();

          }

          void clear_buffer< >::call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glClearBufferuiv " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "value: '" << value << "'";
            glClearBufferuiv(static_cast< std::uint32_t >(buffer), drawbuffer, value);
            __gtulu_check_error();

          }

          void clear_buffer_float< >::call(gtulu::constant_base const& buffer, gtulu::int32_t const drawbuffer, gtulu::float32_t const depth, gtulu::int32_t const stencil) {
            __gtulu_debug() << "call glClearBufferfi " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "depth: '" << depth << "'" ", " "stencil: '" << stencil << "'";
            glClearBufferfi(static_cast< std::uint32_t >(buffer), drawbuffer, depth, stencil);
            __gtulu_check_error();

          }

          void clear_color< >::call(gtulu::float32_t const red, gtulu::float32_t const green, gtulu::float32_t const blue, gtulu::float32_t const alpha) {
            __gtulu_debug() << "call glClearColor " "red: '" << red << "'" ", " "green: '" << green << "'" ", " "blue: '" << blue << "'" ", " "alpha: '" << alpha << "'";
            glClearColor(red, green, blue, alpha);
            __gtulu_check_error();

          }

          void clear_depth< >::call(gtulu::float64_t const d) {
            __gtulu_debug() << "call glClearDepth " "d: '" << d << "'";
            glClearDepth(d);
            __gtulu_check_error();

          }

          void clear_stencil< >::call(gtulu::int32_t const s) {
            __gtulu_debug() << "call glClearStencil " "s: '" << s << "'";
            glClearStencil(s);
            __gtulu_check_error();

          }

          void color_mask< >::call(bool const r, bool const g, bool const b, bool const a) {
            __gtulu_debug() << "call glColorMask " "r: '" << r << "'" ", " "g: '" << g << "'" ", " "b: '" << b << "'" ", " "a: '" << a << "'";
            glColorMask(r, g, b, a);
            __gtulu_check_error();

          }

          void color_mask< >::call(gtulu::uint32_t const buf, bool const r, bool const g, bool const b, bool const a) {
            __gtulu_debug() << "call glColorMaski " "buf: '" << buf << "'" ", " "r: '" << r << "'" ", " "g: '" << g << "'" ", " "b: '" << b << "'" ", " "a: '" << a << "'";
            glColorMaski(buf, r, g, b, a);
            __gtulu_check_error();

          }

          void compile_shader< >::call(gtulu::uint32_t const shader) {
            __gtulu_debug() << "call glCompileShader " "shader: '" << shader << "'";
            glCompileShader(shader);
            __gtulu_check_error();

          }

          void compressed_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "border: '" << border << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexImage1D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), width, border, image_size, data);
            __gtulu_check_error();

          }

          void compressed_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "border: '" << border << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexImage2D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), width, height, border, image_size, data);
            __gtulu_check_error();

          }

          void compressed_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::int32_t const border, gtulu::int32_t const image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "border: '" << border << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexImage3D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), width, height, depth, border, image_size, data);
            __gtulu_check_error();

          }

          void compressed_tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const width, gtulu::constant_base const& format, gtulu::int32_t const image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexSubImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "width: '" << width << "'" ", " "format: '" << format << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexSubImage1D(static_cast< std::uint32_t >(target), level, xoffset, width, static_cast< std::uint32_t >(format), image_size, data);
            __gtulu_check_error();

          }

          void compressed_tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::constant_base const& format, gtulu::int32_t const image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexSubImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "format: '" << format << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexSubImage2D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, width, height, static_cast< std::uint32_t >(format), image_size, data);
            __gtulu_check_error();

          }

          void compressed_tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::constant_base const& format, gtulu::int32_t const image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexSubImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "zoffset: '" << zoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "format: '" << format << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexSubImage3D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast< std::uint32_t >(format), image_size, data);
            __gtulu_check_error();

          }

          void copy_buffer_sub_data< >::call(gtulu::constant_base const& readtarget, gtulu::constant_base const& writetarget, gtulu::int64_t const readoffset, gtulu::int64_t const writeoffset, gtulu::int64_t const size) {
            __gtulu_debug() << "call glCopyBufferSubData " "readtarget: '" << readtarget << "'" ", " "writetarget: '" << writetarget << "'" ", " "readoffset: '" << readoffset << "'" ", " "writeoffset: '" << writeoffset << "'" ", " "size: '" << size << "'";
            glCopyBufferSubData(static_cast< std::uint32_t >(readtarget), static_cast< std::uint32_t >(writetarget), readoffset, writeoffset, size);
            __gtulu_check_error();

          }

          void copy_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const border) {
            __gtulu_debug() << "call glCopyTexImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "border: '" << border << "'";
            glCopyTexImage1D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), x, y, width, border);
            __gtulu_check_error();

          }

          void copy_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border) {
            __gtulu_debug() << "call glCopyTexImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "border: '" << border << "'";
            glCopyTexImage2D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), x, y, width, height, border);
            __gtulu_check_error();

          }

          void copy_tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width) {
            __gtulu_debug() << "call glCopyTexSubImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'";
            glCopyTexSubImage1D(static_cast< std::uint32_t >(target), level, xoffset, x, y, width);
            __gtulu_check_error();

          }

          void copy_tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height) {
            __gtulu_debug() << "call glCopyTexSubImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glCopyTexSubImage2D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, x, y, width, height);
            __gtulu_check_error();

          }

          void copy_tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height) {
            __gtulu_debug() << "call glCopyTexSubImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "zoffset: '" << zoffset << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glCopyTexSubImage3D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, zoffset, x, y, width, height);
            __gtulu_check_error();

          }

          gtulu::uint32_t create_program< >::call() {
            __gtulu_debug() << "call glCreateProgram ";
            gtulu::uint32_t output = glCreateProgram();
            __gtulu_check_error();
            return output;
          }

          gtulu::uint32_t create_shader< >::call(gtulu::constant_base const& type) {
            __gtulu_debug() << "call glCreateShader " "type: '" << type << "'";
            gtulu::uint32_t output = glCreateShader(static_cast< std::uint32_t >(type));
            __gtulu_check_error();
            return output;
          }

          void cull_face< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glCullFace " "mode: '" << mode << "'";
            glCullFace(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void delete_buffers< >::call(gtulu::int32_t const n, gtulu::uint32_t const* buffers) {
            __gtulu_debug() << "call glDeleteBuffers " "n: '" << n << "'" ", " "buffers: '" << buffers << "'";
            glDeleteBuffers(n, buffers);
            __gtulu_check_error();

          }

          void delete_framebuffers< >::call(gtulu::int32_t const n, gtulu::uint32_t const* framebuffers) {
            __gtulu_debug() << "call glDeleteFramebuffers " "n: '" << n << "'" ", " "framebuffers: '" << framebuffers << "'";
            glDeleteFramebuffers(n, framebuffers);
            __gtulu_check_error();

          }

          void delete_program< >::call(gtulu::uint32_t const program) {
            __gtulu_debug() << "call glDeleteProgram " "program: '" << program << "'";
            glDeleteProgram(program);
            __gtulu_check_error();

          }

          void delete_queries< >::call(gtulu::int32_t const n, gtulu::uint32_t const* ids) {
            __gtulu_debug() << "call glDeleteQueries " "n: '" << n << "'" ", " "ids: '" << ids << "'";
            glDeleteQueries(n, ids);
            __gtulu_check_error();

          }

          void delete_renderbuffers< >::call(gtulu::int32_t const n, gtulu::uint32_t const* renderbuffers) {
            __gtulu_debug() << "call glDeleteRenderbuffers " "n: '" << n << "'" ", " "renderbuffers: '" << renderbuffers << "'";
            glDeleteRenderbuffers(n, renderbuffers);
            __gtulu_check_error();

          }

          void delete_samplers< >::call(gtulu::int32_t const count, gtulu::uint32_t const* samplers) {
            __gtulu_debug() << "call glDeleteSamplers " "count: '" << count << "'" ", " "samplers: '" << samplers << "'";
            glDeleteSamplers(count, samplers);
            __gtulu_check_error();

          }

          void delete_shader< >::call(gtulu::uint32_t const shader) {
            __gtulu_debug() << "call glDeleteShader " "shader: '" << shader << "'";
            glDeleteShader(shader);
            __gtulu_check_error();

          }

          void delete_textures< >::call(gtulu::int32_t const n, gtulu::uint32_t const* textures) {
            __gtulu_debug() << "call glDeleteTextures " "n: '" << n << "'" ", " "textures: '" << textures << "'";
            glDeleteTextures(n, textures);
            __gtulu_check_error();

          }

          void delete_vertex_arrays< >::call(gtulu::int32_t const n, gtulu::uint32_t const* arrays) {
            __gtulu_debug() << "call glDeleteVertexArrays " "n: '" << n << "'" ", " "arrays: '" << arrays << "'";
            glDeleteVertexArrays(n, arrays);
            __gtulu_check_error();

          }

          void depth_func< >::call(gtulu::constant_base const& func) {
            __gtulu_debug() << "call glDepthFunc " "func: '" << func << "'";
            glDepthFunc(static_cast< std::uint32_t >(func));
            __gtulu_check_error();

          }

          void depth_mask< >::call(bool const flag) {
            __gtulu_debug() << "call glDepthMask " "flag: '" << flag << "'";
            glDepthMask(flag);
            __gtulu_check_error();

          }

          void depth_range< >::call(gtulu::float64_t const n, gtulu::float64_t const f) {
            __gtulu_debug() << "call glDepthRange " "n: '" << n << "'" ", " "f: '" << f << "'";
            glDepthRange(n, f);
            __gtulu_check_error();

          }

          void detach_shader< >::call(gtulu::uint32_t const program, gtulu::uint32_t const shader) {
            __gtulu_debug() << "call glDetachShader " "program: '" << program << "'" ", " "shader: '" << shader << "'";
            glDetachShader(program, shader);
            __gtulu_check_error();

          }

          void disable< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glDisable " "target: '" << target << "'";
            glDisable(static_cast< std::uint32_t >(target));
            __gtulu_check_error();

          }

          void disable< >::call(gtulu::constant_base const& target, gtulu::uint32_t const index) {
            __gtulu_debug() << "call glDisablei " "target: '" << target << "'" ", " "index: '" << index << "'";
            glDisablei(static_cast< std::uint32_t >(target), index);
            __gtulu_check_error();

          }

          void disable_vertex_attrib_array< >::call(gtulu::uint32_t const index) {
            __gtulu_debug() << "call glDisableVertexAttribArray " "index: '" << index << "'";
            glDisableVertexAttribArray(index);
            __gtulu_check_error();

          }

          void draw_arrays< >::call(gtulu::constant_base const& mode, gtulu::int32_t const first, gtulu::int32_t const count) {
            __gtulu_debug() << "call glDrawArrays " "mode: '" << mode << "'" ", " "first: '" << first << "'" ", " "count: '" << count << "'";
            glDrawArrays(static_cast< std::uint32_t >(mode), first, count);
            __gtulu_check_error();

          }

          void draw_arrays_instanced< >::call(gtulu::constant_base const& mode, gtulu::int32_t const first, gtulu::int32_t const count, gtulu::int32_t const instancecount) {
            __gtulu_debug() << "call glDrawArraysInstanced " "mode: '" << mode << "'" ", " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "instancecount: '" << instancecount << "'";
            glDrawArraysInstanced(static_cast< std::uint32_t >(mode), first, count, instancecount);
            __gtulu_check_error();

          }

          void draw_buffer< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glDrawBuffer " "mode: '" << mode << "'";
            glDrawBuffer(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void draw_buffers< >::call(gtulu::int32_t const n, gtulu::uint32_t const* bufs) {
            __gtulu_debug() << "call glDrawBuffers " "n: '" << n << "'" ", " "bufs: '" << bufs << "'";
            glDrawBuffers(n, bufs);
            __gtulu_check_error();

          }

          void draw_elements< >::call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices) {
            __gtulu_debug() << "call glDrawElements " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'";
            glDrawElements(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices);
            __gtulu_check_error();

          }

          void draw_elements_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const basevertex) {
            __gtulu_debug() << "call glDrawElementsBaseVertex " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "basevertex: '" << basevertex << "'";
            glDrawElementsBaseVertex(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, basevertex);
            __gtulu_check_error();

          }

          void draw_elements_instanced< >::call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const instancecount) {
            __gtulu_debug() << "call glDrawElementsInstanced " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "instancecount: '" << instancecount << "'";
            glDrawElementsInstanced(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, instancecount);
            __gtulu_check_error();

          }

          void draw_elements_instanced_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const instancecount, gtulu::int32_t const basevertex) {
            __gtulu_debug() << "call glDrawElementsInstancedBaseVertex " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "instancecount: '" << instancecount << "'" ", " "basevertex: '" << basevertex << "'";
            glDrawElementsInstancedBaseVertex(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, instancecount, basevertex);
            __gtulu_check_error();

          }

          void draw_range_elements< >::call(gtulu::constant_base const& mode, gtulu::uint32_t const start, gtulu::uint32_t const end, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices) {
            __gtulu_debug() << "call glDrawRangeElements " "mode: '" << mode << "'" ", " "start: '" << start << "'" ", " "end: '" << end << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'";
            glDrawRangeElements(static_cast< std::uint32_t >(mode), start, end, count, static_cast< std::uint32_t >(type), indices);
            __gtulu_check_error();

          }

          void draw_range_elements_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::uint32_t const start, gtulu::uint32_t const end, gtulu::int32_t const count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t const basevertex) {
            __gtulu_debug() << "call glDrawRangeElementsBaseVertex " "mode: '" << mode << "'" ", " "start: '" << start << "'" ", " "end: '" << end << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "basevertex: '" << basevertex << "'";
            glDrawRangeElementsBaseVertex(static_cast< std::uint32_t >(mode), start, end, count, static_cast< std::uint32_t >(type), indices, basevertex);
            __gtulu_check_error();

          }

          void enable< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glEnable " "target: '" << target << "'";
            glEnable(static_cast< std::uint32_t >(target));
            __gtulu_check_error();

          }

          void enable< >::call(gtulu::constant_base const& target, gtulu::uint32_t const index) {
            __gtulu_debug() << "call glEnablei " "target: '" << target << "'" ", " "index: '" << index << "'";
            glEnablei(static_cast< std::uint32_t >(target), index);
            __gtulu_check_error();

          }

          void enable_vertex_attrib_array< >::call(gtulu::uint32_t const index) {
            __gtulu_debug() << "call glEnableVertexAttribArray " "index: '" << index << "'";
            glEnableVertexAttribArray(index);
            __gtulu_check_error();

          }

          void end_conditional_render< >::call() {
            __gtulu_debug() << "call glEndConditionalRender ";
            glEndConditionalRender();
            __gtulu_check_error();

          }

          void end_query< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glEndQuery " "target: '" << target << "'";
            glEndQuery(static_cast< std::uint32_t >(target));
            __gtulu_check_error();

          }

          void end_transform_feedback< >::call() {
            __gtulu_debug() << "call glEndTransformFeedback ";
            glEndTransformFeedback();
            __gtulu_check_error();

          }

          void finish< >::call() {
            __gtulu_debug() << "call glFinish ";
            glFinish();
            __gtulu_check_error();

          }

          void flush< >::call() {
            __gtulu_debug() << "call glFlush ";
            glFlush();
            __gtulu_check_error();

          }

          void flush_mapped_buffer_range< >::call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const length) {
            __gtulu_debug() << "call glFlushMappedBufferRange " "target: '" << target << "'" ", " "offset: '" << offset << "'" ", " "length: '" << length << "'";
            glFlushMappedBufferRange(static_cast< std::uint32_t >(target), offset, length);
            __gtulu_check_error();

          }

          void framebuffer_renderbuffer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& renderbuffertarget, gtulu::uint32_t const renderbuffer) {
            __gtulu_debug() << "call glFramebufferRenderbuffer " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "renderbuffertarget: '" << renderbuffertarget << "'" ", " "renderbuffer: '" << renderbuffer << "'";
            glFramebufferRenderbuffer(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(renderbuffertarget), renderbuffer);
            __gtulu_check_error();

          }

          void framebuffer_texture< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::uint32_t const texture, gtulu::int32_t const level) {
            __gtulu_debug() << "call glFramebufferTexture " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'";
            glFramebufferTexture(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), texture, level);
            __gtulu_check_error();

          }

          template< > void framebuffer_texture< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t const texture, gtulu::int32_t const level) {
            __gtulu_debug() << "call glFramebufferTexture1D " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "textarget: '" << textarget << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'";
            glFramebufferTexture1D(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(textarget), texture, level);
            __gtulu_check_error();

          }

          template< > void framebuffer_texture< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t const texture, gtulu::int32_t const level) {
            __gtulu_debug() << "call glFramebufferTexture2D " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "textarget: '" << textarget << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'";
            glFramebufferTexture2D(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(textarget), texture, level);
            __gtulu_check_error();

          }

          template< > void framebuffer_texture< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t const texture, gtulu::int32_t const level, gtulu::int32_t const layer) {
            __gtulu_debug() << "call glFramebufferTexture3D " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "textarget: '" << textarget << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'" ", " "layer: '" << layer << "'";
            glFramebufferTexture3D(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(textarget), texture, level, layer);
            __gtulu_check_error();

          }

          void framebuffer_texture_layer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::uint32_t const texture, gtulu::int32_t const level, gtulu::int32_t const layer) {
            __gtulu_debug() << "call glFramebufferTextureLayer " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'" ", " "layer: '" << layer << "'";
            glFramebufferTextureLayer(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), texture, level, layer);
            __gtulu_check_error();

          }

          void front_face< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glFrontFace " "mode: '" << mode << "'";
            glFrontFace(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void gen_buffers< >::call(gtulu::int32_t const n, gtulu::uint32_t* buffers) {
            __gtulu_debug() << "call glGenBuffers " "n: '" << n << "'" ", " "buffers: '" << buffers << "'";
            glGenBuffers(n, buffers);
            __gtulu_check_error();

          }

          void gen_framebuffers< >::call(gtulu::int32_t const n, gtulu::uint32_t* framebuffers) {
            __gtulu_debug() << "call glGenFramebuffers " "n: '" << n << "'" ", " "framebuffers: '" << framebuffers << "'";
            glGenFramebuffers(n, framebuffers);
            __gtulu_check_error();

          }

          void gen_queries< >::call(gtulu::int32_t const n, gtulu::uint32_t* ids) {
            __gtulu_debug() << "call glGenQueries " "n: '" << n << "'" ", " "ids: '" << ids << "'";
            glGenQueries(n, ids);
            __gtulu_check_error();

          }

          void gen_renderbuffers< >::call(gtulu::int32_t const n, gtulu::uint32_t* renderbuffers) {
            __gtulu_debug() << "call glGenRenderbuffers " "n: '" << n << "'" ", " "renderbuffers: '" << renderbuffers << "'";
            glGenRenderbuffers(n, renderbuffers);
            __gtulu_check_error();

          }

          void gen_samplers< >::call(gtulu::int32_t const count, gtulu::uint32_t* samplers) {
            __gtulu_debug() << "call glGenSamplers " "count: '" << count << "'" ", " "samplers: '" << samplers << "'";
            glGenSamplers(count, samplers);
            __gtulu_check_error();

          }

          void gen_textures< >::call(gtulu::int32_t const n, gtulu::uint32_t* textures) {
            __gtulu_debug() << "call glGenTextures " "n: '" << n << "'" ", " "textures: '" << textures << "'";
            glGenTextures(n, textures);
            __gtulu_check_error();

          }

          void gen_vertex_arrays< >::call(gtulu::int32_t const n, gtulu::uint32_t* arrays) {
            __gtulu_debug() << "call glGenVertexArrays " "n: '" << n << "'" ", " "arrays: '" << arrays << "'";
            glGenVertexArrays(n, arrays);
            __gtulu_check_error();

          }

          void generate_mipmap< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glGenerateMipmap " "target: '" << target << "'";
            glGenerateMipmap(static_cast< std::uint32_t >(target));
            __gtulu_check_error();

          }

          void get_active_attrib< >::call(gtulu::uint32_t const program, gtulu::uint32_t const index, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name) {
            __gtulu_debug() << "call glGetActiveAttrib " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "name: '" << name << "'";
            glGetActiveAttrib(program, index, buf_size, length, size, type, name);
            __gtulu_check_error();

          }

          void get_active_uniform< >::call(gtulu::uint32_t const program, gtulu::uint32_t const index, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name) {
            __gtulu_debug() << "call glGetActiveUniform " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "name: '" << name << "'";
            glGetActiveUniform(program, index, buf_size, length, size, type, name);
            __gtulu_check_error();

          }

          void get_active_uniform_block< >::call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_block_index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetActiveUniformBlockiv " "program: '" << program << "'" ", " "uniform_block_index: '" << uniform_block_index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetActiveUniformBlockiv(program, uniform_block_index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_active_uniform_block_name< >::call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_block_index, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* uniform_block_name) {
            __gtulu_debug() << "call glGetActiveUniformBlockName " "program: '" << program << "'" ", " "uniform_block_index: '" << uniform_block_index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "uniform_block_name: '" << uniform_block_name << "'";
            glGetActiveUniformBlockName(program, uniform_block_index, buf_size, length, uniform_block_name);
            __gtulu_check_error();

          }

          void get_active_uniform_name< >::call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_index, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* uniform_name) {
            __gtulu_debug() << "call glGetActiveUniformName " "program: '" << program << "'" ", " "uniform_index: '" << uniform_index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "uniform_name: '" << uniform_name << "'";
            glGetActiveUniformName(program, uniform_index, buf_size, length, uniform_name);
            __gtulu_check_error();

          }

          void get_active_uniforms< >::call(gtulu::uint32_t const program, gtulu::int32_t const uniform_count, gtulu::uint32_t const* uniform_indices, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetActiveUniformsiv " "program: '" << program << "'" ", " "uniform_count: '" << uniform_count << "'" ", " "uniform_indices: '" << uniform_indices << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetActiveUniformsiv(program, uniform_count, uniform_indices, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_attached_shaders< >::call(gtulu::uint32_t const program, gtulu::int32_t const max_count, gtulu::int32_t* count, gtulu::uint32_t* shaders) {
            __gtulu_debug() << "call glGetAttachedShaders " "program: '" << program << "'" ", " "max_count: '" << max_count << "'" ", " "count: '" << count << "'" ", " "shaders: '" << shaders << "'";
            glGetAttachedShaders(program, max_count, count, shaders);
            __gtulu_check_error();

          }

          gtulu::int32_t get_attrib_location< >::call(gtulu::uint32_t const program, std::string const& name) {
            __gtulu_debug() << "call glGetAttribLocation " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetAttribLocation(program, name.c_str());
            __gtulu_check_error();
            return output;
          }

          void get_boolean< >::call(gtulu::constant_base const& pname, gtulu::uint8_t* params) {
            __gtulu_debug() << "call glGetBooleanv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetBooleanv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_boolean_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::uint8_t* data) {
            __gtulu_debug() << "call glGetBooleani_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetBooleani_v(static_cast< std::uint32_t >(target), index, data);
            __gtulu_check_error();

          }

          void get_buffer_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* data) {
            __gtulu_debug() << "call glGetBufferParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "data: '" << data << "'";
            glGetBufferParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), data);
            __gtulu_check_error();

          }

          void get_buffer_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int64_t* data) {
            __gtulu_debug() << "call glGetBufferParameteri64v " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "data: '" << data << "'";
            glGetBufferParameteri64v(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), data);
            __gtulu_check_error();

          }

          void get_buffer_pointer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, void** params) {
            __gtulu_debug() << "call glGetBufferPointerv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetBufferPointerv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_buffer_sub_data< >::call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const size, void* data) {
            __gtulu_debug() << "call glGetBufferSubData " "target: '" << target << "'" ", " "offset: '" << offset << "'" ", " "size: '" << size << "'" ", " "data: '" << data << "'";
            glGetBufferSubData(static_cast< std::uint32_t >(target), offset, size, data);
            __gtulu_check_error();

          }

          void get_compressed_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const lod, void* img) {
            __gtulu_debug() << "call glGetCompressedTexImage " "target: '" << target << "'" ", " "lod: '" << lod << "'" ", " "img: '" << img << "'";
            glGetCompressedTexImage(static_cast< std::uint32_t >(target), lod, img);
            __gtulu_check_error();

          }

          void get_double< >::call(gtulu::constant_base const& pname, gtulu::float64_t* params) {
            __gtulu_debug() << "call glGetDoublev " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetDoublev(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          gtulu::uint32_t get_error< >::call() {
            __gtulu_debug() << "call glGetError ";
            gtulu::uint32_t output = glGetError();
            __gtulu_check_error();
            return output;
          }

          void get_float< >::call(gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetFloatv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetFloatv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          gtulu::int32_t get_frag_data_index< >::call(gtulu::uint32_t const program, std::string const& name) {
            __gtulu_debug() << "call glGetFragDataIndex " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetFragDataIndex(program, name.c_str());
            __gtulu_check_error();
            return output;
          }

          gtulu::int32_t get_frag_data_location< >::call(gtulu::uint32_t const program, std::string const& name) {
            __gtulu_debug() << "call glGetFragDataLocation " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetFragDataLocation(program, name.c_str());
            __gtulu_check_error();
            return output;
          }

          void get_framebuffer_attachment_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetFramebufferAttachmentParameteriv " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetFramebufferAttachmentParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_integer< >::call(gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetIntegerv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetIntegerv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_integer< >::call(gtulu::constant_base const& pname, gtulu::int64_t* params) {
            __gtulu_debug() << "call glGetInteger64v " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetInteger64v(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_integer_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::int32_t* data) {
            __gtulu_debug() << "call glGetIntegeri_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetIntegeri_v(static_cast< std::uint32_t >(target), index, data);
            __gtulu_check_error();

          }

          void get_integer_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t const index, gtulu::int64_t* data) {
            __gtulu_debug() << "call glGetInteger64i_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetInteger64i_v(static_cast< std::uint32_t >(target), index, data);
            __gtulu_check_error();

          }

          void get_multisample< >::call(gtulu::constant_base const& pname, gtulu::uint32_t const index, gtulu::float32_t* val) {
            __gtulu_debug() << "call glGetMultisamplefv " "pname: '" << pname << "'" ", " "index: '" << index << "'" ", " "val: '" << val << "'";
            glGetMultisamplefv(static_cast< std::uint32_t >(pname), index, val);
            __gtulu_check_error();

          }

          void get_program< >::call(gtulu::uint32_t const program, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetProgramiv " "program: '" << program << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetProgramiv(program, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_program_info_log< >::call(gtulu::uint32_t const program, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* info_log) {
            __gtulu_debug() << "call glGetProgramInfoLog " "program: '" << program << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "info_log: '" << info_log << "'";
            glGetProgramInfoLog(program, buf_size, length, info_log);
            __gtulu_check_error();

          }

          void get_query< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetQueryiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetQueryObjectiv " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjectiv(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::int64_t* params) {
            __gtulu_debug() << "call glGetQueryObjecti64v " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjecti64v(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetQueryObjectuiv " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjectuiv(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t const id, gtulu::constant_base const& pname, gtulu::uint64_t* params) {
            __gtulu_debug() << "call glGetQueryObjectui64v " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjectui64v(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_renderbuffer_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetRenderbufferParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetRenderbufferParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameterfv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameterfv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameteriv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameteriv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter_integer< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameterIiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameterIiv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter_integer< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameterIuiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameterIuiv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_shader< >::call(gtulu::uint32_t const shader, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetShaderiv " "shader: '" << shader << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetShaderiv(shader, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_shader_info_log< >::call(gtulu::uint32_t const shader, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* info_log) {
            __gtulu_debug() << "call glGetShaderInfoLog " "shader: '" << shader << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "info_log: '" << info_log << "'";
            glGetShaderInfoLog(shader, buf_size, length, info_log);
            __gtulu_check_error();

          }

          void get_shader_source< >::call(gtulu::uint32_t const shader, gtulu::int32_t const buf_size, gtulu::int32_t* length, char* source) {
            __gtulu_debug() << "call glGetShaderSource " "shader: '" << shader << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "source: '" << source << "'";
            glGetShaderSource(shader, buf_size, length, source);
            __gtulu_check_error();

          }

          gtulu::uint8_t const* get_string< >::call(gtulu::constant_base const& name) {
            __gtulu_debug() << "call glGetString " "name: '" << name << "'";
            gtulu::uint8_t const* output = glGetString(static_cast< std::uint32_t >(name));
            __gtulu_check_error();
            return output;
          }

          gtulu::uint8_t const* get_string< >::call(gtulu::constant_base const& name, gtulu::uint32_t const index) {
            __gtulu_debug() << "call glGetStringi " "name: '" << name << "'" ", " "index: '" << index << "'";
            gtulu::uint8_t const* output = glGetStringi(static_cast< std::uint32_t >(name), index);
            __gtulu_check_error();
            return output;
          }

          void get_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& format, gtulu::constant_base const& type, void* img) {
            __gtulu_debug() << "call glGetTexImage " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "img: '" << img << "'";
            glGetTexImage(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), img);
            __gtulu_check_error();

          }

          void get_tex_level_parameter< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetTexLevelParameterfv " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexLevelParameterfv(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_level_parameter< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetTexLevelParameteriv " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexLevelParameteriv(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetTexParameterfv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameterfv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetTexParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetTexParameterIiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameterIiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetTexParameterIuiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameterIuiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_transform_feedback_varying< >::call(gtulu::uint32_t const program, gtulu::uint32_t const index, gtulu::int32_t const buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name) {
            __gtulu_debug() << "call glGetTransformFeedbackVarying " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "name: '" << name << "'";
            glGetTransformFeedbackVarying(program, index, buf_size, length, size, type, name);
            __gtulu_check_error();

          }

          void get_uniform< >::call(gtulu::uint32_t const program, gtulu::int32_t const location, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetUniformfv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformfv(program, location, params);
            __gtulu_check_error();

          }

          void get_uniform< >::call(gtulu::uint32_t const program, gtulu::int32_t const location, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetUniformiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformiv(program, location, params);
            __gtulu_check_error();

          }

          void get_uniform< >::call(gtulu::uint32_t const program, gtulu::int32_t const location, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetUniformuiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformuiv(program, location, params);
            __gtulu_check_error();

          }

          gtulu::uint32_t get_uniform_block_index< >::call(gtulu::uint32_t const program, std::string const& uniform_block_name) {
            __gtulu_debug() << "call glGetUniformBlockIndex " "program: '" << program << "'" ", " "uniform_block_name: '" << uniform_block_name << "'";
            gtulu::uint32_t output = glGetUniformBlockIndex(program, uniform_block_name.c_str());
            __gtulu_check_error();
            return output;
          }

          void get_uniform_indices< >::call(gtulu::uint32_t const program, gtulu::int32_t const uniform_count, char const** uniform_names, gtulu::uint32_t* uniform_indices) {
            __gtulu_debug() << "call glGetUniformIndices " "program: '" << program << "'" ", " "uniform_count: '" << uniform_count << "'" ", " "uniform_names: '" << uniform_names << "'" ", " "uniform_indices: '" << uniform_indices << "'";
            glGetUniformIndices(program, uniform_count, uniform_names, uniform_indices);
            __gtulu_check_error();

          }

          gtulu::int32_t get_uniform_location< >::call(gtulu::uint32_t const program, std::string const& name) {
            __gtulu_debug() << "call glGetUniformLocation " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetUniformLocation(program, name.c_str());
            __gtulu_check_error();
            return output;
          }

          void get_vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribfv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribfv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::float64_t* params) {
            __gtulu_debug() << "call glGetVertexAttribdv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribdv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribiv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribiv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribIiv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribIiv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribIuiv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribIuiv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib_pointer< >::call(gtulu::uint32_t const index, gtulu::constant_base const& pname, void** pointer) {
            __gtulu_debug() << "call glGetVertexAttribPointerv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "pointer: '" << pointer << "'";
            glGetVertexAttribPointerv(index, static_cast< std::uint32_t >(pname), pointer);
            __gtulu_check_error();

          }

          void hint< >::call(gtulu::constant_base const& target, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glHint " "target: '" << target << "'" ", " "mode: '" << mode << "'";
            glHint(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          bool is_buffer< >::call(gtulu::uint32_t const buffer) {
            __gtulu_debug() << "call glIsBuffer " "buffer: '" << buffer << "'";
            bool output = glIsBuffer(buffer);
            __gtulu_check_error();
            return output;
          }

          bool is_enabled< >::call(gtulu::constant_base const& cap) {
            __gtulu_debug() << "call glIsEnabled " "cap: '" << cap << "'";
            bool output = glIsEnabled(static_cast< std::uint32_t >(cap));
            __gtulu_check_error();
            return output;
          }

          bool is_enabled< >::call(gtulu::constant_base const& cap, gtulu::uint32_t const index) {
            __gtulu_debug() << "call glIsEnabledi " "cap: '" << cap << "'" ", " "index: '" << index << "'";
            bool output = glIsEnabledi(static_cast< std::uint32_t >(cap), index);
            __gtulu_check_error();
            return output;
          }

          bool is_framebuffer< >::call(gtulu::uint32_t const framebuffer) {
            __gtulu_debug() << "call glIsFramebuffer " "framebuffer: '" << framebuffer << "'";
            bool output = glIsFramebuffer(framebuffer);
            __gtulu_check_error();
            return output;
          }

          bool is_program< >::call(gtulu::uint32_t const program) {
            __gtulu_debug() << "call glIsProgram " "program: '" << program << "'";
            bool output = glIsProgram(program);
            __gtulu_check_error();
            return output;
          }

          bool is_query< >::call(gtulu::uint32_t const id) {
            __gtulu_debug() << "call glIsQuery " "id: '" << id << "'";
            bool output = glIsQuery(id);
            __gtulu_check_error();
            return output;
          }

          bool is_renderbuffer< >::call(gtulu::uint32_t const renderbuffer) {
            __gtulu_debug() << "call glIsRenderbuffer " "renderbuffer: '" << renderbuffer << "'";
            bool output = glIsRenderbuffer(renderbuffer);
            __gtulu_check_error();
            return output;
          }

          bool is_sampler< >::call(gtulu::uint32_t const sampler) {
            __gtulu_debug() << "call glIsSampler " "sampler: '" << sampler << "'";
            bool output = glIsSampler(sampler);
            __gtulu_check_error();
            return output;
          }

          bool is_shader< >::call(gtulu::uint32_t const shader) {
            __gtulu_debug() << "call glIsShader " "shader: '" << shader << "'";
            bool output = glIsShader(shader);
            __gtulu_check_error();
            return output;
          }

          bool is_texture< >::call(gtulu::uint32_t const texture) {
            __gtulu_debug() << "call glIsTexture " "texture: '" << texture << "'";
            bool output = glIsTexture(texture);
            __gtulu_check_error();
            return output;
          }

          bool is_vertex_array< >::call(gtulu::uint32_t const array) {
            __gtulu_debug() << "call glIsVertexArray " "array: '" << array << "'";
            bool output = glIsVertexArray(array);
            __gtulu_check_error();
            return output;
          }

          void line_width< >::call(gtulu::float32_t const width) {
            __gtulu_debug() << "call glLineWidth " "width: '" << width << "'";
            glLineWidth(width);
            __gtulu_check_error();

          }

          void link_program< >::call(gtulu::uint32_t const program) {
            __gtulu_debug() << "call glLinkProgram " "program: '" << program << "'";
            glLinkProgram(program);
            __gtulu_check_error();

          }

          void logic_op< >::call(gtulu::constant_base const& opcode) {
            __gtulu_debug() << "call glLogicOp " "opcode: '" << opcode << "'";
            glLogicOp(static_cast< std::uint32_t >(opcode));
            __gtulu_check_error();

          }

          void* map_buffer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& access) {
            __gtulu_debug() << "call glMapBuffer " "target: '" << target << "'" ", " "access: '" << access << "'";
            void* output = glMapBuffer(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(access));
            __gtulu_check_error();
            return output;
          }

          void* map_buffer_range< >::call(gtulu::constant_base const& target, gtulu::int64_t const offset, gtulu::int64_t const length, gtulu::uint32_t const access) {
            __gtulu_debug() << "call glMapBufferRange " "target: '" << target << "'" ", " "offset: '" << offset << "'" ", " "length: '" << length << "'" ", " "access: '" << access << "'";
            void* output = glMapBufferRange(static_cast< std::uint32_t >(target), offset, length, access);
            __gtulu_check_error();
            return output;
          }

          void multi_draw_arrays< >::call(gtulu::constant_base const& mode, gtulu::int32_t const* first, gtulu::int32_t const* count, gtulu::int32_t const drawcount) {
            __gtulu_debug() << "call glMultiDrawArrays " "mode: '" << mode << "'" ", " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "drawcount: '" << drawcount << "'";
            glMultiDrawArrays(static_cast< std::uint32_t >(mode), first, count, drawcount);
            __gtulu_check_error();

          }

          void multi_draw_elements< >::call(gtulu::constant_base const& mode, gtulu::int32_t const* count, gtulu::constant_base const& type, void const* const* indices, gtulu::int32_t const drawcount) {
            __gtulu_debug() << "call glMultiDrawElements " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "drawcount: '" << drawcount << "'";
            glMultiDrawElements(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, drawcount);
            __gtulu_check_error();

          }

          void multi_draw_elements_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::int32_t const* count, gtulu::constant_base const& type, void const* const* indices, gtulu::int32_t const drawcount, gtulu::int32_t const* basevertex) {
            __gtulu_debug() << "call glMultiDrawElementsBaseVertex " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "drawcount: '" << drawcount << "'" ", " "basevertex: '" << basevertex << "'";
            glMultiDrawElementsBaseVertex(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, drawcount, basevertex);
            __gtulu_check_error();

          }

          void pixel_store< >::call(gtulu::constant_base const& pname, gtulu::float32_t const param) {
            __gtulu_debug() << "call glPixelStoref " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPixelStoref(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void pixel_store< >::call(gtulu::constant_base const& pname, gtulu::int32_t const param) {
            __gtulu_debug() << "call glPixelStorei " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPixelStorei(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::float32_t const param) {
            __gtulu_debug() << "call glPointParameterf " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPointParameterf(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::float32_t const* params) {
            __gtulu_debug() << "call glPointParameterfv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glPointParameterfv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::int32_t const param) {
            __gtulu_debug() << "call glPointParameteri " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPointParameteri(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glPointParameteriv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glPointParameteriv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void point_size< >::call(gtulu::float32_t const size) {
            __gtulu_debug() << "call glPointSize " "size: '" << size << "'";
            glPointSize(size);
            __gtulu_check_error();

          }

          void polygon_mode< >::call(gtulu::constant_base const& face, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glPolygonMode " "face: '" << face << "'" ", " "mode: '" << mode << "'";
            glPolygonMode(static_cast< std::uint32_t >(face), static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void polygon_offset< >::call(gtulu::float32_t const factor, gtulu::float32_t const units) {
            __gtulu_debug() << "call glPolygonOffset " "factor: '" << factor << "'" ", " "units: '" << units << "'";
            glPolygonOffset(factor, units);
            __gtulu_check_error();

          }

          void primitive_restart_index< >::call(gtulu::uint32_t const index) {
            __gtulu_debug() << "call glPrimitiveRestartIndex " "index: '" << index << "'";
            glPrimitiveRestartIndex(index);
            __gtulu_check_error();

          }

          void provoking_vertex< >::call(gtulu::constant_base const& provoke_mode) {
            __gtulu_debug() << "call glProvokingVertex " "provoke_mode: '" << provoke_mode << "'";
            glProvokingVertex(static_cast< std::uint32_t >(provoke_mode));
            __gtulu_check_error();

          }

          void query_counter< >::call(gtulu::uint32_t const id, gtulu::constant_base const& target) {
            __gtulu_debug() << "call glQueryCounter " "id: '" << id << "'" ", " "target: '" << target << "'";
            glQueryCounter(id, static_cast< std::uint32_t >(target));
            __gtulu_check_error();

          }

          void read_buffer< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glReadBuffer " "mode: '" << mode << "'";
            glReadBuffer(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void read_pixels< >::call(gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::constant_base const& format, gtulu::constant_base const& type, void* data) {
            __gtulu_debug() << "call glReadPixels " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "data: '" << data << "'";
            glReadPixels(x, y, width, height, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), data);
            __gtulu_check_error();

          }

          void renderbuffer_storage< >::call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height) {
            __gtulu_debug() << "call glRenderbufferStorage " "target: '" << target << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glRenderbufferStorage(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(internalformat), width, height);
            __gtulu_check_error();

          }

          void renderbuffer_storage_multisample< >::call(gtulu::constant_base const& target, gtulu::int32_t const samples, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height) {
            __gtulu_debug() << "call glRenderbufferStorageMultisample " "target: '" << target << "'" ", " "samples: '" << samples << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glRenderbufferStorageMultisample(static_cast< std::uint32_t >(target), samples, static_cast< std::uint32_t >(internalformat), width, height);
            __gtulu_check_error();

          }

          void sample_coverage< >::call(gtulu::float32_t const value, bool const invert) {
            __gtulu_debug() << "call glSampleCoverage " "value: '" << value << "'" ", " "invert: '" << invert << "'";
            glSampleCoverage(value, invert);
            __gtulu_check_error();

          }

          void sample_mask< >::call(gtulu::uint32_t const mask_number, gtulu::uint32_t const mask) {
            __gtulu_debug() << "call glSampleMaski " "mask_number: '" << mask_number << "'" ", " "mask: '" << mask << "'";
            glSampleMaski(mask_number, mask);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::float32_t const param) {
            __gtulu_debug() << "call glSamplerParameterf " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameterf(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::float32_t const* params) {
            __gtulu_debug() << "call glSamplerParameterfv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glSamplerParameterfv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t const param) {
            __gtulu_debug() << "call glSamplerParameteri " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameteri(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glSamplerParameteriv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glSamplerParameteriv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void sampler_parameter_integer< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glSamplerParameterIiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glSamplerParameterIiv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void sampler_parameter_integer< >::call(gtulu::uint32_t const sampler, gtulu::constant_base const& pname, gtulu::uint32_t const* params) {
            __gtulu_debug() << "call glSamplerParameterIuiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glSamplerParameterIuiv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void scissor< >::call(gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height) {
            __gtulu_debug() << "call glScissor " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glScissor(x, y, width, height);
            __gtulu_check_error();

          }

          void shader_source< >::call(gtulu::uint32_t const shader, gtulu::int32_t const count, char const* const* string, gtulu::int32_t const* length) {
            __gtulu_debug() << "call glShaderSource " "shader: '" << shader << "'" ", " "count: '" << count << "'" ", " "string: '" << string << "'" ", " "length: '" << length << "'";
            glShaderSource(shader, count, string, length);
            __gtulu_check_error();

          }

          void stencil_func< >::call(gtulu::constant_base const& func, gtulu::int32_t const ref, gtulu::uint32_t const mask) {
            __gtulu_debug() << "call glStencilFunc " "func: '" << func << "'" ", " "ref: '" << ref << "'" ", " "mask: '" << mask << "'";
            glStencilFunc(static_cast< std::uint32_t >(func), ref, mask);
            __gtulu_check_error();

          }

          void stencil_func_separate< >::call(gtulu::constant_base const& face, gtulu::constant_base const& func, gtulu::int32_t const ref, gtulu::uint32_t const mask) {
            __gtulu_debug() << "call glStencilFuncSeparate " "face: '" << face << "'" ", " "func: '" << func << "'" ", " "ref: '" << ref << "'" ", " "mask: '" << mask << "'";
            glStencilFuncSeparate(static_cast< std::uint32_t >(face), static_cast< std::uint32_t >(func), ref, mask);
            __gtulu_check_error();

          }

          void stencil_mask< >::call(gtulu::uint32_t const mask) {
            __gtulu_debug() << "call glStencilMask " "mask: '" << mask << "'";
            glStencilMask(mask);
            __gtulu_check_error();

          }

          void stencil_mask_separate< >::call(gtulu::constant_base const& face, gtulu::uint32_t const mask) {
            __gtulu_debug() << "call glStencilMaskSeparate " "face: '" << face << "'" ", " "mask: '" << mask << "'";
            glStencilMaskSeparate(static_cast< std::uint32_t >(face), mask);
            __gtulu_check_error();

          }

          void stencil_op< >::call(gtulu::constant_base const& sfail, gtulu::constant_base const& dpfail, gtulu::constant_base const& dppass) {
            __gtulu_debug() << "call glStencilOp " "sfail: '" << sfail << "'" ", " "dpfail: '" << dpfail << "'" ", " "dppass: '" << dppass << "'";
            glStencilOp(static_cast< std::uint32_t >(sfail), static_cast< std::uint32_t >(dpfail), static_cast< std::uint32_t >(dppass));
            __gtulu_check_error();

          }

          void stencil_op_separate< >::call(gtulu::constant_base const& face, gtulu::constant_base const& sfail, gtulu::constant_base const& dpfail, gtulu::constant_base const& dppass) {
            __gtulu_debug() << "call glStencilOpSeparate " "face: '" << face << "'" ", " "sfail: '" << sfail << "'" ", " "dpfail: '" << dpfail << "'" ", " "dppass: '" << dppass << "'";
            glStencilOpSeparate(static_cast< std::uint32_t >(face), static_cast< std::uint32_t >(sfail), static_cast< std::uint32_t >(dpfail), static_cast< std::uint32_t >(dppass));
            __gtulu_check_error();

          }

          void tex_buffer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::uint32_t const buffer) {
            __gtulu_debug() << "call glTexBuffer " "target: '" << target << "'" ", " "internalformat: '" << internalformat << "'" ", " "buffer: '" << buffer << "'";
            glTexBuffer(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(internalformat), buffer);
            __gtulu_check_error();

          }

          void tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data) {
            __gtulu_debug() << "call glTexImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "border: '" << border << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "data: '" << data << "'";
            glTexImage1D(static_cast< std::uint32_t >(target), level, static_cast< std::int32_t >(internalformat), width, border, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), data);
            __gtulu_check_error();

          }

          void tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data) {
            __gtulu_debug() << "call glTexImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "border: '" << border << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "data: '" << data << "'";
            glTexImage2D(static_cast< std::uint32_t >(target), level, static_cast< std::int32_t >(internalformat), width, height, border, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), data);
            __gtulu_check_error();

          }

          void tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::int32_t const border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data) {
            __gtulu_debug() << "call glTexImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "border: '" << border << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "data: '" << data << "'";
            glTexImage3D(static_cast< std::uint32_t >(target), level, static_cast< std::int32_t >(internalformat), width, height, depth, border, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), data);
            __gtulu_check_error();

          }

          void tex_image_multisample< >::call(gtulu::constant_base const& target, gtulu::int32_t const samples, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, bool const fixedsamplelocations) {
            __gtulu_debug() << "call glTexImage2DMultisample " "target: '" << target << "'" ", " "samples: '" << samples << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations << "'";
            glTexImage2DMultisample(static_cast< std::uint32_t >(target), samples, static_cast< std::int32_t >(internalformat), width, height, fixedsamplelocations);
            __gtulu_check_error();

          }

          void tex_image_multisample< >::call(gtulu::constant_base const& target, gtulu::int32_t const samples, gtulu::constant_base const& internalformat, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, bool const fixedsamplelocations) {
            __gtulu_debug() << "call glTexImage3DMultisample " "target: '" << target << "'" ", " "samples: '" << samples << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations << "'";
            glTexImage3DMultisample(static_cast< std::uint32_t >(target), samples, static_cast< std::int32_t >(internalformat), width, height, depth, fixedsamplelocations);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t const param) {
            __gtulu_debug() << "call glTexParameterf " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glTexParameterf(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t const* params) {
            __gtulu_debug() << "call glTexParameterfv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameterfv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const param) {
            __gtulu_debug() << "call glTexParameteri " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glTexParameteri(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glTexParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glTexParameterIiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameterIiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::uint32_t const* params) {
            __gtulu_debug() << "call glTexParameterIuiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameterIuiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const width, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data) {
            __gtulu_debug() << "call glTexSubImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "width: '" << width << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "data: '" << data << "'";
            glTexSubImage1D(static_cast< std::uint32_t >(target), level, xoffset, width, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), data);
            __gtulu_check_error();

          }

          void tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data) {
            __gtulu_debug() << "call glTexSubImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "data: '" << data << "'";
            glTexSubImage2D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, width, height, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), data);
            __gtulu_check_error();

          }

          void tex_sub_image< >::call(gtulu::constant_base const& target, gtulu::int32_t const level, gtulu::int32_t const xoffset, gtulu::int32_t const yoffset, gtulu::int32_t const zoffset, gtulu::int32_t const width, gtulu::int32_t const height, gtulu::int32_t const depth, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* data) {
            __gtulu_debug() << "call glTexSubImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "zoffset: '" << zoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "data: '" << data << "'";
            glTexSubImage3D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), data);
            __gtulu_check_error();

          }

          void transform_feedback_varyings< >::call(gtulu::uint32_t const program, gtulu::int32_t const count, char const* const* varyings, gtulu::constant_base const& buffer_mode) {
            __gtulu_debug() << "call glTransformFeedbackVaryings " "program: '" << program << "'" ", " "count: '" << count << "'" ", " "varyings: '" << varyings << "'" ", " "buffer_mode: '" << buffer_mode << "'";
            glTransformFeedbackVaryings(program, count, varyings, static_cast< std::uint32_t >(buffer_mode));
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::float32_t const v_0) {
            __gtulu_debug() << "call glUniform1f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glUniform1f(location, v_0);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::float32_t const v_0, gtulu::float32_t const v_1) {
            __gtulu_debug() << "call glUniform2f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glUniform2f(location, v_0, v_1);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::float32_t const v_0, gtulu::float32_t const v_1, gtulu::float32_t const v_2) {
            __gtulu_debug() << "call glUniform3f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glUniform3f(location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::float32_t const v_0, gtulu::float32_t const v_1, gtulu::float32_t const v_2, gtulu::float32_t const v_3) {
            __gtulu_debug() << "call glUniform4f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glUniform4f(location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::int32_t const v_0) {
            __gtulu_debug() << "call glUniform1i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glUniform1i(location, v_0);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::int32_t const v_0, gtulu::int32_t const v_1) {
            __gtulu_debug() << "call glUniform2i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glUniform2i(location, v_0, v_1);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::int32_t const v_0, gtulu::int32_t const v_1, gtulu::int32_t const v_2) {
            __gtulu_debug() << "call glUniform3i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glUniform3i(location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::int32_t const v_0, gtulu::int32_t const v_1, gtulu::int32_t const v_2, gtulu::int32_t const v_3) {
            __gtulu_debug() << "call glUniform4i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glUniform4i(location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::uint32_t const v_0) {
            __gtulu_debug() << "call glUniform1ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glUniform1ui(location, v_0);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::uint32_t const v_0, gtulu::uint32_t const v_1) {
            __gtulu_debug() << "call glUniform2ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glUniform2ui(location, v_0, v_1);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::uint32_t const v_0, gtulu::uint32_t const v_1, gtulu::uint32_t const v_2) {
            __gtulu_debug() << "call glUniform3ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glUniform3ui(location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, gtulu::uint32_t const v_0, gtulu::uint32_t const v_1, gtulu::uint32_t const v_2, gtulu::uint32_t const v_3) {
            __gtulu_debug() << "call glUniform4ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glUniform4ui(location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat2x2< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix2fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix2fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat2x3< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix2x3fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix2x3fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat2x4< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix2x4fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix2x4fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat3x2< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix3x2fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix3x2fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat3x3< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix3fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix3fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat3x4< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix3x4fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix3x4fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat4x2< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix4x2fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix4x2fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat4x3< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix4x3fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix4x3fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::mat4x4< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniformMatrix4fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "transpose: '" << false << "'" ", " "values: '" << values << "'";
            glUniformMatrix4fv(location, values.size(), false, values.data()->data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec1< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniform1fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform1fv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec1< gtulu::int32_t > > const& values) {
            __gtulu_debug() << "call glUniform1iv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform1iv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec1< gtulu::uint32_t > > const& values) {
            __gtulu_debug() << "call glUniform1uiv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform1uiv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec2< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniform2fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform2fv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec2< gtulu::int32_t > > const& values) {
            __gtulu_debug() << "call glUniform2iv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform2iv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec2< gtulu::uint32_t > > const& values) {
            __gtulu_debug() << "call glUniform2uiv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform2uiv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec3< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniform3fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform3fv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec3< gtulu::int32_t > > const& values) {
            __gtulu_debug() << "call glUniform3iv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform3iv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec3< gtulu::uint32_t > > const& values) {
            __gtulu_debug() << "call glUniform3uiv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform3uiv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec4< gtulu::float32_t > > const& values) {
            __gtulu_debug() << "call glUniform4fv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform4fv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec4< gtulu::int32_t > > const& values) {
            __gtulu_debug() << "call glUniform4iv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform4iv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform< >::call(gtulu::int32_t const location, std::vector< gtulu::vec4< gtulu::uint32_t > > const& values) {
            __gtulu_debug() << "call glUniform4uiv " "location: '" << location << "'" ", " "count: '" << values.size() << "'" ", " "values: '" << values << "'";
            glUniform4uiv(location, values.size(), values.data()->data());
            __gtulu_check_error();

          }

          void uniform_block_binding< >::call(gtulu::uint32_t const program, gtulu::uint32_t const uniform_block_index, gtulu::uint32_t const uniform_block_binding) {
            __gtulu_debug() << "call glUniformBlockBinding " "program: '" << program << "'" ", " "uniform_block_index: '" << uniform_block_index << "'" ", " "uniform_block_binding: '" << uniform_block_binding << "'";
            glUniformBlockBinding(program, uniform_block_index, uniform_block_binding);
            __gtulu_check_error();

          }

          bool unmap_buffer< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glUnmapBuffer " "target: '" << target << "'";
            bool output = glUnmapBuffer(static_cast< std::uint32_t >(target));
            __gtulu_check_error();
            return output;
          }

          void use_program< >::call(gtulu::uint32_t const program) {
            __gtulu_debug() << "call glUseProgram " "program: '" << program << "'";
            glUseProgram(program);
            __gtulu_check_error();

          }

          void validate_program< >::call(gtulu::uint32_t const program) {
            __gtulu_debug() << "call glValidateProgram " "program: '" << program << "'";
            glValidateProgram(program);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float32_t const x) {
            __gtulu_debug() << "call glVertexAttrib1f " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttrib1f(index, x);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float32_t const x, gtulu::float32_t const y) {
            __gtulu_debug() << "call glVertexAttrib2f " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttrib2f(index, x, y);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float32_t const x, gtulu::float32_t const y, gtulu::float32_t const z) {
            __gtulu_debug() << "call glVertexAttrib3f " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttrib3f(index, x, y, z);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float32_t const x, gtulu::float32_t const y, gtulu::float32_t const z, gtulu::float32_t const w) {
            __gtulu_debug() << "call glVertexAttrib4f " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4f(index, x, y, z, w);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float64_t const x) {
            __gtulu_debug() << "call glVertexAttrib1d " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttrib1d(index, x);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float64_t const x, gtulu::float64_t const y) {
            __gtulu_debug() << "call glVertexAttrib2d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttrib2d(index, x, y);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float64_t const x, gtulu::float64_t const y, gtulu::float64_t const z) {
            __gtulu_debug() << "call glVertexAttrib3d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttrib3d(index, x, y, z);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::float64_t const x, gtulu::float64_t const y, gtulu::float64_t const z, gtulu::float64_t const w) {
            __gtulu_debug() << "call glVertexAttrib4d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4d(index, x, y, z, w);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::int16_t const x) {
            __gtulu_debug() << "call glVertexAttrib1s " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttrib1s(index, x);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::int16_t const x, gtulu::int16_t const y) {
            __gtulu_debug() << "call glVertexAttrib2s " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttrib2s(index, x, y);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::int16_t const x, gtulu::int16_t const y, gtulu::int16_t const z) {
            __gtulu_debug() << "call glVertexAttrib3s " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttrib3s(index, x, y, z);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::int16_t const x, gtulu::int16_t const y, gtulu::int16_t const z, gtulu::int16_t const w) {
            __gtulu_debug() << "call glVertexAttrib4s " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4s(index, x, y, z, w);
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec1< gtulu::float32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib1fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib1fv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec1< gtulu::float64_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib1dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib1dv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec1< gtulu::int16_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib1sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib1sv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec2< gtulu::float32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib2fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib2fv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec2< gtulu::float64_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib2dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib2dv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec2< gtulu::int16_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib2sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib2sv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec3< gtulu::float32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib3fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib3fv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec3< gtulu::float64_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib3dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib3dv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec3< gtulu::int16_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib3sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib3sv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::float32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4fv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::float64_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4dv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int16_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4sv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4iv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int8_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4bv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4bv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint16_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4usv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4usv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4uiv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint8_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4ubv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4ubv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_divisor< >::call(gtulu::uint32_t const index, gtulu::uint32_t const divisor) {
            __gtulu_debug() << "call glVertexAttribDivisor " "index: '" << index << "'" ", " "divisor: '" << divisor << "'";
            glVertexAttribDivisor(index, divisor);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::int32_t const x) {
            __gtulu_debug() << "call glVertexAttribI1i " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttribI1i(index, x);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::int32_t const x, gtulu::int32_t const y) {
            __gtulu_debug() << "call glVertexAttribI2i " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttribI2i(index, x, y);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const z) {
            __gtulu_debug() << "call glVertexAttribI3i " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttribI3i(index, x, y, z);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const z, gtulu::int32_t const w) {
            __gtulu_debug() << "call glVertexAttribI4i " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttribI4i(index, x, y, z, w);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::uint32_t const x) {
            __gtulu_debug() << "call glVertexAttribI1ui " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttribI1ui(index, x);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::uint32_t const x, gtulu::uint32_t const y) {
            __gtulu_debug() << "call glVertexAttribI2ui " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttribI2ui(index, x, y);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::uint32_t const x, gtulu::uint32_t const y, gtulu::uint32_t const z) {
            __gtulu_debug() << "call glVertexAttribI3ui " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttribI3ui(index, x, y, z);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::uint32_t const x, gtulu::uint32_t const y, gtulu::uint32_t const z, gtulu::uint32_t const w) {
            __gtulu_debug() << "call glVertexAttribI4ui " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttribI4ui(index, x, y, z, w);
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec1< gtulu::int32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI1iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI1iv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec1< gtulu::uint32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI1uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI1uiv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec2< gtulu::int32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI2iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI2iv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec2< gtulu::uint32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI2uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI2uiv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec3< gtulu::int32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI3iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI3iv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec3< gtulu::uint32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI3uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI3uiv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int16_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI4sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4sv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI4iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4iv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int8_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI4bv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4bv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint16_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI4usv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4usv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint32_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI4uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4uiv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_integer< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint8_t > const& v) {
            __gtulu_debug() << "call glVertexAttribI4ubv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4ubv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_normalized< >::call(gtulu::uint32_t const index, gtulu::uint8_t const x, gtulu::uint8_t const y, gtulu::uint8_t const z, gtulu::uint8_t const w) {
            __gtulu_debug() << "call glVertexAttrib4Nub " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4Nub(index, x, y, z, w);
            __gtulu_check_error();

          }

          void vertex_attrib_normalized< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int16_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4Nsv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nsv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_normalized< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4Niv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Niv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_normalized< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::int8_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4Nbv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nbv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_normalized< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint16_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4Nusv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nusv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_normalized< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint32_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4Nuiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nuiv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_normalized< >::call(gtulu::uint32_t const index, gtulu::vec4< gtulu::uint8_t > const& v) {
            __gtulu_debug() << "call glVertexAttrib4Nubv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nubv(index, v.data());
            __gtulu_check_error();

          }

          void vertex_attrib_pointer< >::call(gtulu::uint32_t const index, gtulu::int32_t const size, gtulu::constant_base const& type, bool const normalized, gtulu::int32_t const stride, void const* pointer) {
            __gtulu_debug() << "call glVertexAttribPointer " "index: '" << index << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "stride: '" << stride << "'" ", " "pointer: '" << pointer << "'";
            glVertexAttribPointer(index, size, static_cast< std::uint32_t >(type), normalized, stride, pointer);
            __gtulu_check_error();

          }

          void vertex_attrib_pointer_integer< >::call(gtulu::uint32_t const index, gtulu::int32_t const size, gtulu::constant_base const& type, gtulu::int32_t const stride, void const* pointer) {
            __gtulu_debug() << "call glVertexAttribIPointer " "index: '" << index << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "stride: '" << stride << "'" ", " "pointer: '" << pointer << "'";
            glVertexAttribIPointer(index, size, static_cast< std::uint32_t >(type), stride, pointer);
            __gtulu_check_error();

          }

          void viewport< >::call(gtulu::int32_t const x, gtulu::int32_t const y, gtulu::int32_t const width, gtulu::int32_t const height) {
            __gtulu_debug() << "call glViewport " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glViewport(x, y, width, height);
            __gtulu_check_error();

          }

        }
      }

    }
  }
}
