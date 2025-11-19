// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/mach_function_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__MachFunctionControl__init(deva_function_msgs__msg__MachFunctionControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__MachFunctionControl__fini(msg);
    return false;
  }
  // asy_aut_drvg_avl
  // asy_lat_offst_sts
  // asy_noa_degrade_msg
  // lane_chg_aut_info_for_asy_hi_way
  // lane_chg_aut_sts_for_asy_hi_way
  // ti_gap_set_for_lgt_ctrl
  // asy_lgt_ctrl_take_over_req
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  // strt_req_of_lgt_ctrl_for_prpsn
  // asy_noa_deactvd_reasn_mesg
  // asy_noa_remind_mesg
  // asy_high_beam_flash_warn_rqrd
  // asy_noa_takeover_mesg
  // asy_fast_lane_swt_sts
  // asy_cnoa_auto_lane_chg_style
  // asy_cnoa_crs_actv_faild_msg
  // asy_cnoa_crs_cross_intsec_msg
  // asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  // asy_cnoa_crs_finshd_msg
  // asy_cnoa_crs_ind_ti_gap_msg
  // asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  // asy_cnoa_crs_actv_msg
  // asy_cnoa_crs_off_odddistan
  // asy_cnoa_crs_sts
  // asy_cnoa_game_fail_type
  // asy_cnoa_game_reason
  // asy_cnoa_crs_sts_csd_msg
  // asy_cnoa_crs_swt_on_off
  // asy_cnoa_crs_swt_sts
  // asy_cnoa_data_download_faild_msg
  // asy_cnoa_crs_offs_msg
  // asy_cnoa_crs_rmn_msg
  // asy_cnoa_sod_lane_chg_swt
  // asy_cnoa_lrng_prmpt_msg
  // asy_cnoa_lrng_swt_on_off
  // asy_cnoa_lrng_swt_sts
  // asy_cnoa_takeover_warn_msg
  // asy_cnoa_turn_fail_type
  // asy_cnoa_turn_sts
  // asy_noa_tar_spd_offs
  // asy_noa_avl_rmn
  // asy_aut_lane_chg_swt_sts
  // stop_req_of_lgt_ctrl_for_prpsn
  // ad_theme_disp
  // cncl_warn_for_aut_drv
  // disp_tsi_info_for_lgt_ctrl
  // disp_spd_set_for_lgt_ctrl
  // hmi_nop_cofm_of_lan_chag
  // ad4_lane_chg_for_e2e
  // hwa_leading_point_valid
  // hwa_leading_point_center_y
  // hwa_leading_point_center_x
  // ad4_turn_indic_req_req
  // ad4_unavl_sts_for_e2e
  // ad4_warn_sts_for_e2e
  // ad4_win_open_req
  // ad_ctrl_mode_ad_ctrl_mode
  // ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  // asy_dece_remind
  // asy_lat_offs_swt_sts
  // asy_undertak_on_off_sts
  // asy_undertak_rmind
  // asy_warn_mesg_for_aut_drv
  // lgt_fusn_trfc_sgn
  // drvg_ast_on_sys_sts
  // asy_d2d_avl_rmn
  // asy_d2d_deactvd_reasn_mesg
  // asy_d2d_distan_msg
  // asy_d2d_etc_distan_msg
  // asy_d2d_remind_msg
  // asy_etc_traffic_sw_sts
  // asy_d2d_strt_to_end
  // asy_safe_stop_sts
  // asy_sod_lane_chg_switch
  // avl_sts_for_long_aut_drv_sound
  // asy_sod_pilot_cfirm
  // cncl_warn_for_aut_drv_sound
  // cncl_warn_lgt_for_aut_drv_sound
  // hmi_auto_lane_chg_style
  // hmi_lane_chg_info
  // ovrd_wrn_for_fst_actv
  // ad4_frt_lamp_req
  // ad4_rear_fog_lamp_req
  // ad4_res_req_for_e2e
  // ad4_trunk_ctrl_req
  // acc_fusn_trfc_sgn
  // asy_sfty_fct_sts_to_edraccfct_sts
  // asy_sfty_fct_sts_to_edracsfb1_fct_sts
  // asy_sfty_fct_sts_to_edracsfb2_fct_sts
  // asy_sfty_fct_sts_to_edracsfc_fct_sts
  // asy_sfty_fct_sts_to_edracsfd_fct_sts
  // asy_sfty_fct_sts_to_edracsfe_fct_sts
  // asy_cnoa_crs_csd_indcr
  // asy_cnoa_crs_hud_indcr
  // asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  // asy_emgy_manoeuvre_aid_sts
  // asy_fctn_ihbt_by_trlr
  // asy_icc_max_warn_msg
  // asy_sfty_hwl_req
  // aut_lane_chg_sts
  // cllsn_aid_post_ema
  // lane_chg_aut_actv_sts
  // cam_sts_cam_cam_frnt_cal_not_cmpl
  // asy_cnoa_lane_chg_assist_sts
  // asy_cnoa_lane_chg_fail_type
  // aut_cnoa_lane_chg_sts
  // asy_cnoa_req_lane_chg
  return true;
}

void
deva_function_msgs__msg__MachFunctionControl__fini(deva_function_msgs__msg__MachFunctionControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // asy_aut_drvg_avl
  // asy_lat_offst_sts
  // asy_noa_degrade_msg
  // lane_chg_aut_info_for_asy_hi_way
  // lane_chg_aut_sts_for_asy_hi_way
  // ti_gap_set_for_lgt_ctrl
  // asy_lgt_ctrl_take_over_req
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  // strt_req_of_lgt_ctrl_for_prpsn
  // asy_noa_deactvd_reasn_mesg
  // asy_noa_remind_mesg
  // asy_high_beam_flash_warn_rqrd
  // asy_noa_takeover_mesg
  // asy_fast_lane_swt_sts
  // asy_cnoa_auto_lane_chg_style
  // asy_cnoa_crs_actv_faild_msg
  // asy_cnoa_crs_cross_intsec_msg
  // asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  // asy_cnoa_crs_finshd_msg
  // asy_cnoa_crs_ind_ti_gap_msg
  // asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  // asy_cnoa_crs_actv_msg
  // asy_cnoa_crs_off_odddistan
  // asy_cnoa_crs_sts
  // asy_cnoa_game_fail_type
  // asy_cnoa_game_reason
  // asy_cnoa_crs_sts_csd_msg
  // asy_cnoa_crs_swt_on_off
  // asy_cnoa_crs_swt_sts
  // asy_cnoa_data_download_faild_msg
  // asy_cnoa_crs_offs_msg
  // asy_cnoa_crs_rmn_msg
  // asy_cnoa_sod_lane_chg_swt
  // asy_cnoa_lrng_prmpt_msg
  // asy_cnoa_lrng_swt_on_off
  // asy_cnoa_lrng_swt_sts
  // asy_cnoa_takeover_warn_msg
  // asy_cnoa_turn_fail_type
  // asy_cnoa_turn_sts
  // asy_noa_tar_spd_offs
  // asy_noa_avl_rmn
  // asy_aut_lane_chg_swt_sts
  // stop_req_of_lgt_ctrl_for_prpsn
  // ad_theme_disp
  // cncl_warn_for_aut_drv
  // disp_tsi_info_for_lgt_ctrl
  // disp_spd_set_for_lgt_ctrl
  // hmi_nop_cofm_of_lan_chag
  // ad4_lane_chg_for_e2e
  // hwa_leading_point_valid
  // hwa_leading_point_center_y
  // hwa_leading_point_center_x
  // ad4_turn_indic_req_req
  // ad4_unavl_sts_for_e2e
  // ad4_warn_sts_for_e2e
  // ad4_win_open_req
  // ad_ctrl_mode_ad_ctrl_mode
  // ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  // asy_dece_remind
  // asy_lat_offs_swt_sts
  // asy_undertak_on_off_sts
  // asy_undertak_rmind
  // asy_warn_mesg_for_aut_drv
  // lgt_fusn_trfc_sgn
  // drvg_ast_on_sys_sts
  // asy_d2d_avl_rmn
  // asy_d2d_deactvd_reasn_mesg
  // asy_d2d_distan_msg
  // asy_d2d_etc_distan_msg
  // asy_d2d_remind_msg
  // asy_etc_traffic_sw_sts
  // asy_d2d_strt_to_end
  // asy_safe_stop_sts
  // asy_sod_lane_chg_switch
  // avl_sts_for_long_aut_drv_sound
  // asy_sod_pilot_cfirm
  // cncl_warn_for_aut_drv_sound
  // cncl_warn_lgt_for_aut_drv_sound
  // hmi_auto_lane_chg_style
  // hmi_lane_chg_info
  // ovrd_wrn_for_fst_actv
  // ad4_frt_lamp_req
  // ad4_rear_fog_lamp_req
  // ad4_res_req_for_e2e
  // ad4_trunk_ctrl_req
  // acc_fusn_trfc_sgn
  // asy_sfty_fct_sts_to_edraccfct_sts
  // asy_sfty_fct_sts_to_edracsfb1_fct_sts
  // asy_sfty_fct_sts_to_edracsfb2_fct_sts
  // asy_sfty_fct_sts_to_edracsfc_fct_sts
  // asy_sfty_fct_sts_to_edracsfd_fct_sts
  // asy_sfty_fct_sts_to_edracsfe_fct_sts
  // asy_cnoa_crs_csd_indcr
  // asy_cnoa_crs_hud_indcr
  // asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  // asy_emgy_manoeuvre_aid_sts
  // asy_fctn_ihbt_by_trlr
  // asy_icc_max_warn_msg
  // asy_sfty_hwl_req
  // aut_lane_chg_sts
  // cllsn_aid_post_ema
  // lane_chg_aut_actv_sts
  // cam_sts_cam_cam_frnt_cal_not_cmpl
  // asy_cnoa_lane_chg_assist_sts
  // asy_cnoa_lane_chg_fail_type
  // aut_cnoa_lane_chg_sts
  // asy_cnoa_req_lane_chg
}

bool
deva_function_msgs__msg__MachFunctionControl__are_equal(const deva_function_msgs__msg__MachFunctionControl * lhs, const deva_function_msgs__msg__MachFunctionControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // asy_aut_drvg_avl
  if (lhs->asy_aut_drvg_avl != rhs->asy_aut_drvg_avl) {
    return false;
  }
  // asy_lat_offst_sts
  if (lhs->asy_lat_offst_sts != rhs->asy_lat_offst_sts) {
    return false;
  }
  // asy_noa_degrade_msg
  if (lhs->asy_noa_degrade_msg != rhs->asy_noa_degrade_msg) {
    return false;
  }
  // lane_chg_aut_info_for_asy_hi_way
  if (lhs->lane_chg_aut_info_for_asy_hi_way != rhs->lane_chg_aut_info_for_asy_hi_way) {
    return false;
  }
  // lane_chg_aut_sts_for_asy_hi_way
  if (lhs->lane_chg_aut_sts_for_asy_hi_way != rhs->lane_chg_aut_sts_for_asy_hi_way) {
    return false;
  }
  // ti_gap_set_for_lgt_ctrl
  if (lhs->ti_gap_set_for_lgt_ctrl != rhs->ti_gap_set_for_lgt_ctrl) {
    return false;
  }
  // asy_lgt_ctrl_take_over_req
  if (lhs->asy_lgt_ctrl_take_over_req != rhs->asy_lgt_ctrl_take_over_req) {
    return false;
  }
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  if (lhs->steer_tq_addl_for_ema_steer_tq_addl_for_ema != rhs->steer_tq_addl_for_ema_steer_tq_addl_for_ema) {
    return false;
  }
  // strt_req_of_lgt_ctrl_for_prpsn
  if (lhs->strt_req_of_lgt_ctrl_for_prpsn != rhs->strt_req_of_lgt_ctrl_for_prpsn) {
    return false;
  }
  // asy_noa_deactvd_reasn_mesg
  if (lhs->asy_noa_deactvd_reasn_mesg != rhs->asy_noa_deactvd_reasn_mesg) {
    return false;
  }
  // asy_noa_remind_mesg
  if (lhs->asy_noa_remind_mesg != rhs->asy_noa_remind_mesg) {
    return false;
  }
  // asy_high_beam_flash_warn_rqrd
  if (lhs->asy_high_beam_flash_warn_rqrd != rhs->asy_high_beam_flash_warn_rqrd) {
    return false;
  }
  // asy_noa_takeover_mesg
  if (lhs->asy_noa_takeover_mesg != rhs->asy_noa_takeover_mesg) {
    return false;
  }
  // asy_fast_lane_swt_sts
  if (lhs->asy_fast_lane_swt_sts != rhs->asy_fast_lane_swt_sts) {
    return false;
  }
  // asy_cnoa_auto_lane_chg_style
  if (lhs->asy_cnoa_auto_lane_chg_style != rhs->asy_cnoa_auto_lane_chg_style) {
    return false;
  }
  // asy_cnoa_crs_actv_faild_msg
  if (lhs->asy_cnoa_crs_actv_faild_msg != rhs->asy_cnoa_crs_actv_faild_msg) {
    return false;
  }
  // asy_cnoa_crs_cross_intsec_msg
  if (lhs->asy_cnoa_crs_cross_intsec_msg != rhs->asy_cnoa_crs_cross_intsec_msg) {
    return false;
  }
  // asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  if (lhs->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg != rhs->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg) {
    return false;
  }
  // asy_cnoa_crs_finshd_msg
  if (lhs->asy_cnoa_crs_finshd_msg != rhs->asy_cnoa_crs_finshd_msg) {
    return false;
  }
  // asy_cnoa_crs_ind_ti_gap_msg
  if (lhs->asy_cnoa_crs_ind_ti_gap_msg != rhs->asy_cnoa_crs_ind_ti_gap_msg) {
    return false;
  }
  // asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  if (lhs->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg != rhs->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg) {
    return false;
  }
  // asy_cnoa_crs_actv_msg
  if (lhs->asy_cnoa_crs_actv_msg != rhs->asy_cnoa_crs_actv_msg) {
    return false;
  }
  // asy_cnoa_crs_off_odddistan
  if (lhs->asy_cnoa_crs_off_odddistan != rhs->asy_cnoa_crs_off_odddistan) {
    return false;
  }
  // asy_cnoa_crs_sts
  if (lhs->asy_cnoa_crs_sts != rhs->asy_cnoa_crs_sts) {
    return false;
  }
  // asy_cnoa_game_fail_type
  if (lhs->asy_cnoa_game_fail_type != rhs->asy_cnoa_game_fail_type) {
    return false;
  }
  // asy_cnoa_game_reason
  if (lhs->asy_cnoa_game_reason != rhs->asy_cnoa_game_reason) {
    return false;
  }
  // asy_cnoa_crs_sts_csd_msg
  if (lhs->asy_cnoa_crs_sts_csd_msg != rhs->asy_cnoa_crs_sts_csd_msg) {
    return false;
  }
  // asy_cnoa_crs_swt_on_off
  if (lhs->asy_cnoa_crs_swt_on_off != rhs->asy_cnoa_crs_swt_on_off) {
    return false;
  }
  // asy_cnoa_crs_swt_sts
  if (lhs->asy_cnoa_crs_swt_sts != rhs->asy_cnoa_crs_swt_sts) {
    return false;
  }
  // asy_cnoa_data_download_faild_msg
  if (lhs->asy_cnoa_data_download_faild_msg != rhs->asy_cnoa_data_download_faild_msg) {
    return false;
  }
  // asy_cnoa_crs_offs_msg
  if (lhs->asy_cnoa_crs_offs_msg != rhs->asy_cnoa_crs_offs_msg) {
    return false;
  }
  // asy_cnoa_crs_rmn_msg
  if (lhs->asy_cnoa_crs_rmn_msg != rhs->asy_cnoa_crs_rmn_msg) {
    return false;
  }
  // asy_cnoa_sod_lane_chg_swt
  if (lhs->asy_cnoa_sod_lane_chg_swt != rhs->asy_cnoa_sod_lane_chg_swt) {
    return false;
  }
  // asy_cnoa_lrng_prmpt_msg
  if (lhs->asy_cnoa_lrng_prmpt_msg != rhs->asy_cnoa_lrng_prmpt_msg) {
    return false;
  }
  // asy_cnoa_lrng_swt_on_off
  if (lhs->asy_cnoa_lrng_swt_on_off != rhs->asy_cnoa_lrng_swt_on_off) {
    return false;
  }
  // asy_cnoa_lrng_swt_sts
  if (lhs->asy_cnoa_lrng_swt_sts != rhs->asy_cnoa_lrng_swt_sts) {
    return false;
  }
  // asy_cnoa_takeover_warn_msg
  if (lhs->asy_cnoa_takeover_warn_msg != rhs->asy_cnoa_takeover_warn_msg) {
    return false;
  }
  // asy_cnoa_turn_fail_type
  if (lhs->asy_cnoa_turn_fail_type != rhs->asy_cnoa_turn_fail_type) {
    return false;
  }
  // asy_cnoa_turn_sts
  if (lhs->asy_cnoa_turn_sts != rhs->asy_cnoa_turn_sts) {
    return false;
  }
  // asy_noa_tar_spd_offs
  if (lhs->asy_noa_tar_spd_offs != rhs->asy_noa_tar_spd_offs) {
    return false;
  }
  // asy_noa_avl_rmn
  if (lhs->asy_noa_avl_rmn != rhs->asy_noa_avl_rmn) {
    return false;
  }
  // asy_aut_lane_chg_swt_sts
  if (lhs->asy_aut_lane_chg_swt_sts != rhs->asy_aut_lane_chg_swt_sts) {
    return false;
  }
  // stop_req_of_lgt_ctrl_for_prpsn
  if (lhs->stop_req_of_lgt_ctrl_for_prpsn != rhs->stop_req_of_lgt_ctrl_for_prpsn) {
    return false;
  }
  // ad_theme_disp
  if (lhs->ad_theme_disp != rhs->ad_theme_disp) {
    return false;
  }
  // cncl_warn_for_aut_drv
  if (lhs->cncl_warn_for_aut_drv != rhs->cncl_warn_for_aut_drv) {
    return false;
  }
  // disp_tsi_info_for_lgt_ctrl
  if (lhs->disp_tsi_info_for_lgt_ctrl != rhs->disp_tsi_info_for_lgt_ctrl) {
    return false;
  }
  // disp_spd_set_for_lgt_ctrl
  if (lhs->disp_spd_set_for_lgt_ctrl != rhs->disp_spd_set_for_lgt_ctrl) {
    return false;
  }
  // hmi_nop_cofm_of_lan_chag
  if (lhs->hmi_nop_cofm_of_lan_chag != rhs->hmi_nop_cofm_of_lan_chag) {
    return false;
  }
  // ad4_lane_chg_for_e2e
  if (lhs->ad4_lane_chg_for_e2e != rhs->ad4_lane_chg_for_e2e) {
    return false;
  }
  // hwa_leading_point_valid
  if (lhs->hwa_leading_point_valid != rhs->hwa_leading_point_valid) {
    return false;
  }
  // hwa_leading_point_center_y
  if (lhs->hwa_leading_point_center_y != rhs->hwa_leading_point_center_y) {
    return false;
  }
  // hwa_leading_point_center_x
  if (lhs->hwa_leading_point_center_x != rhs->hwa_leading_point_center_x) {
    return false;
  }
  // ad4_turn_indic_req_req
  if (lhs->ad4_turn_indic_req_req != rhs->ad4_turn_indic_req_req) {
    return false;
  }
  // ad4_unavl_sts_for_e2e
  if (lhs->ad4_unavl_sts_for_e2e != rhs->ad4_unavl_sts_for_e2e) {
    return false;
  }
  // ad4_warn_sts_for_e2e
  if (lhs->ad4_warn_sts_for_e2e != rhs->ad4_warn_sts_for_e2e) {
    return false;
  }
  // ad4_win_open_req
  if (lhs->ad4_win_open_req != rhs->ad4_win_open_req) {
    return false;
  }
  // ad_ctrl_mode_ad_ctrl_mode
  if (lhs->ad_ctrl_mode_ad_ctrl_mode != rhs->ad_ctrl_mode_ad_ctrl_mode) {
    return false;
  }
  // ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  if (lhs->ad4_drv_off_req_for_lgt_ctrl_drv_off_req != rhs->ad4_drv_off_req_for_lgt_ctrl_drv_off_req) {
    return false;
  }
  // asy_dece_remind
  if (lhs->asy_dece_remind != rhs->asy_dece_remind) {
    return false;
  }
  // asy_lat_offs_swt_sts
  if (lhs->asy_lat_offs_swt_sts != rhs->asy_lat_offs_swt_sts) {
    return false;
  }
  // asy_undertak_on_off_sts
  if (lhs->asy_undertak_on_off_sts != rhs->asy_undertak_on_off_sts) {
    return false;
  }
  // asy_undertak_rmind
  if (lhs->asy_undertak_rmind != rhs->asy_undertak_rmind) {
    return false;
  }
  // asy_warn_mesg_for_aut_drv
  if (lhs->asy_warn_mesg_for_aut_drv != rhs->asy_warn_mesg_for_aut_drv) {
    return false;
  }
  // lgt_fusn_trfc_sgn
  if (lhs->lgt_fusn_trfc_sgn != rhs->lgt_fusn_trfc_sgn) {
    return false;
  }
  // drvg_ast_on_sys_sts
  if (lhs->drvg_ast_on_sys_sts != rhs->drvg_ast_on_sys_sts) {
    return false;
  }
  // asy_d2d_avl_rmn
  if (lhs->asy_d2d_avl_rmn != rhs->asy_d2d_avl_rmn) {
    return false;
  }
  // asy_d2d_deactvd_reasn_mesg
  if (lhs->asy_d2d_deactvd_reasn_mesg != rhs->asy_d2d_deactvd_reasn_mesg) {
    return false;
  }
  // asy_d2d_distan_msg
  if (lhs->asy_d2d_distan_msg != rhs->asy_d2d_distan_msg) {
    return false;
  }
  // asy_d2d_etc_distan_msg
  if (lhs->asy_d2d_etc_distan_msg != rhs->asy_d2d_etc_distan_msg) {
    return false;
  }
  // asy_d2d_remind_msg
  if (lhs->asy_d2d_remind_msg != rhs->asy_d2d_remind_msg) {
    return false;
  }
  // asy_etc_traffic_sw_sts
  if (lhs->asy_etc_traffic_sw_sts != rhs->asy_etc_traffic_sw_sts) {
    return false;
  }
  // asy_d2d_strt_to_end
  if (lhs->asy_d2d_strt_to_end != rhs->asy_d2d_strt_to_end) {
    return false;
  }
  // asy_safe_stop_sts
  if (lhs->asy_safe_stop_sts != rhs->asy_safe_stop_sts) {
    return false;
  }
  // asy_sod_lane_chg_switch
  if (lhs->asy_sod_lane_chg_switch != rhs->asy_sod_lane_chg_switch) {
    return false;
  }
  // avl_sts_for_long_aut_drv_sound
  if (lhs->avl_sts_for_long_aut_drv_sound != rhs->avl_sts_for_long_aut_drv_sound) {
    return false;
  }
  // asy_sod_pilot_cfirm
  if (lhs->asy_sod_pilot_cfirm != rhs->asy_sod_pilot_cfirm) {
    return false;
  }
  // cncl_warn_for_aut_drv_sound
  if (lhs->cncl_warn_for_aut_drv_sound != rhs->cncl_warn_for_aut_drv_sound) {
    return false;
  }
  // cncl_warn_lgt_for_aut_drv_sound
  if (lhs->cncl_warn_lgt_for_aut_drv_sound != rhs->cncl_warn_lgt_for_aut_drv_sound) {
    return false;
  }
  // hmi_auto_lane_chg_style
  if (lhs->hmi_auto_lane_chg_style != rhs->hmi_auto_lane_chg_style) {
    return false;
  }
  // hmi_lane_chg_info
  if (lhs->hmi_lane_chg_info != rhs->hmi_lane_chg_info) {
    return false;
  }
  // ovrd_wrn_for_fst_actv
  if (lhs->ovrd_wrn_for_fst_actv != rhs->ovrd_wrn_for_fst_actv) {
    return false;
  }
  // ad4_frt_lamp_req
  if (lhs->ad4_frt_lamp_req != rhs->ad4_frt_lamp_req) {
    return false;
  }
  // ad4_rear_fog_lamp_req
  if (lhs->ad4_rear_fog_lamp_req != rhs->ad4_rear_fog_lamp_req) {
    return false;
  }
  // ad4_res_req_for_e2e
  if (lhs->ad4_res_req_for_e2e != rhs->ad4_res_req_for_e2e) {
    return false;
  }
  // ad4_trunk_ctrl_req
  if (lhs->ad4_trunk_ctrl_req != rhs->ad4_trunk_ctrl_req) {
    return false;
  }
  // acc_fusn_trfc_sgn
  if (lhs->acc_fusn_trfc_sgn != rhs->acc_fusn_trfc_sgn) {
    return false;
  }
  // asy_sfty_fct_sts_to_edraccfct_sts
  if (lhs->asy_sfty_fct_sts_to_edraccfct_sts != rhs->asy_sfty_fct_sts_to_edraccfct_sts) {
    return false;
  }
  // asy_sfty_fct_sts_to_edracsfb1_fct_sts
  if (lhs->asy_sfty_fct_sts_to_edracsfb1_fct_sts != rhs->asy_sfty_fct_sts_to_edracsfb1_fct_sts) {
    return false;
  }
  // asy_sfty_fct_sts_to_edracsfb2_fct_sts
  if (lhs->asy_sfty_fct_sts_to_edracsfb2_fct_sts != rhs->asy_sfty_fct_sts_to_edracsfb2_fct_sts) {
    return false;
  }
  // asy_sfty_fct_sts_to_edracsfc_fct_sts
  if (lhs->asy_sfty_fct_sts_to_edracsfc_fct_sts != rhs->asy_sfty_fct_sts_to_edracsfc_fct_sts) {
    return false;
  }
  // asy_sfty_fct_sts_to_edracsfd_fct_sts
  if (lhs->asy_sfty_fct_sts_to_edracsfd_fct_sts != rhs->asy_sfty_fct_sts_to_edracsfd_fct_sts) {
    return false;
  }
  // asy_sfty_fct_sts_to_edracsfe_fct_sts
  if (lhs->asy_sfty_fct_sts_to_edracsfe_fct_sts != rhs->asy_sfty_fct_sts_to_edracsfe_fct_sts) {
    return false;
  }
  // asy_cnoa_crs_csd_indcr
  if (lhs->asy_cnoa_crs_csd_indcr != rhs->asy_cnoa_crs_csd_indcr) {
    return false;
  }
  // asy_cnoa_crs_hud_indcr
  if (lhs->asy_cnoa_crs_hud_indcr != rhs->asy_cnoa_crs_hud_indcr) {
    return false;
  }
  // asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  if (lhs->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr != rhs->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr) {
    return false;
  }
  // asy_emgy_manoeuvre_aid_sts
  if (lhs->asy_emgy_manoeuvre_aid_sts != rhs->asy_emgy_manoeuvre_aid_sts) {
    return false;
  }
  // asy_fctn_ihbt_by_trlr
  if (lhs->asy_fctn_ihbt_by_trlr != rhs->asy_fctn_ihbt_by_trlr) {
    return false;
  }
  // asy_icc_max_warn_msg
  if (lhs->asy_icc_max_warn_msg != rhs->asy_icc_max_warn_msg) {
    return false;
  }
  // asy_sfty_hwl_req
  if (lhs->asy_sfty_hwl_req != rhs->asy_sfty_hwl_req) {
    return false;
  }
  // aut_lane_chg_sts
  if (lhs->aut_lane_chg_sts != rhs->aut_lane_chg_sts) {
    return false;
  }
  // cllsn_aid_post_ema
  if (lhs->cllsn_aid_post_ema != rhs->cllsn_aid_post_ema) {
    return false;
  }
  // lane_chg_aut_actv_sts
  if (lhs->lane_chg_aut_actv_sts != rhs->lane_chg_aut_actv_sts) {
    return false;
  }
  // cam_sts_cam_cam_frnt_cal_not_cmpl
  if (lhs->cam_sts_cam_cam_frnt_cal_not_cmpl != rhs->cam_sts_cam_cam_frnt_cal_not_cmpl) {
    return false;
  }
  // asy_cnoa_lane_chg_assist_sts
  if (lhs->asy_cnoa_lane_chg_assist_sts != rhs->asy_cnoa_lane_chg_assist_sts) {
    return false;
  }
  // asy_cnoa_lane_chg_fail_type
  if (lhs->asy_cnoa_lane_chg_fail_type != rhs->asy_cnoa_lane_chg_fail_type) {
    return false;
  }
  // aut_cnoa_lane_chg_sts
  if (lhs->aut_cnoa_lane_chg_sts != rhs->aut_cnoa_lane_chg_sts) {
    return false;
  }
  // asy_cnoa_req_lane_chg
  if (lhs->asy_cnoa_req_lane_chg != rhs->asy_cnoa_req_lane_chg) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__MachFunctionControl__copy(
  const deva_function_msgs__msg__MachFunctionControl * input,
  deva_function_msgs__msg__MachFunctionControl * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // asy_aut_drvg_avl
  output->asy_aut_drvg_avl = input->asy_aut_drvg_avl;
  // asy_lat_offst_sts
  output->asy_lat_offst_sts = input->asy_lat_offst_sts;
  // asy_noa_degrade_msg
  output->asy_noa_degrade_msg = input->asy_noa_degrade_msg;
  // lane_chg_aut_info_for_asy_hi_way
  output->lane_chg_aut_info_for_asy_hi_way = input->lane_chg_aut_info_for_asy_hi_way;
  // lane_chg_aut_sts_for_asy_hi_way
  output->lane_chg_aut_sts_for_asy_hi_way = input->lane_chg_aut_sts_for_asy_hi_way;
  // ti_gap_set_for_lgt_ctrl
  output->ti_gap_set_for_lgt_ctrl = input->ti_gap_set_for_lgt_ctrl;
  // asy_lgt_ctrl_take_over_req
  output->asy_lgt_ctrl_take_over_req = input->asy_lgt_ctrl_take_over_req;
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  output->steer_tq_addl_for_ema_steer_tq_addl_for_ema = input->steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  // strt_req_of_lgt_ctrl_for_prpsn
  output->strt_req_of_lgt_ctrl_for_prpsn = input->strt_req_of_lgt_ctrl_for_prpsn;
  // asy_noa_deactvd_reasn_mesg
  output->asy_noa_deactvd_reasn_mesg = input->asy_noa_deactvd_reasn_mesg;
  // asy_noa_remind_mesg
  output->asy_noa_remind_mesg = input->asy_noa_remind_mesg;
  // asy_high_beam_flash_warn_rqrd
  output->asy_high_beam_flash_warn_rqrd = input->asy_high_beam_flash_warn_rqrd;
  // asy_noa_takeover_mesg
  output->asy_noa_takeover_mesg = input->asy_noa_takeover_mesg;
  // asy_fast_lane_swt_sts
  output->asy_fast_lane_swt_sts = input->asy_fast_lane_swt_sts;
  // asy_cnoa_auto_lane_chg_style
  output->asy_cnoa_auto_lane_chg_style = input->asy_cnoa_auto_lane_chg_style;
  // asy_cnoa_crs_actv_faild_msg
  output->asy_cnoa_crs_actv_faild_msg = input->asy_cnoa_crs_actv_faild_msg;
  // asy_cnoa_crs_cross_intsec_msg
  output->asy_cnoa_crs_cross_intsec_msg = input->asy_cnoa_crs_cross_intsec_msg;
  // asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
  output->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = input->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg;
  // asy_cnoa_crs_finshd_msg
  output->asy_cnoa_crs_finshd_msg = input->asy_cnoa_crs_finshd_msg;
  // asy_cnoa_crs_ind_ti_gap_msg
  output->asy_cnoa_crs_ind_ti_gap_msg = input->asy_cnoa_crs_ind_ti_gap_msg;
  // asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
  output->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = input->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg;
  // asy_cnoa_crs_actv_msg
  output->asy_cnoa_crs_actv_msg = input->asy_cnoa_crs_actv_msg;
  // asy_cnoa_crs_off_odddistan
  output->asy_cnoa_crs_off_odddistan = input->asy_cnoa_crs_off_odddistan;
  // asy_cnoa_crs_sts
  output->asy_cnoa_crs_sts = input->asy_cnoa_crs_sts;
  // asy_cnoa_game_fail_type
  output->asy_cnoa_game_fail_type = input->asy_cnoa_game_fail_type;
  // asy_cnoa_game_reason
  output->asy_cnoa_game_reason = input->asy_cnoa_game_reason;
  // asy_cnoa_crs_sts_csd_msg
  output->asy_cnoa_crs_sts_csd_msg = input->asy_cnoa_crs_sts_csd_msg;
  // asy_cnoa_crs_swt_on_off
  output->asy_cnoa_crs_swt_on_off = input->asy_cnoa_crs_swt_on_off;
  // asy_cnoa_crs_swt_sts
  output->asy_cnoa_crs_swt_sts = input->asy_cnoa_crs_swt_sts;
  // asy_cnoa_data_download_faild_msg
  output->asy_cnoa_data_download_faild_msg = input->asy_cnoa_data_download_faild_msg;
  // asy_cnoa_crs_offs_msg
  output->asy_cnoa_crs_offs_msg = input->asy_cnoa_crs_offs_msg;
  // asy_cnoa_crs_rmn_msg
  output->asy_cnoa_crs_rmn_msg = input->asy_cnoa_crs_rmn_msg;
  // asy_cnoa_sod_lane_chg_swt
  output->asy_cnoa_sod_lane_chg_swt = input->asy_cnoa_sod_lane_chg_swt;
  // asy_cnoa_lrng_prmpt_msg
  output->asy_cnoa_lrng_prmpt_msg = input->asy_cnoa_lrng_prmpt_msg;
  // asy_cnoa_lrng_swt_on_off
  output->asy_cnoa_lrng_swt_on_off = input->asy_cnoa_lrng_swt_on_off;
  // asy_cnoa_lrng_swt_sts
  output->asy_cnoa_lrng_swt_sts = input->asy_cnoa_lrng_swt_sts;
  // asy_cnoa_takeover_warn_msg
  output->asy_cnoa_takeover_warn_msg = input->asy_cnoa_takeover_warn_msg;
  // asy_cnoa_turn_fail_type
  output->asy_cnoa_turn_fail_type = input->asy_cnoa_turn_fail_type;
  // asy_cnoa_turn_sts
  output->asy_cnoa_turn_sts = input->asy_cnoa_turn_sts;
  // asy_noa_tar_spd_offs
  output->asy_noa_tar_spd_offs = input->asy_noa_tar_spd_offs;
  // asy_noa_avl_rmn
  output->asy_noa_avl_rmn = input->asy_noa_avl_rmn;
  // asy_aut_lane_chg_swt_sts
  output->asy_aut_lane_chg_swt_sts = input->asy_aut_lane_chg_swt_sts;
  // stop_req_of_lgt_ctrl_for_prpsn
  output->stop_req_of_lgt_ctrl_for_prpsn = input->stop_req_of_lgt_ctrl_for_prpsn;
  // ad_theme_disp
  output->ad_theme_disp = input->ad_theme_disp;
  // cncl_warn_for_aut_drv
  output->cncl_warn_for_aut_drv = input->cncl_warn_for_aut_drv;
  // disp_tsi_info_for_lgt_ctrl
  output->disp_tsi_info_for_lgt_ctrl = input->disp_tsi_info_for_lgt_ctrl;
  // disp_spd_set_for_lgt_ctrl
  output->disp_spd_set_for_lgt_ctrl = input->disp_spd_set_for_lgt_ctrl;
  // hmi_nop_cofm_of_lan_chag
  output->hmi_nop_cofm_of_lan_chag = input->hmi_nop_cofm_of_lan_chag;
  // ad4_lane_chg_for_e2e
  output->ad4_lane_chg_for_e2e = input->ad4_lane_chg_for_e2e;
  // hwa_leading_point_valid
  output->hwa_leading_point_valid = input->hwa_leading_point_valid;
  // hwa_leading_point_center_y
  output->hwa_leading_point_center_y = input->hwa_leading_point_center_y;
  // hwa_leading_point_center_x
  output->hwa_leading_point_center_x = input->hwa_leading_point_center_x;
  // ad4_turn_indic_req_req
  output->ad4_turn_indic_req_req = input->ad4_turn_indic_req_req;
  // ad4_unavl_sts_for_e2e
  output->ad4_unavl_sts_for_e2e = input->ad4_unavl_sts_for_e2e;
  // ad4_warn_sts_for_e2e
  output->ad4_warn_sts_for_e2e = input->ad4_warn_sts_for_e2e;
  // ad4_win_open_req
  output->ad4_win_open_req = input->ad4_win_open_req;
  // ad_ctrl_mode_ad_ctrl_mode
  output->ad_ctrl_mode_ad_ctrl_mode = input->ad_ctrl_mode_ad_ctrl_mode;
  // ad4_drv_off_req_for_lgt_ctrl_drv_off_req
  output->ad4_drv_off_req_for_lgt_ctrl_drv_off_req = input->ad4_drv_off_req_for_lgt_ctrl_drv_off_req;
  // asy_dece_remind
  output->asy_dece_remind = input->asy_dece_remind;
  // asy_lat_offs_swt_sts
  output->asy_lat_offs_swt_sts = input->asy_lat_offs_swt_sts;
  // asy_undertak_on_off_sts
  output->asy_undertak_on_off_sts = input->asy_undertak_on_off_sts;
  // asy_undertak_rmind
  output->asy_undertak_rmind = input->asy_undertak_rmind;
  // asy_warn_mesg_for_aut_drv
  output->asy_warn_mesg_for_aut_drv = input->asy_warn_mesg_for_aut_drv;
  // lgt_fusn_trfc_sgn
  output->lgt_fusn_trfc_sgn = input->lgt_fusn_trfc_sgn;
  // drvg_ast_on_sys_sts
  output->drvg_ast_on_sys_sts = input->drvg_ast_on_sys_sts;
  // asy_d2d_avl_rmn
  output->asy_d2d_avl_rmn = input->asy_d2d_avl_rmn;
  // asy_d2d_deactvd_reasn_mesg
  output->asy_d2d_deactvd_reasn_mesg = input->asy_d2d_deactvd_reasn_mesg;
  // asy_d2d_distan_msg
  output->asy_d2d_distan_msg = input->asy_d2d_distan_msg;
  // asy_d2d_etc_distan_msg
  output->asy_d2d_etc_distan_msg = input->asy_d2d_etc_distan_msg;
  // asy_d2d_remind_msg
  output->asy_d2d_remind_msg = input->asy_d2d_remind_msg;
  // asy_etc_traffic_sw_sts
  output->asy_etc_traffic_sw_sts = input->asy_etc_traffic_sw_sts;
  // asy_d2d_strt_to_end
  output->asy_d2d_strt_to_end = input->asy_d2d_strt_to_end;
  // asy_safe_stop_sts
  output->asy_safe_stop_sts = input->asy_safe_stop_sts;
  // asy_sod_lane_chg_switch
  output->asy_sod_lane_chg_switch = input->asy_sod_lane_chg_switch;
  // avl_sts_for_long_aut_drv_sound
  output->avl_sts_for_long_aut_drv_sound = input->avl_sts_for_long_aut_drv_sound;
  // asy_sod_pilot_cfirm
  output->asy_sod_pilot_cfirm = input->asy_sod_pilot_cfirm;
  // cncl_warn_for_aut_drv_sound
  output->cncl_warn_for_aut_drv_sound = input->cncl_warn_for_aut_drv_sound;
  // cncl_warn_lgt_for_aut_drv_sound
  output->cncl_warn_lgt_for_aut_drv_sound = input->cncl_warn_lgt_for_aut_drv_sound;
  // hmi_auto_lane_chg_style
  output->hmi_auto_lane_chg_style = input->hmi_auto_lane_chg_style;
  // hmi_lane_chg_info
  output->hmi_lane_chg_info = input->hmi_lane_chg_info;
  // ovrd_wrn_for_fst_actv
  output->ovrd_wrn_for_fst_actv = input->ovrd_wrn_for_fst_actv;
  // ad4_frt_lamp_req
  output->ad4_frt_lamp_req = input->ad4_frt_lamp_req;
  // ad4_rear_fog_lamp_req
  output->ad4_rear_fog_lamp_req = input->ad4_rear_fog_lamp_req;
  // ad4_res_req_for_e2e
  output->ad4_res_req_for_e2e = input->ad4_res_req_for_e2e;
  // ad4_trunk_ctrl_req
  output->ad4_trunk_ctrl_req = input->ad4_trunk_ctrl_req;
  // acc_fusn_trfc_sgn
  output->acc_fusn_trfc_sgn = input->acc_fusn_trfc_sgn;
  // asy_sfty_fct_sts_to_edraccfct_sts
  output->asy_sfty_fct_sts_to_edraccfct_sts = input->asy_sfty_fct_sts_to_edraccfct_sts;
  // asy_sfty_fct_sts_to_edracsfb1_fct_sts
  output->asy_sfty_fct_sts_to_edracsfb1_fct_sts = input->asy_sfty_fct_sts_to_edracsfb1_fct_sts;
  // asy_sfty_fct_sts_to_edracsfb2_fct_sts
  output->asy_sfty_fct_sts_to_edracsfb2_fct_sts = input->asy_sfty_fct_sts_to_edracsfb2_fct_sts;
  // asy_sfty_fct_sts_to_edracsfc_fct_sts
  output->asy_sfty_fct_sts_to_edracsfc_fct_sts = input->asy_sfty_fct_sts_to_edracsfc_fct_sts;
  // asy_sfty_fct_sts_to_edracsfd_fct_sts
  output->asy_sfty_fct_sts_to_edracsfd_fct_sts = input->asy_sfty_fct_sts_to_edracsfd_fct_sts;
  // asy_sfty_fct_sts_to_edracsfe_fct_sts
  output->asy_sfty_fct_sts_to_edracsfe_fct_sts = input->asy_sfty_fct_sts_to_edracsfe_fct_sts;
  // asy_cnoa_crs_csd_indcr
  output->asy_cnoa_crs_csd_indcr = input->asy_cnoa_crs_csd_indcr;
  // asy_cnoa_crs_hud_indcr
  output->asy_cnoa_crs_hud_indcr = input->asy_cnoa_crs_hud_indcr;
  // asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
  output->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = input->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr;
  // asy_emgy_manoeuvre_aid_sts
  output->asy_emgy_manoeuvre_aid_sts = input->asy_emgy_manoeuvre_aid_sts;
  // asy_fctn_ihbt_by_trlr
  output->asy_fctn_ihbt_by_trlr = input->asy_fctn_ihbt_by_trlr;
  // asy_icc_max_warn_msg
  output->asy_icc_max_warn_msg = input->asy_icc_max_warn_msg;
  // asy_sfty_hwl_req
  output->asy_sfty_hwl_req = input->asy_sfty_hwl_req;
  // aut_lane_chg_sts
  output->aut_lane_chg_sts = input->aut_lane_chg_sts;
  // cllsn_aid_post_ema
  output->cllsn_aid_post_ema = input->cllsn_aid_post_ema;
  // lane_chg_aut_actv_sts
  output->lane_chg_aut_actv_sts = input->lane_chg_aut_actv_sts;
  // cam_sts_cam_cam_frnt_cal_not_cmpl
  output->cam_sts_cam_cam_frnt_cal_not_cmpl = input->cam_sts_cam_cam_frnt_cal_not_cmpl;
  // asy_cnoa_lane_chg_assist_sts
  output->asy_cnoa_lane_chg_assist_sts = input->asy_cnoa_lane_chg_assist_sts;
  // asy_cnoa_lane_chg_fail_type
  output->asy_cnoa_lane_chg_fail_type = input->asy_cnoa_lane_chg_fail_type;
  // aut_cnoa_lane_chg_sts
  output->aut_cnoa_lane_chg_sts = input->aut_cnoa_lane_chg_sts;
  // asy_cnoa_req_lane_chg
  output->asy_cnoa_req_lane_chg = input->asy_cnoa_req_lane_chg;
  return true;
}

deva_function_msgs__msg__MachFunctionControl *
deva_function_msgs__msg__MachFunctionControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachFunctionControl * msg = (deva_function_msgs__msg__MachFunctionControl *)allocator.allocate(sizeof(deva_function_msgs__msg__MachFunctionControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__MachFunctionControl));
  bool success = deva_function_msgs__msg__MachFunctionControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__MachFunctionControl__destroy(deva_function_msgs__msg__MachFunctionControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__MachFunctionControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__MachFunctionControl__Sequence__init(deva_function_msgs__msg__MachFunctionControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachFunctionControl * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__MachFunctionControl *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__MachFunctionControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__MachFunctionControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__MachFunctionControl__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
deva_function_msgs__msg__MachFunctionControl__Sequence__fini(deva_function_msgs__msg__MachFunctionControl__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deva_function_msgs__msg__MachFunctionControl__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

deva_function_msgs__msg__MachFunctionControl__Sequence *
deva_function_msgs__msg__MachFunctionControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__MachFunctionControl__Sequence * array = (deva_function_msgs__msg__MachFunctionControl__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__MachFunctionControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__MachFunctionControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__MachFunctionControl__Sequence__destroy(deva_function_msgs__msg__MachFunctionControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__MachFunctionControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__MachFunctionControl__Sequence__are_equal(const deva_function_msgs__msg__MachFunctionControl__Sequence * lhs, const deva_function_msgs__msg__MachFunctionControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__MachFunctionControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__MachFunctionControl__Sequence__copy(
  const deva_function_msgs__msg__MachFunctionControl__Sequence * input,
  deva_function_msgs__msg__MachFunctionControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__MachFunctionControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__MachFunctionControl * data =
      (deva_function_msgs__msg__MachFunctionControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__MachFunctionControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__MachFunctionControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__MachFunctionControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
