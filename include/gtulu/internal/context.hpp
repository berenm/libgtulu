/**
 * @file
 *
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE or copy at http://www.boost.org/LICENSE
 */

#ifndef GTULU_INTERNAL_CONTEXT_HPP_
#define GTULU_INTERNAL_CONTEXT_HPP_

#include "gtulu/namespaces.hpp"
#include "gtulu/opengl.hpp"
#include "gtulu/internal/constants.hpp"
#include "gtulu/internal/functions.hpp"

#include "gtulu/internal/context_info.hpp"

#include <boost/array.hpp>

namespace gtulu {
  namespace internal {

    namespace context {
      namespace parameter {
        // Table 6.4. Current Values and Associated Data
        // ......................................................................

        using cst::gl_patch_vertices;
        using cst::gl_patch_default_outer_level;
        using cst::gl_patch_default_inner_level;

        // Table 6.5. Vertex Array Object State ((cont.)
        // ......................................................................

        using cst::gl_vertex_attrib_array_enabled;
        using cst::gl_vertex_attrib_array_size;
        using cst::gl_vertex_attrib_array_stride;
        using cst::gl_vertex_attrib_array_type;
        using cst::gl_vertex_attrib_array_normalized;
        using cst::gl_vertex_attrib_array_integer;
        using cst::gl_vertex_attrib_array_pointer;
        using cst::gl_vertex_attrib_array_divisor;

        // Table 6.6. Vertex Array Object State ((cont.)
        // ......................................................................

        using cst::gl_element_array_buffer_binding;
        using cst::gl_vertex_attrib_array_buffer_binding;

        // Table 6.7. Vertex Array Data ((not in Vertex Array object)
        // ......................................................................

        using cst::gl_array_buffer_binding;
        using cst::gl_vertex_array_binding;
        using cst::gl_primitive_restart;
        using cst::gl_primitive_restart_index;
        using cst::gl_draw_indirect_buffer_binding;

        // Table 6.8. Buffer Object State
        // ......................................................................

        using cst::gl_buffer_size;
        using cst::gl_buffer_usage;
        using cst::gl_buffer_access;
        using cst::gl_buffer_access_flags;
        using cst::gl_buffer_mapped;
        using cst::gl_buffer_map_pointer;
        using cst::gl_buffer_map_offset;
        using cst::gl_buffer_map_length;

        // Table 6.9. Transformation state
        // ......................................................................

        using cst::gl_viewport;
        using cst::gl_depth_range;
        using cst::gl_clip_distance0;
        using cst::gl_clip_distance1;
        using cst::gl_clip_distance2;
        using cst::gl_clip_distance3;
        using cst::gl_clip_distance4;
        using cst::gl_clip_distance5;
        using cst::gl_clip_distance6;
        using cst::gl_clip_distance7;
        using cst::gl_depth_clamp;
        using cst::gl_transform_feedback_binding;

        // Table 6.10. Coloring
        // ......................................................................

        using cst::gl_clamp_read_color;
        using cst::gl_provoking_vertex;

        // Table 6.11. Rasterization
        // ......................................................................

        using cst::gl_point_size;
        using cst::gl_point_fade_threshold_size;
        using cst::gl_point_sprite_coord_origin;
        using cst::gl_line_width;
        using cst::gl_line_smooth;

        // Table 6.12. Rasterization ((cont.)
        // ......................................................................

        using cst::gl_cull_face;
        using cst::gl_cull_face_mode;
        using cst::gl_front_face;
        using cst::gl_polygon_smooth;
        using cst::gl_polygon_offset_factor;
        using cst::gl_polygon_offset_units;
        using cst::gl_polygon_offset_point;
        using cst::gl_polygon_offset_line;
        using cst::gl_polygon_offset_fill;

        // Table 6.13. Multisampling
        // ......................................................................

        using cst::gl_multisample;
        using cst::gl_sample_alpha_to_coverage;
        using cst::gl_sample_alpha_to_one;
        using cst::gl_sample_coverage;
        using cst::gl_sample_coverage_value;
        using cst::gl_sample_coverage_invert;
        using cst::gl_sample_shading;
        using cst::gl_min_sample_shading_value;
        using cst::gl_sample_mask;
        using cst::gl_sample_mask_value;

        // Table 6.14. Textures ((state per texture unit and binding point)
        // ......................................................................

        using cst::gl_texture_binding_1d;
        using cst::gl_texture_binding_2d;
        using cst::gl_texture_binding_3d;
        using cst::gl_texture_binding_1d_array;
        using cst::gl_texture_binding_2d_array;
        using cst::gl_texture_binding_cube_map_array;
        using cst::gl_texture_binding_rectangle;
        using cst::gl_texture_binding_buffer;
        using cst::gl_texture_binding_cube_map;
        using cst::gl_texture_binding_2d_multisample;
        using cst::gl_texture_binding_2d_multisample_array;

        // Table 6.15. Textures ((state per texture unit and binding point)((cont.)
        // ..............................................................................

        using cst::gl_texture_1d;
        using cst::gl_texture_2d;
        using cst::gl_texture_3d;
        using cst::gl_texture_1d_array;
        using cst::gl_texture_2d_array;
        using cst::gl_texture_cube_map_array;
        using cst::gl_texture_rectangle;
        using cst::gl_texture_cube_map_positive_x;
        using cst::gl_texture_cube_map_negative_x;
        using cst::gl_texture_cube_map_positive_y;
        using cst::gl_texture_cube_map_negative_y;
        using cst::gl_texture_cube_map_positive_z;
        using cst::gl_texture_cube_map_negative_z;
        using cst::gl_sampler_binding;

        // Table 6.16. Textures ((state per texture object)
        // ......................................................................

        using cst::gl_texture_base_level;
        using cst::gl_texture_max_level;
        using cst::gl_texture_swizzle_r;
        using cst::gl_texture_swizzle_g;
        using cst::gl_texture_swizzle_b;
        using cst::gl_texture_swizzle_a;

        using cst::gl_texture_wrap_s;
        using cst::gl_texture_wrap_t;
        using cst::gl_texture_wrap_r;
        using cst::gl_texture_mag_filter;
        using cst::gl_texture_min_filter;
        using cst::gl_texture_border_color;
        using cst::gl_texture_min_lod;
        using cst::gl_texture_max_lod;
        using cst::gl_texture_compare_mode;
        using cst::gl_texture_compare_func;

        // Table 6.17. Textures ((state per texture image)
        // ......................................................................

        using cst::gl_texture_width;
        using cst::gl_texture_height;
        using cst::gl_texture_depth;
        using cst::gl_texture_samples;
        using cst::gl_texture_fixed_sample_locations;
        using cst::gl_texture_internal_format;
        using cst::gl_texture_alpha_size;
        using cst::gl_texture_blue_size;
        using cst::gl_texture_depth_size;
        using cst::gl_texture_green_size;
        using cst::gl_texture_red_size;
        using cst::gl_texture_stencil_size;
        using cst::gl_texture_shared_size;
        using cst::gl_texture_alpha_type;
        using cst::gl_texture_blue_type;
        using cst::gl_texture_depth_type;
        using cst::gl_texture_green_type;
        using cst::gl_texture_red_type;
        using cst::gl_texture_compressed;
        using cst::gl_texture_compressed_image_size;
        using cst::gl_texture_buffer_data_store_binding;

        // Table 6.18. Textures ((state per sampler object)
        // ......................................................................

        using cst::gl_texture_border_color;
        using cst::gl_texture_min_filter;
        using cst::gl_texture_mag_filter;
        using cst::gl_texture_wrap_s;
        using cst::gl_texture_wrap_t;
        using cst::gl_texture_wrap_r;
        using cst::gl_texture_min_lod;
        using cst::gl_texture_max_lod;
        using cst::gl_texture_lod_bias;
        using cst::gl_texture_compare_mode;
        using cst::gl_texture_compare_func;

        using cst::gl_texture_lod_bias;

        // Table 6.19. Texture Environment and Generation
        // ......................................................................

        using cst::gl_active_texture;

        // Table 6.20. Pixel Operations
        // ......................................................................

        using cst::gl_scissor_test;
        using cst::gl_scissor_box;
        using cst::gl_stencil_test;
        using cst::gl_stencil_func;
        using cst::gl_stencil_value_mask;
        using cst::gl_stencil_ref;
        using cst::gl_stencil_fail;
        using cst::gl_stencil_pass_depth_fail;
        using cst::gl_stencil_pass_depth_pass;
        using cst::gl_stencil_back_func;
        using cst::gl_stencil_back_value_mask;
        using cst::gl_stencil_back_ref;
        using cst::gl_stencil_back_fail;
        using cst::gl_stencil_back_pass_depth_fail;
        using cst::gl_stencil_back_pass_depth_pass;
        using cst::gl_depth_test;
        using cst::gl_depth_func;

        // Table 6.21. Pixel Operations ((cont.)
        // ......................................................................

        using cst::gl_blend;
        using cst::gl_blend_src_rgb;
        using cst::gl_blend_src_alpha;
        using cst::gl_blend_dst_rgb;
        using cst::gl_blend_dst_alpha;
        using cst::gl_blend_equation_rgb;
        using cst::gl_blend_equation_alpha;
        //        using cst::gl_blend_color;
        using cst::gl_framebuffer_srgb;
        using cst::gl_dither;
        using cst::gl_color_logic_op;
        using cst::gl_logic_op_mode;

        // Table 6.22. Framebuffer Control
        // ......................................................................

        using cst::gl_color_writemask;
        using cst::gl_depth_writemask;
        using cst::gl_stencil_writemask;
        using cst::gl_stencil_back_writemask;
        using cst::gl_color_clear_value;
        using cst::gl_depth_clear_value;
        using cst::gl_stencil_clear_value;

        // Table 6.23. Framebuffer ((state per target binding point)
        // ......................................................................

        using cst::gl_draw_framebuffer_binding;
        using cst::gl_read_framebuffer_binding;

        // Table 6.24. Framebuffer ((state per framebuffer object)
        // ......................................................................

        using cst::gl_draw_buffer;
        using cst::gl_draw_buffer0;
        using cst::gl_draw_buffer1;
        using cst::gl_draw_buffer2;
        using cst::gl_draw_buffer3;
        using cst::gl_draw_buffer4;
        using cst::gl_draw_buffer5;
        using cst::gl_draw_buffer6;
        using cst::gl_draw_buffer7;
        using cst::gl_draw_buffer8;
        using cst::gl_draw_buffer9;
        using cst::gl_draw_buffer10;
        using cst::gl_draw_buffer11;
        using cst::gl_draw_buffer12;
        using cst::gl_draw_buffer13;
        using cst::gl_draw_buffer14;
        using cst::gl_draw_buffer15;
        using cst::gl_read_buffer;

        // Table 6.25. Framebuffer ((state per attachment point)
        // ......................................................................

        using cst::gl_framebuffer_attachment_object_type;
        using cst::gl_framebuffer_attachment_object_name;
        using cst::gl_framebuffer_attachment_texture_level;
        using cst::gl_framebuffer_attachment_texture_cube_map_face;
        using cst::gl_framebuffer_attachment_texture_layer;
        using cst::gl_framebuffer_attachment_layered;
        using cst::gl_framebuffer_attachment_color_encoding;
        using cst::gl_framebuffer_attachment_component_type;
        using cst::gl_framebuffer_attachment_alpha_size;
        using cst::gl_framebuffer_attachment_blue_size;
        using cst::gl_framebuffer_attachment_depth_size;
        using cst::gl_framebuffer_attachment_green_size;
        using cst::gl_framebuffer_attachment_red_size;
        using cst::gl_framebuffer_attachment_stencil_size;

        // Table 6.26. Renderbuffer ((state per target and binding point)
        // ......................................................................

        using cst::gl_renderbuffer_binding;

        // Table 6.27. Renderbuffer ((state per renderbuffer object)
        // ......................................................................

        using cst::gl_renderbuffer_width;
        using cst::gl_renderbuffer_height;
        using cst::gl_renderbuffer_internal_format;
        using cst::gl_renderbuffer_red_size;
        using cst::gl_renderbuffer_green_size;
        using cst::gl_renderbuffer_blue_size;
        using cst::gl_renderbuffer_alpha_size;
        using cst::gl_renderbuffer_depth_size;
        using cst::gl_renderbuffer_stencil_size;
        using cst::gl_renderbuffer_samples;

        // Table 6.28. Pixels
        // ......................................................................

        using cst::gl_unpack_swap_bytes;
        using cst::gl_unpack_lsb_first;
        using cst::gl_unpack_image_height;
        using cst::gl_unpack_skip_images;
        using cst::gl_unpack_row_length;
        using cst::gl_unpack_skip_rows;
        using cst::gl_unpack_skip_pixels;
        using cst::gl_unpack_alignment;
        using cst::gl_pack_swap_bytes;
        using cst::gl_pack_lsb_first;
        using cst::gl_pack_image_height;
        using cst::gl_pack_skip_images;
        using cst::gl_pack_row_length;
        using cst::gl_pack_skip_rows;
        using cst::gl_pack_skip_pixels;
        using cst::gl_pack_alignment;
        using cst::gl_pixel_pack_buffer_binding;
        using cst::gl_pixel_unpack_buffer_binding;

        // Table 6.29. Shader Object State
        // ......................................................................

        using cst::gl_shader_type;
        using cst::gl_delete_status;
        using cst::gl_compile_status;
        using cst::gl_info_log_length;
        using cst::gl_shader_source_length;

        // Table 6.30. Program Object State
        // ......................................................................

        using cst::gl_current_program;
        using cst::gl_link_status;
        using cst::gl_validate_status;
        using cst::gl_attached_shaders;
        using cst::gl_active_uniforms;
        using cst::gl_active_uniform_max_length;
        using cst::gl_active_attributes;

        using cst::gl_info_log_length;
        using cst::gl_delete_status;

        // Table 6.31. Program Object State ((cont.)
        // ......................................................................

        using cst::gl_active_attribute_max_length;
        using cst::gl_geometry_vertices_out;
        using cst::gl_geometry_input_type;
        using cst::gl_geometry_output_type;
        using cst::gl_transform_feedback_buffer_mode;
        using cst::gl_transform_feedback_varyings;
        using cst::gl_transform_feedback_varying_max_length;
        using cst::gl_geometry_shader_invocations;

        // Table 6.32. Program Object State ((cont.)
        // ......................................................................

        using cst::gl_uniform_buffer_binding;
        using cst::gl_uniform_buffer_start;
        using cst::gl_uniform_buffer_size;
        using cst::gl_active_uniform_blocks;
        using cst::gl_active_uniform_block_max_name_length;
        using cst::gl_uniform_type;
        using cst::gl_uniform_size;
        using cst::gl_uniform_name_length;
        using cst::gl_uniform_block_index;
        using cst::gl_uniform_offset;

        using cst::gl_uniform_buffer_binding;

        // Table 6.33. Program Object State ((cont.)
        // ......................................................................

        using cst::gl_uniform_array_stride;
        using cst::gl_uniform_matrix_stride;
        using cst::gl_uniform_is_row_major;
        using cst::gl_uniform_block_binding;
        using cst::gl_uniform_block_data_size;
        using cst::gl_uniform_block_active_uniforms;
        using cst::gl_uniform_block_active_uniform_indices;
        using cst::gl_uniform_block_referenced_by_vertex_shader;
        //        using cst::gl_uniform_block_referenced_by_geometry_shader;
        using cst::gl_uniform_block_referenced_by_fragment_shader;
        using cst::gl_uniform_block_referenced_by_tess_control_shader;

        typedef cst::gl_uniform_block_referenced_by_tess_evaluation_shader gl_uniform_block_referenced_by_tess_evalution_shader;

        // Table 6.34. Program Object State ((cont.)
        // ......................................................................

        using cst::gl_tess_control_output_vertices;
        using cst::gl_tess_gen_mode;
        using cst::gl_tess_gen_spacing;
        using cst::gl_tess_gen_vertex_order;
        using cst::gl_tess_gen_point_mode;

        // Table 6.35. Program Object State ((cont.)
        // ......................................................................

        using cst::gl_active_subroutine_uniform_locations;
        using cst::gl_active_subroutine_uniforms;
        using cst::gl_active_subroutines;
        using cst::gl_active_subroutine_uniform_max_length;
        using cst::gl_active_subroutine_max_length;
        using cst::gl_num_compatible_subroutines;
        using cst::gl_compatible_subroutines;

        using cst::gl_uniform_size;
        using cst::gl_uniform_name_length;

        // Table 6.36. Vertex and Geometry Shader State
        // ......................................................................

        using cst::gl_current_vertex_attrib;
        using cst::gl_program_point_size;

        // Table 6.37. Query Object State
        // ......................................................................

        using cst::gl_query_result;
        using cst::gl_query_result_available;

        // Table 6.38. Transform Feedback State
        // ......................................................................

        using cst::gl_transform_feedback_buffer_binding;
        using cst::gl_transform_feedback_buffer_start;
        using cst::gl_transform_feedback_buffer_size;

        using cst::gl_transform_feedback_buffer_binding;

        // Table 6.39. Sync ((state per sync object)
        // ......................................................................

        using cst::gl_object_type;
        using cst::gl_sync_status;
        using cst::gl_sync_condition;
        using cst::gl_sync_flags;

        // Table 6.40. Hints
        // ......................................................................

        using cst::gl_line_smooth_hint;
        using cst::gl_polygon_smooth_hint;
        using cst::gl_texture_compression_hint;
        using cst::gl_fragment_shader_derivative_hint;

        // Table 6.41. Implementation Dependent Values
        // ......................................................................

        using cst::gl_max_clip_distances;
        using cst::gl_subpixel_bits;
        using cst::gl_max_3d_texture_size;
        using cst::gl_max_texture_size;
        using cst::gl_max_array_texture_layers;
        using cst::gl_max_texture_lod_bias;
        using cst::gl_max_cube_map_texture_size;
        using cst::gl_max_renderbuffer_size;

        // Table 6.42. Implementation Dependent Values ((cont.)
        // ......................................................................

        using cst::gl_max_viewport_dims;
        using cst::gl_point_size_range;
        using cst::gl_point_size_granularity;

        // Table 6.43. Implementation Dependent Values ((cont.)
        // ......................................................................

        using cst::gl_aliased_line_width_range;
        using cst::gl_smooth_line_width_range;
        using cst::gl_smooth_line_width_granularity;
        using cst::gl_max_elements_indices;
        using cst::gl_max_elements_vertices;
        using cst::gl_compressed_texture_formats;
        using cst::gl_num_compressed_texture_formats;
        using cst::gl_max_texture_buffer_size;
        using cst::gl_max_rectangle_texture_size;

        // Table 6.44. Implementation Dependent Version and Extension Support
        // ......................................................................

        using cst::gl_extensions;
        using cst::gl_num_extensions;
        using cst::gl_major_version;
        using cst::gl_minor_version;
        using cst::gl_context_flags;
        using cst::gl_renderer;
        using cst::gl_shading_language_version;
        using cst::gl_vendor;
        using cst::gl_version;

        // Table 6.45. Implementation Dependent Vertex Shader Limits
        // ......................................................................

        using cst::gl_max_vertex_attribs;
        using cst::gl_max_vertex_uniform_components;
        using cst::gl_max_vertex_uniform_blocks;
        using cst::gl_max_vertex_output_components;
        using cst::gl_max_vertex_texture_image_units;

        // Table 6.46. Implementation Dependent Tessellation Shader Limits
        // ......................................................................

        using cst::gl_max_tess_gen_level;
        using cst::gl_max_patch_vertices;
        using cst::gl_max_tess_control_uniform_components;
        using cst::gl_max_tess_evaluation_uniform_components;
        using cst::gl_max_tess_control_texture_image_units;
        using cst::gl_max_tess_evaluation_texture_image_units;
        using cst::gl_max_tess_control_output_components;
        using cst::gl_max_tess_patch_components;
        using cst::gl_max_tess_control_total_output_components;
        using cst::gl_max_tess_evaluation_output_components;
        using cst::gl_max_tess_control_input_components;
        using cst::gl_max_tess_evaluation_input_components;
        using cst::gl_max_tess_control_uniform_blocks;
        using cst::gl_max_tess_evaluation_uniform_blocks;

        // Table 6.47. Implementation Dependent Geometry Shader Limits
        // ......................................................................

        //        using cst::gl_max_geometry_uniform_blocks;
        using cst::gl_max_geometry_input_components;
        using cst::gl_max_geometry_output_components;
        using cst::gl_max_geometry_output_vertices;
        using cst::gl_max_geometry_total_output_components;
        using cst::gl_max_geometry_texture_image_units;
        using cst::gl_max_geometry_shader_invocations;
        using cst::gl_max_vertex_streams;

        // Table 6.48. Implementation Dependent Fragment Processing Limits
        // ......................................................................

        using cst::gl_max_fragment_uniform_components;
        using cst::gl_max_fragment_uniform_blocks;
        using cst::gl_max_fragment_input_components;
        using cst::gl_max_texture_image_units;
        using cst::gl_min_program_texel_offset;
        using cst::gl_max_program_texel_offset;
        using cst::gl_min_program_texture_gather_offset;
        using cst::gl_max_program_texture_gather_offset;

        // Table 6.49. Implementation Dependent Aggregate Shader Limits
        // ......................................................................

        using cst::gl_max_uniform_buffer_bindings;
        using cst::gl_max_uniform_block_size;
        using cst::gl_uniform_buffer_offset_alignment;
        using cst::gl_max_combined_uniform_blocks;
        using cst::gl_max_varying_components;
        using cst::gl_max_combined_texture_image_units;
        using cst::gl_max_subroutines;
        using cst::gl_max_subroutine_uniform_locations;

        // Table 6.50. Implementation Dependent Aggregate Shader Limits ((cont.)
        // ......................................................................

        using cst::gl_max_combined_vertex_uniform_components;
        //        using cst::gl_max_combined_geometry_uniform_components;
        using cst::gl_max_combined_fragment_uniform_components;
        using cst::gl_max_combined_tess_control_uniform_components;
        using cst::gl_max_combined_tess_evaluation_uniform_components;

        // † The minimum value for each stage is MAX_stage_UNIFORM_BLOCKS ×
        // MAX_UNIFORM_BLOCK_SIZE / 4 + MAX_stage_UNIFORM_COMPONENTS

        // Table 6.51. Implementation Dependent Values ((cont.)
        // ......................................................................

        using cst::gl_max_sample_mask_words;
        using cst::gl_max_color_texture_samples;
        using cst::gl_max_depth_texture_samples;
        using cst::gl_max_integer_samples;
        using cst::gl_query_counter_bits;
        using cst::gl_max_server_wait_timeout;
        using cst::gl_min_fragment_interpolation_offset;
        using cst::gl_max_fragment_interpolation_offset;
        using cst::gl_fragment_interpolation_offset_bits;

        // Table 6.52. Implementation Dependent Transform Feedback Limits
        // ......................................................................

        using cst::gl_max_transform_feedback_interleaved_components;
        using cst::gl_max_transform_feedback_separate_attribs;
        using cst::gl_max_transform_feedback_separate_components;
        using cst::gl_max_transform_feedback_buffers;

        // Table 6.53. Framebuffer Dependent Values
        // ......................................................................

        using cst::gl_max_draw_buffers;
        using cst::gl_doublebuffer;
        using cst::gl_stereo;
        using cst::gl_sample_buffers;
        using cst::gl_samples;
        using cst::gl_sample_position;
        using cst::gl_max_color_attachments;
        using cst::gl_max_samples;
        using cst::gl_max_dual_source_draw_buffers;

        // Table 6.54. Miscellaneous
        // ......................................................................

        using cst::gl_current_query;
        using cst::gl_copy_read_buffer;
        using cst::gl_copy_write_buffer;
        using cst::gl_texture_cube_map_seamless;

        using cst::gl_line_width_granularity;
        using cst::gl_line_width_range;
        using cst::gl_max_varying_floats;
        using cst::gl_max_geometry_uniform_components;
        using cst::gl_timestamp;
        using cst::gl_vertex_program_point_size;

        using cst::gl_vendor;
        using cst::gl_renderer;
        using cst::gl_version;
        using cst::gl_shading_language_version;
      } // namespace parameter

      template< typename ReturnType >
      struct gettor {
          template< typename Parameter >
          static void get(ReturnType* data);

          template< typename Parameter >
          static void get(std::uint32_t const index_in, ReturnType* data);
      };

#define DECLARE_GETTOR(return_type_m, function_m) \
      template< > \
      struct gettor< return_type_m > { \
          template< typename Parameter > \
          static void get(return_type_m* data) { \
            fct:: function_m < Parameter >::call(data); \
          } \
      };

#define DECLARE_GETTOR_INDEXED(return_type_m, function_m, indexed_function_m) \
      template< > \
      struct gettor< return_type_m > { \
          template< typename Parameter > \
          static void get(return_type_m* data) { \
            fct:: function_m < Parameter >::call(data); \
          } \
          \
          template< typename Parameter > \
          static void get(std::uint32_t const index_in, return_type_m* data) { \
            fct:: indexed_function_m < Parameter >::call(index_in, data); \
          } \
      };

      template< >
      struct gettor< std::string > {
          template< typename Parameter >
          static void get(std::string* data) {
            GLubyte const* bytes = fct::gl_get_string< Parameter >::call();
            if (bytes != 0) {
              data->assign(reinterpret_cast< char const* >(bytes));
            }
          }
          template< typename Parameter >
          static void get(std::uint32_t const index_in, std::string* data) {
            GLubyte const* bytes = fct::gl_get_string< Parameter >::call(index_in);
            if (bytes != 0) {
              data->assign(reinterpret_cast< char const* >(bytes));
            }
          }
      };

      DECLARE_GETTOR(float, gl_get_float)
      DECLARE_GETTOR(double, gl_get_double)
      DECLARE_GETTOR_INDEXED(std::uint8_t, gl_get_boolean, gl_get_boolean_indexed)
      DECLARE_GETTOR_INDEXED(std::int32_t, gl_get_integer, gl_get_integer_indexed)
      DECLARE_GETTOR_INDEXED(std::int64_t, gl_get_integer, gl_get_integer_indexed)

#undef DECLARE_GETTOR_INDEXED
#undef DECLARE_GETTOR

      template< std::size_t Size >
      struct sized_gettor {
          template< typename ReturnType >
          struct strong_gettor {
              typedef boost::array< ReturnType, Size > gettor_return_type_t;

              template< typename Parameter >
              static gettor_return_type_t get() {
                gettor_return_type_t data;
                gettor< ReturnType >::template get< Parameter >(data.c_array());
                return data;
              }

              template< typename Parameter >
              static gettor_return_type_t get(std::uint32_t index_in) {
                gettor_return_type_t data;
                gettor< ReturnType >::template get< Parameter >(index_in, data.c_array());
                return data;
              }
          };
      };

      template< >
      struct sized_gettor< 1 > {
          template< typename ReturnType >
          struct strong_gettor {
              typedef ReturnType gettor_return_type_t;

              template< typename Parameter >
              static gettor_return_type_t get() {
                gettor_return_type_t data;
                gettor< ReturnType >::template get< Parameter >(&data);
                return data;
              }

              template< typename Parameter >
              static gettor_return_type_t get(std::uint32_t index_in) {
                gettor_return_type_t data;
                gettor< ReturnType >::template get< Parameter >(index_in, &data);
                return data;
              }
          };
      };

      template< >
      struct sized_gettor< 0 > {
          template< typename ReturnType >
          struct strong_gettor {
              typedef std::vector< ReturnType > gettor_return_type_t;

              template< typename Parameter >
              static gettor_return_type_t get(std::size_t size_in) {
                ReturnType* array = new ReturnType[size_in];
                gettor< ReturnType >::template get< Parameter >(array);

                gettor_return_type_t data(array, array + size_in);
                delete[] array;
                return data;
              }
          };
      };

      template< typename Parameter >
      struct parameter_gettor {
      };

#define DECLARE_GETTOR(parameter_m, size_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          template< typename ReturnType > \
          static boost::array< ReturnType, size_m > get() { \
            typedef typename sized_gettor< size_m >::strong_gettor< ReturnType > gettor_type_t; \
            return gettor_type_t::template get< parameter::parameter_m >(); \
          } \
      }; \
      typedef parameter_gettor< parameter::parameter_m > parameter_m;

#define DECLARE_GETTOR_INDEXED(parameter_m, size_m, return_type_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          typedef sized_gettor< size_m >::strong_gettor< return_type_m > gettor_type_t; \
          typedef gettor_type_t::gettor_return_type_t gettor_return_type_t; \
          \
          static gettor_return_type_t get(std::uint32_t index_in) { \
            return gettor_type_t::get< parameter::parameter_m >(index_in); \
          } \
      }; \
      typedef parameter_gettor< parameter::parameter_m > parameter_m;

#define DECLARE_GETTOR_TYPED(parameter_m, size_m, return_type_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          typedef sized_gettor< size_m >::strong_gettor< return_type_m > gettor_type_t; \
          typedef gettor_type_t::gettor_return_type_t gettor_return_type_t; \
          \
          static gettor_return_type_t get() { \
            return gettor_type_t::get< parameter::parameter_m >(); \
          } \
      }; \
      typedef parameter_gettor< parameter::parameter_m > parameter_m;

#define DECLARE_GETTOR_DYNAMIC(parameter_m, size_parameter_m, return_type_m) \
      template< > \
      struct parameter_gettor< parameter::parameter_m > { \
          typedef sized_gettor< 0 >::strong_gettor< return_type_m > gettor_type_t; \
          typedef gettor_type_t::gettor_return_type_t gettor_return_type_t; \
          \
          static gettor_return_type_t get(){ \
            std::size_t size = parameter_gettor< parameter::size_parameter_m >::get(); \
            return gettor_type_t::get< parameter::parameter_m >(size); \
          } \
      }; \
      typedef parameter_gettor< parameter::parameter_m > parameter_m;

      DECLARE_GETTOR_TYPED(gl_active_texture, 1, std::uint32_t)
      DECLARE_GETTOR_TYPED(gl_aliased_line_width_range, 2, float)
      DECLARE_GETTOR_TYPED(gl_smooth_line_width_range, 2, float)
      DECLARE_GETTOR(gl_smooth_line_width_granularity, 1)
      DECLARE_GETTOR_TYPED(gl_array_buffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend, 1, std::uint8_t)
      //      DECLARE_GETTOR(gl_blend_color, 4)
      DECLARE_GETTOR_TYPED(gl_blend_dst_alpha, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_dst_rgb, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_equation_alpha, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_equation_rgb, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_src_alpha, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_blend_src_rgb, 1, std::int32_t)
      DECLARE_GETTOR(gl_color_clear_value, 4)
      DECLARE_GETTOR_TYPED(gl_color_logic_op, 1, std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_color_writemask, 4, std::uint8_t)

      DECLARE_GETTOR_TYPED(gl_num_compressed_texture_formats, 1, std::int32_t)

      DECLARE_GETTOR_DYNAMIC(gl_compressed_texture_formats, gl_num_compressed_texture_formats, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_cull_face, 1, std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_current_program, 1, std::int32_t)
      DECLARE_GETTOR(gl_depth_clear_value, 1)
      DECLARE_GETTOR_TYPED(gl_depth_func, 1, std::int32_t)
      DECLARE_GETTOR(gl_depth_range, 2)
      DECLARE_GETTOR_TYPED(gl_depth_test, 1, std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_depth_writemask, 1, std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_dither, 1, std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_doublebuffer, 1, std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_draw_buffer, 1, std::int32_t)
      //      DECLARE_GETTOR_TYPED(gl_draw_buffer_i, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_draw_framebuffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_read_framebuffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_element_array_buffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_renderbuffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_fragment_shader_derivative_hint, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_line_smooth, 1, std::uint8_t)
      DECLARE_GETTOR_TYPED(gl_line_smooth_hint, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_line_width, 1, float)
      DECLARE_GETTOR_TYPED(gl_line_width_granularity, 1, float)
      DECLARE_GETTOR_TYPED(gl_line_width_range, 2, float)
      DECLARE_GETTOR_TYPED(gl_logic_op_mode, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_3d_texture_size, 1, std::int32_t)
      DECLARE_GETTOR(gl_max_clip_distances, 1)
      DECLARE_GETTOR_TYPED(gl_max_combined_fragment_uniform_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_combined_texture_image_units, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_combined_vertex_uniform_components, 1, std::int32_t)
      //      DECLARE_GETTOR_TYPED(gl_max_combined_geometry_uniform_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_varying_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_combined_uniform_blocks, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_cube_map_texture_size, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_draw_buffers, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_dual_source_draw_buffers, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_elements_indices, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_elements_vertices, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_fragment_uniform_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_fragment_uniform_blocks, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_fragment_input_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_min_program_texel_offset, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_program_texel_offset, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_rectangle_texture_size, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_texture_image_units, 1, std::int32_t)
      DECLARE_GETTOR(gl_max_texture_lod_bias, 1)
      DECLARE_GETTOR_TYPED(gl_max_texture_size, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_renderbuffer_size, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_array_texture_layers, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_texture_buffer_size, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_uniform_block_size, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_varying_floats, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_attribs, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_texture_image_units, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_texture_image_units, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_uniform_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_output_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_uniform_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_sample_mask_words, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_color_texture_samples, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_depth_texture_samples, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_integer_samples, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_server_wait_timeout, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_uniform_buffer_bindings, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_uniform_buffer_offset_alignment, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_vertex_uniform_blocks, 1, std::int32_t)
      //      DECLARE_GETTOR_TYPED(gl_max_geometry_uniform_blocks, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_input_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_geometry_output_components, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_max_viewport_dims, 2, std::int32_t)

      DECLARE_GETTOR_TYPED(gl_pack_alignment, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_image_height, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_lsb_first, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_pack_row_length, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_skip_images, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_skip_pixels, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_skip_rows, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pack_swap_bytes, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_pixel_pack_buffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_pixel_unpack_buffer_binding, 1, std::int32_t)
      DECLARE_GETTOR(gl_point_fade_threshold_size, 1)
      DECLARE_GETTOR_TYPED(gl_provoking_vertex, 1, std::int32_t)
      DECLARE_GETTOR(gl_point_size, 1)
      DECLARE_GETTOR(gl_point_size_granularity, 1)
      DECLARE_GETTOR(gl_point_size_range, 2)
      DECLARE_GETTOR(gl_polygon_offset_factor, 1)
      DECLARE_GETTOR(gl_polygon_offset_units, 1)
      DECLARE_GETTOR_TYPED(gl_polygon_offset_fill, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_offset_line, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_offset_point, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_smooth, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_polygon_smooth_hint, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_read_buffer, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_sample_buffers, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_sample_coverage_value, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_sample_coverage_invert, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_sampler_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_samples, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_scissor_box, 4, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_scissor_test, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_fail, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_func, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_pass_depth_fail, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_pass_depth_pass, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_ref, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_value_mask, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_back_writemask, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_clear_value, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_fail, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_func, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_pass_depth_fail, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_pass_depth_pass, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_ref, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_test, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_stencil_value_mask, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stencil_writemask, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_stereo, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_subpixel_bits, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_1d, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_1d_array, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d_array, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d_multisample, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_2d_multisample_array, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_3d, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_buffer, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_cube_map, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_binding_rectangle, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_compression_hint, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_texture_buffer_data_store_binding, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_timestamp, 1, std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_transform_feedback_buffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_INDEXED(gl_transform_feedback_buffer_start, 1, std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_transform_feedback_buffer_size, 1, std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_uniform_buffer_binding, 1, std::int32_t)
      DECLARE_GETTOR_INDEXED(gl_uniform_buffer_start, 1, std::int64_t)
      DECLARE_GETTOR_INDEXED(gl_uniform_buffer_size, 1, std::int64_t)
      DECLARE_GETTOR_TYPED(gl_unpack_alignment, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_image_height, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_lsb_first, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_unpack_row_length, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_skip_images, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_skip_pixels, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_skip_rows, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_unpack_swap_bytes, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_num_extensions, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_major_version, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_minor_version, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_context_flags, 1, std::int32_t)
      DECLARE_GETTOR_TYPED(gl_vertex_program_point_size, 1, std::int8_t)
      DECLARE_GETTOR_TYPED(gl_viewport, 4, std::int32_t)

      DECLARE_GETTOR_TYPED(gl_max_color_attachments, 1, std::int32_t)

      DECLARE_GETTOR_TYPED(gl_vendor, 1, std::string)
      DECLARE_GETTOR_TYPED(gl_renderer, 1, std::string)
      DECLARE_GETTOR_TYPED(gl_version, 1, std::string)
      DECLARE_GETTOR_TYPED(gl_shading_language_version, 1, std::string)

#undef DECLARE_GETTOR_TYPED
#undef DECLARE_GETTOR_INDEXED
#undef DECLARE_GETTOR

      namespace toolkit {
        struct glx;
        struct glfw;
        struct wgl;

        typedef glx default_;
      } // namespace toolkit

      namespace platform {
        struct linux_;
        struct windows;
        struct macosx;

        typedef linux_ default_;
      } // namespace platform

      namespace policy {
        struct none;
        struct detached;

        typedef none default_;
      } // namespace policy

      template< typename Toolkit = toolkit::default_, typename Platform = platform::default_ >
      struct context_info_selector;

      template< >
      struct context_info_selector< toolkit::glx, platform::linux_ > {
          typedef glx_context context_info;
          typedef glx_current_context current_context_info;
      };

      template< typename Toolkit = toolkit::default_, typename Platform = platform::default_ >
      struct platform_context {
          typedef platform_context< Toolkit, Platform > platform_context_t;
          typedef typename context_info_selector< Toolkit, Platform >::context_info context_info_t;
          typedef typename context_info_selector< Toolkit, Platform >::current_context_info current_context_info_t;

          template< typename Policy = policy::detached >
          static context_info_t create(int arg_count, char** arg_values) {
            platform_context_t::_create< Policy >(arg_count, arg_values);
            context_info_t context_info = current_context_info_t();
            context_info.acquire();

            std::string const gl_vendor = ctx::gl_vendor::get();
            std::string const gl_renderer = ctx::gl_renderer::get();
            std::string const gl_version = ctx::gl_version::get();
            std::string const gl_shading_language_version = ctx::gl_shading_language_version::get();

            __gtulu_info() << parameter::gl_vendor() << ": " << gl_vendor;
            __gtulu_info() << parameter::gl_renderer() << ": " << gl_renderer;
            __gtulu_info() << parameter::gl_version() << ": " << gl_version;
            __gtulu_info() << parameter::gl_shading_language_version() << ": " << gl_shading_language_version;

            return context_info;
          }
          static context_info_t current() {
            return current_context_info_t();
          }
          static void destroy() {
            platform_context_t::_destroy();
          }

        protected:
          template< typename Policy = policy::detached >
          static void _create(int arg_count, char** arg_values);
          static void _destroy();
      };

      typedef platform_context< > context;

    } // namespace context

  } // namespace internal
} // namespace gtulu

#endif /* GTULU_INTERNAL_CONTEXT_HPP_ */

