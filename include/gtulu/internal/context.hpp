/**
 * @file
 * @date 19 déc. 2009
 * @todo comment
 */

#ifndef GTULU_INTERNAL_CONTEXT_HPP_
#define GTULU_INTERNAL_CONTEXT_HPP_

#include "gtulu/opengl.hpp"

namespace context {
  // Table 6.4. Current Values and Associated Data
  // ......................................................................

#define CONTEXT_TABLE_1 BOOST_PP_TUPLE_TO_LIST(3, ( \
      (patch_vertices,GL_PATCH_VERTICES), \
      (patch_default_outer_level,GL_PATCH_DEFAULT_OUTER_LEVEL), \
      (patch_default_inner_level,GL_PATCH_DEFAULT_INNER_LEVEL) \
      ))

  // Table 6.5. Vertex Array Object State (cont.)
  // ......................................................................

#define CONTEXT_TABLE_2 BOOST_PP_TUPLE_TO_LIST(7, ( \
      (vertex_attrib_array_enabled,GL_VERTEX_ATTRIB_ARRAY_ENABLED), \
      (vertex_attrib_array_size,GL_VERTEX_ATTRIB_ARRAY_SIZE), \
      (vertex_attrib_array_stride,GL_VERTEX_ATTRIB_ARRAY_STRIDE), \
      (vertex_attrib_array_type,GL_VERTEX_ATTRIB_ARRAY_TYPE), \
      (vertex_attrib_array_normalized,GL_VERTEX_ATTRIB_ARRAY_NORMALIZED), \
      (vertex_attrib_array_integer,GL_VERTEX_ATTRIB_ARRAY_INTEGER), \
      (vertex_attrib_array_pointer,GL_VERTEX_ATTRIB_ARRAY_POINTER) \
      ))
  //  (vertex_attrib_array_divisor,GL_VERTEX_ATTRIB_ARRAY_DIVISOR),

  // Table 6.6. Vertex Array Object State (cont.)
  // ......................................................................

#define CONTEXT_TABLE_3 BOOST_PP_TUPLE_TO_LIST(2, ( \
      (element_array_buffer_binding,GL_ELEMENT_ARRAY_BUFFER_BINDING), \
      (vertex_attrib_array_buffer_binding,GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING) \
      ))

  // Table 6.7. Vertex Array Data (not in Vertex Array objects)
  // ......................................................................

#define CONTEXT_TABLE_4 BOOST_PP_TUPLE_TO_LIST(4, ( \
      (array_buffer_binding,GL_ARRAY_BUFFER_BINDING), \
      (vertex_array_binding,GL_VERTEX_ARRAY_BINDING), \
      (primitive_restart,GL_PRIMITIVE_RESTART), \
      (primitive_restart_index,GL_PRIMITIVE_RESTART_INDEX) \
      ))
  //  (draw_indirect_buffer_binding,GL_DRAW_INDIRECT_BUFFER_BINDING),

  // Table 6.8. Buffer Object State
  // ......................................................................

#define CONTEXT_TABLE_5 BOOST_PP_TUPLE_TO_LIST(8, ( \
      (buffer_size,GL_BUFFER_SIZE), \
      (buffer_usage,GL_BUFFER_USAGE), \
      (buffer_access,GL_BUFFER_ACCESS), \
      (buffer_access_flags,GL_BUFFER_ACCESS_FLAGS), \
      (buffer_mapped,GL_BUFFER_MAPPED), \
      (buffer_map_pointer,GL_BUFFER_MAP_POINTER), \
      (buffer_map_offset,GL_BUFFER_MAP_OFFSET), \
      (buffer_map_length,GL_BUFFER_MAP_LENGTH) \
      ))

  // Table 6.9. Transformation state
  // ......................................................................

#define CONTEXT_TABLE_6 BOOST_PP_TUPLE_TO_LIST(11, ( \
      (viewport,GL_VIEWPORT), \
      (depth_range,GL_DEPTH_RANGE), \
      (clip_distance0,GL_CLIP_DISTANCE0), \
      (clip_distance1,GL_CLIP_DISTANCE1), \
      (clip_distance2,GL_CLIP_DISTANCE2), \
      (clip_distance3,GL_CLIP_DISTANCE3), \
      (clip_distance4,GL_CLIP_DISTANCE4), \
      (clip_distance5,GL_CLIP_DISTANCE5), \
      (clip_distance6,GL_CLIP_DISTANCE6), \
      (clip_distance7,GL_CLIP_DISTANCE7), \
      (depth_clamp,GL_DEPTH_CLAMP) \
      ))
  //  (transform_feedback_binding,GL_TRANSFORM_FEEDBACK_BINDING)

  // Table 6.10. Coloring
  // ......................................................................

#define CONTEXT_TABLE_7 BOOST_PP_TUPLE_TO_LIST(2, ( \
      (clamp_read_color,GL_CLAMP_READ_COLOR), \
      (provoking_vertex,GL_PROVOKING_VERTEX) \
      ))

  // Table 6.11. Rasterization
  // ......................................................................

#define CONTEXT_TABLE_8 BOOST_PP_TUPLE_TO_LIST(5, ( \
      (point_size,GL_POINT_SIZE), \
      (point_fade_threshold_size,GL_POINT_FADE_THRESHOLD_SIZE), \
      (point_sprite_coord_origin,GL_POINT_SPRITE_COORD_ORIGIN), \
      (line_width,GL_LINE_WIDTH), \
      (line_smooth,GL_LINE_SMOOTH) \
      ))

  // Table 6.12. Rasterization (cont.)
  // ......................................................................

#define CONTEXT_TABLE_9 BOOST_PP_TUPLE_TO_LIST(9, ( \
      (cull_face,GL_CULL_FACE), \
      (cull_face_mode,GL_CULL_FACE_MODE), \
      (front_face,GL_FRONT_FACE), \
      (polygon_smooth,GL_POLYGON_SMOOTH), \
      (polygon_offset_factor,GL_POLYGON_OFFSET_FACTOR), \
      (polygon_offset_units,GL_POLYGON_OFFSET_UNITS), \
      (polygon_offset_point,GL_POLYGON_OFFSET_POINT), \
      (polygon_offset_line,GL_POLYGON_OFFSET_LINE), \
      (polygon_offset_fill,GL_POLYGON_OFFSET_FILL) \
      ))

  // Table 6.13. Multisampling
  // ......................................................................

#define CONTEXT_TABLE_10 BOOST_PP_TUPLE_TO_LIST(10, ( \
      (multisample,GL_MULTISAMPLE), \
      (sample_alpha_to_coverage,GL_SAMPLE_ALPHA_TO_COVERAGE), \
      (sample_alpha_to_one,GL_SAMPLE_ALPHA_TO_ONE), \
      (sample_coverage,GL_SAMPLE_COVERAGE), \
      (sample_coverage_value,GL_SAMPLE_COVERAGE_VALUE), \
      (sample_coverage_invert,GL_SAMPLE_COVERAGE_INVERT), \
      (sample_shading,GL_SAMPLE_SHADING), \
      (min_sample_shading_value,GL_MIN_SAMPLE_SHADING_VALUE), \
      (sample_mask,GL_SAMPLE_MASK), \
      (sample_mask_value,GL_SAMPLE_MASK_VALUE) \
      ))

  // Table 6.14. Textures (state per texture unit and binding point)
  // ......................................................................

#define CONTEXT_TABLE_11 BOOST_PP_TUPLE_TO_LIST(11, ( \
      (texture_binding_1d,GL_TEXTURE_BINDING_1D), \
      (texture_binding_2d,GL_TEXTURE_BINDING_2D), \
      (texture_binding_3d,GL_TEXTURE_BINDING_3D), \
      (texture_binding_1d_array,GL_TEXTURE_BINDING_1D_ARRAY), \
      (texture_binding_2d_array,GL_TEXTURE_BINDING_2D_ARRAY), \
      (texture_binding_cube_map_array,GL_TEXTURE_BINDING_CUBE_MAP_ARRAY), \
      (texture_binding_rectangle,GL_TEXTURE_BINDING_RECTANGLE), \
      (texture_binding_buffer,GL_TEXTURE_BINDING_BUFFER), \
      (texture_binding_cube_map,GL_TEXTURE_BINDING_CUBE_MAP), \
      (texture_binding_2d_multisample,GL_TEXTURE_BINDING_2D_MULTISAMPLE), \
      (texture_binding_2d_multisample_array,GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY) \
      ))

  // Table 6.15. Textures (state per texture unit and binding point)(cont.)
  // ..............................................................................

#define CONTEXT_TABLE_12 BOOST_PP_TUPLE_TO_LIST(13, ( \
      (texture_1d,GL_TEXTURE_1D), \
      (texture_2d,GL_TEXTURE_2D), \
      (texture_3d,GL_TEXTURE_3D), \
      (texture_1d_array,GL_TEXTURE_1D_ARRAY), \
      (texture_2d_array,GL_TEXTURE_2D_ARRAY), \
      (texture_cube_map_array,GL_TEXTURE_CUBE_MAP_ARRAY), \
      (texture_rectangle,GL_TEXTURE_RECTANGLE), \
      (texture_cube_map_positive_x,GL_TEXTURE_CUBE_MAP_POSITIVE_X), \
      (texture_cube_map_negative_x,GL_TEXTURE_CUBE_MAP_NEGATIVE_X), \
      (texture_cube_map_positive_y,GL_TEXTURE_CUBE_MAP_POSITIVE_Y), \
      (texture_cube_map_negative_y,GL_TEXTURE_CUBE_MAP_NEGATIVE_Y), \
      (texture_cube_map_positive_z,GL_TEXTURE_CUBE_MAP_POSITIVE_Z), \
      (texture_cube_map_negative_z,GL_TEXTURE_CUBE_MAP_NEGATIVE_Z) \
      ))
  //  (sampler_binding,GL_SAMPLER_BINDING),

  // Table 6.16. Textures (state per texture object)
  // ......................................................................

#define CONTEXT_TABLE_13 BOOST_PP_TUPLE_TO_LIST(2, ( \
      (texture_base_level,GL_TEXTURE_BASE_LEVEL), \
      (texture_max_level,GL_TEXTURE_MAX_LEVEL) \
      ))
  //  (texture_swizzle_r,GL_TEXTURE_SWIZZLE_R),
  //  (texture_swizzle_g,GL_TEXTURE_SWIZZLE_G),
  //  (texture_swizzle_b,GL_TEXTURE_SWIZZLE_B),
  //  (texture_swizzle_a,GL_TEXTURE_SWIZZLE_A),
  //  (texture_min_lod,GL_TEXTURE_MIN_LOD),
  //  (texture_max_lod,GL_TEXTURE_MAX_LOD),
  //  (texture_border_color,GL_TEXTURE_BORDER_COLOR),
  //  (texture_min_filter,GL_TEXTURE_MIN_FILTER),
  //  (texture_mag_filter,GL_TEXTURE_MAG_FILTER),
  //  (texture_wrap_s,GL_TEXTURE_WRAP_S),
  //  (texture_wrap_t,GL_TEXTURE_WRAP_T),
  //  (texture_wrap_r,GL_TEXTURE_WRAP_R),
  //  (texture_compare_mode,GL_TEXTURE_COMPARE_MODE),
  //  (texture_compare_func,GL_TEXTURE_COMPARE_FUNC)

  // Table 6.17. Textures (state per texture image)
  // ......................................................................

#define CONTEXT_TABLE_14 BOOST_PP_TUPLE_TO_LIST(21, ( \
      (texture_width,GL_TEXTURE_WIDTH), \
      (texture_height,GL_TEXTURE_HEIGHT), \
      (texture_depth,GL_TEXTURE_DEPTH), \
      (texture_samples,GL_TEXTURE_SAMPLES), \
      (texture_fixed_sample_locations,GL_TEXTURE_FIXED_SAMPLE_LOCATIONS), \
      (texture_internal_format,GL_TEXTURE_INTERNAL_FORMAT), \
      (texture_alpha_size,GL_TEXTURE_ALPHA_SIZE), \
      (texture_blue_size,GL_TEXTURE_BLUE_SIZE), \
      (texture_depth_size,GL_TEXTURE_DEPTH_SIZE), \
      (texture_green_size,GL_TEXTURE_GREEN_SIZE), \
      (texture_red_size,GL_TEXTURE_RED_SIZE), \
      (texture_stencil_size,GL_TEXTURE_STENCIL_SIZE), \
      (texture_shared_size,GL_TEXTURE_SHARED_SIZE), \
      (texture_alpha_type,GL_TEXTURE_ALPHA_TYPE), \
      (texture_blue_type,GL_TEXTURE_BLUE_TYPE), \
      (texture_depth_type,GL_TEXTURE_DEPTH_TYPE), \
      (texture_green_type,GL_TEXTURE_GREEN_TYPE), \
      (texture_red_type,GL_TEXTURE_RED_TYPE), \
      (texture_compressed,GL_TEXTURE_COMPRESSED), \
      (texture_compressed_image_size,GL_TEXTURE_COMPRESSED_IMAGE_SIZE), \
      (texture_buffer_data_store_binding,GL_TEXTURE_BUFFER_DATA_STORE_BINDING) \
      ))

  // Table 6.18. Textures (state per sampler object)
  // ......................................................................

#define CONTEXT_TABLE_15 BOOST_PP_TUPLE_TO_LIST(11, ( \
      (texture_border_color,GL_TEXTURE_BORDER_COLOR), \
      (texture_min_filter,GL_TEXTURE_MIN_FILTER), \
      (texture_mag_filter,GL_TEXTURE_MAG_FILTER), \
      (texture_wrap_s,GL_TEXTURE_WRAP_S), \
      (texture_wrap_t,GL_TEXTURE_WRAP_T), \
      (texture_wrap_r,GL_TEXTURE_WRAP_R), \
      (texture_min_lod,GL_TEXTURE_MIN_LOD), \
      (texture_max_lod,GL_TEXTURE_MAX_LOD), \
      (texture_lod_bias,GL_TEXTURE_LOD_BIAS), \
      (texture_compare_mode,GL_TEXTURE_COMPARE_MODE), \
      (texture_compare_func,GL_TEXTURE_COMPARE_FUNC) \
      ))
  //  (texture_lod_bias,GL_TEXTURE_LOD_BIAS),

  // Table 6.19. Texture Environment and Generation
  // ......................................................................

#define CONTEXT_TABLE_16 BOOST_PP_TUPLE_TO_LIST(1, ( \
      (active_texture,GL_ACTIVE_TEXTURE) \
      ))

  // Table 6.20. Pixel Operations
  // ......................................................................

#define CONTEXT_TABLE_17 BOOST_PP_TUPLE_TO_LIST(17, ( \
      (scissor_test,GL_SCISSOR_TEST), \
      (scissor_box,GL_SCISSOR_BOX), \
      (stencil_test,GL_STENCIL_TEST), \
      (stencil_func,GL_STENCIL_FUNC), \
      (stencil_value_mask,GL_STENCIL_VALUE_MASK), \
      (stencil_ref,GL_STENCIL_REF), \
      (stencil_fail,GL_STENCIL_FAIL), \
      (stencil_pass_depth_fail,GL_STENCIL_PASS_DEPTH_FAIL), \
      (stencil_pass_depth_pass,GL_STENCIL_PASS_DEPTH_PASS), \
      (stencil_back_func,GL_STENCIL_BACK_FUNC), \
      (stencil_back_value_mask,GL_STENCIL_BACK_VALUE_MASK), \
      (stencil_back_ref,GL_STENCIL_BACK_REF), \
      (stencil_back_fail,GL_STENCIL_BACK_FAIL), \
      (stencil_back_pass_depth_fail,GL_STENCIL_BACK_PASS_DEPTH_FAIL), \
      (stencil_back_pass_depth_pass,GL_STENCIL_BACK_PASS_DEPTH_PASS), \
      (depth_test,GL_DEPTH_TEST), \
      (depth_func,GL_DEPTH_FUNC) \
      ))

  // Table 6.21. Pixel Operations (cont.)
  // ......................................................................

#define CONTEXT_TABLE_18 BOOST_PP_TUPLE_TO_LIST(12, ( \
      (blend,GL_BLEND), \
      (blend_src_rgb,GL_BLEND_SRC_RGB), \
      (blend_src_alpha,GL_BLEND_SRC_ALPHA), \
      (blend_dst_rgb,GL_BLEND_DST_RGB), \
      (blend_dst_alpha,GL_BLEND_DST_ALPHA), \
      (blend_equation_rgb,GL_BLEND_EQUATION_RGB), \
      (blend_equation_alpha,GL_BLEND_EQUATION_ALPHA), \
      (blend_color,GL_BLEND_COLOR), \
      (framebuffer_srgb,GL_FRAMEBUFFER_SRGB), \
      (dither,GL_DITHER), \
      (color_logic_op,GL_COLOR_LOGIC_OP), \
      (logic_op_mode,GL_LOGIC_OP_MODE) \
      ))

  // Table 6.22. Framebuffer Control
  // ......................................................................

#define CONTEXT_TABLE_19 BOOST_PP_TUPLE_TO_LIST(7, ( \
      (color_writemask,GL_COLOR_WRITEMASK), \
      (depth_writemask,GL_DEPTH_WRITEMASK), \
      (stencil_writemask,GL_STENCIL_WRITEMASK), \
      (stencil_back_writemask,GL_STENCIL_BACK_WRITEMASK), \
      (color_clear_value,GL_COLOR_CLEAR_VALUE), \
      (depth_clear_value,GL_DEPTH_CLEAR_VALUE), \
      (stencil_clear_value,GL_STENCIL_CLEAR_VALUE) \
      ))

  // Table 6.23. Framebuffer (state per target binding point)
  // ......................................................................

#define CONTEXT_TABLE_20 BOOST_PP_TUPLE_TO_LIST(2, ( \
      (draw_framebuffer_binding,GL_DRAW_FRAMEBUFFER_BINDING), \
      (read_framebuffer_binding,GL_READ_FRAMEBUFFER_BINDING) \
      ))

  // Table 6.24. Framebuffer (state per framebuffer object)
  // ......................................................................

#define CONTEXT_TABLE_21 BOOST_PP_TUPLE_TO_LIST(17, ( \
      (draw_buffer0,GL_DRAW_BUFFER0), \
      (draw_buffer1,GL_DRAW_BUFFER1), \
      (draw_buffer2,GL_DRAW_BUFFER2), \
      (draw_buffer3,GL_DRAW_BUFFER3), \
      (draw_buffer4,GL_DRAW_BUFFER4), \
      (draw_buffer5,GL_DRAW_BUFFER5), \
      (draw_buffer6,GL_DRAW_BUFFER6), \
      (draw_buffer7,GL_DRAW_BUFFER7), \
      (draw_buffer8,GL_DRAW_BUFFER8), \
      (draw_buffer9,GL_DRAW_BUFFER9), \
      (draw_buffer10,GL_DRAW_BUFFER10), \
      (draw_buffer11,GL_DRAW_BUFFER11), \
      (draw_buffer12,GL_DRAW_BUFFER12), \
      (draw_buffer13,GL_DRAW_BUFFER13), \
      (draw_buffer14,GL_DRAW_BUFFER14), \
      (draw_buffer15,GL_DRAW_BUFFER15), \
      (read_buffer,GL_READ_BUFFER) \
      ))

  // Table 6.25. Framebuffer (state per attachment point)
  // ......................................................................

#define CONTEXT_TABLE_22 BOOST_PP_TUPLE_TO_LIST(14, ( \
      (framebuffer_attachment_object_type,GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE), \
      (framebuffer_attachment_object_name,GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME), \
      (framebuffer_attachment_texture_level,GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL), \
      (framebuffer_attachment_texture_cube_map_face,GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE), \
      (framebuffer_attachment_texture_layer,GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER), \
      (framebuffer_attachment_layered,GL_FRAMEBUFFER_ATTACHMENT_LAYERED), \
      (framebuffer_attachment_color_encoding,GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING), \
      (framebuffer_attachment_component_type,GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE), \
      (framebuffer_attachment_alpha_size,GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE), \
      (framebuffer_attachment_blue_size,GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE), \
      (framebuffer_attachment_depth_size,GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE), \
      (framebuffer_attachment_green_size,GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE), \
      (framebuffer_attachment_red_size,GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE), \
      (framebuffer_attachment_stencil_size,GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE) \
      ))

  // Table 6.26. Renderbuffer (state per target and binding point)
  // ......................................................................

#define CONTEXT_TABLE_23 BOOST_PP_TUPLE_TO_LIST(1, ( \
      (renderbuffer_binding,GL_RENDERBUFFER_BINDING) \
      ))

  // Table 6.27. Renderbuffer (state per renderbuffer object)
  // ......................................................................

#define CONTEXT_TABLE_24 BOOST_PP_TUPLE_TO_LIST(10, ( \
      (renderbuffer_width,GL_RENDERBUFFER_WIDTH), \
      (renderbuffer_height,GL_RENDERBUFFER_HEIGHT), \
      (renderbuffer_internal_format,GL_RENDERBUFFER_INTERNAL_FORMAT), \
      (renderbuffer_red_size,GL_RENDERBUFFER_RED_SIZE), \
      (renderbuffer_green_size,GL_RENDERBUFFER_GREEN_SIZE), \
      (renderbuffer_blue_size,GL_RENDERBUFFER_BLUE_SIZE), \
      (renderbuffer_alpha_size,GL_RENDERBUFFER_ALPHA_SIZE), \
      (renderbuffer_depth_size,GL_RENDERBUFFER_DEPTH_SIZE), \
      (renderbuffer_stencil_size,GL_RENDERBUFFER_STENCIL_SIZE), \
      (renderbuffer_samples,GL_RENDERBUFFER_SAMPLES) \
      ))

  // Table 6.28. Pixels
  // ......................................................................

#define CONTEXT_TABLE_25 BOOST_PP_TUPLE_TO_LIST(18, ( \
      (unpack_swap_bytes,GL_UNPACK_SWAP_BYTES), \
      (unpack_lsb_first,GL_UNPACK_LSB_FIRST), \
      (unpack_image_height,GL_UNPACK_IMAGE_HEIGHT), \
      (unpack_skip_images,GL_UNPACK_SKIP_IMAGES), \
      (unpack_row_length,GL_UNPACK_ROW_LENGTH), \
      (unpack_skip_rows,GL_UNPACK_SKIP_ROWS), \
      (unpack_skip_pixels,GL_UNPACK_SKIP_PIXELS), \
      (unpack_alignment,GL_UNPACK_ALIGNMENT), \
      (pack_swap_bytes,GL_PACK_SWAP_BYTES), \
      (pack_lsb_first,GL_PACK_LSB_FIRST), \
      (pack_image_height,GL_PACK_IMAGE_HEIGHT), \
      (pack_skip_images,GL_PACK_SKIP_IMAGES), \
      (pack_row_length,GL_PACK_ROW_LENGTH), \
      (pack_skip_rows,GL_PACK_SKIP_ROWS), \
      (pack_skip_pixels,GL_PACK_SKIP_PIXELS), \
      (pack_alignment,GL_PACK_ALIGNMENT), \
      (pixel_pack_buffer_binding,GL_PIXEL_PACK_BUFFER_BINDING), \
      (pixel_unpack_buffer_binding,GL_PIXEL_UNPACK_BUFFER_BINDING) \
      ))

  // Table 6.29. Shader Object State
  // ......................................................................

#define CONTEXT_TABLE_26 BOOST_PP_TUPLE_TO_LIST(5, ( \
      (shader_type,GL_SHADER_TYPE), \
      (delete_status,GL_DELETE_STATUS), \
      (compile_status,GL_COMPILE_STATUS), \
      (info_log_length,GL_INFO_LOG_LENGTH), \
      (shader_source_length,GL_SHADER_SOURCE_LENGTH) \
      ))

  // Table 6.30. Program Object State
  // ......................................................................

#define CONTEXT_TABLE_27 BOOST_PP_TUPLE_TO_LIST(7, ( \
      (current_program,GL_CURRENT_PROGRAM), \
      (link_status,GL_LINK_STATUS), \
      (validate_status,GL_VALIDATE_STATUS), \
      (attached_shaders,GL_ATTACHED_SHADERS), \
      (active_uniforms,GL_ACTIVE_UNIFORMS), \
      (active_uniform_max_length,GL_ACTIVE_UNIFORM_MAX_LENGTH), \
      (active_attributes,GL_ACTIVE_ATTRIBUTES) \
      ))
  //  (info_log_length,GL_INFO_LOG_LENGTH),
  //  (delete_status,GL_DELETE_STATUS),

  // Table 6.31. Program Object State (cont.)
  // ......................................................................

#define CONTEXT_TABLE_28 BOOST_PP_TUPLE_TO_LIST(7, ( \
      (active_attribute_max_length,GL_ACTIVE_ATTRIBUTE_MAX_LENGTH), \
      (geometry_vertices_out,GL_GEOMETRY_VERTICES_OUT), \
      (geometry_input_type,GL_GEOMETRY_INPUT_TYPE), \
      (geometry_output_type,GL_GEOMETRY_OUTPUT_TYPE), \
      (transform_feedback_buffer_mode,GL_TRANSFORM_FEEDBACK_BUFFER_MODE), \
      (transform_feedback_varyings,GL_TRANSFORM_FEEDBACK_VARYINGS), \
      (transform_feedback_varying_max_length,GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH) \
      ))
  //  (geometry_shader_invocations,GL_GEOMETRY_SHADER_INVOCATIONS),

  // Table 6.32. Program Object State (cont.)
  // ......................................................................

#define CONTEXT_TABLE_29 BOOST_PP_TUPLE_TO_LIST(10, ( \
      (uniform_buffer_binding,GL_UNIFORM_BUFFER_BINDING), \
      (uniform_buffer_start,GL_UNIFORM_BUFFER_START), \
      (uniform_buffer_size,GL_UNIFORM_BUFFER_SIZE), \
      (active_uniform_blocks,GL_ACTIVE_UNIFORM_BLOCKS), \
      (active_uniform_block_max_name_length,GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH), \
      (uniform_type,GL_UNIFORM_TYPE), \
      (uniform_size,GL_UNIFORM_SIZE), \
      (uniform_name_length,GL_UNIFORM_NAME_LENGTH), \
      (uniform_block_index,GL_UNIFORM_BLOCK_INDEX), \
      (uniform_offset,GL_UNIFORM_OFFSET) \
      ))
  //  (uniform_buffer_binding,GL_UNIFORM_BUFFER_BINDING),

  // Table 6.33. Program Object State (cont.)
  // ......................................................................

#define CONTEXT_TABLE_30 BOOST_PP_TUPLE_TO_LIST(10, ( \
      (uniform_array_stride,GL_UNIFORM_ARRAY_STRIDE), \
      (uniform_matrix_stride,GL_UNIFORM_MATRIX_STRIDE), \
      (uniform_is_row_major,GL_UNIFORM_IS_ROW_MAJOR), \
      (uniform_block_binding,GL_UNIFORM_BLOCK_BINDING), \
      (uniform_block_data_size,GL_UNIFORM_BLOCK_DATA_SIZE), \
      (uniform_block_active_uniforms,GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS), \
      (uniform_block_active_uniform_indices,GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES), \
      (uniform_block_referenced_by_vertex_shader,GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER), \
      (uniform_block_referenced_by_geometry_shader,GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER), \
      (uniform_block_referenced_by_fragment_shader,GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER) \
      ))
  //  (uniform_block_referenced_by_tess_control_shader,GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER),
  //  (uniform_block_referenced_by_tess_evalution_shader,GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUTION_SHADER),

  // Table 6.34. Program Object State (cont.)
  // ......................................................................

#define CONTEXT_TABLE_31 BOOST_PP_TUPLE_TO_LIST(5, ( \
      (tess_control_output_vertices,GL_TESS_CONTROL_OUTPUT_VERTICES), \
      (tess_gen_mode,GL_TESS_GEN_MODE), \
      (tess_gen_spacing,GL_TESS_GEN_SPACING), \
      (tess_gen_vertex_order,GL_TESS_GEN_VERTEX_ORDER), \
      (tess_gen_point_mode,GL_TESS_GEN_POINT_MODE) \
      ))

  // Table 6.35. Program Object State (cont.)
  // ......................................................................

#define CONTEXT_TABLE_32 BOOST_PP_TUPLE_TO_LIST(7, ( \
      (active_subroutine_uniform_locations,GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS), \
      (active_subroutine_uniforms,GL_ACTIVE_SUBROUTINE_UNIFORMS), \
      (active_subroutines,GL_ACTIVE_SUBROUTINES), \
      (active_subroutine_uniform_max_length,GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH), \
      (active_subroutine_max_length,GL_ACTIVE_SUBROUTINE_MAX_LENGTH), \
      (num_compatible_subroutines,GL_NUM_COMPATIBLE_SUBROUTINES), \
      (compatible_subroutines,GL_COMPATIBLE_SUBROUTINES) \
      ))
  //  (uniform_size,GL_UNIFORM_SIZE)
  //  (uniform_name_length,GL_UNIFORM_NAME_LENGTH)

  // Table 6.36. Vertex and Geometry Shader State
  // ......................................................................

#define CONTEXT_TABLE_33 BOOST_PP_TUPLE_TO_LIST(2, ( \
      (current_vertex_attrib,GL_CURRENT_VERTEX_ATTRIB), \
      (program_point_size,GL_PROGRAM_POINT_SIZE) \
      ))

  // Table 6.37. Query Object State
  // ......................................................................

#define CONTEXT_TABLE_34 BOOST_PP_TUPLE_TO_LIST(2, ( \
      (query_result,GL_QUERY_RESULT), \
      (query_result_available,GL_QUERY_RESULT_AVAILABLE) \
      ))

  // Table 6.38. Transform Feedback State
  // ......................................................................

#define CONTEXT_TABLE_35 BOOST_PP_TUPLE_TO_LIST(3, ( \
      (transform_feedback_buffer_binding,GL_TRANSFORM_FEEDBACK_BUFFER_BINDING), \
      (transform_feedback_buffer_start,GL_TRANSFORM_FEEDBACK_BUFFER_START), \
      (transform_feedback_buffer_size,GL_TRANSFORM_FEEDBACK_BUFFER_SIZE) \
      ))
  //  (transform_feedback_buffer_binding,GL_TRANSFORM_FEEDBACK_BUFFER_BINDING),

  // Table 6.39. Sync (state per sync object)
  // ......................................................................

#define CONTEXT_TABLE_36 BOOST_PP_TUPLE_TO_LIST(4, ( \
      (object_type,GL_OBJECT_TYPE), \
      (sync_status,GL_SYNC_STATUS), \
      (sync_condition,GL_SYNC_CONDITION), \
      (sync_flags,GL_SYNC_FLAGS) \
      ))

  // Table 6.40. Hints
  // ......................................................................

#define CONTEXT_TABLE_37 BOOST_PP_TUPLE_TO_LIST(4, ( \
      (line_smooth_hint,GL_LINE_SMOOTH_HINT), \
      (polygon_smooth_hint,GL_POLYGON_SMOOTH_HINT), \
      (texture_compression_hint,GL_TEXTURE_COMPRESSION_HINT), \
      (fragment_shader_derivative_hint,GL_FRAGMENT_SHADER_DERIVATIVE_HINT) \
      ))

  // Table 6.41. Implementation Dependent Values
  // ......................................................................

#define CONTEXT_TABLE_38 BOOST_PP_TUPLE_TO_LIST(8, ( \
      (max_clip_distances,GL_MAX_CLIP_DISTANCES), \
      (subpixel_bits,GL_SUBPIXEL_BITS), \
      (max_3d_texture_size,GL_MAX_3D_TEXTURE_SIZE), \
      (max_texture_size,GL_MAX_TEXTURE_SIZE), \
      (max_array_texture_layers,GL_MAX_ARRAY_TEXTURE_LAYERS), \
      (max_texture_lod_bias,GL_MAX_TEXTURE_LOD_BIAS), \
      (max_cube_map_texture_size,GL_MAX_CUBE_MAP_TEXTURE_SIZE), \
      (max_renderbuffer_size,GL_MAX_RENDERBUFFER_SIZE) \
      ))

  // Table 6.42. Implementation Dependent Values (cont.)
  // ......................................................................

#define CONTEXT_TABLE_39 BOOST_PP_TUPLE_TO_LIST(3, ( \
      (max_viewport_dims,GL_MAX_VIEWPORT_DIMS), \
      (point_size_range,GL_POINT_SIZE_RANGE), \
      (point_size_granularity,GL_POINT_SIZE_GRANULARITY) \
      ))

  // Table 6.43. Implementation Dependent Values (cont.)
  // ......................................................................

#define CONTEXT_TABLE_40 BOOST_PP_TUPLE_TO_LIST(9, ( \
      (aliased_line_width_range,GL_ALIASED_LINE_WIDTH_RANGE), \
      (smooth_line_width_range,GL_SMOOTH_LINE_WIDTH_RANGE), \
      (smooth_line_width_granularity,GL_SMOOTH_LINE_WIDTH_GRANULARITY), \
      (max_elements_indices,GL_MAX_ELEMENTS_INDICES), \
      (max_elements_vertices,GL_MAX_ELEMENTS_VERTICES), \
      (compressed_texture_formats,GL_COMPRESSED_TEXTURE_FORMATS), \
      (num_compressed_texture_formats,GL_NUM_COMPRESSED_TEXTURE_FORMATS), \
      (max_texture_buffer_size,GL_MAX_TEXTURE_BUFFER_SIZE), \
      (max_rectangle_texture_size,GL_MAX_RECTANGLE_TEXTURE_SIZE) \
      ))

  // Table 6.44. Implementation Dependent Version and Extension Support
  // ......................................................................

#define CONTEXT_TABLE_41 BOOST_PP_TUPLE_TO_LIST(9, ( \
      (extensions,GL_EXTENSIONS), \
      (num_extensions,GL_NUM_EXTENSIONS), \
      (major_version,GL_MAJOR_VERSION), \
      (minor_version,GL_MINOR_VERSION), \
      (context_flags,GL_CONTEXT_FLAGS), \
      (renderer,GL_RENDERER), \
      (shading_language_version,GL_SHADING_LANGUAGE_VERSION), \
      (vendor,GL_VENDOR), \
      (version,GL_VERSION) \
      ))

  // Table 6.45. Implementation Dependent Vertex Shader Limits
  // ......................................................................

#define CONTEXT_TABLE_42 BOOST_PP_TUPLE_TO_LIST(5, ( \
      (max_vertex_attribs,GL_MAX_VERTEX_ATTRIBS), \
      (max_vertex_uniform_components,GL_MAX_VERTEX_UNIFORM_COMPONENTS), \
      (max_vertex_uniform_blocks,GL_MAX_VERTEX_UNIFORM_BLOCKS), \
      (max_vertex_output_components,GL_MAX_VERTEX_OUTPUT_COMPONENTS), \
      (max_vertex_texture_image_units,GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS) \
      ))

  // Table 6.46. Implementation Dependent Tessellation Shader Limits
  // ......................................................................

#define CONTEXT_TABLE_43 BOOST_PP_TUPLE_TO_LIST(14, ( \
      (max_tess_gen_level,GL_MAX_TESS_GEN_LEVEL), \
      (max_patch_vertices,GL_MAX_PATCH_VERTICES), \
      (max_tess_control_uniform_components,GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS), \
      (max_tess_evaluation_uniform_components,GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS), \
      (max_tess_control_texture_image_units,GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS), \
      (max_tess_evaluation_texture_image_units,GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS), \
      (max_tess_control_output_components,GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS), \
      (max_tess_patch_components,GL_MAX_TESS_PATCH_COMPONENTS), \
      (max_tess_control_total_output_components,GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS), \
      (max_tess_evaluation_output_components,GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS), \
      (max_tess_control_input_components,GL_MAX_TESS_CONTROL_INPUT_COMPONENTS), \
      (max_tess_evaluation_input_components,GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS), \
      (max_tess_control_uniform_blocks,GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS), \
      (max_tess_evaluation_uniform_blocks,GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS) \
      ))

  // Table 6.47. Implementation Dependent Geometry Shader Limits
  // ......................................................................

#define CONTEXT_TABLE_44 BOOST_PP_TUPLE_TO_LIST(6, ( \
      (max_geometry_uniform_blocks,GL_MAX_GEOMETRY_UNIFORM_BLOCKS), \
      (max_geometry_input_components,GL_MAX_GEOMETRY_INPUT_COMPONENTS), \
      (max_geometry_output_components,GL_MAX_GEOMETRY_OUTPUT_COMPONENTS), \
      (max_geometry_output_vertices,GL_MAX_GEOMETRY_OUTPUT_VERTICES), \
      (max_geometry_total_output_components,GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS), \
      (max_geometry_texture_image_units,GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS) \
      ))
  //  (max_geometry_shader_invocations,GL_MAX_GEOMETRY_SHADER_INVOCATIONS),
  //  (max_vertex_streams,GL_MAX_VERTEX_STREAMS)

  // Table 6.48. Implementation Dependent Fragment Processing Limits
  // ......................................................................

#define CONTEXT_TABLE_45 BOOST_PP_TUPLE_TO_LIST(8, ( \
      (max_fragment_uniform_components,GL_MAX_FRAGMENT_UNIFORM_COMPONENTS), \
      (max_fragment_uniform_blocks,GL_MAX_FRAGMENT_UNIFORM_BLOCKS), \
      (max_fragment_input_components,GL_MAX_FRAGMENT_INPUT_COMPONENTS), \
      (max_texture_image_units,GL_MAX_TEXTURE_IMAGE_UNITS), \
      (min_program_texel_offset,GL_MIN_PROGRAM_TEXEL_OFFSET), \
      (max_program_texel_offset,GL_MAX_PROGRAM_TEXEL_OFFSET), \
      (min_program_texture_gather_offset,GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET), \
      (max_program_texture_gather_offset,GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET) \
      ))

  // Table 6.49. Implementation Dependent Aggregate Shader Limits
  // ......................................................................

#define CONTEXT_TABLE_46 BOOST_PP_TUPLE_TO_LIST(6, ( \
      (max_uniform_buffer_bindings,GL_MAX_UNIFORM_BUFFER_BINDINGS), \
      (max_uniform_block_size,GL_MAX_UNIFORM_BLOCK_SIZE), \
      (uniform_buffer_offset_alignment,GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT), \
      (max_combined_uniform_blocks,GL_MAX_COMBINED_UNIFORM_BLOCKS), \
      (max_varying_components,GL_MAX_VARYING_COMPONENTS), \
      (max_combined_texture_image_units,GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS) \
      ))
  //  (max_subroutines,GL_MAX_SUBROUTINES),
  //  (max_subroutine_uniform_locations,GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS)

  // Table 6.50. Implementation Dependent Aggregate Shader Limits (cont.)
  // ......................................................................

#define CONTEXT_TABLE_47 BOOST_PP_TUPLE_TO_LIST(3, ( \
      (max_combined_vertex_uniform_components,GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS), \
      (max_combined_geometry_uniform_components,GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS), \
      (max_combined_fragment_uniform_components,GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS) \
      ))
  //  (max_combined_tess_control_uniform_components,GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS),
  //  (max_combined_tess_evaluation_uniform_components,GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS),

  // † The minimum value for each stage is MAX_stage_UNIFORM_BLOCKS ×
  // MAX_UNIFORM_BLOCK_SIZE / 4 + MAX_stage_UNIFORM_COMPONENTS


  // Table 6.51. Implementation Dependent Values (cont.)
  // ......................................................................

#define CONTEXT_TABLE_48 BOOST_PP_TUPLE_TO_LIST(6, ( \
      (max_sample_mask_words,GL_MAX_SAMPLE_MASK_WORDS), \
      (max_color_texture_samples,GL_MAX_COLOR_TEXTURE_SAMPLES), \
      (max_depth_texture_samples,GL_MAX_DEPTH_TEXTURE_SAMPLES), \
      (max_integer_samples,GL_MAX_INTEGER_SAMPLES), \
      (query_counter_bits,GL_QUERY_COUNTER_BITS), \
      (max_server_wait_timeout,GL_MAX_SERVER_WAIT_TIMEOUT) \
      ))
  //  (min_fragment_interpolation_offset,GL_MIN_FRAGMENT_INTERPOLATION_OFFSET),
  //  (max_fragment_interpolation_offset,GL_MAX_FRAGMENT_INTERPOLATION_OFFSET),
  //  (fragment_interpolation_offset_bits,GL_FRAGMENT_INTERPOLATION_OFFSET_BITS)

  // Table 6.52. Implementation Dependent Transform Feedback Limits
  // ......................................................................

#define CONTEXT_TABLE_49 BOOST_PP_TUPLE_TO_LIST(3, ( \
      (max_transform_feedback_interleaved_components,GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS), \
      (max_transform_feedback_separate_attribs,GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS), \
      (max_transform_feedback_separate_components,GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS) \
      ))
  //  (max_transform_feedback_buffers,GL_MAX_TRANSFORM_FEEDBACK_BUFFERS)

  // Table 6.53. Framebuffer Dependent Values
  // ......................................................................

#define CONTEXT_TABLE_50 BOOST_PP_TUPLE_TO_LIST(8, ( \
      (max_draw_buffers,GL_MAX_DRAW_BUFFERS), \
      (doublebuffer,GL_DOUBLEBUFFER), \
      (stereo,GL_STEREO), \
      (sample_buffers,GL_SAMPLE_BUFFERS), \
      (samples,GL_SAMPLES), \
      (sample_position,GL_SAMPLE_POSITION), \
      (max_color_attachments,GL_MAX_COLOR_ATTACHMENTS), \
      (max_samples,GL_MAX_SAMPLES) \
      ))
  //  (max_dual_source_draw_buffers,GL_MAX_DUAL_SOURCE_DRAW_BUFFERS),

  // Table 6.54. Miscellaneous
  // ......................................................................

#define CONTEXT_TABLE_51 BOOST_PP_TUPLE_TO_LIST(4, ( \
      (current_query,GL_CURRENT_QUERY), \
      (copy_read_buffer,GL_COPY_READ_BUFFER), \
      (copy_write_buffer,GL_COPY_WRITE_BUFFER), \
      (texture_cube_map_seamless,GL_TEXTURE_CUBE_MAP_SEAMLESS) \
      ))

  namespace parameters {
  }

}
;

struct ccontext {

    typedef ::boost::int32_t handle;
    ccontext() {
      handle handle;
      __gl_debug(glGetIntegerv, (GL_ARRAY_BUFFER_BINDING)(&handle));
      glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &handle);
      __gl_debug(glGetIntegerv, (GL_VERTEX_ARRAY_BINDING)(&handle));
      glGetIntegerv(GL_VERTEX_ARRAY_BINDING, &handle);
      __gl_debug(glIsEnabled, (GL_PRIMITIVE_RESTART));
      glIsEnabled( GL_PRIMITIVE_RESTART);
    }
};

#endif /* GTULU_INTERNAL_CONTEXT_HPP_ */

