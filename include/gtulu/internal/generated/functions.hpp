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
 
#ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
# error "gtulu/internal/generated/functions.hpp should not be included directly, please include gtulu/internal/functions.hpp instead."
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */

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
          /**
           */
          struct gl_blend_func {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& sfactor, ::gtulu::internal::constant::gl_constant_base const& dfactor) {
              __gl_debug << "call glBlendFunc "  "sfactor: '" << sfactor << "'"  ", "  "dfactor: '" << dfactor << "'" ;
              glBlendFunc(::std::uint32_t(sfactor), ::std::uint32_t(dfactor));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SfactorConstant, typename DfactorConstant >
            inline static void call() {
              __gl_debug << "call glBlendFunc "  "sfactor: '" << SfactorConstant::name() << "'"  ", "  "dfactor: '" << DfactorConstant::name() << "'" ;
              glBlendFunc(SfactorConstant::value, DfactorConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& src, ::gtulu::internal::constant::gl_constant_base const& dst) {
              __gl_debug << "call glBlendFunci "  "buf: '" << buf << "'"  ", "  "src: '" << src << "'"  ", "  "dst: '" << dst << "'" ;
              glBlendFunci(buf, ::std::uint32_t(src), ::std::uint32_t(dst));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SrcConstant, typename DstConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendFunci "  "buf: '" << buf << "'"  ", "  "src: '" << SrcConstant::name() << "'"  ", "  "dst: '" << DstConstant::name() << "'" ;
              glBlendFunci(buf, SrcConstant::value, DstConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_clear {
            /**
             */
            inline static void call(GLbitfield mask) {
              __gl_debug << "call glClear "  "mask: '" << mask << "'" ;
              glClear(mask);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_clear_color {
            /**
             */
            inline static void call(float red, float green, float blue, float alpha) {
              __gl_debug << "call glClearColor "  "red: '" << red << "'"  ", "  "green: '" << green << "'"  ", "  "blue: '" << blue << "'"  ", "  "alpha: '" << alpha << "'" ;
              glClearColor(red, green, blue, alpha);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_clear_depth {
            /**
             */
            inline static void call(GLclampd depth) {
              __gl_debug << "call glClearDepth "  "depth: '" << depth << "'" ;
              glClearDepth(depth);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(float d) {
              __gl_debug << "call glClearDepthf "  "d: '" << d << "'" ;
              glClearDepthf(d);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_clear_stencil {
            /**
             */
            inline static void call(::std::int32_t s) {
              __gl_debug << "call glClearStencil "  "s: '" << s << "'" ;
              glClearStencil(s);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_color_mask {
            /**
             */
            inline static void call(bool red, bool green, bool blue, bool alpha) {
              __gl_debug << "call glColorMask "  "red: '" << red << "'"  ", "  "green: '" << green << "'"  ", "  "blue: '" << blue << "'"  ", "  "alpha: '" << alpha << "'" ;
              glColorMask((red ? 1 : 0), (green ? 1 : 0), (blue ? 1 : 0), (alpha ? 1 : 0));
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, bool r, bool g, bool b, bool a) {
              __gl_debug << "call glColorMaski "  "index: '" << index << "'"  ", "  "r: '" << r << "'"  ", "  "g: '" << g << "'"  ", "  "b: '" << b << "'"  ", "  "a: '" << a << "'" ;
              glColorMaski(index, (r ? 1 : 0), (g ? 1 : 0), (b ? 1 : 0), (a ? 1 : 0));
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_cull_face {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glCullFace "  "mode: '" << mode << "'" ;
              glCullFace(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glCullFace "  "mode: '" << ModeConstant::name() << "'" ;
              glCullFace(ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_depth_func {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& func) {
              __gl_debug << "call glDepthFunc "  "func: '" << func << "'" ;
              glDepthFunc(::std::uint32_t(func));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FuncConstant >
            inline static void call() {
              __gl_debug << "call glDepthFunc "  "func: '" << FuncConstant::name() << "'" ;
              glDepthFunc(FuncConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_depth_mask {
            /**
             */
            inline static void call(bool flag) {
              __gl_debug << "call glDepthMask "  "flag: '" << flag << "'" ;
              glDepthMask((flag ? 1 : 0));
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_depth_range {
            /**
             */
            inline static void call(GLclampd near, GLclampd far) {
              __gl_debug << "call glDepthRange "  "near: '" << near << "'"  ", "  "far: '" << far << "'" ;
              glDepthRange(near, far);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(float n, float f) {
              __gl_debug << "call glDepthRangef "  "n: '" << n << "'"  ", "  "f: '" << f << "'" ;
              glDepthRangef(n, f);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_disable {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& cap) {
              __gl_debug << "call glDisable "  "cap: '" << cap << "'" ;
              glDisable(::std::uint32_t(cap));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename CapConstant >
            inline static void call() {
              __gl_debug << "call glDisable "  "cap: '" << CapConstant::name() << "'" ;
              glDisable(CapConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index) {
              __gl_debug << "call glDisablei "  "target: '" << target << "'"  ", "  "index: '" << index << "'" ;
              glDisablei(::std::uint32_t(target), index);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glDisablei "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              glDisablei(TargetConstant::value, index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_buffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glDrawBuffer "  "mode: '" << mode << "'" ;
              glDrawBuffer(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glDrawBuffer "  "mode: '" << ModeConstant::name() << "'" ;
              glDrawBuffer(ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_enable {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& cap) {
              __gl_debug << "call glEnable "  "cap: '" << cap << "'" ;
              glEnable(::std::uint32_t(cap));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename CapConstant >
            inline static void call() {
              __gl_debug << "call glEnable "  "cap: '" << CapConstant::name() << "'" ;
              glEnable(CapConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index) {
              __gl_debug << "call glEnablei "  "target: '" << target << "'"  ", "  "index: '" << index << "'" ;
              glEnablei(::std::uint32_t(target), index);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glEnablei "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              glEnablei(TargetConstant::value, index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_finish {
            /**
             */
            inline static void call() {
              __gl_debug << "call glFinish " "";
              glFinish();
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_flush {
            /**
             */
            inline static void call() {
              __gl_debug << "call glFlush " "";
              glFlush();
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_front_face {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glFrontFace "  "mode: '" << mode << "'" ;
              glFrontFace(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glFrontFace "  "mode: '" << ModeConstant::name() << "'" ;
              glFrontFace(ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_boolean {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, GLboolean* params) {
              __gl_debug << "call glGetBooleanv "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetBooleanv(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(GLboolean* params) {
              __gl_debug << "call glGetBooleanv "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetBooleanv(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_double {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, double* params) {
              __gl_debug << "call glGetDoublev "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetDoublev(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(double* params) {
              __gl_debug << "call glGetDoublev "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetDoublev(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_error {
            /**
             */
            inline static GLenum call() {
              __gl_debug << "call glGetError " "";
              GLenum out = glGetError();
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_float {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, float* params) {
              __gl_debug << "call glGetFloatv "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetFloatv(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(float* params) {
              __gl_debug << "call glGetFloatv "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetFloatv(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_integer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetIntegerv "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetIntegerv(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetIntegerv "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetIntegerv(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, GLint64* params) {
              __gl_debug << "call glGetInteger64v "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetInteger64v(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(GLint64* params) {
              __gl_debug << "call glGetInteger64v "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetInteger64v(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_string {
            /**
             */
            inline static GLubyte const* call(::gtulu::internal::constant::gl_constant_base const& name) {
              __gl_debug << "call glGetString "  "name: '" << name << "'" ;
              GLubyte const* out = glGetString(::std::uint32_t(name));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename NameConstant >
            inline static GLubyte const* call() {
              __gl_debug << "call glGetString "  "name: '" << NameConstant::name() << "'" ;
              GLubyte const* out = glGetString(NameConstant::value);
              __gl_check_error();
              return out;
            }
          
            /**
             */
            inline static GLubyte const* call(::gtulu::internal::constant::gl_constant_base const& name, ::std::uint32_t index) {
              __gl_debug << "call glGetStringi "  "name: '" << name << "'"  ", "  "index: '" << index << "'" ;
              GLubyte const* out = glGetStringi(::std::uint32_t(name), index);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename NameConstant >
            inline static GLubyte const* call(::std::uint32_t index) {
              __gl_debug << "call glGetStringi "  "name: '" << NameConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              GLubyte const* out = glGetStringi(NameConstant::value, index);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_tex_image {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void* pixels) {
              __gl_debug << "call glGetTexImage "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glGetTexImage(::std::uint32_t(target), level, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, void* pixels) {
              __gl_debug << "call glGetTexImage "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glGetTexImage(TargetConstant::value, level, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_tex_level_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& pname, float* params) {
              __gl_debug << "call glGetTexLevelParameterfv "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetTexLevelParameterfv(::std::uint32_t(target), level, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t level, float* params) {
              __gl_debug << "call glGetTexLevelParameterfv "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetTexLevelParameterfv(TargetConstant::value, level, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetTexLevelParameteriv "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetTexLevelParameteriv(::std::uint32_t(target), level, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t level, ::std::int32_t* params) {
              __gl_debug << "call glGetTexLevelParameteriv "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetTexLevelParameteriv(TargetConstant::value, level, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_tex_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, float* params) {
              __gl_debug << "call glGetTexParameterfv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameterfv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(float* params) {
              __gl_debug << "call glGetTexParameterfv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameterfv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetTexParameteriv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameteriv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetTexParameteriv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameteriv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_hint {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glHint "  "target: '" << target << "'"  ", "  "mode: '" << mode << "'" ;
              glHint(::std::uint32_t(target), ::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glHint "  "target: '" << TargetConstant::name() << "'"  ", "  "mode: '" << ModeConstant::name() << "'" ;
              glHint(TargetConstant::value, ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_enabled {
            /**
             */
            inline static GLboolean call(::gtulu::internal::constant::gl_constant_base const& cap) {
              __gl_debug << "call glIsEnabled "  "cap: '" << cap << "'" ;
              GLboolean out = glIsEnabled(::std::uint32_t(cap));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename CapConstant >
            inline static GLboolean call() {
              __gl_debug << "call glIsEnabled "  "cap: '" << CapConstant::name() << "'" ;
              GLboolean out = glIsEnabled(CapConstant::value);
              __gl_check_error();
              return out;
            }
          
            /**
             */
            inline static GLboolean call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index) {
              __gl_debug << "call glIsEnabledi "  "target: '" << target << "'"  ", "  "index: '" << index << "'" ;
              GLboolean out = glIsEnabledi(::std::uint32_t(target), index);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static GLboolean call(::std::uint32_t index) {
              __gl_debug << "call glIsEnabledi "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              GLboolean out = glIsEnabledi(TargetConstant::value, index);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_line_width {
            /**
             */
            inline static void call(float width) {
              __gl_debug << "call glLineWidth "  "width: '" << width << "'" ;
              glLineWidth(width);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_logic_op {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& opcode) {
              __gl_debug << "call glLogicOp "  "opcode: '" << opcode << "'" ;
              glLogicOp(::std::uint32_t(opcode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename OpcodeConstant >
            inline static void call() {
              __gl_debug << "call glLogicOp "  "opcode: '" << OpcodeConstant::name() << "'" ;
              glLogicOp(OpcodeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_pixel_store {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, float param) {
              __gl_debug << "call glPixelStoref "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glPixelStoref(::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(float param) {
              __gl_debug << "call glPixelStoref "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glPixelStoref(PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t param) {
              __gl_debug << "call glPixelStorei "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glPixelStorei(::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::int32_t param) {
              __gl_debug << "call glPixelStorei "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glPixelStorei(PnameConstant::value, param);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_point_size {
            /**
             */
            inline static void call(float size) {
              __gl_debug << "call glPointSize "  "size: '" << size << "'" ;
              glPointSize(size);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_polygon_mode {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& face, ::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glPolygonMode "  "face: '" << face << "'"  ", "  "mode: '" << mode << "'" ;
              glPolygonMode(::std::uint32_t(face), ::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FaceConstant, typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glPolygonMode "  "face: '" << FaceConstant::name() << "'"  ", "  "mode: '" << ModeConstant::name() << "'" ;
              glPolygonMode(FaceConstant::value, ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_read_buffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glReadBuffer "  "mode: '" << mode << "'" ;
              glReadBuffer(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glReadBuffer "  "mode: '" << ModeConstant::name() << "'" ;
              glReadBuffer(ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_read_pixels {
            /**
             */
            inline static void call(::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void* pixels) {
              __gl_debug << "call glReadPixels "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glReadPixels(x, y, width, height, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height, void* pixels) {
              __gl_debug << "call glReadPixels "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glReadPixels(x, y, width, height, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_scissor {
            /**
             */
            inline static void call(::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height) {
              __gl_debug << "call glScissor "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glScissor(x, y, width, height);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_stencil_func {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& func, ::std::int32_t ref, ::std::uint32_t mask) {
              __gl_debug << "call glStencilFunc "  "func: '" << func << "'"  ", "  "ref: '" << ref << "'"  ", "  "mask: '" << mask << "'" ;
              glStencilFunc(::std::uint32_t(func), ref, mask);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FuncConstant >
            inline static void call(::std::int32_t ref, ::std::uint32_t mask) {
              __gl_debug << "call glStencilFunc "  "func: '" << FuncConstant::name() << "'"  ", "  "ref: '" << ref << "'"  ", "  "mask: '" << mask << "'" ;
              glStencilFunc(FuncConstant::value, ref, mask);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_stencil_mask {
            /**
             */
            inline static void call(::std::uint32_t mask) {
              __gl_debug << "call glStencilMask "  "mask: '" << mask << "'" ;
              glStencilMask(mask);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_stencil_op {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& fail, ::gtulu::internal::constant::gl_constant_base const& zfail, ::gtulu::internal::constant::gl_constant_base const& zpass) {
              __gl_debug << "call glStencilOp "  "fail: '" << fail << "'"  ", "  "zfail: '" << zfail << "'"  ", "  "zpass: '" << zpass << "'" ;
              glStencilOp(::std::uint32_t(fail), ::std::uint32_t(zfail), ::std::uint32_t(zpass));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FailConstant, typename ZfailConstant, typename ZpassConstant >
            inline static void call() {
              __gl_debug << "call glStencilOp "  "fail: '" << FailConstant::name() << "'"  ", "  "zfail: '" << ZfailConstant::name() << "'"  ", "  "zpass: '" << ZpassConstant::name() << "'" ;
              glStencilOp(FailConstant::value, ZfailConstant::value, ZpassConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_image_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t internalformat, GLsizei width, ::std::int32_t border, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void const* pixels) {
              __gl_debug << "call glTexImage1D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "border: '" << border << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexImage1D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), width, border, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, GLsizei width, ::std::int32_t border, void const* pixels) {
              __gl_debug << "call glTexImage1D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "border: '" << border << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexImage1D(TargetConstant::value, level, InternalformatConstant::value, width, border, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_image_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t internalformat, GLsizei width, GLsizei height, ::std::int32_t border, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void const* pixels) {
              __gl_debug << "call glTexImage2D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "border: '" << border << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexImage2D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), width, height, border, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, GLsizei width, GLsizei height, ::std::int32_t border, void const* pixels) {
              __gl_debug << "call glTexImage2D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "border: '" << border << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexImage2D(TargetConstant::value, level, InternalformatConstant::value, width, height, border, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, float param) {
              __gl_debug << "call glTexParameterf "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glTexParameterf(::std::uint32_t(target), ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(float param) {
              __gl_debug << "call glTexParameterf "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glTexParameterf(TargetConstant::value, PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, float const* params) {
              __gl_debug << "call glTexParameterfv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glTexParameterfv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(float const* params) {
              __gl_debug << "call glTexParameterfv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glTexParameterfv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t param) {
              __gl_debug << "call glTexParameteri "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glTexParameteri(::std::uint32_t(target), ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t param) {
              __gl_debug << "call glTexParameteri "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glTexParameteri(TargetConstant::value, PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t const* params) {
              __gl_debug << "call glTexParameteriv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glTexParameteriv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t const* params) {
              __gl_debug << "call glTexParameteriv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glTexParameteriv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_viewport {
            /**
             */
            inline static void call(::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height) {
              __gl_debug << "call glViewport "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glViewport(x, y, width, height);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v1_0
      namespace v1_1 {
        namespace fnc {
          /**
           */
          struct gl_bind_texture {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t texture) {
              __gl_debug << "call glBindTexture "  "target: '" << target << "'"  ", "  "texture: '" << texture << "'" ;
              glBindTexture(::std::uint32_t(target), texture);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t texture) {
              __gl_debug << "call glBindTexture "  "target: '" << TargetConstant::name() << "'"  ", "  "texture: '" << texture << "'" ;
              glBindTexture(TargetConstant::value, texture);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_copy_tex_image_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& internalformat, ::std::int32_t x, ::std::int32_t y, GLsizei width, ::std::int32_t border) {
              __gl_debug << "call glCopyTexImage1D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "border: '" << border << "'" ;
              glCopyTexImage1D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), x, y, width, border);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::int32_t level, ::std::int32_t x, ::std::int32_t y, GLsizei width, ::std::int32_t border) {
              __gl_debug << "call glCopyTexImage1D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "border: '" << border << "'" ;
              glCopyTexImage1D(TargetConstant::value, level, InternalformatConstant::value, x, y, width, border);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_copy_tex_image_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& internalformat, ::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height, ::std::int32_t border) {
              __gl_debug << "call glCopyTexImage2D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "border: '" << border << "'" ;
              glCopyTexImage2D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), x, y, width, height, border);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::int32_t level, ::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height, ::std::int32_t border) {
              __gl_debug << "call glCopyTexImage2D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "border: '" << border << "'" ;
              glCopyTexImage2D(TargetConstant::value, level, InternalformatConstant::value, x, y, width, height, border);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_copy_tex_sub_image_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t x, ::std::int32_t y, GLsizei width) {
              __gl_debug << "call glCopyTexSubImage1D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'" ;
              glCopyTexSubImage1D(::std::uint32_t(target), level, xoffset, x, y, width);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t x, ::std::int32_t y, GLsizei width) {
              __gl_debug << "call glCopyTexSubImage1D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'" ;
              glCopyTexSubImage1D(TargetConstant::value, level, xoffset, x, y, width);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_copy_tex_sub_image_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height) {
              __gl_debug << "call glCopyTexSubImage2D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glCopyTexSubImage2D(::std::uint32_t(target), level, xoffset, yoffset, x, y, width, height);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height) {
              __gl_debug << "call glCopyTexSubImage2D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glCopyTexSubImage2D(TargetConstant::value, level, xoffset, yoffset, x, y, width, height);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_textures {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* textures) {
              __gl_debug << "call glDeleteTextures "  "n: '" << n << "'"  ", "  "textures: '" << textures << "'" ;
              glDeleteTextures(n, textures);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_arrays {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::int32_t first, GLsizei count) {
              __gl_debug << "call glDrawArrays "  "mode: '" << mode << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'" ;
              glDrawArrays(::std::uint32_t(mode), first, count);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::int32_t first, GLsizei count) {
              __gl_debug << "call glDrawArrays "  "mode: '" << ModeConstant::name() << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'" ;
              glDrawArrays(ModeConstant::value, first, count);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_elements {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices) {
              __gl_debug << "call glDrawElements "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'" ;
              glDrawElements(::std::uint32_t(mode), count, ::std::uint32_t(type), indices);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei count, void const* indices) {
              __gl_debug << "call glDrawElements "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'" ;
              glDrawElements(ModeConstant::value, count, TypeConstant::value, indices);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_textures {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* textures) {
              __gl_debug << "call glGenTextures "  "n: '" << n << "'"  ", "  "textures: '" << textures << "'" ;
              glGenTextures(n, textures);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_pointer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, void** params) {
              __gl_debug << "call glGetPointerv "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetPointerv(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(void** params) {
              __gl_debug << "call glGetPointerv "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetPointerv(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_texture {
            /**
             */
            inline static GLboolean call(::std::uint32_t texture) {
              __gl_debug << "call glIsTexture "  "texture: '" << texture << "'" ;
              GLboolean out = glIsTexture(texture);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_polygon_offset {
            /**
             */
            inline static void call(float factor, float units) {
              __gl_debug << "call glPolygonOffset "  "factor: '" << factor << "'"  ", "  "units: '" << units << "'" ;
              glPolygonOffset(factor, units);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_sub_image_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, GLsizei width, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void const* pixels) {
              __gl_debug << "call glTexSubImage1D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "width: '" << width << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexSubImage1D(::std::uint32_t(target), level, xoffset, width, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, GLsizei width, void const* pixels) {
              __gl_debug << "call glTexSubImage1D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "width: '" << width << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexSubImage1D(TargetConstant::value, level, xoffset, width, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_sub_image_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, GLsizei width, GLsizei height, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void const* pixels) {
              __gl_debug << "call glTexSubImage2D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexSubImage2D(::std::uint32_t(target), level, xoffset, yoffset, width, height, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, GLsizei width, GLsizei height, void const* pixels) {
              __gl_debug << "call glTexSubImage2D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexSubImage2D(TargetConstant::value, level, xoffset, yoffset, width, height, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v1_1
      namespace v1_2 {
        namespace fnc {
          /**
           */
          struct gl_blend_color {
            /**
             */
            inline static void call(float red, float green, float blue, float alpha) {
              __gl_debug << "call glBlendColor "  "red: '" << red << "'"  ", "  "green: '" << green << "'"  ", "  "blue: '" << blue << "'"  ", "  "alpha: '" << alpha << "'" ;
              glBlendColor(red, green, blue, alpha);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_equation {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glBlendEquation "  "mode: '" << mode << "'" ;
              glBlendEquation(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glBlendEquation "  "mode: '" << ModeConstant::name() << "'" ;
              glBlendEquation(ModeConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glBlendEquationi "  "buf: '" << buf << "'"  ", "  "mode: '" << mode << "'" ;
              glBlendEquationi(buf, ::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendEquationi "  "buf: '" << buf << "'"  ", "  "mode: '" << ModeConstant::name() << "'" ;
              glBlendEquationi(buf, ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_copy_tex_sub_image_3d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t zoffset, ::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height) {
              __gl_debug << "call glCopyTexSubImage3D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "zoffset: '" << zoffset << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glCopyTexSubImage3D(::std::uint32_t(target), level, xoffset, yoffset, zoffset, x, y, width, height);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t zoffset, ::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height) {
              __gl_debug << "call glCopyTexSubImage3D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "zoffset: '" << zoffset << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glCopyTexSubImage3D(TargetConstant::value, level, xoffset, yoffset, zoffset, x, y, width, height);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_range_elements {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::uint32_t start, ::std::uint32_t end, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices) {
              __gl_debug << "call glDrawRangeElements "  "mode: '" << mode << "'"  ", "  "start: '" << start << "'"  ", "  "end: '" << end << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'" ;
              glDrawRangeElements(::std::uint32_t(mode), start, end, count, ::std::uint32_t(type), indices);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(::std::uint32_t start, ::std::uint32_t end, GLsizei count, void const* indices) {
              __gl_debug << "call glDrawRangeElements "  "mode: '" << ModeConstant::name() << "'"  ", "  "start: '" << start << "'"  ", "  "end: '" << end << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'" ;
              glDrawRangeElements(ModeConstant::value, start, end, count, TypeConstant::value, indices);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_image_3d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t internalformat, GLsizei width, GLsizei height, GLsizei depth, ::std::int32_t border, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void const* pixels) {
              __gl_debug << "call glTexImage3D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "border: '" << border << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexImage3D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), width, height, depth, border, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, GLsizei width, GLsizei height, GLsizei depth, ::std::int32_t border, void const* pixels) {
              __gl_debug << "call glTexImage3D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "border: '" << border << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexImage3D(TargetConstant::value, level, InternalformatConstant::value, width, height, depth, border, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_sub_image_3d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t zoffset, GLsizei width, GLsizei height, GLsizei depth, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, void const* pixels) {
              __gl_debug << "call glTexSubImage3D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "zoffset: '" << zoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexSubImage3D(::std::uint32_t(target), level, xoffset, yoffset, zoffset, width, height, depth, ::std::uint32_t(format), ::std::uint32_t(type), pixels);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t zoffset, GLsizei width, GLsizei height, GLsizei depth, void const* pixels) {
              __gl_debug << "call glTexSubImage3D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "zoffset: '" << zoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "pixels: '" << pixels << "'" ;
              glTexSubImage3D(TargetConstant::value, level, xoffset, yoffset, zoffset, width, height, depth, FormatConstant::value, TypeConstant::value, pixels);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v1_2
      namespace v1_3 {
        namespace fnc {
          /**
           */
          struct gl_active_texture {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture) {
              __gl_debug << "call glActiveTexture "  "texture: '" << texture << "'" ;
              glActiveTexture(::std::uint32_t(texture));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant >
            inline static void call() {
              __gl_debug << "call glActiveTexture "  "texture: '" << TextureConstant::name() << "'" ;
              glActiveTexture(TextureConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_compressed_tex_image_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, ::std::int32_t border, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexImage1D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "border: '" << border << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexImage1D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), width, border, imageSize, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::int32_t level, GLsizei width, ::std::int32_t border, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexImage1D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "border: '" << border << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexImage1D(TargetConstant::value, level, InternalformatConstant::value, width, border, imageSize, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_compressed_tex_image_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height, ::std::int32_t border, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexImage2D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "border: '" << border << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexImage2D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), width, height, border, imageSize, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::int32_t level, GLsizei width, GLsizei height, ::std::int32_t border, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexImage2D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "border: '" << border << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexImage2D(TargetConstant::value, level, InternalformatConstant::value, width, height, border, imageSize, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_compressed_tex_image_3d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height, GLsizei depth, ::std::int32_t border, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexImage3D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "border: '" << border << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexImage3D(::std::uint32_t(target), level, ::std::uint32_t(internalformat), width, height, depth, border, imageSize, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::int32_t level, GLsizei width, GLsizei height, GLsizei depth, ::std::int32_t border, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexImage3D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "border: '" << border << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexImage3D(TargetConstant::value, level, InternalformatConstant::value, width, height, depth, border, imageSize, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_compressed_tex_sub_image_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, GLsizei width, ::gtulu::internal::constant::gl_constant_base const& format, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexSubImage1D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "width: '" << width << "'"  ", "  "format: '" << format << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexSubImage1D(::std::uint32_t(target), level, xoffset, width, ::std::uint32_t(format), imageSize, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, GLsizei width, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexSubImage1D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "width: '" << width << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexSubImage1D(TargetConstant::value, level, xoffset, width, FormatConstant::value, imageSize, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_compressed_tex_sub_image_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, GLsizei width, GLsizei height, ::gtulu::internal::constant::gl_constant_base const& format, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexSubImage2D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << format << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexSubImage2D(::std::uint32_t(target), level, xoffset, yoffset, width, height, ::std::uint32_t(format), imageSize, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, GLsizei width, GLsizei height, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexSubImage2D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexSubImage2D(TargetConstant::value, level, xoffset, yoffset, width, height, FormatConstant::value, imageSize, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_compressed_tex_sub_image_3d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t zoffset, GLsizei width, GLsizei height, GLsizei depth, ::gtulu::internal::constant::gl_constant_base const& format, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexSubImage3D "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "zoffset: '" << zoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "format: '" << format << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexSubImage3D(::std::uint32_t(target), level, xoffset, yoffset, zoffset, width, height, depth, ::std::uint32_t(format), imageSize, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant >
            inline static void call(::std::int32_t level, ::std::int32_t xoffset, ::std::int32_t yoffset, ::std::int32_t zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei imageSize, void const* data) {
              __gl_debug << "call glCompressedTexSubImage3D "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "xoffset: '" << xoffset << "'"  ", "  "yoffset: '" << yoffset << "'"  ", "  "zoffset: '" << zoffset << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "imageSize: '" << imageSize << "'"  ", "  "data: '" << data << "'" ;
              glCompressedTexSubImage3D(TargetConstant::value, level, xoffset, yoffset, zoffset, width, height, depth, FormatConstant::value, imageSize, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_compressed_tex_image {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, void* img) {
              __gl_debug << "call glGetCompressedTexImage "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "img: '" << img << "'" ;
              glGetCompressedTexImage(::std::uint32_t(target), level, img);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::int32_t level, void* img) {
              __gl_debug << "call glGetCompressedTexImage "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "img: '" << img << "'" ;
              glGetCompressedTexImage(TargetConstant::value, level, img);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_sample_coverage {
            /**
             */
            inline static void call(float value, bool invert) {
              __gl_debug << "call glSampleCoverage "  "value: '" << value << "'"  ", "  "invert: '" << invert << "'" ;
              glSampleCoverage(value, (invert ? 1 : 0));
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v1_3
      namespace v1_4 {
        namespace fnc {
          /**
           */
          struct gl_blend_func_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& sfactorRGB, ::gtulu::internal::constant::gl_constant_base const& dfactorRGB, ::gtulu::internal::constant::gl_constant_base const& sfactorAlpha, ::gtulu::internal::constant::gl_constant_base const& dfactorAlpha) {
              __gl_debug << "call glBlendFuncSeparate "  "sfactorRGB: '" << sfactorRGB << "'"  ", "  "dfactorRGB: '" << dfactorRGB << "'"  ", "  "sfactorAlpha: '" << sfactorAlpha << "'"  ", "  "dfactorAlpha: '" << dfactorAlpha << "'" ;
              glBlendFuncSeparate(::std::uint32_t(sfactorRGB), ::std::uint32_t(dfactorRGB), ::std::uint32_t(sfactorAlpha), ::std::uint32_t(dfactorAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SfactorRGBConstant, typename DfactorRGBConstant, typename SfactorAlphaConstant, typename DfactorAlphaConstant >
            inline static void call() {
              __gl_debug << "call glBlendFuncSeparate "  "sfactorRGB: '" << SfactorRGBConstant::name() << "'"  ", "  "dfactorRGB: '" << DfactorRGBConstant::name() << "'"  ", "  "sfactorAlpha: '" << SfactorAlphaConstant::name() << "'"  ", "  "dfactorAlpha: '" << DfactorAlphaConstant::name() << "'" ;
              glBlendFuncSeparate(SfactorRGBConstant::value, DfactorRGBConstant::value, SfactorAlphaConstant::value, DfactorAlphaConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& srcRGB, ::gtulu::internal::constant::gl_constant_base const& dstRGB, ::gtulu::internal::constant::gl_constant_base const& srcAlpha, ::gtulu::internal::constant::gl_constant_base const& dstAlpha) {
              __gl_debug << "call glBlendFuncSeparatei "  "buf: '" << buf << "'"  ", "  "srcRGB: '" << srcRGB << "'"  ", "  "dstRGB: '" << dstRGB << "'"  ", "  "srcAlpha: '" << srcAlpha << "'"  ", "  "dstAlpha: '" << dstAlpha << "'" ;
              glBlendFuncSeparatei(buf, ::std::uint32_t(srcRGB), ::std::uint32_t(dstRGB), ::std::uint32_t(srcAlpha), ::std::uint32_t(dstAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SrcRGBConstant, typename DstRGBConstant, typename SrcAlphaConstant, typename DstAlphaConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendFuncSeparatei "  "buf: '" << buf << "'"  ", "  "srcRGB: '" << SrcRGBConstant::name() << "'"  ", "  "dstRGB: '" << DstRGBConstant::name() << "'"  ", "  "srcAlpha: '" << SrcAlphaConstant::name() << "'"  ", "  "dstAlpha: '" << DstAlphaConstant::name() << "'" ;
              glBlendFuncSeparatei(buf, SrcRGBConstant::value, DstRGBConstant::value, SrcAlphaConstant::value, DstAlphaConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_multi_draw_arrays {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::int32_t const* first, GLsizei const* count, GLsizei primcount) {
              __gl_debug << "call glMultiDrawArrays "  "mode: '" << mode << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "primcount: '" << primcount << "'" ;
              glMultiDrawArrays(::std::uint32_t(mode), first, count, primcount);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::int32_t const* first, GLsizei const* count, GLsizei primcount) {
              __gl_debug << "call glMultiDrawArrays "  "mode: '" << ModeConstant::name() << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "primcount: '" << primcount << "'" ;
              glMultiDrawArrays(ModeConstant::value, first, count, primcount);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_multi_draw_elements {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei const* count, ::gtulu::internal::constant::gl_constant_base const& type, void const** indices, GLsizei primcount) {
              __gl_debug << "call glMultiDrawElements "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'" ;
              glMultiDrawElements(::std::uint32_t(mode), count, ::std::uint32_t(type), indices, primcount);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei const* count, void const** indices, GLsizei primcount) {
              __gl_debug << "call glMultiDrawElements "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'" ;
              glMultiDrawElements(ModeConstant::value, count, TypeConstant::value, indices, primcount);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_point_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, float param) {
              __gl_debug << "call glPointParameterf "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glPointParameterf(::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(float param) {
              __gl_debug << "call glPointParameterf "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glPointParameterf(PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, float const* params) {
              __gl_debug << "call glPointParameterfv "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glPointParameterfv(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(float const* params) {
              __gl_debug << "call glPointParameterfv "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glPointParameterfv(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t param) {
              __gl_debug << "call glPointParameteri "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glPointParameteri(::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::int32_t param) {
              __gl_debug << "call glPointParameteri "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glPointParameteri(PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t const* params) {
              __gl_debug << "call glPointParameteriv "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glPointParameteriv(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::int32_t const* params) {
              __gl_debug << "call glPointParameteriv "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glPointParameteriv(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v1_4
      namespace v1_5 {
        namespace fnc {
          /**
           */
          struct gl_begin_query {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t id) {
              __gl_debug << "call glBeginQuery "  "target: '" << target << "'"  ", "  "id: '" << id << "'" ;
              glBeginQuery(::std::uint32_t(target), id);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t id) {
              __gl_debug << "call glBeginQuery "  "target: '" << TargetConstant::name() << "'"  ", "  "id: '" << id << "'" ;
              glBeginQuery(TargetConstant::value, id);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_bind_buffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t buffer) {
              __gl_debug << "call glBindBuffer "  "target: '" << target << "'"  ", "  "buffer: '" << buffer << "'" ;
              glBindBuffer(::std::uint32_t(target), buffer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t buffer) {
              __gl_debug << "call glBindBuffer "  "target: '" << TargetConstant::name() << "'"  ", "  "buffer: '" << buffer << "'" ;
              glBindBuffer(TargetConstant::value, buffer);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_buffer_data {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLsizeiptr size, void const* data, ::gtulu::internal::constant::gl_constant_base const& usage) {
              __gl_debug << "call glBufferData "  "target: '" << target << "'"  ", "  "size: '" << size << "'"  ", "  "data: '" << data << "'"  ", "  "usage: '" << usage << "'" ;
              glBufferData(::std::uint32_t(target), size, data, ::std::uint32_t(usage));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename UsageConstant >
            inline static void call(GLsizeiptr size, void const* data) {
              __gl_debug << "call glBufferData "  "target: '" << TargetConstant::name() << "'"  ", "  "size: '" << size << "'"  ", "  "data: '" << data << "'"  ", "  "usage: '" << UsageConstant::name() << "'" ;
              glBufferData(TargetConstant::value, size, data, UsageConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_buffer_sub_data {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLintptr offset, GLsizeiptr size, void const* data) {
              __gl_debug << "call glBufferSubData "  "target: '" << target << "'"  ", "  "offset: '" << offset << "'"  ", "  "size: '" << size << "'"  ", "  "data: '" << data << "'" ;
              glBufferSubData(::std::uint32_t(target), offset, size, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(GLintptr offset, GLsizeiptr size, void const* data) {
              __gl_debug << "call glBufferSubData "  "target: '" << TargetConstant::name() << "'"  ", "  "offset: '" << offset << "'"  ", "  "size: '" << size << "'"  ", "  "data: '" << data << "'" ;
              glBufferSubData(TargetConstant::value, offset, size, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_buffers {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* buffers) {
              __gl_debug << "call glDeleteBuffers "  "n: '" << n << "'"  ", "  "buffers: '" << buffers << "'" ;
              glDeleteBuffers(n, buffers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_queries {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* ids) {
              __gl_debug << "call glDeleteQueries "  "n: '" << n << "'"  ", "  "ids: '" << ids << "'" ;
              glDeleteQueries(n, ids);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_end_query {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target) {
              __gl_debug << "call glEndQuery "  "target: '" << target << "'" ;
              glEndQuery(::std::uint32_t(target));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call() {
              __gl_debug << "call glEndQuery "  "target: '" << TargetConstant::name() << "'" ;
              glEndQuery(TargetConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_buffers {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* buffers) {
              __gl_debug << "call glGenBuffers "  "n: '" << n << "'"  ", "  "buffers: '" << buffers << "'" ;
              glGenBuffers(n, buffers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_queries {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* ids) {
              __gl_debug << "call glGenQueries "  "n: '" << n << "'"  ", "  "ids: '" << ids << "'" ;
              glGenQueries(n, ids);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_buffer_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetBufferParameteriv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteriv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetBufferParameteriv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteriv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, GLint64* params) {
              __gl_debug << "call glGetBufferParameteri64v "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteri64v(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(GLint64* params) {
              __gl_debug << "call glGetBufferParameteri64v "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteri64v(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_buffer_pointer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, void** params) {
              __gl_debug << "call glGetBufferPointerv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferPointerv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(void** params) {
              __gl_debug << "call glGetBufferPointerv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferPointerv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_buffer_sub_data {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLintptr offset, GLsizeiptr size, void* data) {
              __gl_debug << "call glGetBufferSubData "  "target: '" << target << "'"  ", "  "offset: '" << offset << "'"  ", "  "size: '" << size << "'"  ", "  "data: '" << data << "'" ;
              glGetBufferSubData(::std::uint32_t(target), offset, size, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(GLintptr offset, GLsizeiptr size, void* data) {
              __gl_debug << "call glGetBufferSubData "  "target: '" << TargetConstant::name() << "'"  ", "  "offset: '" << offset << "'"  ", "  "size: '" << size << "'"  ", "  "data: '" << data << "'" ;
              glGetBufferSubData(TargetConstant::value, offset, size, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_query {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetQueryiv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryiv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetQueryiv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryiv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_query_object {
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetQueryObjectiv "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectiv(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, ::std::int32_t* params) {
              __gl_debug << "call glGetQueryObjectiv "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectiv(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t* params) {
              __gl_debug << "call glGetQueryObjectuiv "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectuiv(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, ::std::uint32_t* params) {
              __gl_debug << "call glGetQueryObjectuiv "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectuiv(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, GLint64* params) {
              __gl_debug << "call glGetQueryObjecti64v "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjecti64v(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, GLint64* params) {
              __gl_debug << "call glGetQueryObjecti64v "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjecti64v(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, GLuint64* params) {
              __gl_debug << "call glGetQueryObjectui64v "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectui64v(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, GLuint64* params) {
              __gl_debug << "call glGetQueryObjectui64v "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectui64v(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_buffer {
            /**
             */
            inline static GLboolean call(::std::uint32_t buffer) {
              __gl_debug << "call glIsBuffer "  "buffer: '" << buffer << "'" ;
              GLboolean out = glIsBuffer(buffer);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_is_query {
            /**
             */
            inline static GLboolean call(::std::uint32_t id) {
              __gl_debug << "call glIsQuery "  "id: '" << id << "'" ;
              GLboolean out = glIsQuery(id);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_map_buffer {
            /**
             */
            inline static GLvoid* call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& access) {
              __gl_debug << "call glMapBuffer "  "target: '" << target << "'"  ", "  "access: '" << access << "'" ;
              GLvoid* out = glMapBuffer(::std::uint32_t(target), ::std::uint32_t(access));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TargetConstant, typename AccessConstant >
            inline static GLvoid* call() {
              __gl_debug << "call glMapBuffer "  "target: '" << TargetConstant::name() << "'"  ", "  "access: '" << AccessConstant::name() << "'" ;
              GLvoid* out = glMapBuffer(TargetConstant::value, AccessConstant::value);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_unmap_buffer {
            /**
             */
            inline static GLboolean call(::gtulu::internal::constant::gl_constant_base const& target) {
              __gl_debug << "call glUnmapBuffer "  "target: '" << target << "'" ;
              GLboolean out = glUnmapBuffer(::std::uint32_t(target));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static GLboolean call() {
              __gl_debug << "call glUnmapBuffer "  "target: '" << TargetConstant::name() << "'" ;
              GLboolean out = glUnmapBuffer(TargetConstant::value);
              __gl_check_error();
              return out;
            }
          
          };
        } // namespace fnc
      } // namespace v1_5
      namespace v2_0 {
        namespace fnc {
          /**
           */
          struct gl_attach_shader {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t shader) {
              __gl_debug << "call glAttachShader "  "program: '" << program << "'"  ", "  "shader: '" << shader << "'" ;
              glAttachShader(program, shader);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_bind_attrib_location {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t index, GLchar const* name) {
              __gl_debug << "call glBindAttribLocation "  "program: '" << program << "'"  ", "  "index: '" << index << "'"  ", "  "name: '" << name << "'" ;
              glBindAttribLocation(program, index, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_equation_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& modeRGB, ::gtulu::internal::constant::gl_constant_base const& modeAlpha) {
              __gl_debug << "call glBlendEquationSeparate "  "modeRGB: '" << modeRGB << "'"  ", "  "modeAlpha: '" << modeAlpha << "'" ;
              glBlendEquationSeparate(::std::uint32_t(modeRGB), ::std::uint32_t(modeAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeRGBConstant, typename ModeAlphaConstant >
            inline static void call() {
              __gl_debug << "call glBlendEquationSeparate "  "modeRGB: '" << ModeRGBConstant::name() << "'"  ", "  "modeAlpha: '" << ModeAlphaConstant::name() << "'" ;
              glBlendEquationSeparate(ModeRGBConstant::value, ModeAlphaConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& modeRGB, ::gtulu::internal::constant::gl_constant_base const& modeAlpha) {
              __gl_debug << "call glBlendEquationSeparatei "  "buf: '" << buf << "'"  ", "  "modeRGB: '" << modeRGB << "'"  ", "  "modeAlpha: '" << modeAlpha << "'" ;
              glBlendEquationSeparatei(buf, ::std::uint32_t(modeRGB), ::std::uint32_t(modeAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeRGBConstant, typename ModeAlphaConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendEquationSeparatei "  "buf: '" << buf << "'"  ", "  "modeRGB: '" << ModeRGBConstant::name() << "'"  ", "  "modeAlpha: '" << ModeAlphaConstant::name() << "'" ;
              glBlendEquationSeparatei(buf, ModeRGBConstant::value, ModeAlphaConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_compile_shader {
            /**
             */
            inline static void call(::std::uint32_t shader) {
              __gl_debug << "call glCompileShader "  "shader: '" << shader << "'" ;
              glCompileShader(shader);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_create_program {
            /**
             */
            inline static GLuint call() {
              __gl_debug << "call glCreateProgram " "";
              GLuint out = glCreateProgram();
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_create_shader {
            /**
             */
            inline static GLuint call(::gtulu::internal::constant::gl_constant_base const& type) {
              __gl_debug << "call glCreateShader "  "type: '" << type << "'" ;
              GLuint out = glCreateShader(::std::uint32_t(type));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static GLuint call() {
              __gl_debug << "call glCreateShader "  "type: '" << TypeConstant::name() << "'" ;
              GLuint out = glCreateShader(TypeConstant::value);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_delete_program {
            /**
             */
            inline static void call(::std::uint32_t program) {
              __gl_debug << "call glDeleteProgram "  "program: '" << program << "'" ;
              glDeleteProgram(program);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_shader {
            /**
             */
            inline static void call(::std::uint32_t shader) {
              __gl_debug << "call glDeleteShader "  "shader: '" << shader << "'" ;
              glDeleteShader(shader);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_detach_shader {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t shader) {
              __gl_debug << "call glDetachShader "  "program: '" << program << "'"  ", "  "shader: '" << shader << "'" ;
              glDetachShader(program, shader);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_disable_vertex_attrib_array {
            /**
             */
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glDisableVertexAttribArray "  "index: '" << index << "'" ;
              glDisableVertexAttribArray(index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_buffers {
            /**
             */
            inline static void call(GLsizei n, GLenum const* bufs) {
              __gl_debug << "call glDrawBuffers "  "n: '" << n << "'"  ", "  "bufs: '" << bufs << "'" ;
              glDrawBuffers(n, bufs);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_enable_vertex_attrib_array {
            /**
             */
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glEnableVertexAttribArray "  "index: '" << index << "'" ;
              glEnableVertexAttribArray(index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_active_attrib {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t index, GLsizei bufSize, GLsizei* length, ::std::int32_t* size, GLenum* type, GLchar* name) {
              __gl_debug << "call glGetActiveAttrib "  "program: '" << program << "'"  ", "  "index: '" << index << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << type << "'"  ", "  "name: '" << name << "'" ;
              glGetActiveAttrib(program, index, bufSize, length, size, type, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_active_uniform {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t index, GLsizei bufSize, GLsizei* length, ::std::int32_t* size, GLenum* type, GLchar* name) {
              __gl_debug << "call glGetActiveUniform "  "program: '" << program << "'"  ", "  "index: '" << index << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << type << "'"  ", "  "name: '" << name << "'" ;
              glGetActiveUniform(program, index, bufSize, length, size, type, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_attached_shaders {
            /**
             */
            inline static void call(::std::uint32_t program, GLsizei maxCount, GLsizei* count, ::std::uint32_t* obj) {
              __gl_debug << "call glGetAttachedShaders "  "program: '" << program << "'"  ", "  "maxCount: '" << maxCount << "'"  ", "  "count: '" << count << "'"  ", "  "obj: '" << obj << "'" ;
              glGetAttachedShaders(program, maxCount, count, obj);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_attrib_location {
            /**
             */
            inline static GLint call(::std::uint32_t program, GLchar const* name) {
              __gl_debug << "call glGetAttribLocation "  "program: '" << program << "'"  ", "  "name: '" << name << "'" ;
              GLint out = glGetAttribLocation(program, name);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_program {
            /**
             */
            inline static void call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetProgramiv "  "program: '" << program << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetProgramiv(program, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t program, ::std::int32_t* params) {
              __gl_debug << "call glGetProgramiv "  "program: '" << program << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetProgramiv(program, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_program_info_log {
            /**
             */
            inline static void call(::std::uint32_t program, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
              __gl_debug << "call glGetProgramInfoLog "  "program: '" << program << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "infoLog: '" << infoLog << "'" ;
              glGetProgramInfoLog(program, bufSize, length, infoLog);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_shader {
            /**
             */
            inline static void call(::std::uint32_t shader, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetShaderiv "  "shader: '" << shader << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetShaderiv(shader, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t shader, ::std::int32_t* params) {
              __gl_debug << "call glGetShaderiv "  "shader: '" << shader << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetShaderiv(shader, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_shader_info_log {
            /**
             */
            inline static void call(::std::uint32_t shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
              __gl_debug << "call glGetShaderInfoLog "  "shader: '" << shader << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "infoLog: '" << infoLog << "'" ;
              glGetShaderInfoLog(shader, bufSize, length, infoLog);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_shader_source {
            /**
             */
            inline static void call(::std::uint32_t shader, GLsizei bufSize, GLsizei* length, GLchar* source) {
              __gl_debug << "call glGetShaderSource "  "shader: '" << shader << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "source: '" << source << "'" ;
              glGetShaderSource(shader, bufSize, length, source);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_uniform {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, float* params) {
              __gl_debug << "call glGetUniformfv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformfv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::int32_t* params) {
              __gl_debug << "call glGetUniformiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformiv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::uint32_t* params) {
              __gl_debug << "call glGetUniformuiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformuiv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, double* params) {
              __gl_debug << "call glGetUniformdv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformdv(program, location, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_uniform_location {
            /**
             */
            inline static GLint call(::std::uint32_t program, GLchar const* name) {
              __gl_debug << "call glGetUniformLocation "  "program: '" << program << "'"  ", "  "name: '" << name << "'" ;
              GLint out = glGetUniformLocation(program, name);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_vertex_attrib {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, double* params) {
              __gl_debug << "call glGetVertexAttribdv "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribdv(index, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, double* params) {
              __gl_debug << "call glGetVertexAttribdv "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribdv(index, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, float* params) {
              __gl_debug << "call glGetVertexAttribfv "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribfv(index, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, float* params) {
              __gl_debug << "call glGetVertexAttribfv "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribfv(index, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetVertexAttribiv "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribiv(index, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t* params) {
              __gl_debug << "call glGetVertexAttribiv "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribiv(index, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_vertex_attrib_pointer {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, void** pointer) {
              __gl_debug << "call glGetVertexAttribPointerv "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "pointer: '" << pointer << "'" ;
              glGetVertexAttribPointerv(index, ::std::uint32_t(pname), pointer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, void** pointer) {
              __gl_debug << "call glGetVertexAttribPointerv "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "pointer: '" << pointer << "'" ;
              glGetVertexAttribPointerv(index, PnameConstant::value, pointer);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_program {
            /**
             */
            inline static GLboolean call(::std::uint32_t program) {
              __gl_debug << "call glIsProgram "  "program: '" << program << "'" ;
              GLboolean out = glIsProgram(program);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_is_shader {
            /**
             */
            inline static GLboolean call(::std::uint32_t shader) {
              __gl_debug << "call glIsShader "  "shader: '" << shader << "'" ;
              GLboolean out = glIsShader(shader);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_link_program {
            /**
             */
            inline static void call(::std::uint32_t program) {
              __gl_debug << "call glLinkProgram "  "program: '" << program << "'" ;
              glLinkProgram(program);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_shader_source {
            /**
             */
            inline static void call(::std::uint32_t shader, GLsizei count, GLchar const** string, ::std::int32_t const* length) {
              __gl_debug << "call glShaderSource "  "shader: '" << shader << "'"  ", "  "count: '" << count << "'"  ", "  "string: '" << string << "'"  ", "  "length: '" << length << "'" ;
              glShaderSource(shader, count, string, length);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_stencil_func_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& face, ::gtulu::internal::constant::gl_constant_base const& func, ::std::int32_t ref, ::std::uint32_t mask) {
              __gl_debug << "call glStencilFuncSeparate "  "face: '" << face << "'"  ", "  "func: '" << func << "'"  ", "  "ref: '" << ref << "'"  ", "  "mask: '" << mask << "'" ;
              glStencilFuncSeparate(::std::uint32_t(face), ::std::uint32_t(func), ref, mask);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FaceConstant, typename FuncConstant >
            inline static void call(::std::int32_t ref, ::std::uint32_t mask) {
              __gl_debug << "call glStencilFuncSeparate "  "face: '" << FaceConstant::name() << "'"  ", "  "func: '" << FuncConstant::name() << "'"  ", "  "ref: '" << ref << "'"  ", "  "mask: '" << mask << "'" ;
              glStencilFuncSeparate(FaceConstant::value, FuncConstant::value, ref, mask);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_stencil_mask_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& face, ::std::uint32_t mask) {
              __gl_debug << "call glStencilMaskSeparate "  "face: '" << face << "'"  ", "  "mask: '" << mask << "'" ;
              glStencilMaskSeparate(::std::uint32_t(face), mask);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FaceConstant >
            inline static void call(::std::uint32_t mask) {
              __gl_debug << "call glStencilMaskSeparate "  "face: '" << FaceConstant::name() << "'"  ", "  "mask: '" << mask << "'" ;
              glStencilMaskSeparate(FaceConstant::value, mask);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_stencil_op_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& face, ::gtulu::internal::constant::gl_constant_base const& sfail, ::gtulu::internal::constant::gl_constant_base const& dpfail, ::gtulu::internal::constant::gl_constant_base const& dppass) {
              __gl_debug << "call glStencilOpSeparate "  "face: '" << face << "'"  ", "  "sfail: '" << sfail << "'"  ", "  "dpfail: '" << dpfail << "'"  ", "  "dppass: '" << dppass << "'" ;
              glStencilOpSeparate(::std::uint32_t(face), ::std::uint32_t(sfail), ::std::uint32_t(dpfail), ::std::uint32_t(dppass));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FaceConstant, typename SfailConstant, typename DpfailConstant, typename DppassConstant >
            inline static void call() {
              __gl_debug << "call glStencilOpSeparate "  "face: '" << FaceConstant::name() << "'"  ", "  "sfail: '" << SfailConstant::name() << "'"  ", "  "dpfail: '" << DpfailConstant::name() << "'"  ", "  "dppass: '" << DppassConstant::name() << "'" ;
              glStencilOpSeparate(FaceConstant::value, SfailConstant::value, DpfailConstant::value, DppassConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_1 {
            /**
             */
            inline static void call(::std::int32_t location, float v0) {
              __gl_debug << "call glUniform1f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1f(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0) {
              __gl_debug << "call glUniform1i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1i(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform1fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform1iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0) {
              __gl_debug << "call glUniform1ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1ui(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform1uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x) {
              __gl_debug << "call glUniform1d "  "location: '" << location << "'"  ", "  "x: '" << x << "'" ;
              glUniform1d(location, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform1dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_2 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1) {
              __gl_debug << "call glUniform2f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2f(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1) {
              __gl_debug << "call glUniform2i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2i(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform2iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1) {
              __gl_debug << "call glUniform2ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2ui(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform2uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y) {
              __gl_debug << "call glUniform2d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glUniform2d(location, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_3 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1, float v2) {
              __gl_debug << "call glUniform3f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3f(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2) {
              __gl_debug << "call glUniform3i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3i(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform3iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2) {
              __gl_debug << "call glUniform3ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3ui(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform3uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y, double z) {
              __gl_debug << "call glUniform3d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glUniform3d(location, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_4 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1, float v2, float v3) {
              __gl_debug << "call glUniform4f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4f(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2, ::std::int32_t v3) {
              __gl_debug << "call glUniform4i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4i(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform4iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2, ::std::uint32_t v3) {
              __gl_debug << "call glUniform4ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4ui(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform4uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y, double z, double w) {
              __gl_debug << "call glUniform4d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glUniform4d(location, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_2 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_3 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_4 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_use_program {
            /**
             */
            inline static void call(::std::uint32_t program) {
              __gl_debug << "call glUseProgram "  "program: '" << program << "'" ;
              glUseProgram(program);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_validate_program {
            /**
             */
            inline static void call(::std::uint32_t program) {
              __gl_debug << "call glValidateProgram "  "program: '" << program << "'" ;
              glValidateProgram(program);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_1 {
            /**
             */
            inline static void call(::std::uint32_t index, double x) {
              __gl_debug << "call glVertexAttrib1d "  "index: '" << index << "'"  ", "  "x: '" << x << "'" ;
              glVertexAttrib1d(index, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttrib1dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib1dv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float x) {
              __gl_debug << "call glVertexAttrib1f "  "index: '" << index << "'"  ", "  "x: '" << x << "'" ;
              glVertexAttrib1f(index, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float const* v) {
              __gl_debug << "call glVertexAttrib1fv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib1fv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort x) {
              __gl_debug << "call glVertexAttrib1s "  "index: '" << index << "'"  ", "  "x: '" << x << "'" ;
              glVertexAttrib1s(index, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort const* v) {
              __gl_debug << "call glVertexAttrib1sv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib1sv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_2 {
            /**
             */
            inline static void call(::std::uint32_t index, double x, double y) {
              __gl_debug << "call glVertexAttrib2d "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glVertexAttrib2d(index, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttrib2dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib2dv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float x, float y) {
              __gl_debug << "call glVertexAttrib2f "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glVertexAttrib2f(index, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float const* v) {
              __gl_debug << "call glVertexAttrib2fv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib2fv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort x, GLshort y) {
              __gl_debug << "call glVertexAttrib2s "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glVertexAttrib2s(index, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort const* v) {
              __gl_debug << "call glVertexAttrib2sv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib2sv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_3 {
            /**
             */
            inline static void call(::std::uint32_t index, double x, double y, double z) {
              __gl_debug << "call glVertexAttrib3d "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glVertexAttrib3d(index, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttrib3dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib3dv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float x, float y, float z) {
              __gl_debug << "call glVertexAttrib3f "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glVertexAttrib3f(index, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float const* v) {
              __gl_debug << "call glVertexAttrib3fv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib3fv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort x, GLshort y, GLshort z) {
              __gl_debug << "call glVertexAttrib3s "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glVertexAttrib3s(index, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort const* v) {
              __gl_debug << "call glVertexAttrib3sv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib3sv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_4 {
            /**
             */
            inline static void call(::std::uint32_t index, GLbyte const* v) {
              __gl_debug << "call glVertexAttrib4bv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4bv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double x, double y, double z, double w) {
              __gl_debug << "call glVertexAttrib4d "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glVertexAttrib4d(index, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttrib4dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4dv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float x, float y, float z, float w) {
              __gl_debug << "call glVertexAttrib4f "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glVertexAttrib4f(index, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float const* v) {
              __gl_debug << "call glVertexAttrib4fv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4fv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t const* v) {
              __gl_debug << "call glVertexAttrib4iv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4iv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort x, GLshort y, GLshort z, GLshort w) {
              __gl_debug << "call glVertexAttrib4s "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glVertexAttrib4s(index, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort const* v) {
              __gl_debug << "call glVertexAttrib4sv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4sv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint8_t const* v) {
              __gl_debug << "call glVertexAttrib4ubv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4ubv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t const* v) {
              __gl_debug << "call glVertexAttrib4uiv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4uiv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint16_t const* v) {
              __gl_debug << "call glVertexAttrib4usv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4usv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_4_normalized {
            /**
             */
            inline static void call(::std::uint32_t index, GLbyte const* v) {
              __gl_debug << "call glVertexAttrib4Nbv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4Nbv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t const* v) {
              __gl_debug << "call glVertexAttrib4Niv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4Niv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort const* v) {
              __gl_debug << "call glVertexAttrib4Nsv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4Nsv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint8_t x, ::std::uint8_t y, ::std::uint8_t z, ::std::uint8_t w) {
              __gl_debug << "call glVertexAttrib4Nub "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glVertexAttrib4Nub(index, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint8_t const* v) {
              __gl_debug << "call glVertexAttrib4Nubv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4Nubv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t const* v) {
              __gl_debug << "call glVertexAttrib4Nuiv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4Nuiv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint16_t const* v) {
              __gl_debug << "call glVertexAttrib4Nusv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttrib4Nusv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_pointer {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t size, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, GLsizei stride, void const* pointer) {
              __gl_debug << "call glVertexAttribPointer "  "index: '" << index << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "stride: '" << stride << "'"  ", "  "pointer: '" << pointer << "'" ;
              glVertexAttribPointer(index, size, ::std::uint32_t(type), (normalized ? 1 : 0), stride, pointer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t size, bool normalized, GLsizei stride, void const* pointer) {
              __gl_debug << "call glVertexAttribPointer "  "index: '" << index << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "stride: '" << stride << "'"  ", "  "pointer: '" << pointer << "'" ;
              glVertexAttribPointer(index, size, TypeConstant::value, (normalized ? 1 : 0), stride, pointer);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v2_0
      namespace v2_1 {
        namespace fnc {
          /**
           */
          struct gl_uniform_matrix_2x3 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix2x3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x3fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix2x3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x3dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_2x4 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix2x4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x4fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix2x4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x4dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_3x2 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix3x2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x2fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix3x2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x2dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_3x4 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix3x4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x4fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix3x4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x4dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_4x2 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix4x2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x2fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix4x2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x2dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_4x3 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix4x3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x3fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix4x3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x3dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v2_1
      namespace v3_0 {
        namespace fnc {
          /**
           */
          struct gl_begin_conditional_render {
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glBeginConditionalRender "  "id: '" << id << "'"  ", "  "mode: '" << mode << "'" ;
              glBeginConditionalRender(id, ::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t id) {
              __gl_debug << "call glBeginConditionalRender "  "id: '" << id << "'"  ", "  "mode: '" << ModeConstant::name() << "'" ;
              glBeginConditionalRender(id, ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_begin_transform_feedback {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& primitiveMode) {
              __gl_debug << "call glBeginTransformFeedback "  "primitiveMode: '" << primitiveMode << "'" ;
              glBeginTransformFeedback(::std::uint32_t(primitiveMode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PrimitiveModeConstant >
            inline static void call() {
              __gl_debug << "call glBeginTransformFeedback "  "primitiveMode: '" << PrimitiveModeConstant::name() << "'" ;
              glBeginTransformFeedback(PrimitiveModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_bind_buffer_base {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, ::std::uint32_t buffer) {
              __gl_debug << "call glBindBufferBase "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "buffer: '" << buffer << "'" ;
              glBindBufferBase(::std::uint32_t(target), index, buffer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, ::std::uint32_t buffer) {
              __gl_debug << "call glBindBufferBase "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "buffer: '" << buffer << "'" ;
              glBindBufferBase(TargetConstant::value, index, buffer);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_bind_buffer_range {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, ::std::uint32_t buffer, GLintptr offset, GLsizeiptr size) {
              __gl_debug << "call glBindBufferRange "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "buffer: '" << buffer << "'"  ", "  "offset: '" << offset << "'"  ", "  "size: '" << size << "'" ;
              glBindBufferRange(::std::uint32_t(target), index, buffer, offset, size);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, ::std::uint32_t buffer, GLintptr offset, GLsizeiptr size) {
              __gl_debug << "call glBindBufferRange "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "buffer: '" << buffer << "'"  ", "  "offset: '" << offset << "'"  ", "  "size: '" << size << "'" ;
              glBindBufferRange(TargetConstant::value, index, buffer, offset, size);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_bind_frag_data_location {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t color, GLchar const* name) {
              __gl_debug << "call glBindFragDataLocation "  "program: '" << program << "'"  ", "  "color: '" << color << "'"  ", "  "name: '" << name << "'" ;
              glBindFragDataLocation(program, color, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_clamp_color {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& clamp) {
              __gl_debug << "call glClampColor "  "target: '" << target << "'"  ", "  "clamp: '" << clamp << "'" ;
              glClampColor(::std::uint32_t(target), ::std::uint32_t(clamp));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename ClampConstant >
            inline static void call() {
              __gl_debug << "call glClampColor "  "target: '" << TargetConstant::name() << "'"  ", "  "clamp: '" << ClampConstant::name() << "'" ;
              glClampColor(TargetConstant::value, ClampConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_clear_buffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& buffer, ::std::int32_t drawbuffer, ::std::int32_t const* value) {
              __gl_debug << "call glClearBufferiv "  "buffer: '" << buffer << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "value: '" << value << "'" ;
              glClearBufferiv(::std::uint32_t(buffer), drawbuffer, value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename BufferConstant >
            inline static void call(::std::int32_t drawbuffer, ::std::int32_t const* value) {
              __gl_debug << "call glClearBufferiv "  "buffer: '" << BufferConstant::name() << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "value: '" << value << "'" ;
              glClearBufferiv(BufferConstant::value, drawbuffer, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& buffer, ::std::int32_t drawbuffer, ::std::uint32_t const* value) {
              __gl_debug << "call glClearBufferuiv "  "buffer: '" << buffer << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "value: '" << value << "'" ;
              glClearBufferuiv(::std::uint32_t(buffer), drawbuffer, value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename BufferConstant >
            inline static void call(::std::int32_t drawbuffer, ::std::uint32_t const* value) {
              __gl_debug << "call glClearBufferuiv "  "buffer: '" << BufferConstant::name() << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "value: '" << value << "'" ;
              glClearBufferuiv(BufferConstant::value, drawbuffer, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& buffer, ::std::int32_t drawbuffer, float const* value) {
              __gl_debug << "call glClearBufferfv "  "buffer: '" << buffer << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "value: '" << value << "'" ;
              glClearBufferfv(::std::uint32_t(buffer), drawbuffer, value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename BufferConstant >
            inline static void call(::std::int32_t drawbuffer, float const* value) {
              __gl_debug << "call glClearBufferfv "  "buffer: '" << BufferConstant::name() << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "value: '" << value << "'" ;
              glClearBufferfv(BufferConstant::value, drawbuffer, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_clear_buffer_float {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& buffer, ::std::int32_t drawbuffer, float depth, ::std::int32_t stencil) {
              __gl_debug << "call glClearBufferfi "  "buffer: '" << buffer << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "depth: '" << depth << "'"  ", "  "stencil: '" << stencil << "'" ;
              glClearBufferfi(::std::uint32_t(buffer), drawbuffer, depth, stencil);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename BufferConstant >
            inline static void call(::std::int32_t drawbuffer, float depth, ::std::int32_t stencil) {
              __gl_debug << "call glClearBufferfi "  "buffer: '" << BufferConstant::name() << "'"  ", "  "drawbuffer: '" << drawbuffer << "'"  ", "  "depth: '" << depth << "'"  ", "  "stencil: '" << stencil << "'" ;
              glClearBufferfi(BufferConstant::value, drawbuffer, depth, stencil);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_color_mask {
            /**
             */
            inline static void call(bool red, bool green, bool blue, bool alpha) {
              __gl_debug << "call glColorMask "  "red: '" << red << "'"  ", "  "green: '" << green << "'"  ", "  "blue: '" << blue << "'"  ", "  "alpha: '" << alpha << "'" ;
              glColorMask((red ? 1 : 0), (green ? 1 : 0), (blue ? 1 : 0), (alpha ? 1 : 0));
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, bool r, bool g, bool b, bool a) {
              __gl_debug << "call glColorMaski "  "index: '" << index << "'"  ", "  "r: '" << r << "'"  ", "  "g: '" << g << "'"  ", "  "b: '" << b << "'"  ", "  "a: '" << a << "'" ;
              glColorMaski(index, (r ? 1 : 0), (g ? 1 : 0), (b ? 1 : 0), (a ? 1 : 0));
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_disable {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& cap) {
              __gl_debug << "call glDisable "  "cap: '" << cap << "'" ;
              glDisable(::std::uint32_t(cap));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename CapConstant >
            inline static void call() {
              __gl_debug << "call glDisable "  "cap: '" << CapConstant::name() << "'" ;
              glDisable(CapConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index) {
              __gl_debug << "call glDisablei "  "target: '" << target << "'"  ", "  "index: '" << index << "'" ;
              glDisablei(::std::uint32_t(target), index);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glDisablei "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              glDisablei(TargetConstant::value, index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_enable {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& cap) {
              __gl_debug << "call glEnable "  "cap: '" << cap << "'" ;
              glEnable(::std::uint32_t(cap));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename CapConstant >
            inline static void call() {
              __gl_debug << "call glEnable "  "cap: '" << CapConstant::name() << "'" ;
              glEnable(CapConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index) {
              __gl_debug << "call glEnablei "  "target: '" << target << "'"  ", "  "index: '" << index << "'" ;
              glEnablei(::std::uint32_t(target), index);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glEnablei "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              glEnablei(TargetConstant::value, index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_end_conditional_render {
            /**
             */
            inline static void call() {
              __gl_debug << "call glEndConditionalRender " "";
              glEndConditionalRender();
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_end_transform_feedback {
            /**
             */
            inline static void call() {
              __gl_debug << "call glEndTransformFeedback " "";
              glEndTransformFeedback();
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_boolean_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, GLboolean* data) {
              __gl_debug << "call glGetBooleani_v "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetBooleani_v(::std::uint32_t(target), index, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, GLboolean* data) {
              __gl_debug << "call glGetBooleani_v "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetBooleani_v(TargetConstant::value, index, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_frag_data_location {
            /**
             */
            inline static GLint call(::std::uint32_t program, GLchar const* name) {
              __gl_debug << "call glGetFragDataLocation "  "program: '" << program << "'"  ", "  "name: '" << name << "'" ;
              GLint out = glGetFragDataLocation(program, name);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_integer_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, ::std::int32_t* data) {
              __gl_debug << "call glGetIntegeri_v "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetIntegeri_v(::std::uint32_t(target), index, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t* data) {
              __gl_debug << "call glGetIntegeri_v "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetIntegeri_v(TargetConstant::value, index, data);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, GLint64* data) {
              __gl_debug << "call glGetInteger64i_v "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetInteger64i_v(::std::uint32_t(target), index, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, GLint64* data) {
              __gl_debug << "call glGetInteger64i_v "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetInteger64i_v(TargetConstant::value, index, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_string {
            /**
             */
            inline static GLubyte const* call(::gtulu::internal::constant::gl_constant_base const& name) {
              __gl_debug << "call glGetString "  "name: '" << name << "'" ;
              GLubyte const* out = glGetString(::std::uint32_t(name));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename NameConstant >
            inline static GLubyte const* call() {
              __gl_debug << "call glGetString "  "name: '" << NameConstant::name() << "'" ;
              GLubyte const* out = glGetString(NameConstant::value);
              __gl_check_error();
              return out;
            }
          
            /**
             */
            inline static GLubyte const* call(::gtulu::internal::constant::gl_constant_base const& name, ::std::uint32_t index) {
              __gl_debug << "call glGetStringi "  "name: '" << name << "'"  ", "  "index: '" << index << "'" ;
              GLubyte const* out = glGetStringi(::std::uint32_t(name), index);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename NameConstant >
            inline static GLubyte const* call(::std::uint32_t index) {
              __gl_debug << "call glGetStringi "  "name: '" << NameConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              GLubyte const* out = glGetStringi(NameConstant::value, index);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_tex_parameter_integer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetTexParameterIiv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameterIiv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetTexParameterIiv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameterIiv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t* params) {
              __gl_debug << "call glGetTexParameterIuiv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameterIuiv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::uint32_t* params) {
              __gl_debug << "call glGetTexParameterIuiv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetTexParameterIuiv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_transform_feedback_varying {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name) {
              __gl_debug << "call glGetTransformFeedbackVarying "  "program: '" << program << "'"  ", "  "index: '" << index << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << type << "'"  ", "  "name: '" << name << "'" ;
              glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_uniform {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, float* params) {
              __gl_debug << "call glGetUniformfv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformfv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::int32_t* params) {
              __gl_debug << "call glGetUniformiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformiv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::uint32_t* params) {
              __gl_debug << "call glGetUniformuiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformuiv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, double* params) {
              __gl_debug << "call glGetUniformdv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformdv(program, location, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_vertex_attrib_integer {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetVertexAttribIiv "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribIiv(index, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t* params) {
              __gl_debug << "call glGetVertexAttribIiv "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribIiv(index, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t* params) {
              __gl_debug << "call glGetVertexAttribIuiv "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribIuiv(index, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, ::std::uint32_t* params) {
              __gl_debug << "call glGetVertexAttribIuiv "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribIuiv(index, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_enabled {
            /**
             */
            inline static GLboolean call(::gtulu::internal::constant::gl_constant_base const& cap) {
              __gl_debug << "call glIsEnabled "  "cap: '" << cap << "'" ;
              GLboolean out = glIsEnabled(::std::uint32_t(cap));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename CapConstant >
            inline static GLboolean call() {
              __gl_debug << "call glIsEnabled "  "cap: '" << CapConstant::name() << "'" ;
              GLboolean out = glIsEnabled(CapConstant::value);
              __gl_check_error();
              return out;
            }
          
            /**
             */
            inline static GLboolean call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index) {
              __gl_debug << "call glIsEnabledi "  "target: '" << target << "'"  ", "  "index: '" << index << "'" ;
              GLboolean out = glIsEnabledi(::std::uint32_t(target), index);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static GLboolean call(::std::uint32_t index) {
              __gl_debug << "call glIsEnabledi "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              GLboolean out = glIsEnabledi(TargetConstant::value, index);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_tex_parameter_integer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t const* params) {
              __gl_debug << "call glTexParameterIiv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glTexParameterIiv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t const* params) {
              __gl_debug << "call glTexParameterIiv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glTexParameterIiv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t const* params) {
              __gl_debug << "call glTexParameterIuiv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glTexParameterIuiv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::uint32_t const* params) {
              __gl_debug << "call glTexParameterIuiv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glTexParameterIuiv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_transform_feedback_varyings {
            /**
             */
            inline static void call(::std::uint32_t program, GLsizei count, GLchar const** varyings, ::gtulu::internal::constant::gl_constant_base const& bufferMode) {
              __gl_debug << "call glTransformFeedbackVaryings "  "program: '" << program << "'"  ", "  "count: '" << count << "'"  ", "  "varyings: '" << varyings << "'"  ", "  "bufferMode: '" << bufferMode << "'" ;
              glTransformFeedbackVaryings(program, count, varyings, ::std::uint32_t(bufferMode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename BufferModeConstant >
            inline static void call(::std::uint32_t program, GLsizei count, GLchar const** varyings) {
              __gl_debug << "call glTransformFeedbackVaryings "  "program: '" << program << "'"  ", "  "count: '" << count << "'"  ", "  "varyings: '" << varyings << "'"  ", "  "bufferMode: '" << BufferModeConstant::name() << "'" ;
              glTransformFeedbackVaryings(program, count, varyings, BufferModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_1 {
            /**
             */
            inline static void call(::std::int32_t location, float v0) {
              __gl_debug << "call glUniform1f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1f(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0) {
              __gl_debug << "call glUniform1i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1i(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform1fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform1iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0) {
              __gl_debug << "call glUniform1ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1ui(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform1uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x) {
              __gl_debug << "call glUniform1d "  "location: '" << location << "'"  ", "  "x: '" << x << "'" ;
              glUniform1d(location, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform1dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_2 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1) {
              __gl_debug << "call glUniform2f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2f(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1) {
              __gl_debug << "call glUniform2i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2i(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform2iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1) {
              __gl_debug << "call glUniform2ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2ui(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform2uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y) {
              __gl_debug << "call glUniform2d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glUniform2d(location, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_3 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1, float v2) {
              __gl_debug << "call glUniform3f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3f(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2) {
              __gl_debug << "call glUniform3i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3i(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform3iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2) {
              __gl_debug << "call glUniform3ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3ui(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform3uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y, double z) {
              __gl_debug << "call glUniform3d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glUniform3d(location, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_4 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1, float v2, float v3) {
              __gl_debug << "call glUniform4f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4f(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2, ::std::int32_t v3) {
              __gl_debug << "call glUniform4i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4i(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform4iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2, ::std::uint32_t v3) {
              __gl_debug << "call glUniform4ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4ui(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform4uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y, double z, double w) {
              __gl_debug << "call glUniform4d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glUniform4d(location, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_1_integer {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t x) {
              __gl_debug << "call glVertexAttribI1i "  "index: '" << index << "'"  ", "  "x: '" << x << "'" ;
              glVertexAttribI1i(index, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t x) {
              __gl_debug << "call glVertexAttribI1ui "  "index: '" << index << "'"  ", "  "x: '" << x << "'" ;
              glVertexAttribI1ui(index, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t const* v) {
              __gl_debug << "call glVertexAttribI1iv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI1iv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t const* v) {
              __gl_debug << "call glVertexAttribI1uiv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI1uiv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_2_integer {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t x, ::std::int32_t y) {
              __gl_debug << "call glVertexAttribI2i "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glVertexAttribI2i(index, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t x, ::std::uint32_t y) {
              __gl_debug << "call glVertexAttribI2ui "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glVertexAttribI2ui(index, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t const* v) {
              __gl_debug << "call glVertexAttribI2iv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI2iv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t const* v) {
              __gl_debug << "call glVertexAttribI2uiv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI2uiv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_3_integer {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t x, ::std::int32_t y, ::std::int32_t z) {
              __gl_debug << "call glVertexAttribI3i "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glVertexAttribI3i(index, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t x, ::std::uint32_t y, ::std::uint32_t z) {
              __gl_debug << "call glVertexAttribI3ui "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glVertexAttribI3ui(index, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t const* v) {
              __gl_debug << "call glVertexAttribI3iv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI3iv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t const* v) {
              __gl_debug << "call glVertexAttribI3uiv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI3uiv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_4_integer {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t x, ::std::int32_t y, ::std::int32_t z, ::std::int32_t w) {
              __gl_debug << "call glVertexAttribI4i "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glVertexAttribI4i(index, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t x, ::std::uint32_t y, ::std::uint32_t z, ::std::uint32_t w) {
              __gl_debug << "call glVertexAttribI4ui "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glVertexAttribI4ui(index, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t const* v) {
              __gl_debug << "call glVertexAttribI4iv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI4iv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t const* v) {
              __gl_debug << "call glVertexAttribI4uiv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI4uiv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLbyte const* v) {
              __gl_debug << "call glVertexAttribI4bv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI4bv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, GLshort const* v) {
              __gl_debug << "call glVertexAttribI4sv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI4sv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint8_t const* v) {
              __gl_debug << "call glVertexAttribI4ubv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI4ubv(index, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint16_t const* v) {
              __gl_debug << "call glVertexAttribI4usv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribI4usv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_pointer_integer {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t size, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei stride, void const* pointer) {
              __gl_debug << "call glVertexAttribIPointer "  "index: '" << index << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << type << "'"  ", "  "stride: '" << stride << "'"  ", "  "pointer: '" << pointer << "'" ;
              glVertexAttribIPointer(index, size, ::std::uint32_t(type), stride, pointer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t size, GLsizei stride, void const* pointer) {
              __gl_debug << "call glVertexAttribIPointer "  "index: '" << index << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "stride: '" << stride << "'"  ", "  "pointer: '" << pointer << "'" ;
              glVertexAttribIPointer(index, size, TypeConstant::value, stride, pointer);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v3_0
      namespace v3_1 {
        namespace fnc {
          /**
           */
          struct gl_draw_arrays_instanced {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::int32_t first, GLsizei count, GLsizei primcount) {
              __gl_debug << "call glDrawArraysInstanced "  "mode: '" << mode << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawArraysInstanced(::std::uint32_t(mode), first, count, primcount);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::int32_t first, GLsizei count, GLsizei primcount) {
              __gl_debug << "call glDrawArraysInstanced "  "mode: '" << ModeConstant::name() << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawArraysInstanced(ModeConstant::value, first, count, primcount);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_elements_instanced {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices, GLsizei primcount) {
              __gl_debug << "call glDrawElementsInstanced "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawElementsInstanced(::std::uint32_t(mode), count, ::std::uint32_t(type), indices, primcount);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei count, void const* indices, GLsizei primcount) {
              __gl_debug << "call glDrawElementsInstanced "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawElementsInstanced(ModeConstant::value, count, TypeConstant::value, indices, primcount);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_primitive_restart_index {
            /**
             */
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glPrimitiveRestartIndex "  "index: '" << index << "'" ;
              glPrimitiveRestartIndex(index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_buffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& internalformat, ::std::uint32_t buffer) {
              __gl_debug << "call glTexBuffer "  "target: '" << target << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "buffer: '" << buffer << "'" ;
              glTexBuffer(::std::uint32_t(target), ::std::uint32_t(internalformat), buffer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::uint32_t buffer) {
              __gl_debug << "call glTexBuffer "  "target: '" << TargetConstant::name() << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "buffer: '" << buffer << "'" ;
              glTexBuffer(TargetConstant::value, InternalformatConstant::value, buffer);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v3_1
      namespace v3_2 {
        namespace fnc {
          /**
           */
          struct gl_framebuffer_texture {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& attachment, ::std::uint32_t texture, ::std::int32_t level) {
              __gl_debug << "call glFramebufferTexture "  "target: '" << target << "'"  ", "  "attachment: '" << attachment << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'" ;
              glFramebufferTexture(::std::uint32_t(target), ::std::uint32_t(attachment), texture, level);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename AttachmentConstant >
            inline static void call(::std::uint32_t texture, ::std::int32_t level) {
              __gl_debug << "call glFramebufferTexture "  "target: '" << TargetConstant::name() << "'"  ", "  "attachment: '" << AttachmentConstant::name() << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'" ;
              glFramebufferTexture(TargetConstant::value, AttachmentConstant::value, texture, level);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_buffer_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetBufferParameteriv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteriv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetBufferParameteriv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteriv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, GLint64* params) {
              __gl_debug << "call glGetBufferParameteri64v "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteri64v(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(GLint64* params) {
              __gl_debug << "call glGetBufferParameteri64v "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetBufferParameteri64v(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_integer_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, ::std::int32_t* data) {
              __gl_debug << "call glGetIntegeri_v "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetIntegeri_v(::std::uint32_t(target), index, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t* data) {
              __gl_debug << "call glGetIntegeri_v "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetIntegeri_v(TargetConstant::value, index, data);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, GLint64* data) {
              __gl_debug << "call glGetInteger64i_v "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetInteger64i_v(::std::uint32_t(target), index, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, GLint64* data) {
              __gl_debug << "call glGetInteger64i_v "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetInteger64i_v(TargetConstant::value, index, data);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v3_2
      namespace v3_3 {
        namespace fnc {
          /**
           */
          struct gl_vertex_attrib_divisor {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::uint32_t divisor) {
              __gl_debug << "call glVertexAttribDivisor "  "index: '" << index << "'"  ", "  "divisor: '" << divisor << "'" ;
              glVertexAttribDivisor(index, divisor);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v3_3
      namespace v4_0 {
        namespace fnc {
          /**
           */
          struct gl_blend_equation {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glBlendEquation "  "mode: '" << mode << "'" ;
              glBlendEquation(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glBlendEquation "  "mode: '" << ModeConstant::name() << "'" ;
              glBlendEquation(ModeConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glBlendEquationi "  "buf: '" << buf << "'"  ", "  "mode: '" << mode << "'" ;
              glBlendEquationi(buf, ::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendEquationi "  "buf: '" << buf << "'"  ", "  "mode: '" << ModeConstant::name() << "'" ;
              glBlendEquationi(buf, ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_equation_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& modeRGB, ::gtulu::internal::constant::gl_constant_base const& modeAlpha) {
              __gl_debug << "call glBlendEquationSeparate "  "modeRGB: '" << modeRGB << "'"  ", "  "modeAlpha: '" << modeAlpha << "'" ;
              glBlendEquationSeparate(::std::uint32_t(modeRGB), ::std::uint32_t(modeAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeRGBConstant, typename ModeAlphaConstant >
            inline static void call() {
              __gl_debug << "call glBlendEquationSeparate "  "modeRGB: '" << ModeRGBConstant::name() << "'"  ", "  "modeAlpha: '" << ModeAlphaConstant::name() << "'" ;
              glBlendEquationSeparate(ModeRGBConstant::value, ModeAlphaConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& modeRGB, ::gtulu::internal::constant::gl_constant_base const& modeAlpha) {
              __gl_debug << "call glBlendEquationSeparatei "  "buf: '" << buf << "'"  ", "  "modeRGB: '" << modeRGB << "'"  ", "  "modeAlpha: '" << modeAlpha << "'" ;
              glBlendEquationSeparatei(buf, ::std::uint32_t(modeRGB), ::std::uint32_t(modeAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeRGBConstant, typename ModeAlphaConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendEquationSeparatei "  "buf: '" << buf << "'"  ", "  "modeRGB: '" << ModeRGBConstant::name() << "'"  ", "  "modeAlpha: '" << ModeAlphaConstant::name() << "'" ;
              glBlendEquationSeparatei(buf, ModeRGBConstant::value, ModeAlphaConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_func {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& sfactor, ::gtulu::internal::constant::gl_constant_base const& dfactor) {
              __gl_debug << "call glBlendFunc "  "sfactor: '" << sfactor << "'"  ", "  "dfactor: '" << dfactor << "'" ;
              glBlendFunc(::std::uint32_t(sfactor), ::std::uint32_t(dfactor));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SfactorConstant, typename DfactorConstant >
            inline static void call() {
              __gl_debug << "call glBlendFunc "  "sfactor: '" << SfactorConstant::name() << "'"  ", "  "dfactor: '" << DfactorConstant::name() << "'" ;
              glBlendFunc(SfactorConstant::value, DfactorConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& src, ::gtulu::internal::constant::gl_constant_base const& dst) {
              __gl_debug << "call glBlendFunci "  "buf: '" << buf << "'"  ", "  "src: '" << src << "'"  ", "  "dst: '" << dst << "'" ;
              glBlendFunci(buf, ::std::uint32_t(src), ::std::uint32_t(dst));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SrcConstant, typename DstConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendFunci "  "buf: '" << buf << "'"  ", "  "src: '" << SrcConstant::name() << "'"  ", "  "dst: '" << DstConstant::name() << "'" ;
              glBlendFunci(buf, SrcConstant::value, DstConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_func_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& sfactorRGB, ::gtulu::internal::constant::gl_constant_base const& dfactorRGB, ::gtulu::internal::constant::gl_constant_base const& sfactorAlpha, ::gtulu::internal::constant::gl_constant_base const& dfactorAlpha) {
              __gl_debug << "call glBlendFuncSeparate "  "sfactorRGB: '" << sfactorRGB << "'"  ", "  "dfactorRGB: '" << dfactorRGB << "'"  ", "  "sfactorAlpha: '" << sfactorAlpha << "'"  ", "  "dfactorAlpha: '" << dfactorAlpha << "'" ;
              glBlendFuncSeparate(::std::uint32_t(sfactorRGB), ::std::uint32_t(dfactorRGB), ::std::uint32_t(sfactorAlpha), ::std::uint32_t(dfactorAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SfactorRGBConstant, typename DfactorRGBConstant, typename SfactorAlphaConstant, typename DfactorAlphaConstant >
            inline static void call() {
              __gl_debug << "call glBlendFuncSeparate "  "sfactorRGB: '" << SfactorRGBConstant::name() << "'"  ", "  "dfactorRGB: '" << DfactorRGBConstant::name() << "'"  ", "  "sfactorAlpha: '" << SfactorAlphaConstant::name() << "'"  ", "  "dfactorAlpha: '" << DfactorAlphaConstant::name() << "'" ;
              glBlendFuncSeparate(SfactorRGBConstant::value, DfactorRGBConstant::value, SfactorAlphaConstant::value, DfactorAlphaConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& srcRGB, ::gtulu::internal::constant::gl_constant_base const& dstRGB, ::gtulu::internal::constant::gl_constant_base const& srcAlpha, ::gtulu::internal::constant::gl_constant_base const& dstAlpha) {
              __gl_debug << "call glBlendFuncSeparatei "  "buf: '" << buf << "'"  ", "  "srcRGB: '" << srcRGB << "'"  ", "  "dstRGB: '" << dstRGB << "'"  ", "  "srcAlpha: '" << srcAlpha << "'"  ", "  "dstAlpha: '" << dstAlpha << "'" ;
              glBlendFuncSeparatei(buf, ::std::uint32_t(srcRGB), ::std::uint32_t(dstRGB), ::std::uint32_t(srcAlpha), ::std::uint32_t(dstAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SrcRGBConstant, typename DstRGBConstant, typename SrcAlphaConstant, typename DstAlphaConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendFuncSeparatei "  "buf: '" << buf << "'"  ", "  "srcRGB: '" << SrcRGBConstant::name() << "'"  ", "  "dstRGB: '" << DstRGBConstant::name() << "'"  ", "  "srcAlpha: '" << SrcAlphaConstant::name() << "'"  ", "  "dstAlpha: '" << DstAlphaConstant::name() << "'" ;
              glBlendFuncSeparatei(buf, SrcRGBConstant::value, DstRGBConstant::value, SrcAlphaConstant::value, DstAlphaConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_min_sample_shading {
            /**
             */
            inline static void call(float value) {
              __gl_debug << "call glMinSampleShading "  "value: '" << value << "'" ;
              glMinSampleShading(value);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace v4_0
      namespace v4_1 {
        namespace fnc {
        } // namespace fnc
      } // namespace v4_1
      namespace v4_2 {
        namespace fnc {
        } // namespace fnc
      } // namespace v4_2
      } // namespace gl
      namespace arb {
      namespace es2_compatibility {
        namespace fnc {
          /**
           */
          struct gl_clear_depth {
            /**
             */
            inline static void call(GLclampd depth) {
              __gl_debug << "call glClearDepth "  "depth: '" << depth << "'" ;
              glClearDepth(depth);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(float d) {
              __gl_debug << "call glClearDepthf "  "d: '" << d << "'" ;
              glClearDepthf(d);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_depth_range {
            /**
             */
            inline static void call(GLclampd near, GLclampd far) {
              __gl_debug << "call glDepthRange "  "near: '" << near << "'"  ", "  "far: '" << far << "'" ;
              glDepthRange(near, far);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(float n, float f) {
              __gl_debug << "call glDepthRangef "  "n: '" << n << "'"  ", "  "f: '" << f << "'" ;
              glDepthRangef(n, f);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_shader_precision_format {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& shadertype, ::gtulu::internal::constant::gl_constant_base const& precisiontype, ::std::int32_t* range, ::std::int32_t* precision) {
              __gl_debug << "call glGetShaderPrecisionFormat "  "shadertype: '" << shadertype << "'"  ", "  "precisiontype: '" << precisiontype << "'"  ", "  "range: '" << range << "'"  ", "  "precision: '" << precision << "'" ;
              glGetShaderPrecisionFormat(::std::uint32_t(shadertype), ::std::uint32_t(precisiontype), range, precision);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ShadertypeConstant, typename PrecisiontypeConstant >
            inline static void call(::std::int32_t* range, ::std::int32_t* precision) {
              __gl_debug << "call glGetShaderPrecisionFormat "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "precisiontype: '" << PrecisiontypeConstant::name() << "'"  ", "  "range: '" << range << "'"  ", "  "precision: '" << precision << "'" ;
              glGetShaderPrecisionFormat(ShadertypeConstant::value, PrecisiontypeConstant::value, range, precision);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_release_shader_compiler {
            /**
             */
            inline static void call() {
              __gl_debug << "call glReleaseShaderCompiler " "";
              glReleaseShaderCompiler();
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_shader_binary {
            /**
             */
            inline static void call(GLsizei count, ::std::uint32_t const* shaders, ::gtulu::internal::constant::gl_constant_base const& binaryformat, void const* binary, GLsizei length) {
              __gl_debug << "call glShaderBinary "  "count: '" << count << "'"  ", "  "shaders: '" << shaders << "'"  ", "  "binaryformat: '" << binaryformat << "'"  ", "  "binary: '" << binary << "'"  ", "  "length: '" << length << "'" ;
              glShaderBinary(count, shaders, ::std::uint32_t(binaryformat), binary, length);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename BinaryformatConstant >
            inline static void call(GLsizei count, ::std::uint32_t const* shaders, void const* binary, GLsizei length) {
              __gl_debug << "call glShaderBinary "  "count: '" << count << "'"  ", "  "shaders: '" << shaders << "'"  ", "  "binaryformat: '" << BinaryformatConstant::name() << "'"  ", "  "binary: '" << binary << "'"  ", "  "length: '" << length << "'" ;
              glShaderBinary(count, shaders, BinaryformatConstant::value, binary, length);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace es2_compatibility
      namespace base_instance {
        namespace fnc {
          /**
           */
          struct gl_draw_arrays_instanced_base_instance {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::int32_t first, GLsizei count, GLsizei primcount, ::std::uint32_t baseinstance) {
              __gl_debug << "call glDrawArraysInstancedBaseInstance "  "mode: '" << mode << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "baseinstance: '" << baseinstance << "'" ;
              glDrawArraysInstancedBaseInstance(::std::uint32_t(mode), first, count, primcount, baseinstance);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::int32_t first, GLsizei count, GLsizei primcount, ::std::uint32_t baseinstance) {
              __gl_debug << "call glDrawArraysInstancedBaseInstance "  "mode: '" << ModeConstant::name() << "'"  ", "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "baseinstance: '" << baseinstance << "'" ;
              glDrawArraysInstancedBaseInstance(ModeConstant::value, first, count, primcount, baseinstance);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_elements_instanced_base_instance {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices, GLsizei primcount, ::std::uint32_t baseinstance) {
              __gl_debug << "call glDrawElementsInstancedBaseInstance "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "baseinstance: '" << baseinstance << "'" ;
              glDrawElementsInstancedBaseInstance(::std::uint32_t(mode), count, ::std::uint32_t(type), indices, primcount, baseinstance);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei count, void const* indices, GLsizei primcount, ::std::uint32_t baseinstance) {
              __gl_debug << "call glDrawElementsInstancedBaseInstance "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "baseinstance: '" << baseinstance << "'" ;
              glDrawElementsInstancedBaseInstance(ModeConstant::value, count, TypeConstant::value, indices, primcount, baseinstance);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_elements_instanced_base_vertex_base_instance {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices, GLsizei primcount, ::std::int32_t basevertex, ::std::uint32_t baseinstance) {
              __gl_debug << "call glDrawElementsInstancedBaseVertexBaseInstance "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "basevertex: '" << basevertex << "'"  ", "  "baseinstance: '" << baseinstance << "'" ;
              glDrawElementsInstancedBaseVertexBaseInstance(::std::uint32_t(mode), count, ::std::uint32_t(type), indices, primcount, basevertex, baseinstance);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei count, void const* indices, GLsizei primcount, ::std::int32_t basevertex, ::std::uint32_t baseinstance) {
              __gl_debug << "call glDrawElementsInstancedBaseVertexBaseInstance "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "basevertex: '" << basevertex << "'"  ", "  "baseinstance: '" << baseinstance << "'" ;
              glDrawElementsInstancedBaseVertexBaseInstance(ModeConstant::value, count, TypeConstant::value, indices, primcount, basevertex, baseinstance);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace base_instance
      namespace blend_func_extended {
        namespace fnc {
          /**
           */
          struct gl_bind_frag_data_location_indexed {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t colorNumber, ::std::uint32_t index, GLchar const* name) {
              __gl_debug << "call glBindFragDataLocationIndexed "  "program: '" << program << "'"  ", "  "colorNumber: '" << colorNumber << "'"  ", "  "index: '" << index << "'"  ", "  "name: '" << name << "'" ;
              glBindFragDataLocationIndexed(program, colorNumber, index, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_frag_data_index {
            /**
             */
            inline static GLint call(::std::uint32_t program, GLchar const* name) {
              __gl_debug << "call glGetFragDataIndex "  "program: '" << program << "'"  ", "  "name: '" << name << "'" ;
              GLint out = glGetFragDataIndex(program, name);
              __gl_check_error();
              return out;
            }
          
          };
        } // namespace fnc
      } // namespace blend_func_extended
      namespace compressed_texture_pixel_storage {
        namespace fnc {
        } // namespace fnc
      } // namespace compressed_texture_pixel_storage
      namespace conservative_depth {
        namespace fnc {
        } // namespace fnc
      } // namespace conservative_depth
      namespace copy_buffer {
        namespace fnc {
          /**
           */
          struct gl_copy_buffer_sub_data {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& readTarget, ::gtulu::internal::constant::gl_constant_base const& writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
              __gl_debug << "call glCopyBufferSubData "  "readTarget: '" << readTarget << "'"  ", "  "writeTarget: '" << writeTarget << "'"  ", "  "readOffset: '" << readOffset << "'"  ", "  "writeOffset: '" << writeOffset << "'"  ", "  "size: '" << size << "'" ;
              glCopyBufferSubData(::std::uint32_t(readTarget), ::std::uint32_t(writeTarget), readOffset, writeOffset, size);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ReadTargetConstant, typename WriteTargetConstant >
            inline static void call(GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
              __gl_debug << "call glCopyBufferSubData "  "readTarget: '" << ReadTargetConstant::name() << "'"  ", "  "writeTarget: '" << WriteTargetConstant::name() << "'"  ", "  "readOffset: '" << readOffset << "'"  ", "  "writeOffset: '" << writeOffset << "'"  ", "  "size: '" << size << "'" ;
              glCopyBufferSubData(ReadTargetConstant::value, WriteTargetConstant::value, readOffset, writeOffset, size);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace copy_buffer
      namespace debug_output {
        namespace fnc {
          /**
           */
          struct gl_debug_message_callback {
            /**
             */
            inline static void call(GLDEBUGPROCARB callback, void const* userParam) {
              __gl_debug << "call glDebugMessageCallbackARB "  "callback: '" << callback << "'"  ", "  "userParam: '" << userParam << "'" ;
              glDebugMessageCallbackARB(callback, userParam);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_debug_message_control {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& source, ::gtulu::internal::constant::gl_constant_base const& type, ::gtulu::internal::constant::gl_constant_base const& severity, GLsizei count, ::std::uint32_t const* ids, bool enabled) {
              __gl_debug << "call glDebugMessageControlARB "  "source: '" << source << "'"  ", "  "type: '" << type << "'"  ", "  "severity: '" << severity << "'"  ", "  "count: '" << count << "'"  ", "  "ids: '" << ids << "'"  ", "  "enabled: '" << enabled << "'" ;
              glDebugMessageControlARB(::std::uint32_t(source), ::std::uint32_t(type), ::std::uint32_t(severity), count, ids, (enabled ? 1 : 0));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SourceConstant, typename TypeConstant, typename SeverityConstant >
            inline static void call(GLsizei count, ::std::uint32_t const* ids, bool enabled) {
              __gl_debug << "call glDebugMessageControlARB "  "source: '" << SourceConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "severity: '" << SeverityConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "ids: '" << ids << "'"  ", "  "enabled: '" << enabled << "'" ;
              glDebugMessageControlARB(SourceConstant::value, TypeConstant::value, SeverityConstant::value, count, ids, (enabled ? 1 : 0));
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_debug_message_insert {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& source, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& severity, GLsizei length, GLchar const* buf) {
              __gl_debug << "call glDebugMessageInsertARB "  "source: '" << source << "'"  ", "  "type: '" << type << "'"  ", "  "id: '" << id << "'"  ", "  "severity: '" << severity << "'"  ", "  "length: '" << length << "'"  ", "  "buf: '" << buf << "'" ;
              glDebugMessageInsertARB(::std::uint32_t(source), ::std::uint32_t(type), id, ::std::uint32_t(severity), length, buf);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SourceConstant, typename TypeConstant, typename SeverityConstant >
            inline static void call(::std::uint32_t id, GLsizei length, GLchar const* buf) {
              __gl_debug << "call glDebugMessageInsertARB "  "source: '" << SourceConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "id: '" << id << "'"  ", "  "severity: '" << SeverityConstant::name() << "'"  ", "  "length: '" << length << "'"  ", "  "buf: '" << buf << "'" ;
              glDebugMessageInsertARB(SourceConstant::value, TypeConstant::value, id, SeverityConstant::value, length, buf);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_debug_message_log {
            /**
             */
            inline static GLuint call(::std::uint32_t count, GLsizei bufsize, GLenum* sources, GLenum* types, ::std::uint32_t* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog) {
              __gl_debug << "call glGetDebugMessageLogARB "  "count: '" << count << "'"  ", "  "bufsize: '" << bufsize << "'"  ", "  "sources: '" << sources << "'"  ", "  "types: '" << types << "'"  ", "  "ids: '" << ids << "'"  ", "  "severities: '" << severities << "'"  ", "  "lengths: '" << lengths << "'"  ", "  "messageLog: '" << messageLog << "'" ;
              GLuint out = glGetDebugMessageLogARB(count, bufsize, sources, types, ids, severities, lengths, messageLog);
              __gl_check_error();
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
          /**
           */
          struct gl_blend_equation {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glBlendEquation "  "mode: '" << mode << "'" ;
              glBlendEquation(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glBlendEquation "  "mode: '" << ModeConstant::name() << "'" ;
              glBlendEquation(ModeConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glBlendEquationi "  "buf: '" << buf << "'"  ", "  "mode: '" << mode << "'" ;
              glBlendEquationi(buf, ::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendEquationi "  "buf: '" << buf << "'"  ", "  "mode: '" << ModeConstant::name() << "'" ;
              glBlendEquationi(buf, ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_equation_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& modeRGB, ::gtulu::internal::constant::gl_constant_base const& modeAlpha) {
              __gl_debug << "call glBlendEquationSeparate "  "modeRGB: '" << modeRGB << "'"  ", "  "modeAlpha: '" << modeAlpha << "'" ;
              glBlendEquationSeparate(::std::uint32_t(modeRGB), ::std::uint32_t(modeAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeRGBConstant, typename ModeAlphaConstant >
            inline static void call() {
              __gl_debug << "call glBlendEquationSeparate "  "modeRGB: '" << ModeRGBConstant::name() << "'"  ", "  "modeAlpha: '" << ModeAlphaConstant::name() << "'" ;
              glBlendEquationSeparate(ModeRGBConstant::value, ModeAlphaConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& modeRGB, ::gtulu::internal::constant::gl_constant_base const& modeAlpha) {
              __gl_debug << "call glBlendEquationSeparatei "  "buf: '" << buf << "'"  ", "  "modeRGB: '" << modeRGB << "'"  ", "  "modeAlpha: '" << modeAlpha << "'" ;
              glBlendEquationSeparatei(buf, ::std::uint32_t(modeRGB), ::std::uint32_t(modeAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeRGBConstant, typename ModeAlphaConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendEquationSeparatei "  "buf: '" << buf << "'"  ", "  "modeRGB: '" << ModeRGBConstant::name() << "'"  ", "  "modeAlpha: '" << ModeAlphaConstant::name() << "'" ;
              glBlendEquationSeparatei(buf, ModeRGBConstant::value, ModeAlphaConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_func {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& sfactor, ::gtulu::internal::constant::gl_constant_base const& dfactor) {
              __gl_debug << "call glBlendFunc "  "sfactor: '" << sfactor << "'"  ", "  "dfactor: '" << dfactor << "'" ;
              glBlendFunc(::std::uint32_t(sfactor), ::std::uint32_t(dfactor));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SfactorConstant, typename DfactorConstant >
            inline static void call() {
              __gl_debug << "call glBlendFunc "  "sfactor: '" << SfactorConstant::name() << "'"  ", "  "dfactor: '" << DfactorConstant::name() << "'" ;
              glBlendFunc(SfactorConstant::value, DfactorConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& src, ::gtulu::internal::constant::gl_constant_base const& dst) {
              __gl_debug << "call glBlendFunci "  "buf: '" << buf << "'"  ", "  "src: '" << src << "'"  ", "  "dst: '" << dst << "'" ;
              glBlendFunci(buf, ::std::uint32_t(src), ::std::uint32_t(dst));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SrcConstant, typename DstConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendFunci "  "buf: '" << buf << "'"  ", "  "src: '" << SrcConstant::name() << "'"  ", "  "dst: '" << DstConstant::name() << "'" ;
              glBlendFunci(buf, SrcConstant::value, DstConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blend_func_separate {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& sfactorRGB, ::gtulu::internal::constant::gl_constant_base const& dfactorRGB, ::gtulu::internal::constant::gl_constant_base const& sfactorAlpha, ::gtulu::internal::constant::gl_constant_base const& dfactorAlpha) {
              __gl_debug << "call glBlendFuncSeparate "  "sfactorRGB: '" << sfactorRGB << "'"  ", "  "dfactorRGB: '" << dfactorRGB << "'"  ", "  "sfactorAlpha: '" << sfactorAlpha << "'"  ", "  "dfactorAlpha: '" << dfactorAlpha << "'" ;
              glBlendFuncSeparate(::std::uint32_t(sfactorRGB), ::std::uint32_t(dfactorRGB), ::std::uint32_t(sfactorAlpha), ::std::uint32_t(dfactorAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SfactorRGBConstant, typename DfactorRGBConstant, typename SfactorAlphaConstant, typename DfactorAlphaConstant >
            inline static void call() {
              __gl_debug << "call glBlendFuncSeparate "  "sfactorRGB: '" << SfactorRGBConstant::name() << "'"  ", "  "dfactorRGB: '" << DfactorRGBConstant::name() << "'"  ", "  "sfactorAlpha: '" << SfactorAlphaConstant::name() << "'"  ", "  "dfactorAlpha: '" << DfactorAlphaConstant::name() << "'" ;
              glBlendFuncSeparate(SfactorRGBConstant::value, DfactorRGBConstant::value, SfactorAlphaConstant::value, DfactorAlphaConstant::value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t buf, ::gtulu::internal::constant::gl_constant_base const& srcRGB, ::gtulu::internal::constant::gl_constant_base const& dstRGB, ::gtulu::internal::constant::gl_constant_base const& srcAlpha, ::gtulu::internal::constant::gl_constant_base const& dstAlpha) {
              __gl_debug << "call glBlendFuncSeparatei "  "buf: '" << buf << "'"  ", "  "srcRGB: '" << srcRGB << "'"  ", "  "dstRGB: '" << dstRGB << "'"  ", "  "srcAlpha: '" << srcAlpha << "'"  ", "  "dstAlpha: '" << dstAlpha << "'" ;
              glBlendFuncSeparatei(buf, ::std::uint32_t(srcRGB), ::std::uint32_t(dstRGB), ::std::uint32_t(srcAlpha), ::std::uint32_t(dstAlpha));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename SrcRGBConstant, typename DstRGBConstant, typename SrcAlphaConstant, typename DstAlphaConstant >
            inline static void call(::std::uint32_t buf) {
              __gl_debug << "call glBlendFuncSeparatei "  "buf: '" << buf << "'"  ", "  "srcRGB: '" << SrcRGBConstant::name() << "'"  ", "  "dstRGB: '" << DstRGBConstant::name() << "'"  ", "  "srcAlpha: '" << SrcAlphaConstant::name() << "'"  ", "  "dstAlpha: '" << DstAlphaConstant::name() << "'" ;
              glBlendFuncSeparatei(buf, SrcRGBConstant::value, DstRGBConstant::value, SrcAlphaConstant::value, DstAlphaConstant::value);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace draw_buffers_blend
      namespace draw_elements_base_vertex {
        namespace fnc {
          /**
           */
          struct gl_draw_elements_base_vertex {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices, ::std::int32_t basevertex) {
              __gl_debug << "call glDrawElementsBaseVertex "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glDrawElementsBaseVertex(::std::uint32_t(mode), count, ::std::uint32_t(type), indices, basevertex);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei count, void const* indices, ::std::int32_t basevertex) {
              __gl_debug << "call glDrawElementsBaseVertex "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glDrawElementsBaseVertex(ModeConstant::value, count, TypeConstant::value, indices, basevertex);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_elements_instanced_base_vertex {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices, GLsizei primcount, ::std::int32_t basevertex) {
              __gl_debug << "call glDrawElementsInstancedBaseVertex "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glDrawElementsInstancedBaseVertex(::std::uint32_t(mode), count, ::std::uint32_t(type), indices, primcount, basevertex);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei count, void const* indices, GLsizei primcount, ::std::int32_t basevertex) {
              __gl_debug << "call glDrawElementsInstancedBaseVertex "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glDrawElementsInstancedBaseVertex(ModeConstant::value, count, TypeConstant::value, indices, primcount, basevertex);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_range_elements_base_vertex {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::uint32_t start, ::std::uint32_t end, GLsizei count, ::gtulu::internal::constant::gl_constant_base const& type, void const* indices, ::std::int32_t basevertex) {
              __gl_debug << "call glDrawRangeElementsBaseVertex "  "mode: '" << mode << "'"  ", "  "start: '" << start << "'"  ", "  "end: '" << end << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glDrawRangeElementsBaseVertex(::std::uint32_t(mode), start, end, count, ::std::uint32_t(type), indices, basevertex);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(::std::uint32_t start, ::std::uint32_t end, GLsizei count, void const* indices, ::std::int32_t basevertex) {
              __gl_debug << "call glDrawRangeElementsBaseVertex "  "mode: '" << ModeConstant::name() << "'"  ", "  "start: '" << start << "'"  ", "  "end: '" << end << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glDrawRangeElementsBaseVertex(ModeConstant::value, start, end, count, TypeConstant::value, indices, basevertex);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_multi_draw_elements_base_vertex {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, GLsizei const* count, ::gtulu::internal::constant::gl_constant_base const& type, void const** indices, GLsizei primcount, ::std::int32_t const* basevertex) {
              __gl_debug << "call glMultiDrawElementsBaseVertex "  "mode: '" << mode << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << type << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glMultiDrawElementsBaseVertex(::std::uint32_t(mode), count, ::std::uint32_t(type), indices, primcount, basevertex);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(GLsizei const* count, void const** indices, GLsizei primcount, ::std::int32_t const* basevertex) {
              __gl_debug << "call glMultiDrawElementsBaseVertex "  "mode: '" << ModeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indices: '" << indices << "'"  ", "  "primcount: '" << primcount << "'"  ", "  "basevertex: '" << basevertex << "'" ;
              glMultiDrawElementsBaseVertex(ModeConstant::value, count, TypeConstant::value, indices, primcount, basevertex);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace draw_elements_base_vertex
      namespace draw_indirect {
        namespace fnc {
          /**
           */
          struct gl_draw_arrays_indirect {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, void const* indirect) {
              __gl_debug << "call glDrawArraysIndirect "  "mode: '" << mode << "'"  ", "  "indirect: '" << indirect << "'" ;
              glDrawArraysIndirect(::std::uint32_t(mode), indirect);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(void const* indirect) {
              __gl_debug << "call glDrawArraysIndirect "  "mode: '" << ModeConstant::name() << "'"  ", "  "indirect: '" << indirect << "'" ;
              glDrawArraysIndirect(ModeConstant::value, indirect);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_elements_indirect {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::gtulu::internal::constant::gl_constant_base const& type, void const* indirect) {
              __gl_debug << "call glDrawElementsIndirect "  "mode: '" << mode << "'"  ", "  "type: '" << type << "'"  ", "  "indirect: '" << indirect << "'" ;
              glDrawElementsIndirect(::std::uint32_t(mode), ::std::uint32_t(type), indirect);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant, typename TypeConstant >
            inline static void call(void const* indirect) {
              __gl_debug << "call glDrawElementsIndirect "  "mode: '" << ModeConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "indirect: '" << indirect << "'" ;
              glDrawElementsIndirect(ModeConstant::value, TypeConstant::value, indirect);
              __gl_check_error();
              
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
          /**
           */
          struct gl_bind_framebuffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t framebuffer) {
              __gl_debug << "call glBindFramebuffer "  "target: '" << target << "'"  ", "  "framebuffer: '" << framebuffer << "'" ;
              glBindFramebuffer(::std::uint32_t(target), framebuffer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t framebuffer) {
              __gl_debug << "call glBindFramebuffer "  "target: '" << TargetConstant::name() << "'"  ", "  "framebuffer: '" << framebuffer << "'" ;
              glBindFramebuffer(TargetConstant::value, framebuffer);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_bind_renderbuffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t renderbuffer) {
              __gl_debug << "call glBindRenderbuffer "  "target: '" << target << "'"  ", "  "renderbuffer: '" << renderbuffer << "'" ;
              glBindRenderbuffer(::std::uint32_t(target), renderbuffer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t renderbuffer) {
              __gl_debug << "call glBindRenderbuffer "  "target: '" << TargetConstant::name() << "'"  ", "  "renderbuffer: '" << renderbuffer << "'" ;
              glBindRenderbuffer(TargetConstant::value, renderbuffer);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_blit_framebuffer {
            /**
             */
            inline static void call(::std::int32_t srcX0, ::std::int32_t srcY0, ::std::int32_t srcX1, ::std::int32_t srcY1, ::std::int32_t dstX0, ::std::int32_t dstY0, ::std::int32_t dstX1, ::std::int32_t dstY1, GLbitfield mask, ::gtulu::internal::constant::gl_constant_base const& filter) {
              __gl_debug << "call glBlitFramebuffer "  "srcX0: '" << srcX0 << "'"  ", "  "srcY0: '" << srcY0 << "'"  ", "  "srcX1: '" << srcX1 << "'"  ", "  "srcY1: '" << srcY1 << "'"  ", "  "dstX0: '" << dstX0 << "'"  ", "  "dstY0: '" << dstY0 << "'"  ", "  "dstX1: '" << dstX1 << "'"  ", "  "dstY1: '" << dstY1 << "'"  ", "  "mask: '" << mask << "'"  ", "  "filter: '" << filter << "'" ;
              glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, ::std::uint32_t(filter));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FilterConstant >
            inline static void call(::std::int32_t srcX0, ::std::int32_t srcY0, ::std::int32_t srcX1, ::std::int32_t srcY1, ::std::int32_t dstX0, ::std::int32_t dstY0, ::std::int32_t dstX1, ::std::int32_t dstY1, GLbitfield mask) {
              __gl_debug << "call glBlitFramebuffer "  "srcX0: '" << srcX0 << "'"  ", "  "srcY0: '" << srcY0 << "'"  ", "  "srcX1: '" << srcX1 << "'"  ", "  "srcY1: '" << srcY1 << "'"  ", "  "dstX0: '" << dstX0 << "'"  ", "  "dstY0: '" << dstY0 << "'"  ", "  "dstX1: '" << dstX1 << "'"  ", "  "dstY1: '" << dstY1 << "'"  ", "  "mask: '" << mask << "'"  ", "  "filter: '" << FilterConstant::name() << "'" ;
              glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, FilterConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_check_framebuffer_status {
            /**
             */
            inline static GLenum call(::gtulu::internal::constant::gl_constant_base const& target) {
              __gl_debug << "call glCheckFramebufferStatus "  "target: '" << target << "'" ;
              GLenum out = glCheckFramebufferStatus(::std::uint32_t(target));
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static GLenum call() {
              __gl_debug << "call glCheckFramebufferStatus "  "target: '" << TargetConstant::name() << "'" ;
              GLenum out = glCheckFramebufferStatus(TargetConstant::value);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_delete_framebuffers {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* framebuffers) {
              __gl_debug << "call glDeleteFramebuffers "  "n: '" << n << "'"  ", "  "framebuffers: '" << framebuffers << "'" ;
              glDeleteFramebuffers(n, framebuffers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_renderbuffers {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* renderbuffers) {
              __gl_debug << "call glDeleteRenderbuffers "  "n: '" << n << "'"  ", "  "renderbuffers: '" << renderbuffers << "'" ;
              glDeleteRenderbuffers(n, renderbuffers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_framebuffer_renderbuffer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& attachment, ::gtulu::internal::constant::gl_constant_base const& renderbuffertarget, ::std::uint32_t renderbuffer) {
              __gl_debug << "call glFramebufferRenderbuffer "  "target: '" << target << "'"  ", "  "attachment: '" << attachment << "'"  ", "  "renderbuffertarget: '" << renderbuffertarget << "'"  ", "  "renderbuffer: '" << renderbuffer << "'" ;
              glFramebufferRenderbuffer(::std::uint32_t(target), ::std::uint32_t(attachment), ::std::uint32_t(renderbuffertarget), renderbuffer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename AttachmentConstant, typename RenderbuffertargetConstant >
            inline static void call(::std::uint32_t renderbuffer) {
              __gl_debug << "call glFramebufferRenderbuffer "  "target: '" << TargetConstant::name() << "'"  ", "  "attachment: '" << AttachmentConstant::name() << "'"  ", "  "renderbuffertarget: '" << RenderbuffertargetConstant::name() << "'"  ", "  "renderbuffer: '" << renderbuffer << "'" ;
              glFramebufferRenderbuffer(TargetConstant::value, AttachmentConstant::value, RenderbuffertargetConstant::value, renderbuffer);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_framebuffer_texture_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& attachment, ::gtulu::internal::constant::gl_constant_base const& textarget, ::std::uint32_t texture, ::std::int32_t level) {
              __gl_debug << "call glFramebufferTexture1D "  "target: '" << target << "'"  ", "  "attachment: '" << attachment << "'"  ", "  "textarget: '" << textarget << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'" ;
              glFramebufferTexture1D(::std::uint32_t(target), ::std::uint32_t(attachment), ::std::uint32_t(textarget), texture, level);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename AttachmentConstant, typename TextargetConstant >
            inline static void call(::std::uint32_t texture, ::std::int32_t level) {
              __gl_debug << "call glFramebufferTexture1D "  "target: '" << TargetConstant::name() << "'"  ", "  "attachment: '" << AttachmentConstant::name() << "'"  ", "  "textarget: '" << TextargetConstant::name() << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'" ;
              glFramebufferTexture1D(TargetConstant::value, AttachmentConstant::value, TextargetConstant::value, texture, level);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_framebuffer_texture_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& attachment, ::gtulu::internal::constant::gl_constant_base const& textarget, ::std::uint32_t texture, ::std::int32_t level) {
              __gl_debug << "call glFramebufferTexture2D "  "target: '" << target << "'"  ", "  "attachment: '" << attachment << "'"  ", "  "textarget: '" << textarget << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'" ;
              glFramebufferTexture2D(::std::uint32_t(target), ::std::uint32_t(attachment), ::std::uint32_t(textarget), texture, level);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename AttachmentConstant, typename TextargetConstant >
            inline static void call(::std::uint32_t texture, ::std::int32_t level) {
              __gl_debug << "call glFramebufferTexture2D "  "target: '" << TargetConstant::name() << "'"  ", "  "attachment: '" << AttachmentConstant::name() << "'"  ", "  "textarget: '" << TextargetConstant::name() << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'" ;
              glFramebufferTexture2D(TargetConstant::value, AttachmentConstant::value, TextargetConstant::value, texture, level);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_framebuffer_texture_3d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& attachment, ::gtulu::internal::constant::gl_constant_base const& textarget, ::std::uint32_t texture, ::std::int32_t level, ::std::int32_t zoffset) {
              __gl_debug << "call glFramebufferTexture3D "  "target: '" << target << "'"  ", "  "attachment: '" << attachment << "'"  ", "  "textarget: '" << textarget << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'"  ", "  "zoffset: '" << zoffset << "'" ;
              glFramebufferTexture3D(::std::uint32_t(target), ::std::uint32_t(attachment), ::std::uint32_t(textarget), texture, level, zoffset);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename AttachmentConstant, typename TextargetConstant >
            inline static void call(::std::uint32_t texture, ::std::int32_t level, ::std::int32_t zoffset) {
              __gl_debug << "call glFramebufferTexture3D "  "target: '" << TargetConstant::name() << "'"  ", "  "attachment: '" << AttachmentConstant::name() << "'"  ", "  "textarget: '" << TextargetConstant::name() << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'"  ", "  "zoffset: '" << zoffset << "'" ;
              glFramebufferTexture3D(TargetConstant::value, AttachmentConstant::value, TextargetConstant::value, texture, level, zoffset);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_framebuffer_texture_layer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& attachment, ::std::uint32_t texture, ::std::int32_t level, ::std::int32_t layer) {
              __gl_debug << "call glFramebufferTextureLayer "  "target: '" << target << "'"  ", "  "attachment: '" << attachment << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'"  ", "  "layer: '" << layer << "'" ;
              glFramebufferTextureLayer(::std::uint32_t(target), ::std::uint32_t(attachment), texture, level, layer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename AttachmentConstant >
            inline static void call(::std::uint32_t texture, ::std::int32_t level, ::std::int32_t layer) {
              __gl_debug << "call glFramebufferTextureLayer "  "target: '" << TargetConstant::name() << "'"  ", "  "attachment: '" << AttachmentConstant::name() << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'"  ", "  "layer: '" << layer << "'" ;
              glFramebufferTextureLayer(TargetConstant::value, AttachmentConstant::value, texture, level, layer);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_framebuffers {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* framebuffers) {
              __gl_debug << "call glGenFramebuffers "  "n: '" << n << "'"  ", "  "framebuffers: '" << framebuffers << "'" ;
              glGenFramebuffers(n, framebuffers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_renderbuffers {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* renderbuffers) {
              __gl_debug << "call glGenRenderbuffers "  "n: '" << n << "'"  ", "  "renderbuffers: '" << renderbuffers << "'" ;
              glGenRenderbuffers(n, renderbuffers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_generate_mipmap {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target) {
              __gl_debug << "call glGenerateMipmap "  "target: '" << target << "'" ;
              glGenerateMipmap(::std::uint32_t(target));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call() {
              __gl_debug << "call glGenerateMipmap "  "target: '" << TargetConstant::name() << "'" ;
              glGenerateMipmap(TargetConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_framebuffer_attachment_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& attachment, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetFramebufferAttachmentParameteriv "  "target: '" << target << "'"  ", "  "attachment: '" << attachment << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetFramebufferAttachmentParameteriv(::std::uint32_t(target), ::std::uint32_t(attachment), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename AttachmentConstant, typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetFramebufferAttachmentParameteriv "  "target: '" << TargetConstant::name() << "'"  ", "  "attachment: '" << AttachmentConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetFramebufferAttachmentParameteriv(TargetConstant::value, AttachmentConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_renderbuffer_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetRenderbufferParameteriv "  "target: '" << target << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetRenderbufferParameteriv(::std::uint32_t(target), ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetRenderbufferParameteriv "  "target: '" << TargetConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetRenderbufferParameteriv(TargetConstant::value, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_framebuffer {
            /**
             */
            inline static GLboolean call(::std::uint32_t framebuffer) {
              __gl_debug << "call glIsFramebuffer "  "framebuffer: '" << framebuffer << "'" ;
              GLboolean out = glIsFramebuffer(framebuffer);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_is_renderbuffer {
            /**
             */
            inline static GLboolean call(::std::uint32_t renderbuffer) {
              __gl_debug << "call glIsRenderbuffer "  "renderbuffer: '" << renderbuffer << "'" ;
              GLboolean out = glIsRenderbuffer(renderbuffer);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_renderbuffer_storage {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height) {
              __gl_debug << "call glRenderbufferStorage "  "target: '" << target << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glRenderbufferStorage(::std::uint32_t(target), ::std::uint32_t(internalformat), width, height);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(GLsizei width, GLsizei height) {
              __gl_debug << "call glRenderbufferStorage "  "target: '" << TargetConstant::name() << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glRenderbufferStorage(TargetConstant::value, InternalformatConstant::value, width, height);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_renderbuffer_storage_multisample {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLsizei samples, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height) {
              __gl_debug << "call glRenderbufferStorageMultisample "  "target: '" << target << "'"  ", "  "samples: '" << samples << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glRenderbufferStorageMultisample(::std::uint32_t(target), samples, ::std::uint32_t(internalformat), width, height);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(GLsizei samples, GLsizei width, GLsizei height) {
              __gl_debug << "call glRenderbufferStorageMultisample "  "target: '" << TargetConstant::name() << "'"  ", "  "samples: '" << samples << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glRenderbufferStorageMultisample(TargetConstant::value, samples, InternalformatConstant::value, width, height);
              __gl_check_error();
              
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
          /**
           */
          struct gl_get_program_binary {
            /**
             */
            inline static void call(::std::uint32_t program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary) {
              __gl_debug << "call glGetProgramBinary "  "program: '" << program << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "binaryFormat: '" << binaryFormat << "'"  ", "  "binary: '" << binary << "'" ;
              glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_binary {
            /**
             */
            inline static void call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& binaryFormat, void const* binary, GLsizei length) {
              __gl_debug << "call glProgramBinary "  "program: '" << program << "'"  ", "  "binaryFormat: '" << binaryFormat << "'"  ", "  "binary: '" << binary << "'"  ", "  "length: '" << length << "'" ;
              glProgramBinary(program, ::std::uint32_t(binaryFormat), binary, length);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename BinaryFormatConstant >
            inline static void call(::std::uint32_t program, void const* binary, GLsizei length) {
              __gl_debug << "call glProgramBinary "  "program: '" << program << "'"  ", "  "binaryFormat: '" << BinaryFormatConstant::name() << "'"  ", "  "binary: '" << binary << "'"  ", "  "length: '" << length << "'" ;
              glProgramBinary(program, BinaryFormatConstant::value, binary, length);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_parameter {
            /**
             */
            inline static void call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t value) {
              __gl_debug << "call glProgramParameteri "  "program: '" << program << "'"  ", "  "pname: '" << pname << "'"  ", "  "value: '" << value << "'" ;
              glProgramParameteri(program, ::std::uint32_t(pname), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t program, ::std::int32_t value) {
              __gl_debug << "call glProgramParameteri "  "program: '" << program << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glProgramParameteri(program, PnameConstant::value, value);
              __gl_check_error();
              
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
          /**
           */
          struct gl_get_uniform {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, float* params) {
              __gl_debug << "call glGetUniformfv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformfv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::int32_t* params) {
              __gl_debug << "call glGetUniformiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformiv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::uint32_t* params) {
              __gl_debug << "call glGetUniformuiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformuiv(program, location, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, double* params) {
              __gl_debug << "call glGetUniformdv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformdv(program, location, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_1 {
            /**
             */
            inline static void call(::std::int32_t location, float v0) {
              __gl_debug << "call glUniform1f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1f(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0) {
              __gl_debug << "call glUniform1i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1i(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform1fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform1iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0) {
              __gl_debug << "call glUniform1ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glUniform1ui(location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform1uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x) {
              __gl_debug << "call glUniform1d "  "location: '" << location << "'"  ", "  "x: '" << x << "'" ;
              glUniform1d(location, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform1dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform1dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_2 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1) {
              __gl_debug << "call glUniform2f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2f(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1) {
              __gl_debug << "call glUniform2i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2i(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform2iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1) {
              __gl_debug << "call glUniform2ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glUniform2ui(location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform2uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y) {
              __gl_debug << "call glUniform2d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glUniform2d(location, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform2dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_3 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1, float v2) {
              __gl_debug << "call glUniform3f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3f(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2) {
              __gl_debug << "call glUniform3i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3i(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform3iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2) {
              __gl_debug << "call glUniform3ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glUniform3ui(location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform3uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y, double z) {
              __gl_debug << "call glUniform3d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glUniform3d(location, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform3dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_4 {
            /**
             */
            inline static void call(::std::int32_t location, float v0, float v1, float v2, float v3) {
              __gl_debug << "call glUniform4f "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4f(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2, ::std::int32_t v3) {
              __gl_debug << "call glUniform4i "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4i(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glUniform4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4fv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glUniform4iv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4iv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2, ::std::uint32_t v3) {
              __gl_debug << "call glUniform4ui "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glUniform4ui(location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glUniform4uiv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4uiv(location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, double x, double y, double z, double w) {
              __gl_debug << "call glUniform4d "  "location: '" << location << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glUniform4d(location, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glUniform4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glUniform4dv(location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_2 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_2x3 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix2x3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x3fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix2x3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x3dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_2x4 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix2x4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x4fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix2x4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix2x4dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_3 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_3x2 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix3x2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x2fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix3x2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x2dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_3x4 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix3x4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x4fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix3x4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix3x4dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_4 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix4fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix4dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_4x2 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix4x2fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x2fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix4x2dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x2dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_matrix_4x3 {
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glUniformMatrix4x3fv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x3fv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glUniformMatrix4x3dv "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glUniformMatrix4x3dv(location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
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
      namespace internalformat_query {
        namespace fnc {
          /**
           */
          struct gl_get_internalformat {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& internalformat, ::gtulu::internal::constant::gl_constant_base const& pname, GLsizei bufSize, ::std::int32_t* params) {
              __gl_debug << "call glGetInternalformativ "  "target: '" << target << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "pname: '" << pname << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "params: '" << params << "'" ;
              glGetInternalformativ(::std::uint32_t(target), ::std::uint32_t(internalformat), ::std::uint32_t(pname), bufSize, params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant, typename PnameConstant >
            inline static void call(GLsizei bufSize, ::std::int32_t* params) {
              __gl_debug << "call glGetInternalformativ "  "target: '" << TargetConstant::name() << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "params: '" << params << "'" ;
              glGetInternalformativ(TargetConstant::value, InternalformatConstant::value, PnameConstant::value, bufSize, params);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace internalformat_query
      namespace map_buffer_alignment {
        namespace fnc {
        } // namespace fnc
      } // namespace map_buffer_alignment
      namespace map_buffer_range {
        namespace fnc {
          /**
           */
          struct gl_flush_mapped_buffer_range {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLintptr offset, GLsizeiptr length) {
              __gl_debug << "call glFlushMappedBufferRange "  "target: '" << target << "'"  ", "  "offset: '" << offset << "'"  ", "  "length: '" << length << "'" ;
              glFlushMappedBufferRange(::std::uint32_t(target), offset, length);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(GLintptr offset, GLsizeiptr length) {
              __gl_debug << "call glFlushMappedBufferRange "  "target: '" << TargetConstant::name() << "'"  ", "  "offset: '" << offset << "'"  ", "  "length: '" << length << "'" ;
              glFlushMappedBufferRange(TargetConstant::value, offset, length);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_map_buffer_range {
            /**
             */
            inline static GLvoid* call(::gtulu::internal::constant::gl_constant_base const& target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
              __gl_debug << "call glMapBufferRange "  "target: '" << target << "'"  ", "  "offset: '" << offset << "'"  ", "  "length: '" << length << "'"  ", "  "access: '" << access << "'" ;
              GLvoid* out = glMapBufferRange(::std::uint32_t(target), offset, length, access);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static GLvoid* call(GLintptr offset, GLsizeiptr length, GLbitfield access) {
              __gl_debug << "call glMapBufferRange "  "target: '" << TargetConstant::name() << "'"  ", "  "offset: '" << offset << "'"  ", "  "length: '" << length << "'"  ", "  "access: '" << access << "'" ;
              GLvoid* out = glMapBufferRange(TargetConstant::value, offset, length, access);
              __gl_check_error();
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
          /**
           */
          struct gl_provoking_vertex {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode) {
              __gl_debug << "call glProvokingVertex "  "mode: '" << mode << "'" ;
              glProvokingVertex(::std::uint32_t(mode));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call() {
              __gl_debug << "call glProvokingVertex "  "mode: '" << ModeConstant::name() << "'" ;
              glProvokingVertex(ModeConstant::value);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace provoking_vertex
      namespace robustness {
        namespace fnc {
          /**
           */
          struct gl_get_graphics_reset_status {
            /**
             */
            inline static GLenum call() {
              __gl_debug << "call glGetGraphicsResetStatusARB " "";
              GLenum out = glGetGraphicsResetStatusARB();
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_n_color_table {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei bufSize, void* table) {
              __gl_debug << "call glGetnColorTableARB "  "target: '" << target << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "table: '" << table << "'" ;
              glGetnColorTableARB(::std::uint32_t(target), ::std::uint32_t(format), ::std::uint32_t(type), bufSize, table);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(GLsizei bufSize, void* table) {
              __gl_debug << "call glGetnColorTableARB "  "target: '" << TargetConstant::name() << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "table: '" << table << "'" ;
              glGetnColorTableARB(TargetConstant::value, FormatConstant::value, TypeConstant::value, bufSize, table);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_compressed_tex_image {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t lod, GLsizei bufSize, void* img) {
              __gl_debug << "call glGetnCompressedTexImageARB "  "target: '" << target << "'"  ", "  "lod: '" << lod << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "img: '" << img << "'" ;
              glGetnCompressedTexImageARB(::std::uint32_t(target), lod, bufSize, img);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::int32_t lod, GLsizei bufSize, void* img) {
              __gl_debug << "call glGetnCompressedTexImageARB "  "target: '" << TargetConstant::name() << "'"  ", "  "lod: '" << lod << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "img: '" << img << "'" ;
              glGetnCompressedTexImageARB(TargetConstant::value, lod, bufSize, img);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_convolution_filter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei bufSize, void* image) {
              __gl_debug << "call glGetnConvolutionFilterARB "  "target: '" << target << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "image: '" << image << "'" ;
              glGetnConvolutionFilterARB(::std::uint32_t(target), ::std::uint32_t(format), ::std::uint32_t(type), bufSize, image);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(GLsizei bufSize, void* image) {
              __gl_debug << "call glGetnConvolutionFilterARB "  "target: '" << TargetConstant::name() << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "image: '" << image << "'" ;
              glGetnConvolutionFilterARB(TargetConstant::value, FormatConstant::value, TypeConstant::value, bufSize, image);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_histogram {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, bool reset, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei bufSize, void* values) {
              __gl_debug << "call glGetnHistogramARB "  "target: '" << target << "'"  ", "  "reset: '" << reset << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnHistogramARB(::std::uint32_t(target), (reset ? 1 : 0), ::std::uint32_t(format), ::std::uint32_t(type), bufSize, values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(bool reset, GLsizei bufSize, void* values) {
              __gl_debug << "call glGetnHistogramARB "  "target: '" << TargetConstant::name() << "'"  ", "  "reset: '" << reset << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnHistogramARB(TargetConstant::value, (reset ? 1 : 0), FormatConstant::value, TypeConstant::value, bufSize, values);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_map {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& query, GLsizei bufSize, double* v) {
              __gl_debug << "call glGetnMapdvARB "  "target: '" << target << "'"  ", "  "query: '" << query << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "v: '" << v << "'" ;
              glGetnMapdvARB(::std::uint32_t(target), ::std::uint32_t(query), bufSize, v);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename QueryConstant >
            inline static void call(GLsizei bufSize, double* v) {
              __gl_debug << "call glGetnMapdvARB "  "target: '" << TargetConstant::name() << "'"  ", "  "query: '" << QueryConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "v: '" << v << "'" ;
              glGetnMapdvARB(TargetConstant::value, QueryConstant::value, bufSize, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& query, GLsizei bufSize, float* v) {
              __gl_debug << "call glGetnMapfvARB "  "target: '" << target << "'"  ", "  "query: '" << query << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "v: '" << v << "'" ;
              glGetnMapfvARB(::std::uint32_t(target), ::std::uint32_t(query), bufSize, v);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename QueryConstant >
            inline static void call(GLsizei bufSize, float* v) {
              __gl_debug << "call glGetnMapfvARB "  "target: '" << TargetConstant::name() << "'"  ", "  "query: '" << QueryConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "v: '" << v << "'" ;
              glGetnMapfvARB(TargetConstant::value, QueryConstant::value, bufSize, v);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& query, GLsizei bufSize, ::std::int32_t* v) {
              __gl_debug << "call glGetnMapivARB "  "target: '" << target << "'"  ", "  "query: '" << query << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "v: '" << v << "'" ;
              glGetnMapivARB(::std::uint32_t(target), ::std::uint32_t(query), bufSize, v);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename QueryConstant >
            inline static void call(GLsizei bufSize, ::std::int32_t* v) {
              __gl_debug << "call glGetnMapivARB "  "target: '" << TargetConstant::name() << "'"  ", "  "query: '" << QueryConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "v: '" << v << "'" ;
              glGetnMapivARB(TargetConstant::value, QueryConstant::value, bufSize, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_minmax {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, bool reset, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei bufSize, void* values) {
              __gl_debug << "call glGetnMinmaxARB "  "target: '" << target << "'"  ", "  "reset: '" << reset << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnMinmaxARB(::std::uint32_t(target), (reset ? 1 : 0), ::std::uint32_t(format), ::std::uint32_t(type), bufSize, values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(bool reset, GLsizei bufSize, void* values) {
              __gl_debug << "call glGetnMinmaxARB "  "target: '" << TargetConstant::name() << "'"  ", "  "reset: '" << reset << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnMinmaxARB(TargetConstant::value, (reset ? 1 : 0), FormatConstant::value, TypeConstant::value, bufSize, values);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_pixel_map {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& map, GLsizei bufSize, float* values) {
              __gl_debug << "call glGetnPixelMapfvARB "  "map: '" << map << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnPixelMapfvARB(::std::uint32_t(map), bufSize, values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename MapConstant >
            inline static void call(GLsizei bufSize, float* values) {
              __gl_debug << "call glGetnPixelMapfvARB "  "map: '" << MapConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnPixelMapfvARB(MapConstant::value, bufSize, values);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& map, GLsizei bufSize, ::std::uint32_t* values) {
              __gl_debug << "call glGetnPixelMapuivARB "  "map: '" << map << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnPixelMapuivARB(::std::uint32_t(map), bufSize, values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename MapConstant >
            inline static void call(GLsizei bufSize, ::std::uint32_t* values) {
              __gl_debug << "call glGetnPixelMapuivARB "  "map: '" << MapConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnPixelMapuivARB(MapConstant::value, bufSize, values);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& map, GLsizei bufSize, ::std::uint16_t* values) {
              __gl_debug << "call glGetnPixelMapusvARB "  "map: '" << map << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnPixelMapusvARB(::std::uint32_t(map), bufSize, values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename MapConstant >
            inline static void call(GLsizei bufSize, ::std::uint16_t* values) {
              __gl_debug << "call glGetnPixelMapusvARB "  "map: '" << MapConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "values: '" << values << "'" ;
              glGetnPixelMapusvARB(MapConstant::value, bufSize, values);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_polygon_stipple {
            /**
             */
            inline static void call(GLsizei bufSize, ::std::uint8_t* pattern) {
              __gl_debug << "call glGetnPolygonStippleARB "  "bufSize: '" << bufSize << "'"  ", "  "pattern: '" << pattern << "'" ;
              glGetnPolygonStippleARB(bufSize, pattern);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_separable_filter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei rowBufSize, void* row, GLsizei columnBufSize, void* column, void* span) {
              __gl_debug << "call glGetnSeparableFilterARB "  "target: '" << target << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "rowBufSize: '" << rowBufSize << "'"  ", "  "row: '" << row << "'"  ", "  "columnBufSize: '" << columnBufSize << "'"  ", "  "column: '" << column << "'"  ", "  "span: '" << span << "'" ;
              glGetnSeparableFilterARB(::std::uint32_t(target), ::std::uint32_t(format), ::std::uint32_t(type), rowBufSize, row, columnBufSize, column, span);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(GLsizei rowBufSize, void* row, GLsizei columnBufSize, void* column, void* span) {
              __gl_debug << "call glGetnSeparableFilterARB "  "target: '" << TargetConstant::name() << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "rowBufSize: '" << rowBufSize << "'"  ", "  "row: '" << row << "'"  ", "  "columnBufSize: '" << columnBufSize << "'"  ", "  "column: '" << column << "'"  ", "  "span: '" << span << "'" ;
              glGetnSeparableFilterARB(TargetConstant::value, FormatConstant::value, TypeConstant::value, rowBufSize, row, columnBufSize, column, span);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_tex_image {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::int32_t level, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei bufSize, void* img) {
              __gl_debug << "call glGetnTexImageARB "  "target: '" << target << "'"  ", "  "level: '" << level << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "img: '" << img << "'" ;
              glGetnTexImageARB(::std::uint32_t(target), level, ::std::uint32_t(format), ::std::uint32_t(type), bufSize, img);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t level, GLsizei bufSize, void* img) {
              __gl_debug << "call glGetnTexImageARB "  "target: '" << TargetConstant::name() << "'"  ", "  "level: '" << level << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "img: '" << img << "'" ;
              glGetnTexImageARB(TargetConstant::value, level, FormatConstant::value, TypeConstant::value, bufSize, img);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_n_uniform {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei bufSize, float* params) {
              __gl_debug << "call glGetnUniformfvARB "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "params: '" << params << "'" ;
              glGetnUniformfvARB(program, location, bufSize, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei bufSize, ::std::int32_t* params) {
              __gl_debug << "call glGetnUniformivARB "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "params: '" << params << "'" ;
              glGetnUniformivARB(program, location, bufSize, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei bufSize, ::std::uint32_t* params) {
              __gl_debug << "call glGetnUniformuivARB "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "params: '" << params << "'" ;
              glGetnUniformuivARB(program, location, bufSize, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei bufSize, double* params) {
              __gl_debug << "call glGetnUniformdvARB "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "params: '" << params << "'" ;
              glGetnUniformdvARB(program, location, bufSize, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_read_n_pixels {
            /**
             */
            inline static void call(::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height, ::gtulu::internal::constant::gl_constant_base const& format, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei bufSize, void* data) {
              __gl_debug << "call glReadnPixelsARB "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << format << "'"  ", "  "type: '" << type << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "data: '" << data << "'" ;
              glReadnPixelsARB(x, y, width, height, ::std::uint32_t(format), ::std::uint32_t(type), bufSize, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename FormatConstant, typename TypeConstant >
            inline static void call(::std::int32_t x, ::std::int32_t y, GLsizei width, GLsizei height, GLsizei bufSize, void* data) {
              __gl_debug << "call glReadnPixelsARB "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "format: '" << FormatConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "data: '" << data << "'" ;
              glReadnPixelsARB(x, y, width, height, FormatConstant::value, TypeConstant::value, bufSize, data);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace robustness
      namespace sample_shading {
        namespace fnc {
          /**
           */
          struct gl_min_sample_shading {
            /**
             */
            inline static void call(float value) {
              __gl_debug << "call glMinSampleShading "  "value: '" << value << "'" ;
              glMinSampleShading(value);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace sample_shading
      namespace sampler_objects {
        namespace fnc {
          /**
           */
          struct gl_bind_sampler {
            /**
             */
            inline static void call(::std::uint32_t unit, ::std::uint32_t sampler) {
              __gl_debug << "call glBindSampler "  "unit: '" << unit << "'"  ", "  "sampler: '" << sampler << "'" ;
              glBindSampler(unit, sampler);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_samplers {
            /**
             */
            inline static void call(GLsizei count, ::std::uint32_t const* samplers) {
              __gl_debug << "call glDeleteSamplers "  "count: '" << count << "'"  ", "  "samplers: '" << samplers << "'" ;
              glDeleteSamplers(count, samplers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_samplers {
            /**
             */
            inline static void call(GLsizei count, ::std::uint32_t* samplers) {
              __gl_debug << "call glGenSamplers "  "count: '" << count << "'"  ", "  "samplers: '" << samplers << "'" ;
              glGenSamplers(count, samplers);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_sampler_parameter {
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetSamplerParameteriv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameteriv(sampler, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, ::std::int32_t* params) {
              __gl_debug << "call glGetSamplerParameteriv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameteriv(sampler, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, float* params) {
              __gl_debug << "call glGetSamplerParameterfv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameterfv(sampler, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, float* params) {
              __gl_debug << "call glGetSamplerParameterfv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameterfv(sampler, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_sampler_parameter_integer {
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetSamplerParameterIiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameterIiv(sampler, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, ::std::int32_t* params) {
              __gl_debug << "call glGetSamplerParameterIiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameterIiv(sampler, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t* params) {
              __gl_debug << "call glGetSamplerParameterIuiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameterIuiv(sampler, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, ::std::uint32_t* params) {
              __gl_debug << "call glGetSamplerParameterIuiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetSamplerParameterIuiv(sampler, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_sampler {
            /**
             */
            inline static GLboolean call(::std::uint32_t sampler) {
              __gl_debug << "call glIsSampler "  "sampler: '" << sampler << "'" ;
              GLboolean out = glIsSampler(sampler);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_sampler_parameter {
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t param) {
              __gl_debug << "call glSamplerParameteri "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameteri(sampler, ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, ::std::int32_t param) {
              __gl_debug << "call glSamplerParameteri "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameteri(sampler, PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t const* param) {
              __gl_debug << "call glSamplerParameteriv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameteriv(sampler, ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, ::std::int32_t const* param) {
              __gl_debug << "call glSamplerParameteriv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameteriv(sampler, PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, float param) {
              __gl_debug << "call glSamplerParameterf "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterf(sampler, ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, float param) {
              __gl_debug << "call glSamplerParameterf "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterf(sampler, PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, float const* param) {
              __gl_debug << "call glSamplerParameterfv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterfv(sampler, ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, float const* param) {
              __gl_debug << "call glSamplerParameterfv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterfv(sampler, PnameConstant::value, param);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_sampler_parameter_integer {
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t const* param) {
              __gl_debug << "call glSamplerParameterIiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterIiv(sampler, ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, ::std::int32_t const* param) {
              __gl_debug << "call glSamplerParameterIiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterIiv(sampler, PnameConstant::value, param);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t sampler, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t const* param) {
              __gl_debug << "call glSamplerParameterIuiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << pname << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterIuiv(sampler, ::std::uint32_t(pname), param);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t sampler, ::std::uint32_t const* param) {
              __gl_debug << "call glSamplerParameterIuiv "  "sampler: '" << sampler << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "param: '" << param << "'" ;
              glSamplerParameterIuiv(sampler, PnameConstant::value, param);
              __gl_check_error();
              
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
          /**
           */
          struct gl_active_shader_program {
            /**
             */
            inline static void call(::std::uint32_t pipeline, ::std::uint32_t program) {
              __gl_debug << "call glActiveShaderProgram "  "pipeline: '" << pipeline << "'"  ", "  "program: '" << program << "'" ;
              glActiveShaderProgram(pipeline, program);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_bind_program_pipeline {
            /**
             */
            inline static void call(::std::uint32_t pipeline) {
              __gl_debug << "call glBindProgramPipeline "  "pipeline: '" << pipeline << "'" ;
              glBindProgramPipeline(pipeline);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_create_shader_program {
            /**
             */
            inline static GLuint call(::gtulu::internal::constant::gl_constant_base const& type, GLsizei count, GLchar const** strings) {
              __gl_debug << "call glCreateShaderProgramv "  "type: '" << type << "'"  ", "  "count: '" << count << "'"  ", "  "strings: '" << strings << "'" ;
              GLuint out = glCreateShaderProgramv(::std::uint32_t(type), count, strings);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static GLuint call(GLsizei count, GLchar const** strings) {
              __gl_debug << "call glCreateShaderProgramv "  "type: '" << TypeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "strings: '" << strings << "'" ;
              GLuint out = glCreateShaderProgramv(TypeConstant::value, count, strings);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_delete_program_pipelines {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* pipelines) {
              __gl_debug << "call glDeleteProgramPipelines "  "n: '" << n << "'"  ", "  "pipelines: '" << pipelines << "'" ;
              glDeleteProgramPipelines(n, pipelines);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_program_pipelines {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* pipelines) {
              __gl_debug << "call glGenProgramPipelines "  "n: '" << n << "'"  ", "  "pipelines: '" << pipelines << "'" ;
              glGenProgramPipelines(n, pipelines);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_program_pipeline {
            /**
             */
            inline static void call(::std::uint32_t pipeline, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetProgramPipelineiv "  "pipeline: '" << pipeline << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetProgramPipelineiv(pipeline, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t pipeline, ::std::int32_t* params) {
              __gl_debug << "call glGetProgramPipelineiv "  "pipeline: '" << pipeline << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetProgramPipelineiv(pipeline, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_program_pipeline_info_log {
            /**
             */
            inline static void call(::std::uint32_t pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
              __gl_debug << "call glGetProgramPipelineInfoLog "  "pipeline: '" << pipeline << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "infoLog: '" << infoLog << "'" ;
              glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_program_pipeline {
            /**
             */
            inline static GLboolean call(::std::uint32_t pipeline) {
              __gl_debug << "call glIsProgramPipeline "  "pipeline: '" << pipeline << "'" ;
              GLboolean out = glIsProgramPipeline(pipeline);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_program_uniform_1 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::int32_t v0) {
              __gl_debug << "call glProgramUniform1i "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glProgramUniform1i(program, location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glProgramUniform1iv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform1iv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, float v0) {
              __gl_debug << "call glProgramUniform1f "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glProgramUniform1f(program, location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glProgramUniform1fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform1fv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, double v0) {
              __gl_debug << "call glProgramUniform1d "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glProgramUniform1d(program, location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glProgramUniform1dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform1dv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::uint32_t v0) {
              __gl_debug << "call glProgramUniform1ui "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'" ;
              glProgramUniform1ui(program, location, v0);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glProgramUniform1uiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform1uiv(program, location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_2 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1) {
              __gl_debug << "call glProgramUniform2i "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glProgramUniform2i(program, location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glProgramUniform2iv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform2iv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, float v0, float v1) {
              __gl_debug << "call glProgramUniform2f "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glProgramUniform2f(program, location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glProgramUniform2fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform2fv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, double v0, double v1) {
              __gl_debug << "call glProgramUniform2d "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glProgramUniform2d(program, location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glProgramUniform2dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform2dv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1) {
              __gl_debug << "call glProgramUniform2ui "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'" ;
              glProgramUniform2ui(program, location, v0, v1);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glProgramUniform2uiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform2uiv(program, location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_3 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2) {
              __gl_debug << "call glProgramUniform3i "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glProgramUniform3i(program, location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glProgramUniform3iv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform3iv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, float v0, float v1, float v2) {
              __gl_debug << "call glProgramUniform3f "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glProgramUniform3f(program, location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glProgramUniform3fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform3fv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, double v0, double v1, double v2) {
              __gl_debug << "call glProgramUniform3d "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glProgramUniform3d(program, location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glProgramUniform3dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform3dv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2) {
              __gl_debug << "call glProgramUniform3ui "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'" ;
              glProgramUniform3ui(program, location, v0, v1, v2);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glProgramUniform3uiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform3uiv(program, location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_4 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::int32_t v0, ::std::int32_t v1, ::std::int32_t v2, ::std::int32_t v3) {
              __gl_debug << "call glProgramUniform4i "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glProgramUniform4i(program, location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::int32_t const* value) {
              __gl_debug << "call glProgramUniform4iv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform4iv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, float v0, float v1, float v2, float v3) {
              __gl_debug << "call glProgramUniform4f "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glProgramUniform4f(program, location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, float const* value) {
              __gl_debug << "call glProgramUniform4fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform4fv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, double v0, double v1, double v2, double v3) {
              __gl_debug << "call glProgramUniform4d "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glProgramUniform4d(program, location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, double const* value) {
              __gl_debug << "call glProgramUniform4dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform4dv(program, location, count, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, ::std::uint32_t v0, ::std::uint32_t v1, ::std::uint32_t v2, ::std::uint32_t v3) {
              __gl_debug << "call glProgramUniform4ui "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "v0: '" << v0 << "'"  ", "  "v1: '" << v1 << "'"  ", "  "v2: '" << v2 << "'"  ", "  "v3: '" << v3 << "'" ;
              glProgramUniform4ui(program, location, v0, v1, v2, v3);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, ::std::uint32_t const* value) {
              __gl_debug << "call glProgramUniform4uiv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniform4uiv(program, location, count, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_2 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix2fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix2fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix2dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix2dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_2x3 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix2x3fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix2x3fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix2x3dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix2x3dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_2x4 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix2x4fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix2x4fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix2x4dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix2x4dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_3 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix3fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix3fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix3dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix3dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_3x2 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix3x2fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix3x2fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix3x2dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix3x2dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_3x4 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix3x4fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix3x4fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix3x4dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix3x4dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_4 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix4fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix4fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix4dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix4dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_4x2 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix4x2fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix4x2fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix4x2dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix4x2dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_program_uniform_matrix_4x3 {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, float const* value) {
              __gl_debug << "call glProgramUniformMatrix4x3fv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix4x3fv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t program, ::std::int32_t location, GLsizei count, bool transpose, double const* value) {
              __gl_debug << "call glProgramUniformMatrix4x3dv "  "program: '" << program << "'"  ", "  "location: '" << location << "'"  ", "  "count: '" << count << "'"  ", "  "transpose: '" << transpose << "'"  ", "  "value: '" << value << "'" ;
              glProgramUniformMatrix4x3dv(program, location, count, (transpose ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_use_program_stages {
            /**
             */
            inline static void call(::std::uint32_t pipeline, GLbitfield stages, ::std::uint32_t program) {
              __gl_debug << "call glUseProgramStages "  "pipeline: '" << pipeline << "'"  ", "  "stages: '" << stages << "'"  ", "  "program: '" << program << "'" ;
              glUseProgramStages(pipeline, stages, program);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_validate_program_pipeline {
            /**
             */
            inline static void call(::std::uint32_t pipeline) {
              __gl_debug << "call glValidateProgramPipeline "  "pipeline: '" << pipeline << "'" ;
              glValidateProgramPipeline(pipeline);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace separate_shader_objects
      namespace shader_atomic_counters {
        namespace fnc {
          /**
           */
          struct gl_get_active_atomic_counter_buffer {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t bufferIndex, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetActiveAtomicCounterBufferiv "  "program: '" << program << "'"  ", "  "bufferIndex: '" << bufferIndex << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetActiveAtomicCounterBufferiv(program, bufferIndex, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t program, ::std::uint32_t bufferIndex, ::std::int32_t* params) {
              __gl_debug << "call glGetActiveAtomicCounterBufferiv "  "program: '" << program << "'"  ", "  "bufferIndex: '" << bufferIndex << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetActiveAtomicCounterBufferiv(program, bufferIndex, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace shader_atomic_counters
      namespace shader_bit_encoding {
        namespace fnc {
        } // namespace fnc
      } // namespace shader_bit_encoding
      namespace shader_image_load_store {
        namespace fnc {
          /**
           */
          struct gl_bind_image_texture {
            /**
             */
            inline static void call(::std::uint32_t unit, ::std::uint32_t texture, ::std::int32_t level, bool layered, ::std::int32_t layer, ::gtulu::internal::constant::gl_constant_base const& access, ::gtulu::internal::constant::gl_constant_base const& format) {
              __gl_debug << "call glBindImageTexture "  "unit: '" << unit << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'"  ", "  "layered: '" << layered << "'"  ", "  "layer: '" << layer << "'"  ", "  "access: '" << access << "'"  ", "  "format: '" << format << "'" ;
              glBindImageTexture(unit, texture, level, (layered ? 1 : 0), layer, ::std::uint32_t(access), ::std::uint32_t(format));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename AccessConstant, typename FormatConstant >
            inline static void call(::std::uint32_t unit, ::std::uint32_t texture, ::std::int32_t level, bool layered, ::std::int32_t layer) {
              __gl_debug << "call glBindImageTexture "  "unit: '" << unit << "'"  ", "  "texture: '" << texture << "'"  ", "  "level: '" << level << "'"  ", "  "layered: '" << layered << "'"  ", "  "layer: '" << layer << "'"  ", "  "access: '" << AccessConstant::name() << "'"  ", "  "format: '" << FormatConstant::name() << "'" ;
              glBindImageTexture(unit, texture, level, (layered ? 1 : 0), layer, AccessConstant::value, FormatConstant::value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_memory_barrier {
            /**
             */
            inline static void call(GLbitfield barriers) {
              __gl_debug << "call glMemoryBarrier "  "barriers: '" << barriers << "'" ;
              glMemoryBarrier(barriers);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace shader_image_load_store
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
          /**
           */
          struct gl_get_active_subroutine_name {
            /**
             */
            inline static void call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& shadertype, ::std::uint32_t index, GLsizei bufsize, GLsizei* length, GLchar* name) {
              __gl_debug << "call glGetActiveSubroutineName "  "program: '" << program << "'"  ", "  "shadertype: '" << shadertype << "'"  ", "  "index: '" << index << "'"  ", "  "bufsize: '" << bufsize << "'"  ", "  "length: '" << length << "'"  ", "  "name: '" << name << "'" ;
              glGetActiveSubroutineName(program, ::std::uint32_t(shadertype), index, bufsize, length, name);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ShadertypeConstant >
            inline static void call(::std::uint32_t program, ::std::uint32_t index, GLsizei bufsize, GLsizei* length, GLchar* name) {
              __gl_debug << "call glGetActiveSubroutineName "  "program: '" << program << "'"  ", "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "bufsize: '" << bufsize << "'"  ", "  "length: '" << length << "'"  ", "  "name: '" << name << "'" ;
              glGetActiveSubroutineName(program, ShadertypeConstant::value, index, bufsize, length, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_active_subroutine_uniform {
            /**
             */
            inline static void call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& shadertype, ::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* values) {
              __gl_debug << "call glGetActiveSubroutineUniformiv "  "program: '" << program << "'"  ", "  "shadertype: '" << shadertype << "'"  ", "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "values: '" << values << "'" ;
              glGetActiveSubroutineUniformiv(program, ::std::uint32_t(shadertype), index, ::std::uint32_t(pname), values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ShadertypeConstant, typename PnameConstant >
            inline static void call(::std::uint32_t program, ::std::uint32_t index, ::std::int32_t* values) {
              __gl_debug << "call glGetActiveSubroutineUniformiv "  "program: '" << program << "'"  ", "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "values: '" << values << "'" ;
              glGetActiveSubroutineUniformiv(program, ShadertypeConstant::value, index, PnameConstant::value, values);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_active_subroutine_uniform_name {
            /**
             */
            inline static void call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& shadertype, ::std::uint32_t index, GLsizei bufsize, GLsizei* length, GLchar* name) {
              __gl_debug << "call glGetActiveSubroutineUniformName "  "program: '" << program << "'"  ", "  "shadertype: '" << shadertype << "'"  ", "  "index: '" << index << "'"  ", "  "bufsize: '" << bufsize << "'"  ", "  "length: '" << length << "'"  ", "  "name: '" << name << "'" ;
              glGetActiveSubroutineUniformName(program, ::std::uint32_t(shadertype), index, bufsize, length, name);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ShadertypeConstant >
            inline static void call(::std::uint32_t program, ::std::uint32_t index, GLsizei bufsize, GLsizei* length, GLchar* name) {
              __gl_debug << "call glGetActiveSubroutineUniformName "  "program: '" << program << "'"  ", "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "bufsize: '" << bufsize << "'"  ", "  "length: '" << length << "'"  ", "  "name: '" << name << "'" ;
              glGetActiveSubroutineUniformName(program, ShadertypeConstant::value, index, bufsize, length, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_program_stage {
            /**
             */
            inline static void call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& shadertype, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* values) {
              __gl_debug << "call glGetProgramStageiv "  "program: '" << program << "'"  ", "  "shadertype: '" << shadertype << "'"  ", "  "pname: '" << pname << "'"  ", "  "values: '" << values << "'" ;
              glGetProgramStageiv(program, ::std::uint32_t(shadertype), ::std::uint32_t(pname), values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ShadertypeConstant, typename PnameConstant >
            inline static void call(::std::uint32_t program, ::std::int32_t* values) {
              __gl_debug << "call glGetProgramStageiv "  "program: '" << program << "'"  ", "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "values: '" << values << "'" ;
              glGetProgramStageiv(program, ShadertypeConstant::value, PnameConstant::value, values);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_subroutine_index {
            /**
             */
            inline static GLuint call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& shadertype, GLchar const* name) {
              __gl_debug << "call glGetSubroutineIndex "  "program: '" << program << "'"  ", "  "shadertype: '" << shadertype << "'"  ", "  "name: '" << name << "'" ;
              GLuint out = glGetSubroutineIndex(program, ::std::uint32_t(shadertype), name);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename ShadertypeConstant >
            inline static GLuint call(::std::uint32_t program, GLchar const* name) {
              __gl_debug << "call glGetSubroutineIndex "  "program: '" << program << "'"  ", "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "name: '" << name << "'" ;
              GLuint out = glGetSubroutineIndex(program, ShadertypeConstant::value, name);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_subroutine_uniform_location {
            /**
             */
            inline static GLint call(::std::uint32_t program, ::gtulu::internal::constant::gl_constant_base const& shadertype, GLchar const* name) {
              __gl_debug << "call glGetSubroutineUniformLocation "  "program: '" << program << "'"  ", "  "shadertype: '" << shadertype << "'"  ", "  "name: '" << name << "'" ;
              GLint out = glGetSubroutineUniformLocation(program, ::std::uint32_t(shadertype), name);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename ShadertypeConstant >
            inline static GLint call(::std::uint32_t program, GLchar const* name) {
              __gl_debug << "call glGetSubroutineUniformLocation "  "program: '" << program << "'"  ", "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "name: '" << name << "'" ;
              GLint out = glGetSubroutineUniformLocation(program, ShadertypeConstant::value, name);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_uniform_subroutine {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& shadertype, ::std::int32_t location, ::std::uint32_t* params) {
              __gl_debug << "call glGetUniformSubroutineuiv "  "shadertype: '" << shadertype << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformSubroutineuiv(::std::uint32_t(shadertype), location, params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ShadertypeConstant >
            inline static void call(::std::int32_t location, ::std::uint32_t* params) {
              __gl_debug << "call glGetUniformSubroutineuiv "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "location: '" << location << "'"  ", "  "params: '" << params << "'" ;
              glGetUniformSubroutineuiv(ShadertypeConstant::value, location, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_subroutines {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& shadertype, GLsizei count, ::std::uint32_t const* indices) {
              __gl_debug << "call glUniformSubroutinesuiv "  "shadertype: '" << shadertype << "'"  ", "  "count: '" << count << "'"  ", "  "indices: '" << indices << "'" ;
              glUniformSubroutinesuiv(::std::uint32_t(shadertype), count, indices);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ShadertypeConstant >
            inline static void call(GLsizei count, ::std::uint32_t const* indices) {
              __gl_debug << "call glUniformSubroutinesuiv "  "shadertype: '" << ShadertypeConstant::name() << "'"  ", "  "count: '" << count << "'"  ", "  "indices: '" << indices << "'" ;
              glUniformSubroutinesuiv(ShadertypeConstant::value, count, indices);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace shader_subroutine
      namespace shading_language_420pack {
        namespace fnc {
        } // namespace fnc
      } // namespace shading_language_420pack
      namespace shading_language_include {
        namespace fnc {
          /**
           */
          struct gl_compile_shader_include {
            /**
             */
            inline static void call(::std::uint32_t shader, GLsizei count, GLchar const** path, ::std::int32_t const* length) {
              __gl_debug << "call glCompileShaderIncludeARB "  "shader: '" << shader << "'"  ", "  "count: '" << count << "'"  ", "  "path: '" << path << "'"  ", "  "length: '" << length << "'" ;
              glCompileShaderIncludeARB(shader, count, path, length);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_named_string {
            /**
             */
            inline static void call(::std::int32_t namelen, GLchar const* name) {
              __gl_debug << "call glDeleteNamedStringARB "  "namelen: '" << namelen << "'"  ", "  "name: '" << name << "'" ;
              glDeleteNamedStringARB(namelen, name);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_named_string {
            /**
             */
            inline static void call(::std::int32_t namelen, GLchar const* name, GLsizei bufSize, ::std::int32_t* stringlen, GLchar* string) {
              __gl_debug << "call glGetNamedStringARB "  "namelen: '" << namelen << "'"  ", "  "name: '" << name << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "stringlen: '" << stringlen << "'"  ", "  "string: '" << string << "'" ;
              glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::int32_t namelen, GLchar const* name, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetNamedStringivARB "  "namelen: '" << namelen << "'"  ", "  "name: '" << name << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetNamedStringivARB(namelen, name, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::int32_t namelen, GLchar const* name, ::std::int32_t* params) {
              __gl_debug << "call glGetNamedStringivARB "  "namelen: '" << namelen << "'"  ", "  "name: '" << name << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetNamedStringivARB(namelen, name, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_named_string {
            /**
             */
            inline static GLboolean call(::std::int32_t namelen, GLchar const* name) {
              __gl_debug << "call glIsNamedStringARB "  "namelen: '" << namelen << "'"  ", "  "name: '" << name << "'" ;
              GLboolean out = glIsNamedStringARB(namelen, name);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_named_string {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::int32_t namelen, GLchar const* name, ::std::int32_t stringlen, GLchar const* string) {
              __gl_debug << "call glNamedStringARB "  "type: '" << type << "'"  ", "  "namelen: '" << namelen << "'"  ", "  "name: '" << name << "'"  ", "  "stringlen: '" << stringlen << "'"  ", "  "string: '" << string << "'" ;
              glNamedStringARB(::std::uint32_t(type), namelen, name, stringlen, string);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::int32_t namelen, GLchar const* name, ::std::int32_t stringlen, GLchar const* string) {
              __gl_debug << "call glNamedStringARB "  "type: '" << TypeConstant::name() << "'"  ", "  "namelen: '" << namelen << "'"  ", "  "name: '" << name << "'"  ", "  "stringlen: '" << stringlen << "'"  ", "  "string: '" << string << "'" ;
              glNamedStringARB(TypeConstant::value, namelen, name, stringlen, string);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace shading_language_include
      namespace shading_language_packing {
        namespace fnc {
        } // namespace fnc
      } // namespace shading_language_packing
      namespace sync {
        namespace fnc {
          /**
           */
          struct gl_client_wait_sync {
            /**
             */
            inline static GLenum call(GLsync sync, GLbitfield flags, GLuint64 timeout) {
              __gl_debug << "call glClientWaitSync "  "sync: '" << sync << "'"  ", "  "flags: '" << flags << "'"  ", "  "timeout: '" << timeout << "'" ;
              GLenum out = glClientWaitSync(sync, flags, timeout);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_delete_sync {
            /**
             */
            inline static void call(GLsync sync) {
              __gl_debug << "call glDeleteSync "  "sync: '" << sync << "'" ;
              glDeleteSync(sync);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_fence_sync {
            /**
             */
            inline static GLsync call(::gtulu::internal::constant::gl_constant_base const& condition, GLbitfield flags) {
              __gl_debug << "call glFenceSync "  "condition: '" << condition << "'"  ", "  "flags: '" << flags << "'" ;
              GLsync out = glFenceSync(::std::uint32_t(condition), flags);
              __gl_check_error();
              return out;
            }
            
            /**
             */
            template< typename ConditionConstant >
            inline static GLsync call(GLbitfield flags) {
              __gl_debug << "call glFenceSync "  "condition: '" << ConditionConstant::name() << "'"  ", "  "flags: '" << flags << "'" ;
              GLsync out = glFenceSync(ConditionConstant::value, flags);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_integer {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetIntegerv "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetIntegerv(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::int32_t* params) {
              __gl_debug << "call glGetIntegerv "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetIntegerv(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, GLint64* params) {
              __gl_debug << "call glGetInteger64v "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetInteger64v(::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(GLint64* params) {
              __gl_debug << "call glGetInteger64v "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetInteger64v(PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_sync {
            /**
             */
            inline static void call(GLsync sync, ::gtulu::internal::constant::gl_constant_base const& pname, GLsizei bufSize, GLsizei* length, ::std::int32_t* values) {
              __gl_debug << "call glGetSynciv "  "sync: '" << sync << "'"  ", "  "pname: '" << pname << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "values: '" << values << "'" ;
              glGetSynciv(sync, ::std::uint32_t(pname), bufSize, length, values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(GLsync sync, GLsizei bufSize, GLsizei* length, ::std::int32_t* values) {
              __gl_debug << "call glGetSynciv "  "sync: '" << sync << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "values: '" << values << "'" ;
              glGetSynciv(sync, PnameConstant::value, bufSize, length, values);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_sync {
            /**
             */
            inline static GLboolean call(GLsync sync) {
              __gl_debug << "call glIsSync "  "sync: '" << sync << "'" ;
              GLboolean out = glIsSync(sync);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_wait_sync {
            /**
             */
            inline static void call(GLsync sync, GLbitfield flags, GLuint64 timeout) {
              __gl_debug << "call glWaitSync "  "sync: '" << sync << "'"  ", "  "flags: '" << flags << "'"  ", "  "timeout: '" << timeout << "'" ;
              glWaitSync(sync, flags, timeout);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace sync
      namespace tessellation_shader {
        namespace fnc {
          /**
           */
          struct gl_patch_parameter {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t value) {
              __gl_debug << "call glPatchParameteri "  "pname: '" << pname << "'"  ", "  "value: '" << value << "'" ;
              glPatchParameteri(::std::uint32_t(pname), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::int32_t value) {
              __gl_debug << "call glPatchParameteri "  "pname: '" << PnameConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glPatchParameteri(PnameConstant::value, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, float const* values) {
              __gl_debug << "call glPatchParameterfv "  "pname: '" << pname << "'"  ", "  "values: '" << values << "'" ;
              glPatchParameterfv(::std::uint32_t(pname), values);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(float const* values) {
              __gl_debug << "call glPatchParameterfv "  "pname: '" << PnameConstant::name() << "'"  ", "  "values: '" << values << "'" ;
              glPatchParameterfv(PnameConstant::value, values);
              __gl_check_error();
              
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
          /**
           */
          struct gl_get_multisample {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t index, float* val) {
              __gl_debug << "call glGetMultisamplefv "  "pname: '" << pname << "'"  ", "  "index: '" << index << "'"  ", "  "val: '" << val << "'" ;
              glGetMultisamplefv(::std::uint32_t(pname), index, val);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, float* val) {
              __gl_debug << "call glGetMultisamplefv "  "pname: '" << PnameConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "val: '" << val << "'" ;
              glGetMultisamplefv(PnameConstant::value, index, val);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_sample_mask {
            /**
             */
            inline static void call(::std::uint32_t index, GLbitfield mask) {
              __gl_debug << "call glSampleMaski "  "index: '" << index << "'"  ", "  "mask: '" << mask << "'" ;
              glSampleMaski(index, mask);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_image_2d_multisample {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLsizei samples, ::std::int32_t internalformat, GLsizei width, GLsizei height, bool fixedsamplelocations) {
              __gl_debug << "call glTexImage2DMultisample "  "target: '" << target << "'"  ", "  "samples: '" << samples << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "fixedsamplelocations: '" << fixedsamplelocations << "'" ;
              glTexImage2DMultisample(::std::uint32_t(target), samples, ::std::uint32_t(internalformat), width, height, (fixedsamplelocations ? 1 : 0));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(GLsizei samples, GLsizei width, GLsizei height, bool fixedsamplelocations) {
              __gl_debug << "call glTexImage2DMultisample "  "target: '" << TargetConstant::name() << "'"  ", "  "samples: '" << samples << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "fixedsamplelocations: '" << fixedsamplelocations << "'" ;
              glTexImage2DMultisample(TargetConstant::value, samples, InternalformatConstant::value, width, height, (fixedsamplelocations ? 1 : 0));
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_image_3d_multisample {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLsizei samples, ::std::int32_t internalformat, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations) {
              __gl_debug << "call glTexImage3DMultisample "  "target: '" << target << "'"  ", "  "samples: '" << samples << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "fixedsamplelocations: '" << fixedsamplelocations << "'" ;
              glTexImage3DMultisample(::std::uint32_t(target), samples, ::std::uint32_t(internalformat), width, height, depth, (fixedsamplelocations ? 1 : 0));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(GLsizei samples, GLsizei width, GLsizei height, GLsizei depth, bool fixedsamplelocations) {
              __gl_debug << "call glTexImage3DMultisample "  "target: '" << TargetConstant::name() << "'"  ", "  "samples: '" << samples << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'"  ", "  "fixedsamplelocations: '" << fixedsamplelocations << "'" ;
              glTexImage3DMultisample(TargetConstant::value, samples, InternalformatConstant::value, width, height, depth, (fixedsamplelocations ? 1 : 0));
              __gl_check_error();
              
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
      namespace texture_storage {
        namespace fnc {
          /**
           */
          struct gl_tex_storage_1d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLsizei levels, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width) {
              __gl_debug << "call glTexStorage1D "  "target: '" << target << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'" ;
              glTexStorage1D(::std::uint32_t(target), levels, ::std::uint32_t(internalformat), width);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(GLsizei levels, GLsizei width) {
              __gl_debug << "call glTexStorage1D "  "target: '" << TargetConstant::name() << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'" ;
              glTexStorage1D(TargetConstant::value, levels, InternalformatConstant::value, width);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_storage_2d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLsizei levels, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height) {
              __gl_debug << "call glTexStorage2D "  "target: '" << target << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glTexStorage2D(::std::uint32_t(target), levels, ::std::uint32_t(internalformat), width, height);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(GLsizei levels, GLsizei width, GLsizei height) {
              __gl_debug << "call glTexStorage2D "  "target: '" << TargetConstant::name() << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glTexStorage2D(TargetConstant::value, levels, InternalformatConstant::value, width, height);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_storage_3d {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, GLsizei levels, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height, GLsizei depth) {
              __gl_debug << "call glTexStorage3D "  "target: '" << target << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'" ;
              glTexStorage3D(::std::uint32_t(target), levels, ::std::uint32_t(internalformat), width, height, depth);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(GLsizei levels, GLsizei width, GLsizei height, GLsizei depth) {
              __gl_debug << "call glTexStorage3D "  "target: '" << TargetConstant::name() << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'" ;
              glTexStorage3D(TargetConstant::value, levels, InternalformatConstant::value, width, height, depth);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_texture_storage_1d {
            /**
             */
            inline static void call(::std::uint32_t texture, ::gtulu::internal::constant::gl_constant_base const& target, GLsizei levels, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width) {
              __gl_debug << "call glTextureStorage1DEXT "  "texture: '" << texture << "'"  ", "  "target: '" << target << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'" ;
              glTextureStorage1DEXT(texture, ::std::uint32_t(target), levels, ::std::uint32_t(internalformat), width);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::uint32_t texture, GLsizei levels, GLsizei width) {
              __gl_debug << "call glTextureStorage1DEXT "  "texture: '" << texture << "'"  ", "  "target: '" << TargetConstant::name() << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'" ;
              glTextureStorage1DEXT(texture, TargetConstant::value, levels, InternalformatConstant::value, width);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_texture_storage_2d {
            /**
             */
            inline static void call(::std::uint32_t texture, ::gtulu::internal::constant::gl_constant_base const& target, GLsizei levels, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height) {
              __gl_debug << "call glTextureStorage2DEXT "  "texture: '" << texture << "'"  ", "  "target: '" << target << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glTextureStorage2DEXT(texture, ::std::uint32_t(target), levels, ::std::uint32_t(internalformat), width, height);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::uint32_t texture, GLsizei levels, GLsizei width, GLsizei height) {
              __gl_debug << "call glTextureStorage2DEXT "  "texture: '" << texture << "'"  ", "  "target: '" << TargetConstant::name() << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glTextureStorage2DEXT(texture, TargetConstant::value, levels, InternalformatConstant::value, width, height);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_texture_storage_3d {
            /**
             */
            inline static void call(::std::uint32_t texture, ::gtulu::internal::constant::gl_constant_base const& target, GLsizei levels, ::gtulu::internal::constant::gl_constant_base const& internalformat, GLsizei width, GLsizei height, GLsizei depth) {
              __gl_debug << "call glTextureStorage3DEXT "  "texture: '" << texture << "'"  ", "  "target: '" << target << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << internalformat << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'" ;
              glTextureStorage3DEXT(texture, ::std::uint32_t(target), levels, ::std::uint32_t(internalformat), width, height, depth);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename InternalformatConstant >
            inline static void call(::std::uint32_t texture, GLsizei levels, GLsizei width, GLsizei height, GLsizei depth) {
              __gl_debug << "call glTextureStorage3DEXT "  "texture: '" << texture << "'"  ", "  "target: '" << TargetConstant::name() << "'"  ", "  "levels: '" << levels << "'"  ", "  "internalformat: '" << InternalformatConstant::name() << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'"  ", "  "depth: '" << depth << "'" ;
              glTextureStorage3DEXT(texture, TargetConstant::value, levels, InternalformatConstant::value, width, height, depth);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace texture_storage
      namespace texture_swizzle {
        namespace fnc {
        } // namespace fnc
      } // namespace texture_swizzle
      namespace timer_query {
        namespace fnc {
          /**
           */
          struct gl_get_query_object {
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetQueryObjectiv "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectiv(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, ::std::int32_t* params) {
              __gl_debug << "call glGetQueryObjectiv "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectiv(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::uint32_t* params) {
              __gl_debug << "call glGetQueryObjectuiv "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectuiv(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, ::std::uint32_t* params) {
              __gl_debug << "call glGetQueryObjectuiv "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectuiv(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, GLint64* params) {
              __gl_debug << "call glGetQueryObjecti64v "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjecti64v(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, GLint64* params) {
              __gl_debug << "call glGetQueryObjecti64v "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjecti64v(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& pname, GLuint64* params) {
              __gl_debug << "call glGetQueryObjectui64v "  "id: '" << id << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectui64v(id, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t id, GLuint64* params) {
              __gl_debug << "call glGetQueryObjectui64v "  "id: '" << id << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryObjectui64v(id, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_query_counter {
            /**
             */
            inline static void call(::std::uint32_t id, ::gtulu::internal::constant::gl_constant_base const& target) {
              __gl_debug << "call glQueryCounter "  "id: '" << id << "'"  ", "  "target: '" << target << "'" ;
              glQueryCounter(id, ::std::uint32_t(target));
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t id) {
              __gl_debug << "call glQueryCounter "  "id: '" << id << "'"  ", "  "target: '" << TargetConstant::name() << "'" ;
              glQueryCounter(id, TargetConstant::value);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace timer_query
      namespace transform_feedback2 {
        namespace fnc {
          /**
           */
          struct gl_bind_transform_feedback {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t id) {
              __gl_debug << "call glBindTransformFeedback "  "target: '" << target << "'"  ", "  "id: '" << id << "'" ;
              glBindTransformFeedback(::std::uint32_t(target), id);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t id) {
              __gl_debug << "call glBindTransformFeedback "  "target: '" << TargetConstant::name() << "'"  ", "  "id: '" << id << "'" ;
              glBindTransformFeedback(TargetConstant::value, id);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_transform_feedbacks {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* ids) {
              __gl_debug << "call glDeleteTransformFeedbacks "  "n: '" << n << "'"  ", "  "ids: '" << ids << "'" ;
              glDeleteTransformFeedbacks(n, ids);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_transform_feedback {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::uint32_t id) {
              __gl_debug << "call glDrawTransformFeedback "  "mode: '" << mode << "'"  ", "  "id: '" << id << "'" ;
              glDrawTransformFeedback(::std::uint32_t(mode), id);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t id) {
              __gl_debug << "call glDrawTransformFeedback "  "mode: '" << ModeConstant::name() << "'"  ", "  "id: '" << id << "'" ;
              glDrawTransformFeedback(ModeConstant::value, id);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_transform_feedbacks {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* ids) {
              __gl_debug << "call glGenTransformFeedbacks "  "n: '" << n << "'"  ", "  "ids: '" << ids << "'" ;
              glGenTransformFeedbacks(n, ids);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_transform_feedback {
            /**
             */
            inline static GLboolean call(::std::uint32_t id) {
              __gl_debug << "call glIsTransformFeedback "  "id: '" << id << "'" ;
              GLboolean out = glIsTransformFeedback(id);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_pause_transform_feedback {
            /**
             */
            inline static void call() {
              __gl_debug << "call glPauseTransformFeedback " "";
              glPauseTransformFeedback();
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_resume_transform_feedback {
            /**
             */
            inline static void call() {
              __gl_debug << "call glResumeTransformFeedback " "";
              glResumeTransformFeedback();
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace transform_feedback2
      namespace transform_feedback3 {
        namespace fnc {
          /**
           */
          struct gl_begin_query_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, ::std::uint32_t id) {
              __gl_debug << "call glBeginQueryIndexed "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "id: '" << id << "'" ;
              glBeginQueryIndexed(::std::uint32_t(target), index, id);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, ::std::uint32_t id) {
              __gl_debug << "call glBeginQueryIndexed "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "id: '" << id << "'" ;
              glBeginQueryIndexed(TargetConstant::value, index, id);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_transform_feedback_stream {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::uint32_t id, ::std::uint32_t stream) {
              __gl_debug << "call glDrawTransformFeedbackStream "  "mode: '" << mode << "'"  ", "  "id: '" << id << "'"  ", "  "stream: '" << stream << "'" ;
              glDrawTransformFeedbackStream(::std::uint32_t(mode), id, stream);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t id, ::std::uint32_t stream) {
              __gl_debug << "call glDrawTransformFeedbackStream "  "mode: '" << ModeConstant::name() << "'"  ", "  "id: '" << id << "'"  ", "  "stream: '" << stream << "'" ;
              glDrawTransformFeedbackStream(ModeConstant::value, id, stream);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_end_query_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index) {
              __gl_debug << "call glEndQueryIndexed "  "target: '" << target << "'"  ", "  "index: '" << index << "'" ;
              glEndQueryIndexed(::std::uint32_t(target), index);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index) {
              __gl_debug << "call glEndQueryIndexed "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'" ;
              glEndQueryIndexed(TargetConstant::value, index);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_query_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetQueryIndexediv "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryIndexediv(::std::uint32_t(target), index, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant, typename PnameConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t* params) {
              __gl_debug << "call glGetQueryIndexediv "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetQueryIndexediv(TargetConstant::value, index, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace transform_feedback3
      namespace transform_feedback_instanced {
        namespace fnc {
          /**
           */
          struct gl_draw_transform_feedback_instanced {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::uint32_t id, GLsizei primcount) {
              __gl_debug << "call glDrawTransformFeedbackInstanced "  "mode: '" << mode << "'"  ", "  "id: '" << id << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawTransformFeedbackInstanced(::std::uint32_t(mode), id, primcount);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t id, GLsizei primcount) {
              __gl_debug << "call glDrawTransformFeedbackInstanced "  "mode: '" << ModeConstant::name() << "'"  ", "  "id: '" << id << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawTransformFeedbackInstanced(ModeConstant::value, id, primcount);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_draw_transform_feedback_stream_instanced {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& mode, ::std::uint32_t id, ::std::uint32_t stream, GLsizei primcount) {
              __gl_debug << "call glDrawTransformFeedbackStreamInstanced "  "mode: '" << mode << "'"  ", "  "id: '" << id << "'"  ", "  "stream: '" << stream << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawTransformFeedbackStreamInstanced(::std::uint32_t(mode), id, stream, primcount);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename ModeConstant >
            inline static void call(::std::uint32_t id, ::std::uint32_t stream, GLsizei primcount) {
              __gl_debug << "call glDrawTransformFeedbackStreamInstanced "  "mode: '" << ModeConstant::name() << "'"  ", "  "id: '" << id << "'"  ", "  "stream: '" << stream << "'"  ", "  "primcount: '" << primcount << "'" ;
              glDrawTransformFeedbackStreamInstanced(ModeConstant::value, id, stream, primcount);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace transform_feedback_instanced
      namespace uniform_buffer_object {
        namespace fnc {
          /**
           */
          struct gl_get_active_uniform_block {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t uniformBlockIndex, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetActiveUniformBlockiv "  "program: '" << program << "'"  ", "  "uniformBlockIndex: '" << uniformBlockIndex << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetActiveUniformBlockiv(program, uniformBlockIndex, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t program, ::std::uint32_t uniformBlockIndex, ::std::int32_t* params) {
              __gl_debug << "call glGetActiveUniformBlockiv "  "program: '" << program << "'"  ", "  "uniformBlockIndex: '" << uniformBlockIndex << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetActiveUniformBlockiv(program, uniformBlockIndex, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_active_uniform_block_name {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName) {
              __gl_debug << "call glGetActiveUniformBlockName "  "program: '" << program << "'"  ", "  "uniformBlockIndex: '" << uniformBlockIndex << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "uniformBlockName: '" << uniformBlockName << "'" ;
              glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_active_uniform_name {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName) {
              __gl_debug << "call glGetActiveUniformName "  "program: '" << program << "'"  ", "  "uniformIndex: '" << uniformIndex << "'"  ", "  "bufSize: '" << bufSize << "'"  ", "  "length: '" << length << "'"  ", "  "uniformName: '" << uniformName << "'" ;
              glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_active_uniforms {
            /**
             */
            inline static void call(::std::uint32_t program, GLsizei uniformCount, ::std::uint32_t const* uniformIndices, ::gtulu::internal::constant::gl_constant_base const& pname, ::std::int32_t* params) {
              __gl_debug << "call glGetActiveUniformsiv "  "program: '" << program << "'"  ", "  "uniformCount: '" << uniformCount << "'"  ", "  "uniformIndices: '" << uniformIndices << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetActiveUniformsiv(program, uniformCount, uniformIndices, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t program, GLsizei uniformCount, ::std::uint32_t const* uniformIndices, ::std::int32_t* params) {
              __gl_debug << "call glGetActiveUniformsiv "  "program: '" << program << "'"  ", "  "uniformCount: '" << uniformCount << "'"  ", "  "uniformIndices: '" << uniformIndices << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetActiveUniformsiv(program, uniformCount, uniformIndices, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_uniform_block_index {
            /**
             */
            inline static GLuint call(::std::uint32_t program, GLchar const* uniformBlockName) {
              __gl_debug << "call glGetUniformBlockIndex "  "program: '" << program << "'"  ", "  "uniformBlockName: '" << uniformBlockName << "'" ;
              GLuint out = glGetUniformBlockIndex(program, uniformBlockName);
              __gl_check_error();
              return out;
            }
          
          };
          /**
           */
          struct gl_get_uniform_indices {
            /**
             */
            inline static void call(::std::uint32_t program, GLsizei uniformCount, GLchar const** uniformNames, ::std::uint32_t* uniformIndices) {
              __gl_debug << "call glGetUniformIndices "  "program: '" << program << "'"  ", "  "uniformCount: '" << uniformCount << "'"  ", "  "uniformNames: '" << uniformNames << "'"  ", "  "uniformIndices: '" << uniformIndices << "'" ;
              glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_uniform_block_binding {
            /**
             */
            inline static void call(::std::uint32_t program, ::std::uint32_t uniformBlockIndex, ::std::uint32_t uniformBlockBinding) {
              __gl_debug << "call glUniformBlockBinding "  "program: '" << program << "'"  ", "  "uniformBlockIndex: '" << uniformBlockIndex << "'"  ", "  "uniformBlockBinding: '" << uniformBlockBinding << "'" ;
              glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
              __gl_check_error();
              
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
          /**
           */
          struct gl_bind_vertex_array {
            /**
             */
            inline static void call(::std::uint32_t array) {
              __gl_debug << "call glBindVertexArray "  "array: '" << array << "'" ;
              glBindVertexArray(array);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_delete_vertex_arrays {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t const* arrays) {
              __gl_debug << "call glDeleteVertexArrays "  "n: '" << n << "'"  ", "  "arrays: '" << arrays << "'" ;
              glDeleteVertexArrays(n, arrays);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_gen_vertex_arrays {
            /**
             */
            inline static void call(GLsizei n, ::std::uint32_t* arrays) {
              __gl_debug << "call glGenVertexArrays "  "n: '" << n << "'"  ", "  "arrays: '" << arrays << "'" ;
              glGenVertexArrays(n, arrays);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_is_vertex_array {
            /**
             */
            inline static GLboolean call(::std::uint32_t array) {
              __gl_debug << "call glIsVertexArray "  "array: '" << array << "'" ;
              GLboolean out = glIsVertexArray(array);
              __gl_check_error();
              return out;
            }
          
          };
        } // namespace fnc
      } // namespace vertex_array_object
      namespace vertex_attrib_64bit {
        namespace fnc {
          /**
           */
          struct gl_get_vertex_attrib_large {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& pname, double* params) {
              __gl_debug << "call glGetVertexAttribLdv "  "index: '" << index << "'"  ", "  "pname: '" << pname << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribLdv(index, ::std::uint32_t(pname), params);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename PnameConstant >
            inline static void call(::std::uint32_t index, double* params) {
              __gl_debug << "call glGetVertexAttribLdv "  "index: '" << index << "'"  ", "  "pname: '" << PnameConstant::name() << "'"  ", "  "params: '" << params << "'" ;
              glGetVertexAttribLdv(index, PnameConstant::value, params);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_1_large {
            /**
             */
            inline static void call(::std::uint32_t index, double x) {
              __gl_debug << "call glVertexAttribL1d "  "index: '" << index << "'"  ", "  "x: '" << x << "'" ;
              glVertexAttribL1d(index, x);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttribL1dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribL1dv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_2_large {
            /**
             */
            inline static void call(::std::uint32_t index, double x, double y) {
              __gl_debug << "call glVertexAttribL2d "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'" ;
              glVertexAttribL2d(index, x, y);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttribL2dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribL2dv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_3_large {
            /**
             */
            inline static void call(::std::uint32_t index, double x, double y, double z) {
              __gl_debug << "call glVertexAttribL3d "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'" ;
              glVertexAttribL3d(index, x, y, z);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttribL3dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribL3dv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_4_large {
            /**
             */
            inline static void call(::std::uint32_t index, double x, double y, double z, double w) {
              __gl_debug << "call glVertexAttribL4d "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "z: '" << z << "'"  ", "  "w: '" << w << "'" ;
              glVertexAttribL4d(index, x, y, z, w);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, double const* v) {
              __gl_debug << "call glVertexAttribL4dv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glVertexAttribL4dv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_pointer_large_integer {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t size, ::gtulu::internal::constant::gl_constant_base const& type, GLsizei stride, void const* pointer) {
              __gl_debug << "call glVertexAttribLPointer "  "index: '" << index << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << type << "'"  ", "  "stride: '" << stride << "'"  ", "  "pointer: '" << pointer << "'" ;
              glVertexAttribLPointer(index, size, ::std::uint32_t(type), stride, pointer);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, ::std::int32_t size, GLsizei stride, void const* pointer) {
              __gl_debug << "call glVertexAttribLPointer "  "index: '" << index << "'"  ", "  "size: '" << size << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "stride: '" << stride << "'"  ", "  "pointer: '" << pointer << "'" ;
              glVertexAttribLPointer(index, size, TypeConstant::value, stride, pointer);
              __gl_check_error();
              
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
          /**
           */
          struct gl_color_3_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t color) {
              __gl_debug << "call glColorP3ui "  "type: '" << type << "'"  ", "  "color: '" << color << "'" ;
              glColorP3ui(::std::uint32_t(type), color);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t color) {
              __gl_debug << "call glColorP3ui "  "type: '" << TypeConstant::name() << "'"  ", "  "color: '" << color << "'" ;
              glColorP3ui(TypeConstant::value, color);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* color) {
              __gl_debug << "call glColorP3uiv "  "type: '" << type << "'"  ", "  "color: '" << color << "'" ;
              glColorP3uiv(::std::uint32_t(type), color);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* color) {
              __gl_debug << "call glColorP3uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "color: '" << color << "'" ;
              glColorP3uiv(TypeConstant::value, color);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_color_4_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t color) {
              __gl_debug << "call glColorP4ui "  "type: '" << type << "'"  ", "  "color: '" << color << "'" ;
              glColorP4ui(::std::uint32_t(type), color);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t color) {
              __gl_debug << "call glColorP4ui "  "type: '" << TypeConstant::name() << "'"  ", "  "color: '" << color << "'" ;
              glColorP4ui(TypeConstant::value, color);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* color) {
              __gl_debug << "call glColorP4uiv "  "type: '" << type << "'"  ", "  "color: '" << color << "'" ;
              glColorP4uiv(::std::uint32_t(type), color);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* color) {
              __gl_debug << "call glColorP4uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "color: '" << color << "'" ;
              glColorP4uiv(TypeConstant::value, color);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_multi_tex_coord_1_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP1ui "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP1ui(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP1ui "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP1ui(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP1uiv "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP1uiv(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP1uiv "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP1uiv(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_multi_tex_coord_2_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP2ui "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP2ui(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP2ui "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP2ui(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP2uiv "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP2uiv(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP2uiv "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP2uiv(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_multi_tex_coord_3_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP3ui "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP3ui(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP3ui "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP3ui(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP3uiv "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP3uiv(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP3uiv "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP3uiv(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_multi_tex_coord_4_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP4ui "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP4ui(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glMultiTexCoordP4ui "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP4ui(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& texture, ::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP4uiv "  "texture: '" << texture << "'"  ", "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP4uiv(::std::uint32_t(texture), ::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TextureConstant, typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glMultiTexCoordP4uiv "  "texture: '" << TextureConstant::name() << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glMultiTexCoordP4uiv(TextureConstant::value, TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_normal_3_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glNormalP3ui "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glNormalP3ui(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glNormalP3ui "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glNormalP3ui(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glNormalP3uiv "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glNormalP3uiv(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glNormalP3uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glNormalP3uiv(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_secondary_color_3_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t color) {
              __gl_debug << "call glSecondaryColorP3ui "  "type: '" << type << "'"  ", "  "color: '" << color << "'" ;
              glSecondaryColorP3ui(::std::uint32_t(type), color);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t color) {
              __gl_debug << "call glSecondaryColorP3ui "  "type: '" << TypeConstant::name() << "'"  ", "  "color: '" << color << "'" ;
              glSecondaryColorP3ui(TypeConstant::value, color);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* color) {
              __gl_debug << "call glSecondaryColorP3uiv "  "type: '" << type << "'"  ", "  "color: '" << color << "'" ;
              glSecondaryColorP3uiv(::std::uint32_t(type), color);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* color) {
              __gl_debug << "call glSecondaryColorP3uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "color: '" << color << "'" ;
              glSecondaryColorP3uiv(TypeConstant::value, color);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_coord_1_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP1ui "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP1ui(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP1ui "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP1ui(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP1uiv "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP1uiv(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP1uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP1uiv(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_coord_2_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP2ui "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP2ui(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP2ui "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP2ui(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP2uiv "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP2uiv(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP2uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP2uiv(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_coord_3_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP3ui "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP3ui(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP3ui "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP3ui(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP3uiv "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP3uiv(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP3uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP3uiv(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_tex_coord_4_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP4ui "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP4ui(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t coords) {
              __gl_debug << "call glTexCoordP4ui "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP4ui(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP4uiv "  "type: '" << type << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP4uiv(::std::uint32_t(type), coords);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* coords) {
              __gl_debug << "call glTexCoordP4uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "coords: '" << coords << "'" ;
              glTexCoordP4uiv(TypeConstant::value, coords);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_2_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t value) {
              __gl_debug << "call glVertexP2ui "  "type: '" << type << "'"  ", "  "value: '" << value << "'" ;
              glVertexP2ui(::std::uint32_t(type), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t value) {
              __gl_debug << "call glVertexP2ui "  "type: '" << TypeConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glVertexP2ui(TypeConstant::value, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexP2uiv "  "type: '" << type << "'"  ", "  "value: '" << value << "'" ;
              glVertexP2uiv(::std::uint32_t(type), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* value) {
              __gl_debug << "call glVertexP2uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glVertexP2uiv(TypeConstant::value, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_3_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t value) {
              __gl_debug << "call glVertexP3ui "  "type: '" << type << "'"  ", "  "value: '" << value << "'" ;
              glVertexP3ui(::std::uint32_t(type), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t value) {
              __gl_debug << "call glVertexP3ui "  "type: '" << TypeConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glVertexP3ui(TypeConstant::value, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexP3uiv "  "type: '" << type << "'"  ", "  "value: '" << value << "'" ;
              glVertexP3uiv(::std::uint32_t(type), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* value) {
              __gl_debug << "call glVertexP3uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glVertexP3uiv(TypeConstant::value, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_4_packed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t value) {
              __gl_debug << "call glVertexP4ui "  "type: '" << type << "'"  ", "  "value: '" << value << "'" ;
              glVertexP4ui(::std::uint32_t(type), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t value) {
              __gl_debug << "call glVertexP4ui "  "type: '" << TypeConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glVertexP4ui(TypeConstant::value, value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& type, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexP4uiv "  "type: '" << type << "'"  ", "  "value: '" << value << "'" ;
              glVertexP4uiv(::std::uint32_t(type), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t const* value) {
              __gl_debug << "call glVertexP4uiv "  "type: '" << TypeConstant::name() << "'"  ", "  "value: '" << value << "'" ;
              glVertexP4uiv(TypeConstant::value, value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_1_packed {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP1ui "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP1ui(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP1ui "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP1ui(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP1uiv "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP1uiv(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP1uiv "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP1uiv(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_2_packed {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP2ui "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP2ui(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP2ui "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP2ui(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP2uiv "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP2uiv(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP2uiv "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP2uiv(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_3_packed {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP3ui "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP3ui(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP3ui "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP3ui(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP3uiv "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP3uiv(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP3uiv "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP3uiv(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_vertex_attrib_4_packed {
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP4ui "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP4ui(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t value) {
              __gl_debug << "call glVertexAttribP4ui "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP4ui(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::gtulu::internal::constant::gl_constant_base const& type, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP4uiv "  "index: '" << index << "'"  ", "  "type: '" << type << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP4uiv(index, ::std::uint32_t(type), (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TypeConstant >
            inline static void call(::std::uint32_t index, bool normalized, ::std::uint32_t const* value) {
              __gl_debug << "call glVertexAttribP4uiv "  "index: '" << index << "'"  ", "  "type: '" << TypeConstant::name() << "'"  ", "  "normalized: '" << normalized << "'"  ", "  "value: '" << value << "'" ;
              glVertexAttribP4uiv(index, TypeConstant::value, (normalized ? 1 : 0), value);
              __gl_check_error();
              
            }
          
          };
        } // namespace fnc
      } // namespace vertex_type_2_10_10_10_rev
      namespace viewport_array {
        namespace fnc {
          /**
           */
          struct gl_depth_range_array {
            /**
             */
            inline static void call(::std::uint32_t first, GLsizei count, GLclampd const* v) {
              __gl_debug << "call glDepthRangeArrayv "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "v: '" << v << "'" ;
              glDepthRangeArrayv(first, count, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_depth_range_indexed {
            /**
             */
            inline static void call(::std::uint32_t index, GLclampd n, GLclampd f) {
              __gl_debug << "call glDepthRangeIndexed "  "index: '" << index << "'"  ", "  "n: '" << n << "'"  ", "  "f: '" << f << "'" ;
              glDepthRangeIndexed(index, n, f);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_double_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, double* data) {
              __gl_debug << "call glGetDoublei_v "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetDoublei_v(::std::uint32_t(target), index, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, double* data) {
              __gl_debug << "call glGetDoublei_v "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetDoublei_v(TargetConstant::value, index, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_get_float_indexed {
            /**
             */
            inline static void call(::gtulu::internal::constant::gl_constant_base const& target, ::std::uint32_t index, float* data) {
              __gl_debug << "call glGetFloati_v "  "target: '" << target << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetFloati_v(::std::uint32_t(target), index, data);
              __gl_check_error();
              
            }
            
            /**
             */
            template< typename TargetConstant >
            inline static void call(::std::uint32_t index, float* data) {
              __gl_debug << "call glGetFloati_v "  "target: '" << TargetConstant::name() << "'"  ", "  "index: '" << index << "'"  ", "  "data: '" << data << "'" ;
              glGetFloati_v(TargetConstant::value, index, data);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_scissor_array {
            /**
             */
            inline static void call(::std::uint32_t first, GLsizei count, ::std::int32_t const* v) {
              __gl_debug << "call glScissorArrayv "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "v: '" << v << "'" ;
              glScissorArrayv(first, count, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_scissor_indexed {
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t left, ::std::int32_t bottom, GLsizei width, GLsizei height) {
              __gl_debug << "call glScissorIndexed "  "index: '" << index << "'"  ", "  "left: '" << left << "'"  ", "  "bottom: '" << bottom << "'"  ", "  "width: '" << width << "'"  ", "  "height: '" << height << "'" ;
              glScissorIndexed(index, left, bottom, width, height);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, ::std::int32_t const* v) {
              __gl_debug << "call glScissorIndexedv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glScissorIndexedv(index, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_viewport_array {
            /**
             */
            inline static void call(::std::uint32_t first, GLsizei count, float const* v) {
              __gl_debug << "call glViewportArrayv "  "first: '" << first << "'"  ", "  "count: '" << count << "'"  ", "  "v: '" << v << "'" ;
              glViewportArrayv(first, count, v);
              __gl_check_error();
              
            }
          
          };
          /**
           */
          struct gl_viewport_indexed {
            /**
             */
            inline static void call(::std::uint32_t index, float x, float y, float w, float h) {
              __gl_debug << "call glViewportIndexedf "  "index: '" << index << "'"  ", "  "x: '" << x << "'"  ", "  "y: '" << y << "'"  ", "  "w: '" << w << "'"  ", "  "h: '" << h << "'" ;
              glViewportIndexedf(index, x, y, w, h);
              __gl_check_error();
              
            }
          
            /**
             */
            inline static void call(::std::uint32_t index, float const* v) {
              __gl_debug << "call glViewportIndexedfv "  "index: '" << index << "'"  ", "  "v: '" << v << "'" ;
              glViewportIndexedfv(index, v);
              __gl_check_error();
              
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


