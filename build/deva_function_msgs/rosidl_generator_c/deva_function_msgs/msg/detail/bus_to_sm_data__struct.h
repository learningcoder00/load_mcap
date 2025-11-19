// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__STRUCT_H_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/BusToSmData in the package deva_function_msgs.
typedef struct deva_function_msgs__msg__BusToSmData
{
  deva_common_msgs__msg__Header header;
  uint8_t tr_lock_sts;
  uint8_t door_drvr_lock_sts;
  uint8_t door_pass_lock_sts;
  uint8_t door_le_re_lock_sts;
  uint8_t door_ri_re_lock_sts;
  uint8_t brk_sys_sts_brk_sys_capability;
  uint8_t rev[2];
  uint8_t calltype_and_sts_ecall_status;
  uint8_t blt_lock_st_at_drvr;
  uint8_t blt_lock_st_err_sts_at_drvr;
  uint8_t esc_st_esc_st;
  uint8_t prk_lat_lgt_failr;
  uint8_t road_incln_qly;
  uint8_t veh_mtn_st;
  uint8_t whl_spd_circuml_frnt_le_qf;
  uint8_t whl_spd_circuml_frnt_ri_qf;
  uint8_t whl_spd_circuml_re_le_qf;
  uint8_t whl_spd_circuml_re_ri_qf;
  uint8_t gear_mov;
  uint8_t accr_pedl_psd_accr_pedl_psd;
  uint8_t accr_pedl_psd_sts;
  uint8_t typ_ext_req_to_upd_qf;
  uint8_t trsm_park_lockd;
  uint8_t door_drvr_sts;
  uint8_t door_le_re_sts;
  uint8_t door_pass_sts;
  uint8_t door_ri_re_sts;
  uint8_t hood_sts;
  uint8_t mirr_fold_sts_at_drvr;
  uint8_t mirr_fold_sts_at_pass;
  uint8_t tr_sts;
  uint8_t trlr_prsnt;
  uint8_t veh_mod_mngt_glb_safe1_car_mod_sts1;
  uint8_t veh_mod_mngt_glb_safe1_usg_mod_sts;
  uint8_t steer_sts_to_park_assi;
  uint8_t indcr_typ_ext_req;
  uint8_t rainfall_amnt;
  uint8_t egy_lvl_elec_mai;
  uint8_t le_frnt_tire_msg_p_warn_flg;
  uint8_t le_re_tire_msg_p_warn_flg;
  uint8_t ri_frnt_tire_msg_p_warn_flg;
  uint8_t ri_re_tire_msg_p_warn_flg;
  uint8_t sm_lat_shake_hand_state;
  uint8_t sm_lon_shake_hand_state;
  uint8_t rcv_ctrl_req;
  uint8_t rcv_steertrim_req;
  uint8_t mob_dev_rcv_req1_mob_dev_sts;
  uint8_t dc_dc_actvd;
  float steer_whl_snsr_ag;
  uint8_t ble_con_sts;
  uint8_t twbr_lockd_posn;
  uint8_t full_elec_twbr_posn;
  uint8_t vtsd_mode_sts;
  uint8_t key_read_sts_to_asm[12];
  uint8_t mob_dev_rpa_req_rspa_ctrl;
  uint8_t mob_dev_rpa_req_rpa_req;
  uint8_t mob_dev_rpa_req_rpa_out_mode_sub_t;
  uint8_t mob_dev_rpa_req_mob_dev_sts;
  uint8_t crab_mov_mod_sts;
  uint8_t tank_turn_mod_sts;
  uint8_t pass_seat_sts2;
  uint8_t hmi_max_ev_mod;
  uint8_t adcu_max_ev_mod;
  uint8_t lamp_req_by_veh_hld;
  uint8_t ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn;
  uint8_t msg_req_by_hill_dwn_ctrl;
  uint8_t esc_warn_indcn_req_esc_warn_indcn_req;
  uint8_t abs_ctrl_actv_ctrl_sts1;
  uint8_t eng_st1_wd_sts_eng_st1_wd_sts;
  uint8_t crs_ctrl_ovrdn;
  uint8_t veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai;
  uint8_t drvr_steer_whl_hld_qly;
  uint8_t door_drvr_sts_with_fac_qly_door_sts;
  uint8_t door_drvr_sts_with_fac_qly_fac_qly;
  uint8_t lat_ctrl_mod_cfmd;
  uint8_t esc_ctrl_indcn;
  uint8_t pt_drvr_setg_drv_mod_req;
  uint8_t front_four_d_radar_sts_for_dim;
  uint8_t drvr_prsnt_sts;
  uint8_t wipr_actv;
  uint8_t stand_still_mgr_sts_for_hld;
  uint8_t pt_drvr_setg;
  uint8_t tptf_status_error;
  uint8_t tptf_status;
  uint8_t tptf_time_gap;
  uint8_t hmi_sod_lan_chg_switch;
  uint8_t hmi_drvr_sod_req_chg;
  uint8_t turn_indcr_monostable;
  uint8_t drvr_lane_chg_aut_actv_sts;
  uint8_t auto_lane_chg_with_navi_sw_onoff;
  uint8_t nop_cofm_of_lan_chag_onoff;
  uint8_t wipg_spd_info;
  uint8_t asy_safe_stop_sts;
  uint8_t hmi_sup_end_mod;
  uint8_t crash_sts_safe_sts;
  uint8_t gear_park_not_allow;
  uint8_t drvr_seat_sts;
  uint8_t drvr_seat_snsr_sts;
  uint8_t ad_l3_lat_ctrl_sts_ad_mod;
  uint8_t ad_l3_lgt_ctrl_sts_ad_mod;
  uint8_t accr_pedl_sts_flt_sts;
  float amb_t_raw_amb_t_val;
  float body_hei;
  uint8_t le_frnt_tire_msg_batt_lo_st;
  uint8_t le_frnt_tire_msg_fast_lose_warn_flg;
  uint8_t le_frnt_tire_msg_msg_old_flg;
  float le_frnt_tire_msg_p;
  uint8_t le_frnt_tire_msg_sys_warn_flg;
  float le_frnt_tire_msg_t;
  uint8_t le_frnt_tire_msg_t_warn_flg;
  uint8_t le_frnt_tire_msg_tire_fillg_assi_p_sts;
  uint8_t le_re_tire_msg_batt_lo_st;
  uint8_t le_re_tire_msg_fast_lose_warn_flg;
  uint8_t le_re_tire_msg_msg_old_flg;
  float le_re_tire_msg_p;
  uint8_t le_re_tire_msg_sys_warn_flg;
  float le_re_tire_msg_t;
  uint8_t le_re_tire_msg_t_warn_flg;
  uint8_t le_re_tire_msg_tire_fillg_assi_p_sts;
  uint8_t ri_frnt_tire_msg_batt_lo_st;
  uint8_t ri_frnt_tire_msg_fast_lose_warn_flg;
  uint8_t ri_frnt_tire_msg_msg_old_flg;
  float ri_frnt_tire_msg_p;
  uint8_t ri_frnt_tire_msg_sys_warn_flg;
  float ri_frnt_tire_msg_t;
  uint8_t ri_frnt_tire_msg_t_warn_flg;
  uint8_t ri_frnt_tire_msg_tire_fillg_assi_p_sts;
  uint8_t ri_re_tire_msg_batt_lo_st;
  uint8_t ri_re_tire_msg_fast_lose_warn_flg;
  uint8_t ri_re_tire_msg_msg_old_flg;
  float ri_re_tire_msg_p;
  uint8_t ri_re_tire_msg_sys_warn_flg;
  float ri_re_tire_msg_t;
  uint8_t ri_re_tire_msg_t_warn_flg;
  uint8_t ri_re_tire_msg_tire_fillg_assi_p_sts;
  uint8_t occupy_mon_sts_drvr_sts;
  uint8_t sun_roof_posn_sts;
  float susp_posn_vert_le1_frnt;
  uint8_t susp_posn_vert_le1_frnt_qf;
  float susp_posn_vert_le1_re;
  uint8_t susp_posn_vert_le1_re_qf;
  float susp_posn_vert_ri1_susp_posn_vert_ri_frnt;
  uint8_t susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf;
  float susp_posn_vert_ri1_susp_posn_vert_ri_re;
  uint8_t susp_posn_vert_ri1_susp_posn_vert_ri_re_qf;
  uint8_t twli_bri_raw_qf;
  uint8_t twli_bri_raw_twli_bri_raw;
  uint8_t win_posn_sts_at_drvr;
  uint8_t win_posn_sts_at_pass;
  uint8_t win_posn_sts_at_re_le;
  uint8_t win_posn_sts_at_re_ri;
  uint8_t brk_sys_sts_ad_l3_brk_fall_bck;
  uint8_t brk_sys_sts_brk_degradation;
  uint8_t brk_sys_sts_brk_sys_mod_cfmd;
  uint8_t tank_turn_mod_sts_tank_turn_mod_sts;
  uint8_t sfty_decel_group_safe_asy_sfty_ena_decel;
  float steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  uint8_t asy_emgy_lane_keep_aid_sts;
  uint8_t asy_lane_keep_aid_sts;
  uint8_t rcwm_brk_req_rcwm_brk_req;
  uint8_t asy_a_lgt_sts_asy_a_lgt_sts;
  uint8_t asy_a_lat_indcr;
  uint8_t asy_cnoa_crs_sts;
  uint8_t indcr_sts;
} deva_function_msgs__msg__BusToSmData;

// Struct for a sequence of deva_function_msgs__msg__BusToSmData.
typedef struct deva_function_msgs__msg__BusToSmData__Sequence
{
  deva_function_msgs__msg__BusToSmData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} deva_function_msgs__msg__BusToSmData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__STRUCT_H_
