// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__FsmInnerCommomMsg__init(deva_function_msgs__msg__FsmInnerCommomMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__FsmInnerCommomMsg__fini(msg);
    return false;
  }
  // asy_cnoa_crs_lan_chg_msg
  // set_spd_for_crs_ctrl_fct_active
  // asy_lane_chg_assist_sts
  // indcr_sts
  // asy_noa_takeover_sod
  // hmi_drvr_sod_req_pilot
  // drvr_crs_ctrl_fct_actv_req
  // asy_algt_indcr
  // ti_gap_set_for_lgt_ctrl
  // drv_mod_req
  // drv_off_warn
  // asy_alat_indcr
  // asy_lgt_ctrl_take_over_req
  // ovrd_wrn_for_fst_actv
  // asy_inform_for_drvr
  // cncl_warn_lgt_for_aut_drv
  // avl_sts_for_long_aut_drv
  // asy_steer_apply_rqrd
  // asy_lan_chg_mesg
  // asy_safe_stop_sts
  // asy_eyes_off_warn_rqrd
  // asy_noa_remind_mesg
  // asy_noa_takeover_mesg
  // asy_aut_drvg_avl
  // asy_noa_actv_suggest
  // cncl_warn_for_aut_drv
  // asy_lat_deg_sts
  // asy_icc_max_warn_msg
  // asy_cnoa_takeover_warn_msg
  // asy_cnoa_crs_cross_intsec_msg
  // asy_d2d_avl_rmn
  // asy_d2d_distan_msg
  // asy_d2d_strt_to_end
  // asy_d2d_deactvd_reasn_mesg
  // asy_aut_emgy_steer_actv
  // asy_d2d_etc_distan_msg
  // asy_d2d_remind_msg
  // disp_tsi_info_for_lgt_ctrl
  // disp_spd_set_for_lgt_ctrl
  // ad_dim_light
  // asy_d2d_crs_dim_indcr
  // asy_aut_drv_ctrl_typ_dim_req
  // ihu_set_disp_ad
  // aut_lane_chg_sts
  // ad_ctrl_mode
  // hmi_drvr_sod_req_chg
  // cam_status0
  // frnt_side_cam_le_sts0
  // frnt_side_cam_ri_sts0
  // re_side_cam_le_sts0
  // re_side_cam_ri_sts0
  // hmi_re_cam_sts0
  // asy_algt_sts
  // hmi_auto_lane_chg_style
  // trfc_jam_warn
  return true;
}

void
deva_function_msgs__msg__FsmInnerCommomMsg__fini(deva_function_msgs__msg__FsmInnerCommomMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // asy_cnoa_crs_lan_chg_msg
  // set_spd_for_crs_ctrl_fct_active
  // asy_lane_chg_assist_sts
  // indcr_sts
  // asy_noa_takeover_sod
  // hmi_drvr_sod_req_pilot
  // drvr_crs_ctrl_fct_actv_req
  // asy_algt_indcr
  // ti_gap_set_for_lgt_ctrl
  // drv_mod_req
  // drv_off_warn
  // asy_alat_indcr
  // asy_lgt_ctrl_take_over_req
  // ovrd_wrn_for_fst_actv
  // asy_inform_for_drvr
  // cncl_warn_lgt_for_aut_drv
  // avl_sts_for_long_aut_drv
  // asy_steer_apply_rqrd
  // asy_lan_chg_mesg
  // asy_safe_stop_sts
  // asy_eyes_off_warn_rqrd
  // asy_noa_remind_mesg
  // asy_noa_takeover_mesg
  // asy_aut_drvg_avl
  // asy_noa_actv_suggest
  // cncl_warn_for_aut_drv
  // asy_lat_deg_sts
  // asy_icc_max_warn_msg
  // asy_cnoa_takeover_warn_msg
  // asy_cnoa_crs_cross_intsec_msg
  // asy_d2d_avl_rmn
  // asy_d2d_distan_msg
  // asy_d2d_strt_to_end
  // asy_d2d_deactvd_reasn_mesg
  // asy_aut_emgy_steer_actv
  // asy_d2d_etc_distan_msg
  // asy_d2d_remind_msg
  // disp_tsi_info_for_lgt_ctrl
  // disp_spd_set_for_lgt_ctrl
  // ad_dim_light
  // asy_d2d_crs_dim_indcr
  // asy_aut_drv_ctrl_typ_dim_req
  // ihu_set_disp_ad
  // aut_lane_chg_sts
  // ad_ctrl_mode
  // hmi_drvr_sod_req_chg
  // cam_status0
  // frnt_side_cam_le_sts0
  // frnt_side_cam_ri_sts0
  // re_side_cam_le_sts0
  // re_side_cam_ri_sts0
  // hmi_re_cam_sts0
  // asy_algt_sts
  // hmi_auto_lane_chg_style
  // trfc_jam_warn
}

bool
deva_function_msgs__msg__FsmInnerCommomMsg__are_equal(const deva_function_msgs__msg__FsmInnerCommomMsg * lhs, const deva_function_msgs__msg__FsmInnerCommomMsg * rhs)
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
  // asy_cnoa_crs_lan_chg_msg
  if (lhs->asy_cnoa_crs_lan_chg_msg != rhs->asy_cnoa_crs_lan_chg_msg) {
    return false;
  }
  // set_spd_for_crs_ctrl_fct_active
  if (lhs->set_spd_for_crs_ctrl_fct_active != rhs->set_spd_for_crs_ctrl_fct_active) {
    return false;
  }
  // asy_lane_chg_assist_sts
  if (lhs->asy_lane_chg_assist_sts != rhs->asy_lane_chg_assist_sts) {
    return false;
  }
  // indcr_sts
  if (lhs->indcr_sts != rhs->indcr_sts) {
    return false;
  }
  // asy_noa_takeover_sod
  if (lhs->asy_noa_takeover_sod != rhs->asy_noa_takeover_sod) {
    return false;
  }
  // hmi_drvr_sod_req_pilot
  if (lhs->hmi_drvr_sod_req_pilot != rhs->hmi_drvr_sod_req_pilot) {
    return false;
  }
  // drvr_crs_ctrl_fct_actv_req
  if (lhs->drvr_crs_ctrl_fct_actv_req != rhs->drvr_crs_ctrl_fct_actv_req) {
    return false;
  }
  // asy_algt_indcr
  if (lhs->asy_algt_indcr != rhs->asy_algt_indcr) {
    return false;
  }
  // ti_gap_set_for_lgt_ctrl
  if (lhs->ti_gap_set_for_lgt_ctrl != rhs->ti_gap_set_for_lgt_ctrl) {
    return false;
  }
  // drv_mod_req
  if (lhs->drv_mod_req != rhs->drv_mod_req) {
    return false;
  }
  // drv_off_warn
  if (lhs->drv_off_warn != rhs->drv_off_warn) {
    return false;
  }
  // asy_alat_indcr
  if (lhs->asy_alat_indcr != rhs->asy_alat_indcr) {
    return false;
  }
  // asy_lgt_ctrl_take_over_req
  if (lhs->asy_lgt_ctrl_take_over_req != rhs->asy_lgt_ctrl_take_over_req) {
    return false;
  }
  // ovrd_wrn_for_fst_actv
  if (lhs->ovrd_wrn_for_fst_actv != rhs->ovrd_wrn_for_fst_actv) {
    return false;
  }
  // asy_inform_for_drvr
  if (lhs->asy_inform_for_drvr != rhs->asy_inform_for_drvr) {
    return false;
  }
  // cncl_warn_lgt_for_aut_drv
  if (lhs->cncl_warn_lgt_for_aut_drv != rhs->cncl_warn_lgt_for_aut_drv) {
    return false;
  }
  // avl_sts_for_long_aut_drv
  if (lhs->avl_sts_for_long_aut_drv != rhs->avl_sts_for_long_aut_drv) {
    return false;
  }
  // asy_steer_apply_rqrd
  if (lhs->asy_steer_apply_rqrd != rhs->asy_steer_apply_rqrd) {
    return false;
  }
  // asy_lan_chg_mesg
  if (lhs->asy_lan_chg_mesg != rhs->asy_lan_chg_mesg) {
    return false;
  }
  // asy_safe_stop_sts
  if (lhs->asy_safe_stop_sts != rhs->asy_safe_stop_sts) {
    return false;
  }
  // asy_eyes_off_warn_rqrd
  if (lhs->asy_eyes_off_warn_rqrd != rhs->asy_eyes_off_warn_rqrd) {
    return false;
  }
  // asy_noa_remind_mesg
  if (lhs->asy_noa_remind_mesg != rhs->asy_noa_remind_mesg) {
    return false;
  }
  // asy_noa_takeover_mesg
  if (lhs->asy_noa_takeover_mesg != rhs->asy_noa_takeover_mesg) {
    return false;
  }
  // asy_aut_drvg_avl
  if (lhs->asy_aut_drvg_avl != rhs->asy_aut_drvg_avl) {
    return false;
  }
  // asy_noa_actv_suggest
  if (lhs->asy_noa_actv_suggest != rhs->asy_noa_actv_suggest) {
    return false;
  }
  // cncl_warn_for_aut_drv
  if (lhs->cncl_warn_for_aut_drv != rhs->cncl_warn_for_aut_drv) {
    return false;
  }
  // asy_lat_deg_sts
  if (lhs->asy_lat_deg_sts != rhs->asy_lat_deg_sts) {
    return false;
  }
  // asy_icc_max_warn_msg
  if (lhs->asy_icc_max_warn_msg != rhs->asy_icc_max_warn_msg) {
    return false;
  }
  // asy_cnoa_takeover_warn_msg
  if (lhs->asy_cnoa_takeover_warn_msg != rhs->asy_cnoa_takeover_warn_msg) {
    return false;
  }
  // asy_cnoa_crs_cross_intsec_msg
  if (lhs->asy_cnoa_crs_cross_intsec_msg != rhs->asy_cnoa_crs_cross_intsec_msg) {
    return false;
  }
  // asy_d2d_avl_rmn
  if (lhs->asy_d2d_avl_rmn != rhs->asy_d2d_avl_rmn) {
    return false;
  }
  // asy_d2d_distan_msg
  if (lhs->asy_d2d_distan_msg != rhs->asy_d2d_distan_msg) {
    return false;
  }
  // asy_d2d_strt_to_end
  if (lhs->asy_d2d_strt_to_end != rhs->asy_d2d_strt_to_end) {
    return false;
  }
  // asy_d2d_deactvd_reasn_mesg
  if (lhs->asy_d2d_deactvd_reasn_mesg != rhs->asy_d2d_deactvd_reasn_mesg) {
    return false;
  }
  // asy_aut_emgy_steer_actv
  if (lhs->asy_aut_emgy_steer_actv != rhs->asy_aut_emgy_steer_actv) {
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
  // disp_tsi_info_for_lgt_ctrl
  if (lhs->disp_tsi_info_for_lgt_ctrl != rhs->disp_tsi_info_for_lgt_ctrl) {
    return false;
  }
  // disp_spd_set_for_lgt_ctrl
  if (lhs->disp_spd_set_for_lgt_ctrl != rhs->disp_spd_set_for_lgt_ctrl) {
    return false;
  }
  // ad_dim_light
  if (lhs->ad_dim_light != rhs->ad_dim_light) {
    return false;
  }
  // asy_d2d_crs_dim_indcr
  if (lhs->asy_d2d_crs_dim_indcr != rhs->asy_d2d_crs_dim_indcr) {
    return false;
  }
  // asy_aut_drv_ctrl_typ_dim_req
  if (lhs->asy_aut_drv_ctrl_typ_dim_req != rhs->asy_aut_drv_ctrl_typ_dim_req) {
    return false;
  }
  // ihu_set_disp_ad
  if (lhs->ihu_set_disp_ad != rhs->ihu_set_disp_ad) {
    return false;
  }
  // aut_lane_chg_sts
  if (lhs->aut_lane_chg_sts != rhs->aut_lane_chg_sts) {
    return false;
  }
  // ad_ctrl_mode
  if (lhs->ad_ctrl_mode != rhs->ad_ctrl_mode) {
    return false;
  }
  // hmi_drvr_sod_req_chg
  if (lhs->hmi_drvr_sod_req_chg != rhs->hmi_drvr_sod_req_chg) {
    return false;
  }
  // cam_status0
  if (lhs->cam_status0 != rhs->cam_status0) {
    return false;
  }
  // frnt_side_cam_le_sts0
  if (lhs->frnt_side_cam_le_sts0 != rhs->frnt_side_cam_le_sts0) {
    return false;
  }
  // frnt_side_cam_ri_sts0
  if (lhs->frnt_side_cam_ri_sts0 != rhs->frnt_side_cam_ri_sts0) {
    return false;
  }
  // re_side_cam_le_sts0
  if (lhs->re_side_cam_le_sts0 != rhs->re_side_cam_le_sts0) {
    return false;
  }
  // re_side_cam_ri_sts0
  if (lhs->re_side_cam_ri_sts0 != rhs->re_side_cam_ri_sts0) {
    return false;
  }
  // hmi_re_cam_sts0
  if (lhs->hmi_re_cam_sts0 != rhs->hmi_re_cam_sts0) {
    return false;
  }
  // asy_algt_sts
  if (lhs->asy_algt_sts != rhs->asy_algt_sts) {
    return false;
  }
  // hmi_auto_lane_chg_style
  if (lhs->hmi_auto_lane_chg_style != rhs->hmi_auto_lane_chg_style) {
    return false;
  }
  // trfc_jam_warn
  if (lhs->trfc_jam_warn != rhs->trfc_jam_warn) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__FsmInnerCommomMsg__copy(
  const deva_function_msgs__msg__FsmInnerCommomMsg * input,
  deva_function_msgs__msg__FsmInnerCommomMsg * output)
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
  // asy_cnoa_crs_lan_chg_msg
  output->asy_cnoa_crs_lan_chg_msg = input->asy_cnoa_crs_lan_chg_msg;
  // set_spd_for_crs_ctrl_fct_active
  output->set_spd_for_crs_ctrl_fct_active = input->set_spd_for_crs_ctrl_fct_active;
  // asy_lane_chg_assist_sts
  output->asy_lane_chg_assist_sts = input->asy_lane_chg_assist_sts;
  // indcr_sts
  output->indcr_sts = input->indcr_sts;
  // asy_noa_takeover_sod
  output->asy_noa_takeover_sod = input->asy_noa_takeover_sod;
  // hmi_drvr_sod_req_pilot
  output->hmi_drvr_sod_req_pilot = input->hmi_drvr_sod_req_pilot;
  // drvr_crs_ctrl_fct_actv_req
  output->drvr_crs_ctrl_fct_actv_req = input->drvr_crs_ctrl_fct_actv_req;
  // asy_algt_indcr
  output->asy_algt_indcr = input->asy_algt_indcr;
  // ti_gap_set_for_lgt_ctrl
  output->ti_gap_set_for_lgt_ctrl = input->ti_gap_set_for_lgt_ctrl;
  // drv_mod_req
  output->drv_mod_req = input->drv_mod_req;
  // drv_off_warn
  output->drv_off_warn = input->drv_off_warn;
  // asy_alat_indcr
  output->asy_alat_indcr = input->asy_alat_indcr;
  // asy_lgt_ctrl_take_over_req
  output->asy_lgt_ctrl_take_over_req = input->asy_lgt_ctrl_take_over_req;
  // ovrd_wrn_for_fst_actv
  output->ovrd_wrn_for_fst_actv = input->ovrd_wrn_for_fst_actv;
  // asy_inform_for_drvr
  output->asy_inform_for_drvr = input->asy_inform_for_drvr;
  // cncl_warn_lgt_for_aut_drv
  output->cncl_warn_lgt_for_aut_drv = input->cncl_warn_lgt_for_aut_drv;
  // avl_sts_for_long_aut_drv
  output->avl_sts_for_long_aut_drv = input->avl_sts_for_long_aut_drv;
  // asy_steer_apply_rqrd
  output->asy_steer_apply_rqrd = input->asy_steer_apply_rqrd;
  // asy_lan_chg_mesg
  output->asy_lan_chg_mesg = input->asy_lan_chg_mesg;
  // asy_safe_stop_sts
  output->asy_safe_stop_sts = input->asy_safe_stop_sts;
  // asy_eyes_off_warn_rqrd
  output->asy_eyes_off_warn_rqrd = input->asy_eyes_off_warn_rqrd;
  // asy_noa_remind_mesg
  output->asy_noa_remind_mesg = input->asy_noa_remind_mesg;
  // asy_noa_takeover_mesg
  output->asy_noa_takeover_mesg = input->asy_noa_takeover_mesg;
  // asy_aut_drvg_avl
  output->asy_aut_drvg_avl = input->asy_aut_drvg_avl;
  // asy_noa_actv_suggest
  output->asy_noa_actv_suggest = input->asy_noa_actv_suggest;
  // cncl_warn_for_aut_drv
  output->cncl_warn_for_aut_drv = input->cncl_warn_for_aut_drv;
  // asy_lat_deg_sts
  output->asy_lat_deg_sts = input->asy_lat_deg_sts;
  // asy_icc_max_warn_msg
  output->asy_icc_max_warn_msg = input->asy_icc_max_warn_msg;
  // asy_cnoa_takeover_warn_msg
  output->asy_cnoa_takeover_warn_msg = input->asy_cnoa_takeover_warn_msg;
  // asy_cnoa_crs_cross_intsec_msg
  output->asy_cnoa_crs_cross_intsec_msg = input->asy_cnoa_crs_cross_intsec_msg;
  // asy_d2d_avl_rmn
  output->asy_d2d_avl_rmn = input->asy_d2d_avl_rmn;
  // asy_d2d_distan_msg
  output->asy_d2d_distan_msg = input->asy_d2d_distan_msg;
  // asy_d2d_strt_to_end
  output->asy_d2d_strt_to_end = input->asy_d2d_strt_to_end;
  // asy_d2d_deactvd_reasn_mesg
  output->asy_d2d_deactvd_reasn_mesg = input->asy_d2d_deactvd_reasn_mesg;
  // asy_aut_emgy_steer_actv
  output->asy_aut_emgy_steer_actv = input->asy_aut_emgy_steer_actv;
  // asy_d2d_etc_distan_msg
  output->asy_d2d_etc_distan_msg = input->asy_d2d_etc_distan_msg;
  // asy_d2d_remind_msg
  output->asy_d2d_remind_msg = input->asy_d2d_remind_msg;
  // disp_tsi_info_for_lgt_ctrl
  output->disp_tsi_info_for_lgt_ctrl = input->disp_tsi_info_for_lgt_ctrl;
  // disp_spd_set_for_lgt_ctrl
  output->disp_spd_set_for_lgt_ctrl = input->disp_spd_set_for_lgt_ctrl;
  // ad_dim_light
  output->ad_dim_light = input->ad_dim_light;
  // asy_d2d_crs_dim_indcr
  output->asy_d2d_crs_dim_indcr = input->asy_d2d_crs_dim_indcr;
  // asy_aut_drv_ctrl_typ_dim_req
  output->asy_aut_drv_ctrl_typ_dim_req = input->asy_aut_drv_ctrl_typ_dim_req;
  // ihu_set_disp_ad
  output->ihu_set_disp_ad = input->ihu_set_disp_ad;
  // aut_lane_chg_sts
  output->aut_lane_chg_sts = input->aut_lane_chg_sts;
  // ad_ctrl_mode
  output->ad_ctrl_mode = input->ad_ctrl_mode;
  // hmi_drvr_sod_req_chg
  output->hmi_drvr_sod_req_chg = input->hmi_drvr_sod_req_chg;
  // cam_status0
  output->cam_status0 = input->cam_status0;
  // frnt_side_cam_le_sts0
  output->frnt_side_cam_le_sts0 = input->frnt_side_cam_le_sts0;
  // frnt_side_cam_ri_sts0
  output->frnt_side_cam_ri_sts0 = input->frnt_side_cam_ri_sts0;
  // re_side_cam_le_sts0
  output->re_side_cam_le_sts0 = input->re_side_cam_le_sts0;
  // re_side_cam_ri_sts0
  output->re_side_cam_ri_sts0 = input->re_side_cam_ri_sts0;
  // hmi_re_cam_sts0
  output->hmi_re_cam_sts0 = input->hmi_re_cam_sts0;
  // asy_algt_sts
  output->asy_algt_sts = input->asy_algt_sts;
  // hmi_auto_lane_chg_style
  output->hmi_auto_lane_chg_style = input->hmi_auto_lane_chg_style;
  // trfc_jam_warn
  output->trfc_jam_warn = input->trfc_jam_warn;
  return true;
}

deva_function_msgs__msg__FsmInnerCommomMsg *
deva_function_msgs__msg__FsmInnerCommomMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmInnerCommomMsg * msg = (deva_function_msgs__msg__FsmInnerCommomMsg *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmInnerCommomMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__FsmInnerCommomMsg));
  bool success = deva_function_msgs__msg__FsmInnerCommomMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__FsmInnerCommomMsg__destroy(deva_function_msgs__msg__FsmInnerCommomMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__FsmInnerCommomMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__init(deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmInnerCommomMsg * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__FsmInnerCommomMsg *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__FsmInnerCommomMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__FsmInnerCommomMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__FsmInnerCommomMsg__fini(&data[i - 1]);
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
deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__fini(deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * array)
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
      deva_function_msgs__msg__FsmInnerCommomMsg__fini(&array->data[i]);
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

deva_function_msgs__msg__FsmInnerCommomMsg__Sequence *
deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * array = (deva_function_msgs__msg__FsmInnerCommomMsg__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__FsmInnerCommomMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__destroy(deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__are_equal(const deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * lhs, const deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__FsmInnerCommomMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__FsmInnerCommomMsg__Sequence__copy(
  const deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * input,
  deva_function_msgs__msg__FsmInnerCommomMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__FsmInnerCommomMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__FsmInnerCommomMsg * data =
      (deva_function_msgs__msg__FsmInnerCommomMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__FsmInnerCommomMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__FsmInnerCommomMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__FsmInnerCommomMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
