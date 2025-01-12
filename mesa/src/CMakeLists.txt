set(SOURCES broadcom/cle/v3d41_draw.c
        broadcom/cle/v3d_decoder.c
        broadcom/clif/clif_dump.c
        broadcom/clif/v3d33_dump.c
        broadcom/clif/v3d41_dump.c
        broadcom/common/v3d_debug.c
        broadcom/common/v3d_device_info.c
        broadcom/compiler/nir_to_vir.c
        broadcom/compiler/qpu_schedule.c
        broadcom/compiler/qpu_validate.c
        broadcom/compiler/v3d33_tex.c
        broadcom/compiler/v3d33_vpm_setup.c
        broadcom/compiler/v3d40_tex.c
        broadcom/compiler/v3d_nir_lower_image_load_store.c
        broadcom/compiler/v3d_nir_lower_io.c
        broadcom/compiler/v3d_nir_lower_line_smooth.c
        broadcom/compiler/v3d_nir_lower_logic_ops.c
        broadcom/compiler/v3d_nir_lower_scratch.c
        broadcom/compiler/v3d_nir_lower_txf_ms.c
        broadcom/compiler/vir.c
        broadcom/compiler/vir_dump.c
        broadcom/compiler/vir_live_variables.c
        broadcom/compiler/vir_opt_copy_propagate.c
        broadcom/compiler/vir_opt_dead_code.c
        broadcom/compiler/vir_opt_redundant_flags.c
        broadcom/compiler/vir_opt_small_immediates.c
        broadcom/compiler/vir_register_allocate.c
        broadcom/qpu/qpu_disasm.c
        broadcom/qpu/qpu_instr.c
        broadcom/qpu/qpu_pack.c
        broadcom/qpu/qpu_validate.c
        broadcom/simulator/v3d33_simulator.c
        broadcom/simulator/v3d41_simulator.c
        compiler/nir/nir_builtin_builder.c
        compiler/nir/nir.c
        compiler/nir/nir_clone.c
        compiler/nir/nir_constant_expressions.c
        compiler/nir/nir_control_flow.c
        compiler/nir/nir_deref.c
        compiler/nir/nir_dominance.c
        compiler/nir/nir_from_ssa.c
        compiler/nir/nir_gather_info.c
        compiler/nir/nir_inline_functions.c
        compiler/nir/nir_instr_set.c
        compiler/nir/nir_intrinsics.c
        compiler/nir/nir_linking_helpers.c
        compiler/nir/nir_liveness.c
        compiler/nir/nir_loop_analyze.c
        compiler/nir/nir_lower_alpha_test.c
        compiler/nir/nir_lower_alu.c
        compiler/nir/nir_lower_alu_to_scalar.c
        compiler/nir/nir_lower_bool_to_int32.c
        compiler/nir/nir_lower_clamp_color_outputs.c
        compiler/nir/nir_lower_clip.c
        compiler/nir/nir_lower_double_ops.c
        compiler/nir/nir_lower_flrp.c
        compiler/nir/nir_lower_global_vars_to_local.c
        compiler/nir/nir_lower_idiv.c
        compiler/nir/nir_lower_int64.c
        compiler/nir/nir_lower_io.c
        compiler/nir/nir_lower_io_to_scalar.c
        compiler/nir/nir_lower_load_const_to_scalar.c
        compiler/nir/nir_lower_packing.c
        compiler/nir/nir_lower_phis_to_scalar.c
        compiler/nir/nir_lower_point_size.c
        compiler/nir/nir_lower_regs_to_ssa.c
        compiler/nir/nir_lower_samplers.c
        compiler/nir/nir_lower_scratch.c
        compiler/nir/nir_lower_system_values.c
        compiler/nir/nir_lower_tex.c
        compiler/nir/nir_lower_two_sided_color.c
        compiler/nir/nir_lower_uniforms_to_ubo.c
        compiler/nir/nir_lower_var_copies.c
        compiler/nir/nir_lower_vars_to_ssa.c
        compiler/nir/nir_metadata.c
        compiler/nir/nir_normalize_cubemap_coords.c
        compiler/nir/nir_opcodes.c
        compiler/nir/nir_opt_algebraic.c
        compiler/nir/nir_opt_conditional_discard.c
        compiler/nir/nir_opt_constant_folding.c
        compiler/nir/nir_opt_copy_propagate.c
        compiler/nir/nir_opt_cse.c
        compiler/nir/nir_opt_dce.c
        compiler/nir/nir_opt_dead_cf.c
        compiler/nir/nir_opt_if.c
        compiler/nir/nir_opt_loop_unroll.c
        compiler/nir/nir_opt_move.c
        compiler/nir/nir_opt_peephole_select.c
        compiler/nir/nir_opt_remove_phis.c
        compiler/nir/nir_opt_sink.c
        compiler/nir/nir_opt_trivial_continues.c
        compiler/nir/nir_opt_undef.c
        compiler/nir/nir_phi_builder.c
        compiler/nir/nir_print.c
        compiler/nir/nir_range_analysis.c
        compiler/nir/nir_remove_dead_variables.c
        compiler/nir/nir_repair_ssa.c
        compiler/nir/nir_schedule.c
        compiler/nir/nir_search.c
        compiler/nir/nir_serialize.c
        compiler/nir/nir_split_var_copies.c
        compiler/nir/nir_sweep.c
        compiler/nir/nir_to_lcssa.c
        compiler/nir/nir_validate.c
        compiler/nir/nir_worklist.c
        compiler/shader_enums.c
        compiler/vir_to_qpu.c
        drm/xf86drm.c
        drm/xf86drmHash.c
        drm/xf86drmRandom.c
        gallium/auxiliary/cso_cache/cso_cache.c
        gallium/auxiliary/cso_cache/cso_hash.c
        gallium/auxiliary/indices/u_indices_gen.c
        gallium/auxiliary/indices/u_primconvert.c
        gallium/auxiliary/pipe-loader/pipe_loader.c
        gallium/auxiliary/pipe-loader/pipe_loader_drm.c
        gallium/auxiliary/pipe-loader/pipe_loader_sw.c
        gallium/auxiliary/renderonly/renderonly.c
        gallium/auxiliary/tgsi/tgsi_build.c
        gallium/auxiliary/tgsi/tgsi_dump.c
        gallium/auxiliary/tgsi/tgsi_info.c
        gallium/auxiliary/tgsi/tgsi_iterate.c
        gallium/auxiliary/tgsi/tgsi_parse.c
        gallium/auxiliary/tgsi/tgsi_sanity.c
        gallium/auxiliary/tgsi/tgsi_scan.c
        gallium/auxiliary/tgsi/tgsi_strings.c
        gallium/auxiliary/tgsi/tgsi_text.c
        gallium/auxiliary/tgsi/tgsi_to_nir.c
        gallium/auxiliary/tgsi/tgsi_ureg.c
        gallium/auxiliary/tgsi/tgsi_util.c
        gallium/auxiliary/util/u_bitmask.c
        gallium/auxiliary/util/u_blitter.c
        gallium/auxiliary/util/u_debug_describe.c
        gallium/auxiliary/util/u_debug_refcnt.c
        gallium/auxiliary/util/u_debug_stack.c
        gallium/auxiliary/util/u_debug_symbol.c
        gallium/auxiliary/util/u_dl.c
        gallium/auxiliary/util/u_framebuffer.c
        gallium/auxiliary/util/u_hash_table.c
        gallium/auxiliary/util/u_helpers.c
        gallium/auxiliary/util/u_prim.c
        gallium/auxiliary/util/u_prim_restart.c
        gallium/auxiliary/util/u_screen.c
        gallium/auxiliary/util/u_simple_shaders.c
        gallium/auxiliary/util/u_surface.c
        gallium/auxiliary/util/u_texture.c
        gallium/auxiliary/util/u_transfer.c
        gallium/auxiliary/util/u_transfer_helper.c
        gallium/auxiliary/util/u_upload_mgr.c
        gallium/drivers/v3d/v3d33_draw.c
        gallium/drivers/v3d/v3d33_emit.c
        gallium/drivers/v3d/v3d33_format_table.c
        gallium/drivers/v3d/v3d33_job.c
        gallium/drivers/v3d/v3d33_rcl.c
        gallium/drivers/v3d/v3d33_state.c
        gallium/drivers/v3d/v3d41_draw.c
        gallium/drivers/v3d/v3d41_emit.c
        gallium/drivers/v3d/v3d41_format_table.c
        gallium/drivers/v3d/v3d41_job.c
        gallium/drivers/v3d/v3d41_rcl.c
        gallium/drivers/v3d/v3d41_state.c
        gallium/drivers/v3d/v3d_blit.c
        gallium/drivers/v3d/v3d_bufmgr.c
        gallium/drivers/v3d/v3d_cl.c
        gallium/drivers/v3d/v3d_context.c
        gallium/drivers/v3d/v3d_fence.c
        gallium/drivers/v3d/v3d_formats.c
        gallium/drivers/v3d/v3d_job.c
        gallium/drivers/v3d/v3d_program.c
        gallium/drivers/v3d/v3d_query.c
        gallium/drivers/v3d/v3d_resource.c
        gallium/drivers/v3d/v3d_screen.c
        gallium/drivers/v3d/v3d_tiling.c
        gallium/drivers/v3d/v3d_uniforms.c
        gallium/drivers/vc4/vc4_qpu_disasm.c
        gallium/targets/osmesa/target.c
        gallium/targets/sw/null/null_sw_winsys.c
        gallium/targets/sw/wrapper/wrapper_sw_winsys.c
        gallium/targets/v3d/drm/v3d_drm_winsys.c
        gallium/winsys/sw/null/null_sw_winsys.c
        gallium/winsys/sw/wrapper/wrapper_sw_winsys.c
        gallium/winsys/v3d/drm/v3d_drm_winsys.c
        loader/loader.c
        util/blob.c
        util/dag.c
        util/debug.c
        util/disk_cache.c
        util/double.c
        util/format_srgb.c
        util/format/u_format_bptc.c
        util/format/u_format.c
        util/format/u_format_etc.c
        util/format/u_format_latc.c
        util/format/u_format_other.c
        util/format/u_format_rgtc.c
        util/format/u_format_s3tc.c
        util/format/u_format_table.c
        util/format/u_format_yuv.c
        util/format/u_format_zs.c
        util/half_float.c
        util/hash_table.c
        util/mesa-sha1.c
        util/os_file.c
        util/os_misc.c
        util/os_time.c
        util/ralloc.c
        util/register_allocate.c
        util/rgtc.c
        util/set.c
        util/sha1/sha1.c
        util/slab.c
        util/softfloat.c
        util/u_cpu_detect.c
        util/u_debug.c
        util/u_process.c
        util/u_vector.c
        util/xmlconfig.c
        compiler/glsl_types.cpp
        compiler/nir_types.cpp
        )
set(HEADERS broadcom/cle/v3d_decoder.h
        broadcom/cle/v3d_packet_helpers.h
        broadcom/cle/v3d_packet_v33_pack.h
        broadcom/cle/v3d_packet_v41_pack.h
        broadcom/cle/v3d_xml.h
        broadcom/cle/v3dx_pack.h
        broadcom/clif/clif_dump.h
        broadcom/clif/clif_private.h
        broadcom/common/v3d_cpu_tiling.h
        broadcom/common/v3d_debug.h
        broadcom/common/v3d_device_info.h
        broadcom/common/v3d_limits.h
        broadcom/common/v3d_macros.h
        broadcom/compiler/v3d_compiler.h
        broadcom/qpu/qpu_disasm.h
        broadcom/qpu/qpu_instr.h
        broadcom/simulator/v3d_simulator.h
        broadcom/simulator/v3d_simulator_wrapper.h
        broadcom/simulator/v3dx_simulator.h
        compiler/builtin_type_macros.h
        compiler/glsl/glsl_parser_extras.h
        compiler/glsl/glsl_symbol_table.h
        compiler/glsl/ir_expression_operation.h
        compiler/glsl/ir.h
        compiler/glsl/ir_hierarchical_visitor.h
        compiler/glsl/ir_visitor.h
        compiler/glsl/list.h
        compiler/glsl_types.h
        compiler/nir/nir_builder.h
        compiler/nir/nir_builder_opcodes.h
        compiler/nir/nir_builtin_builder.h
        compiler/nir/nir_constant_expressions.h
        compiler/nir/nir_control_flow.h
        compiler/nir/nir_control_flow_private.h
        compiler/nir/nir_deref.h
        compiler/nir/nir_format_convert.h
        compiler/nir/nir.h
        compiler/nir/nir_instr_set.h
        compiler/nir/nir_intrinsics.h
        compiler/nir/nir_loop_analyze.h
        compiler/nir/nir_opcodes.h
        compiler/nir/nir_phi_builder.h
        compiler/nir/nir_range_analysis.h
        compiler/nir/nir_search.h
        compiler/nir/nir_search_helpers.h
        compiler/nir/nir_serialize.h
        compiler/nir/nir_vla.h
        compiler/nir/nir_worklist.h
        compiler/nir_types.h
        compiler/shader_enums.h
        compiler/shader_info.h
        drm/libdrm_macros.h
        drm/util_math.h
        drm/xf86drm.h
        drm/xf86drmHash.h
        drm/xf86drmMode.h
        drm/xf86drmRandom.h
        gallium/auxiliary/cso_cache/cso_cache.h
        gallium/auxiliary/cso_cache/cso_hash.h
        gallium/auxiliary/driver_ddebug/dd_public.h
        gallium/auxiliary/driver_noop/noop_public.h
        gallium/auxiliary/driver_rbug/rbug_public.h
        gallium/auxiliary/driver_trace/tr_public.h
        gallium/auxiliary/indices/u_indices.h
        gallium/auxiliary/indices/u_indices_priv.h
        gallium/auxiliary/indices/u_primconvert.h
        gallium/auxiliary/nir/tgsi_to_nir.h
        gallium/auxiliary/os/os_thread.h
        gallium/auxiliary/pipe-loader/driinfo_gallium.h
        gallium/auxiliary/pipe-loader/driinfo_gallium_prev.h
        gallium/auxiliary/pipe-loader/pipe_loader.h
        gallium/auxiliary/pipe-loader/pipe_loader_priv.h
        gallium/auxiliary/renderonly/renderonly.h
        gallium/auxiliary/target-helpers/drm_helper.h
        gallium/auxiliary/target-helpers/drm_helper_public.h
        gallium/auxiliary/target-helpers/inline_debug_helper.h
        gallium/auxiliary/target-helpers/inline_sw_helper.h
        gallium/auxiliary/target-helpers/sw_helper.h
        gallium/auxiliary/target-helpers/sw_helper_public.h
        gallium/auxiliary/tgsi/tgsi_build.h
        gallium/auxiliary/tgsi/tgsi_dump.h
        gallium/auxiliary/tgsi/tgsi_exec.h
        gallium/auxiliary/tgsi/tgsi_from_mesa.h
        gallium/auxiliary/tgsi/tgsi_info.h
        gallium/auxiliary/tgsi/tgsi_info_opcodes.h
        gallium/auxiliary/tgsi/tgsi_iterate.h
        gallium/auxiliary/tgsi/tgsi_opcode_tmp.h
        gallium/auxiliary/tgsi/tgsi_parse.h
        gallium/auxiliary/tgsi/tgsi_sanity.h
        gallium/auxiliary/tgsi/tgsi_scan.h
        gallium/auxiliary/tgsi/tgsi_strings.h
        gallium/auxiliary/tgsi/tgsi_text.h
        gallium/auxiliary/tgsi/tgsi_to_nir.h
        gallium/auxiliary/tgsi/tgsi_ureg.h
        gallium/auxiliary/tgsi/tgsi_util.h
        gallium/auxiliary/util/u_bitmask.h
        gallium/auxiliary/util/u_blit.h
        gallium/auxiliary/util/u_blitter.h
        gallium/auxiliary/util/u_box.h
        gallium/auxiliary/util/u_debug_describe.h
        gallium/auxiliary/util/u_debug_refcnt.h
        gallium/auxiliary/util/u_debug_stack.h
        gallium/auxiliary/util/u_debug_symbol.h
        gallium/auxiliary/util/u_dl.h
        gallium/auxiliary/util/u_draw.h
        gallium/auxiliary/util/u_draw_quad.h
        gallium/auxiliary/util/u_file.h
        gallium/auxiliary/util/u_framebuffer.h
        gallium/auxiliary/util/u_half.h
        gallium/auxiliary/util/u_hash_table.h
        gallium/auxiliary/util/u_helpers.h
        gallium/auxiliary/util/u_inlines.h
        gallium/auxiliary/util/u_pack_color.h
        gallium/auxiliary/util/u_pointer.h
        gallium/auxiliary/util/u_prim.h
        gallium/auxiliary/util/u_prim_restart.h
        gallium/auxiliary/util/u_rect.h
        gallium/auxiliary/util/u_sampler.h
        gallium/auxiliary/util/u_screen.h
        gallium/auxiliary/util/u_simple_shaders.h
        gallium/auxiliary/util/u_surface.h
        gallium/auxiliary/util/u_tests.h
        gallium/auxiliary/util/u_texture.h
        gallium/auxiliary/util/u_transfer.h
        gallium/auxiliary/util/u_transfer_helper.h
        gallium/auxiliary/util/u_upload_mgr.h
        gallium/drivers/v3d/driinfo_gallium.h
        gallium/drivers/v3d/driinfo_v3d.h
        gallium/drivers/v3d/v3d_bufmgr.h
        gallium/drivers/v3d/v3d_cl.h
        gallium/drivers/v3d/v3d_context.h
        gallium/drivers/v3d/v3d_format_table.h
        gallium/drivers/v3d/v3d_resource.h
        gallium/drivers/v3d/v3d_screen.h
        gallium/drivers/v3d/v3d_tiling.h
        gallium/drivers/v3d/v3dx_context.h
        gallium/drivers/vc4/vc4_qpu_defines.h
        gallium/drivers/vc4/vc4_qpu.h
        gallium/include/frontend/drisw_api.h
        gallium/include/frontend/drm_driver.h
        gallium/include/frontend/sw_driver.h
        gallium/include/frontend/sw_winsys.h
        gallium/include/frontend/winsys_handle.h
        gallium/include/pipe/p_compiler.h
        gallium/include/pipe/p_config.h
        gallium/include/pipe/p_context.h
        gallium/include/pipe/p_defines.h
        gallium/include/pipe/p_format.h
        gallium/include/pipe/p_screen.h
        gallium/include/pipe/p_shader_tokens.h
        gallium/include/pipe/p_state.h
        gallium/include/pipe/p_video_enums.h
        gallium/targets/sw/dri/dri_sw_winsys.h
        gallium/targets/sw/kms-dri/kms_dri_sw_winsys.h
        gallium/targets/sw/null/null_sw_winsys.h
        gallium/targets/sw/wrapper/wrapper_sw_winsys.h
        gallium/targets/v3d/drm/v3d_drm_public.h
        gallium/winsys/sw/dri/dri_sw_winsys.h
        gallium/winsys/sw/kms-dri/kms_dri_sw_winsys.h
        gallium/winsys/sw/null/null_sw_winsys.h
        gallium/winsys/sw/wrapper/wrapper_sw_winsys.h
        gallium/winsys/v3d/drm/v3d_drm_public.h
        loader/loader.h
        loader/pci_id_driver_map.h
        mesa/main/config.h
        mesa/main/glheader.h
        mesa/main/macros.h
        mesa/main/menums.h
        mesa/main/mesa_private.h
        mesa/main/texcompress_bptc_tmp.h
        mesa/main/texcompress_etc_tmp.h
        mesa/main/texcompress_s3tc_tmp.h
        mesa/program/symbol_table.h
        util/bigmath.h
        util/bitscan.h
        util/bitset.h
        util/blob.h
        util/compiler.h
        util/dag.h
        util/debug.h
        util/detect_os.h
        util/disk_cache.h
        util/double.h
        util/driconf.h
        util/fast_urem_by_const.h
        util/format_r11g11b10f.h
        util/format_rgb9e5.h
        util/format_srgb.h
        util/format/u_format_bptc.h
        util/format/u_format_etc.h
        util/format/u_format.h
        util/format/u_format_latc.h
        util/format/u_format_other.h
        util/format/u_format_rgtc.h
        util/format/u_format_s3tc.h
        util/format/u_format_yuv.h
        util/format/u_format_zs.h
        util/half_float.h
        util/hash_table.h
        util/list.h
        util/macros.h
        util/mesa-sha1.h
        util/os_file.h
        util/os_memory_aligned.h
        util/os_memory.h
        util/os_memory_stdc.h
        util/os_misc.h
        util/os_time.h
        util/ralloc.h
        util/register_allocate.h
        util/rgtc.h
        util/rounding.h
        util/set.h
        util/sha1/sha1.h
        util/slab.h
        util/softfloat.h
        util/strndup.h
        util/texcompress_rgtc_tmp.h
        util/u_atomic.h
        util/u_cpu_detect.h
        util/u_debug.h
        util/u_drm.h
        util/u_dynarray.h
        util/u_endian.h
        util/u_math.h
        util/u_memory.h
        util/u_memset.h
        util/u_process.h
        util/u_string.h
        util/u_thread.h
        util/u_vector.h
        util/xmlconfig.h
        util/xxhash.h)
set(INCLUDE_HEADERS ../include/c11_compat.h
        ../include/c11/threads.h
        ../include/c11/threads_posix.h
        ../include/c99_alloca.h
        ../include/c99_compat.h
        ../include/c99_math.h
        ../include/drm-uapi/drm_fourcc.h
        ../include/drm-uapi/drm.h
        ../include/drm-uapi/drm_mode.h
        ../include/drm-uapi/v3d_drm.h
        ../include/GL/glext.h
        ../include/GL/gl.h
        ../include/GL/internal/dri_interface.h
        ../include/KHR/khrplatform.h
        ../include/no_extern_c.h
        ../include/pci_ids/i810_pci_ids.h
        ../include/pci_ids/i915_pci_ids.h
        ../include/pci_ids/i965_pci_ids.h
        ../include/pci_ids/iris_pci_ids.h
        ../include/pci_ids/r200_pci_ids.h
        ../include/pci_ids/r300_pci_ids.h
        ../include/pci_ids/r600_pci_ids.h
        ../include/pci_ids/radeon_pci_ids.h
        ../include/pci_ids/radeonsi_pci_ids.h
        ../include/pci_ids/virtio_gpu_pci_ids.h
        ../include/pci_ids/vmwgfx_pci_ids.h
        ../include/vulkan/vk_platform.h
        ../include/vulkan/vulkan_core.h
        )


add_library(mesa STATIC "")
target_sources(mesa PRIVATE ${SOURCES} PUBLIC ${HEADERS} ${INCLUDE_HEADERS})
target_include_directories(mesa PUBLIC ${CMAKE_CURRENT_LIST_DIR} gallium/include/ gallium/auxiliary ../include ../include/drm-uapi compiler loader broadcom util gallium/winsys gallium/drivers gallium/drivers/v3d mesa)

# enabel libs
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
target_link_libraries(mesa PRIVATE Threads::Threads)

# definitions
add_definitions(
        -DDEBUG
        -D_GNU_SOURCE
        -DMAJOR_IN_SYSMACROS
        -DHAVE_PTHREAD
        -DHAVE_TIMESPEC_GET
        -DHAVE_ENDIAN_H
        -DV3D_VERSION=33
        -DGALLIUM_STATIC_TARGETS
        -DHAVE_LIBDRM
        -DUSE_DRICONF
        -DGALLIUM_V3D
)