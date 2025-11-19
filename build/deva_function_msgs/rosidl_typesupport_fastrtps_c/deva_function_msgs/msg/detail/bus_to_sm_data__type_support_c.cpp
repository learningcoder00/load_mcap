// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/bus_to_sm_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "deva_function_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "deva_function_msgs/msg/detail/bus_to_sm_data__struct.h"
#include "deva_function_msgs/msg/detail/bus_to_sm_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "deva_common_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t get_serialized_size_deva_common_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
size_t max_serialized_size_deva_common_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_deva_function_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header)();


using _BusToSmData__ros_msg_type = deva_function_msgs__msg__BusToSmData;

static bool _BusToSmData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _BusToSmData__ros_msg_type * ros_message = static_cast<const _BusToSmData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: tr_lock_sts
  {
    cdr << ros_message->tr_lock_sts;
  }

  // Field name: door_drvr_lock_sts
  {
    cdr << ros_message->door_drvr_lock_sts;
  }

  // Field name: door_pass_lock_sts
  {
    cdr << ros_message->door_pass_lock_sts;
  }

  // Field name: door_le_re_lock_sts
  {
    cdr << ros_message->door_le_re_lock_sts;
  }

  // Field name: door_ri_re_lock_sts
  {
    cdr << ros_message->door_ri_re_lock_sts;
  }

  // Field name: brk_sys_sts_brk_sys_capability
  {
    cdr << ros_message->brk_sys_sts_brk_sys_capability;
  }

  // Field name: rev
  {
    size_t size = 2;
    auto array_ptr = ros_message->rev;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: calltype_and_sts_ecall_status
  {
    cdr << ros_message->calltype_and_sts_ecall_status;
  }

  // Field name: blt_lock_st_at_drvr
  {
    cdr << ros_message->blt_lock_st_at_drvr;
  }

  // Field name: blt_lock_st_err_sts_at_drvr
  {
    cdr << ros_message->blt_lock_st_err_sts_at_drvr;
  }

  // Field name: esc_st_esc_st
  {
    cdr << ros_message->esc_st_esc_st;
  }

  // Field name: prk_lat_lgt_failr
  {
    cdr << ros_message->prk_lat_lgt_failr;
  }

  // Field name: road_incln_qly
  {
    cdr << ros_message->road_incln_qly;
  }

  // Field name: veh_mtn_st
  {
    cdr << ros_message->veh_mtn_st;
  }

  // Field name: whl_spd_circuml_frnt_le_qf
  {
    cdr << ros_message->whl_spd_circuml_frnt_le_qf;
  }

  // Field name: whl_spd_circuml_frnt_ri_qf
  {
    cdr << ros_message->whl_spd_circuml_frnt_ri_qf;
  }

  // Field name: whl_spd_circuml_re_le_qf
  {
    cdr << ros_message->whl_spd_circuml_re_le_qf;
  }

  // Field name: whl_spd_circuml_re_ri_qf
  {
    cdr << ros_message->whl_spd_circuml_re_ri_qf;
  }

  // Field name: gear_mov
  {
    cdr << ros_message->gear_mov;
  }

  // Field name: accr_pedl_psd_accr_pedl_psd
  {
    cdr << ros_message->accr_pedl_psd_accr_pedl_psd;
  }

  // Field name: accr_pedl_psd_sts
  {
    cdr << ros_message->accr_pedl_psd_sts;
  }

  // Field name: typ_ext_req_to_upd_qf
  {
    cdr << ros_message->typ_ext_req_to_upd_qf;
  }

  // Field name: trsm_park_lockd
  {
    cdr << ros_message->trsm_park_lockd;
  }

  // Field name: door_drvr_sts
  {
    cdr << ros_message->door_drvr_sts;
  }

  // Field name: door_le_re_sts
  {
    cdr << ros_message->door_le_re_sts;
  }

  // Field name: door_pass_sts
  {
    cdr << ros_message->door_pass_sts;
  }

  // Field name: door_ri_re_sts
  {
    cdr << ros_message->door_ri_re_sts;
  }

  // Field name: hood_sts
  {
    cdr << ros_message->hood_sts;
  }

  // Field name: mirr_fold_sts_at_drvr
  {
    cdr << ros_message->mirr_fold_sts_at_drvr;
  }

  // Field name: mirr_fold_sts_at_pass
  {
    cdr << ros_message->mirr_fold_sts_at_pass;
  }

  // Field name: tr_sts
  {
    cdr << ros_message->tr_sts;
  }

  // Field name: trlr_prsnt
  {
    cdr << ros_message->trlr_prsnt;
  }

  // Field name: veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    cdr << ros_message->veh_mod_mngt_glb_safe1_car_mod_sts1;
  }

  // Field name: veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    cdr << ros_message->veh_mod_mngt_glb_safe1_usg_mod_sts;
  }

  // Field name: steer_sts_to_park_assi
  {
    cdr << ros_message->steer_sts_to_park_assi;
  }

  // Field name: indcr_typ_ext_req
  {
    cdr << ros_message->indcr_typ_ext_req;
  }

  // Field name: rainfall_amnt
  {
    cdr << ros_message->rainfall_amnt;
  }

  // Field name: egy_lvl_elec_mai
  {
    cdr << ros_message->egy_lvl_elec_mai;
  }

  // Field name: le_frnt_tire_msg_p_warn_flg
  {
    cdr << ros_message->le_frnt_tire_msg_p_warn_flg;
  }

  // Field name: le_re_tire_msg_p_warn_flg
  {
    cdr << ros_message->le_re_tire_msg_p_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_p_warn_flg
  {
    cdr << ros_message->ri_frnt_tire_msg_p_warn_flg;
  }

  // Field name: ri_re_tire_msg_p_warn_flg
  {
    cdr << ros_message->ri_re_tire_msg_p_warn_flg;
  }

  // Field name: sm_lat_shake_hand_state
  {
    cdr << ros_message->sm_lat_shake_hand_state;
  }

  // Field name: sm_lon_shake_hand_state
  {
    cdr << ros_message->sm_lon_shake_hand_state;
  }

  // Field name: rcv_ctrl_req
  {
    cdr << ros_message->rcv_ctrl_req;
  }

  // Field name: rcv_steertrim_req
  {
    cdr << ros_message->rcv_steertrim_req;
  }

  // Field name: mob_dev_rcv_req1_mob_dev_sts
  {
    cdr << ros_message->mob_dev_rcv_req1_mob_dev_sts;
  }

  // Field name: dc_dc_actvd
  {
    cdr << ros_message->dc_dc_actvd;
  }

  // Field name: steer_whl_snsr_ag
  {
    cdr << ros_message->steer_whl_snsr_ag;
  }

  // Field name: ble_con_sts
  {
    cdr << ros_message->ble_con_sts;
  }

  // Field name: twbr_lockd_posn
  {
    cdr << ros_message->twbr_lockd_posn;
  }

  // Field name: full_elec_twbr_posn
  {
    cdr << ros_message->full_elec_twbr_posn;
  }

  // Field name: vtsd_mode_sts
  {
    cdr << ros_message->vtsd_mode_sts;
  }

  // Field name: key_read_sts_to_asm
  {
    size_t size = 12;
    auto array_ptr = ros_message->key_read_sts_to_asm;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mob_dev_rpa_req_rspa_ctrl
  {
    cdr << ros_message->mob_dev_rpa_req_rspa_ctrl;
  }

  // Field name: mob_dev_rpa_req_rpa_req
  {
    cdr << ros_message->mob_dev_rpa_req_rpa_req;
  }

  // Field name: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    cdr << ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t;
  }

  // Field name: mob_dev_rpa_req_mob_dev_sts
  {
    cdr << ros_message->mob_dev_rpa_req_mob_dev_sts;
  }

  // Field name: crab_mov_mod_sts
  {
    cdr << ros_message->crab_mov_mod_sts;
  }

  // Field name: tank_turn_mod_sts
  {
    cdr << ros_message->tank_turn_mod_sts;
  }

  // Field name: pass_seat_sts2
  {
    cdr << ros_message->pass_seat_sts2;
  }

  // Field name: hmi_max_ev_mod
  {
    cdr << ros_message->hmi_max_ev_mod;
  }

  // Field name: adcu_max_ev_mod
  {
    cdr << ros_message->adcu_max_ev_mod;
  }

  // Field name: lamp_req_by_veh_hld
  {
    cdr << ros_message->lamp_req_by_veh_hld;
  }

  // Field name: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    cdr << ros_message->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn;
  }

  // Field name: msg_req_by_hill_dwn_ctrl
  {
    cdr << ros_message->msg_req_by_hill_dwn_ctrl;
  }

  // Field name: esc_warn_indcn_req_esc_warn_indcn_req
  {
    cdr << ros_message->esc_warn_indcn_req_esc_warn_indcn_req;
  }

  // Field name: abs_ctrl_actv_ctrl_sts1
  {
    cdr << ros_message->abs_ctrl_actv_ctrl_sts1;
  }

  // Field name: eng_st1_wd_sts_eng_st1_wd_sts
  {
    cdr << ros_message->eng_st1_wd_sts_eng_st1_wd_sts;
  }

  // Field name: crs_ctrl_ovrdn
  {
    cdr << ros_message->crs_ctrl_ovrdn;
  }

  // Field name: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    cdr << ros_message->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai;
  }

  // Field name: drvr_steer_whl_hld_qly
  {
    cdr << ros_message->drvr_steer_whl_hld_qly;
  }

  // Field name: door_drvr_sts_with_fac_qly_door_sts
  {
    cdr << ros_message->door_drvr_sts_with_fac_qly_door_sts;
  }

  // Field name: door_drvr_sts_with_fac_qly_fac_qly
  {
    cdr << ros_message->door_drvr_sts_with_fac_qly_fac_qly;
  }

  // Field name: lat_ctrl_mod_cfmd
  {
    cdr << ros_message->lat_ctrl_mod_cfmd;
  }

  // Field name: esc_ctrl_indcn
  {
    cdr << ros_message->esc_ctrl_indcn;
  }

  // Field name: pt_drvr_setg_drv_mod_req
  {
    cdr << ros_message->pt_drvr_setg_drv_mod_req;
  }

  // Field name: front_four_d_radar_sts_for_dim
  {
    cdr << ros_message->front_four_d_radar_sts_for_dim;
  }

  // Field name: drvr_prsnt_sts
  {
    cdr << ros_message->drvr_prsnt_sts;
  }

  // Field name: wipr_actv
  {
    cdr << ros_message->wipr_actv;
  }

  // Field name: stand_still_mgr_sts_for_hld
  {
    cdr << ros_message->stand_still_mgr_sts_for_hld;
  }

  // Field name: pt_drvr_setg
  {
    cdr << ros_message->pt_drvr_setg;
  }

  // Field name: tptf_status_error
  {
    cdr << ros_message->tptf_status_error;
  }

  // Field name: tptf_status
  {
    cdr << ros_message->tptf_status;
  }

  // Field name: tptf_time_gap
  {
    cdr << ros_message->tptf_time_gap;
  }

  // Field name: hmi_sod_lan_chg_switch
  {
    cdr << ros_message->hmi_sod_lan_chg_switch;
  }

  // Field name: hmi_drvr_sod_req_chg
  {
    cdr << ros_message->hmi_drvr_sod_req_chg;
  }

  // Field name: turn_indcr_monostable
  {
    cdr << ros_message->turn_indcr_monostable;
  }

  // Field name: drvr_lane_chg_aut_actv_sts
  {
    cdr << ros_message->drvr_lane_chg_aut_actv_sts;
  }

  // Field name: auto_lane_chg_with_navi_sw_onoff
  {
    cdr << ros_message->auto_lane_chg_with_navi_sw_onoff;
  }

  // Field name: nop_cofm_of_lan_chag_onoff
  {
    cdr << ros_message->nop_cofm_of_lan_chag_onoff;
  }

  // Field name: wipg_spd_info
  {
    cdr << ros_message->wipg_spd_info;
  }

  // Field name: asy_safe_stop_sts
  {
    cdr << ros_message->asy_safe_stop_sts;
  }

  // Field name: hmi_sup_end_mod
  {
    cdr << ros_message->hmi_sup_end_mod;
  }

  // Field name: crash_sts_safe_sts
  {
    cdr << ros_message->crash_sts_safe_sts;
  }

  // Field name: gear_park_not_allow
  {
    cdr << ros_message->gear_park_not_allow;
  }

  // Field name: drvr_seat_sts
  {
    cdr << ros_message->drvr_seat_sts;
  }

  // Field name: drvr_seat_snsr_sts
  {
    cdr << ros_message->drvr_seat_snsr_sts;
  }

  // Field name: ad_l3_lat_ctrl_sts_ad_mod
  {
    cdr << ros_message->ad_l3_lat_ctrl_sts_ad_mod;
  }

  // Field name: ad_l3_lgt_ctrl_sts_ad_mod
  {
    cdr << ros_message->ad_l3_lgt_ctrl_sts_ad_mod;
  }

  // Field name: accr_pedl_sts_flt_sts
  {
    cdr << ros_message->accr_pedl_sts_flt_sts;
  }

  // Field name: amb_t_raw_amb_t_val
  {
    cdr << ros_message->amb_t_raw_amb_t_val;
  }

  // Field name: body_hei
  {
    cdr << ros_message->body_hei;
  }

  // Field name: le_frnt_tire_msg_batt_lo_st
  {
    cdr << ros_message->le_frnt_tire_msg_batt_lo_st;
  }

  // Field name: le_frnt_tire_msg_fast_lose_warn_flg
  {
    cdr << ros_message->le_frnt_tire_msg_fast_lose_warn_flg;
  }

  // Field name: le_frnt_tire_msg_msg_old_flg
  {
    cdr << ros_message->le_frnt_tire_msg_msg_old_flg;
  }

  // Field name: le_frnt_tire_msg_p
  {
    cdr << ros_message->le_frnt_tire_msg_p;
  }

  // Field name: le_frnt_tire_msg_sys_warn_flg
  {
    cdr << ros_message->le_frnt_tire_msg_sys_warn_flg;
  }

  // Field name: le_frnt_tire_msg_t
  {
    cdr << ros_message->le_frnt_tire_msg_t;
  }

  // Field name: le_frnt_tire_msg_t_warn_flg
  {
    cdr << ros_message->le_frnt_tire_msg_t_warn_flg;
  }

  // Field name: le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    cdr << ros_message->le_frnt_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: le_re_tire_msg_batt_lo_st
  {
    cdr << ros_message->le_re_tire_msg_batt_lo_st;
  }

  // Field name: le_re_tire_msg_fast_lose_warn_flg
  {
    cdr << ros_message->le_re_tire_msg_fast_lose_warn_flg;
  }

  // Field name: le_re_tire_msg_msg_old_flg
  {
    cdr << ros_message->le_re_tire_msg_msg_old_flg;
  }

  // Field name: le_re_tire_msg_p
  {
    cdr << ros_message->le_re_tire_msg_p;
  }

  // Field name: le_re_tire_msg_sys_warn_flg
  {
    cdr << ros_message->le_re_tire_msg_sys_warn_flg;
  }

  // Field name: le_re_tire_msg_t
  {
    cdr << ros_message->le_re_tire_msg_t;
  }

  // Field name: le_re_tire_msg_t_warn_flg
  {
    cdr << ros_message->le_re_tire_msg_t_warn_flg;
  }

  // Field name: le_re_tire_msg_tire_fillg_assi_p_sts
  {
    cdr << ros_message->le_re_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: ri_frnt_tire_msg_batt_lo_st
  {
    cdr << ros_message->ri_frnt_tire_msg_batt_lo_st;
  }

  // Field name: ri_frnt_tire_msg_fast_lose_warn_flg
  {
    cdr << ros_message->ri_frnt_tire_msg_fast_lose_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_msg_old_flg
  {
    cdr << ros_message->ri_frnt_tire_msg_msg_old_flg;
  }

  // Field name: ri_frnt_tire_msg_p
  {
    cdr << ros_message->ri_frnt_tire_msg_p;
  }

  // Field name: ri_frnt_tire_msg_sys_warn_flg
  {
    cdr << ros_message->ri_frnt_tire_msg_sys_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_t
  {
    cdr << ros_message->ri_frnt_tire_msg_t;
  }

  // Field name: ri_frnt_tire_msg_t_warn_flg
  {
    cdr << ros_message->ri_frnt_tire_msg_t_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    cdr << ros_message->ri_frnt_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: ri_re_tire_msg_batt_lo_st
  {
    cdr << ros_message->ri_re_tire_msg_batt_lo_st;
  }

  // Field name: ri_re_tire_msg_fast_lose_warn_flg
  {
    cdr << ros_message->ri_re_tire_msg_fast_lose_warn_flg;
  }

  // Field name: ri_re_tire_msg_msg_old_flg
  {
    cdr << ros_message->ri_re_tire_msg_msg_old_flg;
  }

  // Field name: ri_re_tire_msg_p
  {
    cdr << ros_message->ri_re_tire_msg_p;
  }

  // Field name: ri_re_tire_msg_sys_warn_flg
  {
    cdr << ros_message->ri_re_tire_msg_sys_warn_flg;
  }

  // Field name: ri_re_tire_msg_t
  {
    cdr << ros_message->ri_re_tire_msg_t;
  }

  // Field name: ri_re_tire_msg_t_warn_flg
  {
    cdr << ros_message->ri_re_tire_msg_t_warn_flg;
  }

  // Field name: ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    cdr << ros_message->ri_re_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: occupy_mon_sts_drvr_sts
  {
    cdr << ros_message->occupy_mon_sts_drvr_sts;
  }

  // Field name: sun_roof_posn_sts
  {
    cdr << ros_message->sun_roof_posn_sts;
  }

  // Field name: susp_posn_vert_le1_frnt
  {
    cdr << ros_message->susp_posn_vert_le1_frnt;
  }

  // Field name: susp_posn_vert_le1_frnt_qf
  {
    cdr << ros_message->susp_posn_vert_le1_frnt_qf;
  }

  // Field name: susp_posn_vert_le1_re
  {
    cdr << ros_message->susp_posn_vert_le1_re;
  }

  // Field name: susp_posn_vert_le1_re_qf
  {
    cdr << ros_message->susp_posn_vert_le1_re_qf;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    cdr << ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    cdr << ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    cdr << ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    cdr << ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf;
  }

  // Field name: twli_bri_raw_qf
  {
    cdr << ros_message->twli_bri_raw_qf;
  }

  // Field name: twli_bri_raw_twli_bri_raw
  {
    cdr << ros_message->twli_bri_raw_twli_bri_raw;
  }

  // Field name: win_posn_sts_at_drvr
  {
    cdr << ros_message->win_posn_sts_at_drvr;
  }

  // Field name: win_posn_sts_at_pass
  {
    cdr << ros_message->win_posn_sts_at_pass;
  }

  // Field name: win_posn_sts_at_re_le
  {
    cdr << ros_message->win_posn_sts_at_re_le;
  }

  // Field name: win_posn_sts_at_re_ri
  {
    cdr << ros_message->win_posn_sts_at_re_ri;
  }

  // Field name: brk_sys_sts_ad_l3_brk_fall_bck
  {
    cdr << ros_message->brk_sys_sts_ad_l3_brk_fall_bck;
  }

  // Field name: brk_sys_sts_brk_degradation
  {
    cdr << ros_message->brk_sys_sts_brk_degradation;
  }

  // Field name: brk_sys_sts_brk_sys_mod_cfmd
  {
    cdr << ros_message->brk_sys_sts_brk_sys_mod_cfmd;
  }

  // Field name: tank_turn_mod_sts_tank_turn_mod_sts
  {
    cdr << ros_message->tank_turn_mod_sts_tank_turn_mod_sts;
  }

  // Field name: sfty_decel_group_safe_asy_sfty_ena_decel
  {
    cdr << ros_message->sfty_decel_group_safe_asy_sfty_ena_decel;
  }

  // Field name: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    cdr << ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  }

  // Field name: asy_emgy_lane_keep_aid_sts
  {
    cdr << ros_message->asy_emgy_lane_keep_aid_sts;
  }

  // Field name: asy_lane_keep_aid_sts
  {
    cdr << ros_message->asy_lane_keep_aid_sts;
  }

  // Field name: rcwm_brk_req_rcwm_brk_req
  {
    cdr << ros_message->rcwm_brk_req_rcwm_brk_req;
  }

  // Field name: asy_a_lgt_sts_asy_a_lgt_sts
  {
    cdr << ros_message->asy_a_lgt_sts_asy_a_lgt_sts;
  }

  // Field name: asy_a_lat_indcr
  {
    cdr << ros_message->asy_a_lat_indcr;
  }

  // Field name: asy_cnoa_crs_sts
  {
    cdr << ros_message->asy_cnoa_crs_sts;
  }

  // Field name: indcr_sts
  {
    cdr << ros_message->indcr_sts;
  }

  return true;
}

static bool _BusToSmData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _BusToSmData__ros_msg_type * ros_message = static_cast<_BusToSmData__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, deva_common_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: tr_lock_sts
  {
    cdr >> ros_message->tr_lock_sts;
  }

  // Field name: door_drvr_lock_sts
  {
    cdr >> ros_message->door_drvr_lock_sts;
  }

  // Field name: door_pass_lock_sts
  {
    cdr >> ros_message->door_pass_lock_sts;
  }

  // Field name: door_le_re_lock_sts
  {
    cdr >> ros_message->door_le_re_lock_sts;
  }

  // Field name: door_ri_re_lock_sts
  {
    cdr >> ros_message->door_ri_re_lock_sts;
  }

  // Field name: brk_sys_sts_brk_sys_capability
  {
    cdr >> ros_message->brk_sys_sts_brk_sys_capability;
  }

  // Field name: rev
  {
    size_t size = 2;
    auto array_ptr = ros_message->rev;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: calltype_and_sts_ecall_status
  {
    cdr >> ros_message->calltype_and_sts_ecall_status;
  }

  // Field name: blt_lock_st_at_drvr
  {
    cdr >> ros_message->blt_lock_st_at_drvr;
  }

  // Field name: blt_lock_st_err_sts_at_drvr
  {
    cdr >> ros_message->blt_lock_st_err_sts_at_drvr;
  }

  // Field name: esc_st_esc_st
  {
    cdr >> ros_message->esc_st_esc_st;
  }

  // Field name: prk_lat_lgt_failr
  {
    cdr >> ros_message->prk_lat_lgt_failr;
  }

  // Field name: road_incln_qly
  {
    cdr >> ros_message->road_incln_qly;
  }

  // Field name: veh_mtn_st
  {
    cdr >> ros_message->veh_mtn_st;
  }

  // Field name: whl_spd_circuml_frnt_le_qf
  {
    cdr >> ros_message->whl_spd_circuml_frnt_le_qf;
  }

  // Field name: whl_spd_circuml_frnt_ri_qf
  {
    cdr >> ros_message->whl_spd_circuml_frnt_ri_qf;
  }

  // Field name: whl_spd_circuml_re_le_qf
  {
    cdr >> ros_message->whl_spd_circuml_re_le_qf;
  }

  // Field name: whl_spd_circuml_re_ri_qf
  {
    cdr >> ros_message->whl_spd_circuml_re_ri_qf;
  }

  // Field name: gear_mov
  {
    cdr >> ros_message->gear_mov;
  }

  // Field name: accr_pedl_psd_accr_pedl_psd
  {
    cdr >> ros_message->accr_pedl_psd_accr_pedl_psd;
  }

  // Field name: accr_pedl_psd_sts
  {
    cdr >> ros_message->accr_pedl_psd_sts;
  }

  // Field name: typ_ext_req_to_upd_qf
  {
    cdr >> ros_message->typ_ext_req_to_upd_qf;
  }

  // Field name: trsm_park_lockd
  {
    cdr >> ros_message->trsm_park_lockd;
  }

  // Field name: door_drvr_sts
  {
    cdr >> ros_message->door_drvr_sts;
  }

  // Field name: door_le_re_sts
  {
    cdr >> ros_message->door_le_re_sts;
  }

  // Field name: door_pass_sts
  {
    cdr >> ros_message->door_pass_sts;
  }

  // Field name: door_ri_re_sts
  {
    cdr >> ros_message->door_ri_re_sts;
  }

  // Field name: hood_sts
  {
    cdr >> ros_message->hood_sts;
  }

  // Field name: mirr_fold_sts_at_drvr
  {
    cdr >> ros_message->mirr_fold_sts_at_drvr;
  }

  // Field name: mirr_fold_sts_at_pass
  {
    cdr >> ros_message->mirr_fold_sts_at_pass;
  }

  // Field name: tr_sts
  {
    cdr >> ros_message->tr_sts;
  }

  // Field name: trlr_prsnt
  {
    cdr >> ros_message->trlr_prsnt;
  }

  // Field name: veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    cdr >> ros_message->veh_mod_mngt_glb_safe1_car_mod_sts1;
  }

  // Field name: veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    cdr >> ros_message->veh_mod_mngt_glb_safe1_usg_mod_sts;
  }

  // Field name: steer_sts_to_park_assi
  {
    cdr >> ros_message->steer_sts_to_park_assi;
  }

  // Field name: indcr_typ_ext_req
  {
    cdr >> ros_message->indcr_typ_ext_req;
  }

  // Field name: rainfall_amnt
  {
    cdr >> ros_message->rainfall_amnt;
  }

  // Field name: egy_lvl_elec_mai
  {
    cdr >> ros_message->egy_lvl_elec_mai;
  }

  // Field name: le_frnt_tire_msg_p_warn_flg
  {
    cdr >> ros_message->le_frnt_tire_msg_p_warn_flg;
  }

  // Field name: le_re_tire_msg_p_warn_flg
  {
    cdr >> ros_message->le_re_tire_msg_p_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_p_warn_flg
  {
    cdr >> ros_message->ri_frnt_tire_msg_p_warn_flg;
  }

  // Field name: ri_re_tire_msg_p_warn_flg
  {
    cdr >> ros_message->ri_re_tire_msg_p_warn_flg;
  }

  // Field name: sm_lat_shake_hand_state
  {
    cdr >> ros_message->sm_lat_shake_hand_state;
  }

  // Field name: sm_lon_shake_hand_state
  {
    cdr >> ros_message->sm_lon_shake_hand_state;
  }

  // Field name: rcv_ctrl_req
  {
    cdr >> ros_message->rcv_ctrl_req;
  }

  // Field name: rcv_steertrim_req
  {
    cdr >> ros_message->rcv_steertrim_req;
  }

  // Field name: mob_dev_rcv_req1_mob_dev_sts
  {
    cdr >> ros_message->mob_dev_rcv_req1_mob_dev_sts;
  }

  // Field name: dc_dc_actvd
  {
    cdr >> ros_message->dc_dc_actvd;
  }

  // Field name: steer_whl_snsr_ag
  {
    cdr >> ros_message->steer_whl_snsr_ag;
  }

  // Field name: ble_con_sts
  {
    cdr >> ros_message->ble_con_sts;
  }

  // Field name: twbr_lockd_posn
  {
    cdr >> ros_message->twbr_lockd_posn;
  }

  // Field name: full_elec_twbr_posn
  {
    cdr >> ros_message->full_elec_twbr_posn;
  }

  // Field name: vtsd_mode_sts
  {
    cdr >> ros_message->vtsd_mode_sts;
  }

  // Field name: key_read_sts_to_asm
  {
    size_t size = 12;
    auto array_ptr = ros_message->key_read_sts_to_asm;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mob_dev_rpa_req_rspa_ctrl
  {
    cdr >> ros_message->mob_dev_rpa_req_rspa_ctrl;
  }

  // Field name: mob_dev_rpa_req_rpa_req
  {
    cdr >> ros_message->mob_dev_rpa_req_rpa_req;
  }

  // Field name: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    cdr >> ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t;
  }

  // Field name: mob_dev_rpa_req_mob_dev_sts
  {
    cdr >> ros_message->mob_dev_rpa_req_mob_dev_sts;
  }

  // Field name: crab_mov_mod_sts
  {
    cdr >> ros_message->crab_mov_mod_sts;
  }

  // Field name: tank_turn_mod_sts
  {
    cdr >> ros_message->tank_turn_mod_sts;
  }

  // Field name: pass_seat_sts2
  {
    cdr >> ros_message->pass_seat_sts2;
  }

  // Field name: hmi_max_ev_mod
  {
    cdr >> ros_message->hmi_max_ev_mod;
  }

  // Field name: adcu_max_ev_mod
  {
    cdr >> ros_message->adcu_max_ev_mod;
  }

  // Field name: lamp_req_by_veh_hld
  {
    cdr >> ros_message->lamp_req_by_veh_hld;
  }

  // Field name: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    cdr >> ros_message->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn;
  }

  // Field name: msg_req_by_hill_dwn_ctrl
  {
    cdr >> ros_message->msg_req_by_hill_dwn_ctrl;
  }

  // Field name: esc_warn_indcn_req_esc_warn_indcn_req
  {
    cdr >> ros_message->esc_warn_indcn_req_esc_warn_indcn_req;
  }

  // Field name: abs_ctrl_actv_ctrl_sts1
  {
    cdr >> ros_message->abs_ctrl_actv_ctrl_sts1;
  }

  // Field name: eng_st1_wd_sts_eng_st1_wd_sts
  {
    cdr >> ros_message->eng_st1_wd_sts_eng_st1_wd_sts;
  }

  // Field name: crs_ctrl_ovrdn
  {
    cdr >> ros_message->crs_ctrl_ovrdn;
  }

  // Field name: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    cdr >> ros_message->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai;
  }

  // Field name: drvr_steer_whl_hld_qly
  {
    cdr >> ros_message->drvr_steer_whl_hld_qly;
  }

  // Field name: door_drvr_sts_with_fac_qly_door_sts
  {
    cdr >> ros_message->door_drvr_sts_with_fac_qly_door_sts;
  }

  // Field name: door_drvr_sts_with_fac_qly_fac_qly
  {
    cdr >> ros_message->door_drvr_sts_with_fac_qly_fac_qly;
  }

  // Field name: lat_ctrl_mod_cfmd
  {
    cdr >> ros_message->lat_ctrl_mod_cfmd;
  }

  // Field name: esc_ctrl_indcn
  {
    cdr >> ros_message->esc_ctrl_indcn;
  }

  // Field name: pt_drvr_setg_drv_mod_req
  {
    cdr >> ros_message->pt_drvr_setg_drv_mod_req;
  }

  // Field name: front_four_d_radar_sts_for_dim
  {
    cdr >> ros_message->front_four_d_radar_sts_for_dim;
  }

  // Field name: drvr_prsnt_sts
  {
    cdr >> ros_message->drvr_prsnt_sts;
  }

  // Field name: wipr_actv
  {
    cdr >> ros_message->wipr_actv;
  }

  // Field name: stand_still_mgr_sts_for_hld
  {
    cdr >> ros_message->stand_still_mgr_sts_for_hld;
  }

  // Field name: pt_drvr_setg
  {
    cdr >> ros_message->pt_drvr_setg;
  }

  // Field name: tptf_status_error
  {
    cdr >> ros_message->tptf_status_error;
  }

  // Field name: tptf_status
  {
    cdr >> ros_message->tptf_status;
  }

  // Field name: tptf_time_gap
  {
    cdr >> ros_message->tptf_time_gap;
  }

  // Field name: hmi_sod_lan_chg_switch
  {
    cdr >> ros_message->hmi_sod_lan_chg_switch;
  }

  // Field name: hmi_drvr_sod_req_chg
  {
    cdr >> ros_message->hmi_drvr_sod_req_chg;
  }

  // Field name: turn_indcr_monostable
  {
    cdr >> ros_message->turn_indcr_monostable;
  }

  // Field name: drvr_lane_chg_aut_actv_sts
  {
    cdr >> ros_message->drvr_lane_chg_aut_actv_sts;
  }

  // Field name: auto_lane_chg_with_navi_sw_onoff
  {
    cdr >> ros_message->auto_lane_chg_with_navi_sw_onoff;
  }

  // Field name: nop_cofm_of_lan_chag_onoff
  {
    cdr >> ros_message->nop_cofm_of_lan_chag_onoff;
  }

  // Field name: wipg_spd_info
  {
    cdr >> ros_message->wipg_spd_info;
  }

  // Field name: asy_safe_stop_sts
  {
    cdr >> ros_message->asy_safe_stop_sts;
  }

  // Field name: hmi_sup_end_mod
  {
    cdr >> ros_message->hmi_sup_end_mod;
  }

  // Field name: crash_sts_safe_sts
  {
    cdr >> ros_message->crash_sts_safe_sts;
  }

  // Field name: gear_park_not_allow
  {
    cdr >> ros_message->gear_park_not_allow;
  }

  // Field name: drvr_seat_sts
  {
    cdr >> ros_message->drvr_seat_sts;
  }

  // Field name: drvr_seat_snsr_sts
  {
    cdr >> ros_message->drvr_seat_snsr_sts;
  }

  // Field name: ad_l3_lat_ctrl_sts_ad_mod
  {
    cdr >> ros_message->ad_l3_lat_ctrl_sts_ad_mod;
  }

  // Field name: ad_l3_lgt_ctrl_sts_ad_mod
  {
    cdr >> ros_message->ad_l3_lgt_ctrl_sts_ad_mod;
  }

  // Field name: accr_pedl_sts_flt_sts
  {
    cdr >> ros_message->accr_pedl_sts_flt_sts;
  }

  // Field name: amb_t_raw_amb_t_val
  {
    cdr >> ros_message->amb_t_raw_amb_t_val;
  }

  // Field name: body_hei
  {
    cdr >> ros_message->body_hei;
  }

  // Field name: le_frnt_tire_msg_batt_lo_st
  {
    cdr >> ros_message->le_frnt_tire_msg_batt_lo_st;
  }

  // Field name: le_frnt_tire_msg_fast_lose_warn_flg
  {
    cdr >> ros_message->le_frnt_tire_msg_fast_lose_warn_flg;
  }

  // Field name: le_frnt_tire_msg_msg_old_flg
  {
    cdr >> ros_message->le_frnt_tire_msg_msg_old_flg;
  }

  // Field name: le_frnt_tire_msg_p
  {
    cdr >> ros_message->le_frnt_tire_msg_p;
  }

  // Field name: le_frnt_tire_msg_sys_warn_flg
  {
    cdr >> ros_message->le_frnt_tire_msg_sys_warn_flg;
  }

  // Field name: le_frnt_tire_msg_t
  {
    cdr >> ros_message->le_frnt_tire_msg_t;
  }

  // Field name: le_frnt_tire_msg_t_warn_flg
  {
    cdr >> ros_message->le_frnt_tire_msg_t_warn_flg;
  }

  // Field name: le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    cdr >> ros_message->le_frnt_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: le_re_tire_msg_batt_lo_st
  {
    cdr >> ros_message->le_re_tire_msg_batt_lo_st;
  }

  // Field name: le_re_tire_msg_fast_lose_warn_flg
  {
    cdr >> ros_message->le_re_tire_msg_fast_lose_warn_flg;
  }

  // Field name: le_re_tire_msg_msg_old_flg
  {
    cdr >> ros_message->le_re_tire_msg_msg_old_flg;
  }

  // Field name: le_re_tire_msg_p
  {
    cdr >> ros_message->le_re_tire_msg_p;
  }

  // Field name: le_re_tire_msg_sys_warn_flg
  {
    cdr >> ros_message->le_re_tire_msg_sys_warn_flg;
  }

  // Field name: le_re_tire_msg_t
  {
    cdr >> ros_message->le_re_tire_msg_t;
  }

  // Field name: le_re_tire_msg_t_warn_flg
  {
    cdr >> ros_message->le_re_tire_msg_t_warn_flg;
  }

  // Field name: le_re_tire_msg_tire_fillg_assi_p_sts
  {
    cdr >> ros_message->le_re_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: ri_frnt_tire_msg_batt_lo_st
  {
    cdr >> ros_message->ri_frnt_tire_msg_batt_lo_st;
  }

  // Field name: ri_frnt_tire_msg_fast_lose_warn_flg
  {
    cdr >> ros_message->ri_frnt_tire_msg_fast_lose_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_msg_old_flg
  {
    cdr >> ros_message->ri_frnt_tire_msg_msg_old_flg;
  }

  // Field name: ri_frnt_tire_msg_p
  {
    cdr >> ros_message->ri_frnt_tire_msg_p;
  }

  // Field name: ri_frnt_tire_msg_sys_warn_flg
  {
    cdr >> ros_message->ri_frnt_tire_msg_sys_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_t
  {
    cdr >> ros_message->ri_frnt_tire_msg_t;
  }

  // Field name: ri_frnt_tire_msg_t_warn_flg
  {
    cdr >> ros_message->ri_frnt_tire_msg_t_warn_flg;
  }

  // Field name: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    cdr >> ros_message->ri_frnt_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: ri_re_tire_msg_batt_lo_st
  {
    cdr >> ros_message->ri_re_tire_msg_batt_lo_st;
  }

  // Field name: ri_re_tire_msg_fast_lose_warn_flg
  {
    cdr >> ros_message->ri_re_tire_msg_fast_lose_warn_flg;
  }

  // Field name: ri_re_tire_msg_msg_old_flg
  {
    cdr >> ros_message->ri_re_tire_msg_msg_old_flg;
  }

  // Field name: ri_re_tire_msg_p
  {
    cdr >> ros_message->ri_re_tire_msg_p;
  }

  // Field name: ri_re_tire_msg_sys_warn_flg
  {
    cdr >> ros_message->ri_re_tire_msg_sys_warn_flg;
  }

  // Field name: ri_re_tire_msg_t
  {
    cdr >> ros_message->ri_re_tire_msg_t;
  }

  // Field name: ri_re_tire_msg_t_warn_flg
  {
    cdr >> ros_message->ri_re_tire_msg_t_warn_flg;
  }

  // Field name: ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    cdr >> ros_message->ri_re_tire_msg_tire_fillg_assi_p_sts;
  }

  // Field name: occupy_mon_sts_drvr_sts
  {
    cdr >> ros_message->occupy_mon_sts_drvr_sts;
  }

  // Field name: sun_roof_posn_sts
  {
    cdr >> ros_message->sun_roof_posn_sts;
  }

  // Field name: susp_posn_vert_le1_frnt
  {
    cdr >> ros_message->susp_posn_vert_le1_frnt;
  }

  // Field name: susp_posn_vert_le1_frnt_qf
  {
    cdr >> ros_message->susp_posn_vert_le1_frnt_qf;
  }

  // Field name: susp_posn_vert_le1_re
  {
    cdr >> ros_message->susp_posn_vert_le1_re;
  }

  // Field name: susp_posn_vert_le1_re_qf
  {
    cdr >> ros_message->susp_posn_vert_le1_re_qf;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    cdr >> ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    cdr >> ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    cdr >> ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re;
  }

  // Field name: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    cdr >> ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf;
  }

  // Field name: twli_bri_raw_qf
  {
    cdr >> ros_message->twli_bri_raw_qf;
  }

  // Field name: twli_bri_raw_twli_bri_raw
  {
    cdr >> ros_message->twli_bri_raw_twli_bri_raw;
  }

  // Field name: win_posn_sts_at_drvr
  {
    cdr >> ros_message->win_posn_sts_at_drvr;
  }

  // Field name: win_posn_sts_at_pass
  {
    cdr >> ros_message->win_posn_sts_at_pass;
  }

  // Field name: win_posn_sts_at_re_le
  {
    cdr >> ros_message->win_posn_sts_at_re_le;
  }

  // Field name: win_posn_sts_at_re_ri
  {
    cdr >> ros_message->win_posn_sts_at_re_ri;
  }

  // Field name: brk_sys_sts_ad_l3_brk_fall_bck
  {
    cdr >> ros_message->brk_sys_sts_ad_l3_brk_fall_bck;
  }

  // Field name: brk_sys_sts_brk_degradation
  {
    cdr >> ros_message->brk_sys_sts_brk_degradation;
  }

  // Field name: brk_sys_sts_brk_sys_mod_cfmd
  {
    cdr >> ros_message->brk_sys_sts_brk_sys_mod_cfmd;
  }

  // Field name: tank_turn_mod_sts_tank_turn_mod_sts
  {
    cdr >> ros_message->tank_turn_mod_sts_tank_turn_mod_sts;
  }

  // Field name: sfty_decel_group_safe_asy_sfty_ena_decel
  {
    cdr >> ros_message->sfty_decel_group_safe_asy_sfty_ena_decel;
  }

  // Field name: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    cdr >> ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  }

  // Field name: asy_emgy_lane_keep_aid_sts
  {
    cdr >> ros_message->asy_emgy_lane_keep_aid_sts;
  }

  // Field name: asy_lane_keep_aid_sts
  {
    cdr >> ros_message->asy_lane_keep_aid_sts;
  }

  // Field name: rcwm_brk_req_rcwm_brk_req
  {
    cdr >> ros_message->rcwm_brk_req_rcwm_brk_req;
  }

  // Field name: asy_a_lgt_sts_asy_a_lgt_sts
  {
    cdr >> ros_message->asy_a_lgt_sts_asy_a_lgt_sts;
  }

  // Field name: asy_a_lat_indcr
  {
    cdr >> ros_message->asy_a_lat_indcr;
  }

  // Field name: asy_cnoa_crs_sts
  {
    cdr >> ros_message->asy_cnoa_crs_sts;
  }

  // Field name: indcr_sts
  {
    cdr >> ros_message->indcr_sts;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t get_serialized_size_deva_function_msgs__msg__BusToSmData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BusToSmData__ros_msg_type * ros_message = static_cast<const _BusToSmData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_deva_common_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name tr_lock_sts
  {
    size_t item_size = sizeof(ros_message->tr_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_drvr_lock_sts
  {
    size_t item_size = sizeof(ros_message->door_drvr_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_pass_lock_sts
  {
    size_t item_size = sizeof(ros_message->door_pass_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_le_re_lock_sts
  {
    size_t item_size = sizeof(ros_message->door_le_re_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_ri_re_lock_sts
  {
    size_t item_size = sizeof(ros_message->door_ri_re_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_sys_sts_brk_sys_capability
  {
    size_t item_size = sizeof(ros_message->brk_sys_sts_brk_sys_capability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rev
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->rev;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calltype_and_sts_ecall_status
  {
    size_t item_size = sizeof(ros_message->calltype_and_sts_ecall_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blt_lock_st_at_drvr
  {
    size_t item_size = sizeof(ros_message->blt_lock_st_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blt_lock_st_err_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message->blt_lock_st_err_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_st_esc_st
  {
    size_t item_size = sizeof(ros_message->esc_st_esc_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prk_lat_lgt_failr
  {
    size_t item_size = sizeof(ros_message->prk_lat_lgt_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name road_incln_qly
  {
    size_t item_size = sizeof(ros_message->road_incln_qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_mtn_st
  {
    size_t item_size = sizeof(ros_message->veh_mtn_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name whl_spd_circuml_frnt_le_qf
  {
    size_t item_size = sizeof(ros_message->whl_spd_circuml_frnt_le_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name whl_spd_circuml_frnt_ri_qf
  {
    size_t item_size = sizeof(ros_message->whl_spd_circuml_frnt_ri_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name whl_spd_circuml_re_le_qf
  {
    size_t item_size = sizeof(ros_message->whl_spd_circuml_re_le_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name whl_spd_circuml_re_ri_qf
  {
    size_t item_size = sizeof(ros_message->whl_spd_circuml_re_ri_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_mov
  {
    size_t item_size = sizeof(ros_message->gear_mov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accr_pedl_psd_accr_pedl_psd
  {
    size_t item_size = sizeof(ros_message->accr_pedl_psd_accr_pedl_psd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accr_pedl_psd_sts
  {
    size_t item_size = sizeof(ros_message->accr_pedl_psd_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name typ_ext_req_to_upd_qf
  {
    size_t item_size = sizeof(ros_message->typ_ext_req_to_upd_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trsm_park_lockd
  {
    size_t item_size = sizeof(ros_message->trsm_park_lockd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_drvr_sts
  {
    size_t item_size = sizeof(ros_message->door_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_le_re_sts
  {
    size_t item_size = sizeof(ros_message->door_le_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_pass_sts
  {
    size_t item_size = sizeof(ros_message->door_pass_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_ri_re_sts
  {
    size_t item_size = sizeof(ros_message->door_ri_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hood_sts
  {
    size_t item_size = sizeof(ros_message->hood_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirr_fold_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message->mirr_fold_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mirr_fold_sts_at_pass
  {
    size_t item_size = sizeof(ros_message->mirr_fold_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tr_sts
  {
    size_t item_size = sizeof(ros_message->tr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name trlr_prsnt
  {
    size_t item_size = sizeof(ros_message->trlr_prsnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    size_t item_size = sizeof(ros_message->veh_mod_mngt_glb_safe1_car_mod_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    size_t item_size = sizeof(ros_message->veh_mod_mngt_glb_safe1_usg_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_sts_to_park_assi
  {
    size_t item_size = sizeof(ros_message->steer_sts_to_park_assi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcr_typ_ext_req
  {
    size_t item_size = sizeof(ros_message->indcr_typ_ext_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rainfall_amnt
  {
    size_t item_size = sizeof(ros_message->rainfall_amnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name egy_lvl_elec_mai
  {
    size_t item_size = sizeof(ros_message->egy_lvl_elec_mai);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_lat_shake_hand_state
  {
    size_t item_size = sizeof(ros_message->sm_lat_shake_hand_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sm_lon_shake_hand_state
  {
    size_t item_size = sizeof(ros_message->sm_lon_shake_hand_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rcv_ctrl_req
  {
    size_t item_size = sizeof(ros_message->rcv_ctrl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rcv_steertrim_req
  {
    size_t item_size = sizeof(ros_message->rcv_steertrim_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rcv_req1_mob_dev_sts
  {
    size_t item_size = sizeof(ros_message->mob_dev_rcv_req1_mob_dev_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dc_dc_actvd
  {
    size_t item_size = sizeof(ros_message->dc_dc_actvd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_whl_snsr_ag
  {
    size_t item_size = sizeof(ros_message->steer_whl_snsr_ag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ble_con_sts
  {
    size_t item_size = sizeof(ros_message->ble_con_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name twbr_lockd_posn
  {
    size_t item_size = sizeof(ros_message->twbr_lockd_posn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name full_elec_twbr_posn
  {
    size_t item_size = sizeof(ros_message->full_elec_twbr_posn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtsd_mode_sts
  {
    size_t item_size = sizeof(ros_message->vtsd_mode_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name key_read_sts_to_asm
  {
    size_t array_size = 12;
    auto array_ptr = ros_message->key_read_sts_to_asm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_rspa_ctrl
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_rspa_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_rpa_req
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_rpa_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_rpa_out_mode_sub_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mob_dev_rpa_req_mob_dev_sts
  {
    size_t item_size = sizeof(ros_message->mob_dev_rpa_req_mob_dev_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crab_mov_mod_sts
  {
    size_t item_size = sizeof(ros_message->crab_mov_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tank_turn_mod_sts
  {
    size_t item_size = sizeof(ros_message->tank_turn_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pass_seat_sts2
  {
    size_t item_size = sizeof(ros_message->pass_seat_sts2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_max_ev_mod
  {
    size_t item_size = sizeof(ros_message->hmi_max_ev_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name adcu_max_ev_mod
  {
    size_t item_size = sizeof(ros_message->adcu_max_ev_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lamp_req_by_veh_hld
  {
    size_t item_size = sizeof(ros_message->lamp_req_by_veh_hld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    size_t item_size = sizeof(ros_message->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name msg_req_by_hill_dwn_ctrl
  {
    size_t item_size = sizeof(ros_message->msg_req_by_hill_dwn_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_warn_indcn_req_esc_warn_indcn_req
  {
    size_t item_size = sizeof(ros_message->esc_warn_indcn_req_esc_warn_indcn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs_ctrl_actv_ctrl_sts1
  {
    size_t item_size = sizeof(ros_message->abs_ctrl_actv_ctrl_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eng_st1_wd_sts_eng_st1_wd_sts
  {
    size_t item_size = sizeof(ros_message->eng_st1_wd_sts_eng_st1_wd_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crs_ctrl_ovrdn
  {
    size_t item_size = sizeof(ros_message->crs_ctrl_ovrdn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    size_t item_size = sizeof(ros_message->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_steer_whl_hld_qly
  {
    size_t item_size = sizeof(ros_message->drvr_steer_whl_hld_qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_drvr_sts_with_fac_qly_door_sts
  {
    size_t item_size = sizeof(ros_message->door_drvr_sts_with_fac_qly_door_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name door_drvr_sts_with_fac_qly_fac_qly
  {
    size_t item_size = sizeof(ros_message->door_drvr_sts_with_fac_qly_fac_qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lat_ctrl_mod_cfmd
  {
    size_t item_size = sizeof(ros_message->lat_ctrl_mod_cfmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name esc_ctrl_indcn
  {
    size_t item_size = sizeof(ros_message->esc_ctrl_indcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_drvr_setg_drv_mod_req
  {
    size_t item_size = sizeof(ros_message->pt_drvr_setg_drv_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_four_d_radar_sts_for_dim
  {
    size_t item_size = sizeof(ros_message->front_four_d_radar_sts_for_dim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_prsnt_sts
  {
    size_t item_size = sizeof(ros_message->drvr_prsnt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wipr_actv
  {
    size_t item_size = sizeof(ros_message->wipr_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stand_still_mgr_sts_for_hld
  {
    size_t item_size = sizeof(ros_message->stand_still_mgr_sts_for_hld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pt_drvr_setg
  {
    size_t item_size = sizeof(ros_message->pt_drvr_setg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tptf_status_error
  {
    size_t item_size = sizeof(ros_message->tptf_status_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tptf_status
  {
    size_t item_size = sizeof(ros_message->tptf_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tptf_time_gap
  {
    size_t item_size = sizeof(ros_message->tptf_time_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_sod_lan_chg_switch
  {
    size_t item_size = sizeof(ros_message->hmi_sod_lan_chg_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_drvr_sod_req_chg
  {
    size_t item_size = sizeof(ros_message->hmi_drvr_sod_req_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name turn_indcr_monostable
  {
    size_t item_size = sizeof(ros_message->turn_indcr_monostable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_lane_chg_aut_actv_sts
  {
    size_t item_size = sizeof(ros_message->drvr_lane_chg_aut_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_lane_chg_with_navi_sw_onoff
  {
    size_t item_size = sizeof(ros_message->auto_lane_chg_with_navi_sw_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nop_cofm_of_lan_chag_onoff
  {
    size_t item_size = sizeof(ros_message->nop_cofm_of_lan_chag_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wipg_spd_info
  {
    size_t item_size = sizeof(ros_message->wipg_spd_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_safe_stop_sts
  {
    size_t item_size = sizeof(ros_message->asy_safe_stop_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hmi_sup_end_mod
  {
    size_t item_size = sizeof(ros_message->hmi_sup_end_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crash_sts_safe_sts
  {
    size_t item_size = sizeof(ros_message->crash_sts_safe_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_park_not_allow
  {
    size_t item_size = sizeof(ros_message->gear_park_not_allow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_seat_sts
  {
    size_t item_size = sizeof(ros_message->drvr_seat_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name drvr_seat_snsr_sts
  {
    size_t item_size = sizeof(ros_message->drvr_seat_snsr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_l3_lat_ctrl_sts_ad_mod
  {
    size_t item_size = sizeof(ros_message->ad_l3_lat_ctrl_sts_ad_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ad_l3_lgt_ctrl_sts_ad_mod
  {
    size_t item_size = sizeof(ros_message->ad_l3_lgt_ctrl_sts_ad_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accr_pedl_sts_flt_sts
  {
    size_t item_size = sizeof(ros_message->accr_pedl_sts_flt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name amb_t_raw_amb_t_val
  {
    size_t item_size = sizeof(ros_message->amb_t_raw_amb_t_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name body_hei
  {
    size_t item_size = sizeof(ros_message->body_hei);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_p
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_t
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message->le_frnt_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_p
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_t
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name le_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message->le_re_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_p
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_t
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message->ri_frnt_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_p
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_t
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message->ri_re_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name occupy_mon_sts_drvr_sts
  {
    size_t item_size = sizeof(ros_message->occupy_mon_sts_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sun_roof_posn_sts
  {
    size_t item_size = sizeof(ros_message->sun_roof_posn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_le1_frnt
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_le1_frnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_le1_frnt_qf
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_le1_frnt_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_le1_re
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_le1_re);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_le1_re_qf
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_le1_re_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    size_t item_size = sizeof(ros_message->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name twli_bri_raw_qf
  {
    size_t item_size = sizeof(ros_message->twli_bri_raw_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name twli_bri_raw_twli_bri_raw
  {
    size_t item_size = sizeof(ros_message->twli_bri_raw_twli_bri_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_pass
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_re_le
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_re_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name win_posn_sts_at_re_ri
  {
    size_t item_size = sizeof(ros_message->win_posn_sts_at_re_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_sys_sts_ad_l3_brk_fall_bck
  {
    size_t item_size = sizeof(ros_message->brk_sys_sts_ad_l3_brk_fall_bck);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_sys_sts_brk_degradation
  {
    size_t item_size = sizeof(ros_message->brk_sys_sts_brk_degradation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brk_sys_sts_brk_sys_mod_cfmd
  {
    size_t item_size = sizeof(ros_message->brk_sys_sts_brk_sys_mod_cfmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tank_turn_mod_sts_tank_turn_mod_sts
  {
    size_t item_size = sizeof(ros_message->tank_turn_mod_sts_tank_turn_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sfty_decel_group_safe_asy_sfty_ena_decel
  {
    size_t item_size = sizeof(ros_message->sfty_decel_group_safe_asy_sfty_ena_decel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t item_size = sizeof(ros_message->steer_tq_addl_for_ema_steer_tq_addl_for_ema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_emgy_lane_keep_aid_sts
  {
    size_t item_size = sizeof(ros_message->asy_emgy_lane_keep_aid_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_lane_keep_aid_sts
  {
    size_t item_size = sizeof(ros_message->asy_lane_keep_aid_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rcwm_brk_req_rcwm_brk_req
  {
    size_t item_size = sizeof(ros_message->rcwm_brk_req_rcwm_brk_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t item_size = sizeof(ros_message->asy_a_lgt_sts_asy_a_lgt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_a_lat_indcr
  {
    size_t item_size = sizeof(ros_message->asy_a_lat_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name asy_cnoa_crs_sts
  {
    size_t item_size = sizeof(ros_message->asy_cnoa_crs_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name indcr_sts
  {
    size_t item_size = sizeof(ros_message->indcr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _BusToSmData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_deva_function_msgs__msg__BusToSmData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_deva_function_msgs
size_t max_serialized_size_deva_function_msgs__msg__BusToSmData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_deva_common_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: tr_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_drvr_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_pass_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_le_re_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_ri_re_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk_sys_sts_brk_sys_capability
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rev
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: calltype_and_sts_ecall_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blt_lock_st_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: blt_lock_st_err_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_st_esc_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: prk_lat_lgt_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: road_incln_qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_mtn_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: whl_spd_circuml_frnt_le_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: whl_spd_circuml_frnt_ri_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: whl_spd_circuml_re_le_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: whl_spd_circuml_re_ri_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_mov
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accr_pedl_psd_accr_pedl_psd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accr_pedl_psd_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: typ_ext_req_to_upd_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trsm_park_lockd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_le_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_pass_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_ri_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hood_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mirr_fold_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mirr_fold_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: trlr_prsnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_sts_to_park_assi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indcr_typ_ext_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rainfall_amnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: egy_lvl_elec_mai
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_frnt_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_re_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_frnt_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_re_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_lat_shake_hand_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sm_lon_shake_hand_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rcv_ctrl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rcv_steertrim_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rcv_req1_mob_dev_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dc_dc_actvd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_whl_snsr_ag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ble_con_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: twbr_lockd_posn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: full_elec_twbr_posn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtsd_mode_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: key_read_sts_to_asm
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_rspa_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_rpa_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mob_dev_rpa_req_mob_dev_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crab_mov_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tank_turn_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pass_seat_sts2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_max_ev_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: adcu_max_ev_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lamp_req_by_veh_hld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: msg_req_by_hill_dwn_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_warn_indcn_req_esc_warn_indcn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: abs_ctrl_actv_ctrl_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eng_st1_wd_sts_eng_st1_wd_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crs_ctrl_ovrdn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_steer_whl_hld_qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_drvr_sts_with_fac_qly_door_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: door_drvr_sts_with_fac_qly_fac_qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lat_ctrl_mod_cfmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: esc_ctrl_indcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pt_drvr_setg_drv_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: front_four_d_radar_sts_for_dim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_prsnt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wipr_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: stand_still_mgr_sts_for_hld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pt_drvr_setg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tptf_status_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tptf_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tptf_time_gap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_sod_lan_chg_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_drvr_sod_req_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: turn_indcr_monostable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_lane_chg_aut_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_lane_chg_with_navi_sw_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: nop_cofm_of_lan_chag_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: wipg_spd_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_safe_stop_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: hmi_sup_end_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: crash_sts_safe_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_park_not_allow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_seat_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: drvr_seat_snsr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_l3_lat_ctrl_sts_ad_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ad_l3_lgt_ctrl_sts_ad_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: accr_pedl_sts_flt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: amb_t_raw_amb_t_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: body_hei
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: le_frnt_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_frnt_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_frnt_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: le_frnt_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_frnt_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: le_frnt_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_re_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_re_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_re_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_re_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: le_re_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_re_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: le_re_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: le_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_frnt_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_frnt_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_frnt_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ri_frnt_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_frnt_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ri_frnt_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_re_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_re_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_re_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_re_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ri_re_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_re_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ri_re_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: occupy_mon_sts_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sun_roof_posn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: susp_posn_vert_le1_frnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: susp_posn_vert_le1_frnt_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: susp_posn_vert_le1_re
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: susp_posn_vert_le1_re_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: twli_bri_raw_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: twli_bri_raw_twli_bri_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_re_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: win_posn_sts_at_re_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk_sys_sts_ad_l3_brk_fall_bck
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk_sys_sts_brk_degradation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: brk_sys_sts_brk_sys_mod_cfmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tank_turn_mod_sts_tank_turn_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sfty_decel_group_safe_asy_sfty_ena_decel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: asy_emgy_lane_keep_aid_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_lane_keep_aid_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rcwm_brk_req_rcwm_brk_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_a_lat_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: asy_cnoa_crs_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: indcr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = deva_function_msgs__msg__BusToSmData;
    is_plain =
      (
      offsetof(DataType, indcr_sts) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _BusToSmData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_deva_function_msgs__msg__BusToSmData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BusToSmData = {
  "deva_function_msgs::msg",
  "BusToSmData",
  _BusToSmData__cdr_serialize,
  _BusToSmData__cdr_deserialize,
  _BusToSmData__get_serialized_size,
  _BusToSmData__max_serialized_size
};

static rosidl_message_type_support_t _BusToSmData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BusToSmData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, deva_function_msgs, msg, BusToSmData)() {
  return &_BusToSmData__type_support;
}

#if defined(__cplusplus)
}
#endif
