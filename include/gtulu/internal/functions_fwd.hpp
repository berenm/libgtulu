/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_FUNCTION_FWD_HPP_
#define GTULU_INTERNAL_FUNCTION_FWD_HPP_

#include "gtulu/namespaces.hpp"
#include <string>
#include <boost/integer.hpp>

#define IN_GTULU_INTERNAL_FUNCTIONS_FWD_HPP_
#include "gtulu/internal/generated/functions_fwd.hpp"
#undef IN_GTULU_INTERNAL_FUNCTIONS_FWD_HPP_

namespace gtulu {
  namespace internal {

    namespace function {

      using gen::gl::v1_0::function::gl_blend_func;
      using gen::gl::v1_0::function::gl_clear;
      using gen::gl::v1_0::function::gl_clear_color;
      using gen::gl::v1_0::function::gl_clear_depth;
      using gen::gl::v1_0::function::gl_clear_stencil;
      using gen::gl::v1_0::function::gl_color_mask;
      using gen::gl::v1_0::function::gl_cull_face;
      using gen::gl::v1_0::function::gl_depth_func;
      using gen::gl::v1_0::function::gl_depth_mask;
      using gen::gl::v1_0::function::gl_depth_range;
      using gen::gl::v1_0::function::gl_disable;
      using gen::gl::v1_0::function::gl_draw_buffer;
      using gen::gl::v1_0::function::gl_enable;
      using gen::gl::v1_0::function::gl_finish;
      using gen::gl::v1_0::function::gl_flush;
      using gen::gl::v1_0::function::gl_front_face;
      using gen::gl::v1_0::function::gl_get_boolean;
      using gen::gl::v1_0::function::gl_get_double;
      using gen::gl::v1_0::function::gl_get_error;
      using gen::gl::v1_0::function::gl_get_float;
      using gen::gl::v1_0::function::gl_get_integer;
      using gen::gl::v1_0::function::gl_get_string;
      using gen::gl::v1_0::function::gl_get_tex_image;
      using gen::gl::v1_0::function::gl_get_tex_level_parameter;
      using gen::gl::v1_0::function::gl_get_tex_parameter;
      using gen::gl::v1_0::function::gl_hint;
      using gen::gl::v1_0::function::gl_is_enabled;
      using gen::gl::v1_0::function::gl_line_width;
      using gen::gl::v1_0::function::gl_logic_op;
      using gen::gl::v1_0::function::gl_pixel_store;
      using gen::gl::v1_0::function::gl_point_size;
      using gen::gl::v1_0::function::gl_polygon_mode;
      using gen::gl::v1_0::function::gl_read_buffer;
      using gen::gl::v1_0::function::gl_read_pixels;
      using gen::gl::v1_0::function::gl_scissor;
      using gen::gl::v1_0::function::gl_stencil_func;
      using gen::gl::v1_0::function::gl_stencil_mask;
      using gen::gl::v1_0::function::gl_stencil_op;
      using gen::gl::v1_0::function::gl_tex_image_1d;
      using gen::gl::v1_0::function::gl_tex_image_2d;
      using gen::gl::v1_0::function::gl_tex_parameter;
      using gen::gl::v1_0::function::gl_viewport;

      using gen::gl::v1_1::function::gl_bind_texture;
      using gen::gl::v1_1::function::gl_copy_tex_image_1d;
      using gen::gl::v1_1::function::gl_copy_tex_image_2d;
      using gen::gl::v1_1::function::gl_copy_tex_sub_image_1d;
      using gen::gl::v1_1::function::gl_copy_tex_sub_image_2d;
      using gen::gl::v1_1::function::gl_delete_textures;
      using gen::gl::v1_1::function::gl_draw_arrays;
      using gen::gl::v1_1::function::gl_draw_elements;
      using gen::gl::v1_1::function::gl_gen_textures;
      using gen::gl::v1_1::function::gl_get_pointer;
      using gen::gl::v1_1::function::gl_is_texture;
      using gen::gl::v1_1::function::gl_polygon_offset;
      using gen::gl::v1_1::function::gl_tex_sub_image_1d;
      using gen::gl::v1_1::function::gl_tex_sub_image_2d;

      using gen::gl::v1_2::function::gl_blend_color;
      using gen::gl::v1_2::function::gl_blend_equation;
      using gen::gl::v1_2::function::gl_copy_tex_sub_image_3d;
      using gen::gl::v1_2::function::gl_draw_range_elements;
      using gen::gl::v1_2::function::gl_tex_image_3d;
      using gen::gl::v1_2::function::gl_tex_sub_image_3d;

      using gen::gl::v1_3::function::gl_active_texture;
      using gen::gl::v1_3::function::gl_compressed_tex_image_1d;
      using gen::gl::v1_3::function::gl_compressed_tex_image_2d;
      using gen::gl::v1_3::function::gl_compressed_tex_image_3d;
      using gen::gl::v1_3::function::gl_compressed_tex_sub_image_1d;
      using gen::gl::v1_3::function::gl_compressed_tex_sub_image_2d;
      using gen::gl::v1_3::function::gl_compressed_tex_sub_image_3d;
      using gen::gl::v1_3::function::gl_get_compressed_tex_image;
      using gen::gl::v1_3::function::gl_sample_coverage;

      using gen::gl::v1_4::function::gl_blend_func_separate;
      using gen::gl::v1_4::function::gl_multi_draw_arrays;
      using gen::gl::v1_4::function::gl_multi_draw_elements;
      using gen::gl::v1_4::function::gl_point_parameter;

      using gen::gl::v1_5::function::gl_begin_query;
      using gen::gl::v1_5::function::gl_bind_buffer;
      using gen::gl::v1_5::function::gl_buffer_data;
      using gen::gl::v1_5::function::gl_buffer_sub_data;
      using gen::gl::v1_5::function::gl_delete_buffers;
      using gen::gl::v1_5::function::gl_delete_queries;
      using gen::gl::v1_5::function::gl_end_query;
      using gen::gl::v1_5::function::gl_gen_buffers;
      using gen::gl::v1_5::function::gl_gen_queries;
      using gen::gl::v1_5::function::gl_get_buffer_parameter;
      using gen::gl::v1_5::function::gl_get_buffer_pointer;
      using gen::gl::v1_5::function::gl_get_buffer_sub_data;
      using gen::gl::v1_5::function::gl_get_query;
      using gen::gl::v1_5::function::gl_get_query_object;
      using gen::gl::v1_5::function::gl_is_buffer;
      using gen::gl::v1_5::function::gl_is_query;
      using gen::gl::v1_5::function::gl_map_buffer;
      using gen::gl::v1_5::function::gl_unmap_buffer;

      using gen::gl::v2_0::function::gl_attach_shader;
      using gen::gl::v2_0::function::gl_bind_attrib_location;
      using gen::gl::v2_0::function::gl_blend_equation_separate;
      using gen::gl::v2_0::function::gl_compile_shader;
      using gen::gl::v2_0::function::gl_create_program;
      using gen::gl::v2_0::function::gl_create_shader;
      using gen::gl::v2_0::function::gl_delete_program;
      using gen::gl::v2_0::function::gl_delete_shader;
      using gen::gl::v2_0::function::gl_detach_shader;
      using gen::gl::v2_0::function::gl_disable_vertex_attrib_array;
      using gen::gl::v2_0::function::gl_draw_buffers;
      using gen::gl::v2_0::function::gl_enable_vertex_attrib_array;
      using gen::gl::v2_0::function::gl_get_active_attrib;
      using gen::gl::v2_0::function::gl_get_active_uniform;
      using gen::gl::v2_0::function::gl_get_attached_shaders;
      using gen::gl::v2_0::function::gl_get_attrib_location;
      using gen::gl::v2_0::function::gl_get_program;
      using gen::gl::v2_0::function::gl_get_program_info_log;
      using gen::gl::v2_0::function::gl_get_shader;
      using gen::gl::v2_0::function::gl_get_shader_info_log;
      using gen::gl::v2_0::function::gl_get_shader_source;
      using gen::gl::v2_0::function::gl_get_uniform;
      using gen::gl::v2_0::function::gl_get_uniform_location;
      using gen::gl::v2_0::function::gl_get_vertex_attrib;
      using gen::gl::v2_0::function::gl_get_vertex_attrib_pointer;
      using gen::gl::v2_0::function::gl_is_program;
      using gen::gl::v2_0::function::gl_is_shader;
      using gen::gl::v2_0::function::gl_link_program;
      using gen::gl::v2_0::function::gl_shader_source;
      using gen::gl::v2_0::function::gl_stencil_func_separate;
      using gen::gl::v2_0::function::gl_stencil_mask_separate;
      using gen::gl::v2_0::function::gl_stencil_op_separate;
      using gen::gl::v2_0::function::gl_uniform_1;
      using gen::gl::v2_0::function::gl_uniform_2;
      using gen::gl::v2_0::function::gl_uniform_3;
      using gen::gl::v2_0::function::gl_uniform_4;
      using gen::gl::v2_0::function::gl_uniform_matrix_2;
      using gen::gl::v2_0::function::gl_uniform_matrix_3;
      using gen::gl::v2_0::function::gl_uniform_matrix_4;
      using gen::gl::v2_0::function::gl_use_program;
      using gen::gl::v2_0::function::gl_validate_program;
      using gen::gl::v2_0::function::gl_vertex_attrib_1;
      using gen::gl::v2_0::function::gl_vertex_attrib_2;
      using gen::gl::v2_0::function::gl_vertex_attrib_3;
      using gen::gl::v2_0::function::gl_vertex_attrib_4;
      using gen::gl::v2_0::function::gl_vertex_attrib_4_normalized;
      using gen::gl::v2_0::function::gl_vertex_attrib_pointer;

      using gen::gl::v2_1::function::gl_uniform_matrix_2x3;
      using gen::gl::v2_1::function::gl_uniform_matrix_2x4;
      using gen::gl::v2_1::function::gl_uniform_matrix_3x2;
      using gen::gl::v2_1::function::gl_uniform_matrix_3x4;
      using gen::gl::v2_1::function::gl_uniform_matrix_4x2;
      using gen::gl::v2_1::function::gl_uniform_matrix_4x3;

      using gen::gl::v3_0::function::gl_begin_conditional_render;
      using gen::gl::v3_0::function::gl_begin_transform_feedback;
      using gen::gl::v3_0::function::gl_bind_buffer_base;
      using gen::gl::v3_0::function::gl_bind_buffer_range;
      using gen::gl::v3_0::function::gl_bind_frag_data_location;
      using gen::gl::v3_0::function::gl_clamp_color;
      using gen::gl::v3_0::function::gl_clear_buffer;
      using gen::gl::v3_0::function::gl_clear_buffer_float;
      //      using gen::gl::v3_0::function::gl_color_mask;
      //      using gen::gl::v3_0::function::gl_disable;
      //      using gen::gl::v3_0::function::gl_enable;
      using gen::gl::v3_0::function::gl_end_conditional_render;
      using gen::gl::v3_0::function::gl_end_transform_feedback;
      using gen::gl::v3_0::function::gl_get_boolean_indexed;
      using gen::gl::v3_0::function::gl_get_frag_data_location;
      using gen::gl::v3_0::function::gl_get_integer_indexed;
      //      using gen::gl::v3_0::function::gl_get_string;
      using gen::gl::v3_0::function::gl_get_tex_parameter_integer;
      using gen::gl::v3_0::function::gl_get_transform_feedback_varying;
      //      using gen::gl::v3_0::function::gl_get_uniform;
      using gen::gl::v3_0::function::gl_get_vertex_attrib_integer;
      //      using gen::gl::v3_0::function::gl_is_enabled;
      using gen::gl::v3_0::function::gl_tex_parameter_integer;
      using gen::gl::v3_0::function::gl_transform_feedback_varyings;
      //      using gen::gl::v3_0::function::gl_uniform_1;
      //      using gen::gl::v3_0::function::gl_uniform_2;
      //      using gen::gl::v3_0::function::gl_uniform_3;
      //      using gen::gl::v3_0::function::gl_uniform_4;
      using gen::gl::v3_0::function::gl_vertex_attrib_1_integer;
      using gen::gl::v3_0::function::gl_vertex_attrib_2_integer;
      using gen::gl::v3_0::function::gl_vertex_attrib_3_integer;
      using gen::gl::v3_0::function::gl_vertex_attrib_4_integer;
      using gen::gl::v3_0::function::gl_vertex_attrib_pointer_integer;

      using gen::gl::v3_0::function::gl_bind_framebuffer;
      using gen::gl::v3_0::function::gl_bind_renderbuffer;
      using gen::gl::v3_0::function::gl_blit_framebuffer;
      using gen::gl::v3_0::function::gl_check_framebuffer_status;
      using gen::gl::v3_0::function::gl_delete_framebuffers;
      using gen::gl::v3_0::function::gl_delete_renderbuffers;
      using gen::gl::v3_0::function::gl_framebuffer_renderbuffer;
      using gen::gl::v3_0::function::gl_framebuffer_texture_1d;
      using gen::gl::v3_0::function::gl_framebuffer_texture_2d;
      using gen::gl::v3_0::function::gl_framebuffer_texture_3d;
      using gen::gl::v3_0::function::gl_framebuffer_texture_layer;
      using gen::gl::v3_0::function::gl_gen_framebuffers;
      using gen::gl::v3_0::function::gl_gen_renderbuffers;
      using gen::gl::v3_0::function::gl_generate_mipmap;
      using gen::gl::v3_0::function::gl_get_framebuffer_attachment_parameter;
      using gen::gl::v3_0::function::gl_get_renderbuffer_parameter;
      using gen::gl::v3_0::function::gl_is_framebuffer;
      using gen::gl::v3_0::function::gl_is_renderbuffer;
      using gen::gl::v3_0::function::gl_renderbuffer_storage;
      using gen::gl::v3_0::function::gl_renderbuffer_storage_multisample;
      using gen::gl::v3_0::function::gl_flush_mapped_buffer_range;
      using gen::gl::v3_0::function::gl_map_buffer_range;
      using gen::gl::v3_0::function::gl_bind_vertex_array;
      using gen::gl::v3_0::function::gl_delete_vertex_arrays;
      using gen::gl::v3_0::function::gl_gen_vertex_arrays;
      using gen::gl::v3_0::function::gl_is_vertex_array;

      using gen::gl::v3_1::function::gl_draw_arrays_instanced;
      using gen::gl::v3_1::function::gl_draw_elements_instanced;
      using gen::gl::v3_1::function::gl_primitive_restart_index;
      using gen::gl::v3_1::function::gl_tex_buffer;

      using gen::gl::v3_1::function::gl_copy_buffer_sub_data;
      using gen::gl::v3_1::function::gl_get_active_uniform_block;
      using gen::gl::v3_1::function::gl_get_active_uniform_block_name;
      using gen::gl::v3_1::function::gl_get_active_uniform_name;
      using gen::gl::v3_1::function::gl_get_active_uniforms;
      using gen::gl::v3_1::function::gl_get_uniform_block_index;
      using gen::gl::v3_1::function::gl_get_uniform_indices;
      using gen::gl::v3_1::function::gl_uniform_block_binding;

      using gen::gl::v3_2::function::gl_framebuffer_texture;
      //      using gen::gl::v3_2::function::gl_get_buffer_parameter;
      //      using gen::gl::v3_2::function::gl_get_integer_indexed;

      using gen::gl::v3_2::function::gl_draw_elements_base_vertex;
      using gen::gl::v3_2::function::gl_draw_elements_instanced_base_vertex;
      using gen::gl::v3_2::function::gl_draw_range_elements_base_vertex;
      using gen::gl::v3_2::function::gl_multi_draw_elements_base_vertex;
      using gen::gl::v3_2::function::gl_provoking_vertex;
      using gen::gl::v3_2::function::gl_client_wait_sync;
      using gen::gl::v3_2::function::gl_delete_sync;
      using gen::gl::v3_2::function::gl_fence_sync;
      //      using gen::gl::v3_2::function::gl_get_integer;
      using gen::gl::v3_2::function::gl_get_sync;
      using gen::gl::v3_2::function::gl_is_sync;
      using gen::gl::v3_2::function::gl_wait_sync;
      using gen::gl::v3_2::function::gl_get_multisample;
      using gen::gl::v3_2::function::gl_sample_mask;
      using gen::gl::v3_2::function::gl_tex_image_2d_multisample;
      using gen::gl::v3_2::function::gl_tex_image_3d_multisample;

      using gen::gl::v3_3::function::gl_vertex_attrib_divisor;

      using gen::gl::v3_3::function::gl_bind_frag_data_location_indexed;
      using gen::gl::v3_3::function::gl_get_frag_data_index;
      using gen::gl::v3_3::function::gl_bind_sampler;
      using gen::gl::v3_3::function::gl_delete_samplers;
      using gen::gl::v3_3::function::gl_gen_samplers;
      using gen::gl::v3_3::function::gl_get_sampler_parameter;
      using gen::gl::v3_3::function::gl_get_sampler_parameter_integer;
      using gen::gl::v3_3::function::gl_is_sampler;
      using gen::gl::v3_3::function::gl_sampler_parameter;
      using gen::gl::v3_3::function::gl_sampler_parameter_integer;
      //      using gen::gl::v3_3::function::gl_get_query_object;
      using gen::gl::v3_3::function::gl_query_counter;
      using gen::gl::v3_3::function::gl_color_3_packed;
      using gen::gl::v3_3::function::gl_color_4_packed;
      using gen::gl::v3_3::function::gl_multi_tex_coord_1_packed;
      using gen::gl::v3_3::function::gl_multi_tex_coord_2_packed;
      using gen::gl::v3_3::function::gl_multi_tex_coord_3_packed;
      using gen::gl::v3_3::function::gl_multi_tex_coord_4_packed;
      using gen::gl::v3_3::function::gl_normal_3_packed;
      using gen::gl::v3_3::function::gl_secondary_color_3_packed;
      using gen::gl::v3_3::function::gl_tex_coord_1_packed;
      using gen::gl::v3_3::function::gl_tex_coord_2_packed;
      using gen::gl::v3_3::function::gl_tex_coord_3_packed;
      using gen::gl::v3_3::function::gl_tex_coord_4_packed;
      using gen::gl::v3_3::function::gl_vertex_2_packed;
      using gen::gl::v3_3::function::gl_vertex_3_packed;
      using gen::gl::v3_3::function::gl_vertex_4_packed;
      using gen::gl::v3_3::function::gl_vertex_attrib_1_packed;
      using gen::gl::v3_3::function::gl_vertex_attrib_2_packed;
      using gen::gl::v3_3::function::gl_vertex_attrib_3_packed;
      using gen::gl::v3_3::function::gl_vertex_attrib_4_packed;

      using gen::gl::v4_0::function::gl_draw_arrays_indirect;
      using gen::gl::v4_0::function::gl_draw_elements_indirect;
      //      using gen::gl::v4_0::function::gl_get_uniform;
      //      using gen::gl::v4_0::function::gl_uniform_1;
      //      using gen::gl::v4_0::function::gl_uniform_2;
      //      using gen::gl::v4_0::function::gl_uniform_3;
      //      using gen::gl::v4_0::function::gl_uniform_4;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_2;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_2x3;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_2x4;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_3;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_3x2;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_3x4;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_4;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_4x2;
      //      using gen::gl::v4_0::function::gl_uniform_matrix_4x3;
      using gen::gl::v4_0::function::gl_get_active_subroutine_name;
      using gen::gl::v4_0::function::gl_get_active_subroutine_uniform;
      using gen::gl::v4_0::function::gl_get_active_subroutine_uniform_name;
      using gen::gl::v4_0::function::gl_get_program_stage;
      using gen::gl::v4_0::function::gl_get_subroutine_index;
      using gen::gl::v4_0::function::gl_get_subroutine_uniform_location;
      using gen::gl::v4_0::function::gl_get_uniform_subroutine;
      using gen::gl::v4_0::function::gl_uniform_subroutines;
      using gen::gl::v4_0::function::gl_patch_parameter;
      using gen::gl::v4_0::function::gl_bind_transform_feedback;
      using gen::gl::v4_0::function::gl_delete_transform_feedbacks;
      using gen::gl::v4_0::function::gl_draw_transform_feedback;
      using gen::gl::v4_0::function::gl_gen_transform_feedbacks;
      using gen::gl::v4_0::function::gl_is_transform_feedback;
      using gen::gl::v4_0::function::gl_pause_transform_feedback;
      using gen::gl::v4_0::function::gl_resume_transform_feedback;
      using gen::gl::v4_0::function::gl_begin_query_indexed;
      using gen::gl::v4_0::function::gl_draw_transform_feedback_stream;
      using gen::gl::v4_0::function::gl_end_query_indexed;
      using gen::gl::v4_0::function::gl_get_query_indexed;

      //      using gen::gl::v4_0::function::gl_blend_equation;
      //      using gen::gl::v4_0::function::gl_blend_equation_separate;
      //      using gen::gl::v4_0::function::gl_blend_func;
      //      using gen::gl::v4_0::function::gl_blend_func_separate;
      //      using gen::gl::v4_0::function::gl_min_sample_shading;

      //      using gen::gl::v4_1::function::gl_clear_depth;
      //      using gen::gl::v4_1::function::gl_depth_range;
      using gen::gl::v4_1::function::gl_get_shader_precision_format;
      using gen::gl::v4_1::function::gl_release_shader_compiler;
      using gen::gl::v4_1::function::gl_shader_binary;
      using gen::gl::v4_1::function::gl_get_program_binary;
      using gen::gl::v4_1::function::gl_program_binary;
      using gen::gl::v4_1::function::gl_program_parameter;
      using gen::gl::v4_1::function::gl_active_shader_program;
      using gen::gl::v4_1::function::gl_bind_program_pipeline;
      using gen::gl::v4_1::function::gl_create_shader_program;
      using gen::gl::v4_1::function::gl_delete_program_pipelines;
      using gen::gl::v4_1::function::gl_gen_program_pipelines;
      using gen::gl::v4_1::function::gl_get_program_pipeline;
      using gen::gl::v4_1::function::gl_get_program_pipeline_info_log;
      using gen::gl::v4_1::function::gl_is_program_pipeline;
      using gen::gl::v4_1::function::gl_program_uniform_1;
      using gen::gl::v4_1::function::gl_program_uniform_2;
      using gen::gl::v4_1::function::gl_program_uniform_3;
      using gen::gl::v4_1::function::gl_program_uniform_4;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_2;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_2x3;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_2x4;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_3;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_3x2;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_3x4;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_4;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_4x2;
      using gen::gl::v4_1::function::gl_program_uniform_matrix_4x3;
      using gen::gl::v4_1::function::gl_use_program_stages;
      using gen::gl::v4_1::function::gl_validate_program_pipeline;
      using gen::gl::v4_1::function::gl_get_vertex_attrib_large;
      using gen::gl::v4_1::function::gl_vertex_attrib_1_large;
      using gen::gl::v4_1::function::gl_vertex_attrib_2_large;
      using gen::gl::v4_1::function::gl_vertex_attrib_3_large;
      using gen::gl::v4_1::function::gl_vertex_attrib_4_large;
      using gen::gl::v4_1::function::gl_vertex_attrib_pointer_large_integer;
      using gen::gl::v4_1::function::gl_depth_range_array;
      using gen::gl::v4_1::function::gl_depth_range_indexed;
      using gen::gl::v4_1::function::gl_get_double_indexed;
      using gen::gl::v4_1::function::gl_get_float_indexed;
      using gen::gl::v4_1::function::gl_scissor_array;
      using gen::gl::v4_1::function::gl_scissor_indexed;
      using gen::gl::v4_1::function::gl_viewport_array;
      using gen::gl::v4_1::function::gl_viewport_indexed;

    } // namespace function

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_FUNCTION_FWD_HPP_ */
