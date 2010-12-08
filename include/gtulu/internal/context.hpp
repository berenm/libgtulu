/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_CONTEXT_HPP_
#define GTULU_INTERNAL_CONTEXT_HPP_

#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include <boost/tuple/tuple.hpp>
#include <boost/array.hpp>

namespace gtulu {
  namespace internal {

    namespace context {
      namespace parameter {
        // Table 6.4. Current Values and Associated Data
        // ......................................................................

        typedef cst::gl_patch_vertices gl_patch_vertices;
        typedef cst::gl_patch_default_outer_level gl_patch_default_outer_level;
        typedef cst::gl_patch_default_inner_level gl_patch_default_inner_level;

        // Table 6.5. Vertex Array Object State ((cont.)
        // ......................................................................

        typedef cst::gl_vertex_attrib_array_enabled gl_vertex_attrib_array_enabled;
        typedef cst::gl_vertex_attrib_array_size gl_vertex_attrib_array_size;
        typedef cst::gl_vertex_attrib_array_stride gl_vertex_attrib_array_stride;
        typedef cst::gl_vertex_attrib_array_type gl_vertex_attrib_array_type;
        typedef cst::gl_vertex_attrib_array_normalized gl_vertex_attrib_array_normalized;
        typedef cst::gl_vertex_attrib_array_integer gl_vertex_attrib_array_integer;
        typedef cst::gl_vertex_attrib_array_pointer gl_vertex_attrib_array_pointer;
        typedef cst::gl_vertex_attrib_array_divisor gl_vertex_attrib_array_divisor;

        // Table 6.6. Vertex Array Object State ((cont.)
        // ......................................................................

        typedef cst::gl_element_array_buffer_binding gl_element_array_buffer_binding;
        typedef cst::gl_vertex_attrib_array_buffer_binding gl_vertex_attrib_array_buffer_binding;

        // Table 6.7. Vertex Array Data ((not in Vertex Array objects)
        // ......................................................................

        typedef cst::gl_array_buffer_binding gl_array_buffer_binding;
        typedef cst::gl_vertex_array_binding gl_vertex_array_binding;
        typedef cst::gl_primitive_restart gl_primitive_restart;
        typedef cst::gl_primitive_restart_index gl_primitive_restart_index;
        typedef cst::gl_draw_indirect_buffer_binding gl_draw_indirect_buffer_binding;

        // Table 6.8. Buffer Object State
        // ......................................................................

        typedef cst::gl_buffer_size gl_buffer_size;
        typedef cst::gl_buffer_usage gl_buffer_usage;
        typedef cst::gl_buffer_access gl_buffer_access;
        typedef cst::gl_buffer_access_flags gl_buffer_access_flags;
        typedef cst::gl_buffer_mapped gl_buffer_mapped;
        typedef cst::gl_buffer_map_pointer gl_buffer_map_pointer;
        typedef cst::gl_buffer_map_offset gl_buffer_map_offset;
        typedef cst::gl_buffer_map_length gl_buffer_map_length;

        // Table 6.9. Transformation state
        // ......................................................................

        typedef cst::gl_viewport gl_viewport;
        typedef cst::gl_depth_range gl_depth_range;
        typedef cst::gl_clip_distance0 gl_clip_distance0;
        typedef cst::gl_clip_distance1 gl_clip_distance1;
        typedef cst::gl_clip_distance2 gl_clip_distance2;
        typedef cst::gl_clip_distance3 gl_clip_distance3;
        typedef cst::gl_clip_distance4 gl_clip_distance4;
        typedef cst::gl_clip_distance5 gl_clip_distance5;
        typedef cst::gl_clip_distance6 gl_clip_distance6;
        typedef cst::gl_clip_distance7 gl_clip_distance7;
        typedef cst::gl_depth_clamp gl_depth_clamp;
        typedef cst::gl_transform_feedback_binding gl_transform_feedback_binding;

        // Table 6.10. Coloring
        // ......................................................................

        typedef cst::gl_clamp_read_color gl_clamp_read_color;
        typedef cst::gl_provoking_vertex gl_provoking_vertex;

        // Table 6.11. Rasterization
        // ......................................................................

        typedef cst::gl_point_size gl_point_size;
        typedef cst::gl_point_fade_threshold_size gl_point_fade_threshold_size;
        typedef cst::gl_point_sprite_coord_origin gl_point_sprite_coord_origin;
        typedef cst::gl_line_width gl_line_width;
        typedef cst::gl_line_smooth gl_line_smooth;

        // Table 6.12. Rasterization ((cont.)
        // ......................................................................

        typedef cst::gl_cull_face gl_cull_face;
        typedef cst::gl_cull_face_mode gl_cull_face_mode;
        typedef cst::gl_front_face gl_front_face;
        typedef cst::gl_polygon_smooth gl_polygon_smooth;
        typedef cst::gl_polygon_offset_factor gl_polygon_offset_factor;
        typedef cst::gl_polygon_offset_units gl_polygon_offset_units;
        typedef cst::gl_polygon_offset_point gl_polygon_offset_point;
        typedef cst::gl_polygon_offset_line gl_polygon_offset_line;
        typedef cst::gl_polygon_offset_fill gl_polygon_offset_fill;

        // Table 6.13. Multisampling
        // ......................................................................

        typedef cst::gl_multisample gl_multisample;
        typedef cst::gl_sample_alpha_to_coverage gl_sample_alpha_to_coverage;
        typedef cst::gl_sample_alpha_to_one gl_sample_alpha_to_one;
        typedef cst::gl_sample_coverage gl_sample_coverage;
        typedef cst::gl_sample_coverage_value gl_sample_coverage_value;
        typedef cst::gl_sample_coverage_invert gl_sample_coverage_invert;
        typedef cst::gl_sample_shading gl_sample_shading;
        typedef cst::gl_min_sample_shading_value gl_min_sample_shading_value;
        typedef cst::gl_sample_mask gl_sample_mask;
        typedef cst::gl_sample_mask_value gl_sample_mask_value;

        // Table 6.14. Textures ((state per texture unit and binding point)
        // ......................................................................

        typedef cst::gl_texture_binding_1d gl_texture_binding_1d;
        typedef cst::gl_texture_binding_2d gl_texture_binding_2d;
        typedef cst::gl_texture_binding_3d gl_texture_binding_3d;
        typedef cst::gl_texture_binding_1d_array gl_texture_binding_1d_array;
        typedef cst::gl_texture_binding_2d_array gl_texture_binding_2d_array;
        typedef cst::gl_texture_binding_cube_map_array gl_texture_binding_cube_map_array;
        typedef cst::gl_texture_binding_rectangle gl_texture_binding_rectangle;
        typedef cst::gl_texture_binding_buffer gl_texture_binding_buffer;
        typedef cst::gl_texture_binding_cube_map gl_texture_binding_cube_map;
        typedef cst::gl_texture_binding_2d_multisample gl_texture_binding_2d_multisample;
        typedef cst::gl_texture_binding_2d_multisample_array gl_texture_binding_2d_multisample_array;

        // Table 6.15. Textures ((state per texture unit and binding point)((cont.)
        // ..............................................................................

        typedef cst::gl_texture_1d gl_texture_1d;
        typedef cst::gl_texture_2d gl_texture_2d;
        typedef cst::gl_texture_3d gl_texture_3d;
        typedef cst::gl_texture_1d_array gl_texture_1d_array;
        typedef cst::gl_texture_2d_array gl_texture_2d_array;
        typedef cst::gl_texture_cube_map_array gl_texture_cube_map_array;
        typedef cst::gl_texture_rectangle gl_texture_rectangle;
        typedef cst::gl_texture_cube_map_positive_x gl_texture_cube_map_positive_x;
        typedef cst::gl_texture_cube_map_negative_x gl_texture_cube_map_negative_x;
        typedef cst::gl_texture_cube_map_positive_y gl_texture_cube_map_positive_y;
        typedef cst::gl_texture_cube_map_negative_y gl_texture_cube_map_negative_y;
        typedef cst::gl_texture_cube_map_positive_z gl_texture_cube_map_positive_z;
        typedef cst::gl_texture_cube_map_negative_z gl_texture_cube_map_negative_z;
        typedef cst::gl_sampler_binding gl_sampler_binding;

        // Table 6.16. Textures ((state per texture object)
        // ......................................................................

        typedef cst::gl_texture_base_level gl_texture_base_level;
        typedef cst::gl_texture_max_level gl_texture_max_level;
        typedef cst::gl_texture_swizzle_r gl_texture_swizzle_r;
        typedef cst::gl_texture_swizzle_g gl_texture_swizzle_g;
        typedef cst::gl_texture_swizzle_b gl_texture_swizzle_b;
        typedef cst::gl_texture_swizzle_a gl_texture_swizzle_a;

        typedef cst::gl_texture_wrap_s gl_texture_wrap_s;
        typedef cst::gl_texture_wrap_t gl_texture_wrap_t;
        typedef cst::gl_texture_wrap_r gl_texture_wrap_r;
        typedef cst::gl_texture_mag_filter gl_texture_mag_filter;
        typedef cst::gl_texture_min_filter gl_texture_min_filter;
        typedef cst::gl_texture_border_color gl_texture_border_color;
        typedef cst::gl_texture_min_lod gl_texture_min_lod;
        typedef cst::gl_texture_max_lod gl_texture_max_lod;
        typedef cst::gl_texture_compare_mode gl_texture_compare_mode;
        typedef cst::gl_texture_compare_func gl_texture_compare_func;

        // Table 6.17. Textures ((state per texture image)
        // ......................................................................

        typedef cst::gl_texture_width gl_texture_width;
        typedef cst::gl_texture_height gl_texture_height;
        typedef cst::gl_texture_depth gl_texture_depth;
        typedef cst::gl_texture_samples gl_texture_samples;
        typedef cst::gl_texture_fixed_sample_locations gl_texture_fixed_sample_locations;
        typedef cst::gl_texture_internal_format gl_texture_internal_format;
        typedef cst::gl_texture_alpha_size gl_texture_alpha_size;
        typedef cst::gl_texture_blue_size gl_texture_blue_size;
        typedef cst::gl_texture_depth_size gl_texture_depth_size;
        typedef cst::gl_texture_green_size gl_texture_green_size;
        typedef cst::gl_texture_red_size gl_texture_red_size;
        typedef cst::gl_texture_stencil_size gl_texture_stencil_size;
        typedef cst::gl_texture_shared_size gl_texture_shared_size;
        typedef cst::gl_texture_alpha_type gl_texture_alpha_type;
        typedef cst::gl_texture_blue_type gl_texture_blue_type;
        typedef cst::gl_texture_depth_type gl_texture_depth_type;
        typedef cst::gl_texture_green_type gl_texture_green_type;
        typedef cst::gl_texture_red_type gl_texture_red_type;
        typedef cst::gl_texture_compressed gl_texture_compressed;
        typedef cst::gl_texture_compressed_image_size gl_texture_compressed_image_size;
        typedef cst::gl_texture_buffer_data_store_binding gl_texture_buffer_data_store_binding;

        // Table 6.18. Textures ((state per sampler object)
        // ......................................................................

        typedef cst::gl_texture_border_color gl_texture_border_color;
        typedef cst::gl_texture_min_filter gl_texture_min_filter;
        typedef cst::gl_texture_mag_filter gl_texture_mag_filter;
        typedef cst::gl_texture_wrap_s gl_texture_wrap_s;
        typedef cst::gl_texture_wrap_t gl_texture_wrap_t;
        typedef cst::gl_texture_wrap_r gl_texture_wrap_r;
        typedef cst::gl_texture_min_lod gl_texture_min_lod;
        typedef cst::gl_texture_max_lod gl_texture_max_lod;
        typedef cst::gl_texture_lod_bias gl_texture_lod_bias;
        typedef cst::gl_texture_compare_mode gl_texture_compare_mode;
        typedef cst::gl_texture_compare_func gl_texture_compare_func;

        typedef cst::gl_texture_lod_bias gl_texture_lod_bias;

        // Table 6.19. Texture Environment and Generation
        // ......................................................................

        typedef cst::gl_active_texture gl_active_texture;

        // Table 6.20. Pixel Operations
        // ......................................................................

        typedef cst::gl_scissor_test gl_scissor_test;
        typedef cst::gl_scissor_box gl_scissor_box;
        typedef cst::gl_stencil_test gl_stencil_test;
        typedef cst::gl_stencil_func gl_stencil_func;
        typedef cst::gl_stencil_value_mask gl_stencil_value_mask;
        typedef cst::gl_stencil_ref gl_stencil_ref;
        typedef cst::gl_stencil_fail gl_stencil_fail;
        typedef cst::gl_stencil_pass_depth_fail gl_stencil_pass_depth_fail;
        typedef cst::gl_stencil_pass_depth_pass gl_stencil_pass_depth_pass;
        typedef cst::gl_stencil_back_func gl_stencil_back_func;
        typedef cst::gl_stencil_back_value_mask gl_stencil_back_value_mask;
        typedef cst::gl_stencil_back_ref gl_stencil_back_ref;
        typedef cst::gl_stencil_back_fail gl_stencil_back_fail;
        typedef cst::gl_stencil_back_pass_depth_fail gl_stencil_back_pass_depth_fail;
        typedef cst::gl_stencil_back_pass_depth_pass gl_stencil_back_pass_depth_pass;
        typedef cst::gl_depth_test gl_depth_test;
        typedef cst::gl_depth_func gl_depth_func;

        // Table 6.21. Pixel Operations ((cont.)
        // ......................................................................

        typedef cst::gl_blend gl_blend;
        typedef cst::gl_blend_src_rgb gl_blend_src_rgb;
        typedef cst::gl_blend_src_alpha gl_blend_src_alpha;
        typedef cst::gl_blend_dst_rgb gl_blend_dst_rgb;
        typedef cst::gl_blend_dst_alpha gl_blend_dst_alpha;
        typedef cst::gl_blend_equation_rgb gl_blend_equation_rgb;
        typedef cst::gl_blend_equation_alpha gl_blend_equation_alpha;
        //        typedef cst::gl_blend_color gl_blend_color;
        typedef cst::gl_framebuffer_srgb gl_framebuffer_srgb;
        typedef cst::gl_dither gl_dither;
        typedef cst::gl_color_logic_op gl_color_logic_op;
        typedef cst::gl_logic_op_mode gl_logic_op_mode;

        // Table 6.22. Framebuffer Control
        // ......................................................................

        typedef cst::gl_color_writemask gl_color_writemask;
        typedef cst::gl_depth_writemask gl_depth_writemask;
        typedef cst::gl_stencil_writemask gl_stencil_writemask;
        typedef cst::gl_stencil_back_writemask gl_stencil_back_writemask;
        typedef cst::gl_color_clear_value gl_color_clear_value;
        typedef cst::gl_depth_clear_value gl_depth_clear_value;
        typedef cst::gl_stencil_clear_value gl_stencil_clear_value;

        // Table 6.23. Framebuffer ((state per target binding point)
        // ......................................................................

        typedef cst::gl_draw_framebuffer_binding gl_draw_framebuffer_binding;
        typedef cst::gl_read_framebuffer_binding gl_read_framebuffer_binding;

        // Table 6.24. Framebuffer ((state per framebuffer object)
        // ......................................................................

        typedef cst::gl_draw_buffer gl_draw_buffer;
        typedef cst::gl_draw_buffer0 gl_draw_buffer0;
        typedef cst::gl_draw_buffer1 gl_draw_buffer1;
        typedef cst::gl_draw_buffer2 gl_draw_buffer2;
        typedef cst::gl_draw_buffer3 gl_draw_buffer3;
        typedef cst::gl_draw_buffer4 gl_draw_buffer4;
        typedef cst::gl_draw_buffer5 gl_draw_buffer5;
        typedef cst::gl_draw_buffer6 gl_draw_buffer6;
        typedef cst::gl_draw_buffer7 gl_draw_buffer7;
        typedef cst::gl_draw_buffer8 gl_draw_buffer8;
        typedef cst::gl_draw_buffer9 gl_draw_buffer9;
        typedef cst::gl_draw_buffer10 gl_draw_buffer10;
        typedef cst::gl_draw_buffer11 gl_draw_buffer11;
        typedef cst::gl_draw_buffer12 gl_draw_buffer12;
        typedef cst::gl_draw_buffer13 gl_draw_buffer13;
        typedef cst::gl_draw_buffer14 gl_draw_buffer14;
        typedef cst::gl_draw_buffer15 gl_draw_buffer15;
        typedef cst::gl_read_buffer gl_read_buffer;

        // Table 6.25. Framebuffer ((state per attachment point)
        // ......................................................................

        typedef cst::gl_framebuffer_attachment_object_type gl_framebuffer_attachment_object_type;
        typedef cst::gl_framebuffer_attachment_object_name gl_framebuffer_attachment_object_name;
        typedef cst::gl_framebuffer_attachment_texture_level gl_framebuffer_attachment_texture_level;
        typedef cst::gl_framebuffer_attachment_texture_cube_map_face gl_framebuffer_attachment_texture_cube_map_face;
        typedef cst::gl_framebuffer_attachment_texture_layer gl_framebuffer_attachment_texture_layer;
        typedef cst::gl_framebuffer_attachment_layered gl_framebuffer_attachment_layered;
        typedef cst::gl_framebuffer_attachment_color_encoding gl_framebuffer_attachment_color_encoding;
        typedef cst::gl_framebuffer_attachment_component_type gl_framebuffer_attachment_component_type;
        typedef cst::gl_framebuffer_attachment_alpha_size gl_framebuffer_attachment_alpha_size;
        typedef cst::gl_framebuffer_attachment_blue_size gl_framebuffer_attachment_blue_size;
        typedef cst::gl_framebuffer_attachment_depth_size gl_framebuffer_attachment_depth_size;
        typedef cst::gl_framebuffer_attachment_green_size gl_framebuffer_attachment_green_size;
        typedef cst::gl_framebuffer_attachment_red_size gl_framebuffer_attachment_red_size;
        typedef cst::gl_framebuffer_attachment_stencil_size gl_framebuffer_attachment_stencil_size;

        // Table 6.26. Renderbuffer ((state per target and binding point)
        // ......................................................................

        typedef cst::gl_renderbuffer_binding gl_renderbuffer_binding;

        // Table 6.27. Renderbuffer ((state per renderbuffer object)
        // ......................................................................

        typedef cst::gl_renderbuffer_width gl_renderbuffer_width;
        typedef cst::gl_renderbuffer_height gl_renderbuffer_height;
        typedef cst::gl_renderbuffer_internal_format gl_renderbuffer_internal_format;
        typedef cst::gl_renderbuffer_red_size gl_renderbuffer_red_size;
        typedef cst::gl_renderbuffer_green_size gl_renderbuffer_green_size;
        typedef cst::gl_renderbuffer_blue_size gl_renderbuffer_blue_size;
        typedef cst::gl_renderbuffer_alpha_size gl_renderbuffer_alpha_size;
        typedef cst::gl_renderbuffer_depth_size gl_renderbuffer_depth_size;
        typedef cst::gl_renderbuffer_stencil_size gl_renderbuffer_stencil_size;
        typedef cst::gl_renderbuffer_samples gl_renderbuffer_samples;

        // Table 6.28. Pixels
        // ......................................................................

        typedef cst::gl_unpack_swap_bytes gl_unpack_swap_bytes;
        typedef cst::gl_unpack_lsb_first gl_unpack_lsb_first;
        typedef cst::gl_unpack_image_height gl_unpack_image_height;
        typedef cst::gl_unpack_skip_images gl_unpack_skip_images;
        typedef cst::gl_unpack_row_length gl_unpack_row_length;
        typedef cst::gl_unpack_skip_rows gl_unpack_skip_rows;
        typedef cst::gl_unpack_skip_pixels gl_unpack_skip_pixels;
        typedef cst::gl_unpack_alignment gl_unpack_alignment;
        typedef cst::gl_pack_swap_bytes gl_pack_swap_bytes;
        typedef cst::gl_pack_lsb_first gl_pack_lsb_first;
        typedef cst::gl_pack_image_height gl_pack_image_height;
        typedef cst::gl_pack_skip_images gl_pack_skip_images;
        typedef cst::gl_pack_row_length gl_pack_row_length;
        typedef cst::gl_pack_skip_rows gl_pack_skip_rows;
        typedef cst::gl_pack_skip_pixels gl_pack_skip_pixels;
        typedef cst::gl_pack_alignment gl_pack_alignment;
        typedef cst::gl_pixel_pack_buffer_binding gl_pixel_pack_buffer_binding;
        typedef cst::gl_pixel_unpack_buffer_binding gl_pixel_unpack_buffer_binding;

        // Table 6.29. Shader Object State
        // ......................................................................

        typedef cst::gl_shader_type gl_shader_type;
        typedef cst::gl_delete_status gl_delete_status;
        typedef cst::gl_compile_status gl_compile_status;
        typedef cst::gl_info_log_length gl_info_log_length;
        typedef cst::gl_shader_source_length gl_shader_source_length;

        // Table 6.30. Program Object State
        // ......................................................................

        typedef cst::gl_current_program gl_current_program;
        typedef cst::gl_link_status gl_link_status;
        typedef cst::gl_validate_status gl_validate_status;
        typedef cst::gl_attached_shaders gl_attached_shaders;
        typedef cst::gl_active_uniforms gl_active_uniforms;
        typedef cst::gl_active_uniform_max_length gl_active_uniform_max_length;
        typedef cst::gl_active_attributes gl_active_attributes;

        typedef cst::gl_info_log_length gl_info_log_length;
        typedef cst::gl_delete_status gl_delete_status;

        // Table 6.31. Program Object State ((cont.)
        // ......................................................................

        typedef cst::gl_active_attribute_max_length gl_active_attribute_max_length;
        typedef cst::gl_geometry_vertices_out gl_geometry_vertices_out;
        typedef cst::gl_geometry_input_type gl_geometry_input_type;
        typedef cst::gl_geometry_output_type gl_geometry_output_type;
        typedef cst::gl_transform_feedback_buffer_mode gl_transform_feedback_buffer_mode;
        typedef cst::gl_transform_feedback_varyings gl_transform_feedback_varyings;
        typedef cst::gl_transform_feedback_varying_max_length gl_transform_feedback_varying_max_length;
        typedef cst::gl_geometry_shader_invocations gl_geometry_shader_invocations;

        // Table 6.32. Program Object State ((cont.)
        // ......................................................................

        typedef cst::gl_uniform_buffer_binding gl_uniform_buffer_binding;
        typedef cst::gl_uniform_buffer_start gl_uniform_buffer_start;
        typedef cst::gl_uniform_buffer_size gl_uniform_buffer_size;
        typedef cst::gl_active_uniform_blocks gl_active_uniform_blocks;
        typedef cst::gl_active_uniform_block_max_name_length gl_active_uniform_block_max_name_length;
        typedef cst::gl_uniform_type gl_uniform_type;
        typedef cst::gl_uniform_size gl_uniform_size;
        typedef cst::gl_uniform_name_length gl_uniform_name_length;
        typedef cst::gl_uniform_block_index gl_uniform_block_index;
        typedef cst::gl_uniform_offset gl_uniform_offset;

        typedef cst::gl_uniform_buffer_binding gl_uniform_buffer_binding;

        // Table 6.33. Program Object State ((cont.)
        // ......................................................................

        typedef cst::gl_uniform_array_stride gl_uniform_array_stride;
        typedef cst::gl_uniform_matrix_stride gl_uniform_matrix_stride;
        typedef cst::gl_uniform_is_row_major gl_uniform_is_row_major;
        typedef cst::gl_uniform_block_binding gl_uniform_block_binding;
        typedef cst::gl_uniform_block_data_size gl_uniform_block_data_size;
        typedef cst::gl_uniform_block_active_uniforms gl_uniform_block_active_uniforms;
        typedef cst::gl_uniform_block_active_uniform_indices gl_uniform_block_active_uniform_indices;
        typedef cst::gl_uniform_block_referenced_by_vertex_shader gl_uniform_block_referenced_by_vertex_shader;
        //        typedef cst::gl_uniform_block_referenced_by_geometry_shader gl_uniform_block_referenced_by_geometry_shader;
        typedef cst::gl_uniform_block_referenced_by_fragment_shader gl_uniform_block_referenced_by_fragment_shader;
        typedef cst::gl_uniform_block_referenced_by_tess_control_shader
            gl_uniform_block_referenced_by_tess_control_shader;

        typedef cst::gl_uniform_block_referenced_by_tess_evaluation_shader
            gl_uniform_block_referenced_by_tess_evalution_shader;

        // Table 6.34. Program Object State ((cont.)
        // ......................................................................

        typedef cst::gl_tess_control_output_vertices gl_tess_control_output_vertices;
        typedef cst::gl_tess_gen_mode gl_tess_gen_mode;
        typedef cst::gl_tess_gen_spacing gl_tess_gen_spacing;
        typedef cst::gl_tess_gen_vertex_order gl_tess_gen_vertex_order;
        typedef cst::gl_tess_gen_point_mode gl_tess_gen_point_mode;

        // Table 6.35. Program Object State ((cont.)
        // ......................................................................

        typedef cst::gl_active_subroutine_uniform_locations gl_active_subroutine_uniform_locations;
        typedef cst::gl_active_subroutine_uniforms gl_active_subroutine_uniforms;
        typedef cst::gl_active_subroutines gl_active_subroutines;
        typedef cst::gl_active_subroutine_uniform_max_length gl_active_subroutine_uniform_max_length;
        typedef cst::gl_active_subroutine_max_length gl_active_subroutine_max_length;
        typedef cst::gl_num_compatible_subroutines gl_num_compatible_subroutines;
        typedef cst::gl_compatible_subroutines gl_compatible_subroutines;

        typedef cst::gl_uniform_size gl_uniform_size;
        typedef cst::gl_uniform_name_length gl_uniform_name_length;

        // Table 6.36. Vertex and Geometry Shader State
        // ......................................................................

        typedef cst::gl_current_vertex_attrib gl_current_vertex_attrib;
        typedef cst::gl_program_point_size gl_program_point_size;

        // Table 6.37. Query Object State
        // ......................................................................

        typedef cst::gl_query_result gl_query_result;
        typedef cst::gl_query_result_available gl_query_result_available;

        // Table 6.38. Transform Feedback State
        // ......................................................................

        typedef cst::gl_transform_feedback_buffer_binding gl_transform_feedback_buffer_binding;
        typedef cst::gl_transform_feedback_buffer_start gl_transform_feedback_buffer_start;
        typedef cst::gl_transform_feedback_buffer_size gl_transform_feedback_buffer_size;

        typedef cst::gl_transform_feedback_buffer_binding gl_transform_feedback_buffer_binding;

        // Table 6.39. Sync ((state per sync object)
        // ......................................................................

        typedef cst::gl_object_type gl_object_type;
        typedef cst::gl_sync_status gl_sync_status;
        typedef cst::gl_sync_condition gl_sync_condition;
        typedef cst::gl_sync_flags gl_sync_flags;

        // Table 6.40. Hints
        // ......................................................................

        typedef cst::gl_line_smooth_hint gl_line_smooth_hint;
        typedef cst::gl_polygon_smooth_hint gl_polygon_smooth_hint;
        typedef cst::gl_texture_compression_hint gl_texture_compression_hint;
        typedef cst::gl_fragment_shader_derivative_hint gl_fragment_shader_derivative_hint;

        // Table 6.41. Implementation Dependent Values
        // ......................................................................

        typedef cst::gl_max_clip_distances gl_max_clip_distances;
        typedef cst::gl_subpixel_bits gl_subpixel_bits;
        typedef cst::gl_max_3d_texture_size gl_max_3d_texture_size;
        typedef cst::gl_max_texture_size gl_max_texture_size;
        typedef cst::gl_max_array_texture_layers gl_max_array_texture_layers;
        typedef cst::gl_max_texture_lod_bias gl_max_texture_lod_bias;
        typedef cst::gl_max_cube_map_texture_size gl_max_cube_map_texture_size;
        typedef cst::gl_max_renderbuffer_size gl_max_renderbuffer_size;

        // Table 6.42. Implementation Dependent Values ((cont.)
        // ......................................................................

        typedef cst::gl_max_viewport_dims gl_max_viewport_dims;
        typedef cst::gl_point_size_range gl_point_size_range;
        typedef cst::gl_point_size_granularity gl_point_size_granularity;

        // Table 6.43. Implementation Dependent Values ((cont.)
        // ......................................................................

        typedef cst::gl_aliased_line_width_range gl_aliased_line_width_range;
        typedef cst::gl_smooth_line_width_range gl_smooth_line_width_range;
        typedef cst::gl_smooth_line_width_granularity gl_smooth_line_width_granularity;
        typedef cst::gl_max_elements_indices gl_max_elements_indices;
        typedef cst::gl_max_elements_vertices gl_max_elements_vertices;
        typedef cst::gl_compressed_texture_formats gl_compressed_texture_formats;
        typedef cst::gl_num_compressed_texture_formats gl_num_compressed_texture_formats;
        typedef cst::gl_max_texture_buffer_size gl_max_texture_buffer_size;
        typedef cst::gl_max_rectangle_texture_size gl_max_rectangle_texture_size;

        // Table 6.44. Implementation Dependent Version and Extension Support
        // ......................................................................

        typedef cst::gl_extensions gl_extensions;
        typedef cst::gl_num_extensions gl_num_extensions;
        typedef cst::gl_major_version gl_major_version;
        typedef cst::gl_minor_version gl_minor_version;
        typedef cst::gl_context_flags gl_context_flags;
        typedef cst::gl_renderer gl_renderer;
        typedef cst::gl_shading_language_version gl_shading_language_version;
        typedef cst::gl_vendor gl_vendor;
        typedef cst::gl_version gl_version;

        // Table 6.45. Implementation Dependent Vertex Shader Limits
        // ......................................................................

        typedef cst::gl_max_vertex_attribs gl_max_vertex_attribs;
        typedef cst::gl_max_vertex_uniform_components gl_max_vertex_uniform_components;
        typedef cst::gl_max_vertex_uniform_blocks gl_max_vertex_uniform_blocks;
        typedef cst::gl_max_vertex_output_components gl_max_vertex_output_components;
        typedef cst::gl_max_vertex_texture_image_units gl_max_vertex_texture_image_units;

        // Table 6.46. Implementation Dependent Tessellation Shader Limits
        // ......................................................................

        typedef cst::gl_max_tess_gen_level gl_max_tess_gen_level;
        typedef cst::gl_max_patch_vertices gl_max_patch_vertices;
        typedef cst::gl_max_tess_control_uniform_components gl_max_tess_control_uniform_components;
        typedef cst::gl_max_tess_evaluation_uniform_components gl_max_tess_evaluation_uniform_components;
        typedef cst::gl_max_tess_control_texture_image_units gl_max_tess_control_texture_image_units;
        typedef cst::gl_max_tess_evaluation_texture_image_units gl_max_tess_evaluation_texture_image_units;
        typedef cst::gl_max_tess_control_output_components gl_max_tess_control_output_components;
        typedef cst::gl_max_tess_patch_components gl_max_tess_patch_components;
        typedef cst::gl_max_tess_control_total_output_components gl_max_tess_control_total_output_components;
        typedef cst::gl_max_tess_evaluation_output_components gl_max_tess_evaluation_output_components;
        typedef cst::gl_max_tess_control_input_components gl_max_tess_control_input_components;
        typedef cst::gl_max_tess_evaluation_input_components gl_max_tess_evaluation_input_components;
        typedef cst::gl_max_tess_control_uniform_blocks gl_max_tess_control_uniform_blocks;
        typedef cst::gl_max_tess_evaluation_uniform_blocks gl_max_tess_evaluation_uniform_blocks;

        // Table 6.47. Implementation Dependent Geometry Shader Limits
        // ......................................................................

        //        typedef cst::gl_max_geometry_uniform_blocks gl_max_geometry_uniform_blocks;
        typedef cst::gl_max_geometry_input_components gl_max_geometry_input_components;
        typedef cst::gl_max_geometry_output_components gl_max_geometry_output_components;
        typedef cst::gl_max_geometry_output_vertices gl_max_geometry_output_vertices;
        typedef cst::gl_max_geometry_total_output_components gl_max_geometry_total_output_components;
        typedef cst::gl_max_geometry_texture_image_units gl_max_geometry_texture_image_units;
        typedef cst::gl_max_geometry_shader_invocations gl_max_geometry_shader_invocations;
        typedef cst::gl_max_vertex_streams gl_max_vertex_streams;

        // Table 6.48. Implementation Dependent Fragment Processing Limits
        // ......................................................................

        typedef cst::gl_max_fragment_uniform_components gl_max_fragment_uniform_components;
        typedef cst::gl_max_fragment_uniform_blocks gl_max_fragment_uniform_blocks;
        typedef cst::gl_max_fragment_input_components gl_max_fragment_input_components;
        typedef cst::gl_max_texture_image_units gl_max_texture_image_units;
        typedef cst::gl_min_program_texel_offset gl_min_program_texel_offset;
        typedef cst::gl_max_program_texel_offset gl_max_program_texel_offset;
        typedef cst::gl_min_program_texture_gather_offset gl_min_program_texture_gather_offset;
        typedef cst::gl_max_program_texture_gather_offset gl_max_program_texture_gather_offset;

        // Table 6.49. Implementation Dependent Aggregate Shader Limits
        // ......................................................................

        typedef cst::gl_max_uniform_buffer_bindings gl_max_uniform_buffer_bindings;
        typedef cst::gl_max_uniform_block_size gl_max_uniform_block_size;
        typedef cst::gl_uniform_buffer_offset_alignment gl_uniform_buffer_offset_alignment;
        typedef cst::gl_max_combined_uniform_blocks gl_max_combined_uniform_blocks;
        typedef cst::gl_max_varying_components gl_max_varying_components;
        typedef cst::gl_max_combined_texture_image_units gl_max_combined_texture_image_units;
        typedef cst::gl_max_subroutines gl_max_subroutines;
        typedef cst::gl_max_subroutine_uniform_locations gl_max_subroutine_uniform_locations;

        // Table 6.50. Implementation Dependent Aggregate Shader Limits ((cont.)
        // ......................................................................

        typedef cst::gl_max_combined_vertex_uniform_components gl_max_combined_vertex_uniform_components;
        //        typedef cst::gl_max_combined_geometry_uniform_components gl_max_combined_geometry_uniform_components;
        typedef cst::gl_max_combined_fragment_uniform_components gl_max_combined_fragment_uniform_components;
        typedef cst::gl_max_combined_tess_control_uniform_components gl_max_combined_tess_control_uniform_components;
        typedef cst::gl_max_combined_tess_evaluation_uniform_components
            gl_max_combined_tess_evaluation_uniform_components;

        // † The minimum value for each stage is MAX_stage_UNIFORM_BLOCKS ×
        // MAX_UNIFORM_BLOCK_SIZE / 4 + MAX_stage_UNIFORM_COMPONENTS


        // Table 6.51. Implementation Dependent Values ((cont.)
        // ......................................................................

        typedef cst::gl_max_sample_mask_words gl_max_sample_mask_words;
        typedef cst::gl_max_color_texture_samples gl_max_color_texture_samples;
        typedef cst::gl_max_depth_texture_samples gl_max_depth_texture_samples;
        typedef cst::gl_max_integer_samples gl_max_integer_samples;
        typedef cst::gl_query_counter_bits gl_query_counter_bits;
        typedef cst::gl_max_server_wait_timeout gl_max_server_wait_timeout;
        typedef cst::gl_min_fragment_interpolation_offset gl_min_fragment_interpolation_offset;
        typedef cst::gl_max_fragment_interpolation_offset gl_max_fragment_interpolation_offset;
        typedef cst::gl_fragment_interpolation_offset_bits gl_fragment_interpolation_offset_bits;

        // Table 6.52. Implementation Dependent Transform Feedback Limits
        // ......................................................................

        typedef cst::gl_max_transform_feedback_interleaved_components gl_max_transform_feedback_interleaved_components;
        typedef cst::gl_max_transform_feedback_separate_attribs gl_max_transform_feedback_separate_attribs;
        typedef cst::gl_max_transform_feedback_separate_components gl_max_transform_feedback_separate_components;
        typedef cst::gl_max_transform_feedback_buffers gl_max_transform_feedback_buffers;

        // Table 6.53. Framebuffer Dependent Values
        // ......................................................................

        typedef cst::gl_max_draw_buffers gl_max_draw_buffers;
        typedef cst::gl_doublebuffer gl_doublebuffer;
        typedef cst::gl_stereo gl_stereo;
        typedef cst::gl_sample_buffers gl_sample_buffers;
        typedef cst::gl_samples gl_samples;
        typedef cst::gl_sample_position gl_sample_position;
        typedef cst::gl_max_color_attachments gl_max_color_attachments;
        typedef cst::gl_max_samples gl_max_samples;
        typedef cst::gl_max_dual_source_draw_buffers gl_max_dual_source_draw_buffers;

        // Table 6.54. Miscellaneous
        // ......................................................................

        typedef cst::gl_current_query gl_current_query;
        typedef cst::gl_copy_read_buffer gl_copy_read_buffer;
        typedef cst::gl_copy_write_buffer gl_copy_write_buffer;
        typedef cst::gl_texture_cube_map_seamless gl_texture_cube_map_seamless;

        typedef cst::gl_line_width_granularity gl_line_width_granularity;
        typedef cst::gl_line_width_range gl_line_width_range;
        typedef cst::gl_max_varying_floats gl_max_varying_floats;
        typedef cst::gl_max_geometry_uniform_components gl_max_geometry_uniform_components;
        typedef cst::gl_timestamp gl_timestamp;
        typedef cst::gl_vertex_program_point_size gl_vertex_program_point_size;
      } // namespace parameter

      template< typename return_type_t >
      struct gettor {
          template< typename parameter_t >
          static void get(return_type_t* data);

          template< typename parameter_t >
          static void get(::std::uint32_t index, return_type_t* data);
      };

#define DECLARE_GETTOR(return_type_m, function_m) \
      template< > \
      struct gettor< return_type_m > { \
          template< typename parameter_t > \
          static void get(return_type_m* data) { \
            fnc:: function_m ::call< parameter_t >(data); \
          } \
      };

#define DECLARE_GETTOR_INDEXED(return_type_m, function_m, indexed_function_m) \
      template< > \
      struct gettor< return_type_m > { \
          template< typename parameter_t > \
          static void get(return_type_m* data) { \
            fnc:: function_m ::call< parameter_t >(data); \
          } \
          \
          template< typename parameter_t > \
          static void get(::std::uint32_t index, return_type_m* data) { \
            fnc:: indexed_function_m ::call< parameter_t >(index, data); \
          } \
      };

      DECLARE_GETTOR(float, gl_get_floatv)
      DECLARE_GETTOR(double, gl_get_doublev)
      DECLARE_GETTOR_INDEXED(::std::uint8_t, gl_get_booleanv, gl_get_booleani_v)
      DECLARE_GETTOR_INDEXED(::std::int32_t, gl_get_integerv, gl_get_integeri_v)
      DECLARE_GETTOR_INDEXED(::std::int64_t, gl_get_integer_64_v, gl_get_integer_64_i_v)

#undef DECLARE_GETTOR_INDEXED
#undef DECLARE_GETTOR

      template< ::std::size_t size_t >
      struct sized_gettor {
          template< typename return_type_t >
          struct strong_gettor {
              typedef ::boost::array< return_type_t, size_t > gettor_return_type_t;

              template< typename parameter_t >
              static gettor_return_type_t get() {
                gettor_return_type_t data;
                gettor< return_type_t >::template get< parameter_t >(data.c_array());
                return data;
              }

              template< typename parameter_t >
              static gettor_return_type_t get(::std::uint32_t index_in) {
                gettor_return_type_t data;
                gettor< return_type_t >::template get< parameter_t >(index_in, data.c_array());
                return data;
              }
          };
      };

      template< >
      struct sized_gettor< 1 > {
          template< typename return_type_t >
          struct strong_gettor {
              typedef return_type_t gettor_return_type_t;

              template< typename parameter_t >
              static gettor_return_type_t get() {
                gettor_return_type_t data;
                gettor< return_type_t >::template get< parameter_t >(&data);
                return data;
              }

              template< typename parameter_t >
              static gettor_return_type_t get(::std::uint32_t index_in) {
                gettor_return_type_t data;
                gettor< return_type_t >::template get< parameter_t >(index_in, &data);
                return data;
              }
          };
      };

      template< >
      struct sized_gettor< 0 > {
          template< typename return_type_t >
          struct strong_gettor {
              typedef ::std::vector< return_type_t > gettor_return_type_t;

              template< typename parameter_t >
              static gettor_return_type_t get(::std::size_t size_in) {
                return_type_t* array = new return_type_t[size_in];
                gettor< return_type_t >::template get< parameter_t >(array);

                gettor_return_type_t data(array, array + size_in);
                delete[] array;
                return data;
              }
          };
      };

      template< typename parameter_t >
      struct parameter_gettor {
      };

#define DECLARE_GETTOR(parameter_m, size_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          template< typename return_type_t > \
          static ::boost::array< return_type_t, size_m > get() { \
            typedef typename sized_gettor< size_m >::strong_gettor< return_type_t > gettor_type_t; \
            return gettor_type_t::template get< parameter::parameter_m >(); \
          } \
      };

#define DECLARE_GETTOR_INDEXED(parameter_m, size_m, return_type_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          typedef sized_gettor< size_m >::strong_gettor< return_type_m > gettor_type_t; \
          typedef gettor_type_t::gettor_return_type_t gettor_return_type_t; \
          \
          static gettor_return_type_t get(::std::uint32_t index_in) { \
            return gettor_type_t::get< parameter::parameter_m >(index_in); \
          } \
      };

#define DECLARE_GETTOR_TYPED(parameter_m, size_m, return_type_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          typedef sized_gettor< size_m >::strong_gettor< return_type_m > gettor_type_t; \
          typedef gettor_type_t::gettor_return_type_t gettor_return_type_t; \
          \
          static gettor_return_type_t get() { \
            return gettor_type_t::get< parameter::parameter_m >(); \
          } \
      };

#define DECLARE_GETTOR_DYNAMIC(parameter_m, size_parameter_m, return_type_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          typedef sized_gettor< 0 >::strong_gettor< return_type_m > gettor_type_t; \
          typedef gettor_type_t::gettor_return_type_t gettor_return_type_t; \
          \
          static gettor_return_type_t get(){ \
            ::std::size_t size = parameter_gettor< parameter::size_parameter_m >::get(); \
            return gettor_type_t::get< parameter::parameter_m >(size); \
          } \
      };

      DECLARE_GETTOR_TYPED(gl_active_texture, 1, ::std::uint32_t)
      DECLARE_GETTOR_TYPED(gl_aliased_line_width_range, 2, float)
      DECLARE_GETTOR_TYPED(gl_smooth_line_width_range, 2, float)
      DECLARE_GETTOR(gl_smooth_line_width_granularity, 1)
      DECLARE_GETTOR_TYPED(gl_array_buffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend, 1, ::std::uint8_t)
      //      DECLARE_GETTOR(gl_blend_color, 4)
      DECLARE_GETTOR_TYPED(gl_blend_dst_alpha, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_dst_rgb, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_equation_alpha, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_equation_rgb, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_src_alpha, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_src_rgb, 1, ::std::int32_t)
      DECLARE_GETTOR(gl_color_clear_value, 4)
      DECLARE_GETTOR_TYPED(gl_color_logic_op, 1, ::std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_color_writemask, 4, ::std::uint8_t)

      DECLARE_GETTOR_TYPED(gl_num_compressed_texture_formats, 1, ::std::int32_t)

      DECLARE_GETTOR_DYNAMIC(gl_compressed_texture_formats, gl_num_compressed_texture_formats, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_cull_face, 1, ::std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_current_program, 1, ::std::int32_t)
      DECLARE_GETTOR(gl_depth_clear_value, 1)
      DECLARE_GETTOR_TYPED(gl_depth_func, 1, ::std::int32_t)
      DECLARE_GETTOR(gl_depth_range, 2)
      DECLARE_GETTOR_TYPED(gl_depth_test, 1, ::std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_depth_writemask, 1, ::std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_dither, 1, ::std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_doublebuffer, 1, ::std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_draw_buffer, 1, ::std::int32_t)
      //      DECLARE_GETTOR_TYPED(gl_draw_buffer_i, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_draw_framebuffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_read_framebuffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_element_array_buffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_renderbuffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_fragment_shader_derivative_hint, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_line_smooth, 1, ::std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_line_smooth_hint, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_line_width, 1, float)
      DECLARE_GETTOR_TYPED(gl_line_width_granularity, 1, float)
      DECLARE_GETTOR_TYPED(gl_line_width_range, 2, float)
      DECLARE_GETTOR_TYPED(gl_logic_op_mode, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_3d_texture_size, 1, ::std::int32_t)
      DECLARE_GETTOR(gl_max_clip_distances, 1)
      DECLARE_GETTOR_TYPED(gl_max_combined_fragment_uniform_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_combined_texture_image_units, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_combined_vertex_uniform_components, 1, ::std::int32_t)
      //      DECLARE_GETTOR_TYPED(gl_max_combined_geometry_uniform_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_varying_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_combined_uniform_blocks, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_cube_map_texture_size, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_draw_buffers, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_dual_source_draw_buffers, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_elements_indices, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_elements_vertices, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_fragment_uniform_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_fragment_uniform_blocks, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_fragment_input_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_min_program_texel_offset, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_program_texel_offset, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_rectangle_texture_size, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_texture_image_units, 1, ::std::int32_t)
      DECLARE_GETTOR(gl_max_texture_lod_bias, 1)
      DECLARE_GETTOR_TYPED(gl_max_texture_size, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_renderbuffer_size, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_array_texture_layers, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_texture_buffer_size, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_uniform_block_size, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_varying_floats, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_attribs, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_texture_image_units, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_texture_image_units, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_uniform_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_output_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_uniform_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_sample_mask_words, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_color_texture_samples, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_depth_texture_samples, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_integer_samples, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_server_wait_timeout, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_uniform_buffer_bindings, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_uniform_buffer_offset_alignment, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_uniform_blocks, 1, ::std::int32_t)
      //      DECLARE_GETTOR_TYPED(gl_max_geometry_uniform_blocks, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_input_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_output_components, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_viewport_dims, 2, ::std::int32_t)

      DECLARE_GETTOR_TYPED(gl_pack_alignment, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_image_height, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_lsb_first, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_pack_row_length, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_skip_images, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_skip_pixels, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_skip_rows, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_swap_bytes, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_pixel_pack_buffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pixel_unpack_buffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR(gl_point_fade_threshold_size, 1)
      DECLARE_GETTOR_TYPED(gl_provoking_vertex, 1, ::std::int32_t)
      DECLARE_GETTOR(gl_point_size, 1)
      DECLARE_GETTOR(gl_point_size_granularity, 1)
      DECLARE_GETTOR(gl_point_size_range, 2)
      DECLARE_GETTOR(gl_polygon_offset_factor, 1)
      DECLARE_GETTOR(gl_polygon_offset_units, 1)
      DECLARE_GETTOR_TYPED(gl_polygon_offset_fill, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_offset_line, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_offset_point, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_smooth, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_smooth_hint, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_read_buffer, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_sample_buffers, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_sample_coverage_value, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_sample_coverage_invert, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_sampler_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_samples, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_scissor_box, 4, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_scissor_test, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_fail, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_func, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_pass_depth_fail, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_pass_depth_pass, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_ref, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_value_mask, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_writemask, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_clear_value, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_fail, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_func, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_pass_depth_fail, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_pass_depth_pass, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_ref, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_test, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_stencil_value_mask, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_writemask, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stereo, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_subpixel_bits, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_1d, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_1d_array, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d_array, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d_multisample, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d_multisample_array, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_3d, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_buffer, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_cube_map, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_rectangle, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_compression_hint, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_buffer_data_store_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_timestamp, 1, ::std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_transform_feedback_buffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_INDEXED(gl_transform_feedback_buffer_start, 1, ::std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_transform_feedback_buffer_size, 1, ::std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_uniform_buffer_binding, 1, ::std::int32_t)
      DECLARE_GETTOR_INDEXED(gl_uniform_buffer_start, 1, ::std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_uniform_buffer_size, 1, ::std::int64_t)
      DECLARE_GETTOR_TYPED(gl_unpack_alignment, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_image_height, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_lsb_first, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_unpack_row_length, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_skip_images, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_skip_pixels, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_skip_rows, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_swap_bytes, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_num_extensions, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_major_version, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_minor_version, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_context_flags, 1, ::std::int32_t)
      DECLARE_GETTOR_TYPED(gl_vertex_program_point_size, 1, ::std::int8_t)
      DECLARE_GETTOR_TYPED(gl_viewport, 4, ::std::int32_t)

      DECLARE_GETTOR_TYPED(gl_max_color_attachments, 1, ::std::int32_t)

#undef DECLARE_GETTOR_TYPED
#undef DECLARE_GETTOR_INDEXED
#undef DECLARE_GETTOR

    } // namespace context

    namespace gic = ::gtulu::internal::context;
    namespace gicp = ::gtulu::internal::context::parameter;

  } // namespace internal
} // namespace gtulu


#endif /* GTULU_INTERNAL_CONTEXT_HPP_ */

