// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/bus_to_sm_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "deva_common_msgs/msg/detail/header__functions.h"

bool
deva_function_msgs__msg__BusToSmData__init(deva_function_msgs__msg__BusToSmData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!deva_common_msgs__msg__Header__init(&msg->header)) {
    deva_function_msgs__msg__BusToSmData__fini(msg);
    return false;
  }
  // tr_lock_sts
  // door_drvr_lock_sts
  // door_pass_lock_sts
  // door_le_re_lock_sts
  // door_ri_re_lock_sts
  // brk_sys_sts_brk_sys_capability
  // rev
  // calltype_and_sts_ecall_status
  // blt_lock_st_at_drvr
  // blt_lock_st_err_sts_at_drvr
  // esc_st_esc_st
  // prk_lat_lgt_failr
  // road_incln_qly
  // veh_mtn_st
  // whl_spd_circuml_frnt_le_qf
  // whl_spd_circuml_frnt_ri_qf
  // whl_spd_circuml_re_le_qf
  // whl_spd_circuml_re_ri_qf
  // gear_mov
  // accr_pedl_psd_accr_pedl_psd
  // accr_pedl_psd_sts
  // typ_ext_req_to_upd_qf
  // trsm_park_lockd
  // door_drvr_sts
  // door_le_re_sts
  // door_pass_sts
  // door_ri_re_sts
  // hood_sts
  // mirr_fold_sts_at_drvr
  // mirr_fold_sts_at_pass
  // tr_sts
  // trlr_prsnt
  // veh_mod_mngt_glb_safe1_car_mod_sts1
  // veh_mod_mngt_glb_safe1_usg_mod_sts
  // steer_sts_to_park_assi
  // indcr_typ_ext_req
  // rainfall_amnt
  // egy_lvl_elec_mai
  // le_frnt_tire_msg_p_warn_flg
  // le_re_tire_msg_p_warn_flg
  // ri_frnt_tire_msg_p_warn_flg
  // ri_re_tire_msg_p_warn_flg
  // sm_lat_shake_hand_state
  // sm_lon_shake_hand_state
  // rcv_ctrl_req
  // rcv_steertrim_req
  // mob_dev_rcv_req1_mob_dev_sts
  // dc_dc_actvd
  // steer_whl_snsr_ag
  // ble_con_sts
  // twbr_lockd_posn
  // full_elec_twbr_posn
  // vtsd_mode_sts
  // key_read_sts_to_asm
  // mob_dev_rpa_req_rspa_ctrl
  // mob_dev_rpa_req_rpa_req
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  // mob_dev_rpa_req_mob_dev_sts
  // crab_mov_mod_sts
  // tank_turn_mod_sts
  // pass_seat_sts2
  // hmi_max_ev_mod
  // adcu_max_ev_mod
  // lamp_req_by_veh_hld
  // ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  // msg_req_by_hill_dwn_ctrl
  // esc_warn_indcn_req_esc_warn_indcn_req
  // abs_ctrl_actv_ctrl_sts1
  // eng_st1_wd_sts_eng_st1_wd_sts
  // crs_ctrl_ovrdn
  // veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  // drvr_steer_whl_hld_qly
  // door_drvr_sts_with_fac_qly_door_sts
  // door_drvr_sts_with_fac_qly_fac_qly
  // lat_ctrl_mod_cfmd
  // esc_ctrl_indcn
  // pt_drvr_setg_drv_mod_req
  // front_four_d_radar_sts_for_dim
  // drvr_prsnt_sts
  // wipr_actv
  // stand_still_mgr_sts_for_hld
  // pt_drvr_setg
  // tptf_status_error
  // tptf_status
  // tptf_time_gap
  // hmi_sod_lan_chg_switch
  // hmi_drvr_sod_req_chg
  // turn_indcr_monostable
  // drvr_lane_chg_aut_actv_sts
  // auto_lane_chg_with_navi_sw_onoff
  // nop_cofm_of_lan_chag_onoff
  // wipg_spd_info
  // asy_safe_stop_sts
  // hmi_sup_end_mod
  // crash_sts_safe_sts
  // gear_park_not_allow
  // drvr_seat_sts
  // drvr_seat_snsr_sts
  // ad_l3_lat_ctrl_sts_ad_mod
  // ad_l3_lgt_ctrl_sts_ad_mod
  // accr_pedl_sts_flt_sts
  // amb_t_raw_amb_t_val
  // body_hei
  // le_frnt_tire_msg_batt_lo_st
  // le_frnt_tire_msg_fast_lose_warn_flg
  // le_frnt_tire_msg_msg_old_flg
  // le_frnt_tire_msg_p
  // le_frnt_tire_msg_sys_warn_flg
  // le_frnt_tire_msg_t
  // le_frnt_tire_msg_t_warn_flg
  // le_frnt_tire_msg_tire_fillg_assi_p_sts
  // le_re_tire_msg_batt_lo_st
  // le_re_tire_msg_fast_lose_warn_flg
  // le_re_tire_msg_msg_old_flg
  // le_re_tire_msg_p
  // le_re_tire_msg_sys_warn_flg
  // le_re_tire_msg_t
  // le_re_tire_msg_t_warn_flg
  // le_re_tire_msg_tire_fillg_assi_p_sts
  // ri_frnt_tire_msg_batt_lo_st
  // ri_frnt_tire_msg_fast_lose_warn_flg
  // ri_frnt_tire_msg_msg_old_flg
  // ri_frnt_tire_msg_p
  // ri_frnt_tire_msg_sys_warn_flg
  // ri_frnt_tire_msg_t
  // ri_frnt_tire_msg_t_warn_flg
  // ri_frnt_tire_msg_tire_fillg_assi_p_sts
  // ri_re_tire_msg_batt_lo_st
  // ri_re_tire_msg_fast_lose_warn_flg
  // ri_re_tire_msg_msg_old_flg
  // ri_re_tire_msg_p
  // ri_re_tire_msg_sys_warn_flg
  // ri_re_tire_msg_t
  // ri_re_tire_msg_t_warn_flg
  // ri_re_tire_msg_tire_fillg_assi_p_sts
  // occupy_mon_sts_drvr_sts
  // sun_roof_posn_sts
  // susp_posn_vert_le1_frnt
  // susp_posn_vert_le1_frnt_qf
  // susp_posn_vert_le1_re
  // susp_posn_vert_le1_re_qf
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  // susp_posn_vert_ri1_susp_posn_vert_ri_re
  // susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  // twli_bri_raw_qf
  // twli_bri_raw_twli_bri_raw
  // win_posn_sts_at_drvr
  // win_posn_sts_at_pass
  // win_posn_sts_at_re_le
  // win_posn_sts_at_re_ri
  // brk_sys_sts_ad_l3_brk_fall_bck
  // brk_sys_sts_brk_degradation
  // brk_sys_sts_brk_sys_mod_cfmd
  // tank_turn_mod_sts_tank_turn_mod_sts
  // sfty_decel_group_safe_asy_sfty_ena_decel
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  // asy_emgy_lane_keep_aid_sts
  // asy_lane_keep_aid_sts
  // rcwm_brk_req_rcwm_brk_req
  // asy_a_lgt_sts_asy_a_lgt_sts
  // asy_a_lat_indcr
  // asy_cnoa_crs_sts
  // indcr_sts
  return true;
}

void
deva_function_msgs__msg__BusToSmData__fini(deva_function_msgs__msg__BusToSmData * msg)
{
  if (!msg) {
    return;
  }
  // header
  deva_common_msgs__msg__Header__fini(&msg->header);
  // tr_lock_sts
  // door_drvr_lock_sts
  // door_pass_lock_sts
  // door_le_re_lock_sts
  // door_ri_re_lock_sts
  // brk_sys_sts_brk_sys_capability
  // rev
  // calltype_and_sts_ecall_status
  // blt_lock_st_at_drvr
  // blt_lock_st_err_sts_at_drvr
  // esc_st_esc_st
  // prk_lat_lgt_failr
  // road_incln_qly
  // veh_mtn_st
  // whl_spd_circuml_frnt_le_qf
  // whl_spd_circuml_frnt_ri_qf
  // whl_spd_circuml_re_le_qf
  // whl_spd_circuml_re_ri_qf
  // gear_mov
  // accr_pedl_psd_accr_pedl_psd
  // accr_pedl_psd_sts
  // typ_ext_req_to_upd_qf
  // trsm_park_lockd
  // door_drvr_sts
  // door_le_re_sts
  // door_pass_sts
  // door_ri_re_sts
  // hood_sts
  // mirr_fold_sts_at_drvr
  // mirr_fold_sts_at_pass
  // tr_sts
  // trlr_prsnt
  // veh_mod_mngt_glb_safe1_car_mod_sts1
  // veh_mod_mngt_glb_safe1_usg_mod_sts
  // steer_sts_to_park_assi
  // indcr_typ_ext_req
  // rainfall_amnt
  // egy_lvl_elec_mai
  // le_frnt_tire_msg_p_warn_flg
  // le_re_tire_msg_p_warn_flg
  // ri_frnt_tire_msg_p_warn_flg
  // ri_re_tire_msg_p_warn_flg
  // sm_lat_shake_hand_state
  // sm_lon_shake_hand_state
  // rcv_ctrl_req
  // rcv_steertrim_req
  // mob_dev_rcv_req1_mob_dev_sts
  // dc_dc_actvd
  // steer_whl_snsr_ag
  // ble_con_sts
  // twbr_lockd_posn
  // full_elec_twbr_posn
  // vtsd_mode_sts
  // key_read_sts_to_asm
  // mob_dev_rpa_req_rspa_ctrl
  // mob_dev_rpa_req_rpa_req
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  // mob_dev_rpa_req_mob_dev_sts
  // crab_mov_mod_sts
  // tank_turn_mod_sts
  // pass_seat_sts2
  // hmi_max_ev_mod
  // adcu_max_ev_mod
  // lamp_req_by_veh_hld
  // ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  // msg_req_by_hill_dwn_ctrl
  // esc_warn_indcn_req_esc_warn_indcn_req
  // abs_ctrl_actv_ctrl_sts1
  // eng_st1_wd_sts_eng_st1_wd_sts
  // crs_ctrl_ovrdn
  // veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  // drvr_steer_whl_hld_qly
  // door_drvr_sts_with_fac_qly_door_sts
  // door_drvr_sts_with_fac_qly_fac_qly
  // lat_ctrl_mod_cfmd
  // esc_ctrl_indcn
  // pt_drvr_setg_drv_mod_req
  // front_four_d_radar_sts_for_dim
  // drvr_prsnt_sts
  // wipr_actv
  // stand_still_mgr_sts_for_hld
  // pt_drvr_setg
  // tptf_status_error
  // tptf_status
  // tptf_time_gap
  // hmi_sod_lan_chg_switch
  // hmi_drvr_sod_req_chg
  // turn_indcr_monostable
  // drvr_lane_chg_aut_actv_sts
  // auto_lane_chg_with_navi_sw_onoff
  // nop_cofm_of_lan_chag_onoff
  // wipg_spd_info
  // asy_safe_stop_sts
  // hmi_sup_end_mod
  // crash_sts_safe_sts
  // gear_park_not_allow
  // drvr_seat_sts
  // drvr_seat_snsr_sts
  // ad_l3_lat_ctrl_sts_ad_mod
  // ad_l3_lgt_ctrl_sts_ad_mod
  // accr_pedl_sts_flt_sts
  // amb_t_raw_amb_t_val
  // body_hei
  // le_frnt_tire_msg_batt_lo_st
  // le_frnt_tire_msg_fast_lose_warn_flg
  // le_frnt_tire_msg_msg_old_flg
  // le_frnt_tire_msg_p
  // le_frnt_tire_msg_sys_warn_flg
  // le_frnt_tire_msg_t
  // le_frnt_tire_msg_t_warn_flg
  // le_frnt_tire_msg_tire_fillg_assi_p_sts
  // le_re_tire_msg_batt_lo_st
  // le_re_tire_msg_fast_lose_warn_flg
  // le_re_tire_msg_msg_old_flg
  // le_re_tire_msg_p
  // le_re_tire_msg_sys_warn_flg
  // le_re_tire_msg_t
  // le_re_tire_msg_t_warn_flg
  // le_re_tire_msg_tire_fillg_assi_p_sts
  // ri_frnt_tire_msg_batt_lo_st
  // ri_frnt_tire_msg_fast_lose_warn_flg
  // ri_frnt_tire_msg_msg_old_flg
  // ri_frnt_tire_msg_p
  // ri_frnt_tire_msg_sys_warn_flg
  // ri_frnt_tire_msg_t
  // ri_frnt_tire_msg_t_warn_flg
  // ri_frnt_tire_msg_tire_fillg_assi_p_sts
  // ri_re_tire_msg_batt_lo_st
  // ri_re_tire_msg_fast_lose_warn_flg
  // ri_re_tire_msg_msg_old_flg
  // ri_re_tire_msg_p
  // ri_re_tire_msg_sys_warn_flg
  // ri_re_tire_msg_t
  // ri_re_tire_msg_t_warn_flg
  // ri_re_tire_msg_tire_fillg_assi_p_sts
  // occupy_mon_sts_drvr_sts
  // sun_roof_posn_sts
  // susp_posn_vert_le1_frnt
  // susp_posn_vert_le1_frnt_qf
  // susp_posn_vert_le1_re
  // susp_posn_vert_le1_re_qf
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  // susp_posn_vert_ri1_susp_posn_vert_ri_re
  // susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  // twli_bri_raw_qf
  // twli_bri_raw_twli_bri_raw
  // win_posn_sts_at_drvr
  // win_posn_sts_at_pass
  // win_posn_sts_at_re_le
  // win_posn_sts_at_re_ri
  // brk_sys_sts_ad_l3_brk_fall_bck
  // brk_sys_sts_brk_degradation
  // brk_sys_sts_brk_sys_mod_cfmd
  // tank_turn_mod_sts_tank_turn_mod_sts
  // sfty_decel_group_safe_asy_sfty_ena_decel
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  // asy_emgy_lane_keep_aid_sts
  // asy_lane_keep_aid_sts
  // rcwm_brk_req_rcwm_brk_req
  // asy_a_lgt_sts_asy_a_lgt_sts
  // asy_a_lat_indcr
  // asy_cnoa_crs_sts
  // indcr_sts
}

bool
deva_function_msgs__msg__BusToSmData__are_equal(const deva_function_msgs__msg__BusToSmData * lhs, const deva_function_msgs__msg__BusToSmData * rhs)
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
  // tr_lock_sts
  if (lhs->tr_lock_sts != rhs->tr_lock_sts) {
    return false;
  }
  // door_drvr_lock_sts
  if (lhs->door_drvr_lock_sts != rhs->door_drvr_lock_sts) {
    return false;
  }
  // door_pass_lock_sts
  if (lhs->door_pass_lock_sts != rhs->door_pass_lock_sts) {
    return false;
  }
  // door_le_re_lock_sts
  if (lhs->door_le_re_lock_sts != rhs->door_le_re_lock_sts) {
    return false;
  }
  // door_ri_re_lock_sts
  if (lhs->door_ri_re_lock_sts != rhs->door_ri_re_lock_sts) {
    return false;
  }
  // brk_sys_sts_brk_sys_capability
  if (lhs->brk_sys_sts_brk_sys_capability != rhs->brk_sys_sts_brk_sys_capability) {
    return false;
  }
  // rev
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->rev[i] != rhs->rev[i]) {
      return false;
    }
  }
  // calltype_and_sts_ecall_status
  if (lhs->calltype_and_sts_ecall_status != rhs->calltype_and_sts_ecall_status) {
    return false;
  }
  // blt_lock_st_at_drvr
  if (lhs->blt_lock_st_at_drvr != rhs->blt_lock_st_at_drvr) {
    return false;
  }
  // blt_lock_st_err_sts_at_drvr
  if (lhs->blt_lock_st_err_sts_at_drvr != rhs->blt_lock_st_err_sts_at_drvr) {
    return false;
  }
  // esc_st_esc_st
  if (lhs->esc_st_esc_st != rhs->esc_st_esc_st) {
    return false;
  }
  // prk_lat_lgt_failr
  if (lhs->prk_lat_lgt_failr != rhs->prk_lat_lgt_failr) {
    return false;
  }
  // road_incln_qly
  if (lhs->road_incln_qly != rhs->road_incln_qly) {
    return false;
  }
  // veh_mtn_st
  if (lhs->veh_mtn_st != rhs->veh_mtn_st) {
    return false;
  }
  // whl_spd_circuml_frnt_le_qf
  if (lhs->whl_spd_circuml_frnt_le_qf != rhs->whl_spd_circuml_frnt_le_qf) {
    return false;
  }
  // whl_spd_circuml_frnt_ri_qf
  if (lhs->whl_spd_circuml_frnt_ri_qf != rhs->whl_spd_circuml_frnt_ri_qf) {
    return false;
  }
  // whl_spd_circuml_re_le_qf
  if (lhs->whl_spd_circuml_re_le_qf != rhs->whl_spd_circuml_re_le_qf) {
    return false;
  }
  // whl_spd_circuml_re_ri_qf
  if (lhs->whl_spd_circuml_re_ri_qf != rhs->whl_spd_circuml_re_ri_qf) {
    return false;
  }
  // gear_mov
  if (lhs->gear_mov != rhs->gear_mov) {
    return false;
  }
  // accr_pedl_psd_accr_pedl_psd
  if (lhs->accr_pedl_psd_accr_pedl_psd != rhs->accr_pedl_psd_accr_pedl_psd) {
    return false;
  }
  // accr_pedl_psd_sts
  if (lhs->accr_pedl_psd_sts != rhs->accr_pedl_psd_sts) {
    return false;
  }
  // typ_ext_req_to_upd_qf
  if (lhs->typ_ext_req_to_upd_qf != rhs->typ_ext_req_to_upd_qf) {
    return false;
  }
  // trsm_park_lockd
  if (lhs->trsm_park_lockd != rhs->trsm_park_lockd) {
    return false;
  }
  // door_drvr_sts
  if (lhs->door_drvr_sts != rhs->door_drvr_sts) {
    return false;
  }
  // door_le_re_sts
  if (lhs->door_le_re_sts != rhs->door_le_re_sts) {
    return false;
  }
  // door_pass_sts
  if (lhs->door_pass_sts != rhs->door_pass_sts) {
    return false;
  }
  // door_ri_re_sts
  if (lhs->door_ri_re_sts != rhs->door_ri_re_sts) {
    return false;
  }
  // hood_sts
  if (lhs->hood_sts != rhs->hood_sts) {
    return false;
  }
  // mirr_fold_sts_at_drvr
  if (lhs->mirr_fold_sts_at_drvr != rhs->mirr_fold_sts_at_drvr) {
    return false;
  }
  // mirr_fold_sts_at_pass
  if (lhs->mirr_fold_sts_at_pass != rhs->mirr_fold_sts_at_pass) {
    return false;
  }
  // tr_sts
  if (lhs->tr_sts != rhs->tr_sts) {
    return false;
  }
  // trlr_prsnt
  if (lhs->trlr_prsnt != rhs->trlr_prsnt) {
    return false;
  }
  // veh_mod_mngt_glb_safe1_car_mod_sts1
  if (lhs->veh_mod_mngt_glb_safe1_car_mod_sts1 != rhs->veh_mod_mngt_glb_safe1_car_mod_sts1) {
    return false;
  }
  // veh_mod_mngt_glb_safe1_usg_mod_sts
  if (lhs->veh_mod_mngt_glb_safe1_usg_mod_sts != rhs->veh_mod_mngt_glb_safe1_usg_mod_sts) {
    return false;
  }
  // steer_sts_to_park_assi
  if (lhs->steer_sts_to_park_assi != rhs->steer_sts_to_park_assi) {
    return false;
  }
  // indcr_typ_ext_req
  if (lhs->indcr_typ_ext_req != rhs->indcr_typ_ext_req) {
    return false;
  }
  // rainfall_amnt
  if (lhs->rainfall_amnt != rhs->rainfall_amnt) {
    return false;
  }
  // egy_lvl_elec_mai
  if (lhs->egy_lvl_elec_mai != rhs->egy_lvl_elec_mai) {
    return false;
  }
  // le_frnt_tire_msg_p_warn_flg
  if (lhs->le_frnt_tire_msg_p_warn_flg != rhs->le_frnt_tire_msg_p_warn_flg) {
    return false;
  }
  // le_re_tire_msg_p_warn_flg
  if (lhs->le_re_tire_msg_p_warn_flg != rhs->le_re_tire_msg_p_warn_flg) {
    return false;
  }
  // ri_frnt_tire_msg_p_warn_flg
  if (lhs->ri_frnt_tire_msg_p_warn_flg != rhs->ri_frnt_tire_msg_p_warn_flg) {
    return false;
  }
  // ri_re_tire_msg_p_warn_flg
  if (lhs->ri_re_tire_msg_p_warn_flg != rhs->ri_re_tire_msg_p_warn_flg) {
    return false;
  }
  // sm_lat_shake_hand_state
  if (lhs->sm_lat_shake_hand_state != rhs->sm_lat_shake_hand_state) {
    return false;
  }
  // sm_lon_shake_hand_state
  if (lhs->sm_lon_shake_hand_state != rhs->sm_lon_shake_hand_state) {
    return false;
  }
  // rcv_ctrl_req
  if (lhs->rcv_ctrl_req != rhs->rcv_ctrl_req) {
    return false;
  }
  // rcv_steertrim_req
  if (lhs->rcv_steertrim_req != rhs->rcv_steertrim_req) {
    return false;
  }
  // mob_dev_rcv_req1_mob_dev_sts
  if (lhs->mob_dev_rcv_req1_mob_dev_sts != rhs->mob_dev_rcv_req1_mob_dev_sts) {
    return false;
  }
  // dc_dc_actvd
  if (lhs->dc_dc_actvd != rhs->dc_dc_actvd) {
    return false;
  }
  // steer_whl_snsr_ag
  if (lhs->steer_whl_snsr_ag != rhs->steer_whl_snsr_ag) {
    return false;
  }
  // ble_con_sts
  if (lhs->ble_con_sts != rhs->ble_con_sts) {
    return false;
  }
  // twbr_lockd_posn
  if (lhs->twbr_lockd_posn != rhs->twbr_lockd_posn) {
    return false;
  }
  // full_elec_twbr_posn
  if (lhs->full_elec_twbr_posn != rhs->full_elec_twbr_posn) {
    return false;
  }
  // vtsd_mode_sts
  if (lhs->vtsd_mode_sts != rhs->vtsd_mode_sts) {
    return false;
  }
  // key_read_sts_to_asm
  for (size_t i = 0; i < 12; ++i) {
    if (lhs->key_read_sts_to_asm[i] != rhs->key_read_sts_to_asm[i]) {
      return false;
    }
  }
  // mob_dev_rpa_req_rspa_ctrl
  if (lhs->mob_dev_rpa_req_rspa_ctrl != rhs->mob_dev_rpa_req_rspa_ctrl) {
    return false;
  }
  // mob_dev_rpa_req_rpa_req
  if (lhs->mob_dev_rpa_req_rpa_req != rhs->mob_dev_rpa_req_rpa_req) {
    return false;
  }
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  if (lhs->mob_dev_rpa_req_rpa_out_mode_sub_t != rhs->mob_dev_rpa_req_rpa_out_mode_sub_t) {
    return false;
  }
  // mob_dev_rpa_req_mob_dev_sts
  if (lhs->mob_dev_rpa_req_mob_dev_sts != rhs->mob_dev_rpa_req_mob_dev_sts) {
    return false;
  }
  // crab_mov_mod_sts
  if (lhs->crab_mov_mod_sts != rhs->crab_mov_mod_sts) {
    return false;
  }
  // tank_turn_mod_sts
  if (lhs->tank_turn_mod_sts != rhs->tank_turn_mod_sts) {
    return false;
  }
  // pass_seat_sts2
  if (lhs->pass_seat_sts2 != rhs->pass_seat_sts2) {
    return false;
  }
  // hmi_max_ev_mod
  if (lhs->hmi_max_ev_mod != rhs->hmi_max_ev_mod) {
    return false;
  }
  // adcu_max_ev_mod
  if (lhs->adcu_max_ev_mod != rhs->adcu_max_ev_mod) {
    return false;
  }
  // lamp_req_by_veh_hld
  if (lhs->lamp_req_by_veh_hld != rhs->lamp_req_by_veh_hld) {
    return false;
  }
  // ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  if (lhs->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn != rhs->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn) {
    return false;
  }
  // msg_req_by_hill_dwn_ctrl
  if (lhs->msg_req_by_hill_dwn_ctrl != rhs->msg_req_by_hill_dwn_ctrl) {
    return false;
  }
  // esc_warn_indcn_req_esc_warn_indcn_req
  if (lhs->esc_warn_indcn_req_esc_warn_indcn_req != rhs->esc_warn_indcn_req_esc_warn_indcn_req) {
    return false;
  }
  // abs_ctrl_actv_ctrl_sts1
  if (lhs->abs_ctrl_actv_ctrl_sts1 != rhs->abs_ctrl_actv_ctrl_sts1) {
    return false;
  }
  // eng_st1_wd_sts_eng_st1_wd_sts
  if (lhs->eng_st1_wd_sts_eng_st1_wd_sts != rhs->eng_st1_wd_sts_eng_st1_wd_sts) {
    return false;
  }
  // crs_ctrl_ovrdn
  if (lhs->crs_ctrl_ovrdn != rhs->crs_ctrl_ovrdn) {
    return false;
  }
  // veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  if (lhs->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai != rhs->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai) {
    return false;
  }
  // drvr_steer_whl_hld_qly
  if (lhs->drvr_steer_whl_hld_qly != rhs->drvr_steer_whl_hld_qly) {
    return false;
  }
  // door_drvr_sts_with_fac_qly_door_sts
  if (lhs->door_drvr_sts_with_fac_qly_door_sts != rhs->door_drvr_sts_with_fac_qly_door_sts) {
    return false;
  }
  // door_drvr_sts_with_fac_qly_fac_qly
  if (lhs->door_drvr_sts_with_fac_qly_fac_qly != rhs->door_drvr_sts_with_fac_qly_fac_qly) {
    return false;
  }
  // lat_ctrl_mod_cfmd
  if (lhs->lat_ctrl_mod_cfmd != rhs->lat_ctrl_mod_cfmd) {
    return false;
  }
  // esc_ctrl_indcn
  if (lhs->esc_ctrl_indcn != rhs->esc_ctrl_indcn) {
    return false;
  }
  // pt_drvr_setg_drv_mod_req
  if (lhs->pt_drvr_setg_drv_mod_req != rhs->pt_drvr_setg_drv_mod_req) {
    return false;
  }
  // front_four_d_radar_sts_for_dim
  if (lhs->front_four_d_radar_sts_for_dim != rhs->front_four_d_radar_sts_for_dim) {
    return false;
  }
  // drvr_prsnt_sts
  if (lhs->drvr_prsnt_sts != rhs->drvr_prsnt_sts) {
    return false;
  }
  // wipr_actv
  if (lhs->wipr_actv != rhs->wipr_actv) {
    return false;
  }
  // stand_still_mgr_sts_for_hld
  if (lhs->stand_still_mgr_sts_for_hld != rhs->stand_still_mgr_sts_for_hld) {
    return false;
  }
  // pt_drvr_setg
  if (lhs->pt_drvr_setg != rhs->pt_drvr_setg) {
    return false;
  }
  // tptf_status_error
  if (lhs->tptf_status_error != rhs->tptf_status_error) {
    return false;
  }
  // tptf_status
  if (lhs->tptf_status != rhs->tptf_status) {
    return false;
  }
  // tptf_time_gap
  if (lhs->tptf_time_gap != rhs->tptf_time_gap) {
    return false;
  }
  // hmi_sod_lan_chg_switch
  if (lhs->hmi_sod_lan_chg_switch != rhs->hmi_sod_lan_chg_switch) {
    return false;
  }
  // hmi_drvr_sod_req_chg
  if (lhs->hmi_drvr_sod_req_chg != rhs->hmi_drvr_sod_req_chg) {
    return false;
  }
  // turn_indcr_monostable
  if (lhs->turn_indcr_monostable != rhs->turn_indcr_monostable) {
    return false;
  }
  // drvr_lane_chg_aut_actv_sts
  if (lhs->drvr_lane_chg_aut_actv_sts != rhs->drvr_lane_chg_aut_actv_sts) {
    return false;
  }
  // auto_lane_chg_with_navi_sw_onoff
  if (lhs->auto_lane_chg_with_navi_sw_onoff != rhs->auto_lane_chg_with_navi_sw_onoff) {
    return false;
  }
  // nop_cofm_of_lan_chag_onoff
  if (lhs->nop_cofm_of_lan_chag_onoff != rhs->nop_cofm_of_lan_chag_onoff) {
    return false;
  }
  // wipg_spd_info
  if (lhs->wipg_spd_info != rhs->wipg_spd_info) {
    return false;
  }
  // asy_safe_stop_sts
  if (lhs->asy_safe_stop_sts != rhs->asy_safe_stop_sts) {
    return false;
  }
  // hmi_sup_end_mod
  if (lhs->hmi_sup_end_mod != rhs->hmi_sup_end_mod) {
    return false;
  }
  // crash_sts_safe_sts
  if (lhs->crash_sts_safe_sts != rhs->crash_sts_safe_sts) {
    return false;
  }
  // gear_park_not_allow
  if (lhs->gear_park_not_allow != rhs->gear_park_not_allow) {
    return false;
  }
  // drvr_seat_sts
  if (lhs->drvr_seat_sts != rhs->drvr_seat_sts) {
    return false;
  }
  // drvr_seat_snsr_sts
  if (lhs->drvr_seat_snsr_sts != rhs->drvr_seat_snsr_sts) {
    return false;
  }
  // ad_l3_lat_ctrl_sts_ad_mod
  if (lhs->ad_l3_lat_ctrl_sts_ad_mod != rhs->ad_l3_lat_ctrl_sts_ad_mod) {
    return false;
  }
  // ad_l3_lgt_ctrl_sts_ad_mod
  if (lhs->ad_l3_lgt_ctrl_sts_ad_mod != rhs->ad_l3_lgt_ctrl_sts_ad_mod) {
    return false;
  }
  // accr_pedl_sts_flt_sts
  if (lhs->accr_pedl_sts_flt_sts != rhs->accr_pedl_sts_flt_sts) {
    return false;
  }
  // amb_t_raw_amb_t_val
  if (lhs->amb_t_raw_amb_t_val != rhs->amb_t_raw_amb_t_val) {
    return false;
  }
  // body_hei
  if (lhs->body_hei != rhs->body_hei) {
    return false;
  }
  // le_frnt_tire_msg_batt_lo_st
  if (lhs->le_frnt_tire_msg_batt_lo_st != rhs->le_frnt_tire_msg_batt_lo_st) {
    return false;
  }
  // le_frnt_tire_msg_fast_lose_warn_flg
  if (lhs->le_frnt_tire_msg_fast_lose_warn_flg != rhs->le_frnt_tire_msg_fast_lose_warn_flg) {
    return false;
  }
  // le_frnt_tire_msg_msg_old_flg
  if (lhs->le_frnt_tire_msg_msg_old_flg != rhs->le_frnt_tire_msg_msg_old_flg) {
    return false;
  }
  // le_frnt_tire_msg_p
  if (lhs->le_frnt_tire_msg_p != rhs->le_frnt_tire_msg_p) {
    return false;
  }
  // le_frnt_tire_msg_sys_warn_flg
  if (lhs->le_frnt_tire_msg_sys_warn_flg != rhs->le_frnt_tire_msg_sys_warn_flg) {
    return false;
  }
  // le_frnt_tire_msg_t
  if (lhs->le_frnt_tire_msg_t != rhs->le_frnt_tire_msg_t) {
    return false;
  }
  // le_frnt_tire_msg_t_warn_flg
  if (lhs->le_frnt_tire_msg_t_warn_flg != rhs->le_frnt_tire_msg_t_warn_flg) {
    return false;
  }
  // le_frnt_tire_msg_tire_fillg_assi_p_sts
  if (lhs->le_frnt_tire_msg_tire_fillg_assi_p_sts != rhs->le_frnt_tire_msg_tire_fillg_assi_p_sts) {
    return false;
  }
  // le_re_tire_msg_batt_lo_st
  if (lhs->le_re_tire_msg_batt_lo_st != rhs->le_re_tire_msg_batt_lo_st) {
    return false;
  }
  // le_re_tire_msg_fast_lose_warn_flg
  if (lhs->le_re_tire_msg_fast_lose_warn_flg != rhs->le_re_tire_msg_fast_lose_warn_flg) {
    return false;
  }
  // le_re_tire_msg_msg_old_flg
  if (lhs->le_re_tire_msg_msg_old_flg != rhs->le_re_tire_msg_msg_old_flg) {
    return false;
  }
  // le_re_tire_msg_p
  if (lhs->le_re_tire_msg_p != rhs->le_re_tire_msg_p) {
    return false;
  }
  // le_re_tire_msg_sys_warn_flg
  if (lhs->le_re_tire_msg_sys_warn_flg != rhs->le_re_tire_msg_sys_warn_flg) {
    return false;
  }
  // le_re_tire_msg_t
  if (lhs->le_re_tire_msg_t != rhs->le_re_tire_msg_t) {
    return false;
  }
  // le_re_tire_msg_t_warn_flg
  if (lhs->le_re_tire_msg_t_warn_flg != rhs->le_re_tire_msg_t_warn_flg) {
    return false;
  }
  // le_re_tire_msg_tire_fillg_assi_p_sts
  if (lhs->le_re_tire_msg_tire_fillg_assi_p_sts != rhs->le_re_tire_msg_tire_fillg_assi_p_sts) {
    return false;
  }
  // ri_frnt_tire_msg_batt_lo_st
  if (lhs->ri_frnt_tire_msg_batt_lo_st != rhs->ri_frnt_tire_msg_batt_lo_st) {
    return false;
  }
  // ri_frnt_tire_msg_fast_lose_warn_flg
  if (lhs->ri_frnt_tire_msg_fast_lose_warn_flg != rhs->ri_frnt_tire_msg_fast_lose_warn_flg) {
    return false;
  }
  // ri_frnt_tire_msg_msg_old_flg
  if (lhs->ri_frnt_tire_msg_msg_old_flg != rhs->ri_frnt_tire_msg_msg_old_flg) {
    return false;
  }
  // ri_frnt_tire_msg_p
  if (lhs->ri_frnt_tire_msg_p != rhs->ri_frnt_tire_msg_p) {
    return false;
  }
  // ri_frnt_tire_msg_sys_warn_flg
  if (lhs->ri_frnt_tire_msg_sys_warn_flg != rhs->ri_frnt_tire_msg_sys_warn_flg) {
    return false;
  }
  // ri_frnt_tire_msg_t
  if (lhs->ri_frnt_tire_msg_t != rhs->ri_frnt_tire_msg_t) {
    return false;
  }
  // ri_frnt_tire_msg_t_warn_flg
  if (lhs->ri_frnt_tire_msg_t_warn_flg != rhs->ri_frnt_tire_msg_t_warn_flg) {
    return false;
  }
  // ri_frnt_tire_msg_tire_fillg_assi_p_sts
  if (lhs->ri_frnt_tire_msg_tire_fillg_assi_p_sts != rhs->ri_frnt_tire_msg_tire_fillg_assi_p_sts) {
    return false;
  }
  // ri_re_tire_msg_batt_lo_st
  if (lhs->ri_re_tire_msg_batt_lo_st != rhs->ri_re_tire_msg_batt_lo_st) {
    return false;
  }
  // ri_re_tire_msg_fast_lose_warn_flg
  if (lhs->ri_re_tire_msg_fast_lose_warn_flg != rhs->ri_re_tire_msg_fast_lose_warn_flg) {
    return false;
  }
  // ri_re_tire_msg_msg_old_flg
  if (lhs->ri_re_tire_msg_msg_old_flg != rhs->ri_re_tire_msg_msg_old_flg) {
    return false;
  }
  // ri_re_tire_msg_p
  if (lhs->ri_re_tire_msg_p != rhs->ri_re_tire_msg_p) {
    return false;
  }
  // ri_re_tire_msg_sys_warn_flg
  if (lhs->ri_re_tire_msg_sys_warn_flg != rhs->ri_re_tire_msg_sys_warn_flg) {
    return false;
  }
  // ri_re_tire_msg_t
  if (lhs->ri_re_tire_msg_t != rhs->ri_re_tire_msg_t) {
    return false;
  }
  // ri_re_tire_msg_t_warn_flg
  if (lhs->ri_re_tire_msg_t_warn_flg != rhs->ri_re_tire_msg_t_warn_flg) {
    return false;
  }
  // ri_re_tire_msg_tire_fillg_assi_p_sts
  if (lhs->ri_re_tire_msg_tire_fillg_assi_p_sts != rhs->ri_re_tire_msg_tire_fillg_assi_p_sts) {
    return false;
  }
  // occupy_mon_sts_drvr_sts
  if (lhs->occupy_mon_sts_drvr_sts != rhs->occupy_mon_sts_drvr_sts) {
    return false;
  }
  // sun_roof_posn_sts
  if (lhs->sun_roof_posn_sts != rhs->sun_roof_posn_sts) {
    return false;
  }
  // susp_posn_vert_le1_frnt
  if (lhs->susp_posn_vert_le1_frnt != rhs->susp_posn_vert_le1_frnt) {
    return false;
  }
  // susp_posn_vert_le1_frnt_qf
  if (lhs->susp_posn_vert_le1_frnt_qf != rhs->susp_posn_vert_le1_frnt_qf) {
    return false;
  }
  // susp_posn_vert_le1_re
  if (lhs->susp_posn_vert_le1_re != rhs->susp_posn_vert_le1_re) {
    return false;
  }
  // susp_posn_vert_le1_re_qf
  if (lhs->susp_posn_vert_le1_re_qf != rhs->susp_posn_vert_le1_re_qf) {
    return false;
  }
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  if (lhs->susp_posn_vert_ri1_susp_posn_vert_ri_frnt != rhs->susp_posn_vert_ri1_susp_posn_vert_ri_frnt) {
    return false;
  }
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  if (lhs->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf != rhs->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf) {
    return false;
  }
  // susp_posn_vert_ri1_susp_posn_vert_ri_re
  if (lhs->susp_posn_vert_ri1_susp_posn_vert_ri_re != rhs->susp_posn_vert_ri1_susp_posn_vert_ri_re) {
    return false;
  }
  // susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  if (lhs->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf != rhs->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf) {
    return false;
  }
  // twli_bri_raw_qf
  if (lhs->twli_bri_raw_qf != rhs->twli_bri_raw_qf) {
    return false;
  }
  // twli_bri_raw_twli_bri_raw
  if (lhs->twli_bri_raw_twli_bri_raw != rhs->twli_bri_raw_twli_bri_raw) {
    return false;
  }
  // win_posn_sts_at_drvr
  if (lhs->win_posn_sts_at_drvr != rhs->win_posn_sts_at_drvr) {
    return false;
  }
  // win_posn_sts_at_pass
  if (lhs->win_posn_sts_at_pass != rhs->win_posn_sts_at_pass) {
    return false;
  }
  // win_posn_sts_at_re_le
  if (lhs->win_posn_sts_at_re_le != rhs->win_posn_sts_at_re_le) {
    return false;
  }
  // win_posn_sts_at_re_ri
  if (lhs->win_posn_sts_at_re_ri != rhs->win_posn_sts_at_re_ri) {
    return false;
  }
  // brk_sys_sts_ad_l3_brk_fall_bck
  if (lhs->brk_sys_sts_ad_l3_brk_fall_bck != rhs->brk_sys_sts_ad_l3_brk_fall_bck) {
    return false;
  }
  // brk_sys_sts_brk_degradation
  if (lhs->brk_sys_sts_brk_degradation != rhs->brk_sys_sts_brk_degradation) {
    return false;
  }
  // brk_sys_sts_brk_sys_mod_cfmd
  if (lhs->brk_sys_sts_brk_sys_mod_cfmd != rhs->brk_sys_sts_brk_sys_mod_cfmd) {
    return false;
  }
  // tank_turn_mod_sts_tank_turn_mod_sts
  if (lhs->tank_turn_mod_sts_tank_turn_mod_sts != rhs->tank_turn_mod_sts_tank_turn_mod_sts) {
    return false;
  }
  // sfty_decel_group_safe_asy_sfty_ena_decel
  if (lhs->sfty_decel_group_safe_asy_sfty_ena_decel != rhs->sfty_decel_group_safe_asy_sfty_ena_decel) {
    return false;
  }
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  if (lhs->steer_tq_addl_for_ema_steer_tq_addl_for_ema != rhs->steer_tq_addl_for_ema_steer_tq_addl_for_ema) {
    return false;
  }
  // asy_emgy_lane_keep_aid_sts
  if (lhs->asy_emgy_lane_keep_aid_sts != rhs->asy_emgy_lane_keep_aid_sts) {
    return false;
  }
  // asy_lane_keep_aid_sts
  if (lhs->asy_lane_keep_aid_sts != rhs->asy_lane_keep_aid_sts) {
    return false;
  }
  // rcwm_brk_req_rcwm_brk_req
  if (lhs->rcwm_brk_req_rcwm_brk_req != rhs->rcwm_brk_req_rcwm_brk_req) {
    return false;
  }
  // asy_a_lgt_sts_asy_a_lgt_sts
  if (lhs->asy_a_lgt_sts_asy_a_lgt_sts != rhs->asy_a_lgt_sts_asy_a_lgt_sts) {
    return false;
  }
  // asy_a_lat_indcr
  if (lhs->asy_a_lat_indcr != rhs->asy_a_lat_indcr) {
    return false;
  }
  // asy_cnoa_crs_sts
  if (lhs->asy_cnoa_crs_sts != rhs->asy_cnoa_crs_sts) {
    return false;
  }
  // indcr_sts
  if (lhs->indcr_sts != rhs->indcr_sts) {
    return false;
  }
  return true;
}

bool
deva_function_msgs__msg__BusToSmData__copy(
  const deva_function_msgs__msg__BusToSmData * input,
  deva_function_msgs__msg__BusToSmData * output)
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
  // tr_lock_sts
  output->tr_lock_sts = input->tr_lock_sts;
  // door_drvr_lock_sts
  output->door_drvr_lock_sts = input->door_drvr_lock_sts;
  // door_pass_lock_sts
  output->door_pass_lock_sts = input->door_pass_lock_sts;
  // door_le_re_lock_sts
  output->door_le_re_lock_sts = input->door_le_re_lock_sts;
  // door_ri_re_lock_sts
  output->door_ri_re_lock_sts = input->door_ri_re_lock_sts;
  // brk_sys_sts_brk_sys_capability
  output->brk_sys_sts_brk_sys_capability = input->brk_sys_sts_brk_sys_capability;
  // rev
  for (size_t i = 0; i < 2; ++i) {
    output->rev[i] = input->rev[i];
  }
  // calltype_and_sts_ecall_status
  output->calltype_and_sts_ecall_status = input->calltype_and_sts_ecall_status;
  // blt_lock_st_at_drvr
  output->blt_lock_st_at_drvr = input->blt_lock_st_at_drvr;
  // blt_lock_st_err_sts_at_drvr
  output->blt_lock_st_err_sts_at_drvr = input->blt_lock_st_err_sts_at_drvr;
  // esc_st_esc_st
  output->esc_st_esc_st = input->esc_st_esc_st;
  // prk_lat_lgt_failr
  output->prk_lat_lgt_failr = input->prk_lat_lgt_failr;
  // road_incln_qly
  output->road_incln_qly = input->road_incln_qly;
  // veh_mtn_st
  output->veh_mtn_st = input->veh_mtn_st;
  // whl_spd_circuml_frnt_le_qf
  output->whl_spd_circuml_frnt_le_qf = input->whl_spd_circuml_frnt_le_qf;
  // whl_spd_circuml_frnt_ri_qf
  output->whl_spd_circuml_frnt_ri_qf = input->whl_spd_circuml_frnt_ri_qf;
  // whl_spd_circuml_re_le_qf
  output->whl_spd_circuml_re_le_qf = input->whl_spd_circuml_re_le_qf;
  // whl_spd_circuml_re_ri_qf
  output->whl_spd_circuml_re_ri_qf = input->whl_spd_circuml_re_ri_qf;
  // gear_mov
  output->gear_mov = input->gear_mov;
  // accr_pedl_psd_accr_pedl_psd
  output->accr_pedl_psd_accr_pedl_psd = input->accr_pedl_psd_accr_pedl_psd;
  // accr_pedl_psd_sts
  output->accr_pedl_psd_sts = input->accr_pedl_psd_sts;
  // typ_ext_req_to_upd_qf
  output->typ_ext_req_to_upd_qf = input->typ_ext_req_to_upd_qf;
  // trsm_park_lockd
  output->trsm_park_lockd = input->trsm_park_lockd;
  // door_drvr_sts
  output->door_drvr_sts = input->door_drvr_sts;
  // door_le_re_sts
  output->door_le_re_sts = input->door_le_re_sts;
  // door_pass_sts
  output->door_pass_sts = input->door_pass_sts;
  // door_ri_re_sts
  output->door_ri_re_sts = input->door_ri_re_sts;
  // hood_sts
  output->hood_sts = input->hood_sts;
  // mirr_fold_sts_at_drvr
  output->mirr_fold_sts_at_drvr = input->mirr_fold_sts_at_drvr;
  // mirr_fold_sts_at_pass
  output->mirr_fold_sts_at_pass = input->mirr_fold_sts_at_pass;
  // tr_sts
  output->tr_sts = input->tr_sts;
  // trlr_prsnt
  output->trlr_prsnt = input->trlr_prsnt;
  // veh_mod_mngt_glb_safe1_car_mod_sts1
  output->veh_mod_mngt_glb_safe1_car_mod_sts1 = input->veh_mod_mngt_glb_safe1_car_mod_sts1;
  // veh_mod_mngt_glb_safe1_usg_mod_sts
  output->veh_mod_mngt_glb_safe1_usg_mod_sts = input->veh_mod_mngt_glb_safe1_usg_mod_sts;
  // steer_sts_to_park_assi
  output->steer_sts_to_park_assi = input->steer_sts_to_park_assi;
  // indcr_typ_ext_req
  output->indcr_typ_ext_req = input->indcr_typ_ext_req;
  // rainfall_amnt
  output->rainfall_amnt = input->rainfall_amnt;
  // egy_lvl_elec_mai
  output->egy_lvl_elec_mai = input->egy_lvl_elec_mai;
  // le_frnt_tire_msg_p_warn_flg
  output->le_frnt_tire_msg_p_warn_flg = input->le_frnt_tire_msg_p_warn_flg;
  // le_re_tire_msg_p_warn_flg
  output->le_re_tire_msg_p_warn_flg = input->le_re_tire_msg_p_warn_flg;
  // ri_frnt_tire_msg_p_warn_flg
  output->ri_frnt_tire_msg_p_warn_flg = input->ri_frnt_tire_msg_p_warn_flg;
  // ri_re_tire_msg_p_warn_flg
  output->ri_re_tire_msg_p_warn_flg = input->ri_re_tire_msg_p_warn_flg;
  // sm_lat_shake_hand_state
  output->sm_lat_shake_hand_state = input->sm_lat_shake_hand_state;
  // sm_lon_shake_hand_state
  output->sm_lon_shake_hand_state = input->sm_lon_shake_hand_state;
  // rcv_ctrl_req
  output->rcv_ctrl_req = input->rcv_ctrl_req;
  // rcv_steertrim_req
  output->rcv_steertrim_req = input->rcv_steertrim_req;
  // mob_dev_rcv_req1_mob_dev_sts
  output->mob_dev_rcv_req1_mob_dev_sts = input->mob_dev_rcv_req1_mob_dev_sts;
  // dc_dc_actvd
  output->dc_dc_actvd = input->dc_dc_actvd;
  // steer_whl_snsr_ag
  output->steer_whl_snsr_ag = input->steer_whl_snsr_ag;
  // ble_con_sts
  output->ble_con_sts = input->ble_con_sts;
  // twbr_lockd_posn
  output->twbr_lockd_posn = input->twbr_lockd_posn;
  // full_elec_twbr_posn
  output->full_elec_twbr_posn = input->full_elec_twbr_posn;
  // vtsd_mode_sts
  output->vtsd_mode_sts = input->vtsd_mode_sts;
  // key_read_sts_to_asm
  for (size_t i = 0; i < 12; ++i) {
    output->key_read_sts_to_asm[i] = input->key_read_sts_to_asm[i];
  }
  // mob_dev_rpa_req_rspa_ctrl
  output->mob_dev_rpa_req_rspa_ctrl = input->mob_dev_rpa_req_rspa_ctrl;
  // mob_dev_rpa_req_rpa_req
  output->mob_dev_rpa_req_rpa_req = input->mob_dev_rpa_req_rpa_req;
  // mob_dev_rpa_req_rpa_out_mode_sub_t
  output->mob_dev_rpa_req_rpa_out_mode_sub_t = input->mob_dev_rpa_req_rpa_out_mode_sub_t;
  // mob_dev_rpa_req_mob_dev_sts
  output->mob_dev_rpa_req_mob_dev_sts = input->mob_dev_rpa_req_mob_dev_sts;
  // crab_mov_mod_sts
  output->crab_mov_mod_sts = input->crab_mov_mod_sts;
  // tank_turn_mod_sts
  output->tank_turn_mod_sts = input->tank_turn_mod_sts;
  // pass_seat_sts2
  output->pass_seat_sts2 = input->pass_seat_sts2;
  // hmi_max_ev_mod
  output->hmi_max_ev_mod = input->hmi_max_ev_mod;
  // adcu_max_ev_mod
  output->adcu_max_ev_mod = input->adcu_max_ev_mod;
  // lamp_req_by_veh_hld
  output->lamp_req_by_veh_hld = input->lamp_req_by_veh_hld;
  // ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  output->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = input->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn;
  // msg_req_by_hill_dwn_ctrl
  output->msg_req_by_hill_dwn_ctrl = input->msg_req_by_hill_dwn_ctrl;
  // esc_warn_indcn_req_esc_warn_indcn_req
  output->esc_warn_indcn_req_esc_warn_indcn_req = input->esc_warn_indcn_req_esc_warn_indcn_req;
  // abs_ctrl_actv_ctrl_sts1
  output->abs_ctrl_actv_ctrl_sts1 = input->abs_ctrl_actv_ctrl_sts1;
  // eng_st1_wd_sts_eng_st1_wd_sts
  output->eng_st1_wd_sts_eng_st1_wd_sts = input->eng_st1_wd_sts_eng_st1_wd_sts;
  // crs_ctrl_ovrdn
  output->crs_ctrl_ovrdn = input->crs_ctrl_ovrdn;
  // veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  output->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = input->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai;
  // drvr_steer_whl_hld_qly
  output->drvr_steer_whl_hld_qly = input->drvr_steer_whl_hld_qly;
  // door_drvr_sts_with_fac_qly_door_sts
  output->door_drvr_sts_with_fac_qly_door_sts = input->door_drvr_sts_with_fac_qly_door_sts;
  // door_drvr_sts_with_fac_qly_fac_qly
  output->door_drvr_sts_with_fac_qly_fac_qly = input->door_drvr_sts_with_fac_qly_fac_qly;
  // lat_ctrl_mod_cfmd
  output->lat_ctrl_mod_cfmd = input->lat_ctrl_mod_cfmd;
  // esc_ctrl_indcn
  output->esc_ctrl_indcn = input->esc_ctrl_indcn;
  // pt_drvr_setg_drv_mod_req
  output->pt_drvr_setg_drv_mod_req = input->pt_drvr_setg_drv_mod_req;
  // front_four_d_radar_sts_for_dim
  output->front_four_d_radar_sts_for_dim = input->front_four_d_radar_sts_for_dim;
  // drvr_prsnt_sts
  output->drvr_prsnt_sts = input->drvr_prsnt_sts;
  // wipr_actv
  output->wipr_actv = input->wipr_actv;
  // stand_still_mgr_sts_for_hld
  output->stand_still_mgr_sts_for_hld = input->stand_still_mgr_sts_for_hld;
  // pt_drvr_setg
  output->pt_drvr_setg = input->pt_drvr_setg;
  // tptf_status_error
  output->tptf_status_error = input->tptf_status_error;
  // tptf_status
  output->tptf_status = input->tptf_status;
  // tptf_time_gap
  output->tptf_time_gap = input->tptf_time_gap;
  // hmi_sod_lan_chg_switch
  output->hmi_sod_lan_chg_switch = input->hmi_sod_lan_chg_switch;
  // hmi_drvr_sod_req_chg
  output->hmi_drvr_sod_req_chg = input->hmi_drvr_sod_req_chg;
  // turn_indcr_monostable
  output->turn_indcr_monostable = input->turn_indcr_monostable;
  // drvr_lane_chg_aut_actv_sts
  output->drvr_lane_chg_aut_actv_sts = input->drvr_lane_chg_aut_actv_sts;
  // auto_lane_chg_with_navi_sw_onoff
  output->auto_lane_chg_with_navi_sw_onoff = input->auto_lane_chg_with_navi_sw_onoff;
  // nop_cofm_of_lan_chag_onoff
  output->nop_cofm_of_lan_chag_onoff = input->nop_cofm_of_lan_chag_onoff;
  // wipg_spd_info
  output->wipg_spd_info = input->wipg_spd_info;
  // asy_safe_stop_sts
  output->asy_safe_stop_sts = input->asy_safe_stop_sts;
  // hmi_sup_end_mod
  output->hmi_sup_end_mod = input->hmi_sup_end_mod;
  // crash_sts_safe_sts
  output->crash_sts_safe_sts = input->crash_sts_safe_sts;
  // gear_park_not_allow
  output->gear_park_not_allow = input->gear_park_not_allow;
  // drvr_seat_sts
  output->drvr_seat_sts = input->drvr_seat_sts;
  // drvr_seat_snsr_sts
  output->drvr_seat_snsr_sts = input->drvr_seat_snsr_sts;
  // ad_l3_lat_ctrl_sts_ad_mod
  output->ad_l3_lat_ctrl_sts_ad_mod = input->ad_l3_lat_ctrl_sts_ad_mod;
  // ad_l3_lgt_ctrl_sts_ad_mod
  output->ad_l3_lgt_ctrl_sts_ad_mod = input->ad_l3_lgt_ctrl_sts_ad_mod;
  // accr_pedl_sts_flt_sts
  output->accr_pedl_sts_flt_sts = input->accr_pedl_sts_flt_sts;
  // amb_t_raw_amb_t_val
  output->amb_t_raw_amb_t_val = input->amb_t_raw_amb_t_val;
  // body_hei
  output->body_hei = input->body_hei;
  // le_frnt_tire_msg_batt_lo_st
  output->le_frnt_tire_msg_batt_lo_st = input->le_frnt_tire_msg_batt_lo_st;
  // le_frnt_tire_msg_fast_lose_warn_flg
  output->le_frnt_tire_msg_fast_lose_warn_flg = input->le_frnt_tire_msg_fast_lose_warn_flg;
  // le_frnt_tire_msg_msg_old_flg
  output->le_frnt_tire_msg_msg_old_flg = input->le_frnt_tire_msg_msg_old_flg;
  // le_frnt_tire_msg_p
  output->le_frnt_tire_msg_p = input->le_frnt_tire_msg_p;
  // le_frnt_tire_msg_sys_warn_flg
  output->le_frnt_tire_msg_sys_warn_flg = input->le_frnt_tire_msg_sys_warn_flg;
  // le_frnt_tire_msg_t
  output->le_frnt_tire_msg_t = input->le_frnt_tire_msg_t;
  // le_frnt_tire_msg_t_warn_flg
  output->le_frnt_tire_msg_t_warn_flg = input->le_frnt_tire_msg_t_warn_flg;
  // le_frnt_tire_msg_tire_fillg_assi_p_sts
  output->le_frnt_tire_msg_tire_fillg_assi_p_sts = input->le_frnt_tire_msg_tire_fillg_assi_p_sts;
  // le_re_tire_msg_batt_lo_st
  output->le_re_tire_msg_batt_lo_st = input->le_re_tire_msg_batt_lo_st;
  // le_re_tire_msg_fast_lose_warn_flg
  output->le_re_tire_msg_fast_lose_warn_flg = input->le_re_tire_msg_fast_lose_warn_flg;
  // le_re_tire_msg_msg_old_flg
  output->le_re_tire_msg_msg_old_flg = input->le_re_tire_msg_msg_old_flg;
  // le_re_tire_msg_p
  output->le_re_tire_msg_p = input->le_re_tire_msg_p;
  // le_re_tire_msg_sys_warn_flg
  output->le_re_tire_msg_sys_warn_flg = input->le_re_tire_msg_sys_warn_flg;
  // le_re_tire_msg_t
  output->le_re_tire_msg_t = input->le_re_tire_msg_t;
  // le_re_tire_msg_t_warn_flg
  output->le_re_tire_msg_t_warn_flg = input->le_re_tire_msg_t_warn_flg;
  // le_re_tire_msg_tire_fillg_assi_p_sts
  output->le_re_tire_msg_tire_fillg_assi_p_sts = input->le_re_tire_msg_tire_fillg_assi_p_sts;
  // ri_frnt_tire_msg_batt_lo_st
  output->ri_frnt_tire_msg_batt_lo_st = input->ri_frnt_tire_msg_batt_lo_st;
  // ri_frnt_tire_msg_fast_lose_warn_flg
  output->ri_frnt_tire_msg_fast_lose_warn_flg = input->ri_frnt_tire_msg_fast_lose_warn_flg;
  // ri_frnt_tire_msg_msg_old_flg
  output->ri_frnt_tire_msg_msg_old_flg = input->ri_frnt_tire_msg_msg_old_flg;
  // ri_frnt_tire_msg_p
  output->ri_frnt_tire_msg_p = input->ri_frnt_tire_msg_p;
  // ri_frnt_tire_msg_sys_warn_flg
  output->ri_frnt_tire_msg_sys_warn_flg = input->ri_frnt_tire_msg_sys_warn_flg;
  // ri_frnt_tire_msg_t
  output->ri_frnt_tire_msg_t = input->ri_frnt_tire_msg_t;
  // ri_frnt_tire_msg_t_warn_flg
  output->ri_frnt_tire_msg_t_warn_flg = input->ri_frnt_tire_msg_t_warn_flg;
  // ri_frnt_tire_msg_tire_fillg_assi_p_sts
  output->ri_frnt_tire_msg_tire_fillg_assi_p_sts = input->ri_frnt_tire_msg_tire_fillg_assi_p_sts;
  // ri_re_tire_msg_batt_lo_st
  output->ri_re_tire_msg_batt_lo_st = input->ri_re_tire_msg_batt_lo_st;
  // ri_re_tire_msg_fast_lose_warn_flg
  output->ri_re_tire_msg_fast_lose_warn_flg = input->ri_re_tire_msg_fast_lose_warn_flg;
  // ri_re_tire_msg_msg_old_flg
  output->ri_re_tire_msg_msg_old_flg = input->ri_re_tire_msg_msg_old_flg;
  // ri_re_tire_msg_p
  output->ri_re_tire_msg_p = input->ri_re_tire_msg_p;
  // ri_re_tire_msg_sys_warn_flg
  output->ri_re_tire_msg_sys_warn_flg = input->ri_re_tire_msg_sys_warn_flg;
  // ri_re_tire_msg_t
  output->ri_re_tire_msg_t = input->ri_re_tire_msg_t;
  // ri_re_tire_msg_t_warn_flg
  output->ri_re_tire_msg_t_warn_flg = input->ri_re_tire_msg_t_warn_flg;
  // ri_re_tire_msg_tire_fillg_assi_p_sts
  output->ri_re_tire_msg_tire_fillg_assi_p_sts = input->ri_re_tire_msg_tire_fillg_assi_p_sts;
  // occupy_mon_sts_drvr_sts
  output->occupy_mon_sts_drvr_sts = input->occupy_mon_sts_drvr_sts;
  // sun_roof_posn_sts
  output->sun_roof_posn_sts = input->sun_roof_posn_sts;
  // susp_posn_vert_le1_frnt
  output->susp_posn_vert_le1_frnt = input->susp_posn_vert_le1_frnt;
  // susp_posn_vert_le1_frnt_qf
  output->susp_posn_vert_le1_frnt_qf = input->susp_posn_vert_le1_frnt_qf;
  // susp_posn_vert_le1_re
  output->susp_posn_vert_le1_re = input->susp_posn_vert_le1_re;
  // susp_posn_vert_le1_re_qf
  output->susp_posn_vert_le1_re_qf = input->susp_posn_vert_le1_re_qf;
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  output->susp_posn_vert_ri1_susp_posn_vert_ri_frnt = input->susp_posn_vert_ri1_susp_posn_vert_ri_frnt;
  // susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  output->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = input->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf;
  // susp_posn_vert_ri1_susp_posn_vert_ri_re
  output->susp_posn_vert_ri1_susp_posn_vert_ri_re = input->susp_posn_vert_ri1_susp_posn_vert_ri_re;
  // susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  output->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = input->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf;
  // twli_bri_raw_qf
  output->twli_bri_raw_qf = input->twli_bri_raw_qf;
  // twli_bri_raw_twli_bri_raw
  output->twli_bri_raw_twli_bri_raw = input->twli_bri_raw_twli_bri_raw;
  // win_posn_sts_at_drvr
  output->win_posn_sts_at_drvr = input->win_posn_sts_at_drvr;
  // win_posn_sts_at_pass
  output->win_posn_sts_at_pass = input->win_posn_sts_at_pass;
  // win_posn_sts_at_re_le
  output->win_posn_sts_at_re_le = input->win_posn_sts_at_re_le;
  // win_posn_sts_at_re_ri
  output->win_posn_sts_at_re_ri = input->win_posn_sts_at_re_ri;
  // brk_sys_sts_ad_l3_brk_fall_bck
  output->brk_sys_sts_ad_l3_brk_fall_bck = input->brk_sys_sts_ad_l3_brk_fall_bck;
  // brk_sys_sts_brk_degradation
  output->brk_sys_sts_brk_degradation = input->brk_sys_sts_brk_degradation;
  // brk_sys_sts_brk_sys_mod_cfmd
  output->brk_sys_sts_brk_sys_mod_cfmd = input->brk_sys_sts_brk_sys_mod_cfmd;
  // tank_turn_mod_sts_tank_turn_mod_sts
  output->tank_turn_mod_sts_tank_turn_mod_sts = input->tank_turn_mod_sts_tank_turn_mod_sts;
  // sfty_decel_group_safe_asy_sfty_ena_decel
  output->sfty_decel_group_safe_asy_sfty_ena_decel = input->sfty_decel_group_safe_asy_sfty_ena_decel;
  // steer_tq_addl_for_ema_steer_tq_addl_for_ema
  output->steer_tq_addl_for_ema_steer_tq_addl_for_ema = input->steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  // asy_emgy_lane_keep_aid_sts
  output->asy_emgy_lane_keep_aid_sts = input->asy_emgy_lane_keep_aid_sts;
  // asy_lane_keep_aid_sts
  output->asy_lane_keep_aid_sts = input->asy_lane_keep_aid_sts;
  // rcwm_brk_req_rcwm_brk_req
  output->rcwm_brk_req_rcwm_brk_req = input->rcwm_brk_req_rcwm_brk_req;
  // asy_a_lgt_sts_asy_a_lgt_sts
  output->asy_a_lgt_sts_asy_a_lgt_sts = input->asy_a_lgt_sts_asy_a_lgt_sts;
  // asy_a_lat_indcr
  output->asy_a_lat_indcr = input->asy_a_lat_indcr;
  // asy_cnoa_crs_sts
  output->asy_cnoa_crs_sts = input->asy_cnoa_crs_sts;
  // indcr_sts
  output->indcr_sts = input->indcr_sts;
  return true;
}

deva_function_msgs__msg__BusToSmData *
deva_function_msgs__msg__BusToSmData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__BusToSmData * msg = (deva_function_msgs__msg__BusToSmData *)allocator.allocate(sizeof(deva_function_msgs__msg__BusToSmData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deva_function_msgs__msg__BusToSmData));
  bool success = deva_function_msgs__msg__BusToSmData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
deva_function_msgs__msg__BusToSmData__destroy(deva_function_msgs__msg__BusToSmData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    deva_function_msgs__msg__BusToSmData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
deva_function_msgs__msg__BusToSmData__Sequence__init(deva_function_msgs__msg__BusToSmData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__BusToSmData * data = NULL;

  if (size) {
    data = (deva_function_msgs__msg__BusToSmData *)allocator.zero_allocate(size, sizeof(deva_function_msgs__msg__BusToSmData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deva_function_msgs__msg__BusToSmData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deva_function_msgs__msg__BusToSmData__fini(&data[i - 1]);
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
deva_function_msgs__msg__BusToSmData__Sequence__fini(deva_function_msgs__msg__BusToSmData__Sequence * array)
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
      deva_function_msgs__msg__BusToSmData__fini(&array->data[i]);
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

deva_function_msgs__msg__BusToSmData__Sequence *
deva_function_msgs__msg__BusToSmData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  deva_function_msgs__msg__BusToSmData__Sequence * array = (deva_function_msgs__msg__BusToSmData__Sequence *)allocator.allocate(sizeof(deva_function_msgs__msg__BusToSmData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = deva_function_msgs__msg__BusToSmData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
deva_function_msgs__msg__BusToSmData__Sequence__destroy(deva_function_msgs__msg__BusToSmData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    deva_function_msgs__msg__BusToSmData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
deva_function_msgs__msg__BusToSmData__Sequence__are_equal(const deva_function_msgs__msg__BusToSmData__Sequence * lhs, const deva_function_msgs__msg__BusToSmData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!deva_function_msgs__msg__BusToSmData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
deva_function_msgs__msg__BusToSmData__Sequence__copy(
  const deva_function_msgs__msg__BusToSmData__Sequence * input,
  deva_function_msgs__msg__BusToSmData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(deva_function_msgs__msg__BusToSmData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    deva_function_msgs__msg__BusToSmData * data =
      (deva_function_msgs__msg__BusToSmData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!deva_function_msgs__msg__BusToSmData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          deva_function_msgs__msg__BusToSmData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!deva_function_msgs__msg__BusToSmData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
