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

#ifndef IN_GTULU_INTERNAL_FUNCTIONS_FWD_HPP_
# ifndef IN_GTULU_INTERNAL_FUNCTIONS_HPP_
#  error "gtulu/internal/generated/functions_fwd.hpp should not be included directly, please include gtulu/internal/functions_fwd.hpp instead."
# endif /* IN_GTULU_INTERNAL_FUNCTIONS_HPP_ */
#endif /* IN_GTULU_INTERNAL_FUNCTIONS_FWD_HPP_ */

#ifndef GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_
#define GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_

#include "gtulu/namespaces.hpp"

namespace gtulu {
  namespace internal {
  
    namespace generated {

      namespace gl {
        namespace v1_0 {
          namespace function {
            struct gl_blend_func;
            struct gl_clear;
            struct gl_clear_color;
            struct gl_clear_depth;
            struct gl_clear_stencil;
            struct gl_color_mask;
            struct gl_cull_face;
            struct gl_depth_func;
            struct gl_depth_mask;
            struct gl_depth_range;
            struct gl_disable;
            struct gl_draw_buffer;
            struct gl_enable;
            struct gl_finish;
            struct gl_flush;
            struct gl_front_face;
            struct gl_get_boolean;
            struct gl_get_double;
            struct gl_get_error;
            struct gl_get_float;
            struct gl_get_integer;
            struct gl_get_string;
            struct gl_get_tex_image;
            struct gl_get_tex_level_parameter;
            struct gl_get_tex_parameter;
            struct gl_hint;
            struct gl_is_enabled;
            struct gl_line_width;
            struct gl_logic_op;
            struct gl_pixel_store;
            struct gl_point_size;
            struct gl_polygon_mode;
            struct gl_read_buffer;
            struct gl_read_pixels;
            struct gl_scissor;
            struct gl_stencil_func;
            struct gl_stencil_mask;
            struct gl_stencil_op;
            struct gl_tex_image_1d;
            struct gl_tex_image_2d;
            struct gl_tex_parameter;
            struct gl_viewport;
          } // namespace function
        } // namespace v1_0
        namespace v1_1 {
          namespace function {
            struct gl_bind_texture;
            struct gl_copy_tex_image_1d;
            struct gl_copy_tex_image_2d;
            struct gl_copy_tex_sub_image_1d;
            struct gl_copy_tex_sub_image_2d;
            struct gl_delete_textures;
            struct gl_draw_arrays;
            struct gl_draw_elements;
            struct gl_gen_textures;
            struct gl_get_pointer;
            struct gl_is_texture;
            struct gl_polygon_offset;
            struct gl_tex_sub_image_1d;
            struct gl_tex_sub_image_2d;
          } // namespace function
        } // namespace v1_1
        namespace v1_2 {
          namespace function {
            struct gl_blend_color;
            struct gl_blend_equation;
            struct gl_copy_tex_sub_image_3d;
            struct gl_draw_range_elements;
            struct gl_tex_image_3d;
            struct gl_tex_sub_image_3d;
          } // namespace function
        } // namespace v1_2
        namespace v1_3 {
          namespace function {
            struct gl_active_texture;
            struct gl_compressed_tex_image_1d;
            struct gl_compressed_tex_image_2d;
            struct gl_compressed_tex_image_3d;
            struct gl_compressed_tex_sub_image_1d;
            struct gl_compressed_tex_sub_image_2d;
            struct gl_compressed_tex_sub_image_3d;
            struct gl_get_compressed_tex_image;
            struct gl_sample_coverage;
          } // namespace function
        } // namespace v1_3
        namespace v1_4 {
          namespace function {
            struct gl_blend_func_separate;
            struct gl_multi_draw_arrays;
            struct gl_multi_draw_elements;
            struct gl_point_parameter;
          } // namespace function
        } // namespace v1_4
        namespace v1_5 {
          namespace function {
            struct gl_begin_query;
            struct gl_bind_buffer;
            struct gl_buffer_data;
            struct gl_buffer_sub_data;
            struct gl_delete_buffers;
            struct gl_delete_queries;
            struct gl_end_query;
            struct gl_gen_buffers;
            struct gl_gen_queries;
            struct gl_get_buffer_parameter;
            struct gl_get_buffer_pointer;
            struct gl_get_buffer_sub_data;
            struct gl_get_query;
            struct gl_get_query_object;
            struct gl_is_buffer;
            struct gl_is_query;
            struct gl_map_buffer;
            struct gl_unmap_buffer;
          } // namespace function
        } // namespace v1_5
        namespace v2_0 {
          namespace function {
            struct gl_attach_shader;
            struct gl_bind_attrib_location;
            struct gl_blend_equation_separate;
            struct gl_compile_shader;
            struct gl_create_program;
            struct gl_create_shader;
            struct gl_delete_program;
            struct gl_delete_shader;
            struct gl_detach_shader;
            struct gl_disable_vertex_attrib_array;
            struct gl_draw_buffers;
            struct gl_enable_vertex_attrib_array;
            struct gl_get_active_attrib;
            struct gl_get_active_uniform;
            struct gl_get_attached_shaders;
            struct gl_get_attrib_location;
            struct gl_get_program;
            struct gl_get_program_info_log;
            struct gl_get_shader;
            struct gl_get_shader_info_log;
            struct gl_get_shader_source;
            struct gl_get_uniform;
            struct gl_get_uniform_location;
            struct gl_get_vertex_attrib;
            struct gl_get_vertex_attrib_pointer;
            struct gl_is_program;
            struct gl_is_shader;
            struct gl_link_program;
            struct gl_shader_source;
            struct gl_stencil_func_separate;
            struct gl_stencil_mask_separate;
            struct gl_stencil_op_separate;
            struct gl_uniform_1;
            struct gl_uniform_2;
            struct gl_uniform_3;
            struct gl_uniform_4;
            struct gl_uniform_matrix_2;
            struct gl_uniform_matrix_3;
            struct gl_uniform_matrix_4;
            struct gl_use_program;
            struct gl_validate_program;
            struct gl_vertex_attrib_1;
            struct gl_vertex_attrib_2;
            struct gl_vertex_attrib_3;
            struct gl_vertex_attrib_4;
            struct gl_vertex_attrib_4_normalized;
            struct gl_vertex_attrib_pointer;
          } // namespace function
        } // namespace v2_0
        namespace v2_1 {
          namespace function {
            struct gl_uniform_matrix_2x3;
            struct gl_uniform_matrix_2x4;
            struct gl_uniform_matrix_3x2;
            struct gl_uniform_matrix_3x4;
            struct gl_uniform_matrix_4x2;
            struct gl_uniform_matrix_4x3;
          } // namespace function
        } // namespace v2_1
        namespace v3_0 {
          namespace function {
            struct gl_begin_conditional_render;
            struct gl_begin_transform_feedback;
            struct gl_bind_buffer_base;
            struct gl_bind_buffer_range;
            struct gl_bind_frag_data_location;
            struct gl_clamp_color;
            struct gl_clear_buffer;
            struct gl_clear_buffer_float;
            struct gl_color_mask;
            struct gl_disable;
            struct gl_enable;
            struct gl_end_conditional_render;
            struct gl_end_transform_feedback;
            struct gl_get_boolean_indexed;
            struct gl_get_frag_data_location;
            struct gl_get_integer_indexed;
            struct gl_get_string;
            struct gl_get_tex_parameter_integer;
            struct gl_get_transform_feedback_varying;
            struct gl_get_uniform;
            struct gl_get_vertex_attrib_integer;
            struct gl_is_enabled;
            struct gl_tex_parameter_integer;
            struct gl_transform_feedback_varyings;
            struct gl_uniform_1;
            struct gl_uniform_2;
            struct gl_uniform_3;
            struct gl_uniform_4;
            struct gl_vertex_attrib_1_integer;
            struct gl_vertex_attrib_2_integer;
            struct gl_vertex_attrib_3_integer;
            struct gl_vertex_attrib_4_integer;
            struct gl_vertex_attrib_pointer_integer;
          } // namespace function
        } // namespace v3_0
        namespace v3_1 {
          namespace function {
            struct gl_draw_arrays_instanced;
            struct gl_draw_elements_instanced;
            struct gl_primitive_restart_index;
            struct gl_tex_buffer;
          } // namespace function
        } // namespace v3_1
        namespace v3_2 {
          namespace function {
            struct gl_framebuffer_texture;
            struct gl_get_buffer_parameter;
            struct gl_get_integer_indexed;
          } // namespace function
        } // namespace v3_2
        namespace v3_3 {
          namespace function {
            struct gl_vertex_attrib_divisor;
          } // namespace function
        } // namespace v3_3
        namespace v4_0 {
          namespace function {
            struct gl_blend_equation;
            struct gl_blend_equation_separate;
            struct gl_blend_func;
            struct gl_blend_func_separate;
            struct gl_min_sample_shading;
          } // namespace function
        } // namespace v4_0
        namespace v4_1 {
          namespace function {
          } // namespace function
        } // namespace v4_1
        namespace v4_2 {
          namespace function {
          } // namespace function
        } // namespace v4_2
      } // namespace gl
      namespace arb {
        namespace es2_compatibility {
          namespace function {
            struct gl_clear_depth;
            struct gl_depth_range;
            struct gl_get_shader_precision_format;
            struct gl_release_shader_compiler;
            struct gl_shader_binary;
          } // namespace function
        } // namespace es2_compatibility
        namespace base_instance {
          namespace function {
            struct gl_draw_arrays_instanced_base_instance;
            struct gl_draw_elements_instanced_base_instance;
            struct gl_draw_elements_instanced_base_vertex_base_instance;
          } // namespace function
        } // namespace base_instance
        namespace blend_func_extended {
          namespace function {
            struct gl_bind_frag_data_location_indexed;
            struct gl_get_frag_data_index;
          } // namespace function
        } // namespace blend_func_extended
        namespace cl_event {
          namespace function {
            struct gl_create_sync_from_clevent;
          } // namespace function
        } // namespace cl_event
        namespace compressed_texture_pixel_storage {
          namespace function {
          } // namespace function
        } // namespace compressed_texture_pixel_storage
        namespace conservative_depth {
          namespace function {
          } // namespace function
        } // namespace conservative_depth
        namespace copy_buffer {
          namespace function {
            struct gl_copy_buffer_sub_data;
          } // namespace function
        } // namespace copy_buffer
        namespace debug_output {
          namespace function {
            struct gl_debug_message_callback;
            struct gl_debug_message_control;
            struct gl_debug_message_insert;
            struct gl_get_debug_message_log;
          } // namespace function
        } // namespace debug_output
        namespace depth_buffer_float {
          namespace function {
          } // namespace function
        } // namespace depth_buffer_float
        namespace depth_clamp {
          namespace function {
          } // namespace function
        } // namespace depth_clamp
        namespace draw_buffers_blend {
          namespace function {
            struct gl_blend_equation;
            struct gl_blend_equation_separate;
            struct gl_blend_func;
            struct gl_blend_func_separate;
          } // namespace function
        } // namespace draw_buffers_blend
        namespace draw_elements_base_vertex {
          namespace function {
            struct gl_draw_elements_base_vertex;
            struct gl_draw_elements_instanced_base_vertex;
            struct gl_draw_range_elements_base_vertex;
            struct gl_multi_draw_elements_base_vertex;
          } // namespace function
        } // namespace draw_elements_base_vertex
        namespace draw_indirect {
          namespace function {
            struct gl_draw_arrays_indirect;
            struct gl_draw_elements_indirect;
          } // namespace function
        } // namespace draw_indirect
        namespace explicit_attrib_location {
          namespace function {
          } // namespace function
        } // namespace explicit_attrib_location
        namespace fragment_coord_conventions {
          namespace function {
          } // namespace function
        } // namespace fragment_coord_conventions
        namespace framebuffer_object {
          namespace function {
            struct gl_bind_framebuffer;
            struct gl_bind_renderbuffer;
            struct gl_blit_framebuffer;
            struct gl_check_framebuffer_status;
            struct gl_delete_framebuffers;
            struct gl_delete_renderbuffers;
            struct gl_framebuffer_renderbuffer;
            struct gl_framebuffer_texture_1d;
            struct gl_framebuffer_texture_2d;
            struct gl_framebuffer_texture_3d;
            struct gl_framebuffer_texture_layer;
            struct gl_gen_framebuffers;
            struct gl_gen_renderbuffers;
            struct gl_generate_mipmap;
            struct gl_get_framebuffer_attachment_parameter;
            struct gl_get_renderbuffer_parameter;
            struct gl_is_framebuffer;
            struct gl_is_renderbuffer;
            struct gl_renderbuffer_storage;
            struct gl_renderbuffer_storage_multisample;
          } // namespace function
        } // namespace framebuffer_object
        namespace framebuffer_srgb {
          namespace function {
          } // namespace function
        } // namespace framebuffer_srgb
        namespace get_program_binary {
          namespace function {
            struct gl_get_program_binary;
            struct gl_program_binary;
            struct gl_program_parameter;
          } // namespace function
        } // namespace get_program_binary
        namespace gpu_shader5 {
          namespace function {
          } // namespace function
        } // namespace gpu_shader5
        namespace gpu_shader_fp64 {
          namespace function {
            struct gl_get_uniform;
            struct gl_uniform_1;
            struct gl_uniform_2;
            struct gl_uniform_3;
            struct gl_uniform_4;
            struct gl_uniform_matrix_2;
            struct gl_uniform_matrix_2x3;
            struct gl_uniform_matrix_2x4;
            struct gl_uniform_matrix_3;
            struct gl_uniform_matrix_3x2;
            struct gl_uniform_matrix_3x4;
            struct gl_uniform_matrix_4;
            struct gl_uniform_matrix_4x2;
            struct gl_uniform_matrix_4x3;
          } // namespace function
        } // namespace gpu_shader_fp64
        namespace half_float_pixel {
          namespace function {
          } // namespace function
        } // namespace half_float_pixel
        namespace half_float_vertex {
          namespace function {
          } // namespace function
        } // namespace half_float_vertex
        namespace imaging {
          namespace function {
          } // namespace function
        } // namespace imaging
        namespace internalformat_query {
          namespace function {
            struct gl_get_internalformat;
          } // namespace function
        } // namespace internalformat_query
        namespace map_buffer_alignment {
          namespace function {
          } // namespace function
        } // namespace map_buffer_alignment
        namespace map_buffer_range {
          namespace function {
            struct gl_flush_mapped_buffer_range;
            struct gl_map_buffer_range;
          } // namespace function
        } // namespace map_buffer_range
        namespace occlusion_query2 {
          namespace function {
          } // namespace function
        } // namespace occlusion_query2
        namespace provoking_vertex {
          namespace function {
            struct gl_provoking_vertex;
          } // namespace function
        } // namespace provoking_vertex
        namespace robustness {
          namespace function {
            struct gl_get_graphics_reset_status;
            struct gl_get_n_color_table;
            struct gl_get_n_compressed_tex_image;
            struct gl_get_n_convolution_filter;
            struct gl_get_n_histogram;
            struct gl_get_n_map;
            struct gl_get_n_minmax;
            struct gl_get_n_pixel_map;
            struct gl_get_n_polygon_stipple;
            struct gl_get_n_separable_filter;
            struct gl_get_n_tex_image;
            struct gl_get_n_uniform;
            struct gl_read_n_pixels;
          } // namespace function
        } // namespace robustness
        namespace sample_shading {
          namespace function {
            struct gl_min_sample_shading;
          } // namespace function
        } // namespace sample_shading
        namespace sampler_objects {
          namespace function {
            struct gl_bind_sampler;
            struct gl_delete_samplers;
            struct gl_gen_samplers;
            struct gl_get_sampler_parameter;
            struct gl_get_sampler_parameter_integer;
            struct gl_is_sampler;
            struct gl_sampler_parameter;
            struct gl_sampler_parameter_integer;
          } // namespace function
        } // namespace sampler_objects
        namespace seamless_cube_map {
          namespace function {
          } // namespace function
        } // namespace seamless_cube_map
        namespace separate_shader_objects {
          namespace function {
            struct gl_active_shader_program;
            struct gl_bind_program_pipeline;
            struct gl_create_shader_program;
            struct gl_delete_program_pipelines;
            struct gl_gen_program_pipelines;
            struct gl_get_program_pipeline;
            struct gl_get_program_pipeline_info_log;
            struct gl_is_program_pipeline;
            struct gl_program_uniform_1;
            struct gl_program_uniform_2;
            struct gl_program_uniform_3;
            struct gl_program_uniform_4;
            struct gl_program_uniform_matrix_2;
            struct gl_program_uniform_matrix_2x3;
            struct gl_program_uniform_matrix_2x4;
            struct gl_program_uniform_matrix_3;
            struct gl_program_uniform_matrix_3x2;
            struct gl_program_uniform_matrix_3x4;
            struct gl_program_uniform_matrix_4;
            struct gl_program_uniform_matrix_4x2;
            struct gl_program_uniform_matrix_4x3;
            struct gl_use_program_stages;
            struct gl_validate_program_pipeline;
          } // namespace function
        } // namespace separate_shader_objects
        namespace shader_atomic_counters {
          namespace function {
            struct gl_get_active_atomic_counter_buffer;
          } // namespace function
        } // namespace shader_atomic_counters
        namespace shader_bit_encoding {
          namespace function {
          } // namespace function
        } // namespace shader_bit_encoding
        namespace shader_image_load_store {
          namespace function {
            struct gl_bind_image_texture;
            struct gl_memory_barrier;
          } // namespace function
        } // namespace shader_image_load_store
        namespace shader_objects {
          namespace function {
          } // namespace function
        } // namespace shader_objects
        namespace shader_precision {
          namespace function {
          } // namespace function
        } // namespace shader_precision
        namespace shader_stencil_export {
          namespace function {
          } // namespace function
        } // namespace shader_stencil_export
        namespace shader_subroutine {
          namespace function {
            struct gl_get_active_subroutine_name;
            struct gl_get_active_subroutine_uniform;
            struct gl_get_active_subroutine_uniform_name;
            struct gl_get_program_stage;
            struct gl_get_subroutine_index;
            struct gl_get_subroutine_uniform_location;
            struct gl_get_uniform_subroutine;
            struct gl_uniform_subroutines;
          } // namespace function
        } // namespace shader_subroutine
        namespace shading_language_420pack {
          namespace function {
          } // namespace function
        } // namespace shading_language_420pack
        namespace shading_language_include {
          namespace function {
            struct gl_compile_shader_include;
            struct gl_delete_named_string;
            struct gl_get_named_string;
            struct gl_is_named_string;
            struct gl_named_string;
          } // namespace function
        } // namespace shading_language_include
        namespace shading_language_packing {
          namespace function {
          } // namespace function
        } // namespace shading_language_packing
        namespace sync {
          namespace function {
            struct gl_client_wait_sync;
            struct gl_delete_sync;
            struct gl_fence_sync;
            struct gl_get_integer;
            struct gl_get_sync;
            struct gl_is_sync;
            struct gl_wait_sync;
          } // namespace function
        } // namespace sync
        namespace tessellation_shader {
          namespace function {
            struct gl_patch_parameter;
          } // namespace function
        } // namespace tessellation_shader
        namespace texture_buffer_object_rgb32 {
          namespace function {
          } // namespace function
        } // namespace texture_buffer_object_rgb32
        namespace texture_compression_bptc {
          namespace function {
          } // namespace function
        } // namespace texture_compression_bptc
        namespace texture_compression_rgtc {
          namespace function {
          } // namespace function
        } // namespace texture_compression_rgtc
        namespace texture_cube_map_array {
          namespace function {
          } // namespace function
        } // namespace texture_cube_map_array
        namespace texture_gather {
          namespace function {
          } // namespace function
        } // namespace texture_gather
        namespace texture_multisample {
          namespace function {
            struct gl_get_multisample;
            struct gl_sample_mask;
            struct gl_tex_image_2d_multisample;
            struct gl_tex_image_3d_multisample;
          } // namespace function
        } // namespace texture_multisample
        namespace texture_query_lod {
          namespace function {
          } // namespace function
        } // namespace texture_query_lod
        namespace texture_rg {
          namespace function {
          } // namespace function
        } // namespace texture_rg
        namespace texture_rgb10_a2ui {
          namespace function {
          } // namespace function
        } // namespace texture_rgb10_a2ui
        namespace texture_storage {
          namespace function {
            struct gl_tex_storage_1d;
            struct gl_tex_storage_2d;
            struct gl_tex_storage_3d;
            struct gl_texture_storage_1d;
            struct gl_texture_storage_2d;
            struct gl_texture_storage_3d;
          } // namespace function
        } // namespace texture_storage
        namespace texture_swizzle {
          namespace function {
          } // namespace function
        } // namespace texture_swizzle
        namespace timer_query {
          namespace function {
            struct gl_get_query_object;
            struct gl_query_counter;
          } // namespace function
        } // namespace timer_query
        namespace transform_feedback2 {
          namespace function {
            struct gl_bind_transform_feedback;
            struct gl_delete_transform_feedbacks;
            struct gl_draw_transform_feedback;
            struct gl_gen_transform_feedbacks;
            struct gl_is_transform_feedback;
            struct gl_pause_transform_feedback;
            struct gl_resume_transform_feedback;
          } // namespace function
        } // namespace transform_feedback2
        namespace transform_feedback3 {
          namespace function {
            struct gl_begin_query_indexed;
            struct gl_draw_transform_feedback_stream;
            struct gl_end_query_indexed;
            struct gl_get_query_indexed;
          } // namespace function
        } // namespace transform_feedback3
        namespace transform_feedback_instanced {
          namespace function {
            struct gl_draw_transform_feedback_instanced;
            struct gl_draw_transform_feedback_stream_instanced;
          } // namespace function
        } // namespace transform_feedback_instanced
        namespace uniform_buffer_object {
          namespace function {
            struct gl_get_active_uniform_block;
            struct gl_get_active_uniform_block_name;
            struct gl_get_active_uniform_name;
            struct gl_get_active_uniforms;
            struct gl_get_uniform_block_index;
            struct gl_get_uniform_indices;
            struct gl_uniform_block_binding;
          } // namespace function
        } // namespace uniform_buffer_object
        namespace vertex_array_bgra {
          namespace function {
          } // namespace function
        } // namespace vertex_array_bgra
        namespace vertex_array_object {
          namespace function {
            struct gl_bind_vertex_array;
            struct gl_delete_vertex_arrays;
            struct gl_gen_vertex_arrays;
            struct gl_is_vertex_array;
          } // namespace function
        } // namespace vertex_array_object
        namespace vertex_attrib_64bit {
          namespace function {
            struct gl_get_vertex_attrib_large;
            struct gl_vertex_attrib_1_large;
            struct gl_vertex_attrib_2_large;
            struct gl_vertex_attrib_3_large;
            struct gl_vertex_attrib_4_large;
            struct gl_vertex_attrib_pointer_large_integer;
          } // namespace function
        } // namespace vertex_attrib_64bit
        namespace vertex_buffer_object {
          namespace function {
          } // namespace function
        } // namespace vertex_buffer_object
        namespace vertex_type_2_10_10_10_rev {
          namespace function {
            struct gl_color_3_packed;
            struct gl_color_4_packed;
            struct gl_multi_tex_coord_1_packed;
            struct gl_multi_tex_coord_2_packed;
            struct gl_multi_tex_coord_3_packed;
            struct gl_multi_tex_coord_4_packed;
            struct gl_normal_3_packed;
            struct gl_secondary_color_3_packed;
            struct gl_tex_coord_1_packed;
            struct gl_tex_coord_2_packed;
            struct gl_tex_coord_3_packed;
            struct gl_tex_coord_4_packed;
            struct gl_vertex_2_packed;
            struct gl_vertex_3_packed;
            struct gl_vertex_4_packed;
            struct gl_vertex_attrib_1_packed;
            struct gl_vertex_attrib_2_packed;
            struct gl_vertex_attrib_3_packed;
            struct gl_vertex_attrib_4_packed;
          } // namespace function
        } // namespace vertex_type_2_10_10_10_rev
        namespace viewport_array {
          namespace function {
            struct gl_depth_range_array;
            struct gl_depth_range_indexed;
            struct gl_get_double_indexed;
            struct gl_get_float_indexed;
            struct gl_scissor_array;
            struct gl_scissor_indexed;
            struct gl_viewport_array;
            struct gl_viewport_indexed;
          } // namespace function
        } // namespace viewport_array
      } // namespace arb
      namespace ext {
        namespace timer_query {
          namespace function {
          } // namespace function
        } // namespace timer_query
      } // namespace ext
      namespace nv {
        namespace half_float {
          namespace function {
          } // namespace function
        } // namespace half_float
        namespace vdpau_interop {
          namespace function {
          } // namespace function
        } // namespace vdpau_interop
      } // namespace nv
      namespace amd {
        namespace debug_output {
          namespace function {
          } // namespace function
        } // namespace debug_output
      } // namespace amd
      namespace other {
      } // namespace other
      namespace gl {
      namespace v1_0 {
        namespace function {
        } // namespace function
      } // namespace v1_0
      namespace v1_1 {
        namespace function {
        } // namespace function
      } // namespace v1_1
      namespace v1_2 {
        namespace function {
        } // namespace function
      } // namespace v1_2
      namespace v1_3 {
        namespace function {
        } // namespace function
      } // namespace v1_3
      namespace v1_4 {
        namespace function {
        } // namespace function
      } // namespace v1_4
      namespace v1_5 {
        namespace function {
        } // namespace function
      } // namespace v1_5
      namespace v2_0 {
        namespace function {
        } // namespace function
      } // namespace v2_0
      namespace v2_1 {
        namespace function {
        } // namespace function
      } // namespace v2_1
      namespace v3_0 {
        namespace function {
          using gen::arb::framebuffer_object::function::gl_bind_framebuffer;
          using gen::arb::framebuffer_object::function::gl_bind_renderbuffer;
          using gen::arb::framebuffer_object::function::gl_blit_framebuffer;
          using gen::arb::framebuffer_object::function::gl_check_framebuffer_status;
          using gen::arb::framebuffer_object::function::gl_delete_framebuffers;
          using gen::arb::framebuffer_object::function::gl_delete_renderbuffers;
          using gen::arb::framebuffer_object::function::gl_framebuffer_renderbuffer;
          using gen::arb::framebuffer_object::function::gl_framebuffer_texture_1d;
          using gen::arb::framebuffer_object::function::gl_framebuffer_texture_2d;
          using gen::arb::framebuffer_object::function::gl_framebuffer_texture_3d;
          using gen::arb::framebuffer_object::function::gl_framebuffer_texture_layer;
          using gen::arb::framebuffer_object::function::gl_gen_framebuffers;
          using gen::arb::framebuffer_object::function::gl_gen_renderbuffers;
          using gen::arb::framebuffer_object::function::gl_generate_mipmap;
          using gen::arb::framebuffer_object::function::gl_get_framebuffer_attachment_parameter;
          using gen::arb::framebuffer_object::function::gl_get_renderbuffer_parameter;
          using gen::arb::framebuffer_object::function::gl_is_framebuffer;
          using gen::arb::framebuffer_object::function::gl_is_renderbuffer;
          using gen::arb::framebuffer_object::function::gl_renderbuffer_storage;
          using gen::arb::framebuffer_object::function::gl_renderbuffer_storage_multisample;
          using gen::arb::map_buffer_range::function::gl_flush_mapped_buffer_range;
          using gen::arb::map_buffer_range::function::gl_map_buffer_range;
          using gen::arb::vertex_array_object::function::gl_bind_vertex_array;
          using gen::arb::vertex_array_object::function::gl_delete_vertex_arrays;
          using gen::arb::vertex_array_object::function::gl_gen_vertex_arrays;
          using gen::arb::vertex_array_object::function::gl_is_vertex_array;
        } // namespace function
      } // namespace v3_0
      namespace v3_1 {
        namespace function {
          using gen::arb::copy_buffer::function::gl_copy_buffer_sub_data;
          using gen::arb::uniform_buffer_object::function::gl_get_active_uniform_block;
          using gen::arb::uniform_buffer_object::function::gl_get_active_uniform_block_name;
          using gen::arb::uniform_buffer_object::function::gl_get_active_uniform_name;
          using gen::arb::uniform_buffer_object::function::gl_get_active_uniforms;
          using gen::arb::uniform_buffer_object::function::gl_get_uniform_block_index;
          using gen::arb::uniform_buffer_object::function::gl_get_uniform_indices;
          using gen::arb::uniform_buffer_object::function::gl_uniform_block_binding;
        } // namespace function
      } // namespace v3_1
      namespace v3_2 {
        namespace function {
          using gen::arb::draw_elements_base_vertex::function::gl_draw_elements_base_vertex;
          using gen::arb::draw_elements_base_vertex::function::gl_draw_elements_instanced_base_vertex;
          using gen::arb::draw_elements_base_vertex::function::gl_draw_range_elements_base_vertex;
          using gen::arb::draw_elements_base_vertex::function::gl_multi_draw_elements_base_vertex;
          using gen::arb::provoking_vertex::function::gl_provoking_vertex;
          using gen::arb::sync::function::gl_client_wait_sync;
          using gen::arb::sync::function::gl_delete_sync;
          using gen::arb::sync::function::gl_fence_sync;
          using gen::arb::sync::function::gl_get_integer;
          using gen::arb::sync::function::gl_get_sync;
          using gen::arb::sync::function::gl_is_sync;
          using gen::arb::sync::function::gl_wait_sync;
          using gen::arb::texture_multisample::function::gl_get_multisample;
          using gen::arb::texture_multisample::function::gl_sample_mask;
          using gen::arb::texture_multisample::function::gl_tex_image_2d_multisample;
          using gen::arb::texture_multisample::function::gl_tex_image_3d_multisample;
        } // namespace function
      } // namespace v3_2
      namespace v3_3 {
        namespace function {
          using gen::arb::blend_func_extended::function::gl_bind_frag_data_location_indexed;
          using gen::arb::blend_func_extended::function::gl_get_frag_data_index;
          using gen::arb::sampler_objects::function::gl_bind_sampler;
          using gen::arb::sampler_objects::function::gl_delete_samplers;
          using gen::arb::sampler_objects::function::gl_gen_samplers;
          using gen::arb::sampler_objects::function::gl_get_sampler_parameter;
          using gen::arb::sampler_objects::function::gl_get_sampler_parameter_integer;
          using gen::arb::sampler_objects::function::gl_is_sampler;
          using gen::arb::sampler_objects::function::gl_sampler_parameter;
          using gen::arb::sampler_objects::function::gl_sampler_parameter_integer;
          using gen::arb::timer_query::function::gl_get_query_object;
          using gen::arb::timer_query::function::gl_query_counter;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_color_3_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_color_4_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_multi_tex_coord_1_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_multi_tex_coord_2_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_multi_tex_coord_3_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_multi_tex_coord_4_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_normal_3_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_secondary_color_3_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_tex_coord_1_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_tex_coord_2_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_tex_coord_3_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_tex_coord_4_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_vertex_2_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_vertex_3_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_vertex_4_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_vertex_attrib_1_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_vertex_attrib_2_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_vertex_attrib_3_packed;
          using gen::arb::vertex_type_2_10_10_10_rev::function::gl_vertex_attrib_4_packed;
        } // namespace function
      } // namespace v3_3
      namespace v4_0 {
        namespace function {
          using gen::arb::draw_indirect::function::gl_draw_arrays_indirect;
          using gen::arb::draw_indirect::function::gl_draw_elements_indirect;
          using gen::arb::gpu_shader_fp64::function::gl_get_uniform;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_1;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_2;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_3;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_4;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_2;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_2x3;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_2x4;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_3;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_3x2;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_3x4;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_4;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_4x2;
          using gen::arb::gpu_shader_fp64::function::gl_uniform_matrix_4x3;
          using gen::arb::shader_subroutine::function::gl_get_active_subroutine_name;
          using gen::arb::shader_subroutine::function::gl_get_active_subroutine_uniform;
          using gen::arb::shader_subroutine::function::gl_get_active_subroutine_uniform_name;
          using gen::arb::shader_subroutine::function::gl_get_program_stage;
          using gen::arb::shader_subroutine::function::gl_get_subroutine_index;
          using gen::arb::shader_subroutine::function::gl_get_subroutine_uniform_location;
          using gen::arb::shader_subroutine::function::gl_get_uniform_subroutine;
          using gen::arb::shader_subroutine::function::gl_uniform_subroutines;
          using gen::arb::tessellation_shader::function::gl_patch_parameter;
          using gen::arb::transform_feedback2::function::gl_bind_transform_feedback;
          using gen::arb::transform_feedback2::function::gl_delete_transform_feedbacks;
          using gen::arb::transform_feedback2::function::gl_draw_transform_feedback;
          using gen::arb::transform_feedback2::function::gl_gen_transform_feedbacks;
          using gen::arb::transform_feedback2::function::gl_is_transform_feedback;
          using gen::arb::transform_feedback2::function::gl_pause_transform_feedback;
          using gen::arb::transform_feedback2::function::gl_resume_transform_feedback;
          using gen::arb::transform_feedback3::function::gl_begin_query_indexed;
          using gen::arb::transform_feedback3::function::gl_draw_transform_feedback_stream;
          using gen::arb::transform_feedback3::function::gl_end_query_indexed;
          using gen::arb::transform_feedback3::function::gl_get_query_indexed;
        } // namespace function
      } // namespace v4_0
      namespace v4_1 {
        namespace function {
          using gen::arb::es2_compatibility::function::gl_clear_depth;
          using gen::arb::es2_compatibility::function::gl_depth_range;
          using gen::arb::es2_compatibility::function::gl_get_shader_precision_format;
          using gen::arb::es2_compatibility::function::gl_release_shader_compiler;
          using gen::arb::es2_compatibility::function::gl_shader_binary;
          using gen::arb::get_program_binary::function::gl_get_program_binary;
          using gen::arb::get_program_binary::function::gl_program_binary;
          using gen::arb::get_program_binary::function::gl_program_parameter;
          using gen::arb::separate_shader_objects::function::gl_active_shader_program;
          using gen::arb::separate_shader_objects::function::gl_bind_program_pipeline;
          using gen::arb::separate_shader_objects::function::gl_create_shader_program;
          using gen::arb::separate_shader_objects::function::gl_delete_program_pipelines;
          using gen::arb::separate_shader_objects::function::gl_gen_program_pipelines;
          using gen::arb::separate_shader_objects::function::gl_get_program_pipeline;
          using gen::arb::separate_shader_objects::function::gl_get_program_pipeline_info_log;
          using gen::arb::separate_shader_objects::function::gl_is_program_pipeline;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_1;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_2;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_3;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_4;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_2;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_2x3;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_2x4;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_3;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_3x2;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_3x4;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_4;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_4x2;
          using gen::arb::separate_shader_objects::function::gl_program_uniform_matrix_4x3;
          using gen::arb::separate_shader_objects::function::gl_use_program_stages;
          using gen::arb::separate_shader_objects::function::gl_validate_program_pipeline;
          using gen::arb::vertex_attrib_64bit::function::gl_get_vertex_attrib_large;
          using gen::arb::vertex_attrib_64bit::function::gl_vertex_attrib_1_large;
          using gen::arb::vertex_attrib_64bit::function::gl_vertex_attrib_2_large;
          using gen::arb::vertex_attrib_64bit::function::gl_vertex_attrib_3_large;
          using gen::arb::vertex_attrib_64bit::function::gl_vertex_attrib_4_large;
          using gen::arb::vertex_attrib_64bit::function::gl_vertex_attrib_pointer_large_integer;
          using gen::arb::viewport_array::function::gl_depth_range_array;
          using gen::arb::viewport_array::function::gl_depth_range_indexed;
          using gen::arb::viewport_array::function::gl_get_double_indexed;
          using gen::arb::viewport_array::function::gl_get_float_indexed;
          using gen::arb::viewport_array::function::gl_scissor_array;
          using gen::arb::viewport_array::function::gl_scissor_indexed;
          using gen::arb::viewport_array::function::gl_viewport_array;
          using gen::arb::viewport_array::function::gl_viewport_indexed;
        } // namespace function
      } // namespace v4_1
      namespace v4_2 {
        namespace function {
          using gen::arb::base_instance::function::gl_draw_arrays_instanced_base_instance;
          using gen::arb::base_instance::function::gl_draw_elements_instanced_base_instance;
          using gen::arb::base_instance::function::gl_draw_elements_instanced_base_vertex_base_instance;
          using gen::arb::internalformat_query::function::gl_get_internalformat;
          using gen::arb::shader_atomic_counters::function::gl_get_active_atomic_counter_buffer;
          using gen::arb::shader_image_load_store::function::gl_bind_image_texture;
          using gen::arb::shader_image_load_store::function::gl_memory_barrier;
          using gen::arb::texture_storage::function::gl_tex_storage_1d;
          using gen::arb::texture_storage::function::gl_tex_storage_2d;
          using gen::arb::texture_storage::function::gl_tex_storage_3d;
          using gen::arb::texture_storage::function::gl_texture_storage_1d;
          using gen::arb::texture_storage::function::gl_texture_storage_2d;
          using gen::arb::texture_storage::function::gl_texture_storage_3d;
          using gen::arb::transform_feedback_instanced::function::gl_draw_transform_feedback_instanced;
          using gen::arb::transform_feedback_instanced::function::gl_draw_transform_feedback_stream_instanced;
        } // namespace function
      } // namespace v4_2
      } // namespace gl
      namespace arb {
      namespace es2_compatibility {
        namespace function {
        } // namespace function
      } // namespace es2_compatibility
      namespace base_instance {
        namespace function {
        } // namespace function
      } // namespace base_instance
      namespace blend_func_extended {
        namespace function {
        } // namespace function
      } // namespace blend_func_extended
      namespace cl_event {
        namespace function {
        } // namespace function
      } // namespace cl_event
      namespace compressed_texture_pixel_storage {
        namespace function {
        } // namespace function
      } // namespace compressed_texture_pixel_storage
      namespace conservative_depth {
        namespace function {
        } // namespace function
      } // namespace conservative_depth
      namespace copy_buffer {
        namespace function {
        } // namespace function
      } // namespace copy_buffer
      namespace debug_output {
        namespace function {
        } // namespace function
      } // namespace debug_output
      namespace depth_buffer_float {
        namespace function {
        } // namespace function
      } // namespace depth_buffer_float
      namespace depth_clamp {
        namespace function {
        } // namespace function
      } // namespace depth_clamp
      namespace draw_buffers_blend {
        namespace function {
        } // namespace function
      } // namespace draw_buffers_blend
      namespace draw_elements_base_vertex {
        namespace function {
        } // namespace function
      } // namespace draw_elements_base_vertex
      namespace draw_indirect {
        namespace function {
        } // namespace function
      } // namespace draw_indirect
      namespace explicit_attrib_location {
        namespace function {
        } // namespace function
      } // namespace explicit_attrib_location
      namespace fragment_coord_conventions {
        namespace function {
        } // namespace function
      } // namespace fragment_coord_conventions
      namespace framebuffer_object {
        namespace function {
        } // namespace function
      } // namespace framebuffer_object
      namespace framebuffer_srgb {
        namespace function {
        } // namespace function
      } // namespace framebuffer_srgb
      namespace get_program_binary {
        namespace function {
        } // namespace function
      } // namespace get_program_binary
      namespace gpu_shader5 {
        namespace function {
        } // namespace function
      } // namespace gpu_shader5
      namespace gpu_shader_fp64 {
        namespace function {
        } // namespace function
      } // namespace gpu_shader_fp64
      namespace half_float_pixel {
        namespace function {
        } // namespace function
      } // namespace half_float_pixel
      namespace half_float_vertex {
        namespace function {
        } // namespace function
      } // namespace half_float_vertex
      namespace imaging {
        namespace function {
        } // namespace function
      } // namespace imaging
      namespace internalformat_query {
        namespace function {
        } // namespace function
      } // namespace internalformat_query
      namespace map_buffer_alignment {
        namespace function {
        } // namespace function
      } // namespace map_buffer_alignment
      namespace map_buffer_range {
        namespace function {
        } // namespace function
      } // namespace map_buffer_range
      namespace occlusion_query2 {
        namespace function {
        } // namespace function
      } // namespace occlusion_query2
      namespace provoking_vertex {
        namespace function {
        } // namespace function
      } // namespace provoking_vertex
      namespace robustness {
        namespace function {
        } // namespace function
      } // namespace robustness
      namespace sample_shading {
        namespace function {
        } // namespace function
      } // namespace sample_shading
      namespace sampler_objects {
        namespace function {
        } // namespace function
      } // namespace sampler_objects
      namespace seamless_cube_map {
        namespace function {
        } // namespace function
      } // namespace seamless_cube_map
      namespace separate_shader_objects {
        namespace function {
        } // namespace function
      } // namespace separate_shader_objects
      namespace shader_atomic_counters {
        namespace function {
        } // namespace function
      } // namespace shader_atomic_counters
      namespace shader_bit_encoding {
        namespace function {
        } // namespace function
      } // namespace shader_bit_encoding
      namespace shader_image_load_store {
        namespace function {
        } // namespace function
      } // namespace shader_image_load_store
      namespace shader_objects {
        namespace function {
        } // namespace function
      } // namespace shader_objects
      namespace shader_precision {
        namespace function {
        } // namespace function
      } // namespace shader_precision
      namespace shader_stencil_export {
        namespace function {
        } // namespace function
      } // namespace shader_stencil_export
      namespace shader_subroutine {
        namespace function {
        } // namespace function
      } // namespace shader_subroutine
      namespace shading_language_420pack {
        namespace function {
        } // namespace function
      } // namespace shading_language_420pack
      namespace shading_language_include {
        namespace function {
        } // namespace function
      } // namespace shading_language_include
      namespace shading_language_packing {
        namespace function {
        } // namespace function
      } // namespace shading_language_packing
      namespace sync {
        namespace function {
        } // namespace function
      } // namespace sync
      namespace tessellation_shader {
        namespace function {
        } // namespace function
      } // namespace tessellation_shader
      namespace texture_buffer_object_rgb32 {
        namespace function {
        } // namespace function
      } // namespace texture_buffer_object_rgb32
      namespace texture_compression_bptc {
        namespace function {
        } // namespace function
      } // namespace texture_compression_bptc
      namespace texture_compression_rgtc {
        namespace function {
        } // namespace function
      } // namespace texture_compression_rgtc
      namespace texture_cube_map_array {
        namespace function {
        } // namespace function
      } // namespace texture_cube_map_array
      namespace texture_gather {
        namespace function {
        } // namespace function
      } // namespace texture_gather
      namespace texture_multisample {
        namespace function {
        } // namespace function
      } // namespace texture_multisample
      namespace texture_query_lod {
        namespace function {
        } // namespace function
      } // namespace texture_query_lod
      namespace texture_rg {
        namespace function {
        } // namespace function
      } // namespace texture_rg
      namespace texture_rgb10_a2ui {
        namespace function {
        } // namespace function
      } // namespace texture_rgb10_a2ui
      namespace texture_storage {
        namespace function {
        } // namespace function
      } // namespace texture_storage
      namespace texture_swizzle {
        namespace function {
        } // namespace function
      } // namespace texture_swizzle
      namespace timer_query {
        namespace function {
        } // namespace function
      } // namespace timer_query
      namespace transform_feedback2 {
        namespace function {
        } // namespace function
      } // namespace transform_feedback2
      namespace transform_feedback3 {
        namespace function {
        } // namespace function
      } // namespace transform_feedback3
      namespace transform_feedback_instanced {
        namespace function {
        } // namespace function
      } // namespace transform_feedback_instanced
      namespace uniform_buffer_object {
        namespace function {
        } // namespace function
      } // namespace uniform_buffer_object
      namespace vertex_array_bgra {
        namespace function {
        } // namespace function
      } // namespace vertex_array_bgra
      namespace vertex_array_object {
        namespace function {
        } // namespace function
      } // namespace vertex_array_object
      namespace vertex_attrib_64bit {
        namespace function {
        } // namespace function
      } // namespace vertex_attrib_64bit
      namespace vertex_buffer_object {
        namespace function {
        } // namespace function
      } // namespace vertex_buffer_object
      namespace vertex_type_2_10_10_10_rev {
        namespace function {
        } // namespace function
      } // namespace vertex_type_2_10_10_10_rev
      namespace viewport_array {
        namespace function {
        } // namespace function
      } // namespace viewport_array
      } // namespace arb
      namespace ext {
      namespace timer_query {
        namespace function {
        } // namespace function
      } // namespace timer_query
      } // namespace ext
      namespace nv {
      namespace half_float {
        namespace function {
        } // namespace function
      } // namespace half_float
      namespace vdpau_interop {
        namespace function {
        } // namespace function
      } // namespace vdpau_interop
      } // namespace nv
      namespace amd {
      namespace debug_output {
        namespace function {
        } // namespace function
      } // namespace debug_output
      } // namespace amd
      namespace other {
      } // namespace other

    } // namespace generated
    
  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_GENERATED_FUNCTIONS_FWD_HPP_ */


