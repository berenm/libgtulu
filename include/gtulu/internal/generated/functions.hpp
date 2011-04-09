/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 2 sept. 2010
 * @todo comment
 */
 
#ifndef GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_
#define GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_

#include "gtulu/internal/generated/functions_fwd.hpp"


namespace gtulu {
  namespace internal {
  
    namespace generated {
    } // namespace generated

    namespace gig = ::gtulu::internal::generated;

    namespace generated {

      namespace gl {
      namespace v1_0 {
        namespace fnc {
          struct gl_blend_func {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& sfactor_in, const ::gtulu::internal::constant::gl_constant_base& dfactor_in) {
                __gl_debug << "call glBlendFunc " "sfactor: '" << sfactor_in << "'" ", " "dfactor: '" << dfactor_in << "'";
                glBlendFunc(::std::uint32_t(sfactor_in), ::std::uint32_t(dfactor_in));
                __gl_check_error;
                
              }
              template< typename sfactor_t, typename dfactor_t >
              inline static void call() {
                __gl_debug << "call glBlendFunc " "sfactor: '" << sfactor_t::name::value << "'" ", " "dfactor: '" << dfactor_t::name::value << "'";
                glBlendFunc(sfactor_t::value, dfactor_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& src_in, const ::gtulu::internal::constant::gl_constant_base& dst_in) {
                __gl_debug << "call glBlendFunci " "buf: '" << buf_in << "'" ", " "src: '" << src_in << "'" ", " "dst: '" << dst_in << "'";
                glBlendFunci(buf_in, ::std::uint32_t(src_in), ::std::uint32_t(dst_in));
                __gl_check_error;
                
              }
              template< typename src_t, typename dst_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendFunci " "buf: '" << buf_in << "'" ", " "src: '" << src_t::name::value << "'" ", " "dst: '" << dst_t::name::value << "'";
                glBlendFunci(buf_in, src_t::value, dst_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_clear {

              inline static void call(GLbitfield mask_in) {
                __gl_debug << "call glClear " "mask: '" << mask_in << "'";
                glClear(mask_in);
                __gl_check_error;
                
              }

          };

          struct gl_clear_color {

              inline static void call(float red_in, float green_in, float blue_in, float alpha_in) {
                __gl_debug << "call glClearColor " "red: '" << red_in << "'" ", " "green: '" << green_in << "'" ", " "blue: '" << blue_in << "'" ", " "alpha: '" << alpha_in << "'";
                glClearColor(red_in, green_in, blue_in, alpha_in);
                __gl_check_error;
                
              }

          };

          struct gl_clear_depth {

              inline static void call(GLclampd depth_in) {
                __gl_debug << "call glClearDepth " "depth: '" << depth_in << "'";
                glClearDepth(depth_in);
                __gl_check_error;
                
              }

              inline static void call(float d_in) {
                __gl_debug << "call glClearDepthf " "d: '" << d_in << "'";
                glClearDepthf(d_in);
                __gl_check_error;
                
              }

          };

          struct gl_clear_stencil {

              inline static void call(::std::int32_t s_in) {
                __gl_debug << "call glClearStencil " "s: '" << s_in << "'";
                glClearStencil(s_in);
                __gl_check_error;
                
              }

          };

          struct gl_color_mask {

              inline static void call(bool red_in, bool green_in, bool blue_in, bool alpha_in) {
                __gl_debug << "call glColorMask " "red: '" << red_in << "'" ", " "green: '" << green_in << "'" ", " "blue: '" << blue_in << "'" ", " "alpha: '" << alpha_in << "'";
                glColorMask((red_in ? 1 : 0), (green_in ? 1 : 0), (blue_in ? 1 : 0), (alpha_in ? 1 : 0));
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, bool r_in, bool g_in, bool b_in, bool a_in) {
                __gl_debug << "call glColorMaski " "index: '" << index_in << "'" ", " "r: '" << r_in << "'" ", " "g: '" << g_in << "'" ", " "b: '" << b_in << "'" ", " "a: '" << a_in << "'";
                glColorMaski(index_in, (r_in ? 1 : 0), (g_in ? 1 : 0), (b_in ? 1 : 0), (a_in ? 1 : 0));
                __gl_check_error;
                
              }

          };

          struct gl_cull_face {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glCullFace " "mode: '" << mode_in << "'";
                glCullFace(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glCullFace " "mode: '" << mode_t::name::value << "'";
                glCullFace(mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_depth_func {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& func_in) {
                __gl_debug << "call glDepthFunc " "func: '" << func_in << "'";
                glDepthFunc(::std::uint32_t(func_in));
                __gl_check_error;
                
              }
              template< typename func_t >
              inline static void call() {
                __gl_debug << "call glDepthFunc " "func: '" << func_t::name::value << "'";
                glDepthFunc(func_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_depth_mask {

              inline static void call(bool flag_in) {
                __gl_debug << "call glDepthMask " "flag: '" << flag_in << "'";
                glDepthMask((flag_in ? 1 : 0));
                __gl_check_error;
                
              }

          };

          struct gl_depth_range {

              inline static void call(GLclampd near_in, GLclampd far_in) {
                __gl_debug << "call glDepthRange " "near: '" << near_in << "'" ", " "far: '" << far_in << "'";
                glDepthRange(near_in, far_in);
                __gl_check_error;
                
              }

              inline static void call(float n_in, float f_in) {
                __gl_debug << "call glDepthRangef " "n: '" << n_in << "'" ", " "f: '" << f_in << "'";
                glDepthRangef(n_in, f_in);
                __gl_check_error;
                
              }

          };

          struct gl_disable {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& cap_in) {
                __gl_debug << "call glDisable " "cap: '" << cap_in << "'";
                glDisable(::std::uint32_t(cap_in));
                __gl_check_error;
                
              }
              template< typename cap_t >
              inline static void call() {
                __gl_debug << "call glDisable " "cap: '" << cap_t::name::value << "'";
                glDisable(cap_t::value);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in) {
                __gl_debug << "call glDisablei " "target: '" << target_in << "'" ", " "index: '" << index_in << "'";
                glDisablei(::std::uint32_t(target_in), index_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glDisablei " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'";
                glDisablei(target_t::value, index_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_buffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glDrawBuffer " "mode: '" << mode_in << "'";
                glDrawBuffer(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glDrawBuffer " "mode: '" << mode_t::name::value << "'";
                glDrawBuffer(mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_enable {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& cap_in) {
                __gl_debug << "call glEnable " "cap: '" << cap_in << "'";
                glEnable(::std::uint32_t(cap_in));
                __gl_check_error;
                
              }
              template< typename cap_t >
              inline static void call() {
                __gl_debug << "call glEnable " "cap: '" << cap_t::name::value << "'";
                glEnable(cap_t::value);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in) {
                __gl_debug << "call glEnablei " "target: '" << target_in << "'" ", " "index: '" << index_in << "'";
                glEnablei(::std::uint32_t(target_in), index_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glEnablei " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'";
                glEnablei(target_t::value, index_in);
                __gl_check_error;
                
              }

          };

          struct gl_finish {

              inline static void call() {
                __gl_debug << "call glFinish " "";
                glFinish();
                __gl_check_error;
                
              }

          };

          struct gl_flush {

              inline static void call() {
                __gl_debug << "call glFlush " "";
                glFlush();
                __gl_check_error;
                
              }

          };

          struct gl_front_face {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glFrontFace " "mode: '" << mode_in << "'";
                glFrontFace(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glFrontFace " "mode: '" << mode_t::name::value << "'";
                glFrontFace(mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_get_boolean {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, GLboolean* params_in) {
                __gl_debug << "call glGetBooleanv " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetBooleanv(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLboolean* params_in) {
                __gl_debug << "call glGetBooleanv " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetBooleanv(pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_double {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, double* params_in) {
                __gl_debug << "call glGetDoublev " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetDoublev(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(double* params_in) {
                __gl_debug << "call glGetDoublev " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetDoublev(pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_error {

              inline static GLenum call() {
                __gl_debug << "call glGetError " "";
                GLenum out = glGetError();
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_float {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, float* params_in) {
                __gl_debug << "call glGetFloatv " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetFloatv(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(float* params_in) {
                __gl_debug << "call glGetFloatv " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetFloatv(pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_integer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetIntegerv " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetIntegerv(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetIntegerv " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetIntegerv(pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, GLint64* params_in) {
                __gl_debug << "call glGetInteger64v " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetInteger64v(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint64* params_in) {
                __gl_debug << "call glGetInteger64v " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetInteger64v(pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_string {

              inline static const GLubyte * call(const ::gtulu::internal::constant::gl_constant_base& name_in) {
                __gl_debug << "call glGetString " "name: '" << name_in << "'";
                const GLubyte * out = glGetString(::std::uint32_t(name_in));
                __gl_check_error;
                return out;
              }
              template< typename name_t >
              inline static const GLubyte * call() {
                __gl_debug << "call glGetString " "name: '" << name_t::name::value << "'";
                const GLubyte * out = glGetString(name_t::value);
                __gl_check_error;
                return out;
              }

              inline static const GLubyte * call(const ::gtulu::internal::constant::gl_constant_base& name_in, ::std::uint32_t index_in) {
                __gl_debug << "call glGetStringi " "name: '" << name_in << "'" ", " "index: '" << index_in << "'";
                const GLubyte * out = glGetStringi(::std::uint32_t(name_in), index_in);
                __gl_check_error;
                return out;
              }
              template< typename name_t >
              inline static const GLubyte * call(::std::uint32_t index_in) {
                __gl_debug << "call glGetStringi " "name: '" << name_t::name::value << "'" ", " "index: '" << index_in << "'";
                const GLubyte * out = glGetStringi(name_t::value, index_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_tex_image {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void* pixels_in) {
                __gl_debug << "call glGetTexImage " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glGetTexImage(::std::uint32_t(target_in), level_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, void* pixels_in) {
                __gl_debug << "call glGetTexImage " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glGetTexImage(target_t::value, level_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_tex_level_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float* params_in) {
                __gl_debug << "call glGetTexLevelParameterfv " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetTexLevelParameterfv(::std::uint32_t(target_in), level_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t level_in, float* params_in) {
                __gl_debug << "call glGetTexLevelParameterfv " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetTexLevelParameterfv(target_t::value, level_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetTexLevelParameteriv " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetTexLevelParameteriv(::std::uint32_t(target_in), level_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetTexLevelParameteriv " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetTexLevelParameteriv(target_t::value, level_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_tex_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float* params_in) {
                __gl_debug << "call glGetTexParameterfv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetTexParameterfv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(float* params_in) {
                __gl_debug << "call glGetTexParameterfv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetTexParameterfv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetTexParameteriv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetTexParameteriv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetTexParameteriv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetTexParameteriv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_hint {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glHint " "target: '" << target_in << "'" ", " "mode: '" << mode_in << "'";
                glHint(::std::uint32_t(target_in), ::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename target_t, typename mode_t >
              inline static void call() {
                __gl_debug << "call glHint " "target: '" << target_t::name::value << "'" ", " "mode: '" << mode_t::name::value << "'";
                glHint(target_t::value, mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_is_enabled {

              inline static GLboolean call(const ::gtulu::internal::constant::gl_constant_base& cap_in) {
                __gl_debug << "call glIsEnabled " "cap: '" << cap_in << "'";
                GLboolean out = glIsEnabled(::std::uint32_t(cap_in));
                __gl_check_error;
                return out;
              }
              template< typename cap_t >
              inline static GLboolean call() {
                __gl_debug << "call glIsEnabled " "cap: '" << cap_t::name::value << "'";
                GLboolean out = glIsEnabled(cap_t::value);
                __gl_check_error;
                return out;
              }

              inline static GLboolean call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in) {
                __gl_debug << "call glIsEnabledi " "target: '" << target_in << "'" ", " "index: '" << index_in << "'";
                GLboolean out = glIsEnabledi(::std::uint32_t(target_in), index_in);
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLboolean call(::std::uint32_t index_in) {
                __gl_debug << "call glIsEnabledi " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'";
                GLboolean out = glIsEnabledi(target_t::value, index_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_line_width {

              inline static void call(float width_in) {
                __gl_debug << "call glLineWidth " "width: '" << width_in << "'";
                glLineWidth(width_in);
                __gl_check_error;
                
              }

          };

          struct gl_logic_op {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& opcode_in) {
                __gl_debug << "call glLogicOp " "opcode: '" << opcode_in << "'";
                glLogicOp(::std::uint32_t(opcode_in));
                __gl_check_error;
                
              }
              template< typename opcode_t >
              inline static void call() {
                __gl_debug << "call glLogicOp " "opcode: '" << opcode_t::name::value << "'";
                glLogicOp(opcode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_pixel_store {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, float param_in) {
                __gl_debug << "call glPixelStoref " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glPixelStoref(::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(float param_in) {
                __gl_debug << "call glPixelStoref " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glPixelStoref(pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t param_in) {
                __gl_debug << "call glPixelStorei " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glPixelStorei(::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::int32_t param_in) {
                __gl_debug << "call glPixelStorei " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glPixelStorei(pname_t::value, param_in);
                __gl_check_error;
                
              }

          };

          struct gl_point_size {

              inline static void call(float size_in) {
                __gl_debug << "call glPointSize " "size: '" << size_in << "'";
                glPointSize(size_in);
                __gl_check_error;
                
              }

          };

          struct gl_polygon_mode {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& face_in, const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glPolygonMode " "face: '" << face_in << "'" ", " "mode: '" << mode_in << "'";
                glPolygonMode(::std::uint32_t(face_in), ::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename face_t, typename mode_t >
              inline static void call() {
                __gl_debug << "call glPolygonMode " "face: '" << face_t::name::value << "'" ", " "mode: '" << mode_t::name::value << "'";
                glPolygonMode(face_t::value, mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_read_buffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glReadBuffer " "mode: '" << mode_in << "'";
                glReadBuffer(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glReadBuffer " "mode: '" << mode_t::name::value << "'";
                glReadBuffer(mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_read_pixels {

              inline static void call(::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void* pixels_in) {
                __gl_debug << "call glReadPixels " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glReadPixels(x_in, y_in, width_in, height_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename format_t, typename type_t >
              inline static void call(::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in, void* pixels_in) {
                __gl_debug << "call glReadPixels " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glReadPixels(x_in, y_in, width_in, height_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

          struct gl_scissor {

              inline static void call(::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glScissor " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glScissor(x_in, y_in, width_in, height_in);
                __gl_check_error;
                
              }

          };

          struct gl_stencil_func {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& func_in, ::std::int32_t ref_in, ::std::uint32_t mask_in) {
                __gl_debug << "call glStencilFunc " "func: '" << func_in << "'" ", " "ref: '" << ref_in << "'" ", " "mask: '" << mask_in << "'";
                glStencilFunc(::std::uint32_t(func_in), ref_in, mask_in);
                __gl_check_error;
                
              }
              template< typename func_t >
              inline static void call(::std::int32_t ref_in, ::std::uint32_t mask_in) {
                __gl_debug << "call glStencilFunc " "func: '" << func_t::name::value << "'" ", " "ref: '" << ref_in << "'" ", " "mask: '" << mask_in << "'";
                glStencilFunc(func_t::value, ref_in, mask_in);
                __gl_check_error;
                
              }

          };

          struct gl_stencil_mask {

              inline static void call(::std::uint32_t mask_in) {
                __gl_debug << "call glStencilMask " "mask: '" << mask_in << "'";
                glStencilMask(mask_in);
                __gl_check_error;
                
              }

          };

          struct gl_stencil_op {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& fail_in, const ::gtulu::internal::constant::gl_constant_base& zfail_in, const ::gtulu::internal::constant::gl_constant_base& zpass_in) {
                __gl_debug << "call glStencilOp " "fail: '" << fail_in << "'" ", " "zfail: '" << zfail_in << "'" ", " "zpass: '" << zpass_in << "'";
                glStencilOp(::std::uint32_t(fail_in), ::std::uint32_t(zfail_in), ::std::uint32_t(zpass_in));
                __gl_check_error;
                
              }
              template< typename fail_t, typename zfail_t, typename zpass_t >
              inline static void call() {
                __gl_debug << "call glStencilOp " "fail: '" << fail_t::name::value << "'" ", " "zfail: '" << zfail_t::name::value << "'" ", " "zpass: '" << zpass_t::name::value << "'";
                glStencilOp(fail_t::value, zfail_t::value, zpass_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_tex_image_1d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t internalformat_in, GLsizei width_in, ::std::int32_t border_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* pixels_in) {
                __gl_debug << "call glTexImage1D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "border: '" << border_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glTexImage1D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), width_in, border_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, GLsizei width_in, ::std::int32_t border_in, void const* pixels_in) {
                __gl_debug << "call glTexImage1D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "border: '" << border_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glTexImage1D(target_t::value, level_in, internalformat_t::value, width_in, border_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_image_2d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t internalformat_in, GLsizei width_in, GLsizei height_in, ::std::int32_t border_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* pixels_in) {
                __gl_debug << "call glTexImage2D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "border: '" << border_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glTexImage2D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), width_in, height_in, border_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, GLsizei width_in, GLsizei height_in, ::std::int32_t border_in, void const* pixels_in) {
                __gl_debug << "call glTexImage2D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "border: '" << border_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glTexImage2D(target_t::value, level_in, internalformat_t::value, width_in, height_in, border_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float param_in) {
                __gl_debug << "call glTexParameterf " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glTexParameterf(::std::uint32_t(target_in), ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(float param_in) {
                __gl_debug << "call glTexParameterf " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glTexParameterf(target_t::value, pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float const* params_in) {
                __gl_debug << "call glTexParameterfv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glTexParameterfv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(float const* params_in) {
                __gl_debug << "call glTexParameterfv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glTexParameterfv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t param_in) {
                __gl_debug << "call glTexParameteri " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glTexParameteri(::std::uint32_t(target_in), ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t param_in) {
                __gl_debug << "call glTexParameteri " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glTexParameteri(target_t::value, pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t const* params_in) {
                __gl_debug << "call glTexParameteriv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glTexParameteriv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t const* params_in) {
                __gl_debug << "call glTexParameteriv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glTexParameteriv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_viewport {

              inline static void call(::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glViewport " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glViewport(x_in, y_in, width_in, height_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v1_0
      namespace v1_1 {
        namespace fnc {
          struct gl_bind_texture {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t texture_in) {
                __gl_debug << "call glBindTexture " "target: '" << target_in << "'" ", " "texture: '" << texture_in << "'";
                glBindTexture(::std::uint32_t(target_in), texture_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t texture_in) {
                __gl_debug << "call glBindTexture " "target: '" << target_t::name::value << "'" ", " "texture: '" << texture_in << "'";
                glBindTexture(target_t::value, texture_in);
                __gl_check_error;
                
              }

          };

          struct gl_copy_tex_image_1d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, ::std::int32_t border_in) {
                __gl_debug << "call glCopyTexImage1D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "border: '" << border_in << "'";
                glCopyTexImage1D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), x_in, y_in, width_in, border_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, ::std::int32_t border_in) {
                __gl_debug << "call glCopyTexImage1D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "border: '" << border_in << "'";
                glCopyTexImage1D(target_t::value, level_in, internalformat_t::value, x_in, y_in, width_in, border_in);
                __gl_check_error;
                
              }

          };

          struct gl_copy_tex_image_2d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in, ::std::int32_t border_in) {
                __gl_debug << "call glCopyTexImage2D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "border: '" << border_in << "'";
                glCopyTexImage2D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), x_in, y_in, width_in, height_in, border_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in, ::std::int32_t border_in) {
                __gl_debug << "call glCopyTexImage2D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "border: '" << border_in << "'";
                glCopyTexImage2D(target_t::value, level_in, internalformat_t::value, x_in, y_in, width_in, height_in, border_in);
                __gl_check_error;
                
              }

          };

          struct gl_copy_tex_sub_image_1d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in) {
                __gl_debug << "call glCopyTexSubImage1D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'";
                glCopyTexSubImage1D(::std::uint32_t(target_in), level_in, xoffset_in, x_in, y_in, width_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in) {
                __gl_debug << "call glCopyTexSubImage1D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'";
                glCopyTexSubImage1D(target_t::value, level_in, xoffset_in, x_in, y_in, width_in);
                __gl_check_error;
                
              }

          };

          struct gl_copy_tex_sub_image_2d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glCopyTexSubImage2D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glCopyTexSubImage2D(::std::uint32_t(target_in), level_in, xoffset_in, yoffset_in, x_in, y_in, width_in, height_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glCopyTexSubImage2D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glCopyTexSubImage2D(target_t::value, level_in, xoffset_in, yoffset_in, x_in, y_in, width_in, height_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_textures {

              inline static void call(GLsizei n_in, ::std::uint32_t const* textures_in) {
                __gl_debug << "call glDeleteTextures " "n: '" << n_in << "'" ", " "textures: '" << textures_in << "'";
                glDeleteTextures(n_in, textures_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_arrays {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, ::std::int32_t first_in, GLsizei count_in) {
                __gl_debug << "call glDrawArrays " "mode: '" << mode_in << "'" ", " "first: '" << first_in << "'" ", " "count: '" << count_in << "'";
                glDrawArrays(::std::uint32_t(mode_in), first_in, count_in);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::int32_t first_in, GLsizei count_in) {
                __gl_debug << "call glDrawArrays " "mode: '" << mode_t::name::value << "'" ", " "first: '" << first_in << "'" ", " "count: '" << count_in << "'";
                glDrawArrays(mode_t::value, first_in, count_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_elements {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, GLsizei count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* indices_in) {
                __gl_debug << "call glDrawElements " "mode: '" << mode_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'";
                glDrawElements(::std::uint32_t(mode_in), count_in, ::std::uint32_t(type_in), indices_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count_in, void const* indices_in) {
                __gl_debug << "call glDrawElements " "mode: '" << mode_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'";
                glDrawElements(mode_t::value, count_in, type_t::value, indices_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_textures {

              inline static void call(GLsizei n_in, ::std::uint32_t* textures_in) {
                __gl_debug << "call glGenTextures " "n: '" << n_in << "'" ", " "textures: '" << textures_in << "'";
                glGenTextures(n_in, textures_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_pointer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, void** params_in) {
                __gl_debug << "call glGetPointerv " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetPointerv(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(void** params_in) {
                __gl_debug << "call glGetPointerv " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetPointerv(pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_texture {

              inline static GLboolean call(::std::uint32_t texture_in) {
                __gl_debug << "call glIsTexture " "texture: '" << texture_in << "'";
                GLboolean out = glIsTexture(texture_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_polygon_offset {

              inline static void call(float factor_in, float units_in) {
                __gl_debug << "call glPolygonOffset " "factor: '" << factor_in << "'" ", " "units: '" << units_in << "'";
                glPolygonOffset(factor_in, units_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_sub_image_1d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, GLsizei width_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* pixels_in) {
                __gl_debug << "call glTexSubImage1D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "width: '" << width_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glTexSubImage1D(::std::uint32_t(target_in), level_in, xoffset_in, width_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, GLsizei width_in, void const* pixels_in) {
                __gl_debug << "call glTexSubImage1D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "width: '" << width_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glTexSubImage1D(target_t::value, level_in, xoffset_in, width_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_sub_image_2d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, GLsizei width_in, GLsizei height_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* pixels_in) {
                __gl_debug << "call glTexSubImage2D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glTexSubImage2D(::std::uint32_t(target_in), level_in, xoffset_in, yoffset_in, width_in, height_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, GLsizei width_in, GLsizei height_in, void const* pixels_in) {
                __gl_debug << "call glTexSubImage2D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glTexSubImage2D(target_t::value, level_in, xoffset_in, yoffset_in, width_in, height_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v1_1
      namespace v1_2 {
        namespace fnc {
          struct gl_blend_color {

              inline static void call(float red_in, float green_in, float blue_in, float alpha_in) {
                __gl_debug << "call glBlendColor " "red: '" << red_in << "'" ", " "green: '" << green_in << "'" ", " "blue: '" << blue_in << "'" ", " "alpha: '" << alpha_in << "'";
                glBlendColor(red_in, green_in, blue_in, alpha_in);
                __gl_check_error;
                
              }

          };

          struct gl_blend_equation {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glBlendEquation " "mode: '" << mode_in << "'";
                glBlendEquation(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glBlendEquation " "mode: '" << mode_t::name::value << "'";
                glBlendEquation(mode_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glBlendEquationi " "buf: '" << buf_in << "'" ", " "mode: '" << mode_in << "'";
                glBlendEquationi(buf_in, ::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendEquationi " "buf: '" << buf_in << "'" ", " "mode: '" << mode_t::name::value << "'";
                glBlendEquationi(buf_in, mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_copy_tex_sub_image_3d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t zoffset_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glCopyTexSubImage3D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "zoffset: '" << zoffset_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glCopyTexSubImage3D(::std::uint32_t(target_in), level_in, xoffset_in, yoffset_in, zoffset_in, x_in, y_in, width_in, height_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t zoffset_in, ::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glCopyTexSubImage3D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "zoffset: '" << zoffset_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glCopyTexSubImage3D(target_t::value, level_in, xoffset_in, yoffset_in, zoffset_in, x_in, y_in, width_in, height_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_range_elements {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, ::std::uint32_t start_in, ::std::uint32_t end_in, GLsizei count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* indices_in) {
                __gl_debug << "call glDrawRangeElements " "mode: '" << mode_in << "'" ", " "start: '" << start_in << "'" ", " "end: '" << end_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'";
                glDrawRangeElements(::std::uint32_t(mode_in), start_in, end_in, count_in, ::std::uint32_t(type_in), indices_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(::std::uint32_t start_in, ::std::uint32_t end_in, GLsizei count_in, void const* indices_in) {
                __gl_debug << "call glDrawRangeElements " "mode: '" << mode_t::name::value << "'" ", " "start: '" << start_in << "'" ", " "end: '" << end_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'";
                glDrawRangeElements(mode_t::value, start_in, end_in, count_in, type_t::value, indices_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_image_3d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t internalformat_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, ::std::int32_t border_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* pixels_in) {
                __gl_debug << "call glTexImage3D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "border: '" << border_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glTexImage3D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), width_in, height_in, depth_in, border_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, ::std::int32_t border_in, void const* pixels_in) {
                __gl_debug << "call glTexImage3D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "border: '" << border_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glTexImage3D(target_t::value, level_in, internalformat_t::value, width_in, height_in, depth_in, border_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_sub_image_3d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t zoffset_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* pixels_in) {
                __gl_debug << "call glTexSubImage3D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "zoffset: '" << zoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "pixels: '" << pixels_in << "'";
                glTexSubImage3D(::std::uint32_t(target_in), level_in, xoffset_in, yoffset_in, zoffset_in, width_in, height_in, depth_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), pixels_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t zoffset_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, void const* pixels_in) {
                __gl_debug << "call glTexSubImage3D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "zoffset: '" << zoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "pixels: '" << pixels_in << "'";
                glTexSubImage3D(target_t::value, level_in, xoffset_in, yoffset_in, zoffset_in, width_in, height_in, depth_in, format_t::value, type_t::value, pixels_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v1_2
      namespace v1_3 {
        namespace fnc {
          struct gl_active_texture {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in) {
                __gl_debug << "call glActiveTexture " "texture: '" << texture_in << "'";
                glActiveTexture(::std::uint32_t(texture_in));
                __gl_check_error;
                
              }
              template< typename texture_t >
              inline static void call() {
                __gl_debug << "call glActiveTexture " "texture: '" << texture_t::name::value << "'";
                glActiveTexture(texture_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_compressed_tex_image_1d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, GLsizei width_in, ::std::int32_t border_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexImage1D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "border: '" << border_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexImage1D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), width_in, border_in, imageSize_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(::std::int32_t level_in, GLsizei width_in, ::std::int32_t border_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexImage1D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "border: '" << border_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexImage1D(target_t::value, level_in, internalformat_t::value, width_in, border_in, imageSize_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_compressed_tex_image_2d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, GLsizei width_in, GLsizei height_in, ::std::int32_t border_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexImage2D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "border: '" << border_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexImage2D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), width_in, height_in, border_in, imageSize_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(::std::int32_t level_in, GLsizei width_in, GLsizei height_in, ::std::int32_t border_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexImage2D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "border: '" << border_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexImage2D(target_t::value, level_in, internalformat_t::value, width_in, height_in, border_in, imageSize_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_compressed_tex_image_3d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, ::std::int32_t border_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexImage3D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "border: '" << border_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexImage3D(::std::uint32_t(target_in), level_in, ::std::uint32_t(internalformat_in), width_in, height_in, depth_in, border_in, imageSize_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(::std::int32_t level_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, ::std::int32_t border_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexImage3D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "border: '" << border_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexImage3D(target_t::value, level_in, internalformat_t::value, width_in, height_in, depth_in, border_in, imageSize_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_compressed_tex_sub_image_1d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, GLsizei width_in, const ::gtulu::internal::constant::gl_constant_base& format_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexSubImage1D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "width: '" << width_in << "'" ", " "format: '" << format_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexSubImage1D(::std::uint32_t(target_in), level_in, xoffset_in, width_in, ::std::uint32_t(format_in), imageSize_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, GLsizei width_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexSubImage1D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "width: '" << width_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexSubImage1D(target_t::value, level_in, xoffset_in, width_in, format_t::value, imageSize_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_compressed_tex_sub_image_2d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, GLsizei width_in, GLsizei height_in, const ::gtulu::internal::constant::gl_constant_base& format_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexSubImage2D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexSubImage2D(::std::uint32_t(target_in), level_in, xoffset_in, yoffset_in, width_in, height_in, ::std::uint32_t(format_in), imageSize_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, GLsizei width_in, GLsizei height_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexSubImage2D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexSubImage2D(target_t::value, level_in, xoffset_in, yoffset_in, width_in, height_in, format_t::value, imageSize_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_compressed_tex_sub_image_3d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t zoffset_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, const ::gtulu::internal::constant::gl_constant_base& format_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexSubImage3D " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "zoffset: '" << zoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "format: '" << format_in << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexSubImage3D(::std::uint32_t(target_in), level_in, xoffset_in, yoffset_in, zoffset_in, width_in, height_in, depth_in, ::std::uint32_t(format_in), imageSize_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t >
              inline static void call(::std::int32_t level_in, ::std::int32_t xoffset_in, ::std::int32_t yoffset_in, ::std::int32_t zoffset_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, GLsizei imageSize_in, void const* data_in) {
                __gl_debug << "call glCompressedTexSubImage3D " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "xoffset: '" << xoffset_in << "'" ", " "yoffset: '" << yoffset_in << "'" ", " "zoffset: '" << zoffset_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "imageSize: '" << imageSize_in << "'" ", " "data: '" << data_in << "'";
                glCompressedTexSubImage3D(target_t::value, level_in, xoffset_in, yoffset_in, zoffset_in, width_in, height_in, depth_in, format_t::value, imageSize_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_compressed_tex_image {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, void* img_in) {
                __gl_debug << "call glGetCompressedTexImage " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "img: '" << img_in << "'";
                glGetCompressedTexImage(::std::uint32_t(target_in), level_in, img_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::int32_t level_in, void* img_in) {
                __gl_debug << "call glGetCompressedTexImage " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "img: '" << img_in << "'";
                glGetCompressedTexImage(target_t::value, level_in, img_in);
                __gl_check_error;
                
              }

          };

          struct gl_sample_coverage {

              inline static void call(float value_in, bool invert_in) {
                __gl_debug << "call glSampleCoverage " "value: '" << value_in << "'" ", " "invert: '" << invert_in << "'";
                glSampleCoverage(value_in, (invert_in ? 1 : 0));
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v1_3
      namespace v1_4 {
        namespace fnc {
          struct gl_blend_func_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& sfactorRGB_in, const ::gtulu::internal::constant::gl_constant_base& dfactorRGB_in, const ::gtulu::internal::constant::gl_constant_base& sfactorAlpha_in, const ::gtulu::internal::constant::gl_constant_base& dfactorAlpha_in) {
                __gl_debug << "call glBlendFuncSeparate " "sfactorRGB: '" << sfactorRGB_in << "'" ", " "dfactorRGB: '" << dfactorRGB_in << "'" ", " "sfactorAlpha: '" << sfactorAlpha_in << "'" ", " "dfactorAlpha: '" << dfactorAlpha_in << "'";
                glBlendFuncSeparate(::std::uint32_t(sfactorRGB_in), ::std::uint32_t(dfactorRGB_in), ::std::uint32_t(sfactorAlpha_in), ::std::uint32_t(dfactorAlpha_in));
                __gl_check_error;
                
              }
              template< typename sfactorRGB_t, typename dfactorRGB_t, typename sfactorAlpha_t, typename dfactorAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendFuncSeparate " "sfactorRGB: '" << sfactorRGB_t::name::value << "'" ", " "dfactorRGB: '" << dfactorRGB_t::name::value << "'" ", " "sfactorAlpha: '" << sfactorAlpha_t::name::value << "'" ", " "dfactorAlpha: '" << dfactorAlpha_t::name::value << "'";
                glBlendFuncSeparate(sfactorRGB_t::value, dfactorRGB_t::value, sfactorAlpha_t::value, dfactorAlpha_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& srcRGB_in, const ::gtulu::internal::constant::gl_constant_base& dstRGB_in, const ::gtulu::internal::constant::gl_constant_base& srcAlpha_in, const ::gtulu::internal::constant::gl_constant_base& dstAlpha_in) {
                __gl_debug << "call glBlendFuncSeparatei " "buf: '" << buf_in << "'" ", " "srcRGB: '" << srcRGB_in << "'" ", " "dstRGB: '" << dstRGB_in << "'" ", " "srcAlpha: '" << srcAlpha_in << "'" ", " "dstAlpha: '" << dstAlpha_in << "'";
                glBlendFuncSeparatei(buf_in, ::std::uint32_t(srcRGB_in), ::std::uint32_t(dstRGB_in), ::std::uint32_t(srcAlpha_in), ::std::uint32_t(dstAlpha_in));
                __gl_check_error;
                
              }
              template< typename srcRGB_t, typename dstRGB_t, typename srcAlpha_t, typename dstAlpha_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendFuncSeparatei " "buf: '" << buf_in << "'" ", " "srcRGB: '" << srcRGB_t::name::value << "'" ", " "dstRGB: '" << dstRGB_t::name::value << "'" ", " "srcAlpha: '" << srcAlpha_t::name::value << "'" ", " "dstAlpha: '" << dstAlpha_t::name::value << "'";
                glBlendFuncSeparatei(buf_in, srcRGB_t::value, dstRGB_t::value, srcAlpha_t::value, dstAlpha_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_multi_draw_arrays {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, ::std::int32_t const* first_in, GLsizei const* count_in, GLsizei primcount_in) {
                __gl_debug << "call glMultiDrawArrays " "mode: '" << mode_in << "'" ", " "first: '" << first_in << "'" ", " "count: '" << count_in << "'" ", " "primcount: '" << primcount_in << "'";
                glMultiDrawArrays(::std::uint32_t(mode_in), first_in, count_in, primcount_in);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::int32_t const* first_in, GLsizei const* count_in, GLsizei primcount_in) {
                __gl_debug << "call glMultiDrawArrays " "mode: '" << mode_t::name::value << "'" ", " "first: '" << first_in << "'" ", " "count: '" << count_in << "'" ", " "primcount: '" << primcount_in << "'";
                glMultiDrawArrays(mode_t::value, first_in, count_in, primcount_in);
                __gl_check_error;
                
              }

          };

          struct gl_multi_draw_elements {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, GLsizei const* count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const** indices_in, GLsizei primcount_in) {
                __gl_debug << "call glMultiDrawElements " "mode: '" << mode_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'";
                glMultiDrawElements(::std::uint32_t(mode_in), count_in, ::std::uint32_t(type_in), indices_in, primcount_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei const* count_in, void const** indices_in, GLsizei primcount_in) {
                __gl_debug << "call glMultiDrawElements " "mode: '" << mode_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'";
                glMultiDrawElements(mode_t::value, count_in, type_t::value, indices_in, primcount_in);
                __gl_check_error;
                
              }

          };

          struct gl_point_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, float param_in) {
                __gl_debug << "call glPointParameterf " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glPointParameterf(::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(float param_in) {
                __gl_debug << "call glPointParameterf " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glPointParameterf(pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, float const* params_in) {
                __gl_debug << "call glPointParameterfv " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glPointParameterfv(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(float const* params_in) {
                __gl_debug << "call glPointParameterfv " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glPointParameterfv(pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t param_in) {
                __gl_debug << "call glPointParameteri " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glPointParameteri(::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::int32_t param_in) {
                __gl_debug << "call glPointParameteri " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glPointParameteri(pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t const* params_in) {
                __gl_debug << "call glPointParameteriv " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glPointParameteriv(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::int32_t const* params_in) {
                __gl_debug << "call glPointParameteriv " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glPointParameteriv(pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v1_4
      namespace v1_5 {
        namespace fnc {
          struct gl_begin_query {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t id_in) {
                __gl_debug << "call glBeginQuery " "target: '" << target_in << "'" ", " "id: '" << id_in << "'";
                glBeginQuery(::std::uint32_t(target_in), id_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t id_in) {
                __gl_debug << "call glBeginQuery " "target: '" << target_t::name::value << "'" ", " "id: '" << id_in << "'";
                glBeginQuery(target_t::value, id_in);
                __gl_check_error;
                
              }

          };

          struct gl_bind_buffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t buffer_in) {
                __gl_debug << "call glBindBuffer " "target: '" << target_in << "'" ", " "buffer: '" << buffer_in << "'";
                glBindBuffer(::std::uint32_t(target_in), buffer_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t buffer_in) {
                __gl_debug << "call glBindBuffer " "target: '" << target_t::name::value << "'" ", " "buffer: '" << buffer_in << "'";
                glBindBuffer(target_t::value, buffer_in);
                __gl_check_error;
                
              }

          };

          struct gl_buffer_data {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLsizeiptr size_in, void const* data_in, const ::gtulu::internal::constant::gl_constant_base& usage_in) {
                __gl_debug << "call glBufferData " "target: '" << target_in << "'" ", " "size: '" << size_in << "'" ", " "data: '" << data_in << "'" ", " "usage: '" << usage_in << "'";
                glBufferData(::std::uint32_t(target_in), size_in, data_in, ::std::uint32_t(usage_in));
                __gl_check_error;
                
              }
              template< typename target_t, typename usage_t >
              inline static void call(GLsizeiptr size_in, void const* data_in) {
                __gl_debug << "call glBufferData " "target: '" << target_t::name::value << "'" ", " "size: '" << size_in << "'" ", " "data: '" << data_in << "'" ", " "usage: '" << usage_t::name::value << "'";
                glBufferData(target_t::value, size_in, data_in, usage_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_buffer_sub_data {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLintptr offset_in, GLsizeiptr size_in, void const* data_in) {
                __gl_debug << "call glBufferSubData " "target: '" << target_in << "'" ", " "offset: '" << offset_in << "'" ", " "size: '" << size_in << "'" ", " "data: '" << data_in << "'";
                glBufferSubData(::std::uint32_t(target_in), offset_in, size_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLintptr offset_in, GLsizeiptr size_in, void const* data_in) {
                __gl_debug << "call glBufferSubData " "target: '" << target_t::name::value << "'" ", " "offset: '" << offset_in << "'" ", " "size: '" << size_in << "'" ", " "data: '" << data_in << "'";
                glBufferSubData(target_t::value, offset_in, size_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_buffers {

              inline static void call(GLsizei n_in, ::std::uint32_t const* buffers_in) {
                __gl_debug << "call glDeleteBuffers " "n: '" << n_in << "'" ", " "buffers: '" << buffers_in << "'";
                glDeleteBuffers(n_in, buffers_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_queries {

              inline static void call(GLsizei n_in, ::std::uint32_t const* ids_in) {
                __gl_debug << "call glDeleteQueries " "n: '" << n_in << "'" ", " "ids: '" << ids_in << "'";
                glDeleteQueries(n_in, ids_in);
                __gl_check_error;
                
              }

          };

          struct gl_end_query {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in) {
                __gl_debug << "call glEndQuery " "target: '" << target_in << "'";
                glEndQuery(::std::uint32_t(target_in));
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call() {
                __gl_debug << "call glEndQuery " "target: '" << target_t::name::value << "'";
                glEndQuery(target_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_gen_buffers {

              inline static void call(GLsizei n_in, ::std::uint32_t* buffers_in) {
                __gl_debug << "call glGenBuffers " "n: '" << n_in << "'" ", " "buffers: '" << buffers_in << "'";
                glGenBuffers(n_in, buffers_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_queries {

              inline static void call(GLsizei n_in, ::std::uint32_t* ids_in) {
                __gl_debug << "call glGenQueries " "n: '" << n_in << "'" ", " "ids: '" << ids_in << "'";
                glGenQueries(n_in, ids_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_buffer_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetBufferParameteriv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteriv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetBufferParameteriv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteriv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, GLint64* params_in) {
                __gl_debug << "call glGetBufferParameteri64v " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteri64v(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint64* params_in) {
                __gl_debug << "call glGetBufferParameteri64v " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteri64v(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_buffer_pointer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, void** params_in) {
                __gl_debug << "call glGetBufferPointerv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetBufferPointerv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(void** params_in) {
                __gl_debug << "call glGetBufferPointerv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetBufferPointerv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_buffer_sub_data {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLintptr offset_in, GLsizeiptr size_in, void* data_in) {
                __gl_debug << "call glGetBufferSubData " "target: '" << target_in << "'" ", " "offset: '" << offset_in << "'" ", " "size: '" << size_in << "'" ", " "data: '" << data_in << "'";
                glGetBufferSubData(::std::uint32_t(target_in), offset_in, size_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLintptr offset_in, GLsizeiptr size_in, void* data_in) {
                __gl_debug << "call glGetBufferSubData " "target: '" << target_t::name::value << "'" ", " "offset: '" << offset_in << "'" ", " "size: '" << size_in << "'" ", " "data: '" << data_in << "'";
                glGetBufferSubData(target_t::value, offset_in, size_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_query {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryiv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryiv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryiv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryiv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_query_object {

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryObjectiv " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectiv(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryObjectiv " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectiv(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetQueryObjectuiv " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectuiv(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetQueryObjectuiv " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectuiv(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, GLint64* params_in) {
                __gl_debug << "call glGetQueryObjecti64v " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjecti64v(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, GLint64* params_in) {
                __gl_debug << "call glGetQueryObjecti64v " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjecti64v(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, GLuint64* params_in) {
                __gl_debug << "call glGetQueryObjectui64v " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectui64v(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, GLuint64* params_in) {
                __gl_debug << "call glGetQueryObjectui64v " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectui64v(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_buffer {

              inline static GLboolean call(::std::uint32_t buffer_in) {
                __gl_debug << "call glIsBuffer " "buffer: '" << buffer_in << "'";
                GLboolean out = glIsBuffer(buffer_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_is_query {

              inline static GLboolean call(::std::uint32_t id_in) {
                __gl_debug << "call glIsQuery " "id: '" << id_in << "'";
                GLboolean out = glIsQuery(id_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_map_buffer {

              inline static GLvoid* call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& access_in) {
                __gl_debug << "call glMapBuffer " "target: '" << target_in << "'" ", " "access: '" << access_in << "'";
                GLvoid* out = glMapBuffer(::std::uint32_t(target_in), ::std::uint32_t(access_in));
                __gl_check_error;
                return out;
              }
              template< typename target_t, typename access_t >
              inline static GLvoid* call() {
                __gl_debug << "call glMapBuffer " "target: '" << target_t::name::value << "'" ", " "access: '" << access_t::name::value << "'";
                GLvoid* out = glMapBuffer(target_t::value, access_t::value);
                __gl_check_error;
                return out;
              }

          };

          struct gl_unmap_buffer {

              inline static GLboolean call(const ::gtulu::internal::constant::gl_constant_base& target_in) {
                __gl_debug << "call glUnmapBuffer " "target: '" << target_in << "'";
                GLboolean out = glUnmapBuffer(::std::uint32_t(target_in));
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLboolean call() {
                __gl_debug << "call glUnmapBuffer " "target: '" << target_t::name::value << "'";
                GLboolean out = glUnmapBuffer(target_t::value);
                __gl_check_error;
                return out;
              }

          };

        } // namespace fnc
      } // namespace v1_5
      namespace v2_0 {
        namespace fnc {
          struct gl_attach_shader {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t shader_in) {
                __gl_debug << "call glAttachShader " "program: '" << program_in << "'" ", " "shader: '" << shader_in << "'";
                glAttachShader(program_in, shader_in);
                __gl_check_error;
                
              }

          };

          struct gl_bind_attrib_location {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t index_in, GLchar const* name_in) {
                __gl_debug << "call glBindAttribLocation " "program: '" << program_in << "'" ", " "index: '" << index_in << "'" ", " "name: '" << name_in << "'";
                glBindAttribLocation(program_in, index_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_blend_equation_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& modeRGB_in, const ::gtulu::internal::constant::gl_constant_base& modeAlpha_in) {
                __gl_debug << "call glBlendEquationSeparate " "modeRGB: '" << modeRGB_in << "'" ", " "modeAlpha: '" << modeAlpha_in << "'";
                glBlendEquationSeparate(::std::uint32_t(modeRGB_in), ::std::uint32_t(modeAlpha_in));
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendEquationSeparate " "modeRGB: '" << modeRGB_t::name::value << "'" ", " "modeAlpha: '" << modeAlpha_t::name::value << "'";
                glBlendEquationSeparate(modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& modeRGB_in, const ::gtulu::internal::constant::gl_constant_base& modeAlpha_in) {
                __gl_debug << "call glBlendEquationSeparatei " "buf: '" << buf_in << "'" ", " "modeRGB: '" << modeRGB_in << "'" ", " "modeAlpha: '" << modeAlpha_in << "'";
                glBlendEquationSeparatei(buf_in, ::std::uint32_t(modeRGB_in), ::std::uint32_t(modeAlpha_in));
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendEquationSeparatei " "buf: '" << buf_in << "'" ", " "modeRGB: '" << modeRGB_t::name::value << "'" ", " "modeAlpha: '" << modeAlpha_t::name::value << "'";
                glBlendEquationSeparatei(buf_in, modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_compile_shader {

              inline static void call(::std::uint32_t shader_in) {
                __gl_debug << "call glCompileShader " "shader: '" << shader_in << "'";
                glCompileShader(shader_in);
                __gl_check_error;
                
              }

          };

          struct gl_create_program {

              inline static GLuint call() {
                __gl_debug << "call glCreateProgram " "";
                GLuint out = glCreateProgram();
                __gl_check_error;
                return out;
              }

          };

          struct gl_create_shader {

              inline static GLuint call(const ::gtulu::internal::constant::gl_constant_base& type_in) {
                __gl_debug << "call glCreateShader " "type: '" << type_in << "'";
                GLuint out = glCreateShader(::std::uint32_t(type_in));
                __gl_check_error;
                return out;
              }
              template< typename type_t >
              inline static GLuint call() {
                __gl_debug << "call glCreateShader " "type: '" << type_t::name::value << "'";
                GLuint out = glCreateShader(type_t::value);
                __gl_check_error;
                return out;
              }

          };

          struct gl_delete_program {

              inline static void call(::std::uint32_t program_in) {
                __gl_debug << "call glDeleteProgram " "program: '" << program_in << "'";
                glDeleteProgram(program_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_shader {

              inline static void call(::std::uint32_t shader_in) {
                __gl_debug << "call glDeleteShader " "shader: '" << shader_in << "'";
                glDeleteShader(shader_in);
                __gl_check_error;
                
              }

          };

          struct gl_detach_shader {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t shader_in) {
                __gl_debug << "call glDetachShader " "program: '" << program_in << "'" ", " "shader: '" << shader_in << "'";
                glDetachShader(program_in, shader_in);
                __gl_check_error;
                
              }

          };

          struct gl_disable_vertex_attrib_array {

              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glDisableVertexAttribArray " "index: '" << index_in << "'";
                glDisableVertexAttribArray(index_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_buffers {

              inline static void call(GLsizei n_in, GLenum const* bufs_in) {
                __gl_debug << "call glDrawBuffers " "n: '" << n_in << "'" ", " "bufs: '" << bufs_in << "'";
                glDrawBuffers(n_in, bufs_in);
                __gl_check_error;
                
              }

          };

          struct gl_enable_vertex_attrib_array {

              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glEnableVertexAttribArray " "index: '" << index_in << "'";
                glEnableVertexAttribArray(index_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_active_attrib {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t index_in, GLsizei bufSize_in, GLsizei* length_in, ::std::int32_t* size_in, GLenum* type_in, GLchar* name_in) {
                __gl_debug << "call glGetActiveAttrib " "program: '" << program_in << "'" ", " "index: '" << index_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_in << "'" ", " "name: '" << name_in << "'";
                glGetActiveAttrib(program_in, index_in, bufSize_in, length_in, size_in, type_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_active_uniform {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t index_in, GLsizei bufSize_in, GLsizei* length_in, ::std::int32_t* size_in, GLenum* type_in, GLchar* name_in) {
                __gl_debug << "call glGetActiveUniform " "program: '" << program_in << "'" ", " "index: '" << index_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_in << "'" ", " "name: '" << name_in << "'";
                glGetActiveUniform(program_in, index_in, bufSize_in, length_in, size_in, type_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_attached_shaders {

              inline static void call(::std::uint32_t program_in, GLsizei maxCount_in, GLsizei* count_in, ::std::uint32_t* obj_in) {
                __gl_debug << "call glGetAttachedShaders " "program: '" << program_in << "'" ", " "maxCount: '" << maxCount_in << "'" ", " "count: '" << count_in << "'" ", " "obj: '" << obj_in << "'";
                glGetAttachedShaders(program_in, maxCount_in, count_in, obj_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_attrib_location {

              inline static GLint call(::std::uint32_t program_in, GLchar const* name_in) {
                __gl_debug << "call glGetAttribLocation " "program: '" << program_in << "'" ", " "name: '" << name_in << "'";
                GLint out = glGetAttribLocation(program_in, name_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_program {

              inline static void call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetProgramiv " "program: '" << program_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetProgramiv(program_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t program_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetProgramiv " "program: '" << program_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetProgramiv(program_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_program_info_log {

              inline static void call(::std::uint32_t program_in, GLsizei bufSize_in, GLsizei* length_in, GLchar* infoLog_in) {
                __gl_debug << "call glGetProgramInfoLog " "program: '" << program_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "infoLog: '" << infoLog_in << "'";
                glGetProgramInfoLog(program_in, bufSize_in, length_in, infoLog_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_shader {

              inline static void call(::std::uint32_t shader_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetShaderiv " "shader: '" << shader_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetShaderiv(shader_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t shader_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetShaderiv " "shader: '" << shader_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetShaderiv(shader_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_shader_info_log {

              inline static void call(::std::uint32_t shader_in, GLsizei bufSize_in, GLsizei* length_in, GLchar* infoLog_in) {
                __gl_debug << "call glGetShaderInfoLog " "shader: '" << shader_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "infoLog: '" << infoLog_in << "'";
                glGetShaderInfoLog(shader_in, bufSize_in, length_in, infoLog_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_shader_source {

              inline static void call(::std::uint32_t shader_in, GLsizei bufSize_in, GLsizei* length_in, GLchar* source_in) {
                __gl_debug << "call glGetShaderSource " "shader: '" << shader_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "source: '" << source_in << "'";
                glGetShaderSource(shader_in, bufSize_in, length_in, source_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_uniform {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, float* params_in) {
                __gl_debug << "call glGetUniformfv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformfv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetUniformiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformiv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetUniformuiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformuiv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, double* params_in) {
                __gl_debug << "call glGetUniformdv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformdv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_uniform_location {

              inline static GLint call(::std::uint32_t program_in, GLchar const* name_in) {
                __gl_debug << "call glGetUniformLocation " "program: '" << program_in << "'" ", " "name: '" << name_in << "'";
                GLint out = glGetUniformLocation(program_in, name_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_vertex_attrib {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, double* params_in) {
                __gl_debug << "call glGetVertexAttribdv " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribdv(index_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, double* params_in) {
                __gl_debug << "call glGetVertexAttribdv " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribdv(index_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float* params_in) {
                __gl_debug << "call glGetVertexAttribfv " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribfv(index_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, float* params_in) {
                __gl_debug << "call glGetVertexAttribfv " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribfv(index_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetVertexAttribiv " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribiv(index_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetVertexAttribiv " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribiv(index_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_vertex_attrib_pointer {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, void** pointer_in) {
                __gl_debug << "call glGetVertexAttribPointerv " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "pointer: '" << pointer_in << "'";
                glGetVertexAttribPointerv(index_in, ::std::uint32_t(pname_in), pointer_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, void** pointer_in) {
                __gl_debug << "call glGetVertexAttribPointerv " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "pointer: '" << pointer_in << "'";
                glGetVertexAttribPointerv(index_in, pname_t::value, pointer_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_program {

              inline static GLboolean call(::std::uint32_t program_in) {
                __gl_debug << "call glIsProgram " "program: '" << program_in << "'";
                GLboolean out = glIsProgram(program_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_is_shader {

              inline static GLboolean call(::std::uint32_t shader_in) {
                __gl_debug << "call glIsShader " "shader: '" << shader_in << "'";
                GLboolean out = glIsShader(shader_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_link_program {

              inline static void call(::std::uint32_t program_in) {
                __gl_debug << "call glLinkProgram " "program: '" << program_in << "'";
                glLinkProgram(program_in);
                __gl_check_error;
                
              }

          };

          struct gl_shader_source {

              inline static void call(::std::uint32_t shader_in, GLsizei count_in, GLchar const** string_in, ::std::int32_t const* length_in) {
                __gl_debug << "call glShaderSource " "shader: '" << shader_in << "'" ", " "count: '" << count_in << "'" ", " "string: '" << string_in << "'" ", " "length: '" << length_in << "'";
                glShaderSource(shader_in, count_in, string_in, length_in);
                __gl_check_error;
                
              }

          };

          struct gl_stencil_func_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& face_in, const ::gtulu::internal::constant::gl_constant_base& func_in, ::std::int32_t ref_in, ::std::uint32_t mask_in) {
                __gl_debug << "call glStencilFuncSeparate " "face: '" << face_in << "'" ", " "func: '" << func_in << "'" ", " "ref: '" << ref_in << "'" ", " "mask: '" << mask_in << "'";
                glStencilFuncSeparate(::std::uint32_t(face_in), ::std::uint32_t(func_in), ref_in, mask_in);
                __gl_check_error;
                
              }
              template< typename face_t, typename func_t >
              inline static void call(::std::int32_t ref_in, ::std::uint32_t mask_in) {
                __gl_debug << "call glStencilFuncSeparate " "face: '" << face_t::name::value << "'" ", " "func: '" << func_t::name::value << "'" ", " "ref: '" << ref_in << "'" ", " "mask: '" << mask_in << "'";
                glStencilFuncSeparate(face_t::value, func_t::value, ref_in, mask_in);
                __gl_check_error;
                
              }

          };

          struct gl_stencil_mask_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& face_in, ::std::uint32_t mask_in) {
                __gl_debug << "call glStencilMaskSeparate " "face: '" << face_in << "'" ", " "mask: '" << mask_in << "'";
                glStencilMaskSeparate(::std::uint32_t(face_in), mask_in);
                __gl_check_error;
                
              }
              template< typename face_t >
              inline static void call(::std::uint32_t mask_in) {
                __gl_debug << "call glStencilMaskSeparate " "face: '" << face_t::name::value << "'" ", " "mask: '" << mask_in << "'";
                glStencilMaskSeparate(face_t::value, mask_in);
                __gl_check_error;
                
              }

          };

          struct gl_stencil_op_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& face_in, const ::gtulu::internal::constant::gl_constant_base& sfail_in, const ::gtulu::internal::constant::gl_constant_base& dpfail_in, const ::gtulu::internal::constant::gl_constant_base& dppass_in) {
                __gl_debug << "call glStencilOpSeparate " "face: '" << face_in << "'" ", " "sfail: '" << sfail_in << "'" ", " "dpfail: '" << dpfail_in << "'" ", " "dppass: '" << dppass_in << "'";
                glStencilOpSeparate(::std::uint32_t(face_in), ::std::uint32_t(sfail_in), ::std::uint32_t(dpfail_in), ::std::uint32_t(dppass_in));
                __gl_check_error;
                
              }
              template< typename face_t, typename sfail_t, typename dpfail_t, typename dppass_t >
              inline static void call() {
                __gl_debug << "call glStencilOpSeparate " "face: '" << face_t::name::value << "'" ", " "sfail: '" << sfail_t::name::value << "'" ", " "dpfail: '" << dpfail_t::name::value << "'" ", " "dppass: '" << dppass_t::name::value << "'";
                glStencilOpSeparate(face_t::value, sfail_t::value, dpfail_t::value, dppass_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_1 {

              inline static void call(::std::int32_t location_in, float v0_in) {
                __gl_debug << "call glUniform1f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1f(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in) {
                __gl_debug << "call glUniform1i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1i(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform1fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform1iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in) {
                __gl_debug << "call glUniform1ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1ui(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform1uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in) {
                __gl_debug << "call glUniform1d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'";
                glUniform1d(location_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform1dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_2 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in) {
                __gl_debug << "call glUniform2f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2f(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in) {
                __gl_debug << "call glUniform2i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2i(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform2iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in) {
                __gl_debug << "call glUniform2ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2ui(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform2uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in) {
                __gl_debug << "call glUniform2d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glUniform2d(location_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_3 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in, float v2_in) {
                __gl_debug << "call glUniform3f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3f(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in) {
                __gl_debug << "call glUniform3i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3i(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform3iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in) {
                __gl_debug << "call glUniform3ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3ui(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform3uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in, double z_in) {
                __gl_debug << "call glUniform3d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glUniform3d(location_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_4 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in, float v2_in, float v3_in) {
                __gl_debug << "call glUniform4f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4f(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in, ::std::int32_t v3_in) {
                __gl_debug << "call glUniform4i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4i(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform4iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in, ::std::uint32_t v3_in) {
                __gl_debug << "call glUniform4ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4ui(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform4uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in, double z_in, double w_in) {
                __gl_debug << "call glUniform4d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glUniform4d(location_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_2 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_3 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_4 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_use_program {

              inline static void call(::std::uint32_t program_in) {
                __gl_debug << "call glUseProgram " "program: '" << program_in << "'";
                glUseProgram(program_in);
                __gl_check_error;
                
              }

          };

          struct gl_validate_program {

              inline static void call(::std::uint32_t program_in) {
                __gl_debug << "call glValidateProgram " "program: '" << program_in << "'";
                glValidateProgram(program_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_1 {

              inline static void call(::std::uint32_t index_in, double x_in) {
                __gl_debug << "call glVertexAttrib1d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'";
                glVertexAttrib1d(index_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttrib1dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib1dv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float x_in) {
                __gl_debug << "call glVertexAttrib1f " "index: '" << index_in << "'" ", " "x: '" << x_in << "'";
                glVertexAttrib1f(index_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float const* v_in) {
                __gl_debug << "call glVertexAttrib1fv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib1fv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort x_in) {
                __gl_debug << "call glVertexAttrib1s " "index: '" << index_in << "'" ", " "x: '" << x_in << "'";
                glVertexAttrib1s(index_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort const* v_in) {
                __gl_debug << "call glVertexAttrib1sv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib1sv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_2 {

              inline static void call(::std::uint32_t index_in, double x_in, double y_in) {
                __gl_debug << "call glVertexAttrib2d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glVertexAttrib2d(index_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttrib2dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib2dv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float x_in, float y_in) {
                __gl_debug << "call glVertexAttrib2f " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glVertexAttrib2f(index_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float const* v_in) {
                __gl_debug << "call glVertexAttrib2fv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib2fv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort x_in, GLshort y_in) {
                __gl_debug << "call glVertexAttrib2s " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glVertexAttrib2s(index_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort const* v_in) {
                __gl_debug << "call glVertexAttrib2sv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib2sv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_3 {

              inline static void call(::std::uint32_t index_in, double x_in, double y_in, double z_in) {
                __gl_debug << "call glVertexAttrib3d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glVertexAttrib3d(index_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttrib3dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib3dv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float x_in, float y_in, float z_in) {
                __gl_debug << "call glVertexAttrib3f " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glVertexAttrib3f(index_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float const* v_in) {
                __gl_debug << "call glVertexAttrib3fv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib3fv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort x_in, GLshort y_in, GLshort z_in) {
                __gl_debug << "call glVertexAttrib3s " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glVertexAttrib3s(index_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort const* v_in) {
                __gl_debug << "call glVertexAttrib3sv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib3sv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_4 {

              inline static void call(::std::uint32_t index_in, GLbyte const* v_in) {
                __gl_debug << "call glVertexAttrib4bv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4bv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double x_in, double y_in, double z_in, double w_in) {
                __gl_debug << "call glVertexAttrib4d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glVertexAttrib4d(index_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttrib4dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4dv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float x_in, float y_in, float z_in, float w_in) {
                __gl_debug << "call glVertexAttrib4f " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glVertexAttrib4f(index_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float const* v_in) {
                __gl_debug << "call glVertexAttrib4fv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4fv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glVertexAttrib4iv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4iv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort x_in, GLshort y_in, GLshort z_in, GLshort w_in) {
                __gl_debug << "call glVertexAttrib4s " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glVertexAttrib4s(index_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort const* v_in) {
                __gl_debug << "call glVertexAttrib4sv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4sv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint8_t const* v_in) {
                __gl_debug << "call glVertexAttrib4ubv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4ubv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t const* v_in) {
                __gl_debug << "call glVertexAttrib4uiv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4uiv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint16_t const* v_in) {
                __gl_debug << "call glVertexAttrib4usv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4usv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_4_normalized {

              inline static void call(::std::uint32_t index_in, GLbyte const* v_in) {
                __gl_debug << "call glVertexAttrib4Nbv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4Nbv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glVertexAttrib4Niv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4Niv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort const* v_in) {
                __gl_debug << "call glVertexAttrib4Nsv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4Nsv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint8_t x_in, ::std::uint8_t y_in, ::std::uint8_t z_in, ::std::uint8_t w_in) {
                __gl_debug << "call glVertexAttrib4Nub " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glVertexAttrib4Nub(index_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint8_t const* v_in) {
                __gl_debug << "call glVertexAttrib4Nubv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4Nubv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t const* v_in) {
                __gl_debug << "call glVertexAttrib4Nuiv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4Nuiv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint16_t const* v_in) {
                __gl_debug << "call glVertexAttrib4Nusv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttrib4Nusv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_pointer {

              inline static void call(::std::uint32_t index_in, ::std::int32_t size_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, GLsizei stride_in, void const* pointer_in) {
                __gl_debug << "call glVertexAttribPointer " "index: '" << index_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "stride: '" << stride_in << "'" ", " "pointer: '" << pointer_in << "'";
                glVertexAttribPointer(index_in, size_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), stride_in, pointer_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t size_in, bool normalized_in, GLsizei stride_in, void const* pointer_in) {
                __gl_debug << "call glVertexAttribPointer " "index: '" << index_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "stride: '" << stride_in << "'" ", " "pointer: '" << pointer_in << "'";
                glVertexAttribPointer(index_in, size_in, type_t::value, (normalized_in ? 1 : 0), stride_in, pointer_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v2_0
      namespace v2_1 {
        namespace fnc {
          struct gl_uniform_matrix_2x3 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix2x3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x3fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix2x3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x3dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_2x4 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix2x4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x4fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix2x4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x4dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_3x2 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix3x2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x2fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix3x2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x2dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_3x4 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix3x4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x4fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix3x4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x4dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_4x2 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix4x2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x2fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix4x2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x2dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_4x3 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix4x3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x3fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix4x3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x3dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v2_1
      namespace v3_0 {
        namespace fnc {
          struct gl_begin_conditional_render {

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glBeginConditionalRender " "id: '" << id_in << "'" ", " "mode: '" << mode_in << "'";
                glBeginConditionalRender(id_in, ::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::uint32_t id_in) {
                __gl_debug << "call glBeginConditionalRender " "id: '" << id_in << "'" ", " "mode: '" << mode_t::name::value << "'";
                glBeginConditionalRender(id_in, mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_begin_transform_feedback {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& primitiveMode_in) {
                __gl_debug << "call glBeginTransformFeedback " "primitiveMode: '" << primitiveMode_in << "'";
                glBeginTransformFeedback(::std::uint32_t(primitiveMode_in));
                __gl_check_error;
                
              }
              template< typename primitiveMode_t >
              inline static void call() {
                __gl_debug << "call glBeginTransformFeedback " "primitiveMode: '" << primitiveMode_t::name::value << "'";
                glBeginTransformFeedback(primitiveMode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_bind_buffer_base {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, ::std::uint32_t buffer_in) {
                __gl_debug << "call glBindBufferBase " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "buffer: '" << buffer_in << "'";
                glBindBufferBase(::std::uint32_t(target_in), index_in, buffer_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, ::std::uint32_t buffer_in) {
                __gl_debug << "call glBindBufferBase " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "buffer: '" << buffer_in << "'";
                glBindBufferBase(target_t::value, index_in, buffer_in);
                __gl_check_error;
                
              }

          };

          struct gl_bind_buffer_range {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, ::std::uint32_t buffer_in, GLintptr offset_in, GLsizeiptr size_in) {
                __gl_debug << "call glBindBufferRange " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "buffer: '" << buffer_in << "'" ", " "offset: '" << offset_in << "'" ", " "size: '" << size_in << "'";
                glBindBufferRange(::std::uint32_t(target_in), index_in, buffer_in, offset_in, size_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, ::std::uint32_t buffer_in, GLintptr offset_in, GLsizeiptr size_in) {
                __gl_debug << "call glBindBufferRange " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "buffer: '" << buffer_in << "'" ", " "offset: '" << offset_in << "'" ", " "size: '" << size_in << "'";
                glBindBufferRange(target_t::value, index_in, buffer_in, offset_in, size_in);
                __gl_check_error;
                
              }

          };

          struct gl_bind_frag_data_location {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t color_in, GLchar const* name_in) {
                __gl_debug << "call glBindFragDataLocation " "program: '" << program_in << "'" ", " "color: '" << color_in << "'" ", " "name: '" << name_in << "'";
                glBindFragDataLocation(program_in, color_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_clamp_color {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& clamp_in) {
                __gl_debug << "call glClampColor " "target: '" << target_in << "'" ", " "clamp: '" << clamp_in << "'";
                glClampColor(::std::uint32_t(target_in), ::std::uint32_t(clamp_in));
                __gl_check_error;
                
              }
              template< typename target_t, typename clamp_t >
              inline static void call() {
                __gl_debug << "call glClampColor " "target: '" << target_t::name::value << "'" ", " "clamp: '" << clamp_t::name::value << "'";
                glClampColor(target_t::value, clamp_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_clear_buffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& buffer_in, ::std::int32_t drawbuffer_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glClearBufferiv " "buffer: '" << buffer_in << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "value: '" << value_in << "'";
                glClearBufferiv(::std::uint32_t(buffer_in), drawbuffer_in, value_in);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(::std::int32_t drawbuffer_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glClearBufferiv " "buffer: '" << buffer_t::name::value << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "value: '" << value_in << "'";
                glClearBufferiv(buffer_t::value, drawbuffer_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& buffer_in, ::std::int32_t drawbuffer_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glClearBufferuiv " "buffer: '" << buffer_in << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "value: '" << value_in << "'";
                glClearBufferuiv(::std::uint32_t(buffer_in), drawbuffer_in, value_in);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(::std::int32_t drawbuffer_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glClearBufferuiv " "buffer: '" << buffer_t::name::value << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "value: '" << value_in << "'";
                glClearBufferuiv(buffer_t::value, drawbuffer_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& buffer_in, ::std::int32_t drawbuffer_in, float const* value_in) {
                __gl_debug << "call glClearBufferfv " "buffer: '" << buffer_in << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "value: '" << value_in << "'";
                glClearBufferfv(::std::uint32_t(buffer_in), drawbuffer_in, value_in);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(::std::int32_t drawbuffer_in, float const* value_in) {
                __gl_debug << "call glClearBufferfv " "buffer: '" << buffer_t::name::value << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "value: '" << value_in << "'";
                glClearBufferfv(buffer_t::value, drawbuffer_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_clear_buffer_float {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& buffer_in, ::std::int32_t drawbuffer_in, float depth_in, ::std::int32_t stencil_in) {
                __gl_debug << "call glClearBufferfi " "buffer: '" << buffer_in << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "depth: '" << depth_in << "'" ", " "stencil: '" << stencil_in << "'";
                glClearBufferfi(::std::uint32_t(buffer_in), drawbuffer_in, depth_in, stencil_in);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(::std::int32_t drawbuffer_in, float depth_in, ::std::int32_t stencil_in) {
                __gl_debug << "call glClearBufferfi " "buffer: '" << buffer_t::name::value << "'" ", " "drawbuffer: '" << drawbuffer_in << "'" ", " "depth: '" << depth_in << "'" ", " "stencil: '" << stencil_in << "'";
                glClearBufferfi(buffer_t::value, drawbuffer_in, depth_in, stencil_in);
                __gl_check_error;
                
              }

          };

          struct gl_color_mask {

              inline static void call(bool red_in, bool green_in, bool blue_in, bool alpha_in) {
                __gl_debug << "call glColorMask " "red: '" << red_in << "'" ", " "green: '" << green_in << "'" ", " "blue: '" << blue_in << "'" ", " "alpha: '" << alpha_in << "'";
                glColorMask((red_in ? 1 : 0), (green_in ? 1 : 0), (blue_in ? 1 : 0), (alpha_in ? 1 : 0));
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, bool r_in, bool g_in, bool b_in, bool a_in) {
                __gl_debug << "call glColorMaski " "index: '" << index_in << "'" ", " "r: '" << r_in << "'" ", " "g: '" << g_in << "'" ", " "b: '" << b_in << "'" ", " "a: '" << a_in << "'";
                glColorMaski(index_in, (r_in ? 1 : 0), (g_in ? 1 : 0), (b_in ? 1 : 0), (a_in ? 1 : 0));
                __gl_check_error;
                
              }

          };

          struct gl_disable {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& cap_in) {
                __gl_debug << "call glDisable " "cap: '" << cap_in << "'";
                glDisable(::std::uint32_t(cap_in));
                __gl_check_error;
                
              }
              template< typename cap_t >
              inline static void call() {
                __gl_debug << "call glDisable " "cap: '" << cap_t::name::value << "'";
                glDisable(cap_t::value);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in) {
                __gl_debug << "call glDisablei " "target: '" << target_in << "'" ", " "index: '" << index_in << "'";
                glDisablei(::std::uint32_t(target_in), index_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glDisablei " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'";
                glDisablei(target_t::value, index_in);
                __gl_check_error;
                
              }

          };

          struct gl_enable {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& cap_in) {
                __gl_debug << "call glEnable " "cap: '" << cap_in << "'";
                glEnable(::std::uint32_t(cap_in));
                __gl_check_error;
                
              }
              template< typename cap_t >
              inline static void call() {
                __gl_debug << "call glEnable " "cap: '" << cap_t::name::value << "'";
                glEnable(cap_t::value);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in) {
                __gl_debug << "call glEnablei " "target: '" << target_in << "'" ", " "index: '" << index_in << "'";
                glEnablei(::std::uint32_t(target_in), index_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glEnablei " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'";
                glEnablei(target_t::value, index_in);
                __gl_check_error;
                
              }

          };

          struct gl_end_conditional_render {

              inline static void call() {
                __gl_debug << "call glEndConditionalRender " "";
                glEndConditionalRender();
                __gl_check_error;
                
              }

          };

          struct gl_end_transform_feedback {

              inline static void call() {
                __gl_debug << "call glEndTransformFeedback " "";
                glEndTransformFeedback();
                __gl_check_error;
                
              }

          };

          struct gl_get_boolean_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, GLboolean* data_in) {
                __gl_debug << "call glGetBooleani_v " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetBooleani_v(::std::uint32_t(target_in), index_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, GLboolean* data_in) {
                __gl_debug << "call glGetBooleani_v " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetBooleani_v(target_t::value, index_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_frag_data_location {

              inline static GLint call(::std::uint32_t program_in, GLchar const* name_in) {
                __gl_debug << "call glGetFragDataLocation " "program: '" << program_in << "'" ", " "name: '" << name_in << "'";
                GLint out = glGetFragDataLocation(program_in, name_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_integer_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, ::std::int32_t* data_in) {
                __gl_debug << "call glGetIntegeri_v " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetIntegeri_v(::std::uint32_t(target_in), index_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t* data_in) {
                __gl_debug << "call glGetIntegeri_v " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetIntegeri_v(target_t::value, index_in, data_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, GLint64* data_in) {
                __gl_debug << "call glGetInteger64i_v " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetInteger64i_v(::std::uint32_t(target_in), index_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, GLint64* data_in) {
                __gl_debug << "call glGetInteger64i_v " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetInteger64i_v(target_t::value, index_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_string {

              inline static const GLubyte * call(const ::gtulu::internal::constant::gl_constant_base& name_in) {
                __gl_debug << "call glGetString " "name: '" << name_in << "'";
                const GLubyte * out = glGetString(::std::uint32_t(name_in));
                __gl_check_error;
                return out;
              }
              template< typename name_t >
              inline static const GLubyte * call() {
                __gl_debug << "call glGetString " "name: '" << name_t::name::value << "'";
                const GLubyte * out = glGetString(name_t::value);
                __gl_check_error;
                return out;
              }

              inline static const GLubyte * call(const ::gtulu::internal::constant::gl_constant_base& name_in, ::std::uint32_t index_in) {
                __gl_debug << "call glGetStringi " "name: '" << name_in << "'" ", " "index: '" << index_in << "'";
                const GLubyte * out = glGetStringi(::std::uint32_t(name_in), index_in);
                __gl_check_error;
                return out;
              }
              template< typename name_t >
              inline static const GLubyte * call(::std::uint32_t index_in) {
                __gl_debug << "call glGetStringi " "name: '" << name_t::name::value << "'" ", " "index: '" << index_in << "'";
                const GLubyte * out = glGetStringi(name_t::value, index_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_tex_parameter_integer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetTexParameterIiv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetTexParameterIiv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetTexParameterIiv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetTexParameterIiv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetTexParameterIuiv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetTexParameterIuiv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::uint32_t* params_in) {
                __gl_debug << "call glGetTexParameterIuiv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetTexParameterIuiv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_transform_feedback_varying {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t index_in, GLsizei bufSize_in, GLsizei* length_in, GLsizei* size_in, GLenum* type_in, GLchar* name_in) {
                __gl_debug << "call glGetTransformFeedbackVarying " "program: '" << program_in << "'" ", " "index: '" << index_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_in << "'" ", " "name: '" << name_in << "'";
                glGetTransformFeedbackVarying(program_in, index_in, bufSize_in, length_in, size_in, type_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_uniform {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, float* params_in) {
                __gl_debug << "call glGetUniformfv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformfv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetUniformiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformiv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetUniformuiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformuiv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, double* params_in) {
                __gl_debug << "call glGetUniformdv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformdv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_vertex_attrib_integer {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetVertexAttribIiv " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribIiv(index_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetVertexAttribIiv " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribIiv(index_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetVertexAttribIuiv " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribIuiv(index_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetVertexAttribIuiv " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribIuiv(index_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_enabled {

              inline static GLboolean call(const ::gtulu::internal::constant::gl_constant_base& cap_in) {
                __gl_debug << "call glIsEnabled " "cap: '" << cap_in << "'";
                GLboolean out = glIsEnabled(::std::uint32_t(cap_in));
                __gl_check_error;
                return out;
              }
              template< typename cap_t >
              inline static GLboolean call() {
                __gl_debug << "call glIsEnabled " "cap: '" << cap_t::name::value << "'";
                GLboolean out = glIsEnabled(cap_t::value);
                __gl_check_error;
                return out;
              }

              inline static GLboolean call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in) {
                __gl_debug << "call glIsEnabledi " "target: '" << target_in << "'" ", " "index: '" << index_in << "'";
                GLboolean out = glIsEnabledi(::std::uint32_t(target_in), index_in);
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLboolean call(::std::uint32_t index_in) {
                __gl_debug << "call glIsEnabledi " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'";
                GLboolean out = glIsEnabledi(target_t::value, index_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_tex_parameter_integer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t const* params_in) {
                __gl_debug << "call glTexParameterIiv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glTexParameterIiv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t const* params_in) {
                __gl_debug << "call glTexParameterIiv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glTexParameterIiv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t const* params_in) {
                __gl_debug << "call glTexParameterIuiv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glTexParameterIuiv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::uint32_t const* params_in) {
                __gl_debug << "call glTexParameterIuiv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glTexParameterIuiv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_transform_feedback_varyings {

              inline static void call(::std::uint32_t program_in, GLsizei count_in, GLchar const** varyings_in, const ::gtulu::internal::constant::gl_constant_base& bufferMode_in) {
                __gl_debug << "call glTransformFeedbackVaryings " "program: '" << program_in << "'" ", " "count: '" << count_in << "'" ", " "varyings: '" << varyings_in << "'" ", " "bufferMode: '" << bufferMode_in << "'";
                glTransformFeedbackVaryings(program_in, count_in, varyings_in, ::std::uint32_t(bufferMode_in));
                __gl_check_error;
                
              }
              template< typename bufferMode_t >
              inline static void call(::std::uint32_t program_in, GLsizei count_in, GLchar const** varyings_in) {
                __gl_debug << "call glTransformFeedbackVaryings " "program: '" << program_in << "'" ", " "count: '" << count_in << "'" ", " "varyings: '" << varyings_in << "'" ", " "bufferMode: '" << bufferMode_t::name::value << "'";
                glTransformFeedbackVaryings(program_in, count_in, varyings_in, bufferMode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_1 {

              inline static void call(::std::int32_t location_in, float v0_in) {
                __gl_debug << "call glUniform1f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1f(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in) {
                __gl_debug << "call glUniform1i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1i(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform1fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform1iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in) {
                __gl_debug << "call glUniform1ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1ui(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform1uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in) {
                __gl_debug << "call glUniform1d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'";
                glUniform1d(location_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform1dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_2 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in) {
                __gl_debug << "call glUniform2f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2f(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in) {
                __gl_debug << "call glUniform2i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2i(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform2iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in) {
                __gl_debug << "call glUniform2ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2ui(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform2uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in) {
                __gl_debug << "call glUniform2d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glUniform2d(location_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_3 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in, float v2_in) {
                __gl_debug << "call glUniform3f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3f(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in) {
                __gl_debug << "call glUniform3i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3i(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform3iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in) {
                __gl_debug << "call glUniform3ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3ui(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform3uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in, double z_in) {
                __gl_debug << "call glUniform3d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glUniform3d(location_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_4 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in, float v2_in, float v3_in) {
                __gl_debug << "call glUniform4f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4f(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in, ::std::int32_t v3_in) {
                __gl_debug << "call glUniform4i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4i(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform4iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in, ::std::uint32_t v3_in) {
                __gl_debug << "call glUniform4ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4ui(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform4uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in, double z_in, double w_in) {
                __gl_debug << "call glUniform4d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glUniform4d(location_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_1_integer {

              inline static void call(::std::uint32_t index_in, ::std::int32_t x_in) {
                __gl_debug << "call glVertexAttribI1i " "index: '" << index_in << "'" ", " "x: '" << x_in << "'";
                glVertexAttribI1i(index_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t x_in) {
                __gl_debug << "call glVertexAttribI1ui " "index: '" << index_in << "'" ", " "x: '" << x_in << "'";
                glVertexAttribI1ui(index_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glVertexAttribI1iv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI1iv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t const* v_in) {
                __gl_debug << "call glVertexAttribI1uiv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI1uiv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_2_integer {

              inline static void call(::std::uint32_t index_in, ::std::int32_t x_in, ::std::int32_t y_in) {
                __gl_debug << "call glVertexAttribI2i " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glVertexAttribI2i(index_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t x_in, ::std::uint32_t y_in) {
                __gl_debug << "call glVertexAttribI2ui " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glVertexAttribI2ui(index_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glVertexAttribI2iv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI2iv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t const* v_in) {
                __gl_debug << "call glVertexAttribI2uiv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI2uiv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_3_integer {

              inline static void call(::std::uint32_t index_in, ::std::int32_t x_in, ::std::int32_t y_in, ::std::int32_t z_in) {
                __gl_debug << "call glVertexAttribI3i " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glVertexAttribI3i(index_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t x_in, ::std::uint32_t y_in, ::std::uint32_t z_in) {
                __gl_debug << "call glVertexAttribI3ui " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glVertexAttribI3ui(index_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glVertexAttribI3iv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI3iv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t const* v_in) {
                __gl_debug << "call glVertexAttribI3uiv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI3uiv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_4_integer {

              inline static void call(::std::uint32_t index_in, ::std::int32_t x_in, ::std::int32_t y_in, ::std::int32_t z_in, ::std::int32_t w_in) {
                __gl_debug << "call glVertexAttribI4i " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glVertexAttribI4i(index_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t x_in, ::std::uint32_t y_in, ::std::uint32_t z_in, ::std::uint32_t w_in) {
                __gl_debug << "call glVertexAttribI4ui " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glVertexAttribI4ui(index_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glVertexAttribI4iv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI4iv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint32_t const* v_in) {
                __gl_debug << "call glVertexAttribI4uiv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI4uiv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLbyte const* v_in) {
                __gl_debug << "call glVertexAttribI4bv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI4bv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, GLshort const* v_in) {
                __gl_debug << "call glVertexAttribI4sv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI4sv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint8_t const* v_in) {
                __gl_debug << "call glVertexAttribI4ubv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI4ubv(index_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::uint16_t const* v_in) {
                __gl_debug << "call glVertexAttribI4usv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribI4usv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_pointer_integer {

              inline static void call(::std::uint32_t index_in, ::std::int32_t size_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei stride_in, void const* pointer_in) {
                __gl_debug << "call glVertexAttribIPointer " "index: '" << index_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_in << "'" ", " "stride: '" << stride_in << "'" ", " "pointer: '" << pointer_in << "'";
                glVertexAttribIPointer(index_in, size_in, ::std::uint32_t(type_in), stride_in, pointer_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t size_in, GLsizei stride_in, void const* pointer_in) {
                __gl_debug << "call glVertexAttribIPointer " "index: '" << index_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "stride: '" << stride_in << "'" ", " "pointer: '" << pointer_in << "'";
                glVertexAttribIPointer(index_in, size_in, type_t::value, stride_in, pointer_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v3_0
      namespace v3_1 {
        namespace fnc {
          struct gl_draw_arrays_instanced {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, ::std::int32_t first_in, GLsizei count_in, GLsizei primcount_in) {
                __gl_debug << "call glDrawArraysInstanced " "mode: '" << mode_in << "'" ", " "first: '" << first_in << "'" ", " "count: '" << count_in << "'" ", " "primcount: '" << primcount_in << "'";
                glDrawArraysInstanced(::std::uint32_t(mode_in), first_in, count_in, primcount_in);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::int32_t first_in, GLsizei count_in, GLsizei primcount_in) {
                __gl_debug << "call glDrawArraysInstanced " "mode: '" << mode_t::name::value << "'" ", " "first: '" << first_in << "'" ", " "count: '" << count_in << "'" ", " "primcount: '" << primcount_in << "'";
                glDrawArraysInstanced(mode_t::value, first_in, count_in, primcount_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_elements_instanced {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, GLsizei count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* indices_in, GLsizei primcount_in) {
                __gl_debug << "call glDrawElementsInstanced " "mode: '" << mode_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'";
                glDrawElementsInstanced(::std::uint32_t(mode_in), count_in, ::std::uint32_t(type_in), indices_in, primcount_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count_in, void const* indices_in, GLsizei primcount_in) {
                __gl_debug << "call glDrawElementsInstanced " "mode: '" << mode_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'";
                glDrawElementsInstanced(mode_t::value, count_in, type_t::value, indices_in, primcount_in);
                __gl_check_error;
                
              }

          };

          struct gl_primitive_restart_index {

              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glPrimitiveRestartIndex " "index: '" << index_in << "'";
                glPrimitiveRestartIndex(index_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_buffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, ::std::uint32_t buffer_in) {
                __gl_debug << "call glTexBuffer " "target: '" << target_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "buffer: '" << buffer_in << "'";
                glTexBuffer(::std::uint32_t(target_in), ::std::uint32_t(internalformat_in), buffer_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(::std::uint32_t buffer_in) {
                __gl_debug << "call glTexBuffer " "target: '" << target_t::name::value << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "buffer: '" << buffer_in << "'";
                glTexBuffer(target_t::value, internalformat_t::value, buffer_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v3_1
      namespace v3_2 {
        namespace fnc {
          struct gl_framebuffer_texture {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& attachment_in, ::std::uint32_t texture_in, ::std::int32_t level_in) {
                __gl_debug << "call glFramebufferTexture " "target: '" << target_in << "'" ", " "attachment: '" << attachment_in << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'";
                glFramebufferTexture(::std::uint32_t(target_in), ::std::uint32_t(attachment_in), texture_in, level_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t >
              inline static void call(::std::uint32_t texture_in, ::std::int32_t level_in) {
                __gl_debug << "call glFramebufferTexture " "target: '" << target_t::name::value << "'" ", " "attachment: '" << attachment_t::name::value << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'";
                glFramebufferTexture(target_t::value, attachment_t::value, texture_in, level_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_buffer_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetBufferParameteriv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteriv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetBufferParameteriv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteriv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, GLint64* params_in) {
                __gl_debug << "call glGetBufferParameteri64v " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteri64v(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint64* params_in) {
                __gl_debug << "call glGetBufferParameteri64v " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetBufferParameteri64v(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_integer_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, ::std::int32_t* data_in) {
                __gl_debug << "call glGetIntegeri_v " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetIntegeri_v(::std::uint32_t(target_in), index_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t* data_in) {
                __gl_debug << "call glGetIntegeri_v " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetIntegeri_v(target_t::value, index_in, data_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, GLint64* data_in) {
                __gl_debug << "call glGetInteger64i_v " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetInteger64i_v(::std::uint32_t(target_in), index_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, GLint64* data_in) {
                __gl_debug << "call glGetInteger64i_v " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetInteger64i_v(target_t::value, index_in, data_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v3_2
      namespace v3_3 {
        namespace fnc {
          struct gl_vertex_attrib_divisor {

              inline static void call(::std::uint32_t index_in, ::std::uint32_t divisor_in) {
                __gl_debug << "call glVertexAttribDivisor " "index: '" << index_in << "'" ", " "divisor: '" << divisor_in << "'";
                glVertexAttribDivisor(index_in, divisor_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v3_3
      namespace v4_0 {
        namespace fnc {
          struct gl_blend_equation {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glBlendEquation " "mode: '" << mode_in << "'";
                glBlendEquation(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glBlendEquation " "mode: '" << mode_t::name::value << "'";
                glBlendEquation(mode_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glBlendEquationi " "buf: '" << buf_in << "'" ", " "mode: '" << mode_in << "'";
                glBlendEquationi(buf_in, ::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendEquationi " "buf: '" << buf_in << "'" ", " "mode: '" << mode_t::name::value << "'";
                glBlendEquationi(buf_in, mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_blend_equation_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& modeRGB_in, const ::gtulu::internal::constant::gl_constant_base& modeAlpha_in) {
                __gl_debug << "call glBlendEquationSeparate " "modeRGB: '" << modeRGB_in << "'" ", " "modeAlpha: '" << modeAlpha_in << "'";
                glBlendEquationSeparate(::std::uint32_t(modeRGB_in), ::std::uint32_t(modeAlpha_in));
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendEquationSeparate " "modeRGB: '" << modeRGB_t::name::value << "'" ", " "modeAlpha: '" << modeAlpha_t::name::value << "'";
                glBlendEquationSeparate(modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& modeRGB_in, const ::gtulu::internal::constant::gl_constant_base& modeAlpha_in) {
                __gl_debug << "call glBlendEquationSeparatei " "buf: '" << buf_in << "'" ", " "modeRGB: '" << modeRGB_in << "'" ", " "modeAlpha: '" << modeAlpha_in << "'";
                glBlendEquationSeparatei(buf_in, ::std::uint32_t(modeRGB_in), ::std::uint32_t(modeAlpha_in));
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendEquationSeparatei " "buf: '" << buf_in << "'" ", " "modeRGB: '" << modeRGB_t::name::value << "'" ", " "modeAlpha: '" << modeAlpha_t::name::value << "'";
                glBlendEquationSeparatei(buf_in, modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_blend_func {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& sfactor_in, const ::gtulu::internal::constant::gl_constant_base& dfactor_in) {
                __gl_debug << "call glBlendFunc " "sfactor: '" << sfactor_in << "'" ", " "dfactor: '" << dfactor_in << "'";
                glBlendFunc(::std::uint32_t(sfactor_in), ::std::uint32_t(dfactor_in));
                __gl_check_error;
                
              }
              template< typename sfactor_t, typename dfactor_t >
              inline static void call() {
                __gl_debug << "call glBlendFunc " "sfactor: '" << sfactor_t::name::value << "'" ", " "dfactor: '" << dfactor_t::name::value << "'";
                glBlendFunc(sfactor_t::value, dfactor_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& src_in, const ::gtulu::internal::constant::gl_constant_base& dst_in) {
                __gl_debug << "call glBlendFunci " "buf: '" << buf_in << "'" ", " "src: '" << src_in << "'" ", " "dst: '" << dst_in << "'";
                glBlendFunci(buf_in, ::std::uint32_t(src_in), ::std::uint32_t(dst_in));
                __gl_check_error;
                
              }
              template< typename src_t, typename dst_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendFunci " "buf: '" << buf_in << "'" ", " "src: '" << src_t::name::value << "'" ", " "dst: '" << dst_t::name::value << "'";
                glBlendFunci(buf_in, src_t::value, dst_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_blend_func_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& sfactorRGB_in, const ::gtulu::internal::constant::gl_constant_base& dfactorRGB_in, const ::gtulu::internal::constant::gl_constant_base& sfactorAlpha_in, const ::gtulu::internal::constant::gl_constant_base& dfactorAlpha_in) {
                __gl_debug << "call glBlendFuncSeparate " "sfactorRGB: '" << sfactorRGB_in << "'" ", " "dfactorRGB: '" << dfactorRGB_in << "'" ", " "sfactorAlpha: '" << sfactorAlpha_in << "'" ", " "dfactorAlpha: '" << dfactorAlpha_in << "'";
                glBlendFuncSeparate(::std::uint32_t(sfactorRGB_in), ::std::uint32_t(dfactorRGB_in), ::std::uint32_t(sfactorAlpha_in), ::std::uint32_t(dfactorAlpha_in));
                __gl_check_error;
                
              }
              template< typename sfactorRGB_t, typename dfactorRGB_t, typename sfactorAlpha_t, typename dfactorAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendFuncSeparate " "sfactorRGB: '" << sfactorRGB_t::name::value << "'" ", " "dfactorRGB: '" << dfactorRGB_t::name::value << "'" ", " "sfactorAlpha: '" << sfactorAlpha_t::name::value << "'" ", " "dfactorAlpha: '" << dfactorAlpha_t::name::value << "'";
                glBlendFuncSeparate(sfactorRGB_t::value, dfactorRGB_t::value, sfactorAlpha_t::value, dfactorAlpha_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& srcRGB_in, const ::gtulu::internal::constant::gl_constant_base& dstRGB_in, const ::gtulu::internal::constant::gl_constant_base& srcAlpha_in, const ::gtulu::internal::constant::gl_constant_base& dstAlpha_in) {
                __gl_debug << "call glBlendFuncSeparatei " "buf: '" << buf_in << "'" ", " "srcRGB: '" << srcRGB_in << "'" ", " "dstRGB: '" << dstRGB_in << "'" ", " "srcAlpha: '" << srcAlpha_in << "'" ", " "dstAlpha: '" << dstAlpha_in << "'";
                glBlendFuncSeparatei(buf_in, ::std::uint32_t(srcRGB_in), ::std::uint32_t(dstRGB_in), ::std::uint32_t(srcAlpha_in), ::std::uint32_t(dstAlpha_in));
                __gl_check_error;
                
              }
              template< typename srcRGB_t, typename dstRGB_t, typename srcAlpha_t, typename dstAlpha_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendFuncSeparatei " "buf: '" << buf_in << "'" ", " "srcRGB: '" << srcRGB_t::name::value << "'" ", " "dstRGB: '" << dstRGB_t::name::value << "'" ", " "srcAlpha: '" << srcAlpha_t::name::value << "'" ", " "dstAlpha: '" << dstAlpha_t::name::value << "'";
                glBlendFuncSeparatei(buf_in, srcRGB_t::value, dstRGB_t::value, srcAlpha_t::value, dstAlpha_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_min_sample_shading {

              inline static void call(float value_in) {
                __gl_debug << "call glMinSampleShading " "value: '" << value_in << "'";
                glMinSampleShading(value_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace v4_0
      namespace v4_1 {
        namespace fnc {
        } // namespace fnc
      } // namespace v4_1
      } // namespace gl
      namespace arb {
      namespace es2_compatibility {
        namespace fnc {
          struct gl_clear_depth {

              inline static void call(GLclampd depth_in) {
                __gl_debug << "call glClearDepth " "depth: '" << depth_in << "'";
                glClearDepth(depth_in);
                __gl_check_error;
                
              }

              inline static void call(float d_in) {
                __gl_debug << "call glClearDepthf " "d: '" << d_in << "'";
                glClearDepthf(d_in);
                __gl_check_error;
                
              }

          };

          struct gl_depth_range {

              inline static void call(GLclampd near_in, GLclampd far_in) {
                __gl_debug << "call glDepthRange " "near: '" << near_in << "'" ", " "far: '" << far_in << "'";
                glDepthRange(near_in, far_in);
                __gl_check_error;
                
              }

              inline static void call(float n_in, float f_in) {
                __gl_debug << "call glDepthRangef " "n: '" << n_in << "'" ", " "f: '" << f_in << "'";
                glDepthRangef(n_in, f_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_shader_precision_format {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& shadertype_in, const ::gtulu::internal::constant::gl_constant_base& precisiontype_in, ::std::int32_t* range_in, ::std::int32_t* precision_in) {
                __gl_debug << "call glGetShaderPrecisionFormat " "shadertype: '" << shadertype_in << "'" ", " "precisiontype: '" << precisiontype_in << "'" ", " "range: '" << range_in << "'" ", " "precision: '" << precision_in << "'";
                glGetShaderPrecisionFormat(::std::uint32_t(shadertype_in), ::std::uint32_t(precisiontype_in), range_in, precision_in);
                __gl_check_error;
                
              }
              template< typename shadertype_t, typename precisiontype_t >
              inline static void call(::std::int32_t* range_in, ::std::int32_t* precision_in) {
                __gl_debug << "call glGetShaderPrecisionFormat " "shadertype: '" << shadertype_t::name::value << "'" ", " "precisiontype: '" << precisiontype_t::name::value << "'" ", " "range: '" << range_in << "'" ", " "precision: '" << precision_in << "'";
                glGetShaderPrecisionFormat(shadertype_t::value, precisiontype_t::value, range_in, precision_in);
                __gl_check_error;
                
              }

          };

          struct gl_release_shader_compiler {

              inline static void call() {
                __gl_debug << "call glReleaseShaderCompiler " "";
                glReleaseShaderCompiler();
                __gl_check_error;
                
              }

          };

          struct gl_shader_binary {

              inline static void call(GLsizei count_in, ::std::uint32_t const* shaders_in, const ::gtulu::internal::constant::gl_constant_base& binaryformat_in, void const* binary_in, GLsizei length_in) {
                __gl_debug << "call glShaderBinary " "count: '" << count_in << "'" ", " "shaders: '" << shaders_in << "'" ", " "binaryformat: '" << binaryformat_in << "'" ", " "binary: '" << binary_in << "'" ", " "length: '" << length_in << "'";
                glShaderBinary(count_in, shaders_in, ::std::uint32_t(binaryformat_in), binary_in, length_in);
                __gl_check_error;
                
              }
              template< typename binaryformat_t >
              inline static void call(GLsizei count_in, ::std::uint32_t const* shaders_in, void const* binary_in, GLsizei length_in) {
                __gl_debug << "call glShaderBinary " "count: '" << count_in << "'" ", " "shaders: '" << shaders_in << "'" ", " "binaryformat: '" << binaryformat_t::name::value << "'" ", " "binary: '" << binary_in << "'" ", " "length: '" << length_in << "'";
                glShaderBinary(count_in, shaders_in, binaryformat_t::value, binary_in, length_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace es2_compatibility
      namespace blend_func_extended {
        namespace fnc {
          struct gl_bind_frag_data_location_indexed {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t colorNumber_in, ::std::uint32_t index_in, GLchar const* name_in) {
                __gl_debug << "call glBindFragDataLocationIndexed " "program: '" << program_in << "'" ", " "colorNumber: '" << colorNumber_in << "'" ", " "index: '" << index_in << "'" ", " "name: '" << name_in << "'";
                glBindFragDataLocationIndexed(program_in, colorNumber_in, index_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_frag_data_index {

              inline static GLint call(::std::uint32_t program_in, GLchar const* name_in) {
                __gl_debug << "call glGetFragDataIndex " "program: '" << program_in << "'" ", " "name: '" << name_in << "'";
                GLint out = glGetFragDataIndex(program_in, name_in);
                __gl_check_error;
                return out;
              }

          };

        } // namespace fnc
      } // namespace blend_func_extended
      namespace copy_buffer {
        namespace fnc {
          struct gl_copy_buffer_sub_data {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& readTarget_in, const ::gtulu::internal::constant::gl_constant_base& writeTarget_in, GLintptr readOffset_in, GLintptr writeOffset_in, GLsizeiptr size_in) {
                __gl_debug << "call glCopyBufferSubData " "readTarget: '" << readTarget_in << "'" ", " "writeTarget: '" << writeTarget_in << "'" ", " "readOffset: '" << readOffset_in << "'" ", " "writeOffset: '" << writeOffset_in << "'" ", " "size: '" << size_in << "'";
                glCopyBufferSubData(::std::uint32_t(readTarget_in), ::std::uint32_t(writeTarget_in), readOffset_in, writeOffset_in, size_in);
                __gl_check_error;
                
              }
              template< typename readTarget_t, typename writeTarget_t >
              inline static void call(GLintptr readOffset_in, GLintptr writeOffset_in, GLsizeiptr size_in) {
                __gl_debug << "call glCopyBufferSubData " "readTarget: '" << readTarget_t::name::value << "'" ", " "writeTarget: '" << writeTarget_t::name::value << "'" ", " "readOffset: '" << readOffset_in << "'" ", " "writeOffset: '" << writeOffset_in << "'" ", " "size: '" << size_in << "'";
                glCopyBufferSubData(readTarget_t::value, writeTarget_t::value, readOffset_in, writeOffset_in, size_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace copy_buffer
      namespace debug_output {
        namespace fnc {
          struct gl_debug_message_callback {

              inline static void call(GLDEBUGPROCARB callback_in, void const* userParam_in) {
                __gl_debug << "call glDebugMessageCallbackARB " "callback: '" << callback_in << "'" ", " "userParam: '" << userParam_in << "'";
                glDebugMessageCallbackARB(callback_in, userParam_in);
                __gl_check_error;
                
              }

          };

          struct gl_debug_message_control {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& source_in, const ::gtulu::internal::constant::gl_constant_base& type_in, const ::gtulu::internal::constant::gl_constant_base& severity_in, GLsizei count_in, ::std::uint32_t const* ids_in, bool enabled_in) {
                __gl_debug << "call glDebugMessageControlARB " "source: '" << source_in << "'" ", " "type: '" << type_in << "'" ", " "severity: '" << severity_in << "'" ", " "count: '" << count_in << "'" ", " "ids: '" << ids_in << "'" ", " "enabled: '" << enabled_in << "'";
                glDebugMessageControlARB(::std::uint32_t(source_in), ::std::uint32_t(type_in), ::std::uint32_t(severity_in), count_in, ids_in, (enabled_in ? 1 : 0));
                __gl_check_error;
                
              }
              template< typename source_t, typename type_t, typename severity_t >
              inline static void call(GLsizei count_in, ::std::uint32_t const* ids_in, bool enabled_in) {
                __gl_debug << "call glDebugMessageControlARB " "source: '" << source_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "severity: '" << severity_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "ids: '" << ids_in << "'" ", " "enabled: '" << enabled_in << "'";
                glDebugMessageControlARB(source_t::value, type_t::value, severity_t::value, count_in, ids_in, (enabled_in ? 1 : 0));
                __gl_check_error;
                
              }

          };

          struct gl_debug_message_insert {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& source_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& severity_in, GLsizei length_in, GLchar const* buf_in) {
                __gl_debug << "call glDebugMessageInsertARB " "source: '" << source_in << "'" ", " "type: '" << type_in << "'" ", " "id: '" << id_in << "'" ", " "severity: '" << severity_in << "'" ", " "length: '" << length_in << "'" ", " "buf: '" << buf_in << "'";
                glDebugMessageInsertARB(::std::uint32_t(source_in), ::std::uint32_t(type_in), id_in, ::std::uint32_t(severity_in), length_in, buf_in);
                __gl_check_error;
                
              }
              template< typename source_t, typename type_t, typename severity_t >
              inline static void call(::std::uint32_t id_in, GLsizei length_in, GLchar const* buf_in) {
                __gl_debug << "call glDebugMessageInsertARB " "source: '" << source_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "id: '" << id_in << "'" ", " "severity: '" << severity_t::name::value << "'" ", " "length: '" << length_in << "'" ", " "buf: '" << buf_in << "'";
                glDebugMessageInsertARB(source_t::value, type_t::value, id_in, severity_t::value, length_in, buf_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_debug_message_log {

              inline static GLuint call(::std::uint32_t count_in, GLsizei bufsize_in, GLenum* sources_in, GLenum* types_in, ::std::uint32_t* ids_in, GLenum* severities_in, GLsizei* lengths_in, GLchar* messageLog_in) {
                __gl_debug << "call glGetDebugMessageLogARB " "count: '" << count_in << "'" ", " "bufsize: '" << bufsize_in << "'" ", " "sources: '" << sources_in << "'" ", " "types: '" << types_in << "'" ", " "ids: '" << ids_in << "'" ", " "severities: '" << severities_in << "'" ", " "lengths: '" << lengths_in << "'" ", " "messageLog: '" << messageLog_in << "'";
                GLuint out = glGetDebugMessageLogARB(count_in, bufsize_in, sources_in, types_in, ids_in, severities_in, lengths_in, messageLog_in);
                __gl_check_error;
                return out;
              }

          };

        } // namespace fnc
      } // namespace debug_output
      namespace depth_buffer_float {
        namespace fnc {
        } // namespace fnc
      } // namespace depth_buffer_float
      namespace depth_clamp {
        namespace fnc {
        } // namespace fnc
      } // namespace depth_clamp
      namespace draw_buffers_blend {
        namespace fnc {
          struct gl_blend_equation {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glBlendEquation " "mode: '" << mode_in << "'";
                glBlendEquation(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glBlendEquation " "mode: '" << mode_t::name::value << "'";
                glBlendEquation(mode_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glBlendEquationi " "buf: '" << buf_in << "'" ", " "mode: '" << mode_in << "'";
                glBlendEquationi(buf_in, ::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendEquationi " "buf: '" << buf_in << "'" ", " "mode: '" << mode_t::name::value << "'";
                glBlendEquationi(buf_in, mode_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_blend_equation_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& modeRGB_in, const ::gtulu::internal::constant::gl_constant_base& modeAlpha_in) {
                __gl_debug << "call glBlendEquationSeparate " "modeRGB: '" << modeRGB_in << "'" ", " "modeAlpha: '" << modeAlpha_in << "'";
                glBlendEquationSeparate(::std::uint32_t(modeRGB_in), ::std::uint32_t(modeAlpha_in));
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendEquationSeparate " "modeRGB: '" << modeRGB_t::name::value << "'" ", " "modeAlpha: '" << modeAlpha_t::name::value << "'";
                glBlendEquationSeparate(modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& modeRGB_in, const ::gtulu::internal::constant::gl_constant_base& modeAlpha_in) {
                __gl_debug << "call glBlendEquationSeparatei " "buf: '" << buf_in << "'" ", " "modeRGB: '" << modeRGB_in << "'" ", " "modeAlpha: '" << modeAlpha_in << "'";
                glBlendEquationSeparatei(buf_in, ::std::uint32_t(modeRGB_in), ::std::uint32_t(modeAlpha_in));
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendEquationSeparatei " "buf: '" << buf_in << "'" ", " "modeRGB: '" << modeRGB_t::name::value << "'" ", " "modeAlpha: '" << modeAlpha_t::name::value << "'";
                glBlendEquationSeparatei(buf_in, modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_blend_func {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& sfactor_in, const ::gtulu::internal::constant::gl_constant_base& dfactor_in) {
                __gl_debug << "call glBlendFunc " "sfactor: '" << sfactor_in << "'" ", " "dfactor: '" << dfactor_in << "'";
                glBlendFunc(::std::uint32_t(sfactor_in), ::std::uint32_t(dfactor_in));
                __gl_check_error;
                
              }
              template< typename sfactor_t, typename dfactor_t >
              inline static void call() {
                __gl_debug << "call glBlendFunc " "sfactor: '" << sfactor_t::name::value << "'" ", " "dfactor: '" << dfactor_t::name::value << "'";
                glBlendFunc(sfactor_t::value, dfactor_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& src_in, const ::gtulu::internal::constant::gl_constant_base& dst_in) {
                __gl_debug << "call glBlendFunci " "buf: '" << buf_in << "'" ", " "src: '" << src_in << "'" ", " "dst: '" << dst_in << "'";
                glBlendFunci(buf_in, ::std::uint32_t(src_in), ::std::uint32_t(dst_in));
                __gl_check_error;
                
              }
              template< typename src_t, typename dst_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendFunci " "buf: '" << buf_in << "'" ", " "src: '" << src_t::name::value << "'" ", " "dst: '" << dst_t::name::value << "'";
                glBlendFunci(buf_in, src_t::value, dst_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_blend_func_separate {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& sfactorRGB_in, const ::gtulu::internal::constant::gl_constant_base& dfactorRGB_in, const ::gtulu::internal::constant::gl_constant_base& sfactorAlpha_in, const ::gtulu::internal::constant::gl_constant_base& dfactorAlpha_in) {
                __gl_debug << "call glBlendFuncSeparate " "sfactorRGB: '" << sfactorRGB_in << "'" ", " "dfactorRGB: '" << dfactorRGB_in << "'" ", " "sfactorAlpha: '" << sfactorAlpha_in << "'" ", " "dfactorAlpha: '" << dfactorAlpha_in << "'";
                glBlendFuncSeparate(::std::uint32_t(sfactorRGB_in), ::std::uint32_t(dfactorRGB_in), ::std::uint32_t(sfactorAlpha_in), ::std::uint32_t(dfactorAlpha_in));
                __gl_check_error;
                
              }
              template< typename sfactorRGB_t, typename dfactorRGB_t, typename sfactorAlpha_t, typename dfactorAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendFuncSeparate " "sfactorRGB: '" << sfactorRGB_t::name::value << "'" ", " "dfactorRGB: '" << dfactorRGB_t::name::value << "'" ", " "sfactorAlpha: '" << sfactorAlpha_t::name::value << "'" ", " "dfactorAlpha: '" << dfactorAlpha_t::name::value << "'";
                glBlendFuncSeparate(sfactorRGB_t::value, dfactorRGB_t::value, sfactorAlpha_t::value, dfactorAlpha_t::value);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t buf_in, const ::gtulu::internal::constant::gl_constant_base& srcRGB_in, const ::gtulu::internal::constant::gl_constant_base& dstRGB_in, const ::gtulu::internal::constant::gl_constant_base& srcAlpha_in, const ::gtulu::internal::constant::gl_constant_base& dstAlpha_in) {
                __gl_debug << "call glBlendFuncSeparatei " "buf: '" << buf_in << "'" ", " "srcRGB: '" << srcRGB_in << "'" ", " "dstRGB: '" << dstRGB_in << "'" ", " "srcAlpha: '" << srcAlpha_in << "'" ", " "dstAlpha: '" << dstAlpha_in << "'";
                glBlendFuncSeparatei(buf_in, ::std::uint32_t(srcRGB_in), ::std::uint32_t(dstRGB_in), ::std::uint32_t(srcAlpha_in), ::std::uint32_t(dstAlpha_in));
                __gl_check_error;
                
              }
              template< typename srcRGB_t, typename dstRGB_t, typename srcAlpha_t, typename dstAlpha_t >
              inline static void call(::std::uint32_t buf_in) {
                __gl_debug << "call glBlendFuncSeparatei " "buf: '" << buf_in << "'" ", " "srcRGB: '" << srcRGB_t::name::value << "'" ", " "dstRGB: '" << dstRGB_t::name::value << "'" ", " "srcAlpha: '" << srcAlpha_t::name::value << "'" ", " "dstAlpha: '" << dstAlpha_t::name::value << "'";
                glBlendFuncSeparatei(buf_in, srcRGB_t::value, dstRGB_t::value, srcAlpha_t::value, dstAlpha_t::value);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace draw_buffers_blend
      namespace draw_elements_base_vertex {
        namespace fnc {
          struct gl_draw_elements_base_vertex {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, GLsizei count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* indices_in, ::std::int32_t basevertex_in) {
                __gl_debug << "call glDrawElementsBaseVertex " "mode: '" << mode_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glDrawElementsBaseVertex(::std::uint32_t(mode_in), count_in, ::std::uint32_t(type_in), indices_in, basevertex_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count_in, void const* indices_in, ::std::int32_t basevertex_in) {
                __gl_debug << "call glDrawElementsBaseVertex " "mode: '" << mode_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glDrawElementsBaseVertex(mode_t::value, count_in, type_t::value, indices_in, basevertex_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_elements_instanced_base_vertex {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, GLsizei count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* indices_in, GLsizei primcount_in, ::std::int32_t basevertex_in) {
                __gl_debug << "call glDrawElementsInstancedBaseVertex " "mode: '" << mode_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glDrawElementsInstancedBaseVertex(::std::uint32_t(mode_in), count_in, ::std::uint32_t(type_in), indices_in, primcount_in, basevertex_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count_in, void const* indices_in, GLsizei primcount_in, ::std::int32_t basevertex_in) {
                __gl_debug << "call glDrawElementsInstancedBaseVertex " "mode: '" << mode_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glDrawElementsInstancedBaseVertex(mode_t::value, count_in, type_t::value, indices_in, primcount_in, basevertex_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_range_elements_base_vertex {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, ::std::uint32_t start_in, ::std::uint32_t end_in, GLsizei count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* indices_in, ::std::int32_t basevertex_in) {
                __gl_debug << "call glDrawRangeElementsBaseVertex " "mode: '" << mode_in << "'" ", " "start: '" << start_in << "'" ", " "end: '" << end_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glDrawRangeElementsBaseVertex(::std::uint32_t(mode_in), start_in, end_in, count_in, ::std::uint32_t(type_in), indices_in, basevertex_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(::std::uint32_t start_in, ::std::uint32_t end_in, GLsizei count_in, void const* indices_in, ::std::int32_t basevertex_in) {
                __gl_debug << "call glDrawRangeElementsBaseVertex " "mode: '" << mode_t::name::value << "'" ", " "start: '" << start_in << "'" ", " "end: '" << end_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glDrawRangeElementsBaseVertex(mode_t::value, start_in, end_in, count_in, type_t::value, indices_in, basevertex_in);
                __gl_check_error;
                
              }

          };

          struct gl_multi_draw_elements_base_vertex {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, GLsizei const* count_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const** indices_in, GLsizei primcount_in, ::std::int32_t const* basevertex_in) {
                __gl_debug << "call glMultiDrawElementsBaseVertex " "mode: '" << mode_in << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_in << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glMultiDrawElementsBaseVertex(::std::uint32_t(mode_in), count_in, ::std::uint32_t(type_in), indices_in, primcount_in, basevertex_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei const* count_in, void const** indices_in, GLsizei primcount_in, ::std::int32_t const* basevertex_in) {
                __gl_debug << "call glMultiDrawElementsBaseVertex " "mode: '" << mode_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "indices: '" << indices_in << "'" ", " "primcount: '" << primcount_in << "'" ", " "basevertex: '" << basevertex_in << "'";
                glMultiDrawElementsBaseVertex(mode_t::value, count_in, type_t::value, indices_in, primcount_in, basevertex_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace draw_elements_base_vertex
      namespace draw_indirect {
        namespace fnc {
          struct gl_draw_arrays_indirect {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, void const* indirect_in) {
                __gl_debug << "call glDrawArraysIndirect " "mode: '" << mode_in << "'" ", " "indirect: '" << indirect_in << "'";
                glDrawArraysIndirect(::std::uint32_t(mode_in), indirect_in);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(void const* indirect_in) {
                __gl_debug << "call glDrawArraysIndirect " "mode: '" << mode_t::name::value << "'" ", " "indirect: '" << indirect_in << "'";
                glDrawArraysIndirect(mode_t::value, indirect_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_elements_indirect {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, const ::gtulu::internal::constant::gl_constant_base& type_in, void const* indirect_in) {
                __gl_debug << "call glDrawElementsIndirect " "mode: '" << mode_in << "'" ", " "type: '" << type_in << "'" ", " "indirect: '" << indirect_in << "'";
                glDrawElementsIndirect(::std::uint32_t(mode_in), ::std::uint32_t(type_in), indirect_in);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(void const* indirect_in) {
                __gl_debug << "call glDrawElementsIndirect " "mode: '" << mode_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "indirect: '" << indirect_in << "'";
                glDrawElementsIndirect(mode_t::value, type_t::value, indirect_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace draw_indirect
      namespace explicit_attrib_location {
        namespace fnc {
        } // namespace fnc
      } // namespace explicit_attrib_location
      namespace fragment_coord_conventions {
        namespace fnc {
        } // namespace fnc
      } // namespace fragment_coord_conventions
      namespace framebuffer_object {
        namespace fnc {
          struct gl_bind_framebuffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t framebuffer_in) {
                __gl_debug << "call glBindFramebuffer " "target: '" << target_in << "'" ", " "framebuffer: '" << framebuffer_in << "'";
                glBindFramebuffer(::std::uint32_t(target_in), framebuffer_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t framebuffer_in) {
                __gl_debug << "call glBindFramebuffer " "target: '" << target_t::name::value << "'" ", " "framebuffer: '" << framebuffer_in << "'";
                glBindFramebuffer(target_t::value, framebuffer_in);
                __gl_check_error;
                
              }

          };

          struct gl_bind_renderbuffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t renderbuffer_in) {
                __gl_debug << "call glBindRenderbuffer " "target: '" << target_in << "'" ", " "renderbuffer: '" << renderbuffer_in << "'";
                glBindRenderbuffer(::std::uint32_t(target_in), renderbuffer_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t renderbuffer_in) {
                __gl_debug << "call glBindRenderbuffer " "target: '" << target_t::name::value << "'" ", " "renderbuffer: '" << renderbuffer_in << "'";
                glBindRenderbuffer(target_t::value, renderbuffer_in);
                __gl_check_error;
                
              }

          };

          struct gl_blit_framebuffer {

              inline static void call(::std::int32_t srcX0_in, ::std::int32_t srcY0_in, ::std::int32_t srcX1_in, ::std::int32_t srcY1_in, ::std::int32_t dstX0_in, ::std::int32_t dstY0_in, ::std::int32_t dstX1_in, ::std::int32_t dstY1_in, GLbitfield mask_in, const ::gtulu::internal::constant::gl_constant_base& filter_in) {
                __gl_debug << "call glBlitFramebuffer " "srcX0: '" << srcX0_in << "'" ", " "srcY0: '" << srcY0_in << "'" ", " "srcX1: '" << srcX1_in << "'" ", " "srcY1: '" << srcY1_in << "'" ", " "dstX0: '" << dstX0_in << "'" ", " "dstY0: '" << dstY0_in << "'" ", " "dstX1: '" << dstX1_in << "'" ", " "dstY1: '" << dstY1_in << "'" ", " "mask: '" << mask_in << "'" ", " "filter: '" << filter_in << "'";
                glBlitFramebuffer(srcX0_in, srcY0_in, srcX1_in, srcY1_in, dstX0_in, dstY0_in, dstX1_in, dstY1_in, mask_in, ::std::uint32_t(filter_in));
                __gl_check_error;
                
              }
              template< typename filter_t >
              inline static void call(::std::int32_t srcX0_in, ::std::int32_t srcY0_in, ::std::int32_t srcX1_in, ::std::int32_t srcY1_in, ::std::int32_t dstX0_in, ::std::int32_t dstY0_in, ::std::int32_t dstX1_in, ::std::int32_t dstY1_in, GLbitfield mask_in) {
                __gl_debug << "call glBlitFramebuffer " "srcX0: '" << srcX0_in << "'" ", " "srcY0: '" << srcY0_in << "'" ", " "srcX1: '" << srcX1_in << "'" ", " "srcY1: '" << srcY1_in << "'" ", " "dstX0: '" << dstX0_in << "'" ", " "dstY0: '" << dstY0_in << "'" ", " "dstX1: '" << dstX1_in << "'" ", " "dstY1: '" << dstY1_in << "'" ", " "mask: '" << mask_in << "'" ", " "filter: '" << filter_t::name::value << "'";
                glBlitFramebuffer(srcX0_in, srcY0_in, srcX1_in, srcY1_in, dstX0_in, dstY0_in, dstX1_in, dstY1_in, mask_in, filter_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_check_framebuffer_status {

              inline static GLenum call(const ::gtulu::internal::constant::gl_constant_base& target_in) {
                __gl_debug << "call glCheckFramebufferStatus " "target: '" << target_in << "'";
                GLenum out = glCheckFramebufferStatus(::std::uint32_t(target_in));
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLenum call() {
                __gl_debug << "call glCheckFramebufferStatus " "target: '" << target_t::name::value << "'";
                GLenum out = glCheckFramebufferStatus(target_t::value);
                __gl_check_error;
                return out;
              }

          };

          struct gl_delete_framebuffers {

              inline static void call(GLsizei n_in, ::std::uint32_t const* framebuffers_in) {
                __gl_debug << "call glDeleteFramebuffers " "n: '" << n_in << "'" ", " "framebuffers: '" << framebuffers_in << "'";
                glDeleteFramebuffers(n_in, framebuffers_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_renderbuffers {

              inline static void call(GLsizei n_in, ::std::uint32_t const* renderbuffers_in) {
                __gl_debug << "call glDeleteRenderbuffers " "n: '" << n_in << "'" ", " "renderbuffers: '" << renderbuffers_in << "'";
                glDeleteRenderbuffers(n_in, renderbuffers_in);
                __gl_check_error;
                
              }

          };

          struct gl_framebuffer_renderbuffer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& attachment_in, const ::gtulu::internal::constant::gl_constant_base& renderbuffertarget_in, ::std::uint32_t renderbuffer_in) {
                __gl_debug << "call glFramebufferRenderbuffer " "target: '" << target_in << "'" ", " "attachment: '" << attachment_in << "'" ", " "renderbuffertarget: '" << renderbuffertarget_in << "'" ", " "renderbuffer: '" << renderbuffer_in << "'";
                glFramebufferRenderbuffer(::std::uint32_t(target_in), ::std::uint32_t(attachment_in), ::std::uint32_t(renderbuffertarget_in), renderbuffer_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename renderbuffertarget_t >
              inline static void call(::std::uint32_t renderbuffer_in) {
                __gl_debug << "call glFramebufferRenderbuffer " "target: '" << target_t::name::value << "'" ", " "attachment: '" << attachment_t::name::value << "'" ", " "renderbuffertarget: '" << renderbuffertarget_t::name::value << "'" ", " "renderbuffer: '" << renderbuffer_in << "'";
                glFramebufferRenderbuffer(target_t::value, attachment_t::value, renderbuffertarget_t::value, renderbuffer_in);
                __gl_check_error;
                
              }

          };

          struct gl_framebuffer_texture_1d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& attachment_in, const ::gtulu::internal::constant::gl_constant_base& textarget_in, ::std::uint32_t texture_in, ::std::int32_t level_in) {
                __gl_debug << "call glFramebufferTexture1D " "target: '" << target_in << "'" ", " "attachment: '" << attachment_in << "'" ", " "textarget: '" << textarget_in << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'";
                glFramebufferTexture1D(::std::uint32_t(target_in), ::std::uint32_t(attachment_in), ::std::uint32_t(textarget_in), texture_in, level_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename textarget_t >
              inline static void call(::std::uint32_t texture_in, ::std::int32_t level_in) {
                __gl_debug << "call glFramebufferTexture1D " "target: '" << target_t::name::value << "'" ", " "attachment: '" << attachment_t::name::value << "'" ", " "textarget: '" << textarget_t::name::value << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'";
                glFramebufferTexture1D(target_t::value, attachment_t::value, textarget_t::value, texture_in, level_in);
                __gl_check_error;
                
              }

          };

          struct gl_framebuffer_texture_2d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& attachment_in, const ::gtulu::internal::constant::gl_constant_base& textarget_in, ::std::uint32_t texture_in, ::std::int32_t level_in) {
                __gl_debug << "call glFramebufferTexture2D " "target: '" << target_in << "'" ", " "attachment: '" << attachment_in << "'" ", " "textarget: '" << textarget_in << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'";
                glFramebufferTexture2D(::std::uint32_t(target_in), ::std::uint32_t(attachment_in), ::std::uint32_t(textarget_in), texture_in, level_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename textarget_t >
              inline static void call(::std::uint32_t texture_in, ::std::int32_t level_in) {
                __gl_debug << "call glFramebufferTexture2D " "target: '" << target_t::name::value << "'" ", " "attachment: '" << attachment_t::name::value << "'" ", " "textarget: '" << textarget_t::name::value << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'";
                glFramebufferTexture2D(target_t::value, attachment_t::value, textarget_t::value, texture_in, level_in);
                __gl_check_error;
                
              }

          };

          struct gl_framebuffer_texture_3d {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& attachment_in, const ::gtulu::internal::constant::gl_constant_base& textarget_in, ::std::uint32_t texture_in, ::std::int32_t level_in, ::std::int32_t zoffset_in) {
                __gl_debug << "call glFramebufferTexture3D " "target: '" << target_in << "'" ", " "attachment: '" << attachment_in << "'" ", " "textarget: '" << textarget_in << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'" ", " "zoffset: '" << zoffset_in << "'";
                glFramebufferTexture3D(::std::uint32_t(target_in), ::std::uint32_t(attachment_in), ::std::uint32_t(textarget_in), texture_in, level_in, zoffset_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename textarget_t >
              inline static void call(::std::uint32_t texture_in, ::std::int32_t level_in, ::std::int32_t zoffset_in) {
                __gl_debug << "call glFramebufferTexture3D " "target: '" << target_t::name::value << "'" ", " "attachment: '" << attachment_t::name::value << "'" ", " "textarget: '" << textarget_t::name::value << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'" ", " "zoffset: '" << zoffset_in << "'";
                glFramebufferTexture3D(target_t::value, attachment_t::value, textarget_t::value, texture_in, level_in, zoffset_in);
                __gl_check_error;
                
              }

          };

          struct gl_framebuffer_texture_layer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& attachment_in, ::std::uint32_t texture_in, ::std::int32_t level_in, ::std::int32_t layer_in) {
                __gl_debug << "call glFramebufferTextureLayer " "target: '" << target_in << "'" ", " "attachment: '" << attachment_in << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'" ", " "layer: '" << layer_in << "'";
                glFramebufferTextureLayer(::std::uint32_t(target_in), ::std::uint32_t(attachment_in), texture_in, level_in, layer_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t >
              inline static void call(::std::uint32_t texture_in, ::std::int32_t level_in, ::std::int32_t layer_in) {
                __gl_debug << "call glFramebufferTextureLayer " "target: '" << target_t::name::value << "'" ", " "attachment: '" << attachment_t::name::value << "'" ", " "texture: '" << texture_in << "'" ", " "level: '" << level_in << "'" ", " "layer: '" << layer_in << "'";
                glFramebufferTextureLayer(target_t::value, attachment_t::value, texture_in, level_in, layer_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_framebuffers {

              inline static void call(GLsizei n_in, ::std::uint32_t* framebuffers_in) {
                __gl_debug << "call glGenFramebuffers " "n: '" << n_in << "'" ", " "framebuffers: '" << framebuffers_in << "'";
                glGenFramebuffers(n_in, framebuffers_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_renderbuffers {

              inline static void call(GLsizei n_in, ::std::uint32_t* renderbuffers_in) {
                __gl_debug << "call glGenRenderbuffers " "n: '" << n_in << "'" ", " "renderbuffers: '" << renderbuffers_in << "'";
                glGenRenderbuffers(n_in, renderbuffers_in);
                __gl_check_error;
                
              }

          };

          struct gl_generate_mipmap {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in) {
                __gl_debug << "call glGenerateMipmap " "target: '" << target_in << "'";
                glGenerateMipmap(::std::uint32_t(target_in));
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call() {
                __gl_debug << "call glGenerateMipmap " "target: '" << target_t::name::value << "'";
                glGenerateMipmap(target_t::value);
                __gl_check_error;
                
              }

          };

          struct gl_get_framebuffer_attachment_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& attachment_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetFramebufferAttachmentParameteriv " "target: '" << target_in << "'" ", " "attachment: '" << attachment_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetFramebufferAttachmentParameteriv(::std::uint32_t(target_in), ::std::uint32_t(attachment_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetFramebufferAttachmentParameteriv " "target: '" << target_t::name::value << "'" ", " "attachment: '" << attachment_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetFramebufferAttachmentParameteriv(target_t::value, attachment_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_renderbuffer_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetRenderbufferParameteriv " "target: '" << target_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetRenderbufferParameteriv(::std::uint32_t(target_in), ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetRenderbufferParameteriv " "target: '" << target_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetRenderbufferParameteriv(target_t::value, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_framebuffer {

              inline static GLboolean call(::std::uint32_t framebuffer_in) {
                __gl_debug << "call glIsFramebuffer " "framebuffer: '" << framebuffer_in << "'";
                GLboolean out = glIsFramebuffer(framebuffer_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_is_renderbuffer {

              inline static GLboolean call(::std::uint32_t renderbuffer_in) {
                __gl_debug << "call glIsRenderbuffer " "renderbuffer: '" << renderbuffer_in << "'";
                GLboolean out = glIsRenderbuffer(renderbuffer_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_renderbuffer_storage {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glRenderbufferStorage " "target: '" << target_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glRenderbufferStorage(::std::uint32_t(target_in), ::std::uint32_t(internalformat_in), width_in, height_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glRenderbufferStorage " "target: '" << target_t::name::value << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glRenderbufferStorage(target_t::value, internalformat_t::value, width_in, height_in);
                __gl_check_error;
                
              }

          };

          struct gl_renderbuffer_storage_multisample {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLsizei samples_in, const ::gtulu::internal::constant::gl_constant_base& internalformat_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glRenderbufferStorageMultisample " "target: '" << target_in << "'" ", " "samples: '" << samples_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glRenderbufferStorageMultisample(::std::uint32_t(target_in), samples_in, ::std::uint32_t(internalformat_in), width_in, height_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei samples_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glRenderbufferStorageMultisample " "target: '" << target_t::name::value << "'" ", " "samples: '" << samples_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glRenderbufferStorageMultisample(target_t::value, samples_in, internalformat_t::value, width_in, height_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace framebuffer_object
      namespace framebuffer_srgb {
        namespace fnc {
        } // namespace fnc
      } // namespace framebuffer_srgb
      namespace get_program_binary {
        namespace fnc {
          struct gl_get_program_binary {

              inline static void call(::std::uint32_t program_in, GLsizei bufSize_in, GLsizei* length_in, GLenum* binaryFormat_in, void* binary_in) {
                __gl_debug << "call glGetProgramBinary " "program: '" << program_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "binaryFormat: '" << binaryFormat_in << "'" ", " "binary: '" << binary_in << "'";
                glGetProgramBinary(program_in, bufSize_in, length_in, binaryFormat_in, binary_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_binary {

              inline static void call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& binaryFormat_in, void const* binary_in, GLsizei length_in) {
                __gl_debug << "call glProgramBinary " "program: '" << program_in << "'" ", " "binaryFormat: '" << binaryFormat_in << "'" ", " "binary: '" << binary_in << "'" ", " "length: '" << length_in << "'";
                glProgramBinary(program_in, ::std::uint32_t(binaryFormat_in), binary_in, length_in);
                __gl_check_error;
                
              }
              template< typename binaryFormat_t >
              inline static void call(::std::uint32_t program_in, void const* binary_in, GLsizei length_in) {
                __gl_debug << "call glProgramBinary " "program: '" << program_in << "'" ", " "binaryFormat: '" << binaryFormat_t::name::value << "'" ", " "binary: '" << binary_in << "'" ", " "length: '" << length_in << "'";
                glProgramBinary(program_in, binaryFormat_t::value, binary_in, length_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_parameter {

              inline static void call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t value_in) {
                __gl_debug << "call glProgramParameteri " "program: '" << program_in << "'" ", " "pname: '" << pname_in << "'" ", " "value: '" << value_in << "'";
                glProgramParameteri(program_in, ::std::uint32_t(pname_in), value_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t program_in, ::std::int32_t value_in) {
                __gl_debug << "call glProgramParameteri " "program: '" << program_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "value: '" << value_in << "'";
                glProgramParameteri(program_in, pname_t::value, value_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace get_program_binary
      namespace gpu_shader5 {
        namespace fnc {
        } // namespace fnc
      } // namespace gpu_shader5
      namespace gpu_shader_fp64 {
        namespace fnc {
          struct gl_get_uniform {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, float* params_in) {
                __gl_debug << "call glGetUniformfv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformfv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetUniformiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformiv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetUniformuiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformuiv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, double* params_in) {
                __gl_debug << "call glGetUniformdv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformdv(program_in, location_in, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_1 {

              inline static void call(::std::int32_t location_in, float v0_in) {
                __gl_debug << "call glUniform1f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1f(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in) {
                __gl_debug << "call glUniform1i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1i(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform1fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform1iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in) {
                __gl_debug << "call glUniform1ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glUniform1ui(location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform1uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in) {
                __gl_debug << "call glUniform1d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'";
                glUniform1d(location_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform1dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform1dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_2 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in) {
                __gl_debug << "call glUniform2f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2f(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in) {
                __gl_debug << "call glUniform2i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2i(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform2iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in) {
                __gl_debug << "call glUniform2ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glUniform2ui(location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform2uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in) {
                __gl_debug << "call glUniform2d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glUniform2d(location_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform2dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_3 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in, float v2_in) {
                __gl_debug << "call glUniform3f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3f(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in) {
                __gl_debug << "call glUniform3i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3i(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform3iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in) {
                __gl_debug << "call glUniform3ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glUniform3ui(location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform3uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in, double z_in) {
                __gl_debug << "call glUniform3d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glUniform3d(location_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform3dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_4 {

              inline static void call(::std::int32_t location_in, float v0_in, float v1_in, float v2_in, float v3_in) {
                __gl_debug << "call glUniform4f " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4f(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in, ::std::int32_t v3_in) {
                __gl_debug << "call glUniform4i " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4i(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glUniform4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4fv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glUniform4iv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4iv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in, ::std::uint32_t v3_in) {
                __gl_debug << "call glUniform4ui " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glUniform4ui(location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glUniform4uiv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4uiv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, double x_in, double y_in, double z_in, double w_in) {
                __gl_debug << "call glUniform4d " "location: '" << location_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glUniform4d(location_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glUniform4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glUniform4dv(location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_2 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_2x3 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix2x3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x3fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix2x3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x3dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_2x4 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix2x4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x4fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix2x4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix2x4dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_3 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_3x2 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix3x2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x2fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix3x2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x2dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_3x4 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix3x4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x4fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix3x4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix3x4dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_4 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix4fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix4dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_4x2 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix4x2fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x2fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix4x2dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x2dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_matrix_4x3 {

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glUniformMatrix4x3fv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x3fv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glUniformMatrix4x3dv " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glUniformMatrix4x3dv(location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace gpu_shader_fp64
      namespace half_float_pixel {
        namespace fnc {
        } // namespace fnc
      } // namespace half_float_pixel
      namespace half_float_vertex {
        namespace fnc {
        } // namespace fnc
      } // namespace half_float_vertex
      namespace imaging {
        namespace fnc {
        } // namespace fnc
      } // namespace imaging
      namespace map_buffer_range {
        namespace fnc {
          struct gl_flush_mapped_buffer_range {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLintptr offset_in, GLsizeiptr length_in) {
                __gl_debug << "call glFlushMappedBufferRange " "target: '" << target_in << "'" ", " "offset: '" << offset_in << "'" ", " "length: '" << length_in << "'";
                glFlushMappedBufferRange(::std::uint32_t(target_in), offset_in, length_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLintptr offset_in, GLsizeiptr length_in) {
                __gl_debug << "call glFlushMappedBufferRange " "target: '" << target_t::name::value << "'" ", " "offset: '" << offset_in << "'" ", " "length: '" << length_in << "'";
                glFlushMappedBufferRange(target_t::value, offset_in, length_in);
                __gl_check_error;
                
              }

          };

          struct gl_map_buffer_range {

              inline static GLvoid* call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLintptr offset_in, GLsizeiptr length_in, GLbitfield access_in) {
                __gl_debug << "call glMapBufferRange " "target: '" << target_in << "'" ", " "offset: '" << offset_in << "'" ", " "length: '" << length_in << "'" ", " "access: '" << access_in << "'";
                GLvoid* out = glMapBufferRange(::std::uint32_t(target_in), offset_in, length_in, access_in);
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLvoid* call(GLintptr offset_in, GLsizeiptr length_in, GLbitfield access_in) {
                __gl_debug << "call glMapBufferRange " "target: '" << target_t::name::value << "'" ", " "offset: '" << offset_in << "'" ", " "length: '" << length_in << "'" ", " "access: '" << access_in << "'";
                GLvoid* out = glMapBufferRange(target_t::value, offset_in, length_in, access_in);
                __gl_check_error;
                return out;
              }

          };

        } // namespace fnc
      } // namespace map_buffer_range
      namespace occlusion_query2 {
        namespace fnc {
        } // namespace fnc
      } // namespace occlusion_query2
      namespace provoking_vertex {
        namespace fnc {
          struct gl_provoking_vertex {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in) {
                __gl_debug << "call glProvokingVertex " "mode: '" << mode_in << "'";
                glProvokingVertex(::std::uint32_t(mode_in));
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glProvokingVertex " "mode: '" << mode_t::name::value << "'";
                glProvokingVertex(mode_t::value);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace provoking_vertex
      namespace robustness {
        namespace fnc {
          struct gl_get_graphics_reset_status {

              inline static GLenum call() {
                __gl_debug << "call glGetGraphicsResetStatusARB " "";
                GLenum out = glGetGraphicsResetStatusARB();
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_n_color_table {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei bufSize_in, void* table_in) {
                __gl_debug << "call glGetnColorTableARB " "target: '" << target_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "table: '" << table_in << "'";
                glGetnColorTableARB(::std::uint32_t(target_in), ::std::uint32_t(format_in), ::std::uint32_t(type_in), bufSize_in, table_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLsizei bufSize_in, void* table_in) {
                __gl_debug << "call glGetnColorTableARB " "target: '" << target_t::name::value << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "table: '" << table_in << "'";
                glGetnColorTableARB(target_t::value, format_t::value, type_t::value, bufSize_in, table_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_compressed_tex_image {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t lod_in, GLsizei bufSize_in, void* img_in) {
                __gl_debug << "call glGetnCompressedTexImageARB " "target: '" << target_in << "'" ", " "lod: '" << lod_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "img: '" << img_in << "'";
                glGetnCompressedTexImageARB(::std::uint32_t(target_in), lod_in, bufSize_in, img_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::int32_t lod_in, GLsizei bufSize_in, void* img_in) {
                __gl_debug << "call glGetnCompressedTexImageARB " "target: '" << target_t::name::value << "'" ", " "lod: '" << lod_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "img: '" << img_in << "'";
                glGetnCompressedTexImageARB(target_t::value, lod_in, bufSize_in, img_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_convolution_filter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei bufSize_in, void* image_in) {
                __gl_debug << "call glGetnConvolutionFilterARB " "target: '" << target_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "image: '" << image_in << "'";
                glGetnConvolutionFilterARB(::std::uint32_t(target_in), ::std::uint32_t(format_in), ::std::uint32_t(type_in), bufSize_in, image_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLsizei bufSize_in, void* image_in) {
                __gl_debug << "call glGetnConvolutionFilterARB " "target: '" << target_t::name::value << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "image: '" << image_in << "'";
                glGetnConvolutionFilterARB(target_t::value, format_t::value, type_t::value, bufSize_in, image_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_histogram {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, bool reset_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei bufSize_in, void* values_in) {
                __gl_debug << "call glGetnHistogramARB " "target: '" << target_in << "'" ", " "reset: '" << reset_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnHistogramARB(::std::uint32_t(target_in), (reset_in ? 1 : 0), ::std::uint32_t(format_in), ::std::uint32_t(type_in), bufSize_in, values_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(bool reset_in, GLsizei bufSize_in, void* values_in) {
                __gl_debug << "call glGetnHistogramARB " "target: '" << target_t::name::value << "'" ", " "reset: '" << reset_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnHistogramARB(target_t::value, (reset_in ? 1 : 0), format_t::value, type_t::value, bufSize_in, values_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_map {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& query_in, GLsizei bufSize_in, double* v_in) {
                __gl_debug << "call glGetnMapdvARB " "target: '" << target_in << "'" ", " "query: '" << query_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "v: '" << v_in << "'";
                glGetnMapdvARB(::std::uint32_t(target_in), ::std::uint32_t(query_in), bufSize_in, v_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename query_t >
              inline static void call(GLsizei bufSize_in, double* v_in) {
                __gl_debug << "call glGetnMapdvARB " "target: '" << target_t::name::value << "'" ", " "query: '" << query_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "v: '" << v_in << "'";
                glGetnMapdvARB(target_t::value, query_t::value, bufSize_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& query_in, GLsizei bufSize_in, float* v_in) {
                __gl_debug << "call glGetnMapfvARB " "target: '" << target_in << "'" ", " "query: '" << query_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "v: '" << v_in << "'";
                glGetnMapfvARB(::std::uint32_t(target_in), ::std::uint32_t(query_in), bufSize_in, v_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename query_t >
              inline static void call(GLsizei bufSize_in, float* v_in) {
                __gl_debug << "call glGetnMapfvARB " "target: '" << target_t::name::value << "'" ", " "query: '" << query_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "v: '" << v_in << "'";
                glGetnMapfvARB(target_t::value, query_t::value, bufSize_in, v_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& query_in, GLsizei bufSize_in, ::std::int32_t* v_in) {
                __gl_debug << "call glGetnMapivARB " "target: '" << target_in << "'" ", " "query: '" << query_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "v: '" << v_in << "'";
                glGetnMapivARB(::std::uint32_t(target_in), ::std::uint32_t(query_in), bufSize_in, v_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename query_t >
              inline static void call(GLsizei bufSize_in, ::std::int32_t* v_in) {
                __gl_debug << "call glGetnMapivARB " "target: '" << target_t::name::value << "'" ", " "query: '" << query_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "v: '" << v_in << "'";
                glGetnMapivARB(target_t::value, query_t::value, bufSize_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_minmax {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, bool reset_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei bufSize_in, void* values_in) {
                __gl_debug << "call glGetnMinmaxARB " "target: '" << target_in << "'" ", " "reset: '" << reset_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnMinmaxARB(::std::uint32_t(target_in), (reset_in ? 1 : 0), ::std::uint32_t(format_in), ::std::uint32_t(type_in), bufSize_in, values_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(bool reset_in, GLsizei bufSize_in, void* values_in) {
                __gl_debug << "call glGetnMinmaxARB " "target: '" << target_t::name::value << "'" ", " "reset: '" << reset_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnMinmaxARB(target_t::value, (reset_in ? 1 : 0), format_t::value, type_t::value, bufSize_in, values_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_pixel_map {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& map_in, GLsizei bufSize_in, float* values_in) {
                __gl_debug << "call glGetnPixelMapfvARB " "map: '" << map_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnPixelMapfvARB(::std::uint32_t(map_in), bufSize_in, values_in);
                __gl_check_error;
                
              }
              template< typename map_t >
              inline static void call(GLsizei bufSize_in, float* values_in) {
                __gl_debug << "call glGetnPixelMapfvARB " "map: '" << map_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnPixelMapfvARB(map_t::value, bufSize_in, values_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& map_in, GLsizei bufSize_in, ::std::uint32_t* values_in) {
                __gl_debug << "call glGetnPixelMapuivARB " "map: '" << map_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnPixelMapuivARB(::std::uint32_t(map_in), bufSize_in, values_in);
                __gl_check_error;
                
              }
              template< typename map_t >
              inline static void call(GLsizei bufSize_in, ::std::uint32_t* values_in) {
                __gl_debug << "call glGetnPixelMapuivARB " "map: '" << map_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnPixelMapuivARB(map_t::value, bufSize_in, values_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& map_in, GLsizei bufSize_in, ::std::uint16_t* values_in) {
                __gl_debug << "call glGetnPixelMapusvARB " "map: '" << map_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnPixelMapusvARB(::std::uint32_t(map_in), bufSize_in, values_in);
                __gl_check_error;
                
              }
              template< typename map_t >
              inline static void call(GLsizei bufSize_in, ::std::uint16_t* values_in) {
                __gl_debug << "call glGetnPixelMapusvARB " "map: '" << map_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "values: '" << values_in << "'";
                glGetnPixelMapusvARB(map_t::value, bufSize_in, values_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_polygon_stipple {

              inline static void call(GLsizei bufSize_in, ::std::uint8_t* pattern_in) {
                __gl_debug << "call glGetnPolygonStippleARB " "bufSize: '" << bufSize_in << "'" ", " "pattern: '" << pattern_in << "'";
                glGetnPolygonStippleARB(bufSize_in, pattern_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_separable_filter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei rowBufSize_in, void* row_in, GLsizei columnBufSize_in, void* column_in, void* span_in) {
                __gl_debug << "call glGetnSeparableFilterARB " "target: '" << target_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "rowBufSize: '" << rowBufSize_in << "'" ", " "row: '" << row_in << "'" ", " "columnBufSize: '" << columnBufSize_in << "'" ", " "column: '" << column_in << "'" ", " "span: '" << span_in << "'";
                glGetnSeparableFilterARB(::std::uint32_t(target_in), ::std::uint32_t(format_in), ::std::uint32_t(type_in), rowBufSize_in, row_in, columnBufSize_in, column_in, span_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLsizei rowBufSize_in, void* row_in, GLsizei columnBufSize_in, void* column_in, void* span_in) {
                __gl_debug << "call glGetnSeparableFilterARB " "target: '" << target_t::name::value << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "rowBufSize: '" << rowBufSize_in << "'" ", " "row: '" << row_in << "'" ", " "columnBufSize: '" << columnBufSize_in << "'" ", " "column: '" << column_in << "'" ", " "span: '" << span_in << "'";
                glGetnSeparableFilterARB(target_t::value, format_t::value, type_t::value, rowBufSize_in, row_in, columnBufSize_in, column_in, span_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_tex_image {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::int32_t level_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei bufSize_in, void* img_in) {
                __gl_debug << "call glGetnTexImageARB " "target: '" << target_in << "'" ", " "level: '" << level_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "img: '" << img_in << "'";
                glGetnTexImageARB(::std::uint32_t(target_in), level_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), bufSize_in, img_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(::std::int32_t level_in, GLsizei bufSize_in, void* img_in) {
                __gl_debug << "call glGetnTexImageARB " "target: '" << target_t::name::value << "'" ", " "level: '" << level_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "img: '" << img_in << "'";
                glGetnTexImageARB(target_t::value, level_in, format_t::value, type_t::value, bufSize_in, img_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_n_uniform {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei bufSize_in, float* params_in) {
                __gl_debug << "call glGetnUniformfvARB " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "params: '" << params_in << "'";
                glGetnUniformfvARB(program_in, location_in, bufSize_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei bufSize_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetnUniformivARB " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "params: '" << params_in << "'";
                glGetnUniformivARB(program_in, location_in, bufSize_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei bufSize_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetnUniformuivARB " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "params: '" << params_in << "'";
                glGetnUniformuivARB(program_in, location_in, bufSize_in, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei bufSize_in, double* params_in) {
                __gl_debug << "call glGetnUniformdvARB " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "params: '" << params_in << "'";
                glGetnUniformdvARB(program_in, location_in, bufSize_in, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_read_n_pixels {

              inline static void call(::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in, const ::gtulu::internal::constant::gl_constant_base& format_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei bufSize_in, void* data_in) {
                __gl_debug << "call glReadnPixelsARB " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_in << "'" ", " "type: '" << type_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "data: '" << data_in << "'";
                glReadnPixelsARB(x_in, y_in, width_in, height_in, ::std::uint32_t(format_in), ::std::uint32_t(type_in), bufSize_in, data_in);
                __gl_check_error;
                
              }
              template< typename format_t, typename type_t >
              inline static void call(::std::int32_t x_in, ::std::int32_t y_in, GLsizei width_in, GLsizei height_in, GLsizei bufSize_in, void* data_in) {
                __gl_debug << "call glReadnPixelsARB " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "format: '" << format_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "data: '" << data_in << "'";
                glReadnPixelsARB(x_in, y_in, width_in, height_in, format_t::value, type_t::value, bufSize_in, data_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace robustness
      namespace sample_shading {
        namespace fnc {
          struct gl_min_sample_shading {

              inline static void call(float value_in) {
                __gl_debug << "call glMinSampleShading " "value: '" << value_in << "'";
                glMinSampleShading(value_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace sample_shading
      namespace sampler_objects {
        namespace fnc {
          struct gl_bind_sampler {

              inline static void call(::std::uint32_t unit_in, ::std::uint32_t sampler_in) {
                __gl_debug << "call glBindSampler " "unit: '" << unit_in << "'" ", " "sampler: '" << sampler_in << "'";
                glBindSampler(unit_in, sampler_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_samplers {

              inline static void call(GLsizei count_in, ::std::uint32_t const* samplers_in) {
                __gl_debug << "call glDeleteSamplers " "count: '" << count_in << "'" ", " "samplers: '" << samplers_in << "'";
                glDeleteSamplers(count_in, samplers_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_samplers {

              inline static void call(GLsizei count_in, ::std::uint32_t* samplers_in) {
                __gl_debug << "call glGenSamplers " "count: '" << count_in << "'" ", " "samplers: '" << samplers_in << "'";
                glGenSamplers(count_in, samplers_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_sampler_parameter {

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetSamplerParameteriv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameteriv(sampler_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetSamplerParameteriv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameteriv(sampler_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float* params_in) {
                __gl_debug << "call glGetSamplerParameterfv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameterfv(sampler_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, float* params_in) {
                __gl_debug << "call glGetSamplerParameterfv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameterfv(sampler_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_sampler_parameter_integer {

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetSamplerParameterIiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameterIiv(sampler_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetSamplerParameterIiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameterIiv(sampler_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetSamplerParameterIuiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameterIuiv(sampler_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetSamplerParameterIuiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetSamplerParameterIuiv(sampler_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_sampler {

              inline static GLboolean call(::std::uint32_t sampler_in) {
                __gl_debug << "call glIsSampler " "sampler: '" << sampler_in << "'";
                GLboolean out = glIsSampler(sampler_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_sampler_parameter {

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t param_in) {
                __gl_debug << "call glSamplerParameteri " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glSamplerParameteri(sampler_in, ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, ::std::int32_t param_in) {
                __gl_debug << "call glSamplerParameteri " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glSamplerParameteri(sampler_in, pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t const* param_in) {
                __gl_debug << "call glSamplerParameteriv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glSamplerParameteriv(sampler_in, ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, ::std::int32_t const* param_in) {
                __gl_debug << "call glSamplerParameteriv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glSamplerParameteriv(sampler_in, pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float param_in) {
                __gl_debug << "call glSamplerParameterf " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterf(sampler_in, ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, float param_in) {
                __gl_debug << "call glSamplerParameterf " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterf(sampler_in, pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, float const* param_in) {
                __gl_debug << "call glSamplerParameterfv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterfv(sampler_in, ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, float const* param_in) {
                __gl_debug << "call glSamplerParameterfv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterfv(sampler_in, pname_t::value, param_in);
                __gl_check_error;
                
              }

          };

          struct gl_sampler_parameter_integer {

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t const* param_in) {
                __gl_debug << "call glSamplerParameterIiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterIiv(sampler_in, ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, ::std::int32_t const* param_in) {
                __gl_debug << "call glSamplerParameterIiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterIiv(sampler_in, pname_t::value, param_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t sampler_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t const* param_in) {
                __gl_debug << "call glSamplerParameterIuiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_in << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterIuiv(sampler_in, ::std::uint32_t(pname_in), param_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t sampler_in, ::std::uint32_t const* param_in) {
                __gl_debug << "call glSamplerParameterIuiv " "sampler: '" << sampler_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "param: '" << param_in << "'";
                glSamplerParameterIuiv(sampler_in, pname_t::value, param_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace sampler_objects
      namespace seamless_cube_map {
        namespace fnc {
        } // namespace fnc
      } // namespace seamless_cube_map
      namespace separate_shader_objects {
        namespace fnc {
          struct gl_active_shader_program {

              inline static void call(::std::uint32_t pipeline_in, ::std::uint32_t program_in) {
                __gl_debug << "call glActiveShaderProgram " "pipeline: '" << pipeline_in << "'" ", " "program: '" << program_in << "'";
                glActiveShaderProgram(pipeline_in, program_in);
                __gl_check_error;
                
              }

          };

          struct gl_bind_program_pipeline {

              inline static void call(::std::uint32_t pipeline_in) {
                __gl_debug << "call glBindProgramPipeline " "pipeline: '" << pipeline_in << "'";
                glBindProgramPipeline(pipeline_in);
                __gl_check_error;
                
              }

          };

          struct gl_create_shader_program {

              inline static GLuint call(const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei count_in, GLchar const** strings_in) {
                __gl_debug << "call glCreateShaderProgramv " "type: '" << type_in << "'" ", " "count: '" << count_in << "'" ", " "strings: '" << strings_in << "'";
                GLuint out = glCreateShaderProgramv(::std::uint32_t(type_in), count_in, strings_in);
                __gl_check_error;
                return out;
              }
              template< typename type_t >
              inline static GLuint call(GLsizei count_in, GLchar const** strings_in) {
                __gl_debug << "call glCreateShaderProgramv " "type: '" << type_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "strings: '" << strings_in << "'";
                GLuint out = glCreateShaderProgramv(type_t::value, count_in, strings_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_delete_program_pipelines {

              inline static void call(GLsizei n_in, ::std::uint32_t const* pipelines_in) {
                __gl_debug << "call glDeleteProgramPipelines " "n: '" << n_in << "'" ", " "pipelines: '" << pipelines_in << "'";
                glDeleteProgramPipelines(n_in, pipelines_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_program_pipelines {

              inline static void call(GLsizei n_in, ::std::uint32_t* pipelines_in) {
                __gl_debug << "call glGenProgramPipelines " "n: '" << n_in << "'" ", " "pipelines: '" << pipelines_in << "'";
                glGenProgramPipelines(n_in, pipelines_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_program_pipeline {

              inline static void call(::std::uint32_t pipeline_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetProgramPipelineiv " "pipeline: '" << pipeline_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetProgramPipelineiv(pipeline_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t pipeline_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetProgramPipelineiv " "pipeline: '" << pipeline_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetProgramPipelineiv(pipeline_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_program_pipeline_info_log {

              inline static void call(::std::uint32_t pipeline_in, GLsizei bufSize_in, GLsizei* length_in, GLchar* infoLog_in) {
                __gl_debug << "call glGetProgramPipelineInfoLog " "pipeline: '" << pipeline_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "infoLog: '" << infoLog_in << "'";
                glGetProgramPipelineInfoLog(pipeline_in, bufSize_in, length_in, infoLog_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_program_pipeline {

              inline static GLboolean call(::std::uint32_t pipeline_in) {
                __gl_debug << "call glIsProgramPipeline " "pipeline: '" << pipeline_in << "'";
                GLboolean out = glIsProgramPipeline(pipeline_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_program_uniform_1 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::int32_t v0_in) {
                __gl_debug << "call glProgramUniform1i " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glProgramUniform1i(program_in, location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glProgramUniform1iv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform1iv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, float v0_in) {
                __gl_debug << "call glProgramUniform1f " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glProgramUniform1f(program_in, location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glProgramUniform1fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform1fv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, double v0_in) {
                __gl_debug << "call glProgramUniform1d " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glProgramUniform1d(program_in, location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glProgramUniform1dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform1dv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::uint32_t v0_in) {
                __gl_debug << "call glProgramUniform1ui " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'";
                glProgramUniform1ui(program_in, location_in, v0_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glProgramUniform1uiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform1uiv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_2 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in) {
                __gl_debug << "call glProgramUniform2i " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glProgramUniform2i(program_in, location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glProgramUniform2iv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform2iv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, float v0_in, float v1_in) {
                __gl_debug << "call glProgramUniform2f " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glProgramUniform2f(program_in, location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glProgramUniform2fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform2fv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, double v0_in, double v1_in) {
                __gl_debug << "call glProgramUniform2d " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glProgramUniform2d(program_in, location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glProgramUniform2dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform2dv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in) {
                __gl_debug << "call glProgramUniform2ui " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'";
                glProgramUniform2ui(program_in, location_in, v0_in, v1_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glProgramUniform2uiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform2uiv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_3 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in) {
                __gl_debug << "call glProgramUniform3i " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glProgramUniform3i(program_in, location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glProgramUniform3iv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform3iv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, float v0_in, float v1_in, float v2_in) {
                __gl_debug << "call glProgramUniform3f " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glProgramUniform3f(program_in, location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glProgramUniform3fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform3fv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, double v0_in, double v1_in, double v2_in) {
                __gl_debug << "call glProgramUniform3d " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glProgramUniform3d(program_in, location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glProgramUniform3dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform3dv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in) {
                __gl_debug << "call glProgramUniform3ui " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'";
                glProgramUniform3ui(program_in, location_in, v0_in, v1_in, v2_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glProgramUniform3uiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform3uiv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_4 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::int32_t v0_in, ::std::int32_t v1_in, ::std::int32_t v2_in, ::std::int32_t v3_in) {
                __gl_debug << "call glProgramUniform4i " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glProgramUniform4i(program_in, location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::int32_t const* value_in) {
                __gl_debug << "call glProgramUniform4iv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform4iv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, float v0_in, float v1_in, float v2_in, float v3_in) {
                __gl_debug << "call glProgramUniform4f " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glProgramUniform4f(program_in, location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, float const* value_in) {
                __gl_debug << "call glProgramUniform4fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform4fv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, double v0_in, double v1_in, double v2_in, double v3_in) {
                __gl_debug << "call glProgramUniform4d " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glProgramUniform4d(program_in, location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, double const* value_in) {
                __gl_debug << "call glProgramUniform4dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform4dv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, ::std::uint32_t v0_in, ::std::uint32_t v1_in, ::std::uint32_t v2_in, ::std::uint32_t v3_in) {
                __gl_debug << "call glProgramUniform4ui " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "v0: '" << v0_in << "'" ", " "v1: '" << v1_in << "'" ", " "v2: '" << v2_in << "'" ", " "v3: '" << v3_in << "'";
                glProgramUniform4ui(program_in, location_in, v0_in, v1_in, v2_in, v3_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glProgramUniform4uiv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniform4uiv(program_in, location_in, count_in, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_2 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix2fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix2fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix2dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix2dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_2x3 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix2x3fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix2x3fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix2x3dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix2x3dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_2x4 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix2x4fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix2x4fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix2x4dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix2x4dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_3 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix3fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix3fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix3dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix3dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_3x2 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix3x2fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix3x2fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix3x2dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix3x2dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_3x4 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix3x4fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix3x4fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix3x4dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix3x4dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_4 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix4fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix4fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix4dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix4dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_4x2 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix4x2fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix4x2fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix4x2dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix4x2dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_program_uniform_matrix_4x3 {

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, float const* value_in) {
                __gl_debug << "call glProgramUniformMatrix4x3fv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix4x3fv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t program_in, ::std::int32_t location_in, GLsizei count_in, bool transpose_in, double const* value_in) {
                __gl_debug << "call glProgramUniformMatrix4x3dv " "program: '" << program_in << "'" ", " "location: '" << location_in << "'" ", " "count: '" << count_in << "'" ", " "transpose: '" << transpose_in << "'" ", " "value: '" << value_in << "'";
                glProgramUniformMatrix4x3dv(program_in, location_in, count_in, (transpose_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_use_program_stages {

              inline static void call(::std::uint32_t pipeline_in, GLbitfield stages_in, ::std::uint32_t program_in) {
                __gl_debug << "call glUseProgramStages " "pipeline: '" << pipeline_in << "'" ", " "stages: '" << stages_in << "'" ", " "program: '" << program_in << "'";
                glUseProgramStages(pipeline_in, stages_in, program_in);
                __gl_check_error;
                
              }

          };

          struct gl_validate_program_pipeline {

              inline static void call(::std::uint32_t pipeline_in) {
                __gl_debug << "call glValidateProgramPipeline " "pipeline: '" << pipeline_in << "'";
                glValidateProgramPipeline(pipeline_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace separate_shader_objects
      namespace shader_bit_encoding {
        namespace fnc {
        } // namespace fnc
      } // namespace shader_bit_encoding
      namespace shader_objects {
        namespace fnc {
        } // namespace fnc
      } // namespace shader_objects
      namespace shader_precision {
        namespace fnc {
        } // namespace fnc
      } // namespace shader_precision
      namespace shader_stencil_export {
        namespace fnc {
        } // namespace fnc
      } // namespace shader_stencil_export
      namespace shader_subroutine {
        namespace fnc {
          struct gl_get_active_subroutine_name {

              inline static void call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& shadertype_in, ::std::uint32_t index_in, GLsizei bufsize_in, GLsizei* length_in, GLchar* name_in) {
                __gl_debug << "call glGetActiveSubroutineName " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_in << "'" ", " "index: '" << index_in << "'" ", " "bufsize: '" << bufsize_in << "'" ", " "length: '" << length_in << "'" ", " "name: '" << name_in << "'";
                glGetActiveSubroutineName(program_in, ::std::uint32_t(shadertype_in), index_in, bufsize_in, length_in, name_in);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(::std::uint32_t program_in, ::std::uint32_t index_in, GLsizei bufsize_in, GLsizei* length_in, GLchar* name_in) {
                __gl_debug << "call glGetActiveSubroutineName " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "bufsize: '" << bufsize_in << "'" ", " "length: '" << length_in << "'" ", " "name: '" << name_in << "'";
                glGetActiveSubroutineName(program_in, shadertype_t::value, index_in, bufsize_in, length_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_active_subroutine_uniform {

              inline static void call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& shadertype_in, ::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* values_in) {
                __gl_debug << "call glGetActiveSubroutineUniformiv " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_in << "'" ", " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "values: '" << values_in << "'";
                glGetActiveSubroutineUniformiv(program_in, ::std::uint32_t(shadertype_in), index_in, ::std::uint32_t(pname_in), values_in);
                __gl_check_error;
                
              }
              template< typename shadertype_t, typename pname_t >
              inline static void call(::std::uint32_t program_in, ::std::uint32_t index_in, ::std::int32_t* values_in) {
                __gl_debug << "call glGetActiveSubroutineUniformiv " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "values: '" << values_in << "'";
                glGetActiveSubroutineUniformiv(program_in, shadertype_t::value, index_in, pname_t::value, values_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_active_subroutine_uniform_name {

              inline static void call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& shadertype_in, ::std::uint32_t index_in, GLsizei bufsize_in, GLsizei* length_in, GLchar* name_in) {
                __gl_debug << "call glGetActiveSubroutineUniformName " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_in << "'" ", " "index: '" << index_in << "'" ", " "bufsize: '" << bufsize_in << "'" ", " "length: '" << length_in << "'" ", " "name: '" << name_in << "'";
                glGetActiveSubroutineUniformName(program_in, ::std::uint32_t(shadertype_in), index_in, bufsize_in, length_in, name_in);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(::std::uint32_t program_in, ::std::uint32_t index_in, GLsizei bufsize_in, GLsizei* length_in, GLchar* name_in) {
                __gl_debug << "call glGetActiveSubroutineUniformName " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "bufsize: '" << bufsize_in << "'" ", " "length: '" << length_in << "'" ", " "name: '" << name_in << "'";
                glGetActiveSubroutineUniformName(program_in, shadertype_t::value, index_in, bufsize_in, length_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_program_stage {

              inline static void call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& shadertype_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* values_in) {
                __gl_debug << "call glGetProgramStageiv " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_in << "'" ", " "pname: '" << pname_in << "'" ", " "values: '" << values_in << "'";
                glGetProgramStageiv(program_in, ::std::uint32_t(shadertype_in), ::std::uint32_t(pname_in), values_in);
                __gl_check_error;
                
              }
              template< typename shadertype_t, typename pname_t >
              inline static void call(::std::uint32_t program_in, ::std::int32_t* values_in) {
                __gl_debug << "call glGetProgramStageiv " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_t::name::value << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "values: '" << values_in << "'";
                glGetProgramStageiv(program_in, shadertype_t::value, pname_t::value, values_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_subroutine_index {

              inline static GLuint call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& shadertype_in, GLchar const* name_in) {
                __gl_debug << "call glGetSubroutineIndex " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_in << "'" ", " "name: '" << name_in << "'";
                GLuint out = glGetSubroutineIndex(program_in, ::std::uint32_t(shadertype_in), name_in);
                __gl_check_error;
                return out;
              }
              template< typename shadertype_t >
              inline static GLuint call(::std::uint32_t program_in, GLchar const* name_in) {
                __gl_debug << "call glGetSubroutineIndex " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_t::name::value << "'" ", " "name: '" << name_in << "'";
                GLuint out = glGetSubroutineIndex(program_in, shadertype_t::value, name_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_subroutine_uniform_location {

              inline static GLint call(::std::uint32_t program_in, const ::gtulu::internal::constant::gl_constant_base& shadertype_in, GLchar const* name_in) {
                __gl_debug << "call glGetSubroutineUniformLocation " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_in << "'" ", " "name: '" << name_in << "'";
                GLint out = glGetSubroutineUniformLocation(program_in, ::std::uint32_t(shadertype_in), name_in);
                __gl_check_error;
                return out;
              }
              template< typename shadertype_t >
              inline static GLint call(::std::uint32_t program_in, GLchar const* name_in) {
                __gl_debug << "call glGetSubroutineUniformLocation " "program: '" << program_in << "'" ", " "shadertype: '" << shadertype_t::name::value << "'" ", " "name: '" << name_in << "'";
                GLint out = glGetSubroutineUniformLocation(program_in, shadertype_t::value, name_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_uniform_subroutine {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& shadertype_in, ::std::int32_t location_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetUniformSubroutineuiv " "shadertype: '" << shadertype_in << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformSubroutineuiv(::std::uint32_t(shadertype_in), location_in, params_in);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(::std::int32_t location_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetUniformSubroutineuiv " "shadertype: '" << shadertype_t::name::value << "'" ", " "location: '" << location_in << "'" ", " "params: '" << params_in << "'";
                glGetUniformSubroutineuiv(shadertype_t::value, location_in, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_subroutines {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& shadertype_in, GLsizei count_in, ::std::uint32_t const* indices_in) {
                __gl_debug << "call glUniformSubroutinesuiv " "shadertype: '" << shadertype_in << "'" ", " "count: '" << count_in << "'" ", " "indices: '" << indices_in << "'";
                glUniformSubroutinesuiv(::std::uint32_t(shadertype_in), count_in, indices_in);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(GLsizei count_in, ::std::uint32_t const* indices_in) {
                __gl_debug << "call glUniformSubroutinesuiv " "shadertype: '" << shadertype_t::name::value << "'" ", " "count: '" << count_in << "'" ", " "indices: '" << indices_in << "'";
                glUniformSubroutinesuiv(shadertype_t::value, count_in, indices_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace shader_subroutine
      namespace shading_language_include {
        namespace fnc {
          struct gl_compile_shader_include {

              inline static void call(::std::uint32_t shader_in, GLsizei count_in, GLchar const** path_in, ::std::int32_t const* length_in) {
                __gl_debug << "call glCompileShaderIncludeARB " "shader: '" << shader_in << "'" ", " "count: '" << count_in << "'" ", " "path: '" << path_in << "'" ", " "length: '" << length_in << "'";
                glCompileShaderIncludeARB(shader_in, count_in, path_in, length_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_named_string {

              inline static void call(::std::int32_t namelen_in, GLchar const* name_in) {
                __gl_debug << "call glDeleteNamedStringARB " "namelen: '" << namelen_in << "'" ", " "name: '" << name_in << "'";
                glDeleteNamedStringARB(namelen_in, name_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_named_string {

              inline static void call(::std::int32_t namelen_in, GLchar const* name_in, GLsizei bufSize_in, ::std::int32_t* stringlen_in, GLchar* string_in) {
                __gl_debug << "call glGetNamedStringARB " "namelen: '" << namelen_in << "'" ", " "name: '" << name_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "stringlen: '" << stringlen_in << "'" ", " "string: '" << string_in << "'";
                glGetNamedStringARB(namelen_in, name_in, bufSize_in, stringlen_in, string_in);
                __gl_check_error;
                
              }

              inline static void call(::std::int32_t namelen_in, GLchar const* name_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetNamedStringivARB " "namelen: '" << namelen_in << "'" ", " "name: '" << name_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetNamedStringivARB(namelen_in, name_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::int32_t namelen_in, GLchar const* name_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetNamedStringivARB " "namelen: '" << namelen_in << "'" ", " "name: '" << name_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetNamedStringivARB(namelen_in, name_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_named_string {

              inline static GLboolean call(::std::int32_t namelen_in, GLchar const* name_in) {
                __gl_debug << "call glIsNamedStringARB " "namelen: '" << namelen_in << "'" ", " "name: '" << name_in << "'";
                GLboolean out = glIsNamedStringARB(namelen_in, name_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_named_string {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::int32_t namelen_in, GLchar const* name_in, ::std::int32_t stringlen_in, GLchar const* string_in) {
                __gl_debug << "call glNamedStringARB " "type: '" << type_in << "'" ", " "namelen: '" << namelen_in << "'" ", " "name: '" << name_in << "'" ", " "stringlen: '" << stringlen_in << "'" ", " "string: '" << string_in << "'";
                glNamedStringARB(::std::uint32_t(type_in), namelen_in, name_in, stringlen_in, string_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::int32_t namelen_in, GLchar const* name_in, ::std::int32_t stringlen_in, GLchar const* string_in) {
                __gl_debug << "call glNamedStringARB " "type: '" << type_t::name::value << "'" ", " "namelen: '" << namelen_in << "'" ", " "name: '" << name_in << "'" ", " "stringlen: '" << stringlen_in << "'" ", " "string: '" << string_in << "'";
                glNamedStringARB(type_t::value, namelen_in, name_in, stringlen_in, string_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace shading_language_include
      namespace sync {
        namespace fnc {
          struct gl_client_wait_sync {

              inline static GLenum call(GLsync sync_in, GLbitfield flags_in, GLuint64 timeout_in) {
                __gl_debug << "call glClientWaitSync " "sync: '" << sync_in << "'" ", " "flags: '" << flags_in << "'" ", " "timeout: '" << timeout_in << "'";
                GLenum out = glClientWaitSync(sync_in, flags_in, timeout_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_delete_sync {

              inline static void call(GLsync sync_in) {
                __gl_debug << "call glDeleteSync " "sync: '" << sync_in << "'";
                glDeleteSync(sync_in);
                __gl_check_error;
                
              }

          };

          struct gl_fence_sync {

              inline static GLsync call(const ::gtulu::internal::constant::gl_constant_base& condition_in, GLbitfield flags_in) {
                __gl_debug << "call glFenceSync " "condition: '" << condition_in << "'" ", " "flags: '" << flags_in << "'";
                GLsync out = glFenceSync(::std::uint32_t(condition_in), flags_in);
                __gl_check_error;
                return out;
              }
              template< typename condition_t >
              inline static GLsync call(GLbitfield flags_in) {
                __gl_debug << "call glFenceSync " "condition: '" << condition_t::name::value << "'" ", " "flags: '" << flags_in << "'";
                GLsync out = glFenceSync(condition_t::value, flags_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_integer {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetIntegerv " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetIntegerv(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::int32_t* params_in) {
                __gl_debug << "call glGetIntegerv " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetIntegerv(pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, GLint64* params_in) {
                __gl_debug << "call glGetInteger64v " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetInteger64v(::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint64* params_in) {
                __gl_debug << "call glGetInteger64v " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetInteger64v(pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_sync {

              inline static void call(GLsync sync_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, GLsizei bufSize_in, GLsizei* length_in, ::std::int32_t* values_in) {
                __gl_debug << "call glGetSynciv " "sync: '" << sync_in << "'" ", " "pname: '" << pname_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "values: '" << values_in << "'";
                glGetSynciv(sync_in, ::std::uint32_t(pname_in), bufSize_in, length_in, values_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLsync sync_in, GLsizei bufSize_in, GLsizei* length_in, ::std::int32_t* values_in) {
                __gl_debug << "call glGetSynciv " "sync: '" << sync_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "values: '" << values_in << "'";
                glGetSynciv(sync_in, pname_t::value, bufSize_in, length_in, values_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_sync {

              inline static GLboolean call(GLsync sync_in) {
                __gl_debug << "call glIsSync " "sync: '" << sync_in << "'";
                GLboolean out = glIsSync(sync_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_wait_sync {

              inline static void call(GLsync sync_in, GLbitfield flags_in, GLuint64 timeout_in) {
                __gl_debug << "call glWaitSync " "sync: '" << sync_in << "'" ", " "flags: '" << flags_in << "'" ", " "timeout: '" << timeout_in << "'";
                glWaitSync(sync_in, flags_in, timeout_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace sync
      namespace tessellation_shader {
        namespace fnc {
          struct gl_patch_parameter {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t value_in) {
                __gl_debug << "call glPatchParameteri " "pname: '" << pname_in << "'" ", " "value: '" << value_in << "'";
                glPatchParameteri(::std::uint32_t(pname_in), value_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::int32_t value_in) {
                __gl_debug << "call glPatchParameteri " "pname: '" << pname_t::name::value << "'" ", " "value: '" << value_in << "'";
                glPatchParameteri(pname_t::value, value_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, float const* values_in) {
                __gl_debug << "call glPatchParameterfv " "pname: '" << pname_in << "'" ", " "values: '" << values_in << "'";
                glPatchParameterfv(::std::uint32_t(pname_in), values_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(float const* values_in) {
                __gl_debug << "call glPatchParameterfv " "pname: '" << pname_t::name::value << "'" ", " "values: '" << values_in << "'";
                glPatchParameterfv(pname_t::value, values_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace tessellation_shader
      namespace texture_buffer_object_rgb32 {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_buffer_object_rgb32
      namespace texture_compression_bptc {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_compression_bptc
      namespace texture_compression_rgtc {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_compression_rgtc
      namespace texture_cube_map_array {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_cube_map_array
      namespace texture_gather {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_gather
      namespace texture_multisample {
        namespace fnc {
          struct gl_get_multisample {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t index_in, float* val_in) {
                __gl_debug << "call glGetMultisamplefv " "pname: '" << pname_in << "'" ", " "index: '" << index_in << "'" ", " "val: '" << val_in << "'";
                glGetMultisamplefv(::std::uint32_t(pname_in), index_in, val_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, float* val_in) {
                __gl_debug << "call glGetMultisamplefv " "pname: '" << pname_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "val: '" << val_in << "'";
                glGetMultisamplefv(pname_t::value, index_in, val_in);
                __gl_check_error;
                
              }

          };

          struct gl_sample_mask {

              inline static void call(::std::uint32_t index_in, GLbitfield mask_in) {
                __gl_debug << "call glSampleMaski " "index: '" << index_in << "'" ", " "mask: '" << mask_in << "'";
                glSampleMaski(index_in, mask_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_image_2d_multisample {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLsizei samples_in, ::std::int32_t internalformat_in, GLsizei width_in, GLsizei height_in, bool fixedsamplelocations_in) {
                __gl_debug << "call glTexImage2DMultisample " "target: '" << target_in << "'" ", " "samples: '" << samples_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations_in << "'";
                glTexImage2DMultisample(::std::uint32_t(target_in), samples_in, ::std::uint32_t(internalformat_in), width_in, height_in, (fixedsamplelocations_in ? 1 : 0));
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei samples_in, GLsizei width_in, GLsizei height_in, bool fixedsamplelocations_in) {
                __gl_debug << "call glTexImage2DMultisample " "target: '" << target_t::name::value << "'" ", " "samples: '" << samples_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations_in << "'";
                glTexImage2DMultisample(target_t::value, samples_in, internalformat_t::value, width_in, height_in, (fixedsamplelocations_in ? 1 : 0));
                __gl_check_error;
                
              }

          };

          struct gl_tex_image_3d_multisample {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, GLsizei samples_in, ::std::int32_t internalformat_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, bool fixedsamplelocations_in) {
                __gl_debug << "call glTexImage3DMultisample " "target: '" << target_in << "'" ", " "samples: '" << samples_in << "'" ", " "internalformat: '" << internalformat_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations_in << "'";
                glTexImage3DMultisample(::std::uint32_t(target_in), samples_in, ::std::uint32_t(internalformat_in), width_in, height_in, depth_in, (fixedsamplelocations_in ? 1 : 0));
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei samples_in, GLsizei width_in, GLsizei height_in, GLsizei depth_in, bool fixedsamplelocations_in) {
                __gl_debug << "call glTexImage3DMultisample " "target: '" << target_t::name::value << "'" ", " "samples: '" << samples_in << "'" ", " "internalformat: '" << internalformat_t::name::value << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'" ", " "depth: '" << depth_in << "'" ", " "fixedsamplelocations: '" << fixedsamplelocations_in << "'";
                glTexImage3DMultisample(target_t::value, samples_in, internalformat_t::value, width_in, height_in, depth_in, (fixedsamplelocations_in ? 1 : 0));
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace texture_multisample
      namespace texture_query_lod {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_query_lod
      namespace texture_rg {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_rg
      namespace texture_rgb10_a2ui {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_rgb10_a2ui
      namespace texture_swizzle {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_swizzle
      namespace timer_query {
        namespace fnc {
          struct gl_get_query_object {

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryObjectiv " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectiv(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryObjectiv " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectiv(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetQueryObjectuiv " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectuiv(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, ::std::uint32_t* params_in) {
                __gl_debug << "call glGetQueryObjectuiv " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectuiv(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, GLint64* params_in) {
                __gl_debug << "call glGetQueryObjecti64v " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjecti64v(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, GLint64* params_in) {
                __gl_debug << "call glGetQueryObjecti64v " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjecti64v(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, GLuint64* params_in) {
                __gl_debug << "call glGetQueryObjectui64v " "id: '" << id_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectui64v(id_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t id_in, GLuint64* params_in) {
                __gl_debug << "call glGetQueryObjectui64v " "id: '" << id_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryObjectui64v(id_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_query_counter {

              inline static void call(::std::uint32_t id_in, const ::gtulu::internal::constant::gl_constant_base& target_in) {
                __gl_debug << "call glQueryCounter " "id: '" << id_in << "'" ", " "target: '" << target_in << "'";
                glQueryCounter(id_in, ::std::uint32_t(target_in));
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t id_in) {
                __gl_debug << "call glQueryCounter " "id: '" << id_in << "'" ", " "target: '" << target_t::name::value << "'";
                glQueryCounter(id_in, target_t::value);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace timer_query
      namespace transform_feedback2 {
        namespace fnc {
          struct gl_bind_transform_feedback {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t id_in) {
                __gl_debug << "call glBindTransformFeedback " "target: '" << target_in << "'" ", " "id: '" << id_in << "'";
                glBindTransformFeedback(::std::uint32_t(target_in), id_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t id_in) {
                __gl_debug << "call glBindTransformFeedback " "target: '" << target_t::name::value << "'" ", " "id: '" << id_in << "'";
                glBindTransformFeedback(target_t::value, id_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_transform_feedbacks {

              inline static void call(GLsizei n_in, ::std::uint32_t const* ids_in) {
                __gl_debug << "call glDeleteTransformFeedbacks " "n: '" << n_in << "'" ", " "ids: '" << ids_in << "'";
                glDeleteTransformFeedbacks(n_in, ids_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_transform_feedback {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, ::std::uint32_t id_in) {
                __gl_debug << "call glDrawTransformFeedback " "mode: '" << mode_in << "'" ", " "id: '" << id_in << "'";
                glDrawTransformFeedback(::std::uint32_t(mode_in), id_in);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::uint32_t id_in) {
                __gl_debug << "call glDrawTransformFeedback " "mode: '" << mode_t::name::value << "'" ", " "id: '" << id_in << "'";
                glDrawTransformFeedback(mode_t::value, id_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_transform_feedbacks {

              inline static void call(GLsizei n_in, ::std::uint32_t* ids_in) {
                __gl_debug << "call glGenTransformFeedbacks " "n: '" << n_in << "'" ", " "ids: '" << ids_in << "'";
                glGenTransformFeedbacks(n_in, ids_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_transform_feedback {

              inline static GLboolean call(::std::uint32_t id_in) {
                __gl_debug << "call glIsTransformFeedback " "id: '" << id_in << "'";
                GLboolean out = glIsTransformFeedback(id_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_pause_transform_feedback {

              inline static void call() {
                __gl_debug << "call glPauseTransformFeedback " "";
                glPauseTransformFeedback();
                __gl_check_error;
                
              }

          };

          struct gl_resume_transform_feedback {

              inline static void call() {
                __gl_debug << "call glResumeTransformFeedback " "";
                glResumeTransformFeedback();
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace transform_feedback2
      namespace transform_feedback3 {
        namespace fnc {
          struct gl_begin_query_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, ::std::uint32_t id_in) {
                __gl_debug << "call glBeginQueryIndexed " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "id: '" << id_in << "'";
                glBeginQueryIndexed(::std::uint32_t(target_in), index_in, id_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, ::std::uint32_t id_in) {
                __gl_debug << "call glBeginQueryIndexed " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "id: '" << id_in << "'";
                glBeginQueryIndexed(target_t::value, index_in, id_in);
                __gl_check_error;
                
              }

          };

          struct gl_draw_transform_feedback_stream {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& mode_in, ::std::uint32_t id_in, ::std::uint32_t stream_in) {
                __gl_debug << "call glDrawTransformFeedbackStream " "mode: '" << mode_in << "'" ", " "id: '" << id_in << "'" ", " "stream: '" << stream_in << "'";
                glDrawTransformFeedbackStream(::std::uint32_t(mode_in), id_in, stream_in);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(::std::uint32_t id_in, ::std::uint32_t stream_in) {
                __gl_debug << "call glDrawTransformFeedbackStream " "mode: '" << mode_t::name::value << "'" ", " "id: '" << id_in << "'" ", " "stream: '" << stream_in << "'";
                glDrawTransformFeedbackStream(mode_t::value, id_in, stream_in);
                __gl_check_error;
                
              }

          };

          struct gl_end_query_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in) {
                __gl_debug << "call glEndQueryIndexed " "target: '" << target_in << "'" ", " "index: '" << index_in << "'";
                glEndQueryIndexed(::std::uint32_t(target_in), index_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in) {
                __gl_debug << "call glEndQueryIndexed " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'";
                glEndQueryIndexed(target_t::value, index_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_query_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryIndexediv " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetQueryIndexediv(::std::uint32_t(target_in), index_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetQueryIndexediv " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetQueryIndexediv(target_t::value, index_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace transform_feedback3
      namespace uniform_buffer_object {
        namespace fnc {
          struct gl_get_active_uniform_block {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t uniformBlockIndex_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetActiveUniformBlockiv " "program: '" << program_in << "'" ", " "uniformBlockIndex: '" << uniformBlockIndex_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetActiveUniformBlockiv(program_in, uniformBlockIndex_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t program_in, ::std::uint32_t uniformBlockIndex_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetActiveUniformBlockiv " "program: '" << program_in << "'" ", " "uniformBlockIndex: '" << uniformBlockIndex_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetActiveUniformBlockiv(program_in, uniformBlockIndex_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_active_uniform_block_name {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t uniformBlockIndex_in, GLsizei bufSize_in, GLsizei* length_in, GLchar* uniformBlockName_in) {
                __gl_debug << "call glGetActiveUniformBlockName " "program: '" << program_in << "'" ", " "uniformBlockIndex: '" << uniformBlockIndex_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "uniformBlockName: '" << uniformBlockName_in << "'";
                glGetActiveUniformBlockName(program_in, uniformBlockIndex_in, bufSize_in, length_in, uniformBlockName_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_active_uniform_name {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t uniformIndex_in, GLsizei bufSize_in, GLsizei* length_in, GLchar* uniformName_in) {
                __gl_debug << "call glGetActiveUniformName " "program: '" << program_in << "'" ", " "uniformIndex: '" << uniformIndex_in << "'" ", " "bufSize: '" << bufSize_in << "'" ", " "length: '" << length_in << "'" ", " "uniformName: '" << uniformName_in << "'";
                glGetActiveUniformName(program_in, uniformIndex_in, bufSize_in, length_in, uniformName_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_active_uniforms {

              inline static void call(::std::uint32_t program_in, GLsizei uniformCount_in, ::std::uint32_t const* uniformIndices_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetActiveUniformsiv " "program: '" << program_in << "'" ", " "uniformCount: '" << uniformCount_in << "'" ", " "uniformIndices: '" << uniformIndices_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetActiveUniformsiv(program_in, uniformCount_in, uniformIndices_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t program_in, GLsizei uniformCount_in, ::std::uint32_t const* uniformIndices_in, ::std::int32_t* params_in) {
                __gl_debug << "call glGetActiveUniformsiv " "program: '" << program_in << "'" ", " "uniformCount: '" << uniformCount_in << "'" ", " "uniformIndices: '" << uniformIndices_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetActiveUniformsiv(program_in, uniformCount_in, uniformIndices_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_uniform_block_index {

              inline static GLuint call(::std::uint32_t program_in, GLchar const* uniformBlockName_in) {
                __gl_debug << "call glGetUniformBlockIndex " "program: '" << program_in << "'" ", " "uniformBlockName: '" << uniformBlockName_in << "'";
                GLuint out = glGetUniformBlockIndex(program_in, uniformBlockName_in);
                __gl_check_error;
                return out;
              }

          };

          struct gl_get_uniform_indices {

              inline static void call(::std::uint32_t program_in, GLsizei uniformCount_in, GLchar const** uniformNames_in, ::std::uint32_t* uniformIndices_in) {
                __gl_debug << "call glGetUniformIndices " "program: '" << program_in << "'" ", " "uniformCount: '" << uniformCount_in << "'" ", " "uniformNames: '" << uniformNames_in << "'" ", " "uniformIndices: '" << uniformIndices_in << "'";
                glGetUniformIndices(program_in, uniformCount_in, uniformNames_in, uniformIndices_in);
                __gl_check_error;
                
              }

          };

          struct gl_uniform_block_binding {

              inline static void call(::std::uint32_t program_in, ::std::uint32_t uniformBlockIndex_in, ::std::uint32_t uniformBlockBinding_in) {
                __gl_debug << "call glUniformBlockBinding " "program: '" << program_in << "'" ", " "uniformBlockIndex: '" << uniformBlockIndex_in << "'" ", " "uniformBlockBinding: '" << uniformBlockBinding_in << "'";
                glUniformBlockBinding(program_in, uniformBlockIndex_in, uniformBlockBinding_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace uniform_buffer_object
      namespace vertex_array_bgra {
        namespace fnc {
        } // namespace fnc
      } // namespace vertex_array_bgra
      namespace vertex_array_object {
        namespace fnc {
          struct gl_bind_vertex_array {

              inline static void call(::std::uint32_t array_in) {
                __gl_debug << "call glBindVertexArray " "array: '" << array_in << "'";
                glBindVertexArray(array_in);
                __gl_check_error;
                
              }

          };

          struct gl_delete_vertex_arrays {

              inline static void call(GLsizei n_in, ::std::uint32_t const* arrays_in) {
                __gl_debug << "call glDeleteVertexArrays " "n: '" << n_in << "'" ", " "arrays: '" << arrays_in << "'";
                glDeleteVertexArrays(n_in, arrays_in);
                __gl_check_error;
                
              }

          };

          struct gl_gen_vertex_arrays {

              inline static void call(GLsizei n_in, ::std::uint32_t* arrays_in) {
                __gl_debug << "call glGenVertexArrays " "n: '" << n_in << "'" ", " "arrays: '" << arrays_in << "'";
                glGenVertexArrays(n_in, arrays_in);
                __gl_check_error;
                
              }

          };

          struct gl_is_vertex_array {

              inline static GLboolean call(::std::uint32_t array_in) {
                __gl_debug << "call glIsVertexArray " "array: '" << array_in << "'";
                GLboolean out = glIsVertexArray(array_in);
                __gl_check_error;
                return out;
              }

          };

        } // namespace fnc
      } // namespace vertex_array_object
      namespace vertex_attrib_64bit {
        namespace fnc {
          struct gl_get_vertex_attrib_large {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& pname_in, double* params_in) {
                __gl_debug << "call glGetVertexAttribLdv " "index: '" << index_in << "'" ", " "pname: '" << pname_in << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribLdv(index_in, ::std::uint32_t(pname_in), params_in);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(::std::uint32_t index_in, double* params_in) {
                __gl_debug << "call glGetVertexAttribLdv " "index: '" << index_in << "'" ", " "pname: '" << pname_t::name::value << "'" ", " "params: '" << params_in << "'";
                glGetVertexAttribLdv(index_in, pname_t::value, params_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_1_large {

              inline static void call(::std::uint32_t index_in, double x_in) {
                __gl_debug << "call glVertexAttribL1d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'";
                glVertexAttribL1d(index_in, x_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttribL1dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribL1dv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_2_large {

              inline static void call(::std::uint32_t index_in, double x_in, double y_in) {
                __gl_debug << "call glVertexAttribL2d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'";
                glVertexAttribL2d(index_in, x_in, y_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttribL2dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribL2dv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_3_large {

              inline static void call(::std::uint32_t index_in, double x_in, double y_in, double z_in) {
                __gl_debug << "call glVertexAttribL3d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'";
                glVertexAttribL3d(index_in, x_in, y_in, z_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttribL3dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribL3dv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_4_large {

              inline static void call(::std::uint32_t index_in, double x_in, double y_in, double z_in, double w_in) {
                __gl_debug << "call glVertexAttribL4d " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "z: '" << z_in << "'" ", " "w: '" << w_in << "'";
                glVertexAttribL4d(index_in, x_in, y_in, z_in, w_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, double const* v_in) {
                __gl_debug << "call glVertexAttribL4dv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glVertexAttribL4dv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_large_pointer_integer {

              inline static void call(::std::uint32_t index_in, ::std::int32_t size_in, const ::gtulu::internal::constant::gl_constant_base& type_in, GLsizei stride_in, void const* pointer_in) {
                __gl_debug << "call glVertexAttribLPointer " "index: '" << index_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_in << "'" ", " "stride: '" << stride_in << "'" ", " "pointer: '" << pointer_in << "'";
                glVertexAttribLPointer(index_in, size_in, ::std::uint32_t(type_in), stride_in, pointer_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, ::std::int32_t size_in, GLsizei stride_in, void const* pointer_in) {
                __gl_debug << "call glVertexAttribLPointer " "index: '" << index_in << "'" ", " "size: '" << size_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "stride: '" << stride_in << "'" ", " "pointer: '" << pointer_in << "'";
                glVertexAttribLPointer(index_in, size_in, type_t::value, stride_in, pointer_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace vertex_attrib_64bit
      namespace vertex_buffer_object {
        namespace fnc {
        } // namespace fnc
      } // namespace vertex_buffer_object
      namespace vertex_type_2_10_10_10_rev {
        namespace fnc {
          struct gl_color_3_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t color_in) {
                __gl_debug << "call glColorP3ui " "type: '" << type_in << "'" ", " "color: '" << color_in << "'";
                glColorP3ui(::std::uint32_t(type_in), color_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t color_in) {
                __gl_debug << "call glColorP3ui " "type: '" << type_t::name::value << "'" ", " "color: '" << color_in << "'";
                glColorP3ui(type_t::value, color_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* color_in) {
                __gl_debug << "call glColorP3uiv " "type: '" << type_in << "'" ", " "color: '" << color_in << "'";
                glColorP3uiv(::std::uint32_t(type_in), color_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* color_in) {
                __gl_debug << "call glColorP3uiv " "type: '" << type_t::name::value << "'" ", " "color: '" << color_in << "'";
                glColorP3uiv(type_t::value, color_in);
                __gl_check_error;
                
              }

          };

          struct gl_color_4_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t color_in) {
                __gl_debug << "call glColorP4ui " "type: '" << type_in << "'" ", " "color: '" << color_in << "'";
                glColorP4ui(::std::uint32_t(type_in), color_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t color_in) {
                __gl_debug << "call glColorP4ui " "type: '" << type_t::name::value << "'" ", " "color: '" << color_in << "'";
                glColorP4ui(type_t::value, color_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* color_in) {
                __gl_debug << "call glColorP4uiv " "type: '" << type_in << "'" ", " "color: '" << color_in << "'";
                glColorP4uiv(::std::uint32_t(type_in), color_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* color_in) {
                __gl_debug << "call glColorP4uiv " "type: '" << type_t::name::value << "'" ", " "color: '" << color_in << "'";
                glColorP4uiv(type_t::value, color_in);
                __gl_check_error;
                
              }

          };

          struct gl_multi_tex_coord_1_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP1ui " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP1ui(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP1ui " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP1ui(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP1uiv " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP1uiv(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP1uiv " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP1uiv(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_multi_tex_coord_2_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP2ui " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP2ui(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP2ui " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP2ui(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP2uiv " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP2uiv(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP2uiv " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP2uiv(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_multi_tex_coord_3_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP3ui " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP3ui(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP3ui " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP3ui(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP3uiv " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP3uiv(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP3uiv " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP3uiv(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_multi_tex_coord_4_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP4ui " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP4ui(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glMultiTexCoordP4ui " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP4ui(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& texture_in, const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP4uiv " "texture: '" << texture_in << "'" ", " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP4uiv(::std::uint32_t(texture_in), ::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glMultiTexCoordP4uiv " "texture: '" << texture_t::name::value << "'" ", " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glMultiTexCoordP4uiv(texture_t::value, type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_normal_3_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glNormalP3ui " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glNormalP3ui(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glNormalP3ui " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glNormalP3ui(type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glNormalP3uiv " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glNormalP3uiv(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glNormalP3uiv " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glNormalP3uiv(type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_secondary_color_3_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t color_in) {
                __gl_debug << "call glSecondaryColorP3ui " "type: '" << type_in << "'" ", " "color: '" << color_in << "'";
                glSecondaryColorP3ui(::std::uint32_t(type_in), color_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t color_in) {
                __gl_debug << "call glSecondaryColorP3ui " "type: '" << type_t::name::value << "'" ", " "color: '" << color_in << "'";
                glSecondaryColorP3ui(type_t::value, color_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* color_in) {
                __gl_debug << "call glSecondaryColorP3uiv " "type: '" << type_in << "'" ", " "color: '" << color_in << "'";
                glSecondaryColorP3uiv(::std::uint32_t(type_in), color_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* color_in) {
                __gl_debug << "call glSecondaryColorP3uiv " "type: '" << type_t::name::value << "'" ", " "color: '" << color_in << "'";
                glSecondaryColorP3uiv(type_t::value, color_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_coord_1_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP1ui " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP1ui(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP1ui " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP1ui(type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP1uiv " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP1uiv(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP1uiv " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP1uiv(type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_coord_2_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP2ui " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP2ui(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP2ui " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP2ui(type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP2uiv " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP2uiv(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP2uiv " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP2uiv(type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_coord_3_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP3ui " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP3ui(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP3ui " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP3ui(type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP3uiv " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP3uiv(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP3uiv " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP3uiv(type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_tex_coord_4_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP4ui " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP4ui(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t coords_in) {
                __gl_debug << "call glTexCoordP4ui " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP4ui(type_t::value, coords_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP4uiv " "type: '" << type_in << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP4uiv(::std::uint32_t(type_in), coords_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* coords_in) {
                __gl_debug << "call glTexCoordP4uiv " "type: '" << type_t::name::value << "'" ", " "coords: '" << coords_in << "'";
                glTexCoordP4uiv(type_t::value, coords_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_2_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexP2ui " "type: '" << type_in << "'" ", " "value: '" << value_in << "'";
                glVertexP2ui(::std::uint32_t(type_in), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t value_in) {
                __gl_debug << "call glVertexP2ui " "type: '" << type_t::name::value << "'" ", " "value: '" << value_in << "'";
                glVertexP2ui(type_t::value, value_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexP2uiv " "type: '" << type_in << "'" ", " "value: '" << value_in << "'";
                glVertexP2uiv(::std::uint32_t(type_in), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexP2uiv " "type: '" << type_t::name::value << "'" ", " "value: '" << value_in << "'";
                glVertexP2uiv(type_t::value, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_3_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexP3ui " "type: '" << type_in << "'" ", " "value: '" << value_in << "'";
                glVertexP3ui(::std::uint32_t(type_in), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t value_in) {
                __gl_debug << "call glVertexP3ui " "type: '" << type_t::name::value << "'" ", " "value: '" << value_in << "'";
                glVertexP3ui(type_t::value, value_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexP3uiv " "type: '" << type_in << "'" ", " "value: '" << value_in << "'";
                glVertexP3uiv(::std::uint32_t(type_in), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexP3uiv " "type: '" << type_t::name::value << "'" ", " "value: '" << value_in << "'";
                glVertexP3uiv(type_t::value, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_4_packed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexP4ui " "type: '" << type_in << "'" ", " "value: '" << value_in << "'";
                glVertexP4ui(::std::uint32_t(type_in), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t value_in) {
                __gl_debug << "call glVertexP4ui " "type: '" << type_t::name::value << "'" ", " "value: '" << value_in << "'";
                glVertexP4ui(type_t::value, value_in);
                __gl_check_error;
                
              }

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& type_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexP4uiv " "type: '" << type_in << "'" ", " "value: '" << value_in << "'";
                glVertexP4uiv(::std::uint32_t(type_in), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexP4uiv " "type: '" << type_t::name::value << "'" ", " "value: '" << value_in << "'";
                glVertexP4uiv(type_t::value, value_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_1_packed {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP1ui " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP1ui(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP1ui " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP1ui(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP1uiv " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP1uiv(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP1uiv " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP1uiv(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_2_packed {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP2ui " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP2ui(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP2ui " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP2ui(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP2uiv " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP2uiv(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP2uiv " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP2uiv(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_3_packed {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP3ui " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP3ui(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP3ui " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP3ui(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP3uiv " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP3uiv(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP3uiv " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP3uiv(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

          struct gl_vertex_attrib_4_packed {

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP4ui " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP4ui(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t value_in) {
                __gl_debug << "call glVertexAttribP4ui " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP4ui(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, const ::gtulu::internal::constant::gl_constant_base& type_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP4uiv " "index: '" << index_in << "'" ", " "type: '" << type_in << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP4uiv(index_in, ::std::uint32_t(type_in), (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(::std::uint32_t index_in, bool normalized_in, ::std::uint32_t const* value_in) {
                __gl_debug << "call glVertexAttribP4uiv " "index: '" << index_in << "'" ", " "type: '" << type_t::name::value << "'" ", " "normalized: '" << normalized_in << "'" ", " "value: '" << value_in << "'";
                glVertexAttribP4uiv(index_in, type_t::value, (normalized_in ? 1 : 0), value_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace vertex_type_2_10_10_10_rev
      namespace viewport_array {
        namespace fnc {
          struct gl_depth_range_array {

              inline static void call(::std::uint32_t first_in, GLsizei count_in, GLclampd const* v_in) {
                __gl_debug << "call glDepthRangeArrayv " "first: '" << first_in << "'" ", " "count: '" << count_in << "'" ", " "v: '" << v_in << "'";
                glDepthRangeArrayv(first_in, count_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_depth_range_indexed {

              inline static void call(::std::uint32_t index_in, GLclampd n_in, GLclampd f_in) {
                __gl_debug << "call glDepthRangeIndexed " "index: '" << index_in << "'" ", " "n: '" << n_in << "'" ", " "f: '" << f_in << "'";
                glDepthRangeIndexed(index_in, n_in, f_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_double_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, double* data_in) {
                __gl_debug << "call glGetDoublei_v " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetDoublei_v(::std::uint32_t(target_in), index_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, double* data_in) {
                __gl_debug << "call glGetDoublei_v " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetDoublei_v(target_t::value, index_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_get_float_indexed {

              inline static void call(const ::gtulu::internal::constant::gl_constant_base& target_in, ::std::uint32_t index_in, float* data_in) {
                __gl_debug << "call glGetFloati_v " "target: '" << target_in << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetFloati_v(::std::uint32_t(target_in), index_in, data_in);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(::std::uint32_t index_in, float* data_in) {
                __gl_debug << "call glGetFloati_v " "target: '" << target_t::name::value << "'" ", " "index: '" << index_in << "'" ", " "data: '" << data_in << "'";
                glGetFloati_v(target_t::value, index_in, data_in);
                __gl_check_error;
                
              }

          };

          struct gl_scissor_array {

              inline static void call(::std::uint32_t first_in, GLsizei count_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glScissorArrayv " "first: '" << first_in << "'" ", " "count: '" << count_in << "'" ", " "v: '" << v_in << "'";
                glScissorArrayv(first_in, count_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_scissor_indexed {

              inline static void call(::std::uint32_t index_in, ::std::int32_t left_in, ::std::int32_t bottom_in, GLsizei width_in, GLsizei height_in) {
                __gl_debug << "call glScissorIndexed " "index: '" << index_in << "'" ", " "left: '" << left_in << "'" ", " "bottom: '" << bottom_in << "'" ", " "width: '" << width_in << "'" ", " "height: '" << height_in << "'";
                glScissorIndexed(index_in, left_in, bottom_in, width_in, height_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, ::std::int32_t const* v_in) {
                __gl_debug << "call glScissorIndexedv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glScissorIndexedv(index_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_viewport_array {

              inline static void call(::std::uint32_t first_in, GLsizei count_in, float const* v_in) {
                __gl_debug << "call glViewportArrayv " "first: '" << first_in << "'" ", " "count: '" << count_in << "'" ", " "v: '" << v_in << "'";
                glViewportArrayv(first_in, count_in, v_in);
                __gl_check_error;
                
              }

          };

          struct gl_viewport_indexed {

              inline static void call(::std::uint32_t index_in, float x_in, float y_in, float w_in, float h_in) {
                __gl_debug << "call glViewportIndexedf " "index: '" << index_in << "'" ", " "x: '" << x_in << "'" ", " "y: '" << y_in << "'" ", " "w: '" << w_in << "'" ", " "h: '" << h_in << "'";
                glViewportIndexedf(index_in, x_in, y_in, w_in, h_in);
                __gl_check_error;
                
              }

              inline static void call(::std::uint32_t index_in, float const* v_in) {
                __gl_debug << "call glViewportIndexedfv " "index: '" << index_in << "'" ", " "v: '" << v_in << "'";
                glViewportIndexedfv(index_in, v_in);
                __gl_check_error;
                
              }

          };

        } // namespace fnc
      } // namespace viewport_array
      } // namespace arb
      namespace ext {
      namespace timer_query {
        namespace fnc {
        } // namespace fnc
      } // namespace timer_query
      } // namespace ext
      namespace nv {
      namespace half_float {
        namespace fnc {
        } // namespace fnc
      } // namespace half_float
      namespace vdpau_interop {
        namespace fnc {
        } // namespace fnc
      } // namespace vdpau_interop
      } // namespace nv
      namespace amd {
      namespace debug_output {
        namespace fnc {
        } // namespace fnc
      } // namespace debug_output
      } // namespace amd
      namespace other {
      } // namespace other

    } // namespace generated
    
  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_ */


