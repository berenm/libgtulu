/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt
 *
 * @date 3 sept. 2010
 * @todo comment
 */

#ifndef GTULU_INTERNAL_FUNCTION_FWD_HPP_
#define GTULU_INTERNAL_FUNCTION_FWD_HPP_

#include <string>
#include <boost/integer.hpp>

#include "gtulu/internal/generated/functions_fwd.hpp"

namespace gtulu {
  namespace internal {

    namespace function {

      using gig::gl::v1_0::fnc::gl_blend_func;
      using gig::gl::v1_0::fnc::gl_clear;
      using gig::gl::v1_0::fnc::gl_clear_color;
      using gig::gl::v1_0::fnc::gl_clear_depth;
      using gig::gl::v1_0::fnc::gl_clear_stencil;
      using gig::gl::v1_0::fnc::gl_color_mask;
      using gig::gl::v1_0::fnc::gl_cull_face;
      using gig::gl::v1_0::fnc::gl_depth_func;
      using gig::gl::v1_0::fnc::gl_depth_mask;
      using gig::gl::v1_0::fnc::gl_depth_range;
      using gig::gl::v1_0::fnc::gl_disable;
      using gig::gl::v1_0::fnc::gl_draw_buffer;
      using gig::gl::v1_0::fnc::gl_enable;
      using gig::gl::v1_0::fnc::gl_finish;
      using gig::gl::v1_0::fnc::gl_flush;
      using gig::gl::v1_0::fnc::gl_front_face;
      using gig::gl::v1_0::fnc::gl_get_boolean;
      using gig::gl::v1_0::fnc::gl_get_double;
      using gig::gl::v1_0::fnc::gl_get_error;
      using gig::gl::v1_0::fnc::gl_get_float;
      using gig::gl::v1_0::fnc::gl_get_integer;
      using gig::gl::v1_0::fnc::gl_get_string;
      using gig::gl::v1_0::fnc::gl_get_tex_image;
      using gig::gl::v1_0::fnc::gl_get_tex_level_parameter;
      using gig::gl::v1_0::fnc::gl_get_tex_parameter;
      using gig::gl::v1_0::fnc::gl_hint;
      using gig::gl::v1_0::fnc::gl_is_enabled;
      using gig::gl::v1_0::fnc::gl_line_width;
      using gig::gl::v1_0::fnc::gl_logic_op;
      using gig::gl::v1_0::fnc::gl_pixel_store;
      using gig::gl::v1_0::fnc::gl_point_size;
      using gig::gl::v1_0::fnc::gl_polygon_mode;
      using gig::gl::v1_0::fnc::gl_read_buffer;
      using gig::gl::v1_0::fnc::gl_read_pixels;
      using gig::gl::v1_0::fnc::gl_scissor;
      using gig::gl::v1_0::fnc::gl_stencil_func;
      using gig::gl::v1_0::fnc::gl_stencil_mask;
      using gig::gl::v1_0::fnc::gl_stencil_op;
      using gig::gl::v1_0::fnc::gl_tex_image_1d;
      using gig::gl::v1_0::fnc::gl_tex_image_2d;
      using gig::gl::v1_0::fnc::gl_tex_parameter;
      using gig::gl::v1_0::fnc::gl_viewport;

      using gig::gl::v1_1::fnc::gl_bind_texture;
      using gig::gl::v1_1::fnc::gl_copy_tex_image_1d;
      using gig::gl::v1_1::fnc::gl_copy_tex_image_2d;
      using gig::gl::v1_1::fnc::gl_copy_tex_sub_image_1d;
      using gig::gl::v1_1::fnc::gl_copy_tex_sub_image_2d;
      using gig::gl::v1_1::fnc::gl_delete_textures;
      using gig::gl::v1_1::fnc::gl_draw_arrays;
      using gig::gl::v1_1::fnc::gl_draw_elements;
      using gig::gl::v1_1::fnc::gl_gen_textures;
      using gig::gl::v1_1::fnc::gl_get_pointer;
      using gig::gl::v1_1::fnc::gl_is_texture;
      using gig::gl::v1_1::fnc::gl_polygon_offset;
      using gig::gl::v1_1::fnc::gl_tex_sub_image_1d;
      using gig::gl::v1_1::fnc::gl_tex_sub_image_2d;

      using gig::gl::v1_2::fnc::gl_blend_color;
      using gig::gl::v1_2::fnc::gl_blend_equation;
      using gig::gl::v1_2::fnc::gl_copy_tex_sub_image_3d;
      using gig::gl::v1_2::fnc::gl_draw_range_elements;
      using gig::gl::v1_2::fnc::gl_tex_image_3d;
      using gig::gl::v1_2::fnc::gl_tex_sub_image_3d;

      using gig::gl::v1_3::fnc::gl_active_texture;
      using gig::gl::v1_3::fnc::gl_compressed_tex_image_1d;
      using gig::gl::v1_3::fnc::gl_compressed_tex_image_2d;
      using gig::gl::v1_3::fnc::gl_compressed_tex_image_3d;
      using gig::gl::v1_3::fnc::gl_compressed_tex_sub_image_1d;
      using gig::gl::v1_3::fnc::gl_compressed_tex_sub_image_2d;
      using gig::gl::v1_3::fnc::gl_compressed_tex_sub_image_3d;
      using gig::gl::v1_3::fnc::gl_get_compressed_tex_image;
      using gig::gl::v1_3::fnc::gl_sample_coverage;

      using gig::gl::v1_4::fnc::gl_blend_func_separate;
      using gig::gl::v1_4::fnc::gl_multi_draw_arrays;
      using gig::gl::v1_4::fnc::gl_multi_draw_elements;
      using gig::gl::v1_4::fnc::gl_point_parameter;

      using gig::gl::v1_5::fnc::gl_begin_query;
      using gig::gl::v1_5::fnc::gl_bind_buffer;
      using gig::gl::v1_5::fnc::gl_buffer_data;
      using gig::gl::v1_5::fnc::gl_buffer_sub_data;
      using gig::gl::v1_5::fnc::gl_delete_buffers;
      using gig::gl::v1_5::fnc::gl_delete_queries;
      using gig::gl::v1_5::fnc::gl_end_query;
      using gig::gl::v1_5::fnc::gl_gen_buffers;
      using gig::gl::v1_5::fnc::gl_gen_queries;
      using gig::gl::v1_5::fnc::gl_get_buffer_parameter;
      using gig::gl::v1_5::fnc::gl_get_buffer_pointer;
      using gig::gl::v1_5::fnc::gl_get_buffer_sub_data;
      using gig::gl::v1_5::fnc::gl_get_query;
      using gig::gl::v1_5::fnc::gl_get_query_object;
      using gig::gl::v1_5::fnc::gl_is_buffer;
      using gig::gl::v1_5::fnc::gl_is_query;
      using gig::gl::v1_5::fnc::gl_map_buffer;
      using gig::gl::v1_5::fnc::gl_unmap_buffer;

      using gig::gl::v2_0::fnc::gl_attach_shader;
      using gig::gl::v2_0::fnc::gl_bind_attrib_location;
      using gig::gl::v2_0::fnc::gl_blend_equation_separate;
      using gig::gl::v2_0::fnc::gl_compile_shader;
      using gig::gl::v2_0::fnc::gl_create_program;
      using gig::gl::v2_0::fnc::gl_create_shader;
      using gig::gl::v2_0::fnc::gl_delete_program;
      using gig::gl::v2_0::fnc::gl_delete_shader;
      using gig::gl::v2_0::fnc::gl_detach_shader;
      using gig::gl::v2_0::fnc::gl_disable_vertex_attrib_array;
      using gig::gl::v2_0::fnc::gl_draw_buffers;
      using gig::gl::v2_0::fnc::gl_enable_vertex_attrib_array;
      using gig::gl::v2_0::fnc::gl_get_active_attrib;
      using gig::gl::v2_0::fnc::gl_get_active_uniform;
      using gig::gl::v2_0::fnc::gl_get_attached_shaders;
      using gig::gl::v2_0::fnc::gl_get_attrib_location;
      using gig::gl::v2_0::fnc::gl_get_program;
      using gig::gl::v2_0::fnc::gl_get_program_info_log;
      using gig::gl::v2_0::fnc::gl_get_shader;
      using gig::gl::v2_0::fnc::gl_get_shader_info_log;
      using gig::gl::v2_0::fnc::gl_get_shader_source;
      using gig::gl::v2_0::fnc::gl_get_uniform;
      using gig::gl::v2_0::fnc::gl_get_uniform_location;
      using gig::gl::v2_0::fnc::gl_get_vertex_attrib;
      using gig::gl::v2_0::fnc::gl_get_vertex_attrib_pointer;
      using gig::gl::v2_0::fnc::gl_is_program;
      using gig::gl::v2_0::fnc::gl_is_shader;
      using gig::gl::v2_0::fnc::gl_link_program;
      using gig::gl::v2_0::fnc::gl_shader_source;
      using gig::gl::v2_0::fnc::gl_stencil_func_separate;
      using gig::gl::v2_0::fnc::gl_stencil_mask_separate;
      using gig::gl::v2_0::fnc::gl_stencil_op_separate;
      using gig::gl::v2_0::fnc::gl_uniform_1;
      using gig::gl::v2_0::fnc::gl_uniform_2;
      using gig::gl::v2_0::fnc::gl_uniform_3;
      using gig::gl::v2_0::fnc::gl_uniform_4;
      using gig::gl::v2_0::fnc::gl_uniform_matrix_2;
      using gig::gl::v2_0::fnc::gl_uniform_matrix_3;
      using gig::gl::v2_0::fnc::gl_uniform_matrix_4;
      using gig::gl::v2_0::fnc::gl_use_program;
      using gig::gl::v2_0::fnc::gl_validate_program;
      using gig::gl::v2_0::fnc::gl_vertex_attrib_1;
      using gig::gl::v2_0::fnc::gl_vertex_attrib_2;
      using gig::gl::v2_0::fnc::gl_vertex_attrib_3;
      using gig::gl::v2_0::fnc::gl_vertex_attrib_4;
      using gig::gl::v2_0::fnc::gl_vertex_attrib_4_normalized;
      using gig::gl::v2_0::fnc::gl_vertex_attrib_pointer;

      using gig::gl::v2_1::fnc::gl_uniform_matrix_2x3;
      using gig::gl::v2_1::fnc::gl_uniform_matrix_2x4;
      using gig::gl::v2_1::fnc::gl_uniform_matrix_3x2;
      using gig::gl::v2_1::fnc::gl_uniform_matrix_3x4;
      using gig::gl::v2_1::fnc::gl_uniform_matrix_4x2;
      using gig::gl::v2_1::fnc::gl_uniform_matrix_4x3;

      using gig::gl::v3_0::fnc::gl_begin_conditional_render;
      using gig::gl::v3_0::fnc::gl_begin_transform_feedback;
      using gig::gl::v3_0::fnc::gl_bind_buffer_base;
      using gig::gl::v3_0::fnc::gl_bind_buffer_range;
      using gig::gl::v3_0::fnc::gl_bind_frag_data_location;
      using gig::gl::v3_0::fnc::gl_clamp_color;
      using gig::gl::v3_0::fnc::gl_clear_buffer;
      using gig::gl::v3_0::fnc::gl_clear_buffer_float;
      //      using gig::gl::v3_0::fnc::gl_color_mask;
      //      using gig::gl::v3_0::fnc::gl_disable;
      //      using gig::gl::v3_0::fnc::gl_enable;
      using gig::gl::v3_0::fnc::gl_end_conditional_render;
      using gig::gl::v3_0::fnc::gl_end_transform_feedback;
      using gig::gl::v3_0::fnc::gl_get_boolean_indexed;
      using gig::gl::v3_0::fnc::gl_get_frag_data_location;
      using gig::gl::v3_0::fnc::gl_get_integer_indexed;
      //      using gig::gl::v3_0::fnc::gl_get_string;
      using gig::gl::v3_0::fnc::gl_get_tex_parameter_integer;
      using gig::gl::v3_0::fnc::gl_get_transform_feedback_varying;
      //      using gig::gl::v3_0::fnc::gl_get_uniform;
      using gig::gl::v3_0::fnc::gl_get_vertex_attrib_integer;
      //      using gig::gl::v3_0::fnc::gl_is_enabled;
      using gig::gl::v3_0::fnc::gl_tex_parameter_integer;
      using gig::gl::v3_0::fnc::gl_transform_feedback_varyings;
      //      using gig::gl::v3_0::fnc::gl_uniform_1;
      //      using gig::gl::v3_0::fnc::gl_uniform_2;
      //      using gig::gl::v3_0::fnc::gl_uniform_3;
      //      using gig::gl::v3_0::fnc::gl_uniform_4;
      using gig::gl::v3_0::fnc::gl_vertex_attrib_1_integer;
      using gig::gl::v3_0::fnc::gl_vertex_attrib_2_integer;
      using gig::gl::v3_0::fnc::gl_vertex_attrib_3_integer;
      using gig::gl::v3_0::fnc::gl_vertex_attrib_4_integer;
      using gig::gl::v3_0::fnc::gl_vertex_attrib_pointer_integer;

      using gig::gl::v3_0::fnc::gl_bind_framebuffer;
      using gig::gl::v3_0::fnc::gl_bind_renderbuffer;
      using gig::gl::v3_0::fnc::gl_blit_framebuffer;
      using gig::gl::v3_0::fnc::gl_check_framebuffer_status;
      using gig::gl::v3_0::fnc::gl_delete_framebuffers;
      using gig::gl::v3_0::fnc::gl_delete_renderbuffers;
      using gig::gl::v3_0::fnc::gl_framebuffer_renderbuffer;
      using gig::gl::v3_0::fnc::gl_framebuffer_texture_1d;
      using gig::gl::v3_0::fnc::gl_framebuffer_texture_2d;
      using gig::gl::v3_0::fnc::gl_framebuffer_texture_3d;
      using gig::gl::v3_0::fnc::gl_framebuffer_texture_layer;
      using gig::gl::v3_0::fnc::gl_gen_framebuffers;
      using gig::gl::v3_0::fnc::gl_gen_renderbuffers;
      using gig::gl::v3_0::fnc::gl_generate_mipmap;
      using gig::gl::v3_0::fnc::gl_get_framebuffer_attachment_parameter;
      using gig::gl::v3_0::fnc::gl_get_renderbuffer_parameter;
      using gig::gl::v3_0::fnc::gl_is_framebuffer;
      using gig::gl::v3_0::fnc::gl_is_renderbuffer;
      using gig::gl::v3_0::fnc::gl_renderbuffer_storage;
      using gig::gl::v3_0::fnc::gl_renderbuffer_storage_multisample;
      using gig::gl::v3_0::fnc::gl_flush_mapped_buffer_range;
      using gig::gl::v3_0::fnc::gl_map_buffer_range;
      using gig::gl::v3_0::fnc::gl_bind_vertex_array;
      using gig::gl::v3_0::fnc::gl_delete_vertex_arrays;
      using gig::gl::v3_0::fnc::gl_gen_vertex_arrays;
      using gig::gl::v3_0::fnc::gl_is_vertex_array;

      using gig::gl::v3_1::fnc::gl_draw_arrays_instanced;
      using gig::gl::v3_1::fnc::gl_draw_elements_instanced;
      using gig::gl::v3_1::fnc::gl_primitive_restart_index;
      using gig::gl::v3_1::fnc::gl_tex_buffer;

      using gig::gl::v3_1::fnc::gl_copy_buffer_sub_data;
      using gig::gl::v3_1::fnc::gl_get_active_uniform_block;
      using gig::gl::v3_1::fnc::gl_get_active_uniform_block_name;
      using gig::gl::v3_1::fnc::gl_get_active_uniform_name;
      using gig::gl::v3_1::fnc::gl_get_active_uniforms;
      using gig::gl::v3_1::fnc::gl_get_uniform_block_index;
      using gig::gl::v3_1::fnc::gl_get_uniform_indices;
      using gig::gl::v3_1::fnc::gl_uniform_block_binding;

      using gig::gl::v3_2::fnc::gl_framebuffer_texture;
      //      using gig::gl::v3_2::fnc::gl_get_buffer_parameter;
      //      using gig::gl::v3_2::fnc::gl_get_integer_indexed;

      using gig::gl::v3_2::fnc::gl_draw_elements_base_vertex;
      using gig::gl::v3_2::fnc::gl_draw_elements_instanced_base_vertex;
      using gig::gl::v3_2::fnc::gl_draw_range_elements_base_vertex;
      using gig::gl::v3_2::fnc::gl_multi_draw_elements_base_vertex;
      using gig::gl::v3_2::fnc::gl_provoking_vertex;
      using gig::gl::v3_2::fnc::gl_client_wait_sync;
      using gig::gl::v3_2::fnc::gl_delete_sync;
      using gig::gl::v3_2::fnc::gl_fence_sync;
      //      using gig::gl::v3_2::fnc::gl_get_integer;
      using gig::gl::v3_2::fnc::gl_get_sync;
      using gig::gl::v3_2::fnc::gl_is_sync;
      using gig::gl::v3_2::fnc::gl_wait_sync;
      using gig::gl::v3_2::fnc::gl_get_multisample;
      using gig::gl::v3_2::fnc::gl_sample_mask;
      using gig::gl::v3_2::fnc::gl_tex_image_2d_multisample;
      using gig::gl::v3_2::fnc::gl_tex_image_3d_multisample;

      using gig::gl::v3_3::fnc::gl_vertex_attrib_divisor;

      using gig::gl::v3_3::fnc::gl_bind_frag_data_location_indexed;
      using gig::gl::v3_3::fnc::gl_get_frag_data_index;
      using gig::gl::v3_3::fnc::gl_bind_sampler;
      using gig::gl::v3_3::fnc::gl_delete_samplers;
      using gig::gl::v3_3::fnc::gl_gen_samplers;
      using gig::gl::v3_3::fnc::gl_get_sampler_parameter;
      using gig::gl::v3_3::fnc::gl_get_sampler_parameter_integer;
      using gig::gl::v3_3::fnc::gl_is_sampler;
      using gig::gl::v3_3::fnc::gl_sampler_parameter;
      using gig::gl::v3_3::fnc::gl_sampler_parameter_integer;
      //      using gig::gl::v3_3::fnc::gl_get_query_object;
      using gig::gl::v3_3::fnc::gl_query_counter;
      using gig::gl::v3_3::fnc::gl_color_3_packed;
      using gig::gl::v3_3::fnc::gl_color_4_packed;
      using gig::gl::v3_3::fnc::gl_multi_tex_coord_1_packed;
      using gig::gl::v3_3::fnc::gl_multi_tex_coord_2_packed;
      using gig::gl::v3_3::fnc::gl_multi_tex_coord_3_packed;
      using gig::gl::v3_3::fnc::gl_multi_tex_coord_4_packed;
      using gig::gl::v3_3::fnc::gl_normal_3_packed;
      using gig::gl::v3_3::fnc::gl_secondary_color_3_packed;
      using gig::gl::v3_3::fnc::gl_tex_coord_1_packed;
      using gig::gl::v3_3::fnc::gl_tex_coord_2_packed;
      using gig::gl::v3_3::fnc::gl_tex_coord_3_packed;
      using gig::gl::v3_3::fnc::gl_tex_coord_4_packed;
      using gig::gl::v3_3::fnc::gl_vertex_2_packed;
      using gig::gl::v3_3::fnc::gl_vertex_3_packed;
      using gig::gl::v3_3::fnc::gl_vertex_4_packed;
      using gig::gl::v3_3::fnc::gl_vertex_attrib_1_packed;
      using gig::gl::v3_3::fnc::gl_vertex_attrib_2_packed;
      using gig::gl::v3_3::fnc::gl_vertex_attrib_3_packed;
      using gig::gl::v3_3::fnc::gl_vertex_attrib_4_packed;

      using gig::gl::v4_0::fnc::gl_draw_arrays_indirect;
      using gig::gl::v4_0::fnc::gl_draw_elements_indirect;
      //      using gig::gl::v4_0::fnc::gl_get_uniform;
      //      using gig::gl::v4_0::fnc::gl_uniform_1;
      //      using gig::gl::v4_0::fnc::gl_uniform_2;
      //      using gig::gl::v4_0::fnc::gl_uniform_3;
      //      using gig::gl::v4_0::fnc::gl_uniform_4;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_2;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_2x3;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_2x4;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_3;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_3x2;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_3x4;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_4;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_4x2;
      //      using gig::gl::v4_0::fnc::gl_uniform_matrix_4x3;
      using gig::gl::v4_0::fnc::gl_get_active_subroutine_name;
      using gig::gl::v4_0::fnc::gl_get_active_subroutine_uniform;
      using gig::gl::v4_0::fnc::gl_get_active_subroutine_uniform_name;
      using gig::gl::v4_0::fnc::gl_get_program_stage;
      using gig::gl::v4_0::fnc::gl_get_subroutine_index;
      using gig::gl::v4_0::fnc::gl_get_subroutine_uniform_location;
      using gig::gl::v4_0::fnc::gl_get_uniform_subroutine;
      using gig::gl::v4_0::fnc::gl_uniform_subroutines;
      using gig::gl::v4_0::fnc::gl_patch_parameter;
      using gig::gl::v4_0::fnc::gl_bind_transform_feedback;
      using gig::gl::v4_0::fnc::gl_delete_transform_feedbacks;
      using gig::gl::v4_0::fnc::gl_draw_transform_feedback;
      using gig::gl::v4_0::fnc::gl_gen_transform_feedbacks;
      using gig::gl::v4_0::fnc::gl_is_transform_feedback;
      using gig::gl::v4_0::fnc::gl_pause_transform_feedback;
      using gig::gl::v4_0::fnc::gl_resume_transform_feedback;
      using gig::gl::v4_0::fnc::gl_begin_query_indexed;
      using gig::gl::v4_0::fnc::gl_draw_transform_feedback_stream;
      using gig::gl::v4_0::fnc::gl_end_query_indexed;
      using gig::gl::v4_0::fnc::gl_get_query_indexed;

      //      using gig::gl::v4_0::fnc::gl_blend_equation;
      //      using gig::gl::v4_0::fnc::gl_blend_equation_separate;
      //      using gig::gl::v4_0::fnc::gl_blend_func;
      //      using gig::gl::v4_0::fnc::gl_blend_func_separate;
      //      using gig::gl::v4_0::fnc::gl_min_sample_shading;

      //      using gig::gl::v4_1::fnc::gl_clear_depth;
      //      using gig::gl::v4_1::fnc::gl_depth_range;
      using gig::gl::v4_1::fnc::gl_get_shader_precision_format;
      using gig::gl::v4_1::fnc::gl_release_shader_compiler;
      using gig::gl::v4_1::fnc::gl_shader_binary;
      using gig::gl::v4_1::fnc::gl_get_program_binary;
      using gig::gl::v4_1::fnc::gl_program_binary;
      using gig::gl::v4_1::fnc::gl_program_parameter;
      using gig::gl::v4_1::fnc::gl_active_shader_program;
      using gig::gl::v4_1::fnc::gl_bind_program_pipeline;
      using gig::gl::v4_1::fnc::gl_create_shader_program;
      using gig::gl::v4_1::fnc::gl_delete_program_pipelines;
      using gig::gl::v4_1::fnc::gl_gen_program_pipelines;
      using gig::gl::v4_1::fnc::gl_get_program_pipeline;
      using gig::gl::v4_1::fnc::gl_get_program_pipeline_info_log;
      using gig::gl::v4_1::fnc::gl_is_program_pipeline;
      using gig::gl::v4_1::fnc::gl_program_uniform_1;
      using gig::gl::v4_1::fnc::gl_program_uniform_2;
      using gig::gl::v4_1::fnc::gl_program_uniform_3;
      using gig::gl::v4_1::fnc::gl_program_uniform_4;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_2;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_2x3;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_2x4;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_3;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_3x2;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_3x4;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_4;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_4x2;
      using gig::gl::v4_1::fnc::gl_program_uniform_matrix_4x3;
      using gig::gl::v4_1::fnc::gl_use_program_stages;
      using gig::gl::v4_1::fnc::gl_validate_program_pipeline;
      using gig::gl::v4_1::fnc::gl_get_vertex_attrib_large;
      using gig::gl::v4_1::fnc::gl_vertex_attrib_1_large;
      using gig::gl::v4_1::fnc::gl_vertex_attrib_2_large;
      using gig::gl::v4_1::fnc::gl_vertex_attrib_3_large;
      using gig::gl::v4_1::fnc::gl_vertex_attrib_4_large;
      using gig::gl::v4_1::fnc::gl_vertex_attrib_large_pointer_integer;
      using gig::gl::v4_1::fnc::gl_depth_range_array;
      using gig::gl::v4_1::fnc::gl_depth_range_indexed;
      using gig::gl::v4_1::fnc::gl_get_double_indexed;
      using gig::gl::v4_1::fnc::gl_get_float_indexed;
      using gig::gl::v4_1::fnc::gl_scissor_array;
      using gig::gl::v4_1::fnc::gl_scissor_indexed;
      using gig::gl::v4_1::fnc::gl_viewport_array;
      using gig::gl::v4_1::fnc::gl_viewport_indexed;

    } // namespace function

    namespace fnc = ::gtulu::internal::function;

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FUNCTION_FWD_HPP_ */
