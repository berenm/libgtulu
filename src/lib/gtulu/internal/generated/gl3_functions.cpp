#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/functions.hpp"

namespace gtulu {
  namespace internal {
    namespace generated {

      namespace gl3 {
        namespace function {

          void active_shader_program< >::call(gtulu::uint32_t pipeline, gtulu::uint32_t program) {
            __gtulu_debug() << "call glActiveShaderProgram " "pipeline: '" << pipeline << "'" ", " "program: '" << program << "'";
            glActiveShaderProgram(pipeline, program);
            __gtulu_check_error();

          }

          void active_texture< >::call(gtulu::constant_base const& texture) {
            __gtulu_debug() << "call glActiveTexture " "texture: '" << texture << "'";
            glActiveTexture(static_cast< std::uint32_t >(texture));
            __gtulu_check_error();

          }

          void attach_shader< >::call(gtulu::uint32_t program, gtulu::uint32_t shader) {
            __gtulu_debug() << "call glAttachShader " "program: '" << program << "'" ", " "shader: '" << shader << "'";
            glAttachShader(program, shader);
            __gtulu_check_error();

          }

          void begin_conditional_render< >::call(gtulu::uint32_t id, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glBeginConditionalRender " "id: '" << id << "'" ", " "mode: '" << mode << "'";
            glBeginConditionalRender(id, static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void begin_query< >::call(gtulu::constant_base const& target, gtulu::uint32_t id) {
            __gtulu_debug() << "call glBeginQuery " "target: '" << target << "'" ", " "id: '" << id << "'";
            glBeginQuery(static_cast< std::uint32_t >(target), id);
            __gtulu_check_error();

          }

          void begin_query_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::uint32_t id) {
            __gtulu_debug() << "call glBeginQueryIndexed " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "id: '" << id << "'";
            glBeginQueryIndexed(static_cast< std::uint32_t >(target), index, id);
            __gtulu_check_error();

          }

          void begin_transform_feedback< >::call(gtulu::constant_base const& primitive_mode) {
            __gtulu_debug() << "call glBeginTransformFeedback " "primitive_mode: '" << primitive_mode << "'";
            glBeginTransformFeedback(static_cast< std::uint32_t >(primitive_mode));
            __gtulu_check_error();

          }

          void bind_attrib_location< >::call(gtulu::uint32_t program, gtulu::uint32_t index, char const* name) {
            __gtulu_debug() << "call glBindAttribLocation " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "name: '" << name << "'";
            glBindAttribLocation(program, index, name);
            __gtulu_check_error();

          }

          void bind_buffer< >::call(gtulu::constant_base const& target, gtulu::uint32_t buffer) {
            __gtulu_debug() << "call glBindBuffer " "target: '" << target << "'" ", " "buffer: '" << buffer << "'";
            glBindBuffer(static_cast< std::uint32_t >(target), buffer);
            __gtulu_check_error();

          }

          void bind_buffer_base< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::uint32_t buffer) {
            __gtulu_debug() << "call glBindBufferBase " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "buffer: '" << buffer << "'";
            glBindBufferBase(static_cast< std::uint32_t >(target), index, buffer);
            __gtulu_check_error();

          }

          void bind_buffer_range< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::uint32_t buffer, gtulu::int64_t offset, gtulu::int64_t size) {
            __gtulu_debug() << "call glBindBufferRange " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "buffer: '" << buffer << "'" ", " "offset: '" << offset << "'" ", " "size: '" << size << "'";
            glBindBufferRange(static_cast< std::uint32_t >(target), index, buffer, offset, size);
            __gtulu_check_error();

          }

          void bind_frag_data_location< >::call(gtulu::uint32_t program, gtulu::uint32_t color, char const* name) {
            __gtulu_debug() << "call glBindFragDataLocation " "program: '" << program << "'" ", " "color: '" << color << "'" ", " "name: '" << name << "'";
            glBindFragDataLocation(program, color, name);
            __gtulu_check_error();

          }

          void bind_frag_data_location_indexed< >::call(gtulu::uint32_t program, gtulu::uint32_t color_number, gtulu::uint32_t index, char const* name) {
            __gtulu_debug() << "call glBindFragDataLocationIndexed " "program: '" << program << "'" ", " "color_number: '" << color_number << "'" ", " "index: '" << index << "'" ", " "name: '" << name << "'";
            glBindFragDataLocationIndexed(program, color_number, index, name);
            __gtulu_check_error();

          }

          void bind_framebuffer< >::call(gtulu::constant_base const& target, gtulu::uint32_t framebuffer) {
            __gtulu_debug() << "call glBindFramebuffer " "target: '" << target << "'" ", " "framebuffer: '" << framebuffer << "'";
            glBindFramebuffer(static_cast< std::uint32_t >(target), framebuffer);
            __gtulu_check_error();

          }

          void bind_image_texture< >::call(gtulu::uint32_t unit, gtulu::uint32_t texture, gtulu::int32_t level, bool layered, gtulu::int32_t layer, gtulu::constant_base const& access, gtulu::constant_base const& format) {
            __gtulu_debug() << "call glBindImageTexture " "unit: '" << unit << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'" ", " "layered: '" << layered << "'" ", " "layer: '" << layer << "'" ", " "access: '" << access << "'" ", " "format: '" << format << "'";
            glBindImageTexture(unit, texture, level, layered, layer, static_cast< std::uint32_t >(access), static_cast< std::uint32_t >(format));
            __gtulu_check_error();

          }

          void bind_program_pipeline< >::call(gtulu::uint32_t pipeline) {
            __gtulu_debug() << "call glBindProgramPipeline " "pipeline: '" << pipeline << "'";
            glBindProgramPipeline(pipeline);
            __gtulu_check_error();

          }

          void bind_renderbuffer< >::call(gtulu::constant_base const& target, gtulu::uint32_t renderbuffer) {
            __gtulu_debug() << "call glBindRenderbuffer " "target: '" << target << "'" ", " "renderbuffer: '" << renderbuffer << "'";
            glBindRenderbuffer(static_cast< std::uint32_t >(target), renderbuffer);
            __gtulu_check_error();

          }

          void bind_sampler< >::call(gtulu::uint32_t unit, gtulu::uint32_t sampler) {
            __gtulu_debug() << "call glBindSampler " "unit: '" << unit << "'" ", " "sampler: '" << sampler << "'";
            glBindSampler(unit, sampler);
            __gtulu_check_error();

          }

          void bind_texture< >::call(gtulu::constant_base const& target, gtulu::uint32_t texture) {
            __gtulu_debug() << "call glBindTexture " "target: '" << target << "'" ", " "texture: '" << texture << "'";
            glBindTexture(static_cast< std::uint32_t >(target), texture);
            __gtulu_check_error();

          }

          void bind_transform_feedback< >::call(gtulu::constant_base const& target, gtulu::uint32_t id) {
            __gtulu_debug() << "call glBindTransformFeedback " "target: '" << target << "'" ", " "id: '" << id << "'";
            glBindTransformFeedback(static_cast< std::uint32_t >(target), id);
            __gtulu_check_error();

          }

          void bind_vertex_array< >::call(gtulu::uint32_t array) {
            __gtulu_debug() << "call glBindVertexArray " "array: '" << array << "'";
            glBindVertexArray(array);
            __gtulu_check_error();

          }

          void blend_color< >::call(gtulu::float32_t red, gtulu::float32_t green, gtulu::float32_t blue, gtulu::float32_t alpha) {
            __gtulu_debug() << "call glBlendColor " "red: '" << red << "'" ", " "green: '" << green << "'" ", " "blue: '" << blue << "'" ", " "alpha: '" << alpha << "'";
            glBlendColor(red, green, blue, alpha);
            __gtulu_check_error();

          }

          void blend_equation< >::call(gtulu::uint32_t buf, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glBlendEquationi " "buf: '" << buf << "'" ", " "mode: '" << mode << "'";
            glBlendEquationi(buf, static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void blend_equation< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glBlendEquation " "mode: '" << mode << "'";
            glBlendEquation(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void blend_equation_separate< >::call(gtulu::uint32_t buf, gtulu::constant_base const& mode_rgb, gtulu::constant_base const& mode_alpha) {
            __gtulu_debug() << "call glBlendEquationSeparatei " "buf: '" << buf << "'" ", " "mode_rgb: '" << mode_rgb << "'" ", " "mode_alpha: '" << mode_alpha << "'";
            glBlendEquationSeparatei(buf, static_cast< std::uint32_t >(mode_rgb), static_cast< std::uint32_t >(mode_alpha));
            __gtulu_check_error();

          }

          void blend_equation_separate< >::call(gtulu::constant_base const& mode_rgb, gtulu::constant_base const& mode_alpha) {
            __gtulu_debug() << "call glBlendEquationSeparate " "mode_rgb: '" << mode_rgb << "'" ", " "mode_alpha: '" << mode_alpha << "'";
            glBlendEquationSeparate(static_cast< std::uint32_t >(mode_rgb), static_cast< std::uint32_t >(mode_alpha));
            __gtulu_check_error();

          }

          void blend_equation_separateiARB< >::call(gtulu::uint32_t buf, gtulu::constant_base const& mode_rgb, gtulu::constant_base const& mode_alpha) {
            __gtulu_debug() << "call glBlendEquationSeparateiARB " "buf: '" << buf << "'" ", " "mode_rgb: '" << mode_rgb << "'" ", " "mode_alpha: '" << mode_alpha << "'";
            glBlendEquationSeparateiARB(buf, static_cast< std::uint32_t >(mode_rgb), static_cast< std::uint32_t >(mode_alpha));
            __gtulu_check_error();

          }

          void blend_equationiARB< >::call(gtulu::uint32_t buf, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glBlendEquationiARB " "buf: '" << buf << "'" ", " "mode: '" << mode << "'";
            glBlendEquationiARB(buf, static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void blend_func< >::call(gtulu::uint32_t buf, gtulu::constant_base const& src, gtulu::constant_base const& dst) {
            __gtulu_debug() << "call glBlendFunci " "buf: '" << buf << "'" ", " "src: '" << src << "'" ", " "dst: '" << dst << "'";
            glBlendFunci(buf, static_cast< std::uint32_t >(src), static_cast< std::uint32_t >(dst));
            __gtulu_check_error();

          }

          void blend_func< >::call(gtulu::constant_base const& sfactor, gtulu::constant_base const& dfactor) {
            __gtulu_debug() << "call glBlendFunc " "sfactor: '" << sfactor << "'" ", " "dfactor: '" << dfactor << "'";
            glBlendFunc(static_cast< std::uint32_t >(sfactor), static_cast< std::uint32_t >(dfactor));
            __gtulu_check_error();

          }

          void blend_func_separate< >::call(gtulu::uint32_t buf, gtulu::constant_base const& src_rgb, gtulu::constant_base const& dst_rgb, gtulu::constant_base const& src_alpha, gtulu::constant_base const& dst_alpha) {
            __gtulu_debug() << "call glBlendFuncSeparatei " "buf: '" << buf << "'" ", " "src_rgb: '" << src_rgb << "'" ", " "dst_rgb: '" << dst_rgb << "'" ", " "src_alpha: '" << src_alpha << "'" ", " "dst_alpha: '" << dst_alpha << "'";
            glBlendFuncSeparatei(buf, static_cast< std::uint32_t >(src_rgb), static_cast< std::uint32_t >(dst_rgb), static_cast< std::uint32_t >(src_alpha), static_cast< std::uint32_t >(dst_alpha));
            __gtulu_check_error();

          }

          void blend_func_separate< >::call(gtulu::constant_base const& sfactor_rgb, gtulu::constant_base const& dfactor_rgb, gtulu::constant_base const& sfactor_alpha, gtulu::constant_base const& dfactor_alpha) {
            __gtulu_debug() << "call glBlendFuncSeparate " "sfactor_rgb: '" << sfactor_rgb << "'" ", " "dfactor_rgb: '" << dfactor_rgb << "'" ", " "sfactor_alpha: '" << sfactor_alpha << "'" ", " "dfactor_alpha: '" << dfactor_alpha << "'";
            glBlendFuncSeparate(static_cast< std::uint32_t >(sfactor_rgb), static_cast< std::uint32_t >(dfactor_rgb), static_cast< std::uint32_t >(sfactor_alpha), static_cast< std::uint32_t >(dfactor_alpha));
            __gtulu_check_error();

          }

          void blend_func_separateiARB< >::call(gtulu::uint32_t buf, gtulu::constant_base const& src_rgb, gtulu::constant_base const& dst_rgb, gtulu::constant_base const& src_alpha, gtulu::constant_base const& dst_alpha) {
            __gtulu_debug() << "call glBlendFuncSeparateiARB " "buf: '" << buf << "'" ", " "src_rgb: '" << src_rgb << "'" ", " "dst_rgb: '" << dst_rgb << "'" ", " "src_alpha: '" << src_alpha << "'" ", " "dst_alpha: '" << dst_alpha << "'";
            glBlendFuncSeparateiARB(buf, static_cast< std::uint32_t >(src_rgb), static_cast< std::uint32_t >(dst_rgb), static_cast< std::uint32_t >(src_alpha), static_cast< std::uint32_t >(dst_alpha));
            __gtulu_check_error();

          }

          void blend_funciARB< >::call(gtulu::uint32_t buf, gtulu::constant_base const& src, gtulu::constant_base const& dst) {
            __gtulu_debug() << "call glBlendFunciARB " "buf: '" << buf << "'" ", " "src: '" << src << "'" ", " "dst: '" << dst << "'";
            glBlendFunciARB(buf, static_cast< std::uint32_t >(src), static_cast< std::uint32_t >(dst));
            __gtulu_check_error();

          }

          void blit_framebuffer< >::call(gtulu::int32_t src_x_0, gtulu::int32_t src_y_0, gtulu::int32_t src_x_1, gtulu::int32_t src_y_1, gtulu::int32_t dst_x_0, gtulu::int32_t dst_y_0, gtulu::int32_t dst_x_1, gtulu::int32_t dst_y_1, gtulu::uint32_t mask, gtulu::constant_base const& filter) {
            __gtulu_debug() << "call glBlitFramebuffer " "src_x_0: '" << src_x_0 << "'" ", " "src_y_0: '" << src_y_0 << "'" ", " "src_x_1: '" << src_x_1 << "'" ", " "src_y_1: '" << src_y_1 << "'" ", " "dst_x_0: '" << dst_x_0 << "'" ", " "dst_y_0: '" << dst_y_0 << "'" ", " "dst_x_1: '" << dst_x_1 << "'" ", " "dst_y_1: '" << dst_y_1 << "'" ", " "mask: '" << mask << "'" ", " "filter: '" << filter << "'";
            glBlitFramebuffer(src_x_0, src_y_0, src_x_1, src_y_1, dst_x_0, dst_y_0, dst_x_1, dst_y_1, mask, static_cast< std::uint32_t >(filter));
            __gtulu_check_error();

          }

          void buffer_data< >::call(gtulu::constant_base const& target, gtulu::int64_t size, void const* data, gtulu::constant_base const& usage) {
            __gtulu_debug() << "call glBufferData " "target: '" << target << "'" ", " "size: '" << size << "'" ", " "data: '" << data << "'" ", " "usage: '" << usage << "'";
            glBufferData(static_cast< std::uint32_t >(target), size, data, static_cast< std::uint32_t >(usage));
            __gtulu_check_error();

          }

          void buffer_sub_data< >::call(gtulu::constant_base const& target, gtulu::int64_t offset, gtulu::int64_t size, void const* data) {
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

          void clear< >::call(gtulu::uint32_t mask) {
            __gtulu_debug() << "call glClear " "mask: '" << mask << "'";
            glClear(mask);
            __gtulu_check_error();

          }

          void clear_buffer< >::call(gtulu::constant_base const& buffer, gtulu::int32_t drawbuffer, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glClearBufferfv " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "value: '" << value << "'";
            glClearBufferfv(static_cast< std::uint32_t >(buffer), drawbuffer, value);
            __gtulu_check_error();

          }

          void clear_buffer< >::call(gtulu::constant_base const& buffer, gtulu::int32_t drawbuffer, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glClearBufferuiv " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "value: '" << value << "'";
            glClearBufferuiv(static_cast< std::uint32_t >(buffer), drawbuffer, value);
            __gtulu_check_error();

          }

          void clear_buffer< >::call(gtulu::constant_base const& buffer, gtulu::int32_t drawbuffer, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glClearBufferiv " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "value: '" << value << "'";
            glClearBufferiv(static_cast< std::uint32_t >(buffer), drawbuffer, value);
            __gtulu_check_error();

          }

          void clear_buffer_float< >::call(gtulu::constant_base const& buffer, gtulu::int32_t drawbuffer, gtulu::float32_t depth, gtulu::int32_t stencil) {
            __gtulu_debug() << "call glClearBufferfi " "buffer: '" << buffer << "'" ", " "drawbuffer: '" << drawbuffer << "'" ", " "depth: '" << depth << "'" ", " "stencil: '" << stencil << "'";
            glClearBufferfi(static_cast< std::uint32_t >(buffer), drawbuffer, depth, stencil);
            __gtulu_check_error();

          }

          void clear_color< >::call(gtulu::float32_t red, gtulu::float32_t green, gtulu::float32_t blue, gtulu::float32_t alpha) {
            __gtulu_debug() << "call glClearColor " "red: '" << red << "'" ", " "green: '" << green << "'" ", " "blue: '" << blue << "'" ", " "alpha: '" << alpha << "'";
            glClearColor(red, green, blue, alpha);
            __gtulu_check_error();

          }

          void clear_depth< >::call(gtulu::float32_t d) {
            __gtulu_debug() << "call glClearDepthf " "d: '" << d << "'";
            glClearDepthf(d);
            __gtulu_check_error();

          }

          void clear_depth< >::call(gtulu::float64_t depth) {
            __gtulu_debug() << "call glClearDepth " "depth: '" << depth << "'";
            glClearDepth(depth);
            __gtulu_check_error();

          }

          void clear_stencil< >::call(gtulu::int32_t s) {
            __gtulu_debug() << "call glClearStencil " "s: '" << s << "'";
            glClearStencil(s);
            __gtulu_check_error();

          }

          void color_mask< >::call(gtulu::uint32_t index, bool r, bool g, bool b, bool a) {
            __gtulu_debug() << "call glColorMaski " "index: '" << index << "'" ", " "r: '" << r << "'" ", " "g: '" << g << "'" ", " "b: '" << b << "'" ", " "a: '" << a << "'";
            glColorMaski(index, r, g, b, a);
            __gtulu_check_error();

          }

          void color_mask< >::call(bool red, bool green, bool blue, bool alpha) {
            __gtulu_debug() << "call glColorMask " "red: '" << red << "'" ", " "green: '" << green << "'" ", " "blue: '" << blue << "'" ", " "alpha: '" << alpha << "'";
            glColorMask(red, green, blue, alpha);
            __gtulu_check_error();

          }

          template< > void color_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* color) {
            __gtulu_debug() << "call glColorP4uiv " "type: '" << type << "'" ", " "color: '" << color << "'";
            glColorP4uiv(static_cast< std::uint32_t >(type), color);
            __gtulu_check_error();

          }

          template< > void color_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& type, gtulu::uint32_t color) {
            __gtulu_debug() << "call glColorP4ui " "type: '" << type << "'" ", " "color: '" << color << "'";
            glColorP4ui(static_cast< std::uint32_t >(type), color);
            __gtulu_check_error();

          }

          template< > void color_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* color) {
            __gtulu_debug() << "call glColorP3uiv " "type: '" << type << "'" ", " "color: '" << color << "'";
            glColorP3uiv(static_cast< std::uint32_t >(type), color);
            __gtulu_check_error();

          }

          template< > void color_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t color) {
            __gtulu_debug() << "call glColorP3ui " "type: '" << type << "'" ", " "color: '" << color << "'";
            glColorP3ui(static_cast< std::uint32_t >(type), color);
            __gtulu_check_error();

          }

          void compile_shader< >::call(gtulu::uint32_t shader) {
            __gtulu_debug() << "call glCompileShader " "shader: '" << shader << "'";
            glCompileShader(shader);
            __gtulu_check_error();

          }

          void compile_shader_includeARB< >::call(gtulu::uint32_t shader, gtulu::int32_t count, char const** path, gtulu::int32_t const* length) {
            __gtulu_debug() << "call glCompileShaderIncludeARB " "shader: '" << shader << "'" ", " "count: '" << count << "'" ", " "path: '" << path << "'" ", " "length: '" << length << "'";
            glCompileShaderIncludeARB(shader, count, path, length);
            __gtulu_check_error();

          }

          template< > void compressed_tex_image< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t border, gtulu::int32_t image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "border: '" << border << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexImage1D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), width, border, image_size, data);
            __gtulu_check_error();

          }

          template< > void compressed_tex_image< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border, gtulu::int32_t image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "border: '" << border << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexImage2D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), width, height, border, image_size, data);
            __gtulu_check_error();

          }

          template< > void compressed_tex_image< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t depth, gtulu::int32_t border, gtulu::int32_t image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "border: '" << border << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexImage3D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), width, height, depth, border, image_size, data);
            __gtulu_check_error();

          }

          template< > void compressed_tex_sub_image< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t width, gtulu::constant_base const& format, gtulu::int32_t image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexSubImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "width: '" << width << "'" ", " "format: '" << format << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexSubImage1D(static_cast< std::uint32_t >(target), level, xoffset, width, static_cast< std::uint32_t >(format), image_size, data);
            __gtulu_check_error();

          }

          template< > void compressed_tex_sub_image< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t width, gtulu::int32_t height, gtulu::constant_base const& format, gtulu::int32_t image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexSubImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "format: '" << format << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexSubImage2D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, width, height, static_cast< std::uint32_t >(format), image_size, data);
            __gtulu_check_error();

          }

          template< > void compressed_tex_sub_image< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t zoffset, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t depth, gtulu::constant_base const& format, gtulu::int32_t image_size, void const* data) {
            __gtulu_debug() << "call glCompressedTexSubImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "zoffset: '" << zoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "format: '" << format << "'" ", " "image_size: '" << image_size << "'" ", " "data: '" << data << "'";
            glCompressedTexSubImage3D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast< std::uint32_t >(format), image_size, data);
            __gtulu_check_error();

          }

          void copy_buffer_sub_data< >::call(gtulu::constant_base const& read_target, gtulu::constant_base const& write_target, gtulu::int64_t read_offset, gtulu::int64_t write_offset, gtulu::int64_t size) {
            __gtulu_debug() << "call glCopyBufferSubData " "read_target: '" << read_target << "'" ", " "write_target: '" << write_target << "'" ", " "read_offset: '" << read_offset << "'" ", " "write_offset: '" << write_offset << "'" ", " "size: '" << size << "'";
            glCopyBufferSubData(static_cast< std::uint32_t >(read_target), static_cast< std::uint32_t >(write_target), read_offset, write_offset, size);
            __gtulu_check_error();

          }

          template< > void copy_tex_image< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border) {
            __gtulu_debug() << "call glCopyTexImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "border: '" << border << "'";
            glCopyTexImage2D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), x, y, width, height, border);
            __gtulu_check_error();

          }

          template< > void copy_tex_image< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t border) {
            __gtulu_debug() << "call glCopyTexImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "border: '" << border << "'";
            glCopyTexImage1D(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(internalformat), x, y, width, border);
            __gtulu_check_error();

          }

          template< > void copy_tex_sub_image< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t zoffset, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glCopyTexSubImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "zoffset: '" << zoffset << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glCopyTexSubImage3D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, zoffset, x, y, width, height);
            __gtulu_check_error();

          }

          template< > void copy_tex_sub_image< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glCopyTexSubImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glCopyTexSubImage2D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, x, y, width, height);
            __gtulu_check_error();

          }

          template< > void copy_tex_sub_image< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width) {
            __gtulu_debug() << "call glCopyTexSubImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'";
            glCopyTexSubImage1D(static_cast< std::uint32_t >(target), level, xoffset, x, y, width);
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

          gtulu::uint32_t create_shader_program< >::call(gtulu::constant_base const& type, gtulu::int32_t count, char const* const* strings) {
            __gtulu_debug() << "call glCreateShaderProgramv " "type: '" << type << "'" ", " "count: '" << count << "'" ", " "strings: '" << strings << "'";
            gtulu::uint32_t output = glCreateShaderProgramv(static_cast< std::uint32_t >(type), count, strings);
            __gtulu_check_error();
            return output;
          }

          void cull_face< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glCullFace " "mode: '" << mode << "'";
            glCullFace(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void debug_message_controlARB< >::call(gtulu::constant_base const& source, gtulu::constant_base const& type, gtulu::constant_base const& severity, gtulu::int32_t count, gtulu::uint32_t const* ids, bool enabled) {
            __gtulu_debug() << "call glDebugMessageControlARB " "source: '" << source << "'" ", " "type: '" << type << "'" ", " "severity: '" << severity << "'" ", " "count: '" << count << "'" ", " "ids: '" << ids << "'" ", " "enabled: '" << enabled << "'";
            glDebugMessageControlARB(static_cast< std::uint32_t >(source), static_cast< std::uint32_t >(type), static_cast< std::uint32_t >(severity), count, ids, enabled);
            __gtulu_check_error();

          }

          void debug_message_insertARB< >::call(gtulu::constant_base const& source, gtulu::constant_base const& type, gtulu::uint32_t id, gtulu::constant_base const& severity, gtulu::int32_t length, char const* buf) {
            __gtulu_debug() << "call glDebugMessageInsertARB " "source: '" << source << "'" ", " "type: '" << type << "'" ", " "id: '" << id << "'" ", " "severity: '" << severity << "'" ", " "length: '" << length << "'" ", " "buf: '" << buf << "'";
            glDebugMessageInsertARB(static_cast< std::uint32_t >(source), static_cast< std::uint32_t >(type), id, static_cast< std::uint32_t >(severity), length, buf);
            __gtulu_check_error();

          }

          void delete_buffers< >::call(gtulu::int32_t n, gtulu::uint32_t const* buffers) {
            __gtulu_debug() << "call glDeleteBuffers " "n: '" << n << "'" ", " "buffers: '" << buffers << "'";
            glDeleteBuffers(n, buffers);
            __gtulu_check_error();

          }

          void delete_framebuffers< >::call(gtulu::int32_t n, gtulu::uint32_t const* framebuffers) {
            __gtulu_debug() << "call glDeleteFramebuffers " "n: '" << n << "'" ", " "framebuffers: '" << framebuffers << "'";
            glDeleteFramebuffers(n, framebuffers);
            __gtulu_check_error();

          }

          void delete_named_stringARB< >::call(gtulu::int32_t namelen, char const* name) {
            __gtulu_debug() << "call glDeleteNamedStringARB " "namelen: '" << namelen << "'" ", " "name: '" << name << "'";
            glDeleteNamedStringARB(namelen, name);
            __gtulu_check_error();

          }

          void delete_program< >::call(gtulu::uint32_t program) {
            __gtulu_debug() << "call glDeleteProgram " "program: '" << program << "'";
            glDeleteProgram(program);
            __gtulu_check_error();

          }

          void delete_program_pipelines< >::call(gtulu::int32_t n, gtulu::uint32_t const* pipelines) {
            __gtulu_debug() << "call glDeleteProgramPipelines " "n: '" << n << "'" ", " "pipelines: '" << pipelines << "'";
            glDeleteProgramPipelines(n, pipelines);
            __gtulu_check_error();

          }

          void delete_queries< >::call(gtulu::int32_t n, gtulu::uint32_t const* ids) {
            __gtulu_debug() << "call glDeleteQueries " "n: '" << n << "'" ", " "ids: '" << ids << "'";
            glDeleteQueries(n, ids);
            __gtulu_check_error();

          }

          void delete_renderbuffers< >::call(gtulu::int32_t n, gtulu::uint32_t const* renderbuffers) {
            __gtulu_debug() << "call glDeleteRenderbuffers " "n: '" << n << "'" ", " "renderbuffers: '" << renderbuffers << "'";
            glDeleteRenderbuffers(n, renderbuffers);
            __gtulu_check_error();

          }

          void delete_samplers< >::call(gtulu::int32_t count, gtulu::uint32_t const* samplers) {
            __gtulu_debug() << "call glDeleteSamplers " "count: '" << count << "'" ", " "samplers: '" << samplers << "'";
            glDeleteSamplers(count, samplers);
            __gtulu_check_error();

          }

          void delete_shader< >::call(gtulu::uint32_t shader) {
            __gtulu_debug() << "call glDeleteShader " "shader: '" << shader << "'";
            glDeleteShader(shader);
            __gtulu_check_error();

          }

          void delete_textures< >::call(gtulu::int32_t n, gtulu::uint32_t const* textures) {
            __gtulu_debug() << "call glDeleteTextures " "n: '" << n << "'" ", " "textures: '" << textures << "'";
            glDeleteTextures(n, textures);
            __gtulu_check_error();

          }

          void delete_transform_feedbacks< >::call(gtulu::int32_t n, gtulu::uint32_t const* ids) {
            __gtulu_debug() << "call glDeleteTransformFeedbacks " "n: '" << n << "'" ", " "ids: '" << ids << "'";
            glDeleteTransformFeedbacks(n, ids);
            __gtulu_check_error();

          }

          void delete_vertex_arrays< >::call(gtulu::int32_t n, gtulu::uint32_t const* arrays) {
            __gtulu_debug() << "call glDeleteVertexArrays " "n: '" << n << "'" ", " "arrays: '" << arrays << "'";
            glDeleteVertexArrays(n, arrays);
            __gtulu_check_error();

          }

          void depth_func< >::call(gtulu::constant_base const& func) {
            __gtulu_debug() << "call glDepthFunc " "func: '" << func << "'";
            glDepthFunc(static_cast< std::uint32_t >(func));
            __gtulu_check_error();

          }

          void depth_mask< >::call(bool flag) {
            __gtulu_debug() << "call glDepthMask " "flag: '" << flag << "'";
            glDepthMask(flag);
            __gtulu_check_error();

          }

          void depth_range< >::call(gtulu::float32_t n, gtulu::float32_t f) {
            __gtulu_debug() << "call glDepthRangef " "n: '" << n << "'" ", " "f: '" << f << "'";
            glDepthRangef(n, f);
            __gtulu_check_error();

          }

          void depth_range< >::call(gtulu::float64_t near, gtulu::float64_t far) {
            __gtulu_debug() << "call glDepthRange " "near: '" << near << "'" ", " "far: '" << far << "'";
            glDepthRange(near, far);
            __gtulu_check_error();

          }

          void depth_range_array< >::call(gtulu::uint32_t first, gtulu::int32_t count, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glDepthRangeArrayv " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "v: '" << v << "'";
            glDepthRangeArrayv(first, count, v);
            __gtulu_check_error();

          }

          void depth_range_indexed< >::call(gtulu::uint32_t index, gtulu::float64_t n, gtulu::float64_t f) {
            __gtulu_debug() << "call glDepthRangeIndexed " "index: '" << index << "'" ", " "n: '" << n << "'" ", " "f: '" << f << "'";
            glDepthRangeIndexed(index, n, f);
            __gtulu_check_error();

          }

          void detach_shader< >::call(gtulu::uint32_t program, gtulu::uint32_t shader) {
            __gtulu_debug() << "call glDetachShader " "program: '" << program << "'" ", " "shader: '" << shader << "'";
            glDetachShader(program, shader);
            __gtulu_check_error();

          }

          void disable< >::call(gtulu::constant_base const& target, gtulu::uint32_t index) {
            __gtulu_debug() << "call glDisablei " "target: '" << target << "'" ", " "index: '" << index << "'";
            glDisablei(static_cast< std::uint32_t >(target), index);
            __gtulu_check_error();

          }

          void disable< >::call(gtulu::constant_base const& cap) {
            __gtulu_debug() << "call glDisable " "cap: '" << cap << "'";
            glDisable(static_cast< std::uint32_t >(cap));
            __gtulu_check_error();

          }

          void disable_vertex_attrib_array< >::call(gtulu::uint32_t index) {
            __gtulu_debug() << "call glDisableVertexAttribArray " "index: '" << index << "'";
            glDisableVertexAttribArray(index);
            __gtulu_check_error();

          }

          void draw_arrays< >::call(gtulu::constant_base const& mode, gtulu::int32_t first, gtulu::int32_t count) {
            __gtulu_debug() << "call glDrawArrays " "mode: '" << mode << "'" ", " "first: '" << first << "'" ", " "count: '" << count << "'";
            glDrawArrays(static_cast< std::uint32_t >(mode), first, count);
            __gtulu_check_error();

          }

          void draw_arrays_indirect< >::call(gtulu::constant_base const& mode, void const* indirect) {
            __gtulu_debug() << "call glDrawArraysIndirect " "mode: '" << mode << "'" ", " "indirect: '" << indirect << "'";
            glDrawArraysIndirect(static_cast< std::uint32_t >(mode), indirect);
            __gtulu_check_error();

          }

          void draw_arrays_instanced< >::call(gtulu::constant_base const& mode, gtulu::int32_t first, gtulu::int32_t count, gtulu::int32_t primcount) {
            __gtulu_debug() << "call glDrawArraysInstanced " "mode: '" << mode << "'" ", " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "primcount: '" << primcount << "'";
            glDrawArraysInstanced(static_cast< std::uint32_t >(mode), first, count, primcount);
            __gtulu_check_error();

          }

          void draw_arrays_instanced_base_instance< >::call(gtulu::constant_base const& mode, gtulu::int32_t first, gtulu::int32_t count, gtulu::int32_t primcount, gtulu::uint32_t baseinstance) {
            __gtulu_debug() << "call glDrawArraysInstancedBaseInstance " "mode: '" << mode << "'" ", " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "primcount: '" << primcount << "'" ", " "baseinstance: '" << baseinstance << "'";
            glDrawArraysInstancedBaseInstance(static_cast< std::uint32_t >(mode), first, count, primcount, baseinstance);
            __gtulu_check_error();

          }

          void draw_buffer< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glDrawBuffer " "mode: '" << mode << "'";
            glDrawBuffer(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void draw_buffers< >::call(gtulu::int32_t n, gtulu::uint32_t const* bufs) {
            __gtulu_debug() << "call glDrawBuffers " "n: '" << n << "'" ", " "bufs: '" << bufs << "'";
            glDrawBuffers(n, bufs);
            __gtulu_check_error();

          }

          void draw_elements< >::call(gtulu::constant_base const& mode, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices) {
            __gtulu_debug() << "call glDrawElements " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'";
            glDrawElements(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices);
            __gtulu_check_error();

          }

          void draw_elements_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t basevertex) {
            __gtulu_debug() << "call glDrawElementsBaseVertex " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "basevertex: '" << basevertex << "'";
            glDrawElementsBaseVertex(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, basevertex);
            __gtulu_check_error();

          }

          void draw_elements_indirect< >::call(gtulu::constant_base const& mode, gtulu::constant_base const& type, void const* indirect) {
            __gtulu_debug() << "call glDrawElementsIndirect " "mode: '" << mode << "'" ", " "type: '" << type << "'" ", " "indirect: '" << indirect << "'";
            glDrawElementsIndirect(static_cast< std::uint32_t >(mode), static_cast< std::uint32_t >(type), indirect);
            __gtulu_check_error();

          }

          void draw_elements_instanced< >::call(gtulu::constant_base const& mode, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t primcount) {
            __gtulu_debug() << "call glDrawElementsInstanced " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "primcount: '" << primcount << "'";
            glDrawElementsInstanced(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, primcount);
            __gtulu_check_error();

          }

          void draw_elements_instanced_base_instance< >::call(gtulu::constant_base const& mode, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t primcount, gtulu::uint32_t baseinstance) {
            __gtulu_debug() << "call glDrawElementsInstancedBaseInstance " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "primcount: '" << primcount << "'" ", " "baseinstance: '" << baseinstance << "'";
            glDrawElementsInstancedBaseInstance(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, primcount, baseinstance);
            __gtulu_check_error();

          }

          void draw_elements_instanced_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t primcount, gtulu::int32_t basevertex) {
            __gtulu_debug() << "call glDrawElementsInstancedBaseVertex " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "primcount: '" << primcount << "'" ", " "basevertex: '" << basevertex << "'";
            glDrawElementsInstancedBaseVertex(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, primcount, basevertex);
            __gtulu_check_error();

          }

          void draw_elements_instanced_base_vertex_base_instance< >::call(gtulu::constant_base const& mode, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t primcount, gtulu::int32_t basevertex, gtulu::uint32_t baseinstance) {
            __gtulu_debug() << "call glDrawElementsInstancedBaseVertexBaseInstance " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "primcount: '" << primcount << "'" ", " "basevertex: '" << basevertex << "'" ", " "baseinstance: '" << baseinstance << "'";
            glDrawElementsInstancedBaseVertexBaseInstance(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, primcount, basevertex, baseinstance);
            __gtulu_check_error();

          }

          void draw_range_elements< >::call(gtulu::constant_base const& mode, gtulu::uint32_t start, gtulu::uint32_t end, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices) {
            __gtulu_debug() << "call glDrawRangeElements " "mode: '" << mode << "'" ", " "start: '" << start << "'" ", " "end: '" << end << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'";
            glDrawRangeElements(static_cast< std::uint32_t >(mode), start, end, count, static_cast< std::uint32_t >(type), indices);
            __gtulu_check_error();

          }

          void draw_range_elements_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::uint32_t start, gtulu::uint32_t end, gtulu::int32_t count, gtulu::constant_base const& type, void const* indices, gtulu::int32_t basevertex) {
            __gtulu_debug() << "call glDrawRangeElementsBaseVertex " "mode: '" << mode << "'" ", " "start: '" << start << "'" ", " "end: '" << end << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "basevertex: '" << basevertex << "'";
            glDrawRangeElementsBaseVertex(static_cast< std::uint32_t >(mode), start, end, count, static_cast< std::uint32_t >(type), indices, basevertex);
            __gtulu_check_error();

          }

          void draw_transform_feedback< >::call(gtulu::constant_base const& mode, gtulu::uint32_t id) {
            __gtulu_debug() << "call glDrawTransformFeedback " "mode: '" << mode << "'" ", " "id: '" << id << "'";
            glDrawTransformFeedback(static_cast< std::uint32_t >(mode), id);
            __gtulu_check_error();

          }

          void draw_transform_feedback_instanced< >::call(gtulu::constant_base const& mode, gtulu::uint32_t id, gtulu::int32_t primcount) {
            __gtulu_debug() << "call glDrawTransformFeedbackInstanced " "mode: '" << mode << "'" ", " "id: '" << id << "'" ", " "primcount: '" << primcount << "'";
            glDrawTransformFeedbackInstanced(static_cast< std::uint32_t >(mode), id, primcount);
            __gtulu_check_error();

          }

          void draw_transform_feedback_stream< >::call(gtulu::constant_base const& mode, gtulu::uint32_t id, gtulu::uint32_t stream) {
            __gtulu_debug() << "call glDrawTransformFeedbackStream " "mode: '" << mode << "'" ", " "id: '" << id << "'" ", " "stream: '" << stream << "'";
            glDrawTransformFeedbackStream(static_cast< std::uint32_t >(mode), id, stream);
            __gtulu_check_error();

          }

          void draw_transform_feedback_stream_instanced< >::call(gtulu::constant_base const& mode, gtulu::uint32_t id, gtulu::uint32_t stream, gtulu::int32_t primcount) {
            __gtulu_debug() << "call glDrawTransformFeedbackStreamInstanced " "mode: '" << mode << "'" ", " "id: '" << id << "'" ", " "stream: '" << stream << "'" ", " "primcount: '" << primcount << "'";
            glDrawTransformFeedbackStreamInstanced(static_cast< std::uint32_t >(mode), id, stream, primcount);
            __gtulu_check_error();

          }

          void enable< >::call(gtulu::constant_base const& target, gtulu::uint32_t index) {
            __gtulu_debug() << "call glEnablei " "target: '" << target << "'" ", " "index: '" << index << "'";
            glEnablei(static_cast< std::uint32_t >(target), index);
            __gtulu_check_error();

          }

          void enable< >::call(gtulu::constant_base const& cap) {
            __gtulu_debug() << "call glEnable " "cap: '" << cap << "'";
            glEnable(static_cast< std::uint32_t >(cap));
            __gtulu_check_error();

          }

          void enable_vertex_attrib_array< >::call(gtulu::uint32_t index) {
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

          void end_query_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index) {
            __gtulu_debug() << "call glEndQueryIndexed " "target: '" << target << "'" ", " "index: '" << index << "'";
            glEndQueryIndexed(static_cast< std::uint32_t >(target), index);
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

          void flush_mapped_buffer_range< >::call(gtulu::constant_base const& target, gtulu::int64_t offset, gtulu::int64_t length) {
            __gtulu_debug() << "call glFlushMappedBufferRange " "target: '" << target << "'" ", " "offset: '" << offset << "'" ", " "length: '" << length << "'";
            glFlushMappedBufferRange(static_cast< std::uint32_t >(target), offset, length);
            __gtulu_check_error();

          }

          void framebuffer_renderbuffer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& renderbuffertarget, gtulu::uint32_t renderbuffer) {
            __gtulu_debug() << "call glFramebufferRenderbuffer " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "renderbuffertarget: '" << renderbuffertarget << "'" ", " "renderbuffer: '" << renderbuffer << "'";
            glFramebufferRenderbuffer(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(renderbuffertarget), renderbuffer);
            __gtulu_check_error();

          }

          void framebuffer_texture< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::uint32_t texture, gtulu::int32_t level) {
            __gtulu_debug() << "call glFramebufferTexture " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'";
            glFramebufferTexture(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), texture, level);
            __gtulu_check_error();

          }

          template< > void framebuffer_texture< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t texture, gtulu::int32_t level, gtulu::int32_t zoffset) {
            __gtulu_debug() << "call glFramebufferTexture3D " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "textarget: '" << textarget << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'" ", " "zoffset: '" << zoffset << "'";
            glFramebufferTexture3D(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(textarget), texture, level, zoffset);
            __gtulu_check_error();

          }

          template< > void framebuffer_texture< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t texture, gtulu::int32_t level) {
            __gtulu_debug() << "call glFramebufferTexture2D " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "textarget: '" << textarget << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'";
            glFramebufferTexture2D(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(textarget), texture, level);
            __gtulu_check_error();

          }

          template< > void framebuffer_texture< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& textarget, gtulu::uint32_t texture, gtulu::int32_t level) {
            __gtulu_debug() << "call glFramebufferTexture1D " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "textarget: '" << textarget << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'";
            glFramebufferTexture1D(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(textarget), texture, level);
            __gtulu_check_error();

          }

          void framebuffer_texture_layer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::uint32_t texture, gtulu::int32_t level, gtulu::int32_t layer) {
            __gtulu_debug() << "call glFramebufferTextureLayer " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "texture: '" << texture << "'" ", " "level: '" << level << "'" ", " "layer: '" << layer << "'";
            glFramebufferTextureLayer(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), texture, level, layer);
            __gtulu_check_error();

          }

          void front_face< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glFrontFace " "mode: '" << mode << "'";
            glFrontFace(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void gen_buffers< >::call(gtulu::int32_t n, gtulu::uint32_t* buffers) {
            __gtulu_debug() << "call glGenBuffers " "n: '" << n << "'" ", " "buffers: '" << buffers << "'";
            glGenBuffers(n, buffers);
            __gtulu_check_error();

          }

          void gen_framebuffers< >::call(gtulu::int32_t n, gtulu::uint32_t* framebuffers) {
            __gtulu_debug() << "call glGenFramebuffers " "n: '" << n << "'" ", " "framebuffers: '" << framebuffers << "'";
            glGenFramebuffers(n, framebuffers);
            __gtulu_check_error();

          }

          void gen_program_pipelines< >::call(gtulu::int32_t n, gtulu::uint32_t* pipelines) {
            __gtulu_debug() << "call glGenProgramPipelines " "n: '" << n << "'" ", " "pipelines: '" << pipelines << "'";
            glGenProgramPipelines(n, pipelines);
            __gtulu_check_error();

          }

          void gen_queries< >::call(gtulu::int32_t n, gtulu::uint32_t* ids) {
            __gtulu_debug() << "call glGenQueries " "n: '" << n << "'" ", " "ids: '" << ids << "'";
            glGenQueries(n, ids);
            __gtulu_check_error();

          }

          void gen_renderbuffers< >::call(gtulu::int32_t n, gtulu::uint32_t* renderbuffers) {
            __gtulu_debug() << "call glGenRenderbuffers " "n: '" << n << "'" ", " "renderbuffers: '" << renderbuffers << "'";
            glGenRenderbuffers(n, renderbuffers);
            __gtulu_check_error();

          }

          void gen_samplers< >::call(gtulu::int32_t count, gtulu::uint32_t* samplers) {
            __gtulu_debug() << "call glGenSamplers " "count: '" << count << "'" ", " "samplers: '" << samplers << "'";
            glGenSamplers(count, samplers);
            __gtulu_check_error();

          }

          void gen_textures< >::call(gtulu::int32_t n, gtulu::uint32_t* textures) {
            __gtulu_debug() << "call glGenTextures " "n: '" << n << "'" ", " "textures: '" << textures << "'";
            glGenTextures(n, textures);
            __gtulu_check_error();

          }

          void gen_transform_feedbacks< >::call(gtulu::int32_t n, gtulu::uint32_t* ids) {
            __gtulu_debug() << "call glGenTransformFeedbacks " "n: '" << n << "'" ", " "ids: '" << ids << "'";
            glGenTransformFeedbacks(n, ids);
            __gtulu_check_error();

          }

          void gen_vertex_arrays< >::call(gtulu::int32_t n, gtulu::uint32_t* arrays) {
            __gtulu_debug() << "call glGenVertexArrays " "n: '" << n << "'" ", " "arrays: '" << arrays << "'";
            glGenVertexArrays(n, arrays);
            __gtulu_check_error();

          }

          void generate_mipmap< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glGenerateMipmap " "target: '" << target << "'";
            glGenerateMipmap(static_cast< std::uint32_t >(target));
            __gtulu_check_error();

          }

          void get_active_atomic_counter_buffer< >::call(gtulu::uint32_t program, gtulu::uint32_t buffer_index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetActiveAtomicCounterBufferiv " "program: '" << program << "'" ", " "buffer_index: '" << buffer_index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetActiveAtomicCounterBufferiv(program, buffer_index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_active_attrib< >::call(gtulu::uint32_t program, gtulu::uint32_t index, gtulu::int32_t buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name) {
            __gtulu_debug() << "call glGetActiveAttrib " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "name: '" << name << "'";
            glGetActiveAttrib(program, index, buf_size, length, size, type, name);
            __gtulu_check_error();

          }

          void get_active_subroutine_name< >::call(gtulu::uint32_t program, gtulu::constant_base const& shadertype, gtulu::uint32_t index, gtulu::int32_t bufsize, gtulu::int32_t* length, char* name) {
            __gtulu_debug() << "call glGetActiveSubroutineName " "program: '" << program << "'" ", " "shadertype: '" << shadertype << "'" ", " "index: '" << index << "'" ", " "bufsize: '" << bufsize << "'" ", " "length: '" << length << "'" ", " "name: '" << name << "'";
            glGetActiveSubroutineName(program, static_cast< std::uint32_t >(shadertype), index, bufsize, length, name);
            __gtulu_check_error();

          }

          void get_active_subroutine_uniform< >::call(gtulu::uint32_t program, gtulu::constant_base const& shadertype, gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::int32_t* values) {
            __gtulu_debug() << "call glGetActiveSubroutineUniformiv " "program: '" << program << "'" ", " "shadertype: '" << shadertype << "'" ", " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "values: '" << values << "'";
            glGetActiveSubroutineUniformiv(program, static_cast< std::uint32_t >(shadertype), index, static_cast< std::uint32_t >(pname), values);
            __gtulu_check_error();

          }

          void get_active_subroutine_uniform_name< >::call(gtulu::uint32_t program, gtulu::constant_base const& shadertype, gtulu::uint32_t index, gtulu::int32_t bufsize, gtulu::int32_t* length, char* name) {
            __gtulu_debug() << "call glGetActiveSubroutineUniformName " "program: '" << program << "'" ", " "shadertype: '" << shadertype << "'" ", " "index: '" << index << "'" ", " "bufsize: '" << bufsize << "'" ", " "length: '" << length << "'" ", " "name: '" << name << "'";
            glGetActiveSubroutineUniformName(program, static_cast< std::uint32_t >(shadertype), index, bufsize, length, name);
            __gtulu_check_error();

          }

          void get_active_uniform< >::call(gtulu::uint32_t program, gtulu::uint32_t index, gtulu::int32_t buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name) {
            __gtulu_debug() << "call glGetActiveUniform " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "name: '" << name << "'";
            glGetActiveUniform(program, index, buf_size, length, size, type, name);
            __gtulu_check_error();

          }

          void get_active_uniform_block< >::call(gtulu::uint32_t program, gtulu::uint32_t uniform_block_index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetActiveUniformBlockiv " "program: '" << program << "'" ", " "uniform_block_index: '" << uniform_block_index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetActiveUniformBlockiv(program, uniform_block_index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_active_uniform_block_name< >::call(gtulu::uint32_t program, gtulu::uint32_t uniform_block_index, gtulu::int32_t buf_size, gtulu::int32_t* length, char* uniform_block_name) {
            __gtulu_debug() << "call glGetActiveUniformBlockName " "program: '" << program << "'" ", " "uniform_block_index: '" << uniform_block_index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "uniform_block_name: '" << uniform_block_name << "'";
            glGetActiveUniformBlockName(program, uniform_block_index, buf_size, length, uniform_block_name);
            __gtulu_check_error();

          }

          void get_active_uniform_name< >::call(gtulu::uint32_t program, gtulu::uint32_t uniform_index, gtulu::int32_t buf_size, gtulu::int32_t* length, char* uniform_name) {
            __gtulu_debug() << "call glGetActiveUniformName " "program: '" << program << "'" ", " "uniform_index: '" << uniform_index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "uniform_name: '" << uniform_name << "'";
            glGetActiveUniformName(program, uniform_index, buf_size, length, uniform_name);
            __gtulu_check_error();

          }

          void get_active_uniforms< >::call(gtulu::uint32_t program, gtulu::int32_t uniform_count, gtulu::uint32_t const* uniform_indices, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetActiveUniformsiv " "program: '" << program << "'" ", " "uniform_count: '" << uniform_count << "'" ", " "uniform_indices: '" << uniform_indices << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetActiveUniformsiv(program, uniform_count, uniform_indices, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_attached_shaders< >::call(gtulu::uint32_t program, gtulu::int32_t max_count, gtulu::int32_t* count, gtulu::uint32_t* obj) {
            __gtulu_debug() << "call glGetAttachedShaders " "program: '" << program << "'" ", " "max_count: '" << max_count << "'" ", " "count: '" << count << "'" ", " "obj: '" << obj << "'";
            glGetAttachedShaders(program, max_count, count, obj);
            __gtulu_check_error();

          }

          gtulu::int32_t get_attrib_location< >::call(gtulu::uint32_t program, char const* name) {
            __gtulu_debug() << "call glGetAttribLocation " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetAttribLocation(program, name);
            __gtulu_check_error();
            return output;
          }

          void get_boolean< >::call(gtulu::constant_base const& pname, gtulu::uint8_t* params) {
            __gtulu_debug() << "call glGetBooleanv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetBooleanv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_boolean_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::uint8_t* data) {
            __gtulu_debug() << "call glGetBooleani_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetBooleani_v(static_cast< std::uint32_t >(target), index, data);
            __gtulu_check_error();

          }

          void get_buffer_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int64_t* params) {
            __gtulu_debug() << "call glGetBufferParameteri64v " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetBufferParameteri64v(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_buffer_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetBufferParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetBufferParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_buffer_pointer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, void** params) {
            __gtulu_debug() << "call glGetBufferPointerv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetBufferPointerv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_buffer_sub_data< >::call(gtulu::constant_base const& target, gtulu::int64_t offset, gtulu::int64_t size, void* data) {
            __gtulu_debug() << "call glGetBufferSubData " "target: '" << target << "'" ", " "offset: '" << offset << "'" ", " "size: '" << size << "'" ", " "data: '" << data << "'";
            glGetBufferSubData(static_cast< std::uint32_t >(target), offset, size, data);
            __gtulu_check_error();

          }

          void get_compressed_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t level, void* img) {
            __gtulu_debug() << "call glGetCompressedTexImage " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "img: '" << img << "'";
            glGetCompressedTexImage(static_cast< std::uint32_t >(target), level, img);
            __gtulu_check_error();

          }

          gtulu::uint32_t get_debug_message_logARB< >::call(gtulu::uint32_t count, gtulu::int32_t bufsize, gtulu::uint32_t* sources, gtulu::uint32_t* types, gtulu::uint32_t* ids, gtulu::uint32_t* severities, gtulu::int32_t* lengths, char* message_log) {
            __gtulu_debug() << "call glGetDebugMessageLogARB " "count: '" << count << "'" ", " "bufsize: '" << bufsize << "'" ", " "sources: '" << sources << "'" ", " "types: '" << types << "'" ", " "ids: '" << ids << "'" ", " "severities: '" << severities << "'" ", " "lengths: '" << lengths << "'" ", " "message_log: '" << message_log << "'";
            gtulu::uint32_t output = glGetDebugMessageLogARB(count, bufsize, sources, types, ids, severities, lengths, message_log);
            __gtulu_check_error();
            return output;
          }

          void get_double< >::call(gtulu::constant_base const& pname, gtulu::float64_t* params) {
            __gtulu_debug() << "call glGetDoublev " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetDoublev(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_double_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::float64_t* data) {
            __gtulu_debug() << "call glGetDoublei_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetDoublei_v(static_cast< std::uint32_t >(target), index, data);
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

          void get_float_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::float32_t* data) {
            __gtulu_debug() << "call glGetFloati_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetFloati_v(static_cast< std::uint32_t >(target), index, data);
            __gtulu_check_error();

          }

          gtulu::int32_t get_frag_data_index< >::call(gtulu::uint32_t program, char const* name) {
            __gtulu_debug() << "call glGetFragDataIndex " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetFragDataIndex(program, name);
            __gtulu_check_error();
            return output;
          }

          gtulu::int32_t get_frag_data_location< >::call(gtulu::uint32_t program, char const* name) {
            __gtulu_debug() << "call glGetFragDataLocation " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetFragDataLocation(program, name);
            __gtulu_check_error();
            return output;
          }

          void get_framebuffer_attachment_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& attachment, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetFramebufferAttachmentParameteriv " "target: '" << target << "'" ", " "attachment: '" << attachment << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetFramebufferAttachmentParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(attachment), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          gtulu::uint32_t get_graphics_reset_statusARB< >::call() {
            __gtulu_debug() << "call glGetGraphicsResetStatusARB ";
            gtulu::uint32_t output = glGetGraphicsResetStatusARB();
            __gtulu_check_error();
            return output;
          }

          void get_integer< >::call(gtulu::constant_base const& pname, gtulu::int64_t* params) {
            __gtulu_debug() << "call glGetInteger64v " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetInteger64v(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_integer< >::call(gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetIntegerv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetIntegerv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_integer_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::int64_t* data) {
            __gtulu_debug() << "call glGetInteger64i_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetInteger64i_v(static_cast< std::uint32_t >(target), index, data);
            __gtulu_check_error();

          }

          void get_integer_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::int32_t* data) {
            __gtulu_debug() << "call glGetIntegeri_v " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "data: '" << data << "'";
            glGetIntegeri_v(static_cast< std::uint32_t >(target), index, data);
            __gtulu_check_error();

          }

          void get_internalformat< >::call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::constant_base const& pname, gtulu::int32_t buf_size, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetInternalformativ " "target: '" << target << "'" ", " "internalformat: '" << internalformat << "'" ", " "pname: '" << pname << "'" ", " "buf_size: '" << buf_size << "'" ", " "params: '" << params << "'";
            glGetInternalformativ(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(internalformat), static_cast< std::uint32_t >(pname), buf_size, params);
            __gtulu_check_error();

          }

          void get_multisample< >::call(gtulu::constant_base const& pname, gtulu::uint32_t index, gtulu::float32_t* val) {
            __gtulu_debug() << "call glGetMultisamplefv " "pname: '" << pname << "'" ", " "index: '" << index << "'" ", " "val: '" << val << "'";
            glGetMultisamplefv(static_cast< std::uint32_t >(pname), index, val);
            __gtulu_check_error();

          }

          void get_n_color_tableARB< >::call(gtulu::constant_base const& target, gtulu::constant_base const& format, gtulu::constant_base const& type, gtulu::int32_t buf_size, void* table) {
            __gtulu_debug() << "call glGetnColorTableARB " "target: '" << target << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "buf_size: '" << buf_size << "'" ", " "table: '" << table << "'";
            glGetnColorTableARB(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), buf_size, table);
            __gtulu_check_error();

          }

          void get_n_compressed_tex_imageARB< >::call(gtulu::constant_base const& target, gtulu::int32_t lod, gtulu::int32_t buf_size, void* img) {
            __gtulu_debug() << "call glGetnCompressedTexImageARB " "target: '" << target << "'" ", " "lod: '" << lod << "'" ", " "buf_size: '" << buf_size << "'" ", " "img: '" << img << "'";
            glGetnCompressedTexImageARB(static_cast< std::uint32_t >(target), lod, buf_size, img);
            __gtulu_check_error();

          }

          void get_n_convolution_filterARB< >::call(gtulu::constant_base const& target, gtulu::constant_base const& format, gtulu::constant_base const& type, gtulu::int32_t buf_size, void* image) {
            __gtulu_debug() << "call glGetnConvolutionFilterARB " "target: '" << target << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "buf_size: '" << buf_size << "'" ", " "image: '" << image << "'";
            glGetnConvolutionFilterARB(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), buf_size, image);
            __gtulu_check_error();

          }

          void get_n_histogramARB< >::call(gtulu::constant_base const& target, bool reset, gtulu::constant_base const& format, gtulu::constant_base const& type, gtulu::int32_t buf_size, void* values) {
            __gtulu_debug() << "call glGetnHistogramARB " "target: '" << target << "'" ", " "reset: '" << reset << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "buf_size: '" << buf_size << "'" ", " "values: '" << values << "'";
            glGetnHistogramARB(static_cast< std::uint32_t >(target), reset, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), buf_size, values);
            __gtulu_check_error();

          }

          void get_n_mapdvARB< >::call(gtulu::constant_base const& target, gtulu::constant_base const& query, gtulu::int32_t buf_size, gtulu::float64_t* v) {
            __gtulu_debug() << "call glGetnMapdvARB " "target: '" << target << "'" ", " "query: '" << query << "'" ", " "buf_size: '" << buf_size << "'" ", " "v: '" << v << "'";
            glGetnMapdvARB(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(query), buf_size, v);
            __gtulu_check_error();

          }

          void get_n_mapfvARB< >::call(gtulu::constant_base const& target, gtulu::constant_base const& query, gtulu::int32_t buf_size, gtulu::float32_t* v) {
            __gtulu_debug() << "call glGetnMapfvARB " "target: '" << target << "'" ", " "query: '" << query << "'" ", " "buf_size: '" << buf_size << "'" ", " "v: '" << v << "'";
            glGetnMapfvARB(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(query), buf_size, v);
            __gtulu_check_error();

          }

          void get_n_mapivARB< >::call(gtulu::constant_base const& target, gtulu::constant_base const& query, gtulu::int32_t buf_size, gtulu::int32_t* v) {
            __gtulu_debug() << "call glGetnMapivARB " "target: '" << target << "'" ", " "query: '" << query << "'" ", " "buf_size: '" << buf_size << "'" ", " "v: '" << v << "'";
            glGetnMapivARB(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(query), buf_size, v);
            __gtulu_check_error();

          }

          void get_n_minmaxARB< >::call(gtulu::constant_base const& target, bool reset, gtulu::constant_base const& format, gtulu::constant_base const& type, gtulu::int32_t buf_size, void* values) {
            __gtulu_debug() << "call glGetnMinmaxARB " "target: '" << target << "'" ", " "reset: '" << reset << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "buf_size: '" << buf_size << "'" ", " "values: '" << values << "'";
            glGetnMinmaxARB(static_cast< std::uint32_t >(target), reset, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), buf_size, values);
            __gtulu_check_error();

          }

          void get_n_pixel_mapfvARB< >::call(gtulu::constant_base const& map, gtulu::int32_t buf_size, gtulu::float32_t* values) {
            __gtulu_debug() << "call glGetnPixelMapfvARB " "map: '" << map << "'" ", " "buf_size: '" << buf_size << "'" ", " "values: '" << values << "'";
            glGetnPixelMapfvARB(static_cast< std::uint32_t >(map), buf_size, values);
            __gtulu_check_error();

          }

          void get_n_pixel_mapuivARB< >::call(gtulu::constant_base const& map, gtulu::int32_t buf_size, gtulu::uint32_t* values) {
            __gtulu_debug() << "call glGetnPixelMapuivARB " "map: '" << map << "'" ", " "buf_size: '" << buf_size << "'" ", " "values: '" << values << "'";
            glGetnPixelMapuivARB(static_cast< std::uint32_t >(map), buf_size, values);
            __gtulu_check_error();

          }

          void get_n_pixel_mapusvARB< >::call(gtulu::constant_base const& map, gtulu::int32_t buf_size, gtulu::uint16_t* values) {
            __gtulu_debug() << "call glGetnPixelMapusvARB " "map: '" << map << "'" ", " "buf_size: '" << buf_size << "'" ", " "values: '" << values << "'";
            glGetnPixelMapusvARB(static_cast< std::uint32_t >(map), buf_size, values);
            __gtulu_check_error();

          }

          void get_n_polygon_stippleARB< >::call(gtulu::int32_t buf_size, gtulu::uint8_t* pattern) {
            __gtulu_debug() << "call glGetnPolygonStippleARB " "buf_size: '" << buf_size << "'" ", " "pattern: '" << pattern << "'";
            glGetnPolygonStippleARB(buf_size, pattern);
            __gtulu_check_error();

          }

          void get_n_separable_filterARB< >::call(gtulu::constant_base const& target, gtulu::constant_base const& format, gtulu::constant_base const& type, gtulu::int32_t row_buf_size, void* row, gtulu::int32_t column_buf_size, void* column, void* span) {
            __gtulu_debug() << "call glGetnSeparableFilterARB " "target: '" << target << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "row_buf_size: '" << row_buf_size << "'" ", " "row: '" << row << "'" ", " "column_buf_size: '" << column_buf_size << "'" ", " "column: '" << column << "'" ", " "span: '" << span << "'";
            glGetnSeparableFilterARB(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), row_buf_size, row, column_buf_size, column, span);
            __gtulu_check_error();

          }

          void get_n_tex_imageARB< >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& format, gtulu::constant_base const& type, gtulu::int32_t buf_size, void* img) {
            __gtulu_debug() << "call glGetnTexImageARB " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "buf_size: '" << buf_size << "'" ", " "img: '" << img << "'";
            glGetnTexImageARB(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), buf_size, img);
            __gtulu_check_error();

          }

          void get_n_uniformdvARB< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t buf_size, gtulu::float64_t* params) {
            __gtulu_debug() << "call glGetnUniformdvARB " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "buf_size: '" << buf_size << "'" ", " "params: '" << params << "'";
            glGetnUniformdvARB(program, location, buf_size, params);
            __gtulu_check_error();

          }

          void get_n_uniformfvARB< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t buf_size, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetnUniformfvARB " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "buf_size: '" << buf_size << "'" ", " "params: '" << params << "'";
            glGetnUniformfvARB(program, location, buf_size, params);
            __gtulu_check_error();

          }

          void get_n_uniformivARB< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t buf_size, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetnUniformivARB " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "buf_size: '" << buf_size << "'" ", " "params: '" << params << "'";
            glGetnUniformivARB(program, location, buf_size, params);
            __gtulu_check_error();

          }

          void get_n_uniformuivARB< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t buf_size, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetnUniformuivARB " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "buf_size: '" << buf_size << "'" ", " "params: '" << params << "'";
            glGetnUniformuivARB(program, location, buf_size, params);
            __gtulu_check_error();

          }

          void get_named_stringARB< >::call(gtulu::int32_t namelen, char const* name, gtulu::int32_t buf_size, gtulu::int32_t* stringlen, char* string) {
            __gtulu_debug() << "call glGetNamedStringARB " "namelen: '" << namelen << "'" ", " "name: '" << name << "'" ", " "buf_size: '" << buf_size << "'" ", " "stringlen: '" << stringlen << "'" ", " "string: '" << string << "'";
            glGetNamedStringARB(namelen, name, buf_size, stringlen, string);
            __gtulu_check_error();

          }

          void get_named_stringivARB< >::call(gtulu::int32_t namelen, char const* name, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetNamedStringivARB " "namelen: '" << namelen << "'" ", " "name: '" << name << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetNamedStringivARB(namelen, name, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_pointer< >::call(gtulu::constant_base const& pname, void** params) {
            __gtulu_debug() << "call glGetPointerv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetPointerv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_program< >::call(gtulu::uint32_t program, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetProgramiv " "program: '" << program << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetProgramiv(program, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_program_binary< >::call(gtulu::uint32_t program, gtulu::int32_t buf_size, gtulu::int32_t* length, gtulu::uint32_t* binary_format, void* binary) {
            __gtulu_debug() << "call glGetProgramBinary " "program: '" << program << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "binary_format: '" << binary_format << "'" ", " "binary: '" << binary << "'";
            glGetProgramBinary(program, buf_size, length, binary_format, binary);
            __gtulu_check_error();

          }

          void get_program_info_log< >::call(gtulu::uint32_t program, gtulu::int32_t buf_size, gtulu::int32_t* length, char* info_log) {
            __gtulu_debug() << "call glGetProgramInfoLog " "program: '" << program << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "info_log: '" << info_log << "'";
            glGetProgramInfoLog(program, buf_size, length, info_log);
            __gtulu_check_error();

          }

          void get_program_pipeline< >::call(gtulu::uint32_t pipeline, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetProgramPipelineiv " "pipeline: '" << pipeline << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetProgramPipelineiv(pipeline, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_program_pipeline_info_log< >::call(gtulu::uint32_t pipeline, gtulu::int32_t buf_size, gtulu::int32_t* length, char* info_log) {
            __gtulu_debug() << "call glGetProgramPipelineInfoLog " "pipeline: '" << pipeline << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "info_log: '" << info_log << "'";
            glGetProgramPipelineInfoLog(pipeline, buf_size, length, info_log);
            __gtulu_check_error();

          }

          void get_program_stage< >::call(gtulu::uint32_t program, gtulu::constant_base const& shadertype, gtulu::constant_base const& pname, gtulu::int32_t* values) {
            __gtulu_debug() << "call glGetProgramStageiv " "program: '" << program << "'" ", " "shadertype: '" << shadertype << "'" ", " "pname: '" << pname << "'" ", " "values: '" << values << "'";
            glGetProgramStageiv(program, static_cast< std::uint32_t >(shadertype), static_cast< std::uint32_t >(pname), values);
            __gtulu_check_error();

          }

          void get_query< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetQueryiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_indexed< >::call(gtulu::constant_base const& target, gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetQueryIndexediv " "target: '" << target << "'" ", " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryIndexediv(static_cast< std::uint32_t >(target), index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t id, gtulu::constant_base const& pname, gtulu::uint64_t* params) {
            __gtulu_debug() << "call glGetQueryObjectui64v " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjectui64v(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t id, gtulu::constant_base const& pname, gtulu::int64_t* params) {
            __gtulu_debug() << "call glGetQueryObjecti64v " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjecti64v(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t id, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetQueryObjectuiv " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjectuiv(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_query_object< >::call(gtulu::uint32_t id, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetQueryObjectiv " "id: '" << id << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetQueryObjectiv(id, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_renderbuffer_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetRenderbufferParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetRenderbufferParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameterfv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameterfv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameteriv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameteriv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter_integer< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameterIuiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameterIuiv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_sampler_parameter_integer< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetSamplerParameterIiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetSamplerParameterIiv(sampler, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_shader< >::call(gtulu::uint32_t shader, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetShaderiv " "shader: '" << shader << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetShaderiv(shader, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_shader_info_log< >::call(gtulu::uint32_t shader, gtulu::int32_t buf_size, gtulu::int32_t* length, char* info_log) {
            __gtulu_debug() << "call glGetShaderInfoLog " "shader: '" << shader << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "info_log: '" << info_log << "'";
            glGetShaderInfoLog(shader, buf_size, length, info_log);
            __gtulu_check_error();

          }

          void get_shader_precision_format< >::call(gtulu::constant_base const& shadertype, gtulu::constant_base const& precisiontype, gtulu::int32_t* range, gtulu::int32_t* precision) {
            __gtulu_debug() << "call glGetShaderPrecisionFormat " "shadertype: '" << shadertype << "'" ", " "precisiontype: '" << precisiontype << "'" ", " "range: '" << range << "'" ", " "precision: '" << precision << "'";
            glGetShaderPrecisionFormat(static_cast< std::uint32_t >(shadertype), static_cast< std::uint32_t >(precisiontype), range, precision);
            __gtulu_check_error();

          }

          void get_shader_source< >::call(gtulu::uint32_t shader, gtulu::int32_t buf_size, gtulu::int32_t* length, char* source) {
            __gtulu_debug() << "call glGetShaderSource " "shader: '" << shader << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "source: '" << source << "'";
            glGetShaderSource(shader, buf_size, length, source);
            __gtulu_check_error();

          }

          gtulu::uint8_t const* get_string< >::call(gtulu::constant_base const& name, gtulu::uint32_t index) {
            __gtulu_debug() << "call glGetStringi " "name: '" << name << "'" ", " "index: '" << index << "'";
            gtulu::uint8_t const* output = glGetStringi(static_cast< std::uint32_t >(name), index);
            __gtulu_check_error();
            return output;
          }

          gtulu::uint8_t const* get_string< >::call(gtulu::constant_base const& name) {
            __gtulu_debug() << "call glGetString " "name: '" << name << "'";
            gtulu::uint8_t const* output = glGetString(static_cast< std::uint32_t >(name));
            __gtulu_check_error();
            return output;
          }

          gtulu::uint32_t get_subroutine_index< >::call(gtulu::uint32_t program, gtulu::constant_base const& shadertype, char const* name) {
            __gtulu_debug() << "call glGetSubroutineIndex " "program: '" << program << "'" ", " "shadertype: '" << shadertype << "'" ", " "name: '" << name << "'";
            gtulu::uint32_t output = glGetSubroutineIndex(program, static_cast< std::uint32_t >(shadertype), name);
            __gtulu_check_error();
            return output;
          }

          gtulu::int32_t get_subroutine_uniform_location< >::call(gtulu::uint32_t program, gtulu::constant_base const& shadertype, char const* name) {
            __gtulu_debug() << "call glGetSubroutineUniformLocation " "program: '" << program << "'" ", " "shadertype: '" << shadertype << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetSubroutineUniformLocation(program, static_cast< std::uint32_t >(shadertype), name);
            __gtulu_check_error();
            return output;
          }

          void get_tex_image< >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& format, gtulu::constant_base const& type, void* pixels) {
            __gtulu_debug() << "call glGetTexImage " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glGetTexImage(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          void get_tex_level_parameter< >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetTexLevelParameteriv " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexLevelParameteriv(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_level_parameter< >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetTexLevelParameterfv " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexLevelParameterfv(static_cast< std::uint32_t >(target), level, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetTexParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetTexParameterfv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameterfv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetTexParameterIuiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameterIuiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetTexParameterIiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetTexParameterIiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_transform_feedback_varying< >::call(gtulu::uint32_t program, gtulu::uint32_t index, gtulu::int32_t buf_size, gtulu::int32_t* length, gtulu::int32_t* size, gtulu::uint32_t* type, char* name) {
            __gtulu_debug() << "call glGetTransformFeedbackVarying " "program: '" << program << "'" ", " "index: '" << index << "'" ", " "buf_size: '" << buf_size << "'" ", " "length: '" << length << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "name: '" << name << "'";
            glGetTransformFeedbackVarying(program, index, buf_size, length, size, type, name);
            __gtulu_check_error();

          }

          void get_uniform< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float64_t* params) {
            __gtulu_debug() << "call glGetUniformdv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformdv(program, location, params);
            __gtulu_check_error();

          }

          void get_uniform< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetUniformuiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformuiv(program, location, params);
            __gtulu_check_error();

          }

          void get_uniform< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetUniformiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformiv(program, location, params);
            __gtulu_check_error();

          }

          void get_uniform< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetUniformfv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformfv(program, location, params);
            __gtulu_check_error();

          }

          gtulu::uint32_t get_uniform_block_index< >::call(gtulu::uint32_t program, char const* uniform_block_name) {
            __gtulu_debug() << "call glGetUniformBlockIndex " "program: '" << program << "'" ", " "uniform_block_name: '" << uniform_block_name << "'";
            gtulu::uint32_t output = glGetUniformBlockIndex(program, uniform_block_name);
            __gtulu_check_error();
            return output;
          }

          void get_uniform_indices< >::call(gtulu::uint32_t program, gtulu::int32_t uniform_count, char const* const* uniform_names, gtulu::uint32_t* uniform_indices) {
            __gtulu_debug() << "call glGetUniformIndices " "program: '" << program << "'" ", " "uniform_count: '" << uniform_count << "'" ", " "uniform_names: '" << uniform_names << "'" ", " "uniform_indices: '" << uniform_indices << "'";
            glGetUniformIndices(program, uniform_count, uniform_names, uniform_indices);
            __gtulu_check_error();

          }

          gtulu::int32_t get_uniform_location< >::call(gtulu::uint32_t program, char const* name) {
            __gtulu_debug() << "call glGetUniformLocation " "program: '" << program << "'" ", " "name: '" << name << "'";
            gtulu::int32_t output = glGetUniformLocation(program, name);
            __gtulu_check_error();
            return output;
          }

          void get_uniform_subroutine< >::call(gtulu::constant_base const& shadertype, gtulu::int32_t location, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetUniformSubroutineuiv " "shadertype: '" << shadertype << "'" ", " "location: '" << location << "'" ", " "params: '" << params << "'";
            glGetUniformSubroutineuiv(static_cast< std::uint32_t >(shadertype), location, params);
            __gtulu_check_error();

          }

          void get_vertex_attrib< >::call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribiv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribiv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib< >::call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::float32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribfv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribfv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib< >::call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::float64_t* params) {
            __gtulu_debug() << "call glGetVertexAttribdv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribdv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib_integer< >::call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::uint32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribIuiv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribIuiv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib_integer< >::call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::int32_t* params) {
            __gtulu_debug() << "call glGetVertexAttribIiv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribIiv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib_large< >::call(gtulu::uint32_t index, gtulu::constant_base const& pname, gtulu::float64_t* params) {
            __gtulu_debug() << "call glGetVertexAttribLdv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glGetVertexAttribLdv(index, static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void get_vertex_attrib_pointer< >::call(gtulu::uint32_t index, gtulu::constant_base const& pname, void** pointer) {
            __gtulu_debug() << "call glGetVertexAttribPointerv " "index: '" << index << "'" ", " "pname: '" << pname << "'" ", " "pointer: '" << pointer << "'";
            glGetVertexAttribPointerv(index, static_cast< std::uint32_t >(pname), pointer);
            __gtulu_check_error();

          }

          void hint< >::call(gtulu::constant_base const& target, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glHint " "target: '" << target << "'" ", " "mode: '" << mode << "'";
            glHint(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          bool is_buffer< >::call(gtulu::uint32_t buffer) {
            __gtulu_debug() << "call glIsBuffer " "buffer: '" << buffer << "'";
            bool output = glIsBuffer(buffer);
            __gtulu_check_error();
            return output;
          }

          bool is_enabled< >::call(gtulu::constant_base const& target, gtulu::uint32_t index) {
            __gtulu_debug() << "call glIsEnabledi " "target: '" << target << "'" ", " "index: '" << index << "'";
            bool output = glIsEnabledi(static_cast< std::uint32_t >(target), index);
            __gtulu_check_error();
            return output;
          }

          bool is_enabled< >::call(gtulu::constant_base const& cap) {
            __gtulu_debug() << "call glIsEnabled " "cap: '" << cap << "'";
            bool output = glIsEnabled(static_cast< std::uint32_t >(cap));
            __gtulu_check_error();
            return output;
          }

          bool is_framebuffer< >::call(gtulu::uint32_t framebuffer) {
            __gtulu_debug() << "call glIsFramebuffer " "framebuffer: '" << framebuffer << "'";
            bool output = glIsFramebuffer(framebuffer);
            __gtulu_check_error();
            return output;
          }

          bool is_named_stringARB< >::call(gtulu::int32_t namelen, char const* name) {
            __gtulu_debug() << "call glIsNamedStringARB " "namelen: '" << namelen << "'" ", " "name: '" << name << "'";
            bool output = glIsNamedStringARB(namelen, name);
            __gtulu_check_error();
            return output;
          }

          bool is_program< >::call(gtulu::uint32_t program) {
            __gtulu_debug() << "call glIsProgram " "program: '" << program << "'";
            bool output = glIsProgram(program);
            __gtulu_check_error();
            return output;
          }

          bool is_program_pipeline< >::call(gtulu::uint32_t pipeline) {
            __gtulu_debug() << "call glIsProgramPipeline " "pipeline: '" << pipeline << "'";
            bool output = glIsProgramPipeline(pipeline);
            __gtulu_check_error();
            return output;
          }

          bool is_query< >::call(gtulu::uint32_t id) {
            __gtulu_debug() << "call glIsQuery " "id: '" << id << "'";
            bool output = glIsQuery(id);
            __gtulu_check_error();
            return output;
          }

          bool is_renderbuffer< >::call(gtulu::uint32_t renderbuffer) {
            __gtulu_debug() << "call glIsRenderbuffer " "renderbuffer: '" << renderbuffer << "'";
            bool output = glIsRenderbuffer(renderbuffer);
            __gtulu_check_error();
            return output;
          }

          bool is_sampler< >::call(gtulu::uint32_t sampler) {
            __gtulu_debug() << "call glIsSampler " "sampler: '" << sampler << "'";
            bool output = glIsSampler(sampler);
            __gtulu_check_error();
            return output;
          }

          bool is_shader< >::call(gtulu::uint32_t shader) {
            __gtulu_debug() << "call glIsShader " "shader: '" << shader << "'";
            bool output = glIsShader(shader);
            __gtulu_check_error();
            return output;
          }

          bool is_texture< >::call(gtulu::uint32_t texture) {
            __gtulu_debug() << "call glIsTexture " "texture: '" << texture << "'";
            bool output = glIsTexture(texture);
            __gtulu_check_error();
            return output;
          }

          bool is_transform_feedback< >::call(gtulu::uint32_t id) {
            __gtulu_debug() << "call glIsTransformFeedback " "id: '" << id << "'";
            bool output = glIsTransformFeedback(id);
            __gtulu_check_error();
            return output;
          }

          bool is_vertex_array< >::call(gtulu::uint32_t array) {
            __gtulu_debug() << "call glIsVertexArray " "array: '" << array << "'";
            bool output = glIsVertexArray(array);
            __gtulu_check_error();
            return output;
          }

          void line_width< >::call(gtulu::float32_t width) {
            __gtulu_debug() << "call glLineWidth " "width: '" << width << "'";
            glLineWidth(width);
            __gtulu_check_error();

          }

          void link_program< >::call(gtulu::uint32_t program) {
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

          void* map_buffer_range< >::call(gtulu::constant_base const& target, gtulu::int64_t offset, gtulu::int64_t length, gtulu::uint32_t access) {
            __gtulu_debug() << "call glMapBufferRange " "target: '" << target << "'" ", " "offset: '" << offset << "'" ", " "length: '" << length << "'" ", " "access: '" << access << "'";
            void* output = glMapBufferRange(static_cast< std::uint32_t >(target), offset, length, access);
            __gtulu_check_error();
            return output;
          }

          void memory_barrier< >::call(gtulu::uint32_t barriers) {
            __gtulu_debug() << "call glMemoryBarrier " "barriers: '" << barriers << "'";
            glMemoryBarrier(barriers);
            __gtulu_check_error();

          }

          void min_sample_shading< >::call(gtulu::float32_t value) {
            __gtulu_debug() << "call glMinSampleShading " "value: '" << value << "'";
            glMinSampleShading(value);
            __gtulu_check_error();

          }

          void min_sample_shadingARB< >::call(gtulu::float32_t value) {
            __gtulu_debug() << "call glMinSampleShadingARB " "value: '" << value << "'";
            glMinSampleShadingARB(value);
            __gtulu_check_error();

          }

          void multi_draw_arrays< >::call(gtulu::constant_base const& mode, gtulu::int32_t const* first, gtulu::int32_t const* count, gtulu::int32_t primcount) {
            __gtulu_debug() << "call glMultiDrawArrays " "mode: '" << mode << "'" ", " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "primcount: '" << primcount << "'";
            glMultiDrawArrays(static_cast< std::uint32_t >(mode), first, count, primcount);
            __gtulu_check_error();

          }

          void multi_draw_elements< >::call(gtulu::constant_base const& mode, gtulu::int32_t const* count, gtulu::constant_base const& type, void const* const* indices, gtulu::int32_t primcount) {
            __gtulu_debug() << "call glMultiDrawElements " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "primcount: '" << primcount << "'";
            glMultiDrawElements(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, primcount);
            __gtulu_check_error();

          }

          void multi_draw_elements_base_vertex< >::call(gtulu::constant_base const& mode, gtulu::int32_t const* count, gtulu::constant_base const& type, void const* const* indices, gtulu::int32_t primcount, gtulu::int32_t const* basevertex) {
            __gtulu_debug() << "call glMultiDrawElementsBaseVertex " "mode: '" << mode << "'" ", " "count: '" << count << "'" ", " "type: '" << type << "'" ", " "indices: '" << indices << "'" ", " "primcount: '" << primcount << "'" ", " "basevertex: '" << basevertex << "'";
            glMultiDrawElementsBaseVertex(static_cast< std::uint32_t >(mode), count, static_cast< std::uint32_t >(type), indices, primcount, basevertex);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glMultiTexCoordP4uiv " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP4uiv(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glMultiTexCoordP4ui " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP4ui(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glMultiTexCoordP3uiv " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP3uiv(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glMultiTexCoordP3ui " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP3ui(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glMultiTexCoordP2uiv " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP2uiv(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glMultiTexCoordP2ui " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP2ui(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glMultiTexCoordP1uiv " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP1uiv(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void multi_tex_coord_packed< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& texture, gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glMultiTexCoordP1ui " "texture: '" << texture << "'" ", " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glMultiTexCoordP1ui(static_cast< std::uint32_t >(texture), static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          void named_stringARB< >::call(gtulu::constant_base const& type, gtulu::int32_t namelen, char const* name, gtulu::int32_t stringlen, char const* string) {
            __gtulu_debug() << "call glNamedStringARB " "type: '" << type << "'" ", " "namelen: '" << namelen << "'" ", " "name: '" << name << "'" ", " "stringlen: '" << stringlen << "'" ", " "string: '" << string << "'";
            glNamedStringARB(static_cast< std::uint32_t >(type), namelen, name, stringlen, string);
            __gtulu_check_error();

          }

          template< > void normal_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glNormalP3uiv " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glNormalP3uiv(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void normal_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glNormalP3ui " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glNormalP3ui(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          void patch_parameter< >::call(gtulu::constant_base const& pname, gtulu::float32_t const* values) {
            __gtulu_debug() << "call glPatchParameterfv " "pname: '" << pname << "'" ", " "values: '" << values << "'";
            glPatchParameterfv(static_cast< std::uint32_t >(pname), values);
            __gtulu_check_error();

          }

          void patch_parameter< >::call(gtulu::constant_base const& pname, gtulu::int32_t value) {
            __gtulu_debug() << "call glPatchParameteri " "pname: '" << pname << "'" ", " "value: '" << value << "'";
            glPatchParameteri(static_cast< std::uint32_t >(pname), value);
            __gtulu_check_error();

          }

          void pause_transform_feedback< >::call() {
            __gtulu_debug() << "call glPauseTransformFeedback ";
            glPauseTransformFeedback();
            __gtulu_check_error();

          }

          void pixel_store< >::call(gtulu::constant_base const& pname, gtulu::int32_t param) {
            __gtulu_debug() << "call glPixelStorei " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPixelStorei(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void pixel_store< >::call(gtulu::constant_base const& pname, gtulu::float32_t param) {
            __gtulu_debug() << "call glPixelStoref " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPixelStoref(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glPointParameteriv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glPointParameteriv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::int32_t param) {
            __gtulu_debug() << "call glPointParameteri " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPointParameteri(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::float32_t const* params) {
            __gtulu_debug() << "call glPointParameterfv " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glPointParameterfv(static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void point_parameter< >::call(gtulu::constant_base const& pname, gtulu::float32_t param) {
            __gtulu_debug() << "call glPointParameterf " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glPointParameterf(static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void point_size< >::call(gtulu::float32_t size) {
            __gtulu_debug() << "call glPointSize " "size: '" << size << "'";
            glPointSize(size);
            __gtulu_check_error();

          }

          void polygon_mode< >::call(gtulu::constant_base const& face, gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glPolygonMode " "face: '" << face << "'" ", " "mode: '" << mode << "'";
            glPolygonMode(static_cast< std::uint32_t >(face), static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void polygon_offset< >::call(gtulu::float32_t factor, gtulu::float32_t units) {
            __gtulu_debug() << "call glPolygonOffset " "factor: '" << factor << "'" ", " "units: '" << units << "'";
            glPolygonOffset(factor, units);
            __gtulu_check_error();

          }

          void primitive_restart_index< >::call(gtulu::uint32_t index) {
            __gtulu_debug() << "call glPrimitiveRestartIndex " "index: '" << index << "'";
            glPrimitiveRestartIndex(index);
            __gtulu_check_error();

          }

          void program_binary< >::call(gtulu::uint32_t program, gtulu::constant_base const& binary_format, void const* binary, gtulu::int32_t length) {
            __gtulu_debug() << "call glProgramBinary " "program: '" << program << "'" ", " "binary_format: '" << binary_format << "'" ", " "binary: '" << binary << "'" ", " "length: '" << length << "'";
            glProgramBinary(program, static_cast< std::uint32_t >(binary_format), binary, length);
            __gtulu_check_error();

          }

          void program_parameter< >::call(gtulu::uint32_t program, gtulu::constant_base const& pname, gtulu::int32_t value) {
            __gtulu_debug() << "call glProgramParameteri " "program: '" << program << "'" ", " "pname: '" << pname << "'" ", " "value: '" << value << "'";
            glProgramParameteri(program, static_cast< std::uint32_t >(pname), value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glProgramUniform4uiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform4uiv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::uint32_t v_0, gtulu::uint32_t v_1, gtulu::uint32_t v_2, gtulu::uint32_t v_3) {
            __gtulu_debug() << "call glProgramUniform4ui " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glProgramUniform4ui(program, location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniform4dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform4dv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float64_t v_0, gtulu::float64_t v_1, gtulu::float64_t v_2, gtulu::float64_t v_3) {
            __gtulu_debug() << "call glProgramUniform4d " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glProgramUniform4d(program, location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniform4fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform4fv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float32_t v_0, gtulu::float32_t v_1, gtulu::float32_t v_2, gtulu::float32_t v_3) {
            __gtulu_debug() << "call glProgramUniform4f " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glProgramUniform4f(program, location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glProgramUniform4iv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform4iv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t v_0, gtulu::int32_t v_1, gtulu::int32_t v_2, gtulu::int32_t v_3) {
            __gtulu_debug() << "call glProgramUniform4i " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glProgramUniform4i(program, location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glProgramUniform3uiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform3uiv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::uint32_t v_0, gtulu::uint32_t v_1, gtulu::uint32_t v_2) {
            __gtulu_debug() << "call glProgramUniform3ui " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glProgramUniform3ui(program, location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniform3dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform3dv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float64_t v_0, gtulu::float64_t v_1, gtulu::float64_t v_2) {
            __gtulu_debug() << "call glProgramUniform3d " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glProgramUniform3d(program, location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniform3fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform3fv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float32_t v_0, gtulu::float32_t v_1, gtulu::float32_t v_2) {
            __gtulu_debug() << "call glProgramUniform3f " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glProgramUniform3f(program, location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glProgramUniform3iv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform3iv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t v_0, gtulu::int32_t v_1, gtulu::int32_t v_2) {
            __gtulu_debug() << "call glProgramUniform3i " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glProgramUniform3i(program, location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glProgramUniform2uiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform2uiv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::uint32_t v_0, gtulu::uint32_t v_1) {
            __gtulu_debug() << "call glProgramUniform2ui " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glProgramUniform2ui(program, location, v_0, v_1);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniform2dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform2dv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float64_t v_0, gtulu::float64_t v_1) {
            __gtulu_debug() << "call glProgramUniform2d " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glProgramUniform2d(program, location, v_0, v_1);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniform2fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform2fv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float32_t v_0, gtulu::float32_t v_1) {
            __gtulu_debug() << "call glProgramUniform2f " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glProgramUniform2f(program, location, v_0, v_1);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glProgramUniform2iv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform2iv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t v_0, gtulu::int32_t v_1) {
            __gtulu_debug() << "call glProgramUniform2i " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glProgramUniform2i(program, location, v_0, v_1);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glProgramUniform1uiv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform1uiv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::uint32_t v_0) {
            __gtulu_debug() << "call glProgramUniform1ui " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glProgramUniform1ui(program, location, v_0);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniform1dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform1dv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float64_t v_0) {
            __gtulu_debug() << "call glProgramUniform1d " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glProgramUniform1d(program, location, v_0);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniform1fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform1fv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::float32_t v_0) {
            __gtulu_debug() << "call glProgramUniform1f " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glProgramUniform1f(program, location, v_0);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glProgramUniform1iv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glProgramUniform1iv(program, location, count, value);
            __gtulu_check_error();

          }

          template< > void program_uniform< boost::mpl::int_< 1 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t v_0) {
            __gtulu_debug() << "call glProgramUniform1i " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glProgramUniform1i(program, location, v_0);
            __gtulu_check_error();

          }

          template< > void program_uniform_matrix< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix4dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix4dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void program_uniform_matrix< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix3dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix3dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void program_uniform_matrix< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix2dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix2dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void program_uniform_matrix< boost::mpl::int_< 4 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix4fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix4fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void program_uniform_matrix< boost::mpl::int_< 3 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix3fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix3fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void program_uniform_matrix< boost::mpl::int_< 2 > >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix2fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix2fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_2x3< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix2x3dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_2x3< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix2x3fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_2x4< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix2x4dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_2x4< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix2x4fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_3x2< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix3x2dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_3x2< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix3x2fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_3x4< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix3x4dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_3x4< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix3x4fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_4x2< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix4x2dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_4x2< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix4x2fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_4x3< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix4x3dv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void program_uniform_matrix_4x3< >::call(gtulu::uint32_t program, gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glProgramUniformMatrix4x3fv " "program: '" << program << "'" ", " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
            __gtulu_check_error();

          }

          void provoking_vertex< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glProvokingVertex " "mode: '" << mode << "'";
            glProvokingVertex(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void query_counter< >::call(gtulu::uint32_t id, gtulu::constant_base const& target) {
            __gtulu_debug() << "call glQueryCounter " "id: '" << id << "'" ", " "target: '" << target << "'";
            glQueryCounter(id, static_cast< std::uint32_t >(target));
            __gtulu_check_error();

          }

          void read_buffer< >::call(gtulu::constant_base const& mode) {
            __gtulu_debug() << "call glReadBuffer " "mode: '" << mode << "'";
            glReadBuffer(static_cast< std::uint32_t >(mode));
            __gtulu_check_error();

          }

          void read_n_pixelsARB< >::call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height, gtulu::constant_base const& format, gtulu::constant_base const& type, gtulu::int32_t buf_size, void* data) {
            __gtulu_debug() << "call glReadnPixelsARB " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "buf_size: '" << buf_size << "'" ", " "data: '" << data << "'";
            glReadnPixelsARB(x, y, width, height, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), buf_size, data);
            __gtulu_check_error();

          }

          void read_pixels< >::call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height, gtulu::constant_base const& format, gtulu::constant_base const& type, void* pixels) {
            __gtulu_debug() << "call glReadPixels " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glReadPixels(x, y, width, height, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          void release_shader_compiler< >::call() {
            __gtulu_debug() << "call glReleaseShaderCompiler ";
            glReleaseShaderCompiler();
            __gtulu_check_error();

          }

          void renderbuffer_storage< >::call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glRenderbufferStorage " "target: '" << target << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glRenderbufferStorage(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(internalformat), width, height);
            __gtulu_check_error();

          }

          void renderbuffer_storage_multisample< >::call(gtulu::constant_base const& target, gtulu::int32_t samples, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glRenderbufferStorageMultisample " "target: '" << target << "'" ", " "samples: '" << samples << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glRenderbufferStorageMultisample(static_cast< std::uint32_t >(target), samples, static_cast< std::uint32_t >(internalformat), width, height);
            __gtulu_check_error();

          }

          void resume_transform_feedback< >::call() {
            __gtulu_debug() << "call glResumeTransformFeedback ";
            glResumeTransformFeedback();
            __gtulu_check_error();

          }

          void sample_coverage< >::call(gtulu::float32_t value, bool invert) {
            __gtulu_debug() << "call glSampleCoverage " "value: '" << value << "'" ", " "invert: '" << invert << "'";
            glSampleCoverage(value, invert);
            __gtulu_check_error();

          }

          void sample_mask< >::call(gtulu::uint32_t index, gtulu::uint32_t mask) {
            __gtulu_debug() << "call glSampleMaski " "index: '" << index << "'" ", " "mask: '" << mask << "'";
            glSampleMaski(index, mask);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::float32_t const* param) {
            __gtulu_debug() << "call glSamplerParameterfv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameterfv(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::float32_t param) {
            __gtulu_debug() << "call glSamplerParameterf " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameterf(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::int32_t const* param) {
            __gtulu_debug() << "call glSamplerParameteriv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameteriv(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void sampler_parameter< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::int32_t param) {
            __gtulu_debug() << "call glSamplerParameteri " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameteri(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void sampler_parameter_integer< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::uint32_t const* param) {
            __gtulu_debug() << "call glSamplerParameterIuiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameterIuiv(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void sampler_parameter_integer< >::call(gtulu::uint32_t sampler, gtulu::constant_base const& pname, gtulu::int32_t const* param) {
            __gtulu_debug() << "call glSamplerParameterIiv " "sampler: '" << sampler << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glSamplerParameterIiv(sampler, static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void scissor< >::call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glScissor " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glScissor(x, y, width, height);
            __gtulu_check_error();

          }

          void scissor_array< >::call(gtulu::uint32_t first, gtulu::int32_t count, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glScissorArrayv " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "v: '" << v << "'";
            glScissorArrayv(first, count, v);
            __gtulu_check_error();

          }

          void scissor_indexed< >::call(gtulu::uint32_t index, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glScissorIndexedv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glScissorIndexedv(index, v);
            __gtulu_check_error();

          }

          void scissor_indexed< >::call(gtulu::uint32_t index, gtulu::int32_t left, gtulu::int32_t bottom, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glScissorIndexed " "index: '" << index << "'" ", " "left: '" << left << "'" ", " "bottom: '" << bottom << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glScissorIndexed(index, left, bottom, width, height);
            __gtulu_check_error();

          }

          template< > void secondary_color_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* color) {
            __gtulu_debug() << "call glSecondaryColorP3uiv " "type: '" << type << "'" ", " "color: '" << color << "'";
            glSecondaryColorP3uiv(static_cast< std::uint32_t >(type), color);
            __gtulu_check_error();

          }

          template< > void secondary_color_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t color) {
            __gtulu_debug() << "call glSecondaryColorP3ui " "type: '" << type << "'" ", " "color: '" << color << "'";
            glSecondaryColorP3ui(static_cast< std::uint32_t >(type), color);
            __gtulu_check_error();

          }

          void shader_binary< >::call(gtulu::int32_t count, gtulu::uint32_t const* shaders, gtulu::constant_base const& binaryformat, void const* binary, gtulu::int32_t length) {
            __gtulu_debug() << "call glShaderBinary " "count: '" << count << "'" ", " "shaders: '" << shaders << "'" ", " "binaryformat: '" << binaryformat << "'" ", " "binary: '" << binary << "'" ", " "length: '" << length << "'";
            glShaderBinary(count, shaders, static_cast< std::uint32_t >(binaryformat), binary, length);
            __gtulu_check_error();

          }

          void shader_source< >::call(gtulu::uint32_t shader, gtulu::int32_t count, char const* const* string, gtulu::int32_t const* length) {
            __gtulu_debug() << "call glShaderSource " "shader: '" << shader << "'" ", " "count: '" << count << "'" ", " "string: '" << string << "'" ", " "length: '" << length << "'";
            glShaderSource(shader, count, string, length);
            __gtulu_check_error();

          }

          void stencil_func< >::call(gtulu::constant_base const& func, gtulu::int32_t ref, gtulu::uint32_t mask) {
            __gtulu_debug() << "call glStencilFunc " "func: '" << func << "'" ", " "ref: '" << ref << "'" ", " "mask: '" << mask << "'";
            glStencilFunc(static_cast< std::uint32_t >(func), ref, mask);
            __gtulu_check_error();

          }

          void stencil_func_separate< >::call(gtulu::constant_base const& face, gtulu::constant_base const& func, gtulu::int32_t ref, gtulu::uint32_t mask) {
            __gtulu_debug() << "call glStencilFuncSeparate " "face: '" << face << "'" ", " "func: '" << func << "'" ", " "ref: '" << ref << "'" ", " "mask: '" << mask << "'";
            glStencilFuncSeparate(static_cast< std::uint32_t >(face), static_cast< std::uint32_t >(func), ref, mask);
            __gtulu_check_error();

          }

          void stencil_mask< >::call(gtulu::uint32_t mask) {
            __gtulu_debug() << "call glStencilMask " "mask: '" << mask << "'";
            glStencilMask(mask);
            __gtulu_check_error();

          }

          void stencil_mask_separate< >::call(gtulu::constant_base const& face, gtulu::uint32_t mask) {
            __gtulu_debug() << "call glStencilMaskSeparate " "face: '" << face << "'" ", " "mask: '" << mask << "'";
            glStencilMaskSeparate(static_cast< std::uint32_t >(face), mask);
            __gtulu_check_error();

          }

          void stencil_op< >::call(gtulu::constant_base const& fail, gtulu::constant_base const& zfail, gtulu::constant_base const& zpass) {
            __gtulu_debug() << "call glStencilOp " "fail: '" << fail << "'" ", " "zfail: '" << zfail << "'" ", " "zpass: '" << zpass << "'";
            glStencilOp(static_cast< std::uint32_t >(fail), static_cast< std::uint32_t >(zfail), static_cast< std::uint32_t >(zpass));
            __gtulu_check_error();

          }

          void stencil_op_separate< >::call(gtulu::constant_base const& face, gtulu::constant_base const& sfail, gtulu::constant_base const& dpfail, gtulu::constant_base const& dppass) {
            __gtulu_debug() << "call glStencilOpSeparate " "face: '" << face << "'" ", " "sfail: '" << sfail << "'" ", " "dpfail: '" << dpfail << "'" ", " "dppass: '" << dppass << "'";
            glStencilOpSeparate(static_cast< std::uint32_t >(face), static_cast< std::uint32_t >(sfail), static_cast< std::uint32_t >(dpfail), static_cast< std::uint32_t >(dppass));
            __gtulu_check_error();

          }

          void tex_buffer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& internalformat, gtulu::uint32_t buffer) {
            __gtulu_debug() << "call glTexBuffer " "target: '" << target << "'" ", " "internalformat: '" << internalformat << "'" ", " "buffer: '" << buffer << "'";
            glTexBuffer(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(internalformat), buffer);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glTexCoordP4uiv " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP4uiv(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glTexCoordP4ui " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP4ui(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glTexCoordP3uiv " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP3uiv(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glTexCoordP3ui " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP3ui(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glTexCoordP2uiv " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP2uiv(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glTexCoordP2ui " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP2ui(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* coords) {
            __gtulu_debug() << "call glTexCoordP1uiv " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP1uiv(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_coord_packed< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& type, gtulu::uint32_t coords) {
            __gtulu_debug() << "call glTexCoordP1ui " "type: '" << type << "'" ", " "coords: '" << coords << "'";
            glTexCoordP1ui(static_cast< std::uint32_t >(type), coords);
            __gtulu_check_error();

          }

          template< > void tex_image< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t depth, gtulu::int32_t border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels) {
            __gtulu_debug() << "call glTexImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "border: '" << border << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glTexImage3D(static_cast< std::uint32_t >(target), level, static_cast< std::int32_t >(internalformat), width, height, depth, border, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          template< > void tex_image< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels) {
            __gtulu_debug() << "call glTexImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "border: '" << border << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glTexImage2D(static_cast< std::uint32_t >(target), level, static_cast< std::int32_t >(internalformat), width, height, border, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          template< > void tex_image< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t border, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels) {
            __gtulu_debug() << "call glTexImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "border: '" << border << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glTexImage1D(static_cast< std::uint32_t >(target), level, static_cast< std::int32_t >(internalformat), width, border, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          template< > void tex_image_multisample< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::int32_t samples, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t depth, bool fixedsamplelocations) {
            __gtulu_debug() << "call glTexImage3DMultisample " "target: '" << target << "'" ", " "samples: '" << samples << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations << "'";
            glTexImage3DMultisample(static_cast< std::uint32_t >(target), samples, static_cast< std::int32_t >(internalformat), width, height, depth, fixedsamplelocations);
            __gtulu_check_error();

          }

          template< > void tex_image_multisample< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t samples, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, bool fixedsamplelocations) {
            __gtulu_debug() << "call glTexImage2DMultisample " "target: '" << target << "'" ", " "samples: '" << samples << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations << "'";
            glTexImage2DMultisample(static_cast< std::uint32_t >(target), samples, static_cast< std::int32_t >(internalformat), width, height, fixedsamplelocations);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glTexParameteriv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameteriv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t param) {
            __gtulu_debug() << "call glTexParameteri " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glTexParameteri(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t const* params) {
            __gtulu_debug() << "call glTexParameterfv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameterfv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void tex_parameter< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::float32_t param) {
            __gtulu_debug() << "call glTexParameterf " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "param: '" << param << "'";
            glTexParameterf(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), param);
            __gtulu_check_error();

          }

          void tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::uint32_t const* params) {
            __gtulu_debug() << "call glTexParameterIuiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameterIuiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          void tex_parameter_integer< >::call(gtulu::constant_base const& target, gtulu::constant_base const& pname, gtulu::int32_t const* params) {
            __gtulu_debug() << "call glTexParameterIiv " "target: '" << target << "'" ", " "pname: '" << pname << "'" ", " "params: '" << params << "'";
            glTexParameterIiv(static_cast< std::uint32_t >(target), static_cast< std::uint32_t >(pname), params);
            __gtulu_check_error();

          }

          template< > void tex_storage< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::int32_t levels, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t depth) {
            __gtulu_debug() << "call glTexStorage3D " "target: '" << target << "'" ", " "levels: '" << levels << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'";
            glTexStorage3D(static_cast< std::uint32_t >(target), levels, static_cast< std::uint32_t >(internalformat), width, height, depth);
            __gtulu_check_error();

          }

          template< > void tex_storage< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t levels, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glTexStorage2D " "target: '" << target << "'" ", " "levels: '" << levels << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glTexStorage2D(static_cast< std::uint32_t >(target), levels, static_cast< std::uint32_t >(internalformat), width, height);
            __gtulu_check_error();

          }

          template< > void tex_storage< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::int32_t levels, gtulu::constant_base const& internalformat, gtulu::int32_t width) {
            __gtulu_debug() << "call glTexStorage1D " "target: '" << target << "'" ", " "levels: '" << levels << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'";
            glTexStorage1D(static_cast< std::uint32_t >(target), levels, static_cast< std::uint32_t >(internalformat), width);
            __gtulu_check_error();

          }

          template< > void tex_sub_image< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t zoffset, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t depth, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels) {
            __gtulu_debug() << "call glTexSubImage3D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "zoffset: '" << zoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glTexSubImage3D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, zoffset, width, height, depth, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          template< > void tex_sub_image< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t yoffset, gtulu::int32_t width, gtulu::int32_t height, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels) {
            __gtulu_debug() << "call glTexSubImage2D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "yoffset: '" << yoffset << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glTexSubImage2D(static_cast< std::uint32_t >(target), level, xoffset, yoffset, width, height, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          template< > void tex_sub_image< boost::mpl::int_< 1 > >::call(gtulu::constant_base const& target, gtulu::int32_t level, gtulu::int32_t xoffset, gtulu::int32_t width, gtulu::constant_base const& format, gtulu::constant_base const& type, void const* pixels) {
            __gtulu_debug() << "call glTexSubImage1D " "target: '" << target << "'" ", " "level: '" << level << "'" ", " "xoffset: '" << xoffset << "'" ", " "width: '" << width << "'" ", " "format: '" << format << "'" ", " "type: '" << type << "'" ", " "pixels: '" << pixels << "'";
            glTexSubImage1D(static_cast< std::uint32_t >(target), level, xoffset, width, static_cast< std::uint32_t >(format), static_cast< std::uint32_t >(type), pixels);
            __gtulu_check_error();

          }

          template< > void texture_storage_xTextureStorage_1DEXT< boost::mpl::int_< 1 > >::call(gtulu::uint32_t texture, gtulu::constant_base const& target, gtulu::int32_t levels, gtulu::constant_base const& internalformat, gtulu::int32_t width) {
            __gtulu_debug() << "call glTextureStorage1DEXT " "texture: '" << texture << "'" ", " "target: '" << target << "'" ", " "levels: '" << levels << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'";
            glTextureStorage1DEXT(texture, static_cast< std::uint32_t >(target), levels, static_cast< std::uint32_t >(internalformat), width);
            __gtulu_check_error();

          }

          template< > void texture_storage_xTextureStorage_2DEXT< boost::mpl::int_< 2 > >::call(gtulu::uint32_t texture, gtulu::constant_base const& target, gtulu::int32_t levels, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glTextureStorage2DEXT " "texture: '" << texture << "'" ", " "target: '" << target << "'" ", " "levels: '" << levels << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glTextureStorage2DEXT(texture, static_cast< std::uint32_t >(target), levels, static_cast< std::uint32_t >(internalformat), width, height);
            __gtulu_check_error();

          }

          template< > void texture_storage_xTextureStorage_3DEXT< boost::mpl::int_< 3 > >::call(gtulu::uint32_t texture, gtulu::constant_base const& target, gtulu::int32_t levels, gtulu::constant_base const& internalformat, gtulu::int32_t width, gtulu::int32_t height, gtulu::int32_t depth) {
            __gtulu_debug() << "call glTextureStorage3DEXT " "texture: '" << texture << "'" ", " "target: '" << target << "'" ", " "levels: '" << levels << "'" ", " "internalformat: '" << internalformat << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'" ", " "depth: '" << depth << "'";
            glTextureStorage3DEXT(texture, static_cast< std::uint32_t >(target), levels, static_cast< std::uint32_t >(internalformat), width, height, depth);
            __gtulu_check_error();

          }

          void transform_feedback_varyings< >::call(gtulu::uint32_t program, gtulu::int32_t count, char const* const* varyings, gtulu::constant_base const& buffer_mode) {
            __gtulu_debug() << "call glTransformFeedbackVaryings " "program: '" << program << "'" ", " "count: '" << count << "'" ", " "varyings: '" << varyings << "'" ", " "buffer_mode: '" << buffer_mode << "'";
            glTransformFeedbackVaryings(program, count, varyings, static_cast< std::uint32_t >(buffer_mode));
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniform4dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform4dv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniform3dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform3dv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniform2dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform2dv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniform1dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform1dv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::float64_t x, gtulu::float64_t y, gtulu::float64_t z, gtulu::float64_t w) {
            __gtulu_debug() << "call glUniform4d " "location: '" << location << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glUniform4d(location, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::float64_t x, gtulu::float64_t y, gtulu::float64_t z) {
            __gtulu_debug() << "call glUniform3d " "location: '" << location << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glUniform3d(location, x, y, z);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::float64_t x, gtulu::float64_t y) {
            __gtulu_debug() << "call glUniform2d " "location: '" << location << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glUniform2d(location, x, y);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::float64_t x) {
            __gtulu_debug() << "call glUniform1d " "location: '" << location << "'" ", " "x: '" << x << "'";
            glUniform1d(location, x);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glUniform4uiv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform4uiv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glUniform3uiv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform3uiv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glUniform2uiv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform2uiv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glUniform1uiv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform1uiv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::uint32_t v_0, gtulu::uint32_t v_1, gtulu::uint32_t v_2, gtulu::uint32_t v_3) {
            __gtulu_debug() << "call glUniform4ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glUniform4ui(location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::uint32_t v_0, gtulu::uint32_t v_1, gtulu::uint32_t v_2) {
            __gtulu_debug() << "call glUniform3ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glUniform3ui(location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::uint32_t v_0, gtulu::uint32_t v_1) {
            __gtulu_debug() << "call glUniform2ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glUniform2ui(location, v_0, v_1);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::uint32_t v_0) {
            __gtulu_debug() << "call glUniform1ui " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glUniform1ui(location, v_0);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glUniform4iv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform4iv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glUniform3iv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform3iv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glUniform2iv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform2iv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::int32_t const* value) {
            __gtulu_debug() << "call glUniform1iv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform1iv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniform4fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform4fv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniform3fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform3fv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniform2fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform2fv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::int32_t count, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniform1fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "value: '" << value << "'";
            glUniform1fv(location, count, value);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::int32_t v_0, gtulu::int32_t v_1, gtulu::int32_t v_2, gtulu::int32_t v_3) {
            __gtulu_debug() << "call glUniform4i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glUniform4i(location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::int32_t v_0, gtulu::int32_t v_1, gtulu::int32_t v_2) {
            __gtulu_debug() << "call glUniform3i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glUniform3i(location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::int32_t v_0, gtulu::int32_t v_1) {
            __gtulu_debug() << "call glUniform2i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glUniform2i(location, v_0, v_1);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::int32_t v_0) {
            __gtulu_debug() << "call glUniform1i " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glUniform1i(location, v_0);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::float32_t v_0, gtulu::float32_t v_1, gtulu::float32_t v_2, gtulu::float32_t v_3) {
            __gtulu_debug() << "call glUniform4f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'" ", " "v_3: '" << v_3 << "'";
            glUniform4f(location, v_0, v_1, v_2, v_3);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::float32_t v_0, gtulu::float32_t v_1, gtulu::float32_t v_2) {
            __gtulu_debug() << "call glUniform3f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'" ", " "v_2: '" << v_2 << "'";
            glUniform3f(location, v_0, v_1, v_2);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::float32_t v_0, gtulu::float32_t v_1) {
            __gtulu_debug() << "call glUniform2f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'" ", " "v_1: '" << v_1 << "'";
            glUniform2f(location, v_0, v_1);
            __gtulu_check_error();

          }

          template< > void uniform< boost::mpl::int_< 1 > >::call(gtulu::int32_t location, gtulu::float32_t v_0) {
            __gtulu_debug() << "call glUniform1f " "location: '" << location << "'" ", " "v_0: '" << v_0 << "'";
            glUniform1f(location, v_0);
            __gtulu_check_error();

          }

          void uniform_block_binding< >::call(gtulu::uint32_t program, gtulu::uint32_t uniform_block_index, gtulu::uint32_t uniform_block_binding) {
            __gtulu_debug() << "call glUniformBlockBinding " "program: '" << program << "'" ", " "uniform_block_index: '" << uniform_block_index << "'" ", " "uniform_block_binding: '" << uniform_block_binding << "'";
            glUniformBlockBinding(program, uniform_block_index, uniform_block_binding);
            __gtulu_check_error();

          }

          template< > void uniform_matrix< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix4dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix4dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void uniform_matrix< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix3dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix3dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void uniform_matrix< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix2dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix2dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void uniform_matrix< boost::mpl::int_< 4 > >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix4fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix4fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void uniform_matrix< boost::mpl::int_< 3 > >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix3fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix3fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          template< > void uniform_matrix< boost::mpl::int_< 2 > >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix2fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix2fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_2x3< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix2x3dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix2x3dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_2x3< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix2x3fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix2x3fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_2x4< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix2x4dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix2x4dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_2x4< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix2x4fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix2x4fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_3x2< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix3x2dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix3x2dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_3x2< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix3x2fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix3x2fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_3x4< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix3x4dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix3x4dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_3x4< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix3x4fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix3x4fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_4x2< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix4x2dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix4x2dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_4x2< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix4x2fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix4x2fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_4x3< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float64_t const* value) {
            __gtulu_debug() << "call glUniformMatrix4x3dv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix4x3dv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_matrix_4x3< >::call(gtulu::int32_t location, gtulu::int32_t count, bool transpose, gtulu::float32_t const* value) {
            __gtulu_debug() << "call glUniformMatrix4x3fv " "location: '" << location << "'" ", " "count: '" << count << "'" ", " "transpose: '" << transpose << "'" ", " "value: '" << value << "'";
            glUniformMatrix4x3fv(location, count, transpose, value);
            __gtulu_check_error();

          }

          void uniform_subroutines< >::call(gtulu::constant_base const& shadertype, gtulu::int32_t count, gtulu::uint32_t const* indices) {
            __gtulu_debug() << "call glUniformSubroutinesuiv " "shadertype: '" << shadertype << "'" ", " "count: '" << count << "'" ", " "indices: '" << indices << "'";
            glUniformSubroutinesuiv(static_cast< std::uint32_t >(shadertype), count, indices);
            __gtulu_check_error();

          }

          bool unmap_buffer< >::call(gtulu::constant_base const& target) {
            __gtulu_debug() << "call glUnmapBuffer " "target: '" << target << "'";
            bool output = glUnmapBuffer(static_cast< std::uint32_t >(target));
            __gtulu_check_error();
            return output;
          }

          void use_program< >::call(gtulu::uint32_t program) {
            __gtulu_debug() << "call glUseProgram " "program: '" << program << "'";
            glUseProgram(program);
            __gtulu_check_error();

          }

          void use_program_stages< >::call(gtulu::uint32_t pipeline, gtulu::uint32_t stages, gtulu::uint32_t program) {
            __gtulu_debug() << "call glUseProgramStages " "pipeline: '" << pipeline << "'" ", " "stages: '" << stages << "'" ", " "program: '" << program << "'";
            glUseProgramStages(pipeline, stages, program);
            __gtulu_check_error();

          }

          void validate_program< >::call(gtulu::uint32_t program) {
            __gtulu_debug() << "call glValidateProgram " "program: '" << program << "'";
            glValidateProgram(program);
            __gtulu_check_error();

          }

          void validate_program_pipeline< >::call(gtulu::uint32_t pipeline) {
            __gtulu_debug() << "call glValidateProgramPipeline " "pipeline: '" << pipeline << "'";
            glValidateProgramPipeline(pipeline);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint16_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4usv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4usv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4uiv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint8_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4ubv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4ubv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int16_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4sv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int16_t x, gtulu::int16_t y, gtulu::int16_t z, gtulu::int16_t w) {
            __gtulu_debug() << "call glVertexAttrib4s " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4s(index, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4iv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::float32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4fv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::float32_t x, gtulu::float32_t y, gtulu::float32_t z, gtulu::float32_t w) {
            __gtulu_debug() << "call glVertexAttrib4f " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4f(index, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::float64_t x, gtulu::float64_t y, gtulu::float64_t z, gtulu::float64_t w) {
            __gtulu_debug() << "call glVertexAttrib4d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4d(index, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int8_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4bv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4bv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::int16_t const* v) {
            __gtulu_debug() << "call glVertexAttrib3sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib3sv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::int16_t x, gtulu::int16_t y, gtulu::int16_t z) {
            __gtulu_debug() << "call glVertexAttrib3s " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttrib3s(index, x, y, z);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::float32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib3fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib3fv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::float32_t x, gtulu::float32_t y, gtulu::float32_t z) {
            __gtulu_debug() << "call glVertexAttrib3f " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttrib3f(index, x, y, z);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttrib3dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib3dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::float64_t x, gtulu::float64_t y, gtulu::float64_t z) {
            __gtulu_debug() << "call glVertexAttrib3d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttrib3d(index, x, y, z);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::int16_t const* v) {
            __gtulu_debug() << "call glVertexAttrib2sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib2sv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::int16_t x, gtulu::int16_t y) {
            __gtulu_debug() << "call glVertexAttrib2s " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttrib2s(index, x, y);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::float32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib2fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib2fv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::float32_t x, gtulu::float32_t y) {
            __gtulu_debug() << "call glVertexAttrib2f " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttrib2f(index, x, y);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttrib2dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib2dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::float64_t x, gtulu::float64_t y) {
            __gtulu_debug() << "call glVertexAttrib2d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttrib2d(index, x, y);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::int16_t const* v) {
            __gtulu_debug() << "call glVertexAttrib1sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib1sv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::int16_t x) {
            __gtulu_debug() << "call glVertexAttrib1s " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttrib1s(index, x);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::float32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib1fv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib1fv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::float32_t x) {
            __gtulu_debug() << "call glVertexAttrib1f " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttrib1f(index, x);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttrib1dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib1dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::float64_t x) {
            __gtulu_debug() << "call glVertexAttrib1d " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttrib1d(index, x);
            __gtulu_check_error();

          }

          void vertex_attrib_divisor< >::call(gtulu::uint32_t index, gtulu::uint32_t divisor) {
            __gtulu_debug() << "call glVertexAttribDivisor " "index: '" << index << "'" ", " "divisor: '" << divisor << "'";
            glVertexAttribDivisor(index, divisor);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint16_t const* v) {
            __gtulu_debug() << "call glVertexAttribI4usv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4usv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint8_t const* v) {
            __gtulu_debug() << "call glVertexAttribI4ubv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4ubv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int16_t const* v) {
            __gtulu_debug() << "call glVertexAttribI4sv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4sv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int8_t const* v) {
            __gtulu_debug() << "call glVertexAttribI4bv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4bv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI4uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4uiv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::uint32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI3uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI3uiv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::uint32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI2uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI2uiv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::uint32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI1uiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI1uiv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI4iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI4iv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI3iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI3iv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI2iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI2iv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glVertexAttribI1iv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribI1iv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint32_t x, gtulu::uint32_t y, gtulu::uint32_t z, gtulu::uint32_t w) {
            __gtulu_debug() << "call glVertexAttribI4ui " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttribI4ui(index, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::uint32_t x, gtulu::uint32_t y, gtulu::uint32_t z) {
            __gtulu_debug() << "call glVertexAttribI3ui " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttribI3ui(index, x, y, z);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::uint32_t x, gtulu::uint32_t y) {
            __gtulu_debug() << "call glVertexAttribI2ui " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttribI2ui(index, x, y);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::uint32_t x) {
            __gtulu_debug() << "call glVertexAttribI1ui " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttribI1ui(index, x);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t z, gtulu::int32_t w) {
            __gtulu_debug() << "call glVertexAttribI4i " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttribI4i(index, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t z) {
            __gtulu_debug() << "call glVertexAttribI3i " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttribI3i(index, x, y, z);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::int32_t x, gtulu::int32_t y) {
            __gtulu_debug() << "call glVertexAttribI2i " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttribI2i(index, x, y);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_integer< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::int32_t x) {
            __gtulu_debug() << "call glVertexAttribI1i " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttribI1i(index, x);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttribL4dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribL4dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttribL3dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribL3dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttribL2dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribL2dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::float64_t const* v) {
            __gtulu_debug() << "call glVertexAttribL1dv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttribL1dv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::float64_t x, gtulu::float64_t y, gtulu::float64_t z, gtulu::float64_t w) {
            __gtulu_debug() << "call glVertexAttribL4d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttribL4d(index, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::float64_t x, gtulu::float64_t y, gtulu::float64_t z) {
            __gtulu_debug() << "call glVertexAttribL3d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'";
            glVertexAttribL3d(index, x, y, z);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::float64_t x, gtulu::float64_t y) {
            __gtulu_debug() << "call glVertexAttribL2d " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'";
            glVertexAttribL2d(index, x, y);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_large< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::float64_t x) {
            __gtulu_debug() << "call glVertexAttribL1d " "index: '" << index << "'" ", " "x: '" << x << "'";
            glVertexAttribL1d(index, x);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_normalized< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint16_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4Nusv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nusv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_normalized< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4Nuiv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nuiv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_normalized< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint8_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4Nubv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nubv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_normalized< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::uint8_t x, gtulu::uint8_t y, gtulu::uint8_t z, gtulu::uint8_t w) {
            __gtulu_debug() << "call glVertexAttrib4Nub " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "z: '" << z << "'" ", " "w: '" << w << "'";
            glVertexAttrib4Nub(index, x, y, z, w);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_normalized< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int16_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4Nsv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nsv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_normalized< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int32_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4Niv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Niv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_normalized< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::int8_t const* v) {
            __gtulu_debug() << "call glVertexAttrib4Nbv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glVertexAttrib4Nbv(index, v);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glVertexAttribP4uiv " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP4uiv(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 4 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t value) {
            __gtulu_debug() << "call glVertexAttribP4ui " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP4ui(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glVertexAttribP3uiv " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP3uiv(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 3 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t value) {
            __gtulu_debug() << "call glVertexAttribP3ui " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP3ui(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glVertexAttribP2uiv " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP2uiv(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 2 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t value) {
            __gtulu_debug() << "call glVertexAttribP2ui " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP2ui(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glVertexAttribP1uiv " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP1uiv(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          template< > void vertex_attrib_packed< boost::mpl::int_< 1 > >::call(gtulu::uint32_t index, gtulu::constant_base const& type, bool normalized, gtulu::uint32_t value) {
            __gtulu_debug() << "call glVertexAttribP1ui " "index: '" << index << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "value: '" << value << "'";
            glVertexAttribP1ui(index, static_cast< std::uint32_t >(type), normalized, value);
            __gtulu_check_error();

          }

          void vertex_attrib_pointer< >::call(gtulu::uint32_t index, gtulu::int32_t size, gtulu::constant_base const& type, bool normalized, gtulu::int32_t stride, void const* pointer) {
            __gtulu_debug() << "call glVertexAttribPointer " "index: '" << index << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "normalized: '" << normalized << "'" ", " "stride: '" << stride << "'" ", " "pointer: '" << pointer << "'";
            glVertexAttribPointer(index, size, static_cast< std::uint32_t >(type), normalized, stride, pointer);
            __gtulu_check_error();

          }

          void vertex_attrib_pointer_integer< >::call(gtulu::uint32_t index, gtulu::int32_t size, gtulu::constant_base const& type, gtulu::int32_t stride, void const* pointer) {
            __gtulu_debug() << "call glVertexAttribIPointer " "index: '" << index << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "stride: '" << stride << "'" ", " "pointer: '" << pointer << "'";
            glVertexAttribIPointer(index, size, static_cast< std::uint32_t >(type), stride, pointer);
            __gtulu_check_error();

          }

          void vertex_attrib_pointer_large_integer< >::call(gtulu::uint32_t index, gtulu::int32_t size, gtulu::constant_base const& type, gtulu::int32_t stride, void const* pointer) {
            __gtulu_debug() << "call glVertexAttribLPointer " "index: '" << index << "'" ", " "size: '" << size << "'" ", " "type: '" << type << "'" ", " "stride: '" << stride << "'" ", " "pointer: '" << pointer << "'";
            glVertexAttribLPointer(index, size, static_cast< std::uint32_t >(type), stride, pointer);
            __gtulu_check_error();

          }

          template< > void vertex_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glVertexP4uiv " "type: '" << type << "'" ", " "value: '" << value << "'";
            glVertexP4uiv(static_cast< std::uint32_t >(type), value);
            __gtulu_check_error();

          }

          template< > void vertex_packed< boost::mpl::int_< 4 > >::call(gtulu::constant_base const& type, gtulu::uint32_t value) {
            __gtulu_debug() << "call glVertexP4ui " "type: '" << type << "'" ", " "value: '" << value << "'";
            glVertexP4ui(static_cast< std::uint32_t >(type), value);
            __gtulu_check_error();

          }

          template< > void vertex_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glVertexP3uiv " "type: '" << type << "'" ", " "value: '" << value << "'";
            glVertexP3uiv(static_cast< std::uint32_t >(type), value);
            __gtulu_check_error();

          }

          template< > void vertex_packed< boost::mpl::int_< 3 > >::call(gtulu::constant_base const& type, gtulu::uint32_t value) {
            __gtulu_debug() << "call glVertexP3ui " "type: '" << type << "'" ", " "value: '" << value << "'";
            glVertexP3ui(static_cast< std::uint32_t >(type), value);
            __gtulu_check_error();

          }

          template< > void vertex_packed< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& type, gtulu::uint32_t const* value) {
            __gtulu_debug() << "call glVertexP2uiv " "type: '" << type << "'" ", " "value: '" << value << "'";
            glVertexP2uiv(static_cast< std::uint32_t >(type), value);
            __gtulu_check_error();

          }

          template< > void vertex_packed< boost::mpl::int_< 2 > >::call(gtulu::constant_base const& type, gtulu::uint32_t value) {
            __gtulu_debug() << "call glVertexP2ui " "type: '" << type << "'" ", " "value: '" << value << "'";
            glVertexP2ui(static_cast< std::uint32_t >(type), value);
            __gtulu_check_error();

          }

          void viewport< >::call(gtulu::int32_t x, gtulu::int32_t y, gtulu::int32_t width, gtulu::int32_t height) {
            __gtulu_debug() << "call glViewport " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "width: '" << width << "'" ", " "height: '" << height << "'";
            glViewport(x, y, width, height);
            __gtulu_check_error();

          }

          void viewport_array< >::call(gtulu::uint32_t first, gtulu::int32_t count, gtulu::float32_t const* v) {
            __gtulu_debug() << "call glViewportArrayv " "first: '" << first << "'" ", " "count: '" << count << "'" ", " "v: '" << v << "'";
            glViewportArrayv(first, count, v);
            __gtulu_check_error();

          }

          void viewport_indexed< >::call(gtulu::uint32_t index, gtulu::float32_t const* v) {
            __gtulu_debug() << "call glViewportIndexedfv " "index: '" << index << "'" ", " "v: '" << v << "'";
            glViewportIndexedfv(index, v);
            __gtulu_check_error();

          }

          void viewport_indexed< >::call(gtulu::uint32_t index, gtulu::float32_t x, gtulu::float32_t y, gtulu::float32_t w, gtulu::float32_t h) {
            __gtulu_debug() << "call glViewportIndexedf " "index: '" << index << "'" ", " "x: '" << x << "'" ", " "y: '" << y << "'" ", " "w: '" << w << "'" ", " "h: '" << h << "'";
            glViewportIndexedf(index, x, y, w, h);
            __gtulu_check_error();

          }

        }
      }

    }
  }
}
