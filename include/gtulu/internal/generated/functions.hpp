/**
 * @file
 * @date 2 sept. 2010
 * @todo comment
 */
 
#ifndef GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_
#define GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_

#include "gtulu/internal/generated/functions_fwd.hpp"


namespace gtulu {
  namespace internal {
  
    namespace generated {

      namespace other {
      } // namespace other
      namespace amd {
      namespace debug_output {
        namespace fnc {
        } // namespace fnc
      } // namespace debug_output
      } // namespace amd
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
      namespace ext {
      namespace timer_query {
        namespace fnc {
        } // namespace fnc
      } // namespace timer_query
      } // namespace ext
      namespace arb {
      namespace es2_compatibility {
        namespace fnc {
          struct  gl_clear_depthf  {
              inline static void call(GLclampf d) {
                __gl_debug << "call glClearDepthf (" << "d: '" << d << "'" << ")";
                glClearDepthf(d);
                __gl_check_error;
                
              }
          };

          struct  gl_depth_rangef  {
              inline static void call(GLclampf n, GLclampf f) {
                __gl_debug << "call glDepthRangef (" << "n: '" << n << "'" << ", " << "f: '" << f << "'" << ")";
                glDepthRangef(n, f);
                __gl_check_error;
                
              }
          };

          struct  gl_get_shader_precision_format  {
              inline static void call(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) {
                __gl_debug << "call glGetShaderPrecisionFormat (" << "shadertype: '" << shadertype << "'" << ", " << "precisiontype: '" << precisiontype << "'" << ", " << "range: '" << range << "'" << ", " << "precision: '" << precision << "'" << ")";
                glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
                __gl_check_error;
                
              }
              template< typename shadertype_t, typename precisiontype_t >
              inline static void call(GLint* range, GLint* precision) {
                __gl_debug << "call glGetShaderPrecisionFormat (" << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "precisiontype: '" << precisiontype_t::name::value << "'" << ", " << "range: '" << range << "'" << ", " << "precision: '" << precision << "'" << ")";
                glGetShaderPrecisionFormat(shadertype_t::value, precisiontype_t::value, range, precision);
                __gl_check_error;
                
              }
          };

          struct  gl_release_shader_compiler  {
              inline static void call() {
                __gl_debug << "call glReleaseShaderCompiler (" << "" << ")";
                glReleaseShaderCompiler();
                __gl_check_error;
                
              }
          };

          struct  gl_shader_binary  {
              inline static void call(GLsizei count, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length) {
                __gl_debug << "call glShaderBinary (" << "count: '" << count << "'" << ", " << "shaders: '" << shaders << "'" << ", " << "binaryformat: '" << binaryformat << "'" << ", " << "binary: '" << binary << "'" << ", " << "length: '" << length << "'" << ")";
                glShaderBinary(count, shaders, binaryformat, binary, length);
                __gl_check_error;
                
              }
              template< typename binaryformat_t >
              inline static void call(GLsizei count, const GLuint* shaders, const GLvoid* binary, GLsizei length) {
                __gl_debug << "call glShaderBinary (" << "count: '" << count << "'" << ", " << "shaders: '" << shaders << "'" << ", " << "binaryformat: '" << binaryformat_t::name::value << "'" << ", " << "binary: '" << binary << "'" << ", " << "length: '" << length << "'" << ")";
                glShaderBinary(count, shaders, binaryformat_t::value, binary, length);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace es2_compatibility
      namespace blend_func_extended {
        namespace fnc {
          struct  gl_bind_frag_data_location_indexed  {
              inline static void call(GLuint program, GLuint colorNumber, GLuint index, const GLchar* name) {
                __gl_debug << "call glBindFragDataLocationIndexed (" << "program: '" << program << "'" << ", " << "colorNumber: '" << colorNumber << "'" << ", " << "index: '" << index << "'" << ", " << "name: '" << name << "'" << ")";
                glBindFragDataLocationIndexed(program, colorNumber, index, name);
                __gl_check_error;
                
              }
          };

          struct  gl_get_frag_data_index  {
              inline static GLint call(GLuint program, const GLchar* name) {
                __gl_debug << "call glGetFragDataIndex (" << "program: '" << program << "'" << ", " << "name: '" << name << "'" << ")";
                GLint out = glGetFragDataIndex(program, name);
                __gl_check_error;
                return out;
              }
          };

        } // namespace fnc
      } // namespace blend_func_extended
      namespace cl_event {
        namespace fnc {
          struct  gl_create_sync_from_clevent_arb  {
              inline static GLsync call(struct _cl_context * context, struct _cl_event * event, GLbitfield flags) {
                __gl_debug << "call glCreateSyncFromCLeventARB (" << "context: '" << context << "'" << ", " << "event: '" << event << "'" << ", " << "flags: '" << flags << "'" << ")";
                GLsync out = glCreateSyncFromCLeventARB(context, event, flags);
                __gl_check_error;
                return out;
              }
          };

        } // namespace fnc
      } // namespace cl_event
      namespace copy_buffer {
        namespace fnc {
          struct  gl_copy_buffer_sub_data  {
              inline static void call(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
                __gl_debug << "call glCopyBufferSubData (" << "readTarget: '" << readTarget << "'" << ", " << "writeTarget: '" << writeTarget << "'" << ", " << "readOffset: '" << readOffset << "'" << ", " << "writeOffset: '" << writeOffset << "'" << ", " << "size: '" << size << "'" << ")";
                glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
                __gl_check_error;
                
              }
              template< typename readTarget_t, typename writeTarget_t >
              inline static void call(GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size) {
                __gl_debug << "call glCopyBufferSubData (" << "readTarget: '" << readTarget_t::name::value << "'" << ", " << "writeTarget: '" << writeTarget_t::name::value << "'" << ", " << "readOffset: '" << readOffset << "'" << ", " << "writeOffset: '" << writeOffset << "'" << ", " << "size: '" << size << "'" << ")";
                glCopyBufferSubData(readTarget_t::value, writeTarget_t::value, readOffset, writeOffset, size);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace copy_buffer
      namespace debug_output {
        namespace fnc {
          struct  gl_debug_message_callback_arb  {
              inline static void call(GLDEBUGPROCARB callback, const GLvoid* userParam) {
                __gl_debug << "call glDebugMessageCallbackARB (" << "callback: '" << callback << "'" << ", " << "userParam: '" << userParam << "'" << ")";
                glDebugMessageCallbackARB(callback, userParam);
                __gl_check_error;
                
              }
          };

          struct  gl_debug_message_control_arb  {
              inline static void call(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled) {
                __gl_debug << "call glDebugMessageControlARB (" << "source: '" << source << "'" << ", " << "type: '" << type << "'" << ", " << "severity: '" << severity << "'" << ", " << "count: '" << count << "'" << ", " << "ids: '" << ids << "'" << ", " << "enabled: '" << enabled << "'" << ")";
                glDebugMessageControlARB(source, type, severity, count, ids, enabled);
                __gl_check_error;
                
              }
              template< typename source_t, typename type_t, typename severity_t >
              inline static void call(GLsizei count, const GLuint* ids, GLboolean enabled) {
                __gl_debug << "call glDebugMessageControlARB (" << "source: '" << source_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "severity: '" << severity_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "ids: '" << ids << "'" << ", " << "enabled: '" << enabled << "'" << ")";
                glDebugMessageControlARB(source_t::value, type_t::value, severity_t::value, count, ids, enabled);
                __gl_check_error;
                
              }
          };

          struct  gl_debug_message_insert_arb  {
              inline static void call(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf) {
                __gl_debug << "call glDebugMessageInsertARB (" << "source: '" << source << "'" << ", " << "type: '" << type << "'" << ", " << "id: '" << id << "'" << ", " << "severity: '" << severity << "'" << ", " << "length: '" << length << "'" << ", " << "buf: '" << buf << "'" << ")";
                glDebugMessageInsertARB(source, type, id, severity, length, buf);
                __gl_check_error;
                
              }
              template< typename source_t, typename type_t, typename severity_t >
              inline static void call(GLuint id, GLsizei length, const GLchar* buf) {
                __gl_debug << "call glDebugMessageInsertARB (" << "source: '" << source_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "id: '" << id << "'" << ", " << "severity: '" << severity_t::name::value << "'" << ", " << "length: '" << length << "'" << ", " << "buf: '" << buf << "'" << ")";
                glDebugMessageInsertARB(source_t::value, type_t::value, id, severity_t::value, length, buf);
                __gl_check_error;
                
              }
          };

          struct  gl_get_debug_message_log_arb  {
              inline static GLuint call(GLuint count, GLsizei bufsize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog) {
                __gl_debug << "call glGetDebugMessageLogARB (" << "count: '" << count << "'" << ", " << "bufsize: '" << bufsize << "'" << ", " << "sources: '" << sources << "'" << ", " << "types: '" << types << "'" << ", " << "ids: '" << ids << "'" << ", " << "severities: '" << severities << "'" << ", " << "lengths: '" << lengths << "'" << ", " << "messageLog: '" << messageLog << "'" << ")";
                GLuint out = glGetDebugMessageLogARB(count, bufsize, sources, types, ids, severities, lengths, messageLog);
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
          struct  gl_blend_equation_separatei_arb  {
              inline static void call(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
                __gl_debug << "call glBlendEquationSeparateiARB (" << "buf: '" << buf << "'" << ", " << "modeRGB: '" << modeRGB << "'" << ", " << "modeAlpha: '" << modeAlpha << "'" << ")";
                glBlendEquationSeparateiARB(buf, modeRGB, modeAlpha);
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendEquationSeparateiARB (" << "buf: '" << buf << "'" << ", " << "modeRGB: '" << modeRGB_t::name::value << "'" << ", " << "modeAlpha: '" << modeAlpha_t::name::value << "'" << ")";
                glBlendEquationSeparateiARB(buf, modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_equationi_arb  {
              inline static void call(GLuint buf, GLenum mode) {
                __gl_debug << "call glBlendEquationiARB (" << "buf: '" << buf << "'" << ", " << "mode: '" << mode << "'" << ")";
                glBlendEquationiARB(buf, mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendEquationiARB (" << "buf: '" << buf << "'" << ", " << "mode: '" << mode_t::name::value << "'" << ")";
                glBlendEquationiARB(buf, mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_func_separatei_arb  {
              inline static void call(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
                __gl_debug << "call glBlendFuncSeparateiARB (" << "buf: '" << buf << "'" << ", " << "srcRGB: '" << srcRGB << "'" << ", " << "dstRGB: '" << dstRGB << "'" << ", " << "srcAlpha: '" << srcAlpha << "'" << ", " << "dstAlpha: '" << dstAlpha << "'" << ")";
                glBlendFuncSeparateiARB(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
                __gl_check_error;
                
              }
              template< typename srcRGB_t, typename dstRGB_t, typename srcAlpha_t, typename dstAlpha_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendFuncSeparateiARB (" << "buf: '" << buf << "'" << ", " << "srcRGB: '" << srcRGB_t::name::value << "'" << ", " << "dstRGB: '" << dstRGB_t::name::value << "'" << ", " << "srcAlpha: '" << srcAlpha_t::name::value << "'" << ", " << "dstAlpha: '" << dstAlpha_t::name::value << "'" << ")";
                glBlendFuncSeparateiARB(buf, srcRGB_t::value, dstRGB_t::value, srcAlpha_t::value, dstAlpha_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_funci_arb  {
              inline static void call(GLuint buf, GLenum src, GLenum dst) {
                __gl_debug << "call glBlendFunciARB (" << "buf: '" << buf << "'" << ", " << "src: '" << src << "'" << ", " << "dst: '" << dst << "'" << ")";
                glBlendFunciARB(buf, src, dst);
                __gl_check_error;
                
              }
              template< typename src_t, typename dst_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendFunciARB (" << "buf: '" << buf << "'" << ", " << "src: '" << src_t::name::value << "'" << ", " << "dst: '" << dst_t::name::value << "'" << ")";
                glBlendFunciARB(buf, src_t::value, dst_t::value);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace draw_buffers_blend
      namespace draw_elements_base_vertex {
        namespace fnc {
          struct  gl_draw_elements_base_vertex  {
              inline static void call(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex) {
                __gl_debug << "call glDrawElementsBaseVertex (" << "mode: '" << mode << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glDrawElementsBaseVertex(mode, count, type, indices, basevertex);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count, const GLvoid* indices, GLint basevertex) {
                __gl_debug << "call glDrawElementsBaseVertex (" << "mode: '" << mode_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glDrawElementsBaseVertex(mode_t::value, count, type_t::value, indices, basevertex);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_elements_instanced_base_vertex  {
              inline static void call(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount, GLint basevertex) {
                __gl_debug << "call glDrawElementsInstancedBaseVertex (" << "mode: '" << mode << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glDrawElementsInstancedBaseVertex(mode, count, type, indices, primcount, basevertex);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count, const GLvoid* indices, GLsizei primcount, GLint basevertex) {
                __gl_debug << "call glDrawElementsInstancedBaseVertex (" << "mode: '" << mode_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glDrawElementsInstancedBaseVertex(mode_t::value, count, type_t::value, indices, primcount, basevertex);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_range_elements_base_vertex  {
              inline static void call(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex) {
                __gl_debug << "call glDrawRangeElementsBaseVertex (" << "mode: '" << mode << "'" << ", " << "start: '" << start << "'" << ", " << "end: '" << end << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glDrawRangeElementsBaseVertex(mode, start, end, count, type, indices, basevertex);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLuint start, GLuint end, GLsizei count, const GLvoid* indices, GLint basevertex) {
                __gl_debug << "call glDrawRangeElementsBaseVertex (" << "mode: '" << mode_t::name::value << "'" << ", " << "start: '" << start << "'" << ", " << "end: '" << end << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glDrawRangeElementsBaseVertex(mode_t::value, start, end, count, type_t::value, indices, basevertex);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_draw_elements_base_vertex  {
              inline static void call(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount, const GLint* basevertex) {
                __gl_debug << "call glMultiDrawElementsBaseVertex (" << "mode: '" << mode << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glMultiDrawElementsBaseVertex(mode, count, type, indices, primcount, basevertex);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(const GLsizei* count, const GLvoid** indices, GLsizei primcount, const GLint* basevertex) {
                __gl_debug << "call glMultiDrawElementsBaseVertex (" << "mode: '" << mode_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ", " << "basevertex: '" << basevertex << "'" << ")";
                glMultiDrawElementsBaseVertex(mode_t::value, count, type_t::value, indices, primcount, basevertex);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace draw_elements_base_vertex
      namespace draw_indirect {
        namespace fnc {
          struct  gl_draw_arrays_indirect  {
              inline static void call(GLenum mode, const GLvoid* indirect) {
                __gl_debug << "call glDrawArraysIndirect (" << "mode: '" << mode << "'" << ", " << "indirect: '" << indirect << "'" << ")";
                glDrawArraysIndirect(mode, indirect);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(const GLvoid* indirect) {
                __gl_debug << "call glDrawArraysIndirect (" << "mode: '" << mode_t::name::value << "'" << ", " << "indirect: '" << indirect << "'" << ")";
                glDrawArraysIndirect(mode_t::value, indirect);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_elements_indirect  {
              inline static void call(GLenum mode, GLenum type, const GLvoid* indirect) {
                __gl_debug << "call glDrawElementsIndirect (" << "mode: '" << mode << "'" << ", " << "type: '" << type << "'" << ", " << "indirect: '" << indirect << "'" << ")";
                glDrawElementsIndirect(mode, type, indirect);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(const GLvoid* indirect) {
                __gl_debug << "call glDrawElementsIndirect (" << "mode: '" << mode_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indirect: '" << indirect << "'" << ")";
                glDrawElementsIndirect(mode_t::value, type_t::value, indirect);
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
          struct  gl_bind_framebuffer  {
              inline static void call(GLenum target, GLuint framebuffer) {
                __gl_debug << "call glBindFramebuffer (" << "target: '" << target << "'" << ", " << "framebuffer: '" << framebuffer << "'" << ")";
                glBindFramebuffer(target, framebuffer);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint framebuffer) {
                __gl_debug << "call glBindFramebuffer (" << "target: '" << target_t::name::value << "'" << ", " << "framebuffer: '" << framebuffer << "'" << ")";
                glBindFramebuffer(target_t::value, framebuffer);
                __gl_check_error;
                
              }
          };

          struct  gl_bind_renderbuffer  {
              inline static void call(GLenum target, GLuint renderbuffer) {
                __gl_debug << "call glBindRenderbuffer (" << "target: '" << target << "'" << ", " << "renderbuffer: '" << renderbuffer << "'" << ")";
                glBindRenderbuffer(target, renderbuffer);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint renderbuffer) {
                __gl_debug << "call glBindRenderbuffer (" << "target: '" << target_t::name::value << "'" << ", " << "renderbuffer: '" << renderbuffer << "'" << ")";
                glBindRenderbuffer(target_t::value, renderbuffer);
                __gl_check_error;
                
              }
          };

          struct  gl_blit_framebuffer  {
              inline static void call(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter) {
                __gl_debug << "call glBlitFramebuffer (" << "srcX0: '" << srcX0 << "'" << ", " << "srcY0: '" << srcY0 << "'" << ", " << "srcX1: '" << srcX1 << "'" << ", " << "srcY1: '" << srcY1 << "'" << ", " << "dstX0: '" << dstX0 << "'" << ", " << "dstY0: '" << dstY0 << "'" << ", " << "dstX1: '" << dstX1 << "'" << ", " << "dstY1: '" << dstY1 << "'" << ", " << "mask: '" << mask << "'" << ", " << "filter: '" << filter << "'" << ")";
                glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
                __gl_check_error;
                
              }
              template< typename filter_t >
              inline static void call(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask) {
                __gl_debug << "call glBlitFramebuffer (" << "srcX0: '" << srcX0 << "'" << ", " << "srcY0: '" << srcY0 << "'" << ", " << "srcX1: '" << srcX1 << "'" << ", " << "srcY1: '" << srcY1 << "'" << ", " << "dstX0: '" << dstX0 << "'" << ", " << "dstY0: '" << dstY0 << "'" << ", " << "dstX1: '" << dstX1 << "'" << ", " << "dstY1: '" << dstY1 << "'" << ", " << "mask: '" << mask << "'" << ", " << "filter: '" << filter_t::name::value << "'" << ")";
                glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_check_framebuffer_status  {
              inline static GLenum call(GLenum target) {
                __gl_debug << "call glCheckFramebufferStatus (" << "target: '" << target << "'" << ")";
                GLenum out = glCheckFramebufferStatus(target);
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLenum call() {
                __gl_debug << "call glCheckFramebufferStatus (" << "target: '" << target_t::name::value << "'" << ")";
                GLenum out = glCheckFramebufferStatus(target_t::value);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_delete_framebuffers  {
              inline static void call(GLsizei n, const GLuint* framebuffers) {
                __gl_debug << "call glDeleteFramebuffers (" << "n: '" << n << "'" << ", " << "framebuffers: '" << framebuffers << "'" << ")";
                glDeleteFramebuffers(n, framebuffers);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_renderbuffers  {
              inline static void call(GLsizei n, const GLuint* renderbuffers) {
                __gl_debug << "call glDeleteRenderbuffers (" << "n: '" << n << "'" << ", " << "renderbuffers: '" << renderbuffers << "'" << ")";
                glDeleteRenderbuffers(n, renderbuffers);
                __gl_check_error;
                
              }
          };

          struct  gl_framebuffer_renderbuffer  {
              inline static void call(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
                __gl_debug << "call glFramebufferRenderbuffer (" << "target: '" << target << "'" << ", " << "attachment: '" << attachment << "'" << ", " << "renderbuffertarget: '" << renderbuffertarget << "'" << ", " << "renderbuffer: '" << renderbuffer << "'" << ")";
                glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename renderbuffertarget_t >
              inline static void call(GLuint renderbuffer) {
                __gl_debug << "call glFramebufferRenderbuffer (" << "target: '" << target_t::name::value << "'" << ", " << "attachment: '" << attachment_t::name::value << "'" << ", " << "renderbuffertarget: '" << renderbuffertarget_t::name::value << "'" << ", " << "renderbuffer: '" << renderbuffer << "'" << ")";
                glFramebufferRenderbuffer(target_t::value, attachment_t::value, renderbuffertarget_t::value, renderbuffer);
                __gl_check_error;
                
              }
          };

          struct  gl_framebuffer_texture_1d  {
              inline static void call(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
                __gl_debug << "call glFramebufferTexture1D (" << "target: '" << target << "'" << ", " << "attachment: '" << attachment << "'" << ", " << "textarget: '" << textarget << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ")";
                glFramebufferTexture1D(target, attachment, textarget, texture, level);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename textarget_t >
              inline static void call(GLuint texture, GLint level) {
                __gl_debug << "call glFramebufferTexture1D (" << "target: '" << target_t::name::value << "'" << ", " << "attachment: '" << attachment_t::name::value << "'" << ", " << "textarget: '" << textarget_t::name::value << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ")";
                glFramebufferTexture1D(target_t::value, attachment_t::value, textarget_t::value, texture, level);
                __gl_check_error;
                
              }
          };

          struct  gl_framebuffer_texture_2d  {
              inline static void call(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
                __gl_debug << "call glFramebufferTexture2D (" << "target: '" << target << "'" << ", " << "attachment: '" << attachment << "'" << ", " << "textarget: '" << textarget << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ")";
                glFramebufferTexture2D(target, attachment, textarget, texture, level);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename textarget_t >
              inline static void call(GLuint texture, GLint level) {
                __gl_debug << "call glFramebufferTexture2D (" << "target: '" << target_t::name::value << "'" << ", " << "attachment: '" << attachment_t::name::value << "'" << ", " << "textarget: '" << textarget_t::name::value << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ")";
                glFramebufferTexture2D(target_t::value, attachment_t::value, textarget_t::value, texture, level);
                __gl_check_error;
                
              }
          };

          struct  gl_framebuffer_texture_3d  {
              inline static void call(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset) {
                __gl_debug << "call glFramebufferTexture3D (" << "target: '" << target << "'" << ", " << "attachment: '" << attachment << "'" << ", " << "textarget: '" << textarget << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ", " << "zoffset: '" << zoffset << "'" << ")";
                glFramebufferTexture3D(target, attachment, textarget, texture, level, zoffset);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename textarget_t >
              inline static void call(GLuint texture, GLint level, GLint zoffset) {
                __gl_debug << "call glFramebufferTexture3D (" << "target: '" << target_t::name::value << "'" << ", " << "attachment: '" << attachment_t::name::value << "'" << ", " << "textarget: '" << textarget_t::name::value << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ", " << "zoffset: '" << zoffset << "'" << ")";
                glFramebufferTexture3D(target_t::value, attachment_t::value, textarget_t::value, texture, level, zoffset);
                __gl_check_error;
                
              }
          };

          struct  gl_framebuffer_texture_layer  {
              inline static void call(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer) {
                __gl_debug << "call glFramebufferTextureLayer (" << "target: '" << target << "'" << ", " << "attachment: '" << attachment << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ", " << "layer: '" << layer << "'" << ")";
                glFramebufferTextureLayer(target, attachment, texture, level, layer);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t >
              inline static void call(GLuint texture, GLint level, GLint layer) {
                __gl_debug << "call glFramebufferTextureLayer (" << "target: '" << target_t::name::value << "'" << ", " << "attachment: '" << attachment_t::name::value << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ", " << "layer: '" << layer << "'" << ")";
                glFramebufferTextureLayer(target_t::value, attachment_t::value, texture, level, layer);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_framebuffers  {
              inline static void call(GLsizei n, GLuint* framebuffers) {
                __gl_debug << "call glGenFramebuffers (" << "n: '" << n << "'" << ", " << "framebuffers: '" << framebuffers << "'" << ")";
                glGenFramebuffers(n, framebuffers);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_renderbuffers  {
              inline static void call(GLsizei n, GLuint* renderbuffers) {
                __gl_debug << "call glGenRenderbuffers (" << "n: '" << n << "'" << ", " << "renderbuffers: '" << renderbuffers << "'" << ")";
                glGenRenderbuffers(n, renderbuffers);
                __gl_check_error;
                
              }
          };

          struct  gl_generate_mipmap  {
              inline static void call(GLenum target) {
                __gl_debug << "call glGenerateMipmap (" << "target: '" << target << "'" << ")";
                glGenerateMipmap(target);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call() {
                __gl_debug << "call glGenerateMipmap (" << "target: '" << target_t::name::value << "'" << ")";
                glGenerateMipmap(target_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_get_framebuffer_attachment_parameteriv  {
              inline static void call(GLenum target, GLenum attachment, GLenum pname, GLint* params) {
                __gl_debug << "call glGetFramebufferAttachmentParameteriv (" << "target: '" << target << "'" << ", " << "attachment: '" << attachment << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t, typename pname_t >
              inline static void call(GLint* params) {
                __gl_debug << "call glGetFramebufferAttachmentParameteriv (" << "target: '" << target_t::name::value << "'" << ", " << "attachment: '" << attachment_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetFramebufferAttachmentParameteriv(target_t::value, attachment_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_renderbuffer_parameteriv  {
              inline static void call(GLenum target, GLenum pname, GLint* params) {
                __gl_debug << "call glGetRenderbufferParameteriv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetRenderbufferParameteriv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint* params) {
                __gl_debug << "call glGetRenderbufferParameteriv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetRenderbufferParameteriv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_framebuffer  {
              inline static GLboolean call(GLuint framebuffer) {
                __gl_debug << "call glIsFramebuffer (" << "framebuffer: '" << framebuffer << "'" << ")";
                GLboolean out = glIsFramebuffer(framebuffer);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_is_renderbuffer  {
              inline static GLboolean call(GLuint renderbuffer) {
                __gl_debug << "call glIsRenderbuffer (" << "renderbuffer: '" << renderbuffer << "'" << ")";
                GLboolean out = glIsRenderbuffer(renderbuffer);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_renderbuffer_storage  {
              inline static void call(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
                __gl_debug << "call glRenderbufferStorage (" << "target: '" << target << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glRenderbufferStorage(target, internalformat, width, height);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei width, GLsizei height) {
                __gl_debug << "call glRenderbufferStorage (" << "target: '" << target_t::name::value << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glRenderbufferStorage(target_t::value, internalformat_t::value, width, height);
                __gl_check_error;
                
              }
          };

          struct  gl_renderbuffer_storage_multisample  {
              inline static void call(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
                __gl_debug << "call glRenderbufferStorageMultisample (" << "target: '" << target << "'" << ", " << "samples: '" << samples << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei samples, GLsizei width, GLsizei height) {
                __gl_debug << "call glRenderbufferStorageMultisample (" << "target: '" << target_t::name::value << "'" << ", " << "samples: '" << samples << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glRenderbufferStorageMultisample(target_t::value, samples, internalformat_t::value, width, height);
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
          struct  gl_get_program_binary  {
              inline static void call(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, GLvoid* binary) {
                __gl_debug << "call glGetProgramBinary (" << "program: '" << program << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "binaryFormat: '" << binaryFormat << "'" << ", " << "binary: '" << binary << "'" << ")";
                glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
                __gl_check_error;
                
              }
          };

          struct  gl_program_binary  {
              inline static void call(GLuint program, GLenum binaryFormat, const GLvoid* binary, GLsizei length) {
                __gl_debug << "call glProgramBinary (" << "program: '" << program << "'" << ", " << "binaryFormat: '" << binaryFormat << "'" << ", " << "binary: '" << binary << "'" << ", " << "length: '" << length << "'" << ")";
                glProgramBinary(program, binaryFormat, binary, length);
                __gl_check_error;
                
              }
              template< typename binaryFormat_t >
              inline static void call(GLuint program, const GLvoid* binary, GLsizei length) {
                __gl_debug << "call glProgramBinary (" << "program: '" << program << "'" << ", " << "binaryFormat: '" << binaryFormat_t::name::value << "'" << ", " << "binary: '" << binary << "'" << ", " << "length: '" << length << "'" << ")";
                glProgramBinary(program, binaryFormat_t::value, binary, length);
                __gl_check_error;
                
              }
          };

          struct  gl_program_parameteri  {
              inline static void call(GLuint program, GLenum pname, GLint value) {
                __gl_debug << "call glProgramParameteri (" << "program: '" << program << "'" << ", " << "pname: '" << pname << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramParameteri(program, pname, value);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint program, GLint value) {
                __gl_debug << "call glProgramParameteri (" << "program: '" << program << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramParameteri(program, pname_t::value, value);
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
          struct  gl_get_uniformdv  {
              inline static void call(GLuint program, GLint location, GLdouble* params) {
                __gl_debug << "call glGetUniformdv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "params: '" << params << "'" << ")";
                glGetUniformdv(program, location, params);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_d  {
              inline static void call(GLint location, GLdouble x) {
                __gl_debug << "call glUniform1d (" << "location: '" << location << "'" << ", " << "x: '" << x << "'" << ")";
                glUniform1d(location, x);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_dv  {
              inline static void call(GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glUniform1dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform1dv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_d  {
              inline static void call(GLint location, GLdouble x, GLdouble y) {
                __gl_debug << "call glUniform2d (" << "location: '" << location << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ")";
                glUniform2d(location, x, y);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_dv  {
              inline static void call(GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glUniform2dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform2dv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_d  {
              inline static void call(GLint location, GLdouble x, GLdouble y, GLdouble z) {
                __gl_debug << "call glUniform3d (" << "location: '" << location << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ")";
                glUniform3d(location, x, y, z);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_dv  {
              inline static void call(GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glUniform3dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform3dv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_d  {
              inline static void call(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
                __gl_debug << "call glUniform4d (" << "location: '" << location << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glUniform4d(location, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_dv  {
              inline static void call(GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glUniform4dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform4dv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_2_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix2dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix2dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_2x3_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix2x3dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix2x3dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_2x4_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix2x4dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix2x4dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_3_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix3dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix3dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_3x2_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix3x2dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix3x2dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_3x4_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix3x4dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix3x4dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_4_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix4dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix4dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_4x2_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix4x2dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix4x2dv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_4x3_dv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glUniformMatrix4x3dv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix4x3dv(location, count, transpose, value);
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
          struct  gl_flush_mapped_buffer_range  {
              inline static void call(GLenum target, GLintptr offset, GLsizeiptr length) {
                __gl_debug << "call glFlushMappedBufferRange (" << "target: '" << target << "'" << ", " << "offset: '" << offset << "'" << ", " << "length: '" << length << "'" << ")";
                glFlushMappedBufferRange(target, offset, length);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLintptr offset, GLsizeiptr length) {
                __gl_debug << "call glFlushMappedBufferRange (" << "target: '" << target_t::name::value << "'" << ", " << "offset: '" << offset << "'" << ", " << "length: '" << length << "'" << ")";
                glFlushMappedBufferRange(target_t::value, offset, length);
                __gl_check_error;
                
              }
          };

          struct  gl_map_buffer_range  {
              inline static GLvoid* call(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
                __gl_debug << "call glMapBufferRange (" << "target: '" << target << "'" << ", " << "offset: '" << offset << "'" << ", " << "length: '" << length << "'" << ", " << "access: '" << access << "'" << ")";
                GLvoid* out = glMapBufferRange(target, offset, length, access);
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLvoid* call(GLintptr offset, GLsizeiptr length, GLbitfield access) {
                __gl_debug << "call glMapBufferRange (" << "target: '" << target_t::name::value << "'" << ", " << "offset: '" << offset << "'" << ", " << "length: '" << length << "'" << ", " << "access: '" << access << "'" << ")";
                GLvoid* out = glMapBufferRange(target_t::value, offset, length, access);
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
          struct  gl_provoking_vertex  {
              inline static void call(GLenum mode) {
                __gl_debug << "call glProvokingVertex (" << "mode: '" << mode << "'" << ")";
                glProvokingVertex(mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glProvokingVertex (" << "mode: '" << mode_t::name::value << "'" << ")";
                glProvokingVertex(mode_t::value);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace provoking_vertex
      namespace robustness {
        namespace fnc {
          struct  gl_get_graphics_reset_status_arb  {
              inline static GLenum call() {
                __gl_debug << "call glGetGraphicsResetStatusARB (" << "" << ")";
                GLenum out = glGetGraphicsResetStatusARB();
                __gl_check_error;
                return out;
              }
          };

          struct  gl_getn_color_table_arb  {
              inline static void call(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* table) {
                __gl_debug << "call glGetnColorTableARB (" << "target: '" << target << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "table: '" << table << "'" << ")";
                glGetnColorTableARB(target, format, type, bufSize, table);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLsizei bufSize, GLvoid* table) {
                __gl_debug << "call glGetnColorTableARB (" << "target: '" << target_t::name::value << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "table: '" << table << "'" << ")";
                glGetnColorTableARB(target_t::value, format_t::value, type_t::value, bufSize, table);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_compressed_tex_image_arb  {
              inline static void call(GLenum target, GLint lod, GLsizei bufSize, GLvoid* img) {
                __gl_debug << "call glGetnCompressedTexImageARB (" << "target: '" << target << "'" << ", " << "lod: '" << lod << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "img: '" << img << "'" << ")";
                glGetnCompressedTexImageARB(target, lod, bufSize, img);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLint lod, GLsizei bufSize, GLvoid* img) {
                __gl_debug << "call glGetnCompressedTexImageARB (" << "target: '" << target_t::name::value << "'" << ", " << "lod: '" << lod << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "img: '" << img << "'" << ")";
                glGetnCompressedTexImageARB(target_t::value, lod, bufSize, img);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_convolution_filter_arb  {
              inline static void call(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* image) {
                __gl_debug << "call glGetnConvolutionFilterARB (" << "target: '" << target << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "image: '" << image << "'" << ")";
                glGetnConvolutionFilterARB(target, format, type, bufSize, image);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLsizei bufSize, GLvoid* image) {
                __gl_debug << "call glGetnConvolutionFilterARB (" << "target: '" << target_t::name::value << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "image: '" << image << "'" << ")";
                glGetnConvolutionFilterARB(target_t::value, format_t::value, type_t::value, bufSize, image);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_histogram_arb  {
              inline static void call(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values) {
                __gl_debug << "call glGetnHistogramARB (" << "target: '" << target << "'" << ", " << "reset: '" << reset << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnHistogramARB(target, reset, format, type, bufSize, values);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLboolean reset, GLsizei bufSize, GLvoid* values) {
                __gl_debug << "call glGetnHistogramARB (" << "target: '" << target_t::name::value << "'" << ", " << "reset: '" << reset << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnHistogramARB(target_t::value, reset, format_t::value, type_t::value, bufSize, values);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_mapdv_arb  {
              inline static void call(GLenum target, GLenum query, GLsizei bufSize, GLdouble* v) {
                __gl_debug << "call glGetnMapdvARB (" << "target: '" << target << "'" << ", " << "query: '" << query << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "v: '" << v << "'" << ")";
                glGetnMapdvARB(target, query, bufSize, v);
                __gl_check_error;
                
              }
              template< typename target_t, typename query_t >
              inline static void call(GLsizei bufSize, GLdouble* v) {
                __gl_debug << "call glGetnMapdvARB (" << "target: '" << target_t::name::value << "'" << ", " << "query: '" << query_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "v: '" << v << "'" << ")";
                glGetnMapdvARB(target_t::value, query_t::value, bufSize, v);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_mapfv_arb  {
              inline static void call(GLenum target, GLenum query, GLsizei bufSize, GLfloat* v) {
                __gl_debug << "call glGetnMapfvARB (" << "target: '" << target << "'" << ", " << "query: '" << query << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "v: '" << v << "'" << ")";
                glGetnMapfvARB(target, query, bufSize, v);
                __gl_check_error;
                
              }
              template< typename target_t, typename query_t >
              inline static void call(GLsizei bufSize, GLfloat* v) {
                __gl_debug << "call glGetnMapfvARB (" << "target: '" << target_t::name::value << "'" << ", " << "query: '" << query_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "v: '" << v << "'" << ")";
                glGetnMapfvARB(target_t::value, query_t::value, bufSize, v);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_mapiv_arb  {
              inline static void call(GLenum target, GLenum query, GLsizei bufSize, GLint* v) {
                __gl_debug << "call glGetnMapivARB (" << "target: '" << target << "'" << ", " << "query: '" << query << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "v: '" << v << "'" << ")";
                glGetnMapivARB(target, query, bufSize, v);
                __gl_check_error;
                
              }
              template< typename target_t, typename query_t >
              inline static void call(GLsizei bufSize, GLint* v) {
                __gl_debug << "call glGetnMapivARB (" << "target: '" << target_t::name::value << "'" << ", " << "query: '" << query_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "v: '" << v << "'" << ")";
                glGetnMapivARB(target_t::value, query_t::value, bufSize, v);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_minmax_arb  {
              inline static void call(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values) {
                __gl_debug << "call glGetnMinmaxARB (" << "target: '" << target << "'" << ", " << "reset: '" << reset << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnMinmaxARB(target, reset, format, type, bufSize, values);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLboolean reset, GLsizei bufSize, GLvoid* values) {
                __gl_debug << "call glGetnMinmaxARB (" << "target: '" << target_t::name::value << "'" << ", " << "reset: '" << reset << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnMinmaxARB(target_t::value, reset, format_t::value, type_t::value, bufSize, values);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_pixel_mapfv_arb  {
              inline static void call(GLenum map, GLsizei bufSize, GLfloat* values) {
                __gl_debug << "call glGetnPixelMapfvARB (" << "map: '" << map << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnPixelMapfvARB(map, bufSize, values);
                __gl_check_error;
                
              }
              template< typename map_t >
              inline static void call(GLsizei bufSize, GLfloat* values) {
                __gl_debug << "call glGetnPixelMapfvARB (" << "map: '" << map_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnPixelMapfvARB(map_t::value, bufSize, values);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_pixel_mapuiv_arb  {
              inline static void call(GLenum map, GLsizei bufSize, GLuint* values) {
                __gl_debug << "call glGetnPixelMapuivARB (" << "map: '" << map << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnPixelMapuivARB(map, bufSize, values);
                __gl_check_error;
                
              }
              template< typename map_t >
              inline static void call(GLsizei bufSize, GLuint* values) {
                __gl_debug << "call glGetnPixelMapuivARB (" << "map: '" << map_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnPixelMapuivARB(map_t::value, bufSize, values);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_pixel_mapusv_arb  {
              inline static void call(GLenum map, GLsizei bufSize, GLushort* values) {
                __gl_debug << "call glGetnPixelMapusvARB (" << "map: '" << map << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnPixelMapusvARB(map, bufSize, values);
                __gl_check_error;
                
              }
              template< typename map_t >
              inline static void call(GLsizei bufSize, GLushort* values) {
                __gl_debug << "call glGetnPixelMapusvARB (" << "map: '" << map_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "values: '" << values << "'" << ")";
                glGetnPixelMapusvARB(map_t::value, bufSize, values);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_polygon_stipple_arb  {
              inline static void call(GLsizei bufSize, GLubyte* pattern) {
                __gl_debug << "call glGetnPolygonStippleARB (" << "bufSize: '" << bufSize << "'" << ", " << "pattern: '" << pattern << "'" << ")";
                glGetnPolygonStippleARB(bufSize, pattern);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_separable_filter_arb  {
              inline static void call(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid* row, GLsizei columnBufSize, GLvoid* column, GLvoid* span) {
                __gl_debug << "call glGetnSeparableFilterARB (" << "target: '" << target << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "rowBufSize: '" << rowBufSize << "'" << ", " << "row: '" << row << "'" << ", " << "columnBufSize: '" << columnBufSize << "'" << ", " << "column: '" << column << "'" << ", " << "span: '" << span << "'" << ")";
                glGetnSeparableFilterARB(target, format, type, rowBufSize, row, columnBufSize, column, span);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLsizei rowBufSize, GLvoid* row, GLsizei columnBufSize, GLvoid* column, GLvoid* span) {
                __gl_debug << "call glGetnSeparableFilterARB (" << "target: '" << target_t::name::value << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "rowBufSize: '" << rowBufSize << "'" << ", " << "row: '" << row << "'" << ", " << "columnBufSize: '" << columnBufSize << "'" << ", " << "column: '" << column << "'" << ", " << "span: '" << span << "'" << ")";
                glGetnSeparableFilterARB(target_t::value, format_t::value, type_t::value, rowBufSize, row, columnBufSize, column, span);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_tex_image_arb  {
              inline static void call(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid* img) {
                __gl_debug << "call glGetnTexImageARB (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "img: '" << img << "'" << ")";
                glGetnTexImageARB(target, level, format, type, bufSize, img);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLsizei bufSize, GLvoid* img) {
                __gl_debug << "call glGetnTexImageARB (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "img: '" << img << "'" << ")";
                glGetnTexImageARB(target_t::value, level, format_t::value, type_t::value, bufSize, img);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_uniformdv_arb  {
              inline static void call(GLuint program, GLint location, GLsizei bufSize, GLdouble* params) {
                __gl_debug << "call glGetnUniformdvARB (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "params: '" << params << "'" << ")";
                glGetnUniformdvARB(program, location, bufSize, params);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_uniformfv_arb  {
              inline static void call(GLuint program, GLint location, GLsizei bufSize, GLfloat* params) {
                __gl_debug << "call glGetnUniformfvARB (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "params: '" << params << "'" << ")";
                glGetnUniformfvARB(program, location, bufSize, params);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_uniformiv_arb  {
              inline static void call(GLuint program, GLint location, GLsizei bufSize, GLint* params) {
                __gl_debug << "call glGetnUniformivARB (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "params: '" << params << "'" << ")";
                glGetnUniformivARB(program, location, bufSize, params);
                __gl_check_error;
                
              }
          };

          struct  gl_getn_uniformuiv_arb  {
              inline static void call(GLuint program, GLint location, GLsizei bufSize, GLuint* params) {
                __gl_debug << "call glGetnUniformuivARB (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "params: '" << params << "'" << ")";
                glGetnUniformuivARB(program, location, bufSize, params);
                __gl_check_error;
                
              }
          };

          struct  gl_readn_pixels_arb  {
              inline static void call(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid* data) {
                __gl_debug << "call glReadnPixelsARB (" << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "data: '" << data << "'" << ")";
                glReadnPixelsARB(x, y, width, height, format, type, bufSize, data);
                __gl_check_error;
                
              }
              template< typename format_t, typename type_t >
              inline static void call(GLint x, GLint y, GLsizei width, GLsizei height, GLsizei bufSize, GLvoid* data) {
                __gl_debug << "call glReadnPixelsARB (" << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "data: '" << data << "'" << ")";
                glReadnPixelsARB(x, y, width, height, format_t::value, type_t::value, bufSize, data);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace robustness
      namespace sample_shading {
        namespace fnc {
          struct  gl_min_sample_shading_arb  {
              inline static void call(GLclampf value) {
                __gl_debug << "call glMinSampleShadingARB (" << "value: '" << value << "'" << ")";
                glMinSampleShadingARB(value);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace sample_shading
      namespace sampler_objects {
        namespace fnc {
          struct  gl_bind_sampler  {
              inline static void call(GLuint unit, GLuint sampler) {
                __gl_debug << "call glBindSampler (" << "unit: '" << unit << "'" << ", " << "sampler: '" << sampler << "'" << ")";
                glBindSampler(unit, sampler);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_samplers  {
              inline static void call(GLsizei count, const GLuint* samplers) {
                __gl_debug << "call glDeleteSamplers (" << "count: '" << count << "'" << ", " << "samplers: '" << samplers << "'" << ")";
                glDeleteSamplers(count, samplers);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_samplers  {
              inline static void call(GLsizei count, GLuint* samplers) {
                __gl_debug << "call glGenSamplers (" << "count: '" << count << "'" << ", " << "samplers: '" << samplers << "'" << ")";
                glGenSamplers(count, samplers);
                __gl_check_error;
                
              }
          };

          struct  gl_get_sampler_parameter_iiv  {
              inline static void call(GLuint sampler, GLenum pname, GLint* params) {
                __gl_debug << "call glGetSamplerParameterIiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameterIiv(sampler, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, GLint* params) {
                __gl_debug << "call glGetSamplerParameterIiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameterIiv(sampler, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_sampler_parameter_iuiv  {
              inline static void call(GLuint sampler, GLenum pname, GLuint* params) {
                __gl_debug << "call glGetSamplerParameterIuiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameterIuiv(sampler, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, GLuint* params) {
                __gl_debug << "call glGetSamplerParameterIuiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameterIuiv(sampler, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_sampler_parameterfv  {
              inline static void call(GLuint sampler, GLenum pname, GLfloat* params) {
                __gl_debug << "call glGetSamplerParameterfv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameterfv(sampler, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, GLfloat* params) {
                __gl_debug << "call glGetSamplerParameterfv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameterfv(sampler, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_sampler_parameteriv  {
              inline static void call(GLuint sampler, GLenum pname, GLint* params) {
                __gl_debug << "call glGetSamplerParameteriv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameteriv(sampler, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, GLint* params) {
                __gl_debug << "call glGetSamplerParameteriv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetSamplerParameteriv(sampler, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_sampler  {
              inline static GLboolean call(GLuint sampler) {
                __gl_debug << "call glIsSampler (" << "sampler: '" << sampler << "'" << ")";
                GLboolean out = glIsSampler(sampler);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_sampler_parameter_iiv  {
              inline static void call(GLuint sampler, GLenum pname, const GLint* param) {
                __gl_debug << "call glSamplerParameterIiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterIiv(sampler, pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, const GLint* param) {
                __gl_debug << "call glSamplerParameterIiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterIiv(sampler, pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_sampler_parameter_iuiv  {
              inline static void call(GLuint sampler, GLenum pname, const GLuint* param) {
                __gl_debug << "call glSamplerParameterIuiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterIuiv(sampler, pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, const GLuint* param) {
                __gl_debug << "call glSamplerParameterIuiv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterIuiv(sampler, pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_sampler_parameterf  {
              inline static void call(GLuint sampler, GLenum pname, GLfloat param) {
                __gl_debug << "call glSamplerParameterf (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterf(sampler, pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, GLfloat param) {
                __gl_debug << "call glSamplerParameterf (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterf(sampler, pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_sampler_parameterfv  {
              inline static void call(GLuint sampler, GLenum pname, const GLfloat* param) {
                __gl_debug << "call glSamplerParameterfv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterfv(sampler, pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, const GLfloat* param) {
                __gl_debug << "call glSamplerParameterfv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameterfv(sampler, pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_sampler_parameteri  {
              inline static void call(GLuint sampler, GLenum pname, GLint param) {
                __gl_debug << "call glSamplerParameteri (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameteri(sampler, pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, GLint param) {
                __gl_debug << "call glSamplerParameteri (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameteri(sampler, pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_sampler_parameteriv  {
              inline static void call(GLuint sampler, GLenum pname, const GLint* param) {
                __gl_debug << "call glSamplerParameteriv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameteriv(sampler, pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint sampler, const GLint* param) {
                __gl_debug << "call glSamplerParameteriv (" << "sampler: '" << sampler << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glSamplerParameteriv(sampler, pname_t::value, param);
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
          struct  gl_active_shader_program  {
              inline static void call(GLuint pipeline, GLuint program) {
                __gl_debug << "call glActiveShaderProgram (" << "pipeline: '" << pipeline << "'" << ", " << "program: '" << program << "'" << ")";
                glActiveShaderProgram(pipeline, program);
                __gl_check_error;
                
              }
          };

          struct  gl_bind_program_pipeline  {
              inline static void call(GLuint pipeline) {
                __gl_debug << "call glBindProgramPipeline (" << "pipeline: '" << pipeline << "'" << ")";
                glBindProgramPipeline(pipeline);
                __gl_check_error;
                
              }
          };

          struct  gl_create_shader_programv  {
              inline static GLuint call(GLenum type, GLsizei count, const GLchar** strings) {
                __gl_debug << "call glCreateShaderProgramv (" << "type: '" << type << "'" << ", " << "count: '" << count << "'" << ", " << "strings: '" << strings << "'" << ")";
                GLuint out = glCreateShaderProgramv(type, count, strings);
                __gl_check_error;
                return out;
              }
              template< typename type_t >
              inline static GLuint call(GLsizei count, const GLchar** strings) {
                __gl_debug << "call glCreateShaderProgramv (" << "type: '" << type_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "strings: '" << strings << "'" << ")";
                GLuint out = glCreateShaderProgramv(type_t::value, count, strings);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_delete_program_pipelines  {
              inline static void call(GLsizei n, const GLuint* pipelines) {
                __gl_debug << "call glDeleteProgramPipelines (" << "n: '" << n << "'" << ", " << "pipelines: '" << pipelines << "'" << ")";
                glDeleteProgramPipelines(n, pipelines);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_program_pipelines  {
              inline static void call(GLsizei n, GLuint* pipelines) {
                __gl_debug << "call glGenProgramPipelines (" << "n: '" << n << "'" << ", " << "pipelines: '" << pipelines << "'" << ")";
                glGenProgramPipelines(n, pipelines);
                __gl_check_error;
                
              }
          };

          struct  gl_get_program_pipeline_info_log  {
              inline static void call(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
                __gl_debug << "call glGetProgramPipelineInfoLog (" << "pipeline: '" << pipeline << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "infoLog: '" << infoLog << "'" << ")";
                glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
                __gl_check_error;
                
              }
          };

          struct  gl_get_program_pipelineiv  {
              inline static void call(GLuint pipeline, GLenum pname, GLint* params) {
                __gl_debug << "call glGetProgramPipelineiv (" << "pipeline: '" << pipeline << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetProgramPipelineiv(pipeline, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint pipeline, GLint* params) {
                __gl_debug << "call glGetProgramPipelineiv (" << "pipeline: '" << pipeline << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetProgramPipelineiv(pipeline, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_program_pipeline  {
              inline static GLboolean call(GLuint pipeline) {
                __gl_debug << "call glIsProgramPipeline (" << "pipeline: '" << pipeline << "'" << ")";
                GLboolean out = glIsProgramPipeline(pipeline);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_program_uniform_1_d  {
              inline static void call(GLuint program, GLint location, GLdouble v0) {
                __gl_debug << "call glProgramUniform1d (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ")";
                glProgramUniform1d(program, location, v0);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_1_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glProgramUniform1dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform1dv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_1_f  {
              inline static void call(GLuint program, GLint location, GLfloat v0) {
                __gl_debug << "call glProgramUniform1f (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ")";
                glProgramUniform1f(program, location, v0);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_1_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glProgramUniform1fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform1fv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_1_i  {
              inline static void call(GLuint program, GLint location, GLint v0) {
                __gl_debug << "call glProgramUniform1i (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ")";
                glProgramUniform1i(program, location, v0);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_1_iv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glProgramUniform1iv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform1iv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_1_ui  {
              inline static void call(GLuint program, GLint location, GLuint v0) {
                __gl_debug << "call glProgramUniform1ui (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ")";
                glProgramUniform1ui(program, location, v0);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_1_uiv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glProgramUniform1uiv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform1uiv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_d  {
              inline static void call(GLuint program, GLint location, GLdouble v0, GLdouble v1) {
                __gl_debug << "call glProgramUniform2d (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ")";
                glProgramUniform2d(program, location, v0, v1);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glProgramUniform2dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform2dv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_f  {
              inline static void call(GLuint program, GLint location, GLfloat v0, GLfloat v1) {
                __gl_debug << "call glProgramUniform2f (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ")";
                glProgramUniform2f(program, location, v0, v1);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glProgramUniform2fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform2fv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_i  {
              inline static void call(GLuint program, GLint location, GLint v0, GLint v1) {
                __gl_debug << "call glProgramUniform2i (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ")";
                glProgramUniform2i(program, location, v0, v1);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_iv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glProgramUniform2iv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform2iv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_ui  {
              inline static void call(GLuint program, GLint location, GLuint v0, GLuint v1) {
                __gl_debug << "call glProgramUniform2ui (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ")";
                glProgramUniform2ui(program, location, v0, v1);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_2_uiv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glProgramUniform2uiv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform2uiv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_d  {
              inline static void call(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2) {
                __gl_debug << "call glProgramUniform3d (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ")";
                glProgramUniform3d(program, location, v0, v1, v2);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glProgramUniform3dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform3dv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_f  {
              inline static void call(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
                __gl_debug << "call glProgramUniform3f (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ")";
                glProgramUniform3f(program, location, v0, v1, v2);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glProgramUniform3fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform3fv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_i  {
              inline static void call(GLuint program, GLint location, GLint v0, GLint v1, GLint v2) {
                __gl_debug << "call glProgramUniform3i (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ")";
                glProgramUniform3i(program, location, v0, v1, v2);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_iv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glProgramUniform3iv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform3iv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_ui  {
              inline static void call(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2) {
                __gl_debug << "call glProgramUniform3ui (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ")";
                glProgramUniform3ui(program, location, v0, v1, v2);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_3_uiv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glProgramUniform3uiv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform3uiv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_d  {
              inline static void call(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3) {
                __gl_debug << "call glProgramUniform4d (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ", " << "v3: '" << v3 << "'" << ")";
                glProgramUniform4d(program, location, v0, v1, v2, v3);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLdouble* value) {
                __gl_debug << "call glProgramUniform4dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform4dv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_f  {
              inline static void call(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
                __gl_debug << "call glProgramUniform4f (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ", " << "v3: '" << v3 << "'" << ")";
                glProgramUniform4f(program, location, v0, v1, v2, v3);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glProgramUniform4fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform4fv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_i  {
              inline static void call(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
                __gl_debug << "call glProgramUniform4i (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ", " << "v3: '" << v3 << "'" << ")";
                glProgramUniform4i(program, location, v0, v1, v2, v3);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_iv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glProgramUniform4iv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform4iv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_ui  {
              inline static void call(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
                __gl_debug << "call glProgramUniform4ui (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ", " << "v3: '" << v3 << "'" << ")";
                glProgramUniform4ui(program, location, v0, v1, v2, v3);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_4_uiv  {
              inline static void call(GLuint program, GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glProgramUniform4uiv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniform4uiv(program, location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_2_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix2dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix2dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_2_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix2fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix2fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_2x3_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix2x3dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix2x3dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_2x3_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix2x3fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_2x4_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix2x4dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix2x4dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_2x4_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix2x4fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_3_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix3dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix3dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_3_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix3fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix3fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_3x2_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix3x2dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix3x2dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_3x2_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix3x2fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_3x4_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix3x4dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix3x4dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_3x4_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix3x4fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_4_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix4dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix4dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_4_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix4fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix4fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_4x2_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix4x2dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix4x2dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_4x2_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix4x2fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_4x3_dv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value) {
                __gl_debug << "call glProgramUniformMatrix4x3dv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix4x3dv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_program_uniform_matrix_4x3_fv  {
              inline static void call(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glProgramUniformMatrix4x3fv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_use_program_stages  {
              inline static void call(GLuint pipeline, GLbitfield stages, GLuint program) {
                __gl_debug << "call glUseProgramStages (" << "pipeline: '" << pipeline << "'" << ", " << "stages: '" << stages << "'" << ", " << "program: '" << program << "'" << ")";
                glUseProgramStages(pipeline, stages, program);
                __gl_check_error;
                
              }
          };

          struct  gl_validate_program_pipeline  {
              inline static void call(GLuint pipeline) {
                __gl_debug << "call glValidateProgramPipeline (" << "pipeline: '" << pipeline << "'" << ")";
                glValidateProgramPipeline(pipeline);
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
          struct  gl_get_active_subroutine_name  {
              inline static void call(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name) {
                __gl_debug << "call glGetActiveSubroutineName (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype << "'" << ", " << "index: '" << index << "'" << ", " << "bufsize: '" << bufsize << "'" << ", " << "length: '" << length << "'" << ", " << "name: '" << name << "'" << ")";
                glGetActiveSubroutineName(program, shadertype, index, bufsize, length, name);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name) {
                __gl_debug << "call glGetActiveSubroutineName (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "bufsize: '" << bufsize << "'" << ", " << "length: '" << length << "'" << ", " << "name: '" << name << "'" << ")";
                glGetActiveSubroutineName(program, shadertype_t::value, index, bufsize, length, name);
                __gl_check_error;
                
              }
          };

          struct  gl_get_active_subroutine_uniform_name  {
              inline static void call(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name) {
                __gl_debug << "call glGetActiveSubroutineUniformName (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype << "'" << ", " << "index: '" << index << "'" << ", " << "bufsize: '" << bufsize << "'" << ", " << "length: '" << length << "'" << ", " << "name: '" << name << "'" << ")";
                glGetActiveSubroutineUniformName(program, shadertype, index, bufsize, length, name);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name) {
                __gl_debug << "call glGetActiveSubroutineUniformName (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "bufsize: '" << bufsize << "'" << ", " << "length: '" << length << "'" << ", " << "name: '" << name << "'" << ")";
                glGetActiveSubroutineUniformName(program, shadertype_t::value, index, bufsize, length, name);
                __gl_check_error;
                
              }
          };

          struct  gl_get_active_subroutine_uniformiv  {
              inline static void call(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values) {
                __gl_debug << "call glGetActiveSubroutineUniformiv (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype << "'" << ", " << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "values: '" << values << "'" << ")";
                glGetActiveSubroutineUniformiv(program, shadertype, index, pname, values);
                __gl_check_error;
                
              }
              template< typename shadertype_t, typename pname_t >
              inline static void call(GLuint program, GLuint index, GLint* values) {
                __gl_debug << "call glGetActiveSubroutineUniformiv (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "values: '" << values << "'" << ")";
                glGetActiveSubroutineUniformiv(program, shadertype_t::value, index, pname_t::value, values);
                __gl_check_error;
                
              }
          };

          struct  gl_get_program_stageiv  {
              inline static void call(GLuint program, GLenum shadertype, GLenum pname, GLint* values) {
                __gl_debug << "call glGetProgramStageiv (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype << "'" << ", " << "pname: '" << pname << "'" << ", " << "values: '" << values << "'" << ")";
                glGetProgramStageiv(program, shadertype, pname, values);
                __gl_check_error;
                
              }
              template< typename shadertype_t, typename pname_t >
              inline static void call(GLuint program, GLint* values) {
                __gl_debug << "call glGetProgramStageiv (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "values: '" << values << "'" << ")";
                glGetProgramStageiv(program, shadertype_t::value, pname_t::value, values);
                __gl_check_error;
                
              }
          };

          struct  gl_get_subroutine_index  {
              inline static GLuint call(GLuint program, GLenum shadertype, const GLchar* name) {
                __gl_debug << "call glGetSubroutineIndex (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype << "'" << ", " << "name: '" << name << "'" << ")";
                GLuint out = glGetSubroutineIndex(program, shadertype, name);
                __gl_check_error;
                return out;
              }
              template< typename shadertype_t >
              inline static GLuint call(GLuint program, const GLchar* name) {
                __gl_debug << "call glGetSubroutineIndex (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "name: '" << name << "'" << ")";
                GLuint out = glGetSubroutineIndex(program, shadertype_t::value, name);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_subroutine_uniform_location  {
              inline static GLint call(GLuint program, GLenum shadertype, const GLchar* name) {
                __gl_debug << "call glGetSubroutineUniformLocation (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype << "'" << ", " << "name: '" << name << "'" << ")";
                GLint out = glGetSubroutineUniformLocation(program, shadertype, name);
                __gl_check_error;
                return out;
              }
              template< typename shadertype_t >
              inline static GLint call(GLuint program, const GLchar* name) {
                __gl_debug << "call glGetSubroutineUniformLocation (" << "program: '" << program << "'" << ", " << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "name: '" << name << "'" << ")";
                GLint out = glGetSubroutineUniformLocation(program, shadertype_t::value, name);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_uniform_subroutineuiv  {
              inline static void call(GLenum shadertype, GLint location, GLuint* params) {
                __gl_debug << "call glGetUniformSubroutineuiv (" << "shadertype: '" << shadertype << "'" << ", " << "location: '" << location << "'" << ", " << "params: '" << params << "'" << ")";
                glGetUniformSubroutineuiv(shadertype, location, params);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(GLint location, GLuint* params) {
                __gl_debug << "call glGetUniformSubroutineuiv (" << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "location: '" << location << "'" << ", " << "params: '" << params << "'" << ")";
                glGetUniformSubroutineuiv(shadertype_t::value, location, params);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_subroutinesuiv  {
              inline static void call(GLenum shadertype, GLsizei count, const GLuint* indices) {
                __gl_debug << "call glUniformSubroutinesuiv (" << "shadertype: '" << shadertype << "'" << ", " << "count: '" << count << "'" << ", " << "indices: '" << indices << "'" << ")";
                glUniformSubroutinesuiv(shadertype, count, indices);
                __gl_check_error;
                
              }
              template< typename shadertype_t >
              inline static void call(GLsizei count, const GLuint* indices) {
                __gl_debug << "call glUniformSubroutinesuiv (" << "shadertype: '" << shadertype_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "indices: '" << indices << "'" << ")";
                glUniformSubroutinesuiv(shadertype_t::value, count, indices);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace shader_subroutine
      namespace shading_language_include {
        namespace fnc {
          struct  gl_compile_shader_include_arb  {
              inline static void call(GLuint shader, GLsizei count, const GLchar** path, const GLint* length) {
                __gl_debug << "call glCompileShaderIncludeARB (" << "shader: '" << shader << "'" << ", " << "count: '" << count << "'" << ", " << "path: '" << path << "'" << ", " << "length: '" << length << "'" << ")";
                glCompileShaderIncludeARB(shader, count, path, length);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_named_string_arb  {
              inline static void call(GLint namelen, const GLchar* name) {
                __gl_debug << "call glDeleteNamedStringARB (" << "namelen: '" << namelen << "'" << ", " << "name: '" << name << "'" << ")";
                glDeleteNamedStringARB(namelen, name);
                __gl_check_error;
                
              }
          };

          struct  gl_get_named_string_arb  {
              inline static void call(GLint namelen, const GLchar* name, GLsizei bufSize, GLint* stringlen, GLchar* string) {
                __gl_debug << "call glGetNamedStringARB (" << "namelen: '" << namelen << "'" << ", " << "name: '" << name << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "stringlen: '" << stringlen << "'" << ", " << "string: '" << string << "'" << ")";
                glGetNamedStringARB(namelen, name, bufSize, stringlen, string);
                __gl_check_error;
                
              }
          };

          struct  gl_get_named_stringiv_arb  {
              inline static void call(GLint namelen, const GLchar* name, GLenum pname, GLint* params) {
                __gl_debug << "call glGetNamedStringivARB (" << "namelen: '" << namelen << "'" << ", " << "name: '" << name << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetNamedStringivARB(namelen, name, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint namelen, const GLchar* name, GLint* params) {
                __gl_debug << "call glGetNamedStringivARB (" << "namelen: '" << namelen << "'" << ", " << "name: '" << name << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetNamedStringivARB(namelen, name, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_named_string_arb  {
              inline static GLboolean call(GLint namelen, const GLchar* name) {
                __gl_debug << "call glIsNamedStringARB (" << "namelen: '" << namelen << "'" << ", " << "name: '" << name << "'" << ")";
                GLboolean out = glIsNamedStringARB(namelen, name);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_named_string_arb  {
              inline static void call(GLenum type, GLint namelen, const GLchar* name, GLint stringlen, const GLchar* string) {
                __gl_debug << "call glNamedStringARB (" << "type: '" << type << "'" << ", " << "namelen: '" << namelen << "'" << ", " << "name: '" << name << "'" << ", " << "stringlen: '" << stringlen << "'" << ", " << "string: '" << string << "'" << ")";
                glNamedStringARB(type, namelen, name, stringlen, string);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLint namelen, const GLchar* name, GLint stringlen, const GLchar* string) {
                __gl_debug << "call glNamedStringARB (" << "type: '" << type_t::name::value << "'" << ", " << "namelen: '" << namelen << "'" << ", " << "name: '" << name << "'" << ", " << "stringlen: '" << stringlen << "'" << ", " << "string: '" << string << "'" << ")";
                glNamedStringARB(type_t::value, namelen, name, stringlen, string);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace shading_language_include
      namespace sync {
        namespace fnc {
          struct  gl_client_wait_sync  {
              inline static GLenum call(GLsync sync, GLbitfield flags, GLuint64 timeout) {
                __gl_debug << "call glClientWaitSync (" << "sync: '" << sync << "'" << ", " << "flags: '" << flags << "'" << ", " << "timeout: '" << timeout << "'" << ")";
                GLenum out = glClientWaitSync(sync, flags, timeout);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_delete_sync  {
              inline static void call(GLsync sync) {
                __gl_debug << "call glDeleteSync (" << "sync: '" << sync << "'" << ")";
                glDeleteSync(sync);
                __gl_check_error;
                
              }
          };

          struct  gl_fence_sync  {
              inline static GLsync call(GLenum condition, GLbitfield flags) {
                __gl_debug << "call glFenceSync (" << "condition: '" << condition << "'" << ", " << "flags: '" << flags << "'" << ")";
                GLsync out = glFenceSync(condition, flags);
                __gl_check_error;
                return out;
              }
              template< typename condition_t >
              inline static GLsync call(GLbitfield flags) {
                __gl_debug << "call glFenceSync (" << "condition: '" << condition_t::name::value << "'" << ", " << "flags: '" << flags << "'" << ")";
                GLsync out = glFenceSync(condition_t::value, flags);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_integer_64_v  {
              inline static void call(GLenum pname, GLint64* params) {
                __gl_debug << "call glGetInteger64v (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetInteger64v(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint64* params) {
                __gl_debug << "call glGetInteger64v (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetInteger64v(pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_synciv  {
              inline static void call(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values) {
                __gl_debug << "call glGetSynciv (" << "sync: '" << sync << "'" << ", " << "pname: '" << pname << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "values: '" << values << "'" << ")";
                glGetSynciv(sync, pname, bufSize, length, values);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLsync sync, GLsizei bufSize, GLsizei* length, GLint* values) {
                __gl_debug << "call glGetSynciv (" << "sync: '" << sync << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "values: '" << values << "'" << ")";
                glGetSynciv(sync, pname_t::value, bufSize, length, values);
                __gl_check_error;
                
              }
          };

          struct  gl_is_sync  {
              inline static GLboolean call(GLsync sync) {
                __gl_debug << "call glIsSync (" << "sync: '" << sync << "'" << ")";
                GLboolean out = glIsSync(sync);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_wait_sync  {
              inline static void call(GLsync sync, GLbitfield flags, GLuint64 timeout) {
                __gl_debug << "call glWaitSync (" << "sync: '" << sync << "'" << ", " << "flags: '" << flags << "'" << ", " << "timeout: '" << timeout << "'" << ")";
                glWaitSync(sync, flags, timeout);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace sync
      namespace tessellation_shader {
        namespace fnc {
          struct  gl_patch_parameterfv  {
              inline static void call(GLenum pname, const GLfloat* values) {
                __gl_debug << "call glPatchParameterfv (" << "pname: '" << pname << "'" << ", " << "values: '" << values << "'" << ")";
                glPatchParameterfv(pname, values);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(const GLfloat* values) {
                __gl_debug << "call glPatchParameterfv (" << "pname: '" << pname_t::name::value << "'" << ", " << "values: '" << values << "'" << ")";
                glPatchParameterfv(pname_t::value, values);
                __gl_check_error;
                
              }
          };

          struct  gl_patch_parameteri  {
              inline static void call(GLenum pname, GLint value) {
                __gl_debug << "call glPatchParameteri (" << "pname: '" << pname << "'" << ", " << "value: '" << value << "'" << ")";
                glPatchParameteri(pname, value);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint value) {
                __gl_debug << "call glPatchParameteri (" << "pname: '" << pname_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glPatchParameteri(pname_t::value, value);
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
          struct  gl_get_multisamplefv  {
              inline static void call(GLenum pname, GLuint index, GLfloat* val) {
                __gl_debug << "call glGetMultisamplefv (" << "pname: '" << pname << "'" << ", " << "index: '" << index << "'" << ", " << "val: '" << val << "'" << ")";
                glGetMultisamplefv(pname, index, val);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLfloat* val) {
                __gl_debug << "call glGetMultisamplefv (" << "pname: '" << pname_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "val: '" << val << "'" << ")";
                glGetMultisamplefv(pname_t::value, index, val);
                __gl_check_error;
                
              }
          };

          struct  gl_sample_maski  {
              inline static void call(GLuint index, GLbitfield mask) {
                __gl_debug << "call glSampleMaski (" << "index: '" << index << "'" << ", " << "mask: '" << mask << "'" << ")";
                glSampleMaski(index, mask);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_image_2d_multisample  {
              inline static void call(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
                __gl_debug << "call glTexImage2DMultisample (" << "target: '" << target << "'" << ", " << "samples: '" << samples << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "fixedsamplelocations: '" << fixedsamplelocations << "'" << ")";
                glTexImage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei samples, GLsizei width, GLsizei height, GLboolean fixedsamplelocations) {
                __gl_debug << "call glTexImage2DMultisample (" << "target: '" << target_t::name::value << "'" << ", " << "samples: '" << samples << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "fixedsamplelocations: '" << fixedsamplelocations << "'" << ")";
                glTexImage2DMultisample(target_t::value, samples, internalformat_t::value, width, height, fixedsamplelocations);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_image_3d_multisample  {
              inline static void call(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
                __gl_debug << "call glTexImage3DMultisample (" << "target: '" << target << "'" << ", " << "samples: '" << samples << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "fixedsamplelocations: '" << fixedsamplelocations << "'" << ")";
                glTexImage3DMultisample(target, samples, internalformat, width, height, depth, fixedsamplelocations);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLsizei samples, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations) {
                __gl_debug << "call glTexImage3DMultisample (" << "target: '" << target_t::name::value << "'" << ", " << "samples: '" << samples << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "fixedsamplelocations: '" << fixedsamplelocations << "'" << ")";
                glTexImage3DMultisample(target_t::value, samples, internalformat_t::value, width, height, depth, fixedsamplelocations);
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
          struct  gl_get_query_objecti_64_v  {
              inline static void call(GLuint id, GLenum pname, GLint64* params) {
                __gl_debug << "call glGetQueryObjecti64v (" << "id: '" << id << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjecti64v(id, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint id, GLint64* params) {
                __gl_debug << "call glGetQueryObjecti64v (" << "id: '" << id << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjecti64v(id, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_query_objectui_64_v  {
              inline static void call(GLuint id, GLenum pname, GLuint64* params) {
                __gl_debug << "call glGetQueryObjectui64v (" << "id: '" << id << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjectui64v(id, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint id, GLuint64* params) {
                __gl_debug << "call glGetQueryObjectui64v (" << "id: '" << id << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjectui64v(id, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_query_counter  {
              inline static void call(GLuint id, GLenum target) {
                __gl_debug << "call glQueryCounter (" << "id: '" << id << "'" << ", " << "target: '" << target << "'" << ")";
                glQueryCounter(id, target);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint id) {
                __gl_debug << "call glQueryCounter (" << "id: '" << id << "'" << ", " << "target: '" << target_t::name::value << "'" << ")";
                glQueryCounter(id, target_t::value);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace timer_query
      namespace transform_feedback2 {
        namespace fnc {
          struct  gl_bind_transform_feedback  {
              inline static void call(GLenum target, GLuint id) {
                __gl_debug << "call glBindTransformFeedback (" << "target: '" << target << "'" << ", " << "id: '" << id << "'" << ")";
                glBindTransformFeedback(target, id);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint id) {
                __gl_debug << "call glBindTransformFeedback (" << "target: '" << target_t::name::value << "'" << ", " << "id: '" << id << "'" << ")";
                glBindTransformFeedback(target_t::value, id);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_transform_feedbacks  {
              inline static void call(GLsizei n, const GLuint* ids) {
                __gl_debug << "call glDeleteTransformFeedbacks (" << "n: '" << n << "'" << ", " << "ids: '" << ids << "'" << ")";
                glDeleteTransformFeedbacks(n, ids);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_transform_feedback  {
              inline static void call(GLenum mode, GLuint id) {
                __gl_debug << "call glDrawTransformFeedback (" << "mode: '" << mode << "'" << ", " << "id: '" << id << "'" << ")";
                glDrawTransformFeedback(mode, id);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(GLuint id) {
                __gl_debug << "call glDrawTransformFeedback (" << "mode: '" << mode_t::name::value << "'" << ", " << "id: '" << id << "'" << ")";
                glDrawTransformFeedback(mode_t::value, id);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_transform_feedbacks  {
              inline static void call(GLsizei n, GLuint* ids) {
                __gl_debug << "call glGenTransformFeedbacks (" << "n: '" << n << "'" << ", " << "ids: '" << ids << "'" << ")";
                glGenTransformFeedbacks(n, ids);
                __gl_check_error;
                
              }
          };

          struct  gl_is_transform_feedback  {
              inline static GLboolean call(GLuint id) {
                __gl_debug << "call glIsTransformFeedback (" << "id: '" << id << "'" << ")";
                GLboolean out = glIsTransformFeedback(id);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_pause_transform_feedback  {
              inline static void call() {
                __gl_debug << "call glPauseTransformFeedback (" << "" << ")";
                glPauseTransformFeedback();
                __gl_check_error;
                
              }
          };

          struct  gl_resume_transform_feedback  {
              inline static void call() {
                __gl_debug << "call glResumeTransformFeedback (" << "" << ")";
                glResumeTransformFeedback();
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace transform_feedback2
      namespace transform_feedback3 {
        namespace fnc {
          struct  gl_begin_query_indexed  {
              inline static void call(GLenum target, GLuint index, GLuint id) {
                __gl_debug << "call glBeginQueryIndexed (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "id: '" << id << "'" << ")";
                glBeginQueryIndexed(target, index, id);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLuint id) {
                __gl_debug << "call glBeginQueryIndexed (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "id: '" << id << "'" << ")";
                glBeginQueryIndexed(target_t::value, index, id);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_transform_feedback_stream  {
              inline static void call(GLenum mode, GLuint id, GLuint stream) {
                __gl_debug << "call glDrawTransformFeedbackStream (" << "mode: '" << mode << "'" << ", " << "id: '" << id << "'" << ", " << "stream: '" << stream << "'" << ")";
                glDrawTransformFeedbackStream(mode, id, stream);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(GLuint id, GLuint stream) {
                __gl_debug << "call glDrawTransformFeedbackStream (" << "mode: '" << mode_t::name::value << "'" << ", " << "id: '" << id << "'" << ", " << "stream: '" << stream << "'" << ")";
                glDrawTransformFeedbackStream(mode_t::value, id, stream);
                __gl_check_error;
                
              }
          };

          struct  gl_end_query_indexed  {
              inline static void call(GLenum target, GLuint index) {
                __gl_debug << "call glEndQueryIndexed (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ")";
                glEndQueryIndexed(target, index);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index) {
                __gl_debug << "call glEndQueryIndexed (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ")";
                glEndQueryIndexed(target_t::value, index);
                __gl_check_error;
                
              }
          };

          struct  gl_get_query_indexediv  {
              inline static void call(GLenum target, GLuint index, GLenum pname, GLint* params) {
                __gl_debug << "call glGetQueryIndexediv (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryIndexediv(target, index, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLuint index, GLint* params) {
                __gl_debug << "call glGetQueryIndexediv (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryIndexediv(target_t::value, index, pname_t::value, params);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace transform_feedback3
      namespace uniform_buffer_object {
        namespace fnc {
          struct  gl_get_active_uniform_block_name  {
              inline static void call(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName) {
                __gl_debug << "call glGetActiveUniformBlockName (" << "program: '" << program << "'" << ", " << "uniformBlockIndex: '" << uniformBlockIndex << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "uniformBlockName: '" << uniformBlockName << "'" << ")";
                glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
                __gl_check_error;
                
              }
          };

          struct  gl_get_active_uniform_blockiv  {
              inline static void call(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params) {
                __gl_debug << "call glGetActiveUniformBlockiv (" << "program: '" << program << "'" << ", " << "uniformBlockIndex: '" << uniformBlockIndex << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint program, GLuint uniformBlockIndex, GLint* params) {
                __gl_debug << "call glGetActiveUniformBlockiv (" << "program: '" << program << "'" << ", " << "uniformBlockIndex: '" << uniformBlockIndex << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetActiveUniformBlockiv(program, uniformBlockIndex, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_active_uniform_name  {
              inline static void call(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName) {
                __gl_debug << "call glGetActiveUniformName (" << "program: '" << program << "'" << ", " << "uniformIndex: '" << uniformIndex << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "uniformName: '" << uniformName << "'" << ")";
                glGetActiveUniformName(program, uniformIndex, bufSize, length, uniformName);
                __gl_check_error;
                
              }
          };

          struct  gl_get_active_uniformsiv  {
              inline static void call(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params) {
                __gl_debug << "call glGetActiveUniformsiv (" << "program: '" << program << "'" << ", " << "uniformCount: '" << uniformCount << "'" << ", " << "uniformIndices: '" << uniformIndices << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLint* params) {
                __gl_debug << "call glGetActiveUniformsiv (" << "program: '" << program << "'" << ", " << "uniformCount: '" << uniformCount << "'" << ", " << "uniformIndices: '" << uniformIndices << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_uniform_block_index  {
              inline static GLuint call(GLuint program, const GLchar* uniformBlockName) {
                __gl_debug << "call glGetUniformBlockIndex (" << "program: '" << program << "'" << ", " << "uniformBlockName: '" << uniformBlockName << "'" << ")";
                GLuint out = glGetUniformBlockIndex(program, uniformBlockName);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_uniform_indices  {
              inline static void call(GLuint program, GLsizei uniformCount, const GLchar** uniformNames, GLuint* uniformIndices) {
                __gl_debug << "call glGetUniformIndices (" << "program: '" << program << "'" << ", " << "uniformCount: '" << uniformCount << "'" << ", " << "uniformNames: '" << uniformNames << "'" << ", " << "uniformIndices: '" << uniformIndices << "'" << ")";
                glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_block_binding  {
              inline static void call(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding) {
                __gl_debug << "call glUniformBlockBinding (" << "program: '" << program << "'" << ", " << "uniformBlockIndex: '" << uniformBlockIndex << "'" << ", " << "uniformBlockBinding: '" << uniformBlockBinding << "'" << ")";
                glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
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
          struct  gl_bind_vertex_array  {
              inline static void call(GLuint array) {
                __gl_debug << "call glBindVertexArray (" << "array: '" << array << "'" << ")";
                glBindVertexArray(array);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_vertex_arrays  {
              inline static void call(GLsizei n, const GLuint* arrays) {
                __gl_debug << "call glDeleteVertexArrays (" << "n: '" << n << "'" << ", " << "arrays: '" << arrays << "'" << ")";
                glDeleteVertexArrays(n, arrays);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_vertex_arrays  {
              inline static void call(GLsizei n, GLuint* arrays) {
                __gl_debug << "call glGenVertexArrays (" << "n: '" << n << "'" << ", " << "arrays: '" << arrays << "'" << ")";
                glGenVertexArrays(n, arrays);
                __gl_check_error;
                
              }
          };

          struct  gl_is_vertex_array  {
              inline static GLboolean call(GLuint array) {
                __gl_debug << "call glIsVertexArray (" << "array: '" << array << "'" << ")";
                GLboolean out = glIsVertexArray(array);
                __gl_check_error;
                return out;
              }
          };

        } // namespace fnc
      } // namespace vertex_array_object
      namespace vertex_attrib_64bit {
        namespace fnc {
          struct  gl_get_vertex_attrib_ldv  {
              inline static void call(GLuint index, GLenum pname, GLdouble* params) {
                __gl_debug << "call glGetVertexAttribLdv (" << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribLdv(index, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLdouble* params) {
                __gl_debug << "call glGetVertexAttribLdv (" << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribLdv(index, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_1_d  {
              inline static void call(GLuint index, GLdouble x) {
                __gl_debug << "call glVertexAttribL1d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ")";
                glVertexAttribL1d(index, x);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_1_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttribL1dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribL1dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_2_d  {
              inline static void call(GLuint index, GLdouble x, GLdouble y) {
                __gl_debug << "call glVertexAttribL2d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ")";
                glVertexAttribL2d(index, x, y);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_2_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttribL2dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribL2dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_3_d  {
              inline static void call(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
                __gl_debug << "call glVertexAttribL3d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ")";
                glVertexAttribL3d(index, x, y, z);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_3_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttribL3dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribL3dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_4_d  {
              inline static void call(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
                __gl_debug << "call glVertexAttribL4d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glVertexAttribL4d(index, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_l_4_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttribL4dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribL4dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_lpointer  {
              inline static void call(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) {
                __gl_debug << "call glVertexAttribLPointer (" << "index: '" << index << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type << "'" << ", " << "stride: '" << stride << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glVertexAttribLPointer(index, size, type, stride, pointer);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLint size, GLsizei stride, const GLvoid* pointer) {
                __gl_debug << "call glVertexAttribLPointer (" << "index: '" << index << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "stride: '" << stride << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glVertexAttribLPointer(index, size, type_t::value, stride, pointer);
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
          struct  gl_color_p_3_ui  {
              inline static void call(GLenum type, GLuint color) {
                __gl_debug << "call glColorP3ui (" << "type: '" << type << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP3ui(type, color);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint color) {
                __gl_debug << "call glColorP3ui (" << "type: '" << type_t::name::value << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP3ui(type_t::value, color);
                __gl_check_error;
                
              }
          };

          struct  gl_color_p_3_uiv  {
              inline static void call(GLenum type, const GLuint* color) {
                __gl_debug << "call glColorP3uiv (" << "type: '" << type << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP3uiv(type, color);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* color) {
                __gl_debug << "call glColorP3uiv (" << "type: '" << type_t::name::value << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP3uiv(type_t::value, color);
                __gl_check_error;
                
              }
          };

          struct  gl_color_p_4_ui  {
              inline static void call(GLenum type, GLuint color) {
                __gl_debug << "call glColorP4ui (" << "type: '" << type << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP4ui(type, color);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint color) {
                __gl_debug << "call glColorP4ui (" << "type: '" << type_t::name::value << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP4ui(type_t::value, color);
                __gl_check_error;
                
              }
          };

          struct  gl_color_p_4_uiv  {
              inline static void call(GLenum type, const GLuint* color) {
                __gl_debug << "call glColorP4uiv (" << "type: '" << type << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP4uiv(type, color);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* color) {
                __gl_debug << "call glColorP4uiv (" << "type: '" << type_t::name::value << "'" << ", " << "color: '" << color << "'" << ")";
                glColorP4uiv(type_t::value, color);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_1_ui  {
              inline static void call(GLenum texture, GLenum type, GLuint coords) {
                __gl_debug << "call glMultiTexCoordP1ui (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP1ui(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glMultiTexCoordP1ui (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP1ui(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_1_uiv  {
              inline static void call(GLenum texture, GLenum type, const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP1uiv (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP1uiv(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP1uiv (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP1uiv(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_2_ui  {
              inline static void call(GLenum texture, GLenum type, GLuint coords) {
                __gl_debug << "call glMultiTexCoordP2ui (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP2ui(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glMultiTexCoordP2ui (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP2ui(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_2_uiv  {
              inline static void call(GLenum texture, GLenum type, const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP2uiv (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP2uiv(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP2uiv (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP2uiv(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_3_ui  {
              inline static void call(GLenum texture, GLenum type, GLuint coords) {
                __gl_debug << "call glMultiTexCoordP3ui (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP3ui(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glMultiTexCoordP3ui (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP3ui(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_3_uiv  {
              inline static void call(GLenum texture, GLenum type, const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP3uiv (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP3uiv(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP3uiv (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP3uiv(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_4_ui  {
              inline static void call(GLenum texture, GLenum type, GLuint coords) {
                __gl_debug << "call glMultiTexCoordP4ui (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP4ui(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glMultiTexCoordP4ui (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP4ui(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_tex_coord_p_4_uiv  {
              inline static void call(GLenum texture, GLenum type, const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP4uiv (" << "texture: '" << texture << "'" << ", " << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP4uiv(texture, type, coords);
                __gl_check_error;
                
              }
              template< typename texture_t, typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glMultiTexCoordP4uiv (" << "texture: '" << texture_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glMultiTexCoordP4uiv(texture_t::value, type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_normal_p_3_ui  {
              inline static void call(GLenum type, GLuint coords) {
                __gl_debug << "call glNormalP3ui (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glNormalP3ui(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glNormalP3ui (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glNormalP3ui(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_normal_p_3_uiv  {
              inline static void call(GLenum type, const GLuint* coords) {
                __gl_debug << "call glNormalP3uiv (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glNormalP3uiv(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glNormalP3uiv (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glNormalP3uiv(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_secondary_color_p_3_ui  {
              inline static void call(GLenum type, GLuint color) {
                __gl_debug << "call glSecondaryColorP3ui (" << "type: '" << type << "'" << ", " << "color: '" << color << "'" << ")";
                glSecondaryColorP3ui(type, color);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint color) {
                __gl_debug << "call glSecondaryColorP3ui (" << "type: '" << type_t::name::value << "'" << ", " << "color: '" << color << "'" << ")";
                glSecondaryColorP3ui(type_t::value, color);
                __gl_check_error;
                
              }
          };

          struct  gl_secondary_color_p_3_uiv  {
              inline static void call(GLenum type, const GLuint* color) {
                __gl_debug << "call glSecondaryColorP3uiv (" << "type: '" << type << "'" << ", " << "color: '" << color << "'" << ")";
                glSecondaryColorP3uiv(type, color);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* color) {
                __gl_debug << "call glSecondaryColorP3uiv (" << "type: '" << type_t::name::value << "'" << ", " << "color: '" << color << "'" << ")";
                glSecondaryColorP3uiv(type_t::value, color);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_1_ui  {
              inline static void call(GLenum type, GLuint coords) {
                __gl_debug << "call glTexCoordP1ui (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP1ui(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glTexCoordP1ui (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP1ui(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_1_uiv  {
              inline static void call(GLenum type, const GLuint* coords) {
                __gl_debug << "call glTexCoordP1uiv (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP1uiv(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glTexCoordP1uiv (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP1uiv(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_2_ui  {
              inline static void call(GLenum type, GLuint coords) {
                __gl_debug << "call glTexCoordP2ui (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP2ui(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glTexCoordP2ui (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP2ui(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_2_uiv  {
              inline static void call(GLenum type, const GLuint* coords) {
                __gl_debug << "call glTexCoordP2uiv (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP2uiv(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glTexCoordP2uiv (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP2uiv(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_3_ui  {
              inline static void call(GLenum type, GLuint coords) {
                __gl_debug << "call glTexCoordP3ui (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP3ui(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glTexCoordP3ui (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP3ui(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_3_uiv  {
              inline static void call(GLenum type, const GLuint* coords) {
                __gl_debug << "call glTexCoordP3uiv (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP3uiv(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glTexCoordP3uiv (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP3uiv(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_4_ui  {
              inline static void call(GLenum type, GLuint coords) {
                __gl_debug << "call glTexCoordP4ui (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP4ui(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint coords) {
                __gl_debug << "call glTexCoordP4ui (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP4ui(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_coord_p_4_uiv  {
              inline static void call(GLenum type, const GLuint* coords) {
                __gl_debug << "call glTexCoordP4uiv (" << "type: '" << type << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP4uiv(type, coords);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* coords) {
                __gl_debug << "call glTexCoordP4uiv (" << "type: '" << type_t::name::value << "'" << ", " << "coords: '" << coords << "'" << ")";
                glTexCoordP4uiv(type_t::value, coords);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_1_ui  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP1ui (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP1ui(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP1ui (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP1ui(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_1_uiv  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP1uiv (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP1uiv(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP1uiv (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP1uiv(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_2_ui  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP2ui (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP2ui(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP2ui (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP2ui(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_2_uiv  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP2uiv (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP2uiv(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP2uiv (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP2uiv(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_3_ui  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP3ui (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP3ui(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP3ui (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP3ui(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_3_uiv  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP3uiv (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP3uiv(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP3uiv (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP3uiv(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_4_ui  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP4ui (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP4ui(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, GLuint value) {
                __gl_debug << "call glVertexAttribP4ui (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP4ui(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_p_4_uiv  {
              inline static void call(GLuint index, GLenum type, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP4uiv (" << "index: '" << index << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP4uiv(index, type, normalized, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLboolean normalized, const GLuint* value) {
                __gl_debug << "call glVertexAttribP4uiv (" << "index: '" << index << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexAttribP4uiv(index, type_t::value, normalized, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_p_2_ui  {
              inline static void call(GLenum type, GLuint value) {
                __gl_debug << "call glVertexP2ui (" << "type: '" << type << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP2ui(type, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint value) {
                __gl_debug << "call glVertexP2ui (" << "type: '" << type_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP2ui(type_t::value, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_p_2_uiv  {
              inline static void call(GLenum type, const GLuint* value) {
                __gl_debug << "call glVertexP2uiv (" << "type: '" << type << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP2uiv(type, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* value) {
                __gl_debug << "call glVertexP2uiv (" << "type: '" << type_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP2uiv(type_t::value, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_p_3_ui  {
              inline static void call(GLenum type, GLuint value) {
                __gl_debug << "call glVertexP3ui (" << "type: '" << type << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP3ui(type, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint value) {
                __gl_debug << "call glVertexP3ui (" << "type: '" << type_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP3ui(type_t::value, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_p_3_uiv  {
              inline static void call(GLenum type, const GLuint* value) {
                __gl_debug << "call glVertexP3uiv (" << "type: '" << type << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP3uiv(type, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* value) {
                __gl_debug << "call glVertexP3uiv (" << "type: '" << type_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP3uiv(type_t::value, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_p_4_ui  {
              inline static void call(GLenum type, GLuint value) {
                __gl_debug << "call glVertexP4ui (" << "type: '" << type << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP4ui(type, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint value) {
                __gl_debug << "call glVertexP4ui (" << "type: '" << type_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP4ui(type_t::value, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_p_4_uiv  {
              inline static void call(GLenum type, const GLuint* value) {
                __gl_debug << "call glVertexP4uiv (" << "type: '" << type << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP4uiv(type, value);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(const GLuint* value) {
                __gl_debug << "call glVertexP4uiv (" << "type: '" << type_t::name::value << "'" << ", " << "value: '" << value << "'" << ")";
                glVertexP4uiv(type_t::value, value);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace vertex_type_2_10_10_10_rev
      namespace viewport_array {
        namespace fnc {
          struct  gl_depth_range_arrayv  {
              inline static void call(GLuint first, GLsizei count, const GLclampd* v) {
                __gl_debug << "call glDepthRangeArrayv (" << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ", " << "v: '" << v << "'" << ")";
                glDepthRangeArrayv(first, count, v);
                __gl_check_error;
                
              }
          };

          struct  gl_depth_range_indexed  {
              inline static void call(GLuint index, GLclampd n, GLclampd f) {
                __gl_debug << "call glDepthRangeIndexed (" << "index: '" << index << "'" << ", " << "n: '" << n << "'" << ", " << "f: '" << f << "'" << ")";
                glDepthRangeIndexed(index, n, f);
                __gl_check_error;
                
              }
          };

          struct  gl_get_doublei_v  {
              inline static void call(GLenum target, GLuint index, GLdouble* data) {
                __gl_debug << "call glGetDoublei_v (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetDoublei_v(target, index, data);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLdouble* data) {
                __gl_debug << "call glGetDoublei_v (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetDoublei_v(target_t::value, index, data);
                __gl_check_error;
                
              }
          };

          struct  gl_get_floati_v  {
              inline static void call(GLenum target, GLuint index, GLfloat* data) {
                __gl_debug << "call glGetFloati_v (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetFloati_v(target, index, data);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLfloat* data) {
                __gl_debug << "call glGetFloati_v (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetFloati_v(target_t::value, index, data);
                __gl_check_error;
                
              }
          };

          struct  gl_scissor_arrayv  {
              inline static void call(GLuint first, GLsizei count, const GLint* v) {
                __gl_debug << "call glScissorArrayv (" << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ", " << "v: '" << v << "'" << ")";
                glScissorArrayv(first, count, v);
                __gl_check_error;
                
              }
          };

          struct  gl_scissor_indexed  {
              inline static void call(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height) {
                __gl_debug << "call glScissorIndexed (" << "index: '" << index << "'" << ", " << "left: '" << left << "'" << ", " << "bottom: '" << bottom << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glScissorIndexed(index, left, bottom, width, height);
                __gl_check_error;
                
              }
          };

          struct  gl_scissor_indexedv  {
              inline static void call(GLuint index, const GLint* v) {
                __gl_debug << "call glScissorIndexedv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glScissorIndexedv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_viewport_arrayv  {
              inline static void call(GLuint first, GLsizei count, const GLfloat* v) {
                __gl_debug << "call glViewportArrayv (" << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ", " << "v: '" << v << "'" << ")";
                glViewportArrayv(first, count, v);
                __gl_check_error;
                
              }
          };

          struct  gl_viewport_indexedf  {
              inline static void call(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h) {
                __gl_debug << "call glViewportIndexedf (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "w: '" << w << "'" << ", " << "h: '" << h << "'" << ")";
                glViewportIndexedf(index, x, y, w, h);
                __gl_check_error;
                
              }
          };

          struct  gl_viewport_indexedfv  {
              inline static void call(GLuint index, const GLfloat* v) {
                __gl_debug << "call glViewportIndexedfv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glViewportIndexedfv(index, v);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace viewport_array
      } // namespace arb
      namespace gl {
      namespace v1_0 {
        namespace fnc {
          struct  gl_blend_func  {
              inline static void call(GLenum sfactor, GLenum dfactor) {
                __gl_debug << "call glBlendFunc (" << "sfactor: '" << sfactor << "'" << ", " << "dfactor: '" << dfactor << "'" << ")";
                glBlendFunc(sfactor, dfactor);
                __gl_check_error;
                
              }
              template< typename sfactor_t, typename dfactor_t >
              inline static void call() {
                __gl_debug << "call glBlendFunc (" << "sfactor: '" << sfactor_t::name::value << "'" << ", " << "dfactor: '" << dfactor_t::name::value << "'" << ")";
                glBlendFunc(sfactor_t::value, dfactor_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_clear  {
              inline static void call(GLbitfield mask) {
                __gl_debug << "call glClear (" << "mask: '" << mask << "'" << ")";
                glClear(mask);
                __gl_check_error;
                
              }
          };

          struct  gl_clear_color  {
              inline static void call(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
                __gl_debug << "call glClearColor (" << "red: '" << red << "'" << ", " << "green: '" << green << "'" << ", " << "blue: '" << blue << "'" << ", " << "alpha: '" << alpha << "'" << ")";
                glClearColor(red, green, blue, alpha);
                __gl_check_error;
                
              }
          };

          struct  gl_clear_depth  {
              inline static void call(GLclampd depth) {
                __gl_debug << "call glClearDepth (" << "depth: '" << depth << "'" << ")";
                glClearDepth(depth);
                __gl_check_error;
                
              }
          };

          struct  gl_clear_stencil  {
              inline static void call(GLint s) {
                __gl_debug << "call glClearStencil (" << "s: '" << s << "'" << ")";
                glClearStencil(s);
                __gl_check_error;
                
              }
          };

          struct  gl_color_mask  {
              inline static void call(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
                __gl_debug << "call glColorMask (" << "red: '" << red << "'" << ", " << "green: '" << green << "'" << ", " << "blue: '" << blue << "'" << ", " << "alpha: '" << alpha << "'" << ")";
                glColorMask(red, green, blue, alpha);
                __gl_check_error;
                
              }
          };

          struct  gl_cull_face  {
              inline static void call(GLenum mode) {
                __gl_debug << "call glCullFace (" << "mode: '" << mode << "'" << ")";
                glCullFace(mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glCullFace (" << "mode: '" << mode_t::name::value << "'" << ")";
                glCullFace(mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_depth_func  {
              inline static void call(GLenum func) {
                __gl_debug << "call glDepthFunc (" << "func: '" << func << "'" << ")";
                glDepthFunc(func);
                __gl_check_error;
                
              }
              template< typename func_t >
              inline static void call() {
                __gl_debug << "call glDepthFunc (" << "func: '" << func_t::name::value << "'" << ")";
                glDepthFunc(func_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_depth_mask  {
              inline static void call(GLboolean flag) {
                __gl_debug << "call glDepthMask (" << "flag: '" << flag << "'" << ")";
                glDepthMask(flag);
                __gl_check_error;
                
              }
          };

          struct  gl_depth_range  {
              inline static void call(GLclampd near, GLclampd far) {
                __gl_debug << "call glDepthRange (" << "near: '" << near << "'" << ", " << "far: '" << far << "'" << ")";
                glDepthRange(near, far);
                __gl_check_error;
                
              }
          };

          struct  gl_disable  {
              inline static void call(GLenum cap) {
                __gl_debug << "call glDisable (" << "cap: '" << cap << "'" << ")";
                glDisable(cap);
                __gl_check_error;
                
              }
              template< typename cap_t >
              inline static void call() {
                __gl_debug << "call glDisable (" << "cap: '" << cap_t::name::value << "'" << ")";
                glDisable(cap_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_buffer  {
              inline static void call(GLenum mode) {
                __gl_debug << "call glDrawBuffer (" << "mode: '" << mode << "'" << ")";
                glDrawBuffer(mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glDrawBuffer (" << "mode: '" << mode_t::name::value << "'" << ")";
                glDrawBuffer(mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_enable  {
              inline static void call(GLenum cap) {
                __gl_debug << "call glEnable (" << "cap: '" << cap << "'" << ")";
                glEnable(cap);
                __gl_check_error;
                
              }
              template< typename cap_t >
              inline static void call() {
                __gl_debug << "call glEnable (" << "cap: '" << cap_t::name::value << "'" << ")";
                glEnable(cap_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_finish  {
              inline static void call() {
                __gl_debug << "call glFinish (" << "" << ")";
                glFinish();
                __gl_check_error;
                
              }
          };

          struct  gl_flush  {
              inline static void call() {
                __gl_debug << "call glFlush (" << "" << ")";
                glFlush();
                __gl_check_error;
                
              }
          };

          struct  gl_front_face  {
              inline static void call(GLenum mode) {
                __gl_debug << "call glFrontFace (" << "mode: '" << mode << "'" << ")";
                glFrontFace(mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glFrontFace (" << "mode: '" << mode_t::name::value << "'" << ")";
                glFrontFace(mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_get_booleanv  {
              inline static void call(GLenum pname, GLboolean* params) {
                __gl_debug << "call glGetBooleanv (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBooleanv(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLboolean* params) {
                __gl_debug << "call glGetBooleanv (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBooleanv(pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_doublev  {
              inline static void call(GLenum pname, GLdouble* params) {
                __gl_debug << "call glGetDoublev (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetDoublev(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLdouble* params) {
                __gl_debug << "call glGetDoublev (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetDoublev(pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_error  {
              inline static GLenum call() {
                __gl_debug << "call glGetError (" << "" << ")";
                GLenum out = glGetError();
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_floatv  {
              inline static void call(GLenum pname, GLfloat* params) {
                __gl_debug << "call glGetFloatv (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetFloatv(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLfloat* params) {
                __gl_debug << "call glGetFloatv (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetFloatv(pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_integerv  {
              inline static void call(GLenum pname, GLint* params) {
                __gl_debug << "call glGetIntegerv (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetIntegerv(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint* params) {
                __gl_debug << "call glGetIntegerv (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetIntegerv(pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_string  {
              inline static const GLubyte * call(GLenum name) {
                __gl_debug << "call glGetString (" << "name: '" << name << "'" << ")";
                const GLubyte * out = glGetString(name);
                __gl_check_error;
                return out;
              }
              template< typename name_t >
              inline static const GLubyte * call() {
                __gl_debug << "call glGetString (" << "name: '" << name_t::name::value << "'" << ")";
                const GLubyte * out = glGetString(name_t::value);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_tex_image  {
              inline static void call(GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels) {
                __gl_debug << "call glGetTexImage (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glGetTexImage(target, level, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLvoid* pixels) {
                __gl_debug << "call glGetTexImage (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glGetTexImage(target_t::value, level, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

          struct  gl_get_tex_level_parameterfv  {
              inline static void call(GLenum target, GLint level, GLenum pname, GLfloat* params) {
                __gl_debug << "call glGetTexLevelParameterfv (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexLevelParameterfv(target, level, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint level, GLfloat* params) {
                __gl_debug << "call glGetTexLevelParameterfv (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexLevelParameterfv(target_t::value, level, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_tex_level_parameteriv  {
              inline static void call(GLenum target, GLint level, GLenum pname, GLint* params) {
                __gl_debug << "call glGetTexLevelParameteriv (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexLevelParameteriv(target, level, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint level, GLint* params) {
                __gl_debug << "call glGetTexLevelParameteriv (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexLevelParameteriv(target_t::value, level, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_tex_parameterfv  {
              inline static void call(GLenum target, GLenum pname, GLfloat* params) {
                __gl_debug << "call glGetTexParameterfv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameterfv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLfloat* params) {
                __gl_debug << "call glGetTexParameterfv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameterfv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_tex_parameteriv  {
              inline static void call(GLenum target, GLenum pname, GLint* params) {
                __gl_debug << "call glGetTexParameteriv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameteriv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint* params) {
                __gl_debug << "call glGetTexParameteriv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameteriv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_hint  {
              inline static void call(GLenum target, GLenum mode) {
                __gl_debug << "call glHint (" << "target: '" << target << "'" << ", " << "mode: '" << mode << "'" << ")";
                glHint(target, mode);
                __gl_check_error;
                
              }
              template< typename target_t, typename mode_t >
              inline static void call() {
                __gl_debug << "call glHint (" << "target: '" << target_t::name::value << "'" << ", " << "mode: '" << mode_t::name::value << "'" << ")";
                glHint(target_t::value, mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_is_enabled  {
              inline static GLboolean call(GLenum cap) {
                __gl_debug << "call glIsEnabled (" << "cap: '" << cap << "'" << ")";
                GLboolean out = glIsEnabled(cap);
                __gl_check_error;
                return out;
              }
              template< typename cap_t >
              inline static GLboolean call() {
                __gl_debug << "call glIsEnabled (" << "cap: '" << cap_t::name::value << "'" << ")";
                GLboolean out = glIsEnabled(cap_t::value);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_line_width  {
              inline static void call(GLfloat width) {
                __gl_debug << "call glLineWidth (" << "width: '" << width << "'" << ")";
                glLineWidth(width);
                __gl_check_error;
                
              }
          };

          struct  gl_logic_op  {
              inline static void call(GLenum opcode) {
                __gl_debug << "call glLogicOp (" << "opcode: '" << opcode << "'" << ")";
                glLogicOp(opcode);
                __gl_check_error;
                
              }
              template< typename opcode_t >
              inline static void call() {
                __gl_debug << "call glLogicOp (" << "opcode: '" << opcode_t::name::value << "'" << ")";
                glLogicOp(opcode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_pixel_storef  {
              inline static void call(GLenum pname, GLfloat param) {
                __gl_debug << "call glPixelStoref (" << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glPixelStoref(pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLfloat param) {
                __gl_debug << "call glPixelStoref (" << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glPixelStoref(pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_pixel_storei  {
              inline static void call(GLenum pname, GLint param) {
                __gl_debug << "call glPixelStorei (" << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glPixelStorei(pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint param) {
                __gl_debug << "call glPixelStorei (" << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glPixelStorei(pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_point_size  {
              inline static void call(GLfloat size) {
                __gl_debug << "call glPointSize (" << "size: '" << size << "'" << ")";
                glPointSize(size);
                __gl_check_error;
                
              }
          };

          struct  gl_polygon_mode  {
              inline static void call(GLenum face, GLenum mode) {
                __gl_debug << "call glPolygonMode (" << "face: '" << face << "'" << ", " << "mode: '" << mode << "'" << ")";
                glPolygonMode(face, mode);
                __gl_check_error;
                
              }
              template< typename face_t, typename mode_t >
              inline static void call() {
                __gl_debug << "call glPolygonMode (" << "face: '" << face_t::name::value << "'" << ", " << "mode: '" << mode_t::name::value << "'" << ")";
                glPolygonMode(face_t::value, mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_read_buffer  {
              inline static void call(GLenum mode) {
                __gl_debug << "call glReadBuffer (" << "mode: '" << mode << "'" << ")";
                glReadBuffer(mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glReadBuffer (" << "mode: '" << mode_t::name::value << "'" << ")";
                glReadBuffer(mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_read_pixels  {
              inline static void call(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels) {
                __gl_debug << "call glReadPixels (" << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glReadPixels(x, y, width, height, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename format_t, typename type_t >
              inline static void call(GLint x, GLint y, GLsizei width, GLsizei height, GLvoid* pixels) {
                __gl_debug << "call glReadPixels (" << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glReadPixels(x, y, width, height, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

          struct  gl_scissor  {
              inline static void call(GLint x, GLint y, GLsizei width, GLsizei height) {
                __gl_debug << "call glScissor (" << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glScissor(x, y, width, height);
                __gl_check_error;
                
              }
          };

          struct  gl_stencil_func  {
              inline static void call(GLenum func, GLint ref, GLuint mask) {
                __gl_debug << "call glStencilFunc (" << "func: '" << func << "'" << ", " << "ref: '" << ref << "'" << ", " << "mask: '" << mask << "'" << ")";
                glStencilFunc(func, ref, mask);
                __gl_check_error;
                
              }
              template< typename func_t >
              inline static void call(GLint ref, GLuint mask) {
                __gl_debug << "call glStencilFunc (" << "func: '" << func_t::name::value << "'" << ", " << "ref: '" << ref << "'" << ", " << "mask: '" << mask << "'" << ")";
                glStencilFunc(func_t::value, ref, mask);
                __gl_check_error;
                
              }
          };

          struct  gl_stencil_mask  {
              inline static void call(GLuint mask) {
                __gl_debug << "call glStencilMask (" << "mask: '" << mask << "'" << ")";
                glStencilMask(mask);
                __gl_check_error;
                
              }
          };

          struct  gl_stencil_op  {
              inline static void call(GLenum fail, GLenum zfail, GLenum zpass) {
                __gl_debug << "call glStencilOp (" << "fail: '" << fail << "'" << ", " << "zfail: '" << zfail << "'" << ", " << "zpass: '" << zpass << "'" << ")";
                glStencilOp(fail, zfail, zpass);
                __gl_check_error;
                
              }
              template< typename fail_t, typename zfail_t, typename zpass_t >
              inline static void call() {
                __gl_debug << "call glStencilOp (" << "fail: '" << fail_t::name::value << "'" << ", " << "zfail: '" << zfail_t::name::value << "'" << ", " << "zpass: '" << zpass_t::name::value << "'" << ")";
                glStencilOp(fail_t::value, zfail_t::value, zpass_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_image_1d  {
              inline static void call(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels) {
                __gl_debug << "call glTexImage1D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "border: '" << border << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexImage1D(target, level, internalformat, width, border, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLsizei width, GLint border, const GLvoid* pixels) {
                __gl_debug << "call glTexImage1D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "border: '" << border << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexImage1D(target_t::value, level, internalformat_t::value, width, border, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_image_2d  {
              inline static void call(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels) {
                __gl_debug << "call glTexImage2D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "border: '" << border << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLsizei width, GLsizei height, GLint border, const GLvoid* pixels) {
                __gl_debug << "call glTexImage2D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "border: '" << border << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexImage2D(target_t::value, level, internalformat_t::value, width, height, border, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_parameterf  {
              inline static void call(GLenum target, GLenum pname, GLfloat param) {
                __gl_debug << "call glTexParameterf (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glTexParameterf(target, pname, param);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLfloat param) {
                __gl_debug << "call glTexParameterf (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glTexParameterf(target_t::value, pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_parameterfv  {
              inline static void call(GLenum target, GLenum pname, const GLfloat* params) {
                __gl_debug << "call glTexParameterfv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameterfv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(const GLfloat* params) {
                __gl_debug << "call glTexParameterfv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameterfv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_parameteri  {
              inline static void call(GLenum target, GLenum pname, GLint param) {
                __gl_debug << "call glTexParameteri (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glTexParameteri(target, pname, param);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint param) {
                __gl_debug << "call glTexParameteri (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glTexParameteri(target_t::value, pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_parameteriv  {
              inline static void call(GLenum target, GLenum pname, const GLint* params) {
                __gl_debug << "call glTexParameteriv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameteriv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(const GLint* params) {
                __gl_debug << "call glTexParameteriv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameteriv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_viewport  {
              inline static void call(GLint x, GLint y, GLsizei width, GLsizei height) {
                __gl_debug << "call glViewport (" << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glViewport(x, y, width, height);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace v1_0
      namespace v1_1 {
        namespace fnc {
          struct  gl_bind_texture  {
              inline static void call(GLenum target, GLuint texture) {
                __gl_debug << "call glBindTexture (" << "target: '" << target << "'" << ", " << "texture: '" << texture << "'" << ")";
                glBindTexture(target, texture);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint texture) {
                __gl_debug << "call glBindTexture (" << "target: '" << target_t::name::value << "'" << ", " << "texture: '" << texture << "'" << ")";
                glBindTexture(target_t::value, texture);
                __gl_check_error;
                
              }
          };

          struct  gl_copy_tex_image_1d  {
              inline static void call(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border) {
                __gl_debug << "call glCopyTexImage1D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "border: '" << border << "'" << ")";
                glCopyTexImage1D(target, level, internalformat, x, y, width, border);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLint level, GLint x, GLint y, GLsizei width, GLint border) {
                __gl_debug << "call glCopyTexImage1D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "border: '" << border << "'" << ")";
                glCopyTexImage1D(target_t::value, level, internalformat_t::value, x, y, width, border);
                __gl_check_error;
                
              }
          };

          struct  gl_copy_tex_image_2d  {
              inline static void call(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
                __gl_debug << "call glCopyTexImage2D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "border: '" << border << "'" << ")";
                glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLint level, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
                __gl_debug << "call glCopyTexImage2D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "border: '" << border << "'" << ")";
                glCopyTexImage2D(target_t::value, level, internalformat_t::value, x, y, width, height, border);
                __gl_check_error;
                
              }
          };

          struct  gl_copy_tex_sub_image_1d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
                __gl_debug << "call glCopyTexSubImage1D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ")";
                glCopyTexSubImage1D(target, level, xoffset, x, y, width);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLint level, GLint xoffset, GLint x, GLint y, GLsizei width) {
                __gl_debug << "call glCopyTexSubImage1D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ")";
                glCopyTexSubImage1D(target_t::value, level, xoffset, x, y, width);
                __gl_check_error;
                
              }
          };

          struct  gl_copy_tex_sub_image_2d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
                __gl_debug << "call glCopyTexSubImage2D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
                __gl_debug << "call glCopyTexSubImage2D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glCopyTexSubImage2D(target_t::value, level, xoffset, yoffset, x, y, width, height);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_textures  {
              inline static void call(GLsizei n, const GLuint* textures) {
                __gl_debug << "call glDeleteTextures (" << "n: '" << n << "'" << ", " << "textures: '" << textures << "'" << ")";
                glDeleteTextures(n, textures);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_arrays  {
              inline static void call(GLenum mode, GLint first, GLsizei count) {
                __gl_debug << "call glDrawArrays (" << "mode: '" << mode << "'" << ", " << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ")";
                glDrawArrays(mode, first, count);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(GLint first, GLsizei count) {
                __gl_debug << "call glDrawArrays (" << "mode: '" << mode_t::name::value << "'" << ", " << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ")";
                glDrawArrays(mode_t::value, first, count);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_elements  {
              inline static void call(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices) {
                __gl_debug << "call glDrawElements (" << "mode: '" << mode << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ")";
                glDrawElements(mode, count, type, indices);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count, const GLvoid* indices) {
                __gl_debug << "call glDrawElements (" << "mode: '" << mode_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ")";
                glDrawElements(mode_t::value, count, type_t::value, indices);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_textures  {
              inline static void call(GLsizei n, GLuint* textures) {
                __gl_debug << "call glGenTextures (" << "n: '" << n << "'" << ", " << "textures: '" << textures << "'" << ")";
                glGenTextures(n, textures);
                __gl_check_error;
                
              }
          };

          struct  gl_get_pointerv  {
              inline static void call(GLenum pname, GLvoid** params) {
                __gl_debug << "call glGetPointerv (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetPointerv(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLvoid** params) {
                __gl_debug << "call glGetPointerv (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetPointerv(pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_texture  {
              inline static GLboolean call(GLuint texture) {
                __gl_debug << "call glIsTexture (" << "texture: '" << texture << "'" << ")";
                GLboolean out = glIsTexture(texture);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_polygon_offset  {
              inline static void call(GLfloat factor, GLfloat units) {
                __gl_debug << "call glPolygonOffset (" << "factor: '" << factor << "'" << ", " << "units: '" << units << "'" << ")";
                glPolygonOffset(factor, units);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_sub_image_1d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels) {
                __gl_debug << "call glTexSubImage1D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "width: '" << width << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexSubImage1D(target, level, xoffset, width, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLint xoffset, GLsizei width, const GLvoid* pixels) {
                __gl_debug << "call glTexSubImage1D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "width: '" << width << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexSubImage1D(target_t::value, level, xoffset, width, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_sub_image_2d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels) {
                __gl_debug << "call glTexSubImage2D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, const GLvoid* pixels) {
                __gl_debug << "call glTexSubImage2D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexSubImage2D(target_t::value, level, xoffset, yoffset, width, height, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace v1_1
      namespace v1_2 {
        namespace fnc {
          struct  gl_blend_color  {
              inline static void call(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha) {
                __gl_debug << "call glBlendColor (" << "red: '" << red << "'" << ", " << "green: '" << green << "'" << ", " << "blue: '" << blue << "'" << ", " << "alpha: '" << alpha << "'" << ")";
                glBlendColor(red, green, blue, alpha);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_equation  {
              inline static void call(GLenum mode) {
                __gl_debug << "call glBlendEquation (" << "mode: '" << mode << "'" << ")";
                glBlendEquation(mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call() {
                __gl_debug << "call glBlendEquation (" << "mode: '" << mode_t::name::value << "'" << ")";
                glBlendEquation(mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_copy_tex_sub_image_3d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
                __gl_debug << "call glCopyTexSubImage3D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "zoffset: '" << zoffset << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
                __gl_debug << "call glCopyTexSubImage3D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "zoffset: '" << zoffset << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ")";
                glCopyTexSubImage3D(target_t::value, level, xoffset, yoffset, zoffset, x, y, width, height);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_range_elements  {
              inline static void call(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices) {
                __gl_debug << "call glDrawRangeElements (" << "mode: '" << mode << "'" << ", " << "start: '" << start << "'" << ", " << "end: '" << end << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ")";
                glDrawRangeElements(mode, start, end, count, type, indices);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLuint start, GLuint end, GLsizei count, const GLvoid* indices) {
                __gl_debug << "call glDrawRangeElements (" << "mode: '" << mode_t::name::value << "'" << ", " << "start: '" << start << "'" << ", " << "end: '" << end << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ")";
                glDrawRangeElements(mode_t::value, start, end, count, type_t::value, indices);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_image_3d  {
              inline static void call(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels) {
                __gl_debug << "call glTexImage3D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "border: '" << border << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLsizei width, GLsizei height, GLsizei depth, GLint border, const GLvoid* pixels) {
                __gl_debug << "call glTexImage3D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "border: '" << border << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexImage3D(target_t::value, level, internalformat_t::value, width, height, depth, border, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_sub_image_3d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels) {
                __gl_debug << "call glTexSubImage3D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "zoffset: '" << zoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "format: '" << format << "'" << ", " << "type: '" << type << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t, typename type_t >
              inline static void call(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, const GLvoid* pixels) {
                __gl_debug << "call glTexSubImage3D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "zoffset: '" << zoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "pixels: '" << pixels << "'" << ")";
                glTexSubImage3D(target_t::value, level, xoffset, yoffset, zoffset, width, height, depth, format_t::value, type_t::value, pixels);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace v1_2
      namespace v1_3 {
        namespace fnc {
          struct  gl_active_texture  {
              inline static void call(GLenum texture) {
                __gl_debug << "call glActiveTexture (" << "texture: '" << texture << "'" << ")";
                glActiveTexture(texture);
                __gl_check_error;
                
              }
              template< typename texture_t >
              inline static void call() {
                __gl_debug << "call glActiveTexture (" << "texture: '" << texture_t::name::value << "'" << ")";
                glActiveTexture(texture_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_compressed_tex_image_1d  {
              inline static void call(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexImage1D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "border: '" << border << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexImage1D(target, level, internalformat, width, border, imageSize, data);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLint level, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexImage1D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "border: '" << border << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexImage1D(target_t::value, level, internalformat_t::value, width, border, imageSize, data);
                __gl_check_error;
                
              }
          };

          struct  gl_compressed_tex_image_2d  {
              inline static void call(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexImage2D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "border: '" << border << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLint level, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexImage2D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "border: '" << border << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexImage2D(target_t::value, level, internalformat_t::value, width, height, border, imageSize, data);
                __gl_check_error;
                
              }
          };

          struct  gl_compressed_tex_image_3d  {
              inline static void call(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexImage3D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "border: '" << border << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLint level, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexImage3D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "border: '" << border << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexImage3D(target_t::value, level, internalformat_t::value, width, height, depth, border, imageSize, data);
                __gl_check_error;
                
              }
          };

          struct  gl_compressed_tex_sub_image_1d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexSubImage1D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "width: '" << width << "'" << ", " << "format: '" << format << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexSubImage1D(target, level, xoffset, width, format, imageSize, data);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t >
              inline static void call(GLint level, GLint xoffset, GLsizei width, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexSubImage1D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "width: '" << width << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexSubImage1D(target_t::value, level, xoffset, width, format_t::value, imageSize, data);
                __gl_check_error;
                
              }
          };

          struct  gl_compressed_tex_sub_image_2d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexSubImage2D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t >
              inline static void call(GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexSubImage2D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexSubImage2D(target_t::value, level, xoffset, yoffset, width, height, format_t::value, imageSize, data);
                __gl_check_error;
                
              }
          };

          struct  gl_compressed_tex_sub_image_3d  {
              inline static void call(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexSubImage3D (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "zoffset: '" << zoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "format: '" << format << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
                __gl_check_error;
                
              }
              template< typename target_t, typename format_t >
              inline static void call(GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei imageSize, const GLvoid* data) {
                __gl_debug << "call glCompressedTexSubImage3D (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "xoffset: '" << xoffset << "'" << ", " << "yoffset: '" << yoffset << "'" << ", " << "zoffset: '" << zoffset << "'" << ", " << "width: '" << width << "'" << ", " << "height: '" << height << "'" << ", " << "depth: '" << depth << "'" << ", " << "format: '" << format_t::name::value << "'" << ", " << "imageSize: '" << imageSize << "'" << ", " << "data: '" << data << "'" << ")";
                glCompressedTexSubImage3D(target_t::value, level, xoffset, yoffset, zoffset, width, height, depth, format_t::value, imageSize, data);
                __gl_check_error;
                
              }
          };

          struct  gl_get_compressed_tex_image  {
              inline static void call(GLenum target, GLint level, GLvoid* img) {
                __gl_debug << "call glGetCompressedTexImage (" << "target: '" << target << "'" << ", " << "level: '" << level << "'" << ", " << "img: '" << img << "'" << ")";
                glGetCompressedTexImage(target, level, img);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLint level, GLvoid* img) {
                __gl_debug << "call glGetCompressedTexImage (" << "target: '" << target_t::name::value << "'" << ", " << "level: '" << level << "'" << ", " << "img: '" << img << "'" << ")";
                glGetCompressedTexImage(target_t::value, level, img);
                __gl_check_error;
                
              }
          };

          struct  gl_sample_coverage  {
              inline static void call(GLclampf value, GLboolean invert) {
                __gl_debug << "call glSampleCoverage (" << "value: '" << value << "'" << ", " << "invert: '" << invert << "'" << ")";
                glSampleCoverage(value, invert);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace v1_3
      namespace v1_4 {
        namespace fnc {
          struct  gl_blend_func_separate  {
              inline static void call(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha) {
                __gl_debug << "call glBlendFuncSeparate (" << "sfactorRGB: '" << sfactorRGB << "'" << ", " << "dfactorRGB: '" << dfactorRGB << "'" << ", " << "sfactorAlpha: '" << sfactorAlpha << "'" << ", " << "dfactorAlpha: '" << dfactorAlpha << "'" << ")";
                glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
                __gl_check_error;
                
              }
              template< typename sfactorRGB_t, typename dfactorRGB_t, typename sfactorAlpha_t, typename dfactorAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendFuncSeparate (" << "sfactorRGB: '" << sfactorRGB_t::name::value << "'" << ", " << "dfactorRGB: '" << dfactorRGB_t::name::value << "'" << ", " << "sfactorAlpha: '" << sfactorAlpha_t::name::value << "'" << ", " << "dfactorAlpha: '" << dfactorAlpha_t::name::value << "'" << ")";
                glBlendFuncSeparate(sfactorRGB_t::value, dfactorRGB_t::value, sfactorAlpha_t::value, dfactorAlpha_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_draw_arrays  {
              inline static void call(GLenum mode, const GLint* first, const GLsizei* count, GLsizei primcount) {
                __gl_debug << "call glMultiDrawArrays (" << "mode: '" << mode << "'" << ", " << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glMultiDrawArrays(mode, first, count, primcount);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(const GLint* first, const GLsizei* count, GLsizei primcount) {
                __gl_debug << "call glMultiDrawArrays (" << "mode: '" << mode_t::name::value << "'" << ", " << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glMultiDrawArrays(mode_t::value, first, count, primcount);
                __gl_check_error;
                
              }
          };

          struct  gl_multi_draw_elements  {
              inline static void call(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount) {
                __gl_debug << "call glMultiDrawElements (" << "mode: '" << mode << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glMultiDrawElements(mode, count, type, indices, primcount);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(const GLsizei* count, const GLvoid** indices, GLsizei primcount) {
                __gl_debug << "call glMultiDrawElements (" << "mode: '" << mode_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glMultiDrawElements(mode_t::value, count, type_t::value, indices, primcount);
                __gl_check_error;
                
              }
          };

          struct  gl_point_parameterf  {
              inline static void call(GLenum pname, GLfloat param) {
                __gl_debug << "call glPointParameterf (" << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glPointParameterf(pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLfloat param) {
                __gl_debug << "call glPointParameterf (" << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glPointParameterf(pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_point_parameterfv  {
              inline static void call(GLenum pname, const GLfloat* params) {
                __gl_debug << "call glPointParameterfv (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glPointParameterfv(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(const GLfloat* params) {
                __gl_debug << "call glPointParameterfv (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glPointParameterfv(pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_point_parameteri  {
              inline static void call(GLenum pname, GLint param) {
                __gl_debug << "call glPointParameteri (" << "pname: '" << pname << "'" << ", " << "param: '" << param << "'" << ")";
                glPointParameteri(pname, param);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLint param) {
                __gl_debug << "call glPointParameteri (" << "pname: '" << pname_t::name::value << "'" << ", " << "param: '" << param << "'" << ")";
                glPointParameteri(pname_t::value, param);
                __gl_check_error;
                
              }
          };

          struct  gl_point_parameteriv  {
              inline static void call(GLenum pname, const GLint* params) {
                __gl_debug << "call glPointParameteriv (" << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glPointParameteriv(pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(const GLint* params) {
                __gl_debug << "call glPointParameteriv (" << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glPointParameteriv(pname_t::value, params);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace v1_4
      namespace v1_5 {
        namespace fnc {
          struct  gl_begin_query  {
              inline static void call(GLenum target, GLuint id) {
                __gl_debug << "call glBeginQuery (" << "target: '" << target << "'" << ", " << "id: '" << id << "'" << ")";
                glBeginQuery(target, id);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint id) {
                __gl_debug << "call glBeginQuery (" << "target: '" << target_t::name::value << "'" << ", " << "id: '" << id << "'" << ")";
                glBeginQuery(target_t::value, id);
                __gl_check_error;
                
              }
          };

          struct  gl_bind_buffer  {
              inline static void call(GLenum target, GLuint buffer) {
                __gl_debug << "call glBindBuffer (" << "target: '" << target << "'" << ", " << "buffer: '" << buffer << "'" << ")";
                glBindBuffer(target, buffer);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint buffer) {
                __gl_debug << "call glBindBuffer (" << "target: '" << target_t::name::value << "'" << ", " << "buffer: '" << buffer << "'" << ")";
                glBindBuffer(target_t::value, buffer);
                __gl_check_error;
                
              }
          };

          struct  gl_buffer_data  {
              inline static void call(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage) {
                __gl_debug << "call glBufferData (" << "target: '" << target << "'" << ", " << "size: '" << size << "'" << ", " << "data: '" << data << "'" << ", " << "usage: '" << usage << "'" << ")";
                glBufferData(target, size, data, usage);
                __gl_check_error;
                
              }
              template< typename target_t, typename usage_t >
              inline static void call(GLsizeiptr size, const GLvoid* data) {
                __gl_debug << "call glBufferData (" << "target: '" << target_t::name::value << "'" << ", " << "size: '" << size << "'" << ", " << "data: '" << data << "'" << ", " << "usage: '" << usage_t::name::value << "'" << ")";
                glBufferData(target_t::value, size, data, usage_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_buffer_sub_data  {
              inline static void call(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data) {
                __gl_debug << "call glBufferSubData (" << "target: '" << target << "'" << ", " << "offset: '" << offset << "'" << ", " << "size: '" << size << "'" << ", " << "data: '" << data << "'" << ")";
                glBufferSubData(target, offset, size, data);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLintptr offset, GLsizeiptr size, const GLvoid* data) {
                __gl_debug << "call glBufferSubData (" << "target: '" << target_t::name::value << "'" << ", " << "offset: '" << offset << "'" << ", " << "size: '" << size << "'" << ", " << "data: '" << data << "'" << ")";
                glBufferSubData(target_t::value, offset, size, data);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_buffers  {
              inline static void call(GLsizei n, const GLuint* buffers) {
                __gl_debug << "call glDeleteBuffers (" << "n: '" << n << "'" << ", " << "buffers: '" << buffers << "'" << ")";
                glDeleteBuffers(n, buffers);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_queries  {
              inline static void call(GLsizei n, const GLuint* ids) {
                __gl_debug << "call glDeleteQueries (" << "n: '" << n << "'" << ", " << "ids: '" << ids << "'" << ")";
                glDeleteQueries(n, ids);
                __gl_check_error;
                
              }
          };

          struct  gl_end_query  {
              inline static void call(GLenum target) {
                __gl_debug << "call glEndQuery (" << "target: '" << target << "'" << ")";
                glEndQuery(target);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call() {
                __gl_debug << "call glEndQuery (" << "target: '" << target_t::name::value << "'" << ")";
                glEndQuery(target_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_buffers  {
              inline static void call(GLsizei n, GLuint* buffers) {
                __gl_debug << "call glGenBuffers (" << "n: '" << n << "'" << ", " << "buffers: '" << buffers << "'" << ")";
                glGenBuffers(n, buffers);
                __gl_check_error;
                
              }
          };

          struct  gl_gen_queries  {
              inline static void call(GLsizei n, GLuint* ids) {
                __gl_debug << "call glGenQueries (" << "n: '" << n << "'" << ", " << "ids: '" << ids << "'" << ")";
                glGenQueries(n, ids);
                __gl_check_error;
                
              }
          };

          struct  gl_get_buffer_parameteriv  {
              inline static void call(GLenum target, GLenum pname, GLint* params) {
                __gl_debug << "call glGetBufferParameteriv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBufferParameteriv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint* params) {
                __gl_debug << "call glGetBufferParameteriv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBufferParameteriv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_buffer_pointerv  {
              inline static void call(GLenum target, GLenum pname, GLvoid** params) {
                __gl_debug << "call glGetBufferPointerv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBufferPointerv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLvoid** params) {
                __gl_debug << "call glGetBufferPointerv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBufferPointerv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_buffer_sub_data  {
              inline static void call(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data) {
                __gl_debug << "call glGetBufferSubData (" << "target: '" << target << "'" << ", " << "offset: '" << offset << "'" << ", " << "size: '" << size << "'" << ", " << "data: '" << data << "'" << ")";
                glGetBufferSubData(target, offset, size, data);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLintptr offset, GLsizeiptr size, GLvoid* data) {
                __gl_debug << "call glGetBufferSubData (" << "target: '" << target_t::name::value << "'" << ", " << "offset: '" << offset << "'" << ", " << "size: '" << size << "'" << ", " << "data: '" << data << "'" << ")";
                glGetBufferSubData(target_t::value, offset, size, data);
                __gl_check_error;
                
              }
          };

          struct  gl_get_query_objectiv  {
              inline static void call(GLuint id, GLenum pname, GLint* params) {
                __gl_debug << "call glGetQueryObjectiv (" << "id: '" << id << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjectiv(id, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint id, GLint* params) {
                __gl_debug << "call glGetQueryObjectiv (" << "id: '" << id << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjectiv(id, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_query_objectuiv  {
              inline static void call(GLuint id, GLenum pname, GLuint* params) {
                __gl_debug << "call glGetQueryObjectuiv (" << "id: '" << id << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjectuiv(id, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint id, GLuint* params) {
                __gl_debug << "call glGetQueryObjectuiv (" << "id: '" << id << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryObjectuiv(id, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_queryiv  {
              inline static void call(GLenum target, GLenum pname, GLint* params) {
                __gl_debug << "call glGetQueryiv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryiv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint* params) {
                __gl_debug << "call glGetQueryiv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetQueryiv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_buffer  {
              inline static GLboolean call(GLuint buffer) {
                __gl_debug << "call glIsBuffer (" << "buffer: '" << buffer << "'" << ")";
                GLboolean out = glIsBuffer(buffer);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_is_query  {
              inline static GLboolean call(GLuint id) {
                __gl_debug << "call glIsQuery (" << "id: '" << id << "'" << ")";
                GLboolean out = glIsQuery(id);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_map_buffer  {
              inline static GLvoid* call(GLenum target, GLenum access) {
                __gl_debug << "call glMapBuffer (" << "target: '" << target << "'" << ", " << "access: '" << access << "'" << ")";
                GLvoid* out = glMapBuffer(target, access);
                __gl_check_error;
                return out;
              }
              template< typename target_t, typename access_t >
              inline static GLvoid* call() {
                __gl_debug << "call glMapBuffer (" << "target: '" << target_t::name::value << "'" << ", " << "access: '" << access_t::name::value << "'" << ")";
                GLvoid* out = glMapBuffer(target_t::value, access_t::value);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_unmap_buffer  {
              inline static GLboolean call(GLenum target) {
                __gl_debug << "call glUnmapBuffer (" << "target: '" << target << "'" << ")";
                GLboolean out = glUnmapBuffer(target);
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLboolean call() {
                __gl_debug << "call glUnmapBuffer (" << "target: '" << target_t::name::value << "'" << ")";
                GLboolean out = glUnmapBuffer(target_t::value);
                __gl_check_error;
                return out;
              }
          };

        } // namespace fnc
      } // namespace v1_5
      namespace v2_0 {
        namespace fnc {
          struct  gl_attach_shader  {
              inline static void call(GLuint program, GLuint shader) {
                __gl_debug << "call glAttachShader (" << "program: '" << program << "'" << ", " << "shader: '" << shader << "'" << ")";
                glAttachShader(program, shader);
                __gl_check_error;
                
              }
          };

          struct  gl_bind_attrib_location  {
              inline static void call(GLuint program, GLuint index, const GLchar* name) {
                __gl_debug << "call glBindAttribLocation (" << "program: '" << program << "'" << ", " << "index: '" << index << "'" << ", " << "name: '" << name << "'" << ")";
                glBindAttribLocation(program, index, name);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_equation_separate  {
              inline static void call(GLenum modeRGB, GLenum modeAlpha) {
                __gl_debug << "call glBlendEquationSeparate (" << "modeRGB: '" << modeRGB << "'" << ", " << "modeAlpha: '" << modeAlpha << "'" << ")";
                glBlendEquationSeparate(modeRGB, modeAlpha);
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call() {
                __gl_debug << "call glBlendEquationSeparate (" << "modeRGB: '" << modeRGB_t::name::value << "'" << ", " << "modeAlpha: '" << modeAlpha_t::name::value << "'" << ")";
                glBlendEquationSeparate(modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_compile_shader  {
              inline static void call(GLuint shader) {
                __gl_debug << "call glCompileShader (" << "shader: '" << shader << "'" << ")";
                glCompileShader(shader);
                __gl_check_error;
                
              }
          };

          struct  gl_create_program  {
              inline static GLuint call() {
                __gl_debug << "call glCreateProgram (" << "" << ")";
                GLuint out = glCreateProgram();
                __gl_check_error;
                return out;
              }
          };

          struct  gl_create_shader  {
              inline static GLuint call(GLenum type) {
                __gl_debug << "call glCreateShader (" << "type: '" << type << "'" << ")";
                GLuint out = glCreateShader(type);
                __gl_check_error;
                return out;
              }
              template< typename type_t >
              inline static GLuint call() {
                __gl_debug << "call glCreateShader (" << "type: '" << type_t::name::value << "'" << ")";
                GLuint out = glCreateShader(type_t::value);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_delete_program  {
              inline static void call(GLuint program) {
                __gl_debug << "call glDeleteProgram (" << "program: '" << program << "'" << ")";
                glDeleteProgram(program);
                __gl_check_error;
                
              }
          };

          struct  gl_delete_shader  {
              inline static void call(GLuint shader) {
                __gl_debug << "call glDeleteShader (" << "shader: '" << shader << "'" << ")";
                glDeleteShader(shader);
                __gl_check_error;
                
              }
          };

          struct  gl_detach_shader  {
              inline static void call(GLuint program, GLuint shader) {
                __gl_debug << "call glDetachShader (" << "program: '" << program << "'" << ", " << "shader: '" << shader << "'" << ")";
                glDetachShader(program, shader);
                __gl_check_error;
                
              }
          };

          struct  gl_disable_vertex_attrib_array  {
              inline static void call(GLuint index) {
                __gl_debug << "call glDisableVertexAttribArray (" << "index: '" << index << "'" << ")";
                glDisableVertexAttribArray(index);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_buffers  {
              inline static void call(GLsizei n, const GLenum* bufs) {
                __gl_debug << "call glDrawBuffers (" << "n: '" << n << "'" << ", " << "bufs: '" << bufs << "'" << ")";
                glDrawBuffers(n, bufs);
                __gl_check_error;
                
              }
          };

          struct  gl_enable_vertex_attrib_array  {
              inline static void call(GLuint index) {
                __gl_debug << "call glEnableVertexAttribArray (" << "index: '" << index << "'" << ")";
                glEnableVertexAttribArray(index);
                __gl_check_error;
                
              }
          };

          struct  gl_get_active_attrib  {
              inline static void call(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) {
                __gl_debug << "call glGetActiveAttrib (" << "program: '" << program << "'" << ", " << "index: '" << index << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type << "'" << ", " << "name: '" << name << "'" << ")";
                glGetActiveAttrib(program, index, bufSize, length, size, type, name);
                __gl_check_error;
                
              }
          };

          struct  gl_get_active_uniform  {
              inline static void call(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) {
                __gl_debug << "call glGetActiveUniform (" << "program: '" << program << "'" << ", " << "index: '" << index << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type << "'" << ", " << "name: '" << name << "'" << ")";
                glGetActiveUniform(program, index, bufSize, length, size, type, name);
                __gl_check_error;
                
              }
          };

          struct  gl_get_attached_shaders  {
              inline static void call(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* obj) {
                __gl_debug << "call glGetAttachedShaders (" << "program: '" << program << "'" << ", " << "maxCount: '" << maxCount << "'" << ", " << "count: '" << count << "'" << ", " << "obj: '" << obj << "'" << ")";
                glGetAttachedShaders(program, maxCount, count, obj);
                __gl_check_error;
                
              }
          };

          struct  gl_get_attrib_location  {
              inline static GLint call(GLuint program, const GLchar* name) {
                __gl_debug << "call glGetAttribLocation (" << "program: '" << program << "'" << ", " << "name: '" << name << "'" << ")";
                GLint out = glGetAttribLocation(program, name);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_program_info_log  {
              inline static void call(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
                __gl_debug << "call glGetProgramInfoLog (" << "program: '" << program << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "infoLog: '" << infoLog << "'" << ")";
                glGetProgramInfoLog(program, bufSize, length, infoLog);
                __gl_check_error;
                
              }
          };

          struct  gl_get_programiv  {
              inline static void call(GLuint program, GLenum pname, GLint* params) {
                __gl_debug << "call glGetProgramiv (" << "program: '" << program << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetProgramiv(program, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint program, GLint* params) {
                __gl_debug << "call glGetProgramiv (" << "program: '" << program << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetProgramiv(program, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_shader_info_log  {
              inline static void call(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog) {
                __gl_debug << "call glGetShaderInfoLog (" << "shader: '" << shader << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "infoLog: '" << infoLog << "'" << ")";
                glGetShaderInfoLog(shader, bufSize, length, infoLog);
                __gl_check_error;
                
              }
          };

          struct  gl_get_shader_source  {
              inline static void call(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source) {
                __gl_debug << "call glGetShaderSource (" << "shader: '" << shader << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "source: '" << source << "'" << ")";
                glGetShaderSource(shader, bufSize, length, source);
                __gl_check_error;
                
              }
          };

          struct  gl_get_shaderiv  {
              inline static void call(GLuint shader, GLenum pname, GLint* params) {
                __gl_debug << "call glGetShaderiv (" << "shader: '" << shader << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetShaderiv(shader, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint shader, GLint* params) {
                __gl_debug << "call glGetShaderiv (" << "shader: '" << shader << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetShaderiv(shader, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_uniform_location  {
              inline static GLint call(GLuint program, const GLchar* name) {
                __gl_debug << "call glGetUniformLocation (" << "program: '" << program << "'" << ", " << "name: '" << name << "'" << ")";
                GLint out = glGetUniformLocation(program, name);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_uniformfv  {
              inline static void call(GLuint program, GLint location, GLfloat* params) {
                __gl_debug << "call glGetUniformfv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "params: '" << params << "'" << ")";
                glGetUniformfv(program, location, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_uniformiv  {
              inline static void call(GLuint program, GLint location, GLint* params) {
                __gl_debug << "call glGetUniformiv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "params: '" << params << "'" << ")";
                glGetUniformiv(program, location, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_vertex_attrib_pointerv  {
              inline static void call(GLuint index, GLenum pname, GLvoid** pointer) {
                __gl_debug << "call glGetVertexAttribPointerv (" << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glGetVertexAttribPointerv(index, pname, pointer);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLvoid** pointer) {
                __gl_debug << "call glGetVertexAttribPointerv (" << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glGetVertexAttribPointerv(index, pname_t::value, pointer);
                __gl_check_error;
                
              }
          };

          struct  gl_get_vertex_attribdv  {
              inline static void call(GLuint index, GLenum pname, GLdouble* params) {
                __gl_debug << "call glGetVertexAttribdv (" << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribdv(index, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLdouble* params) {
                __gl_debug << "call glGetVertexAttribdv (" << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribdv(index, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_vertex_attribfv  {
              inline static void call(GLuint index, GLenum pname, GLfloat* params) {
                __gl_debug << "call glGetVertexAttribfv (" << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribfv(index, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLfloat* params) {
                __gl_debug << "call glGetVertexAttribfv (" << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribfv(index, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_vertex_attribiv  {
              inline static void call(GLuint index, GLenum pname, GLint* params) {
                __gl_debug << "call glGetVertexAttribiv (" << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribiv(index, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLint* params) {
                __gl_debug << "call glGetVertexAttribiv (" << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribiv(index, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_program  {
              inline static GLboolean call(GLuint program) {
                __gl_debug << "call glIsProgram (" << "program: '" << program << "'" << ")";
                GLboolean out = glIsProgram(program);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_is_shader  {
              inline static GLboolean call(GLuint shader) {
                __gl_debug << "call glIsShader (" << "shader: '" << shader << "'" << ")";
                GLboolean out = glIsShader(shader);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_link_program  {
              inline static void call(GLuint program) {
                __gl_debug << "call glLinkProgram (" << "program: '" << program << "'" << ")";
                glLinkProgram(program);
                __gl_check_error;
                
              }
          };

          struct  gl_shader_source  {
              inline static void call(GLuint shader, GLsizei count, const GLchar** string, const GLint* length) {
                __gl_debug << "call glShaderSource (" << "shader: '" << shader << "'" << ", " << "count: '" << count << "'" << ", " << "string: '" << string << "'" << ", " << "length: '" << length << "'" << ")";
                glShaderSource(shader, count, string, length);
                __gl_check_error;
                
              }
          };

          struct  gl_stencil_func_separate  {
              inline static void call(GLenum face, GLenum func, GLint ref, GLuint mask) {
                __gl_debug << "call glStencilFuncSeparate (" << "face: '" << face << "'" << ", " << "func: '" << func << "'" << ", " << "ref: '" << ref << "'" << ", " << "mask: '" << mask << "'" << ")";
                glStencilFuncSeparate(face, func, ref, mask);
                __gl_check_error;
                
              }
              template< typename face_t, typename func_t >
              inline static void call(GLint ref, GLuint mask) {
                __gl_debug << "call glStencilFuncSeparate (" << "face: '" << face_t::name::value << "'" << ", " << "func: '" << func_t::name::value << "'" << ", " << "ref: '" << ref << "'" << ", " << "mask: '" << mask << "'" << ")";
                glStencilFuncSeparate(face_t::value, func_t::value, ref, mask);
                __gl_check_error;
                
              }
          };

          struct  gl_stencil_mask_separate  {
              inline static void call(GLenum face, GLuint mask) {
                __gl_debug << "call glStencilMaskSeparate (" << "face: '" << face << "'" << ", " << "mask: '" << mask << "'" << ")";
                glStencilMaskSeparate(face, mask);
                __gl_check_error;
                
              }
              template< typename face_t >
              inline static void call(GLuint mask) {
                __gl_debug << "call glStencilMaskSeparate (" << "face: '" << face_t::name::value << "'" << ", " << "mask: '" << mask << "'" << ")";
                glStencilMaskSeparate(face_t::value, mask);
                __gl_check_error;
                
              }
          };

          struct  gl_stencil_op_separate  {
              inline static void call(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass) {
                __gl_debug << "call glStencilOpSeparate (" << "face: '" << face << "'" << ", " << "sfail: '" << sfail << "'" << ", " << "dpfail: '" << dpfail << "'" << ", " << "dppass: '" << dppass << "'" << ")";
                glStencilOpSeparate(face, sfail, dpfail, dppass);
                __gl_check_error;
                
              }
              template< typename face_t, typename sfail_t, typename dpfail_t, typename dppass_t >
              inline static void call() {
                __gl_debug << "call glStencilOpSeparate (" << "face: '" << face_t::name::value << "'" << ", " << "sfail: '" << sfail_t::name::value << "'" << ", " << "dpfail: '" << dpfail_t::name::value << "'" << ", " << "dppass: '" << dppass_t::name::value << "'" << ")";
                glStencilOpSeparate(face_t::value, sfail_t::value, dpfail_t::value, dppass_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_f  {
              inline static void call(GLint location, GLfloat v0) {
                __gl_debug << "call glUniform1f (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ")";
                glUniform1f(location, v0);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_fv  {
              inline static void call(GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glUniform1fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform1fv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_i  {
              inline static void call(GLint location, GLint v0) {
                __gl_debug << "call glUniform1i (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ")";
                glUniform1i(location, v0);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_iv  {
              inline static void call(GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glUniform1iv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform1iv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_f  {
              inline static void call(GLint location, GLfloat v0, GLfloat v1) {
                __gl_debug << "call glUniform2f (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ")";
                glUniform2f(location, v0, v1);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_fv  {
              inline static void call(GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glUniform2fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform2fv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_i  {
              inline static void call(GLint location, GLint v0, GLint v1) {
                __gl_debug << "call glUniform2i (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ")";
                glUniform2i(location, v0, v1);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_iv  {
              inline static void call(GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glUniform2iv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform2iv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_f  {
              inline static void call(GLint location, GLfloat v0, GLfloat v1, GLfloat v2) {
                __gl_debug << "call glUniform3f (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ")";
                glUniform3f(location, v0, v1, v2);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_fv  {
              inline static void call(GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glUniform3fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform3fv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_i  {
              inline static void call(GLint location, GLint v0, GLint v1, GLint v2) {
                __gl_debug << "call glUniform3i (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ")";
                glUniform3i(location, v0, v1, v2);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_iv  {
              inline static void call(GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glUniform3iv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform3iv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_f  {
              inline static void call(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3) {
                __gl_debug << "call glUniform4f (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ", " << "v3: '" << v3 << "'" << ")";
                glUniform4f(location, v0, v1, v2, v3);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_fv  {
              inline static void call(GLint location, GLsizei count, const GLfloat* value) {
                __gl_debug << "call glUniform4fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform4fv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_i  {
              inline static void call(GLint location, GLint v0, GLint v1, GLint v2, GLint v3) {
                __gl_debug << "call glUniform4i (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ", " << "v3: '" << v3 << "'" << ")";
                glUniform4i(location, v0, v1, v2, v3);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_iv  {
              inline static void call(GLint location, GLsizei count, const GLint* value) {
                __gl_debug << "call glUniform4iv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform4iv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_2_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix2fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix2fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_3_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix3fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix3fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_4_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix4fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix4fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_use_program  {
              inline static void call(GLuint program) {
                __gl_debug << "call glUseProgram (" << "program: '" << program << "'" << ")";
                glUseProgram(program);
                __gl_check_error;
                
              }
          };

          struct  gl_validate_program  {
              inline static void call(GLuint program) {
                __gl_debug << "call glValidateProgram (" << "program: '" << program << "'" << ")";
                glValidateProgram(program);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_1_d  {
              inline static void call(GLuint index, GLdouble x) {
                __gl_debug << "call glVertexAttrib1d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ")";
                glVertexAttrib1d(index, x);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_1_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttrib1dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib1dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_1_f  {
              inline static void call(GLuint index, GLfloat x) {
                __gl_debug << "call glVertexAttrib1f (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ")";
                glVertexAttrib1f(index, x);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_1_fv  {
              inline static void call(GLuint index, const GLfloat* v) {
                __gl_debug << "call glVertexAttrib1fv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib1fv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_1_s  {
              inline static void call(GLuint index, GLshort x) {
                __gl_debug << "call glVertexAttrib1s (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ")";
                glVertexAttrib1s(index, x);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_1_sv  {
              inline static void call(GLuint index, const GLshort* v) {
                __gl_debug << "call glVertexAttrib1sv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib1sv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_2_d  {
              inline static void call(GLuint index, GLdouble x, GLdouble y) {
                __gl_debug << "call glVertexAttrib2d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ")";
                glVertexAttrib2d(index, x, y);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_2_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttrib2dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib2dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_2_f  {
              inline static void call(GLuint index, GLfloat x, GLfloat y) {
                __gl_debug << "call glVertexAttrib2f (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ")";
                glVertexAttrib2f(index, x, y);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_2_fv  {
              inline static void call(GLuint index, const GLfloat* v) {
                __gl_debug << "call glVertexAttrib2fv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib2fv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_2_s  {
              inline static void call(GLuint index, GLshort x, GLshort y) {
                __gl_debug << "call glVertexAttrib2s (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ")";
                glVertexAttrib2s(index, x, y);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_2_sv  {
              inline static void call(GLuint index, const GLshort* v) {
                __gl_debug << "call glVertexAttrib2sv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib2sv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_3_d  {
              inline static void call(GLuint index, GLdouble x, GLdouble y, GLdouble z) {
                __gl_debug << "call glVertexAttrib3d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ")";
                glVertexAttrib3d(index, x, y, z);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_3_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttrib3dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib3dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_3_f  {
              inline static void call(GLuint index, GLfloat x, GLfloat y, GLfloat z) {
                __gl_debug << "call glVertexAttrib3f (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ")";
                glVertexAttrib3f(index, x, y, z);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_3_fv  {
              inline static void call(GLuint index, const GLfloat* v) {
                __gl_debug << "call glVertexAttrib3fv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib3fv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_3_s  {
              inline static void call(GLuint index, GLshort x, GLshort y, GLshort z) {
                __gl_debug << "call glVertexAttrib3s (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ")";
                glVertexAttrib3s(index, x, y, z);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_3_sv  {
              inline static void call(GLuint index, const GLshort* v) {
                __gl_debug << "call glVertexAttrib3sv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib3sv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_nbv  {
              inline static void call(GLuint index, const GLbyte* v) {
                __gl_debug << "call glVertexAttrib4Nbv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4Nbv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_niv  {
              inline static void call(GLuint index, const GLint* v) {
                __gl_debug << "call glVertexAttrib4Niv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4Niv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_nsv  {
              inline static void call(GLuint index, const GLshort* v) {
                __gl_debug << "call glVertexAttrib4Nsv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4Nsv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_nub  {
              inline static void call(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w) {
                __gl_debug << "call glVertexAttrib4Nub (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glVertexAttrib4Nub(index, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_nubv  {
              inline static void call(GLuint index, const GLubyte* v) {
                __gl_debug << "call glVertexAttrib4Nubv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4Nubv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_nuiv  {
              inline static void call(GLuint index, const GLuint* v) {
                __gl_debug << "call glVertexAttrib4Nuiv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4Nuiv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_nusv  {
              inline static void call(GLuint index, const GLushort* v) {
                __gl_debug << "call glVertexAttrib4Nusv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4Nusv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_bv  {
              inline static void call(GLuint index, const GLbyte* v) {
                __gl_debug << "call glVertexAttrib4bv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4bv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_d  {
              inline static void call(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w) {
                __gl_debug << "call glVertexAttrib4d (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glVertexAttrib4d(index, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_dv  {
              inline static void call(GLuint index, const GLdouble* v) {
                __gl_debug << "call glVertexAttrib4dv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4dv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_f  {
              inline static void call(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
                __gl_debug << "call glVertexAttrib4f (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glVertexAttrib4f(index, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_fv  {
              inline static void call(GLuint index, const GLfloat* v) {
                __gl_debug << "call glVertexAttrib4fv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4fv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_iv  {
              inline static void call(GLuint index, const GLint* v) {
                __gl_debug << "call glVertexAttrib4iv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4iv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_s  {
              inline static void call(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w) {
                __gl_debug << "call glVertexAttrib4s (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glVertexAttrib4s(index, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_sv  {
              inline static void call(GLuint index, const GLshort* v) {
                __gl_debug << "call glVertexAttrib4sv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4sv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_ubv  {
              inline static void call(GLuint index, const GLubyte* v) {
                __gl_debug << "call glVertexAttrib4ubv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4ubv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_uiv  {
              inline static void call(GLuint index, const GLuint* v) {
                __gl_debug << "call glVertexAttrib4uiv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4uiv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_4_usv  {
              inline static void call(GLuint index, const GLushort* v) {
                __gl_debug << "call glVertexAttrib4usv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttrib4usv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_pointer  {
              inline static void call(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer) {
                __gl_debug << "call glVertexAttribPointer (" << "index: '" << index << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "stride: '" << stride << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glVertexAttribPointer(index, size, type, normalized, stride, pointer);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLint size, GLboolean normalized, GLsizei stride, const GLvoid* pointer) {
                __gl_debug << "call glVertexAttribPointer (" << "index: '" << index << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "normalized: '" << normalized << "'" << ", " << "stride: '" << stride << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glVertexAttribPointer(index, size, type_t::value, normalized, stride, pointer);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace v2_0
      namespace v2_1 {
        namespace fnc {
          struct  gl_uniform_matrix_2x3_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix2x3fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix2x3fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_2x4_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix2x4fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix2x4fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_3x2_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix3x2fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix3x2fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_3x4_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix3x4fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix3x4fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_4x2_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix4x2fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix4x2fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_matrix_4x3_fv  {
              inline static void call(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
                __gl_debug << "call glUniformMatrix4x3fv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "transpose: '" << transpose << "'" << ", " << "value: '" << value << "'" << ")";
                glUniformMatrix4x3fv(location, count, transpose, value);
                __gl_check_error;
                
              }
          };

        } // namespace fnc
      } // namespace v2_1
      namespace v3_0 {
        namespace fnc {
          struct  gl_begin_conditional_render  {
              inline static void call(GLuint id, GLenum mode) {
                __gl_debug << "call glBeginConditionalRender (" << "id: '" << id << "'" << ", " << "mode: '" << mode << "'" << ")";
                glBeginConditionalRender(id, mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(GLuint id) {
                __gl_debug << "call glBeginConditionalRender (" << "id: '" << id << "'" << ", " << "mode: '" << mode_t::name::value << "'" << ")";
                glBeginConditionalRender(id, mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_begin_transform_feedback  {
              inline static void call(GLenum primitiveMode) {
                __gl_debug << "call glBeginTransformFeedback (" << "primitiveMode: '" << primitiveMode << "'" << ")";
                glBeginTransformFeedback(primitiveMode);
                __gl_check_error;
                
              }
              template< typename primitiveMode_t >
              inline static void call() {
                __gl_debug << "call glBeginTransformFeedback (" << "primitiveMode: '" << primitiveMode_t::name::value << "'" << ")";
                glBeginTransformFeedback(primitiveMode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_bind_buffer_base  {
              inline static void call(GLenum target, GLuint index, GLuint buffer) {
                __gl_debug << "call glBindBufferBase (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "buffer: '" << buffer << "'" << ")";
                glBindBufferBase(target, index, buffer);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLuint buffer) {
                __gl_debug << "call glBindBufferBase (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "buffer: '" << buffer << "'" << ")";
                glBindBufferBase(target_t::value, index, buffer);
                __gl_check_error;
                
              }
          };

          struct  gl_bind_buffer_range  {
              inline static void call(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
                __gl_debug << "call glBindBufferRange (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "buffer: '" << buffer << "'" << ", " << "offset: '" << offset << "'" << ", " << "size: '" << size << "'" << ")";
                glBindBufferRange(target, index, buffer, offset, size);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size) {
                __gl_debug << "call glBindBufferRange (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "buffer: '" << buffer << "'" << ", " << "offset: '" << offset << "'" << ", " << "size: '" << size << "'" << ")";
                glBindBufferRange(target_t::value, index, buffer, offset, size);
                __gl_check_error;
                
              }
          };

          struct  gl_bind_frag_data_location  {
              inline static void call(GLuint program, GLuint color, const GLchar* name) {
                __gl_debug << "call glBindFragDataLocation (" << "program: '" << program << "'" << ", " << "color: '" << color << "'" << ", " << "name: '" << name << "'" << ")";
                glBindFragDataLocation(program, color, name);
                __gl_check_error;
                
              }
          };

          struct  gl_clamp_color  {
              inline static void call(GLenum target, GLenum clamp) {
                __gl_debug << "call glClampColor (" << "target: '" << target << "'" << ", " << "clamp: '" << clamp << "'" << ")";
                glClampColor(target, clamp);
                __gl_check_error;
                
              }
              template< typename target_t, typename clamp_t >
              inline static void call() {
                __gl_debug << "call glClampColor (" << "target: '" << target_t::name::value << "'" << ", " << "clamp: '" << clamp_t::name::value << "'" << ")";
                glClampColor(target_t::value, clamp_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_clear_bufferfi  {
              inline static void call(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil) {
                __gl_debug << "call glClearBufferfi (" << "buffer: '" << buffer << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "depth: '" << depth << "'" << ", " << "stencil: '" << stencil << "'" << ")";
                glClearBufferfi(buffer, drawbuffer, depth, stencil);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(GLint drawbuffer, GLfloat depth, GLint stencil) {
                __gl_debug << "call glClearBufferfi (" << "buffer: '" << buffer_t::name::value << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "depth: '" << depth << "'" << ", " << "stencil: '" << stencil << "'" << ")";
                glClearBufferfi(buffer_t::value, drawbuffer, depth, stencil);
                __gl_check_error;
                
              }
          };

          struct  gl_clear_bufferfv  {
              inline static void call(GLenum buffer, GLint drawbuffer, const GLfloat* value) {
                __gl_debug << "call glClearBufferfv (" << "buffer: '" << buffer << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "value: '" << value << "'" << ")";
                glClearBufferfv(buffer, drawbuffer, value);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(GLint drawbuffer, const GLfloat* value) {
                __gl_debug << "call glClearBufferfv (" << "buffer: '" << buffer_t::name::value << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "value: '" << value << "'" << ")";
                glClearBufferfv(buffer_t::value, drawbuffer, value);
                __gl_check_error;
                
              }
          };

          struct  gl_clear_bufferiv  {
              inline static void call(GLenum buffer, GLint drawbuffer, const GLint* value) {
                __gl_debug << "call glClearBufferiv (" << "buffer: '" << buffer << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "value: '" << value << "'" << ")";
                glClearBufferiv(buffer, drawbuffer, value);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(GLint drawbuffer, const GLint* value) {
                __gl_debug << "call glClearBufferiv (" << "buffer: '" << buffer_t::name::value << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "value: '" << value << "'" << ")";
                glClearBufferiv(buffer_t::value, drawbuffer, value);
                __gl_check_error;
                
              }
          };

          struct  gl_clear_bufferuiv  {
              inline static void call(GLenum buffer, GLint drawbuffer, const GLuint* value) {
                __gl_debug << "call glClearBufferuiv (" << "buffer: '" << buffer << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "value: '" << value << "'" << ")";
                glClearBufferuiv(buffer, drawbuffer, value);
                __gl_check_error;
                
              }
              template< typename buffer_t >
              inline static void call(GLint drawbuffer, const GLuint* value) {
                __gl_debug << "call glClearBufferuiv (" << "buffer: '" << buffer_t::name::value << "'" << ", " << "drawbuffer: '" << drawbuffer << "'" << ", " << "value: '" << value << "'" << ")";
                glClearBufferuiv(buffer_t::value, drawbuffer, value);
                __gl_check_error;
                
              }
          };

          struct  gl_color_maski  {
              inline static void call(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a) {
                __gl_debug << "call glColorMaski (" << "index: '" << index << "'" << ", " << "r: '" << r << "'" << ", " << "g: '" << g << "'" << ", " << "b: '" << b << "'" << ", " << "a: '" << a << "'" << ")";
                glColorMaski(index, r, g, b, a);
                __gl_check_error;
                
              }
          };

          struct  gl_disablei  {
              inline static void call(GLenum target, GLuint index) {
                __gl_debug << "call glDisablei (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ")";
                glDisablei(target, index);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index) {
                __gl_debug << "call glDisablei (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ")";
                glDisablei(target_t::value, index);
                __gl_check_error;
                
              }
          };

          struct  gl_enablei  {
              inline static void call(GLenum target, GLuint index) {
                __gl_debug << "call glEnablei (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ")";
                glEnablei(target, index);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index) {
                __gl_debug << "call glEnablei (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ")";
                glEnablei(target_t::value, index);
                __gl_check_error;
                
              }
          };

          struct  gl_end_conditional_render  {
              inline static void call() {
                __gl_debug << "call glEndConditionalRender (" << "" << ")";
                glEndConditionalRender();
                __gl_check_error;
                
              }
          };

          struct  gl_end_transform_feedback  {
              inline static void call() {
                __gl_debug << "call glEndTransformFeedback (" << "" << ")";
                glEndTransformFeedback();
                __gl_check_error;
                
              }
          };

          struct  gl_get_booleani_v  {
              inline static void call(GLenum target, GLuint index, GLboolean* data) {
                __gl_debug << "call glGetBooleani_v (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetBooleani_v(target, index, data);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLboolean* data) {
                __gl_debug << "call glGetBooleani_v (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetBooleani_v(target_t::value, index, data);
                __gl_check_error;
                
              }
          };

          struct  gl_get_frag_data_location  {
              inline static GLint call(GLuint program, const GLchar* name) {
                __gl_debug << "call glGetFragDataLocation (" << "program: '" << program << "'" << ", " << "name: '" << name << "'" << ")";
                GLint out = glGetFragDataLocation(program, name);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_integeri_v  {
              inline static void call(GLenum target, GLuint index, GLint* data) {
                __gl_debug << "call glGetIntegeri_v (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetIntegeri_v(target, index, data);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLint* data) {
                __gl_debug << "call glGetIntegeri_v (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetIntegeri_v(target_t::value, index, data);
                __gl_check_error;
                
              }
          };

          struct  gl_get_stringi  {
              inline static const GLubyte * call(GLenum name, GLuint index) {
                __gl_debug << "call glGetStringi (" << "name: '" << name << "'" << ", " << "index: '" << index << "'" << ")";
                const GLubyte * out = glGetStringi(name, index);
                __gl_check_error;
                return out;
              }
              template< typename name_t >
              inline static const GLubyte * call(GLuint index) {
                __gl_debug << "call glGetStringi (" << "name: '" << name_t::name::value << "'" << ", " << "index: '" << index << "'" << ")";
                const GLubyte * out = glGetStringi(name_t::value, index);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_get_tex_parameter_iiv  {
              inline static void call(GLenum target, GLenum pname, GLint* params) {
                __gl_debug << "call glGetTexParameterIiv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameterIiv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint* params) {
                __gl_debug << "call glGetTexParameterIiv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameterIiv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_tex_parameter_iuiv  {
              inline static void call(GLenum target, GLenum pname, GLuint* params) {
                __gl_debug << "call glGetTexParameterIuiv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameterIuiv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLuint* params) {
                __gl_debug << "call glGetTexParameterIuiv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetTexParameterIuiv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_transform_feedback_varying  {
              inline static void call(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name) {
                __gl_debug << "call glGetTransformFeedbackVarying (" << "program: '" << program << "'" << ", " << "index: '" << index << "'" << ", " << "bufSize: '" << bufSize << "'" << ", " << "length: '" << length << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type << "'" << ", " << "name: '" << name << "'" << ")";
                glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
                __gl_check_error;
                
              }
          };

          struct  gl_get_uniformuiv  {
              inline static void call(GLuint program, GLint location, GLuint* params) {
                __gl_debug << "call glGetUniformuiv (" << "program: '" << program << "'" << ", " << "location: '" << location << "'" << ", " << "params: '" << params << "'" << ")";
                glGetUniformuiv(program, location, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_vertex_attrib_iiv  {
              inline static void call(GLuint index, GLenum pname, GLint* params) {
                __gl_debug << "call glGetVertexAttribIiv (" << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribIiv(index, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLint* params) {
                __gl_debug << "call glGetVertexAttribIiv (" << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribIiv(index, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_vertex_attrib_iuiv  {
              inline static void call(GLuint index, GLenum pname, GLuint* params) {
                __gl_debug << "call glGetVertexAttribIuiv (" << "index: '" << index << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribIuiv(index, pname, params);
                __gl_check_error;
                
              }
              template< typename pname_t >
              inline static void call(GLuint index, GLuint* params) {
                __gl_debug << "call glGetVertexAttribIuiv (" << "index: '" << index << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetVertexAttribIuiv(index, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_is_enabledi  {
              inline static GLboolean call(GLenum target, GLuint index) {
                __gl_debug << "call glIsEnabledi (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ")";
                GLboolean out = glIsEnabledi(target, index);
                __gl_check_error;
                return out;
              }
              template< typename target_t >
              inline static GLboolean call(GLuint index) {
                __gl_debug << "call glIsEnabledi (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ")";
                GLboolean out = glIsEnabledi(target_t::value, index);
                __gl_check_error;
                return out;
              }
          };

          struct  gl_tex_parameter_iiv  {
              inline static void call(GLenum target, GLenum pname, const GLint* params) {
                __gl_debug << "call glTexParameterIiv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameterIiv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(const GLint* params) {
                __gl_debug << "call glTexParameterIiv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameterIiv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_parameter_iuiv  {
              inline static void call(GLenum target, GLenum pname, const GLuint* params) {
                __gl_debug << "call glTexParameterIuiv (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameterIuiv(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(const GLuint* params) {
                __gl_debug << "call glTexParameterIuiv (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glTexParameterIuiv(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_transform_feedback_varyings  {
              inline static void call(GLuint program, GLsizei count, const GLchar** varyings, GLenum bufferMode) {
                __gl_debug << "call glTransformFeedbackVaryings (" << "program: '" << program << "'" << ", " << "count: '" << count << "'" << ", " << "varyings: '" << varyings << "'" << ", " << "bufferMode: '" << bufferMode << "'" << ")";
                glTransformFeedbackVaryings(program, count, varyings, bufferMode);
                __gl_check_error;
                
              }
              template< typename bufferMode_t >
              inline static void call(GLuint program, GLsizei count, const GLchar** varyings) {
                __gl_debug << "call glTransformFeedbackVaryings (" << "program: '" << program << "'" << ", " << "count: '" << count << "'" << ", " << "varyings: '" << varyings << "'" << ", " << "bufferMode: '" << bufferMode_t::name::value << "'" << ")";
                glTransformFeedbackVaryings(program, count, varyings, bufferMode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_ui  {
              inline static void call(GLint location, GLuint v0) {
                __gl_debug << "call glUniform1ui (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ")";
                glUniform1ui(location, v0);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_1_uiv  {
              inline static void call(GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glUniform1uiv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform1uiv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_ui  {
              inline static void call(GLint location, GLuint v0, GLuint v1) {
                __gl_debug << "call glUniform2ui (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ")";
                glUniform2ui(location, v0, v1);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_2_uiv  {
              inline static void call(GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glUniform2uiv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform2uiv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_ui  {
              inline static void call(GLint location, GLuint v0, GLuint v1, GLuint v2) {
                __gl_debug << "call glUniform3ui (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ")";
                glUniform3ui(location, v0, v1, v2);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_3_uiv  {
              inline static void call(GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glUniform3uiv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform3uiv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_ui  {
              inline static void call(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3) {
                __gl_debug << "call glUniform4ui (" << "location: '" << location << "'" << ", " << "v0: '" << v0 << "'" << ", " << "v1: '" << v1 << "'" << ", " << "v2: '" << v2 << "'" << ", " << "v3: '" << v3 << "'" << ")";
                glUniform4ui(location, v0, v1, v2, v3);
                __gl_check_error;
                
              }
          };

          struct  gl_uniform_4_uiv  {
              inline static void call(GLint location, GLsizei count, const GLuint* value) {
                __gl_debug << "call glUniform4uiv (" << "location: '" << location << "'" << ", " << "count: '" << count << "'" << ", " << "value: '" << value << "'" << ")";
                glUniform4uiv(location, count, value);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_1_i  {
              inline static void call(GLuint index, GLint x) {
                __gl_debug << "call glVertexAttribI1i (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ")";
                glVertexAttribI1i(index, x);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_1_iv  {
              inline static void call(GLuint index, const GLint* v) {
                __gl_debug << "call glVertexAttribI1iv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI1iv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_1_ui  {
              inline static void call(GLuint index, GLuint x) {
                __gl_debug << "call glVertexAttribI1ui (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ")";
                glVertexAttribI1ui(index, x);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_1_uiv  {
              inline static void call(GLuint index, const GLuint* v) {
                __gl_debug << "call glVertexAttribI1uiv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI1uiv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_2_i  {
              inline static void call(GLuint index, GLint x, GLint y) {
                __gl_debug << "call glVertexAttribI2i (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ")";
                glVertexAttribI2i(index, x, y);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_2_iv  {
              inline static void call(GLuint index, const GLint* v) {
                __gl_debug << "call glVertexAttribI2iv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI2iv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_2_ui  {
              inline static void call(GLuint index, GLuint x, GLuint y) {
                __gl_debug << "call glVertexAttribI2ui (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ")";
                glVertexAttribI2ui(index, x, y);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_2_uiv  {
              inline static void call(GLuint index, const GLuint* v) {
                __gl_debug << "call glVertexAttribI2uiv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI2uiv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_3_i  {
              inline static void call(GLuint index, GLint x, GLint y, GLint z) {
                __gl_debug << "call glVertexAttribI3i (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ")";
                glVertexAttribI3i(index, x, y, z);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_3_iv  {
              inline static void call(GLuint index, const GLint* v) {
                __gl_debug << "call glVertexAttribI3iv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI3iv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_3_ui  {
              inline static void call(GLuint index, GLuint x, GLuint y, GLuint z) {
                __gl_debug << "call glVertexAttribI3ui (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ")";
                glVertexAttribI3ui(index, x, y, z);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_3_uiv  {
              inline static void call(GLuint index, const GLuint* v) {
                __gl_debug << "call glVertexAttribI3uiv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI3uiv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_bv  {
              inline static void call(GLuint index, const GLbyte* v) {
                __gl_debug << "call glVertexAttribI4bv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI4bv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_i  {
              inline static void call(GLuint index, GLint x, GLint y, GLint z, GLint w) {
                __gl_debug << "call glVertexAttribI4i (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glVertexAttribI4i(index, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_iv  {
              inline static void call(GLuint index, const GLint* v) {
                __gl_debug << "call glVertexAttribI4iv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI4iv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_sv  {
              inline static void call(GLuint index, const GLshort* v) {
                __gl_debug << "call glVertexAttribI4sv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI4sv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_ubv  {
              inline static void call(GLuint index, const GLubyte* v) {
                __gl_debug << "call glVertexAttribI4ubv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI4ubv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_ui  {
              inline static void call(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w) {
                __gl_debug << "call glVertexAttribI4ui (" << "index: '" << index << "'" << ", " << "x: '" << x << "'" << ", " << "y: '" << y << "'" << ", " << "z: '" << z << "'" << ", " << "w: '" << w << "'" << ")";
                glVertexAttribI4ui(index, x, y, z, w);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_uiv  {
              inline static void call(GLuint index, const GLuint* v) {
                __gl_debug << "call glVertexAttribI4uiv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI4uiv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_i_4_usv  {
              inline static void call(GLuint index, const GLushort* v) {
                __gl_debug << "call glVertexAttribI4usv (" << "index: '" << index << "'" << ", " << "v: '" << v << "'" << ")";
                glVertexAttribI4usv(index, v);
                __gl_check_error;
                
              }
          };

          struct  gl_vertex_attrib_ipointer  {
              inline static void call(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) {
                __gl_debug << "call glVertexAttribIPointer (" << "index: '" << index << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type << "'" << ", " << "stride: '" << stride << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glVertexAttribIPointer(index, size, type, stride, pointer);
                __gl_check_error;
                
              }
              template< typename type_t >
              inline static void call(GLuint index, GLint size, GLsizei stride, const GLvoid* pointer) {
                __gl_debug << "call glVertexAttribIPointer (" << "index: '" << index << "'" << ", " << "size: '" << size << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "stride: '" << stride << "'" << ", " << "pointer: '" << pointer << "'" << ")";
                glVertexAttribIPointer(index, size, type_t::value, stride, pointer);
                __gl_check_error;
                
              }
          };

using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_bind_framebuffer ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_bind_renderbuffer ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_blit_framebuffer ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_check_framebuffer_status ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_delete_framebuffers ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_delete_renderbuffers ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_framebuffer_renderbuffer ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_framebuffer_texture_1d ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_framebuffer_texture_2d ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_framebuffer_texture_3d ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_framebuffer_texture_layer ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_gen_framebuffers ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_gen_renderbuffers ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_generate_mipmap ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_get_framebuffer_attachment_parameteriv ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_get_renderbuffer_parameteriv ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_is_framebuffer ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_is_renderbuffer ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_renderbuffer_storage ;
using ::gtulu::internal::generated::arb::framebuffer_object::fnc:: gl_renderbuffer_storage_multisample ;
using ::gtulu::internal::generated::arb::map_buffer_range::fnc:: gl_flush_mapped_buffer_range ;
using ::gtulu::internal::generated::arb::map_buffer_range::fnc:: gl_map_buffer_range ;
using ::gtulu::internal::generated::arb::vertex_array_object::fnc:: gl_bind_vertex_array ;
using ::gtulu::internal::generated::arb::vertex_array_object::fnc:: gl_delete_vertex_arrays ;
using ::gtulu::internal::generated::arb::vertex_array_object::fnc:: gl_gen_vertex_arrays ;
using ::gtulu::internal::generated::arb::vertex_array_object::fnc:: gl_is_vertex_array ;
        } // namespace fnc
      } // namespace v3_0
      namespace v3_1 {
        namespace fnc {
          struct  gl_draw_arrays_instanced  {
              inline static void call(GLenum mode, GLint first, GLsizei count, GLsizei primcount) {
                __gl_debug << "call glDrawArraysInstanced (" << "mode: '" << mode << "'" << ", " << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glDrawArraysInstanced(mode, first, count, primcount);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(GLint first, GLsizei count, GLsizei primcount) {
                __gl_debug << "call glDrawArraysInstanced (" << "mode: '" << mode_t::name::value << "'" << ", " << "first: '" << first << "'" << ", " << "count: '" << count << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glDrawArraysInstanced(mode_t::value, first, count, primcount);
                __gl_check_error;
                
              }
          };

          struct  gl_draw_elements_instanced  {
              inline static void call(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount) {
                __gl_debug << "call glDrawElementsInstanced (" << "mode: '" << mode << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glDrawElementsInstanced(mode, count, type, indices, primcount);
                __gl_check_error;
                
              }
              template< typename mode_t, typename type_t >
              inline static void call(GLsizei count, const GLvoid* indices, GLsizei primcount) {
                __gl_debug << "call glDrawElementsInstanced (" << "mode: '" << mode_t::name::value << "'" << ", " << "count: '" << count << "'" << ", " << "type: '" << type_t::name::value << "'" << ", " << "indices: '" << indices << "'" << ", " << "primcount: '" << primcount << "'" << ")";
                glDrawElementsInstanced(mode_t::value, count, type_t::value, indices, primcount);
                __gl_check_error;
                
              }
          };

          struct  gl_primitive_restart_index  {
              inline static void call(GLuint index) {
                __gl_debug << "call glPrimitiveRestartIndex (" << "index: '" << index << "'" << ")";
                glPrimitiveRestartIndex(index);
                __gl_check_error;
                
              }
          };

          struct  gl_tex_buffer  {
              inline static void call(GLenum target, GLenum internalformat, GLuint buffer) {
                __gl_debug << "call glTexBuffer (" << "target: '" << target << "'" << ", " << "internalformat: '" << internalformat << "'" << ", " << "buffer: '" << buffer << "'" << ")";
                glTexBuffer(target, internalformat, buffer);
                __gl_check_error;
                
              }
              template< typename target_t, typename internalformat_t >
              inline static void call(GLuint buffer) {
                __gl_debug << "call glTexBuffer (" << "target: '" << target_t::name::value << "'" << ", " << "internalformat: '" << internalformat_t::name::value << "'" << ", " << "buffer: '" << buffer << "'" << ")";
                glTexBuffer(target_t::value, internalformat_t::value, buffer);
                __gl_check_error;
                
              }
          };

using ::gtulu::internal::generated::arb::copy_buffer::fnc:: gl_copy_buffer_sub_data ;
using ::gtulu::internal::generated::arb::uniform_buffer_object::fnc:: gl_get_active_uniform_block_name ;
using ::gtulu::internal::generated::arb::uniform_buffer_object::fnc:: gl_get_active_uniform_blockiv ;
using ::gtulu::internal::generated::arb::uniform_buffer_object::fnc:: gl_get_active_uniform_name ;
using ::gtulu::internal::generated::arb::uniform_buffer_object::fnc:: gl_get_active_uniformsiv ;
using ::gtulu::internal::generated::arb::uniform_buffer_object::fnc:: gl_get_uniform_block_index ;
using ::gtulu::internal::generated::arb::uniform_buffer_object::fnc:: gl_get_uniform_indices ;
using ::gtulu::internal::generated::arb::uniform_buffer_object::fnc:: gl_uniform_block_binding ;
        } // namespace fnc
      } // namespace v3_1
      namespace v3_2 {
        namespace fnc {
          struct  gl_framebuffer_texture  {
              inline static void call(GLenum target, GLenum attachment, GLuint texture, GLint level) {
                __gl_debug << "call glFramebufferTexture (" << "target: '" << target << "'" << ", " << "attachment: '" << attachment << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ")";
                glFramebufferTexture(target, attachment, texture, level);
                __gl_check_error;
                
              }
              template< typename target_t, typename attachment_t >
              inline static void call(GLuint texture, GLint level) {
                __gl_debug << "call glFramebufferTexture (" << "target: '" << target_t::name::value << "'" << ", " << "attachment: '" << attachment_t::name::value << "'" << ", " << "texture: '" << texture << "'" << ", " << "level: '" << level << "'" << ")";
                glFramebufferTexture(target_t::value, attachment_t::value, texture, level);
                __gl_check_error;
                
              }
          };

          struct  gl_get_buffer_parameteri_64_v  {
              inline static void call(GLenum target, GLenum pname, GLint64* params) {
                __gl_debug << "call glGetBufferParameteri64v (" << "target: '" << target << "'" << ", " << "pname: '" << pname << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBufferParameteri64v(target, pname, params);
                __gl_check_error;
                
              }
              template< typename target_t, typename pname_t >
              inline static void call(GLint64* params) {
                __gl_debug << "call glGetBufferParameteri64v (" << "target: '" << target_t::name::value << "'" << ", " << "pname: '" << pname_t::name::value << "'" << ", " << "params: '" << params << "'" << ")";
                glGetBufferParameteri64v(target_t::value, pname_t::value, params);
                __gl_check_error;
                
              }
          };

          struct  gl_get_integer_64_i_v  {
              inline static void call(GLenum target, GLuint index, GLint64* data) {
                __gl_debug << "call glGetInteger64i_v (" << "target: '" << target << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetInteger64i_v(target, index, data);
                __gl_check_error;
                
              }
              template< typename target_t >
              inline static void call(GLuint index, GLint64* data) {
                __gl_debug << "call glGetInteger64i_v (" << "target: '" << target_t::name::value << "'" << ", " << "index: '" << index << "'" << ", " << "data: '" << data << "'" << ")";
                glGetInteger64i_v(target_t::value, index, data);
                __gl_check_error;
                
              }
          };

using ::gtulu::internal::generated::arb::draw_elements_base_vertex::fnc:: gl_draw_elements_base_vertex ;
using ::gtulu::internal::generated::arb::draw_elements_base_vertex::fnc:: gl_draw_elements_instanced_base_vertex ;
using ::gtulu::internal::generated::arb::draw_elements_base_vertex::fnc:: gl_draw_range_elements_base_vertex ;
using ::gtulu::internal::generated::arb::draw_elements_base_vertex::fnc:: gl_multi_draw_elements_base_vertex ;
using ::gtulu::internal::generated::arb::provoking_vertex::fnc:: gl_provoking_vertex ;
using ::gtulu::internal::generated::arb::sync::fnc:: gl_client_wait_sync ;
using ::gtulu::internal::generated::arb::sync::fnc:: gl_delete_sync ;
using ::gtulu::internal::generated::arb::sync::fnc:: gl_fence_sync ;
using ::gtulu::internal::generated::arb::sync::fnc:: gl_get_integer_64_v ;
using ::gtulu::internal::generated::arb::sync::fnc:: gl_get_synciv ;
using ::gtulu::internal::generated::arb::sync::fnc:: gl_is_sync ;
using ::gtulu::internal::generated::arb::sync::fnc:: gl_wait_sync ;
using ::gtulu::internal::generated::arb::texture_multisample::fnc:: gl_get_multisamplefv ;
using ::gtulu::internal::generated::arb::texture_multisample::fnc:: gl_sample_maski ;
using ::gtulu::internal::generated::arb::texture_multisample::fnc:: gl_tex_image_2d_multisample ;
using ::gtulu::internal::generated::arb::texture_multisample::fnc:: gl_tex_image_3d_multisample ;
        } // namespace fnc
      } // namespace v3_2
      namespace v3_3 {
        namespace fnc {
          struct  gl_vertex_attrib_divisor  {
              inline static void call(GLuint index, GLuint divisor) {
                __gl_debug << "call glVertexAttribDivisor (" << "index: '" << index << "'" << ", " << "divisor: '" << divisor << "'" << ")";
                glVertexAttribDivisor(index, divisor);
                __gl_check_error;
                
              }
          };

using ::gtulu::internal::generated::arb::blend_func_extended::fnc:: gl_bind_frag_data_location_indexed ;
using ::gtulu::internal::generated::arb::blend_func_extended::fnc:: gl_get_frag_data_index ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_bind_sampler ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_delete_samplers ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_gen_samplers ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_get_sampler_parameter_iiv ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_get_sampler_parameter_iuiv ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_get_sampler_parameterfv ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_get_sampler_parameteriv ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_is_sampler ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_sampler_parameter_iiv ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_sampler_parameter_iuiv ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_sampler_parameterf ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_sampler_parameterfv ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_sampler_parameteri ;
using ::gtulu::internal::generated::arb::sampler_objects::fnc:: gl_sampler_parameteriv ;
using ::gtulu::internal::generated::arb::timer_query::fnc:: gl_get_query_objecti_64_v ;
using ::gtulu::internal::generated::arb::timer_query::fnc:: gl_get_query_objectui_64_v ;
using ::gtulu::internal::generated::arb::timer_query::fnc:: gl_query_counter ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_color_p_3_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_color_p_3_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_color_p_4_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_color_p_4_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_1_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_1_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_2_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_2_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_3_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_3_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_4_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_multi_tex_coord_p_4_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_normal_p_3_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_normal_p_3_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_secondary_color_p_3_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_secondary_color_p_3_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_1_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_1_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_2_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_2_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_3_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_3_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_4_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_tex_coord_p_4_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_1_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_1_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_2_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_2_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_3_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_3_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_4_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_attrib_p_4_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_p_2_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_p_2_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_p_3_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_p_3_uiv ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_p_4_ui ;
using ::gtulu::internal::generated::arb::vertex_type_2_10_10_10_rev::fnc:: gl_vertex_p_4_uiv ;
        } // namespace fnc
      } // namespace v3_3
      namespace v4_0 {
        namespace fnc {
          struct  gl_blend_equation_separatei  {
              inline static void call(GLuint buf, GLenum modeRGB, GLenum modeAlpha) {
                __gl_debug << "call glBlendEquationSeparatei (" << "buf: '" << buf << "'" << ", " << "modeRGB: '" << modeRGB << "'" << ", " << "modeAlpha: '" << modeAlpha << "'" << ")";
                glBlendEquationSeparatei(buf, modeRGB, modeAlpha);
                __gl_check_error;
                
              }
              template< typename modeRGB_t, typename modeAlpha_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendEquationSeparatei (" << "buf: '" << buf << "'" << ", " << "modeRGB: '" << modeRGB_t::name::value << "'" << ", " << "modeAlpha: '" << modeAlpha_t::name::value << "'" << ")";
                glBlendEquationSeparatei(buf, modeRGB_t::value, modeAlpha_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_equationi  {
              inline static void call(GLuint buf, GLenum mode) {
                __gl_debug << "call glBlendEquationi (" << "buf: '" << buf << "'" << ", " << "mode: '" << mode << "'" << ")";
                glBlendEquationi(buf, mode);
                __gl_check_error;
                
              }
              template< typename mode_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendEquationi (" << "buf: '" << buf << "'" << ", " << "mode: '" << mode_t::name::value << "'" << ")";
                glBlendEquationi(buf, mode_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_func_separatei  {
              inline static void call(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
                __gl_debug << "call glBlendFuncSeparatei (" << "buf: '" << buf << "'" << ", " << "srcRGB: '" << srcRGB << "'" << ", " << "dstRGB: '" << dstRGB << "'" << ", " << "srcAlpha: '" << srcAlpha << "'" << ", " << "dstAlpha: '" << dstAlpha << "'" << ")";
                glBlendFuncSeparatei(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
                __gl_check_error;
                
              }
              template< typename srcRGB_t, typename dstRGB_t, typename srcAlpha_t, typename dstAlpha_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendFuncSeparatei (" << "buf: '" << buf << "'" << ", " << "srcRGB: '" << srcRGB_t::name::value << "'" << ", " << "dstRGB: '" << dstRGB_t::name::value << "'" << ", " << "srcAlpha: '" << srcAlpha_t::name::value << "'" << ", " << "dstAlpha: '" << dstAlpha_t::name::value << "'" << ")";
                glBlendFuncSeparatei(buf, srcRGB_t::value, dstRGB_t::value, srcAlpha_t::value, dstAlpha_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_blend_funci  {
              inline static void call(GLuint buf, GLenum src, GLenum dst) {
                __gl_debug << "call glBlendFunci (" << "buf: '" << buf << "'" << ", " << "src: '" << src << "'" << ", " << "dst: '" << dst << "'" << ")";
                glBlendFunci(buf, src, dst);
                __gl_check_error;
                
              }
              template< typename src_t, typename dst_t >
              inline static void call(GLuint buf) {
                __gl_debug << "call glBlendFunci (" << "buf: '" << buf << "'" << ", " << "src: '" << src_t::name::value << "'" << ", " << "dst: '" << dst_t::name::value << "'" << ")";
                glBlendFunci(buf, src_t::value, dst_t::value);
                __gl_check_error;
                
              }
          };

          struct  gl_min_sample_shading  {
              inline static void call(GLclampf value) {
                __gl_debug << "call glMinSampleShading (" << "value: '" << value << "'" << ")";
                glMinSampleShading(value);
                __gl_check_error;
                
              }
          };

using ::gtulu::internal::generated::arb::draw_indirect::fnc:: gl_draw_arrays_indirect ;
using ::gtulu::internal::generated::arb::draw_indirect::fnc:: gl_draw_elements_indirect ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_get_uniformdv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_1_d ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_1_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_2_d ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_2_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_3_d ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_3_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_4_d ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_4_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_2_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_2x3_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_2x4_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_3_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_3x2_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_3x4_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_4_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_4x2_dv ;
using ::gtulu::internal::generated::arb::gpu_shader_fp64::fnc:: gl_uniform_matrix_4x3_dv ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_get_active_subroutine_name ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_get_active_subroutine_uniform_name ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_get_active_subroutine_uniformiv ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_get_program_stageiv ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_get_subroutine_index ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_get_subroutine_uniform_location ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_get_uniform_subroutineuiv ;
using ::gtulu::internal::generated::arb::shader_subroutine::fnc:: gl_uniform_subroutinesuiv ;
using ::gtulu::internal::generated::arb::tessellation_shader::fnc:: gl_patch_parameterfv ;
using ::gtulu::internal::generated::arb::tessellation_shader::fnc:: gl_patch_parameteri ;
using ::gtulu::internal::generated::arb::transform_feedback2::fnc:: gl_bind_transform_feedback ;
using ::gtulu::internal::generated::arb::transform_feedback2::fnc:: gl_delete_transform_feedbacks ;
using ::gtulu::internal::generated::arb::transform_feedback2::fnc:: gl_draw_transform_feedback ;
using ::gtulu::internal::generated::arb::transform_feedback2::fnc:: gl_gen_transform_feedbacks ;
using ::gtulu::internal::generated::arb::transform_feedback2::fnc:: gl_is_transform_feedback ;
using ::gtulu::internal::generated::arb::transform_feedback2::fnc:: gl_pause_transform_feedback ;
using ::gtulu::internal::generated::arb::transform_feedback2::fnc:: gl_resume_transform_feedback ;
using ::gtulu::internal::generated::arb::transform_feedback3::fnc:: gl_begin_query_indexed ;
using ::gtulu::internal::generated::arb::transform_feedback3::fnc:: gl_draw_transform_feedback_stream ;
using ::gtulu::internal::generated::arb::transform_feedback3::fnc:: gl_end_query_indexed ;
using ::gtulu::internal::generated::arb::transform_feedback3::fnc:: gl_get_query_indexediv ;
        } // namespace fnc
      } // namespace v4_0
      namespace v4_1 {
        namespace fnc {
using ::gtulu::internal::generated::arb::es2_compatibility::fnc:: gl_clear_depthf ;
using ::gtulu::internal::generated::arb::es2_compatibility::fnc:: gl_depth_rangef ;
using ::gtulu::internal::generated::arb::es2_compatibility::fnc:: gl_get_shader_precision_format ;
using ::gtulu::internal::generated::arb::es2_compatibility::fnc:: gl_release_shader_compiler ;
using ::gtulu::internal::generated::arb::es2_compatibility::fnc:: gl_shader_binary ;
using ::gtulu::internal::generated::arb::get_program_binary::fnc:: gl_get_program_binary ;
using ::gtulu::internal::generated::arb::get_program_binary::fnc:: gl_program_binary ;
using ::gtulu::internal::generated::arb::get_program_binary::fnc:: gl_program_parameteri ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_active_shader_program ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_bind_program_pipeline ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_create_shader_programv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_delete_program_pipelines ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_gen_program_pipelines ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_get_program_pipeline_info_log ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_get_program_pipelineiv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_is_program_pipeline ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_d ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_f ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_i ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_iv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_ui ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_1_uiv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_d ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_f ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_i ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_iv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_ui ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_2_uiv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_d ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_f ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_i ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_iv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_ui ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_3_uiv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_d ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_f ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_i ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_iv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_ui ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_4_uiv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_2_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_2_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_2x3_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_2x3_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_2x4_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_2x4_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_3_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_3_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_3x2_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_3x2_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_3x4_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_3x4_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_4_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_4_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_4x2_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_4x2_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_4x3_dv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_program_uniform_matrix_4x3_fv ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_use_program_stages ;
using ::gtulu::internal::generated::arb::separate_shader_objects::fnc:: gl_validate_program_pipeline ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_get_vertex_attrib_ldv ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_1_d ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_1_dv ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_2_d ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_2_dv ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_3_d ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_3_dv ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_4_d ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_l_4_dv ;
using ::gtulu::internal::generated::arb::vertex_attrib_64bit::fnc:: gl_vertex_attrib_lpointer ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_depth_range_arrayv ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_depth_range_indexed ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_get_doublei_v ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_get_floati_v ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_scissor_arrayv ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_scissor_indexed ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_scissor_indexedv ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_viewport_arrayv ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_viewport_indexedf ;
using ::gtulu::internal::generated::arb::viewport_array::fnc:: gl_viewport_indexedfv ;
        } // namespace fnc
      } // namespace v4_1
      } // namespace gl

    } // namespace generated
    
  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_GENERATED_FUNCTIONS_HPP_ */


