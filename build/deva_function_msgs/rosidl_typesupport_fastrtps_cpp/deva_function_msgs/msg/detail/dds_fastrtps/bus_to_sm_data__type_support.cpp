// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice
#include "deva_function_msgs/msg/detail/bus_to_sm_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "deva_function_msgs/msg/detail/bus_to_sm_data__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace deva_common_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const deva_common_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  deva_common_msgs::msg::Header &);
size_t get_serialized_size(
  const deva_common_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace deva_common_msgs


namespace deva_function_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_serialize(
  const deva_function_msgs::msg::BusToSmData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: tr_lock_sts
  cdr << ros_message.tr_lock_sts;
  // Member: door_drvr_lock_sts
  cdr << ros_message.door_drvr_lock_sts;
  // Member: door_pass_lock_sts
  cdr << ros_message.door_pass_lock_sts;
  // Member: door_le_re_lock_sts
  cdr << ros_message.door_le_re_lock_sts;
  // Member: door_ri_re_lock_sts
  cdr << ros_message.door_ri_re_lock_sts;
  // Member: brk_sys_sts_brk_sys_capability
  cdr << ros_message.brk_sys_sts_brk_sys_capability;
  // Member: rev
  {
    cdr << ros_message.rev;
  }
  // Member: calltype_and_sts_ecall_status
  cdr << ros_message.calltype_and_sts_ecall_status;
  // Member: blt_lock_st_at_drvr
  cdr << ros_message.blt_lock_st_at_drvr;
  // Member: blt_lock_st_err_sts_at_drvr
  cdr << ros_message.blt_lock_st_err_sts_at_drvr;
  // Member: esc_st_esc_st
  cdr << ros_message.esc_st_esc_st;
  // Member: prk_lat_lgt_failr
  cdr << ros_message.prk_lat_lgt_failr;
  // Member: road_incln_qly
  cdr << ros_message.road_incln_qly;
  // Member: veh_mtn_st
  cdr << ros_message.veh_mtn_st;
  // Member: whl_spd_circuml_frnt_le_qf
  cdr << ros_message.whl_spd_circuml_frnt_le_qf;
  // Member: whl_spd_circuml_frnt_ri_qf
  cdr << ros_message.whl_spd_circuml_frnt_ri_qf;
  // Member: whl_spd_circuml_re_le_qf
  cdr << ros_message.whl_spd_circuml_re_le_qf;
  // Member: whl_spd_circuml_re_ri_qf
  cdr << ros_message.whl_spd_circuml_re_ri_qf;
  // Member: gear_mov
  cdr << ros_message.gear_mov;
  // Member: accr_pedl_psd_accr_pedl_psd
  cdr << ros_message.accr_pedl_psd_accr_pedl_psd;
  // Member: accr_pedl_psd_sts
  cdr << ros_message.accr_pedl_psd_sts;
  // Member: typ_ext_req_to_upd_qf
  cdr << ros_message.typ_ext_req_to_upd_qf;
  // Member: trsm_park_lockd
  cdr << ros_message.trsm_park_lockd;
  // Member: door_drvr_sts
  cdr << ros_message.door_drvr_sts;
  // Member: door_le_re_sts
  cdr << ros_message.door_le_re_sts;
  // Member: door_pass_sts
  cdr << ros_message.door_pass_sts;
  // Member: door_ri_re_sts
  cdr << ros_message.door_ri_re_sts;
  // Member: hood_sts
  cdr << ros_message.hood_sts;
  // Member: mirr_fold_sts_at_drvr
  cdr << ros_message.mirr_fold_sts_at_drvr;
  // Member: mirr_fold_sts_at_pass
  cdr << ros_message.mirr_fold_sts_at_pass;
  // Member: tr_sts
  cdr << ros_message.tr_sts;
  // Member: trlr_prsnt
  cdr << ros_message.trlr_prsnt;
  // Member: veh_mod_mngt_glb_safe1_car_mod_sts1
  cdr << ros_message.veh_mod_mngt_glb_safe1_car_mod_sts1;
  // Member: veh_mod_mngt_glb_safe1_usg_mod_sts
  cdr << ros_message.veh_mod_mngt_glb_safe1_usg_mod_sts;
  // Member: steer_sts_to_park_assi
  cdr << ros_message.steer_sts_to_park_assi;
  // Member: indcr_typ_ext_req
  cdr << ros_message.indcr_typ_ext_req;
  // Member: rainfall_amnt
  cdr << ros_message.rainfall_amnt;
  // Member: egy_lvl_elec_mai
  cdr << ros_message.egy_lvl_elec_mai;
  // Member: le_frnt_tire_msg_p_warn_flg
  cdr << ros_message.le_frnt_tire_msg_p_warn_flg;
  // Member: le_re_tire_msg_p_warn_flg
  cdr << ros_message.le_re_tire_msg_p_warn_flg;
  // Member: ri_frnt_tire_msg_p_warn_flg
  cdr << ros_message.ri_frnt_tire_msg_p_warn_flg;
  // Member: ri_re_tire_msg_p_warn_flg
  cdr << ros_message.ri_re_tire_msg_p_warn_flg;
  // Member: sm_lat_shake_hand_state
  cdr << ros_message.sm_lat_shake_hand_state;
  // Member: sm_lon_shake_hand_state
  cdr << ros_message.sm_lon_shake_hand_state;
  // Member: rcv_ctrl_req
  cdr << ros_message.rcv_ctrl_req;
  // Member: rcv_steertrim_req
  cdr << ros_message.rcv_steertrim_req;
  // Member: mob_dev_rcv_req1_mob_dev_sts
  cdr << ros_message.mob_dev_rcv_req1_mob_dev_sts;
  // Member: dc_dc_actvd
  cdr << ros_message.dc_dc_actvd;
  // Member: steer_whl_snsr_ag
  cdr << ros_message.steer_whl_snsr_ag;
  // Member: ble_con_sts
  cdr << ros_message.ble_con_sts;
  // Member: twbr_lockd_posn
  cdr << ros_message.twbr_lockd_posn;
  // Member: full_elec_twbr_posn
  cdr << ros_message.full_elec_twbr_posn;
  // Member: vtsd_mode_sts
  cdr << ros_message.vtsd_mode_sts;
  // Member: key_read_sts_to_asm
  {
    cdr << ros_message.key_read_sts_to_asm;
  }
  // Member: mob_dev_rpa_req_rspa_ctrl
  cdr << ros_message.mob_dev_rpa_req_rspa_ctrl;
  // Member: mob_dev_rpa_req_rpa_req
  cdr << ros_message.mob_dev_rpa_req_rpa_req;
  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  cdr << ros_message.mob_dev_rpa_req_rpa_out_mode_sub_t;
  // Member: mob_dev_rpa_req_mob_dev_sts
  cdr << ros_message.mob_dev_rpa_req_mob_dev_sts;
  // Member: crab_mov_mod_sts
  cdr << ros_message.crab_mov_mod_sts;
  // Member: tank_turn_mod_sts
  cdr << ros_message.tank_turn_mod_sts;
  // Member: pass_seat_sts2
  cdr << ros_message.pass_seat_sts2;
  // Member: hmi_max_ev_mod
  cdr << ros_message.hmi_max_ev_mod;
  // Member: adcu_max_ev_mod
  cdr << ros_message.adcu_max_ev_mod;
  // Member: lamp_req_by_veh_hld
  cdr << ros_message.lamp_req_by_veh_hld;
  // Member: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  cdr << ros_message.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn;
  // Member: msg_req_by_hill_dwn_ctrl
  cdr << ros_message.msg_req_by_hill_dwn_ctrl;
  // Member: esc_warn_indcn_req_esc_warn_indcn_req
  cdr << ros_message.esc_warn_indcn_req_esc_warn_indcn_req;
  // Member: abs_ctrl_actv_ctrl_sts1
  cdr << ros_message.abs_ctrl_actv_ctrl_sts1;
  // Member: eng_st1_wd_sts_eng_st1_wd_sts
  cdr << ros_message.eng_st1_wd_sts_eng_st1_wd_sts;
  // Member: crs_ctrl_ovrdn
  cdr << ros_message.crs_ctrl_ovrdn;
  // Member: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  cdr << ros_message.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai;
  // Member: drvr_steer_whl_hld_qly
  cdr << ros_message.drvr_steer_whl_hld_qly;
  // Member: door_drvr_sts_with_fac_qly_door_sts
  cdr << ros_message.door_drvr_sts_with_fac_qly_door_sts;
  // Member: door_drvr_sts_with_fac_qly_fac_qly
  cdr << ros_message.door_drvr_sts_with_fac_qly_fac_qly;
  // Member: lat_ctrl_mod_cfmd
  cdr << ros_message.lat_ctrl_mod_cfmd;
  // Member: esc_ctrl_indcn
  cdr << ros_message.esc_ctrl_indcn;
  // Member: pt_drvr_setg_drv_mod_req
  cdr << ros_message.pt_drvr_setg_drv_mod_req;
  // Member: front_four_d_radar_sts_for_dim
  cdr << ros_message.front_four_d_radar_sts_for_dim;
  // Member: drvr_prsnt_sts
  cdr << ros_message.drvr_prsnt_sts;
  // Member: wipr_actv
  cdr << ros_message.wipr_actv;
  // Member: stand_still_mgr_sts_for_hld
  cdr << ros_message.stand_still_mgr_sts_for_hld;
  // Member: pt_drvr_setg
  cdr << ros_message.pt_drvr_setg;
  // Member: tptf_status_error
  cdr << ros_message.tptf_status_error;
  // Member: tptf_status
  cdr << ros_message.tptf_status;
  // Member: tptf_time_gap
  cdr << ros_message.tptf_time_gap;
  // Member: hmi_sod_lan_chg_switch
  cdr << ros_message.hmi_sod_lan_chg_switch;
  // Member: hmi_drvr_sod_req_chg
  cdr << ros_message.hmi_drvr_sod_req_chg;
  // Member: turn_indcr_monostable
  cdr << ros_message.turn_indcr_monostable;
  // Member: drvr_lane_chg_aut_actv_sts
  cdr << ros_message.drvr_lane_chg_aut_actv_sts;
  // Member: auto_lane_chg_with_navi_sw_onoff
  cdr << ros_message.auto_lane_chg_with_navi_sw_onoff;
  // Member: nop_cofm_of_lan_chag_onoff
  cdr << ros_message.nop_cofm_of_lan_chag_onoff;
  // Member: wipg_spd_info
  cdr << ros_message.wipg_spd_info;
  // Member: asy_safe_stop_sts
  cdr << ros_message.asy_safe_stop_sts;
  // Member: hmi_sup_end_mod
  cdr << ros_message.hmi_sup_end_mod;
  // Member: crash_sts_safe_sts
  cdr << ros_message.crash_sts_safe_sts;
  // Member: gear_park_not_allow
  cdr << ros_message.gear_park_not_allow;
  // Member: drvr_seat_sts
  cdr << ros_message.drvr_seat_sts;
  // Member: drvr_seat_snsr_sts
  cdr << ros_message.drvr_seat_snsr_sts;
  // Member: ad_l3_lat_ctrl_sts_ad_mod
  cdr << ros_message.ad_l3_lat_ctrl_sts_ad_mod;
  // Member: ad_l3_lgt_ctrl_sts_ad_mod
  cdr << ros_message.ad_l3_lgt_ctrl_sts_ad_mod;
  // Member: accr_pedl_sts_flt_sts
  cdr << ros_message.accr_pedl_sts_flt_sts;
  // Member: amb_t_raw_amb_t_val
  cdr << ros_message.amb_t_raw_amb_t_val;
  // Member: body_hei
  cdr << ros_message.body_hei;
  // Member: le_frnt_tire_msg_batt_lo_st
  cdr << ros_message.le_frnt_tire_msg_batt_lo_st;
  // Member: le_frnt_tire_msg_fast_lose_warn_flg
  cdr << ros_message.le_frnt_tire_msg_fast_lose_warn_flg;
  // Member: le_frnt_tire_msg_msg_old_flg
  cdr << ros_message.le_frnt_tire_msg_msg_old_flg;
  // Member: le_frnt_tire_msg_p
  cdr << ros_message.le_frnt_tire_msg_p;
  // Member: le_frnt_tire_msg_sys_warn_flg
  cdr << ros_message.le_frnt_tire_msg_sys_warn_flg;
  // Member: le_frnt_tire_msg_t
  cdr << ros_message.le_frnt_tire_msg_t;
  // Member: le_frnt_tire_msg_t_warn_flg
  cdr << ros_message.le_frnt_tire_msg_t_warn_flg;
  // Member: le_frnt_tire_msg_tire_fillg_assi_p_sts
  cdr << ros_message.le_frnt_tire_msg_tire_fillg_assi_p_sts;
  // Member: le_re_tire_msg_batt_lo_st
  cdr << ros_message.le_re_tire_msg_batt_lo_st;
  // Member: le_re_tire_msg_fast_lose_warn_flg
  cdr << ros_message.le_re_tire_msg_fast_lose_warn_flg;
  // Member: le_re_tire_msg_msg_old_flg
  cdr << ros_message.le_re_tire_msg_msg_old_flg;
  // Member: le_re_tire_msg_p
  cdr << ros_message.le_re_tire_msg_p;
  // Member: le_re_tire_msg_sys_warn_flg
  cdr << ros_message.le_re_tire_msg_sys_warn_flg;
  // Member: le_re_tire_msg_t
  cdr << ros_message.le_re_tire_msg_t;
  // Member: le_re_tire_msg_t_warn_flg
  cdr << ros_message.le_re_tire_msg_t_warn_flg;
  // Member: le_re_tire_msg_tire_fillg_assi_p_sts
  cdr << ros_message.le_re_tire_msg_tire_fillg_assi_p_sts;
  // Member: ri_frnt_tire_msg_batt_lo_st
  cdr << ros_message.ri_frnt_tire_msg_batt_lo_st;
  // Member: ri_frnt_tire_msg_fast_lose_warn_flg
  cdr << ros_message.ri_frnt_tire_msg_fast_lose_warn_flg;
  // Member: ri_frnt_tire_msg_msg_old_flg
  cdr << ros_message.ri_frnt_tire_msg_msg_old_flg;
  // Member: ri_frnt_tire_msg_p
  cdr << ros_message.ri_frnt_tire_msg_p;
  // Member: ri_frnt_tire_msg_sys_warn_flg
  cdr << ros_message.ri_frnt_tire_msg_sys_warn_flg;
  // Member: ri_frnt_tire_msg_t
  cdr << ros_message.ri_frnt_tire_msg_t;
  // Member: ri_frnt_tire_msg_t_warn_flg
  cdr << ros_message.ri_frnt_tire_msg_t_warn_flg;
  // Member: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  cdr << ros_message.ri_frnt_tire_msg_tire_fillg_assi_p_sts;
  // Member: ri_re_tire_msg_batt_lo_st
  cdr << ros_message.ri_re_tire_msg_batt_lo_st;
  // Member: ri_re_tire_msg_fast_lose_warn_flg
  cdr << ros_message.ri_re_tire_msg_fast_lose_warn_flg;
  // Member: ri_re_tire_msg_msg_old_flg
  cdr << ros_message.ri_re_tire_msg_msg_old_flg;
  // Member: ri_re_tire_msg_p
  cdr << ros_message.ri_re_tire_msg_p;
  // Member: ri_re_tire_msg_sys_warn_flg
  cdr << ros_message.ri_re_tire_msg_sys_warn_flg;
  // Member: ri_re_tire_msg_t
  cdr << ros_message.ri_re_tire_msg_t;
  // Member: ri_re_tire_msg_t_warn_flg
  cdr << ros_message.ri_re_tire_msg_t_warn_flg;
  // Member: ri_re_tire_msg_tire_fillg_assi_p_sts
  cdr << ros_message.ri_re_tire_msg_tire_fillg_assi_p_sts;
  // Member: occupy_mon_sts_drvr_sts
  cdr << ros_message.occupy_mon_sts_drvr_sts;
  // Member: sun_roof_posn_sts
  cdr << ros_message.sun_roof_posn_sts;
  // Member: susp_posn_vert_le1_frnt
  cdr << ros_message.susp_posn_vert_le1_frnt;
  // Member: susp_posn_vert_le1_frnt_qf
  cdr << ros_message.susp_posn_vert_le1_frnt_qf;
  // Member: susp_posn_vert_le1_re
  cdr << ros_message.susp_posn_vert_le1_re;
  // Member: susp_posn_vert_le1_re_qf
  cdr << ros_message.susp_posn_vert_le1_re_qf;
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  cdr << ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_frnt;
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  cdr << ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf;
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re
  cdr << ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_re;
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  cdr << ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf;
  // Member: twli_bri_raw_qf
  cdr << ros_message.twli_bri_raw_qf;
  // Member: twli_bri_raw_twli_bri_raw
  cdr << ros_message.twli_bri_raw_twli_bri_raw;
  // Member: win_posn_sts_at_drvr
  cdr << ros_message.win_posn_sts_at_drvr;
  // Member: win_posn_sts_at_pass
  cdr << ros_message.win_posn_sts_at_pass;
  // Member: win_posn_sts_at_re_le
  cdr << ros_message.win_posn_sts_at_re_le;
  // Member: win_posn_sts_at_re_ri
  cdr << ros_message.win_posn_sts_at_re_ri;
  // Member: brk_sys_sts_ad_l3_brk_fall_bck
  cdr << ros_message.brk_sys_sts_ad_l3_brk_fall_bck;
  // Member: brk_sys_sts_brk_degradation
  cdr << ros_message.brk_sys_sts_brk_degradation;
  // Member: brk_sys_sts_brk_sys_mod_cfmd
  cdr << ros_message.brk_sys_sts_brk_sys_mod_cfmd;
  // Member: tank_turn_mod_sts_tank_turn_mod_sts
  cdr << ros_message.tank_turn_mod_sts_tank_turn_mod_sts;
  // Member: sfty_decel_group_safe_asy_sfty_ena_decel
  cdr << ros_message.sfty_decel_group_safe_asy_sfty_ena_decel;
  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  cdr << ros_message.steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  // Member: asy_emgy_lane_keep_aid_sts
  cdr << ros_message.asy_emgy_lane_keep_aid_sts;
  // Member: asy_lane_keep_aid_sts
  cdr << ros_message.asy_lane_keep_aid_sts;
  // Member: rcwm_brk_req_rcwm_brk_req
  cdr << ros_message.rcwm_brk_req_rcwm_brk_req;
  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  cdr << ros_message.asy_a_lgt_sts_asy_a_lgt_sts;
  // Member: asy_a_lat_indcr
  cdr << ros_message.asy_a_lat_indcr;
  // Member: asy_cnoa_crs_sts
  cdr << ros_message.asy_cnoa_crs_sts;
  // Member: indcr_sts
  cdr << ros_message.indcr_sts;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  deva_function_msgs::msg::BusToSmData & ros_message)
{
  // Member: header
  deva_common_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: tr_lock_sts
  cdr >> ros_message.tr_lock_sts;

  // Member: door_drvr_lock_sts
  cdr >> ros_message.door_drvr_lock_sts;

  // Member: door_pass_lock_sts
  cdr >> ros_message.door_pass_lock_sts;

  // Member: door_le_re_lock_sts
  cdr >> ros_message.door_le_re_lock_sts;

  // Member: door_ri_re_lock_sts
  cdr >> ros_message.door_ri_re_lock_sts;

  // Member: brk_sys_sts_brk_sys_capability
  cdr >> ros_message.brk_sys_sts_brk_sys_capability;

  // Member: rev
  {
    cdr >> ros_message.rev;
  }

  // Member: calltype_and_sts_ecall_status
  cdr >> ros_message.calltype_and_sts_ecall_status;

  // Member: blt_lock_st_at_drvr
  cdr >> ros_message.blt_lock_st_at_drvr;

  // Member: blt_lock_st_err_sts_at_drvr
  cdr >> ros_message.blt_lock_st_err_sts_at_drvr;

  // Member: esc_st_esc_st
  cdr >> ros_message.esc_st_esc_st;

  // Member: prk_lat_lgt_failr
  cdr >> ros_message.prk_lat_lgt_failr;

  // Member: road_incln_qly
  cdr >> ros_message.road_incln_qly;

  // Member: veh_mtn_st
  cdr >> ros_message.veh_mtn_st;

  // Member: whl_spd_circuml_frnt_le_qf
  cdr >> ros_message.whl_spd_circuml_frnt_le_qf;

  // Member: whl_spd_circuml_frnt_ri_qf
  cdr >> ros_message.whl_spd_circuml_frnt_ri_qf;

  // Member: whl_spd_circuml_re_le_qf
  cdr >> ros_message.whl_spd_circuml_re_le_qf;

  // Member: whl_spd_circuml_re_ri_qf
  cdr >> ros_message.whl_spd_circuml_re_ri_qf;

  // Member: gear_mov
  cdr >> ros_message.gear_mov;

  // Member: accr_pedl_psd_accr_pedl_psd
  cdr >> ros_message.accr_pedl_psd_accr_pedl_psd;

  // Member: accr_pedl_psd_sts
  cdr >> ros_message.accr_pedl_psd_sts;

  // Member: typ_ext_req_to_upd_qf
  cdr >> ros_message.typ_ext_req_to_upd_qf;

  // Member: trsm_park_lockd
  cdr >> ros_message.trsm_park_lockd;

  // Member: door_drvr_sts
  cdr >> ros_message.door_drvr_sts;

  // Member: door_le_re_sts
  cdr >> ros_message.door_le_re_sts;

  // Member: door_pass_sts
  cdr >> ros_message.door_pass_sts;

  // Member: door_ri_re_sts
  cdr >> ros_message.door_ri_re_sts;

  // Member: hood_sts
  cdr >> ros_message.hood_sts;

  // Member: mirr_fold_sts_at_drvr
  cdr >> ros_message.mirr_fold_sts_at_drvr;

  // Member: mirr_fold_sts_at_pass
  cdr >> ros_message.mirr_fold_sts_at_pass;

  // Member: tr_sts
  cdr >> ros_message.tr_sts;

  // Member: trlr_prsnt
  cdr >> ros_message.trlr_prsnt;

  // Member: veh_mod_mngt_glb_safe1_car_mod_sts1
  cdr >> ros_message.veh_mod_mngt_glb_safe1_car_mod_sts1;

  // Member: veh_mod_mngt_glb_safe1_usg_mod_sts
  cdr >> ros_message.veh_mod_mngt_glb_safe1_usg_mod_sts;

  // Member: steer_sts_to_park_assi
  cdr >> ros_message.steer_sts_to_park_assi;

  // Member: indcr_typ_ext_req
  cdr >> ros_message.indcr_typ_ext_req;

  // Member: rainfall_amnt
  cdr >> ros_message.rainfall_amnt;

  // Member: egy_lvl_elec_mai
  cdr >> ros_message.egy_lvl_elec_mai;

  // Member: le_frnt_tire_msg_p_warn_flg
  cdr >> ros_message.le_frnt_tire_msg_p_warn_flg;

  // Member: le_re_tire_msg_p_warn_flg
  cdr >> ros_message.le_re_tire_msg_p_warn_flg;

  // Member: ri_frnt_tire_msg_p_warn_flg
  cdr >> ros_message.ri_frnt_tire_msg_p_warn_flg;

  // Member: ri_re_tire_msg_p_warn_flg
  cdr >> ros_message.ri_re_tire_msg_p_warn_flg;

  // Member: sm_lat_shake_hand_state
  cdr >> ros_message.sm_lat_shake_hand_state;

  // Member: sm_lon_shake_hand_state
  cdr >> ros_message.sm_lon_shake_hand_state;

  // Member: rcv_ctrl_req
  cdr >> ros_message.rcv_ctrl_req;

  // Member: rcv_steertrim_req
  cdr >> ros_message.rcv_steertrim_req;

  // Member: mob_dev_rcv_req1_mob_dev_sts
  cdr >> ros_message.mob_dev_rcv_req1_mob_dev_sts;

  // Member: dc_dc_actvd
  cdr >> ros_message.dc_dc_actvd;

  // Member: steer_whl_snsr_ag
  cdr >> ros_message.steer_whl_snsr_ag;

  // Member: ble_con_sts
  cdr >> ros_message.ble_con_sts;

  // Member: twbr_lockd_posn
  cdr >> ros_message.twbr_lockd_posn;

  // Member: full_elec_twbr_posn
  cdr >> ros_message.full_elec_twbr_posn;

  // Member: vtsd_mode_sts
  cdr >> ros_message.vtsd_mode_sts;

  // Member: key_read_sts_to_asm
  {
    cdr >> ros_message.key_read_sts_to_asm;
  }

  // Member: mob_dev_rpa_req_rspa_ctrl
  cdr >> ros_message.mob_dev_rpa_req_rspa_ctrl;

  // Member: mob_dev_rpa_req_rpa_req
  cdr >> ros_message.mob_dev_rpa_req_rpa_req;

  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  cdr >> ros_message.mob_dev_rpa_req_rpa_out_mode_sub_t;

  // Member: mob_dev_rpa_req_mob_dev_sts
  cdr >> ros_message.mob_dev_rpa_req_mob_dev_sts;

  // Member: crab_mov_mod_sts
  cdr >> ros_message.crab_mov_mod_sts;

  // Member: tank_turn_mod_sts
  cdr >> ros_message.tank_turn_mod_sts;

  // Member: pass_seat_sts2
  cdr >> ros_message.pass_seat_sts2;

  // Member: hmi_max_ev_mod
  cdr >> ros_message.hmi_max_ev_mod;

  // Member: adcu_max_ev_mod
  cdr >> ros_message.adcu_max_ev_mod;

  // Member: lamp_req_by_veh_hld
  cdr >> ros_message.lamp_req_by_veh_hld;

  // Member: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  cdr >> ros_message.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn;

  // Member: msg_req_by_hill_dwn_ctrl
  cdr >> ros_message.msg_req_by_hill_dwn_ctrl;

  // Member: esc_warn_indcn_req_esc_warn_indcn_req
  cdr >> ros_message.esc_warn_indcn_req_esc_warn_indcn_req;

  // Member: abs_ctrl_actv_ctrl_sts1
  cdr >> ros_message.abs_ctrl_actv_ctrl_sts1;

  // Member: eng_st1_wd_sts_eng_st1_wd_sts
  cdr >> ros_message.eng_st1_wd_sts_eng_st1_wd_sts;

  // Member: crs_ctrl_ovrdn
  cdr >> ros_message.crs_ctrl_ovrdn;

  // Member: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  cdr >> ros_message.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai;

  // Member: drvr_steer_whl_hld_qly
  cdr >> ros_message.drvr_steer_whl_hld_qly;

  // Member: door_drvr_sts_with_fac_qly_door_sts
  cdr >> ros_message.door_drvr_sts_with_fac_qly_door_sts;

  // Member: door_drvr_sts_with_fac_qly_fac_qly
  cdr >> ros_message.door_drvr_sts_with_fac_qly_fac_qly;

  // Member: lat_ctrl_mod_cfmd
  cdr >> ros_message.lat_ctrl_mod_cfmd;

  // Member: esc_ctrl_indcn
  cdr >> ros_message.esc_ctrl_indcn;

  // Member: pt_drvr_setg_drv_mod_req
  cdr >> ros_message.pt_drvr_setg_drv_mod_req;

  // Member: front_four_d_radar_sts_for_dim
  cdr >> ros_message.front_four_d_radar_sts_for_dim;

  // Member: drvr_prsnt_sts
  cdr >> ros_message.drvr_prsnt_sts;

  // Member: wipr_actv
  cdr >> ros_message.wipr_actv;

  // Member: stand_still_mgr_sts_for_hld
  cdr >> ros_message.stand_still_mgr_sts_for_hld;

  // Member: pt_drvr_setg
  cdr >> ros_message.pt_drvr_setg;

  // Member: tptf_status_error
  cdr >> ros_message.tptf_status_error;

  // Member: tptf_status
  cdr >> ros_message.tptf_status;

  // Member: tptf_time_gap
  cdr >> ros_message.tptf_time_gap;

  // Member: hmi_sod_lan_chg_switch
  cdr >> ros_message.hmi_sod_lan_chg_switch;

  // Member: hmi_drvr_sod_req_chg
  cdr >> ros_message.hmi_drvr_sod_req_chg;

  // Member: turn_indcr_monostable
  cdr >> ros_message.turn_indcr_monostable;

  // Member: drvr_lane_chg_aut_actv_sts
  cdr >> ros_message.drvr_lane_chg_aut_actv_sts;

  // Member: auto_lane_chg_with_navi_sw_onoff
  cdr >> ros_message.auto_lane_chg_with_navi_sw_onoff;

  // Member: nop_cofm_of_lan_chag_onoff
  cdr >> ros_message.nop_cofm_of_lan_chag_onoff;

  // Member: wipg_spd_info
  cdr >> ros_message.wipg_spd_info;

  // Member: asy_safe_stop_sts
  cdr >> ros_message.asy_safe_stop_sts;

  // Member: hmi_sup_end_mod
  cdr >> ros_message.hmi_sup_end_mod;

  // Member: crash_sts_safe_sts
  cdr >> ros_message.crash_sts_safe_sts;

  // Member: gear_park_not_allow
  cdr >> ros_message.gear_park_not_allow;

  // Member: drvr_seat_sts
  cdr >> ros_message.drvr_seat_sts;

  // Member: drvr_seat_snsr_sts
  cdr >> ros_message.drvr_seat_snsr_sts;

  // Member: ad_l3_lat_ctrl_sts_ad_mod
  cdr >> ros_message.ad_l3_lat_ctrl_sts_ad_mod;

  // Member: ad_l3_lgt_ctrl_sts_ad_mod
  cdr >> ros_message.ad_l3_lgt_ctrl_sts_ad_mod;

  // Member: accr_pedl_sts_flt_sts
  cdr >> ros_message.accr_pedl_sts_flt_sts;

  // Member: amb_t_raw_amb_t_val
  cdr >> ros_message.amb_t_raw_amb_t_val;

  // Member: body_hei
  cdr >> ros_message.body_hei;

  // Member: le_frnt_tire_msg_batt_lo_st
  cdr >> ros_message.le_frnt_tire_msg_batt_lo_st;

  // Member: le_frnt_tire_msg_fast_lose_warn_flg
  cdr >> ros_message.le_frnt_tire_msg_fast_lose_warn_flg;

  // Member: le_frnt_tire_msg_msg_old_flg
  cdr >> ros_message.le_frnt_tire_msg_msg_old_flg;

  // Member: le_frnt_tire_msg_p
  cdr >> ros_message.le_frnt_tire_msg_p;

  // Member: le_frnt_tire_msg_sys_warn_flg
  cdr >> ros_message.le_frnt_tire_msg_sys_warn_flg;

  // Member: le_frnt_tire_msg_t
  cdr >> ros_message.le_frnt_tire_msg_t;

  // Member: le_frnt_tire_msg_t_warn_flg
  cdr >> ros_message.le_frnt_tire_msg_t_warn_flg;

  // Member: le_frnt_tire_msg_tire_fillg_assi_p_sts
  cdr >> ros_message.le_frnt_tire_msg_tire_fillg_assi_p_sts;

  // Member: le_re_tire_msg_batt_lo_st
  cdr >> ros_message.le_re_tire_msg_batt_lo_st;

  // Member: le_re_tire_msg_fast_lose_warn_flg
  cdr >> ros_message.le_re_tire_msg_fast_lose_warn_flg;

  // Member: le_re_tire_msg_msg_old_flg
  cdr >> ros_message.le_re_tire_msg_msg_old_flg;

  // Member: le_re_tire_msg_p
  cdr >> ros_message.le_re_tire_msg_p;

  // Member: le_re_tire_msg_sys_warn_flg
  cdr >> ros_message.le_re_tire_msg_sys_warn_flg;

  // Member: le_re_tire_msg_t
  cdr >> ros_message.le_re_tire_msg_t;

  // Member: le_re_tire_msg_t_warn_flg
  cdr >> ros_message.le_re_tire_msg_t_warn_flg;

  // Member: le_re_tire_msg_tire_fillg_assi_p_sts
  cdr >> ros_message.le_re_tire_msg_tire_fillg_assi_p_sts;

  // Member: ri_frnt_tire_msg_batt_lo_st
  cdr >> ros_message.ri_frnt_tire_msg_batt_lo_st;

  // Member: ri_frnt_tire_msg_fast_lose_warn_flg
  cdr >> ros_message.ri_frnt_tire_msg_fast_lose_warn_flg;

  // Member: ri_frnt_tire_msg_msg_old_flg
  cdr >> ros_message.ri_frnt_tire_msg_msg_old_flg;

  // Member: ri_frnt_tire_msg_p
  cdr >> ros_message.ri_frnt_tire_msg_p;

  // Member: ri_frnt_tire_msg_sys_warn_flg
  cdr >> ros_message.ri_frnt_tire_msg_sys_warn_flg;

  // Member: ri_frnt_tire_msg_t
  cdr >> ros_message.ri_frnt_tire_msg_t;

  // Member: ri_frnt_tire_msg_t_warn_flg
  cdr >> ros_message.ri_frnt_tire_msg_t_warn_flg;

  // Member: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  cdr >> ros_message.ri_frnt_tire_msg_tire_fillg_assi_p_sts;

  // Member: ri_re_tire_msg_batt_lo_st
  cdr >> ros_message.ri_re_tire_msg_batt_lo_st;

  // Member: ri_re_tire_msg_fast_lose_warn_flg
  cdr >> ros_message.ri_re_tire_msg_fast_lose_warn_flg;

  // Member: ri_re_tire_msg_msg_old_flg
  cdr >> ros_message.ri_re_tire_msg_msg_old_flg;

  // Member: ri_re_tire_msg_p
  cdr >> ros_message.ri_re_tire_msg_p;

  // Member: ri_re_tire_msg_sys_warn_flg
  cdr >> ros_message.ri_re_tire_msg_sys_warn_flg;

  // Member: ri_re_tire_msg_t
  cdr >> ros_message.ri_re_tire_msg_t;

  // Member: ri_re_tire_msg_t_warn_flg
  cdr >> ros_message.ri_re_tire_msg_t_warn_flg;

  // Member: ri_re_tire_msg_tire_fillg_assi_p_sts
  cdr >> ros_message.ri_re_tire_msg_tire_fillg_assi_p_sts;

  // Member: occupy_mon_sts_drvr_sts
  cdr >> ros_message.occupy_mon_sts_drvr_sts;

  // Member: sun_roof_posn_sts
  cdr >> ros_message.sun_roof_posn_sts;

  // Member: susp_posn_vert_le1_frnt
  cdr >> ros_message.susp_posn_vert_le1_frnt;

  // Member: susp_posn_vert_le1_frnt_qf
  cdr >> ros_message.susp_posn_vert_le1_frnt_qf;

  // Member: susp_posn_vert_le1_re
  cdr >> ros_message.susp_posn_vert_le1_re;

  // Member: susp_posn_vert_le1_re_qf
  cdr >> ros_message.susp_posn_vert_le1_re_qf;

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  cdr >> ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_frnt;

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  cdr >> ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf;

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re
  cdr >> ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_re;

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  cdr >> ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf;

  // Member: twli_bri_raw_qf
  cdr >> ros_message.twli_bri_raw_qf;

  // Member: twli_bri_raw_twli_bri_raw
  cdr >> ros_message.twli_bri_raw_twli_bri_raw;

  // Member: win_posn_sts_at_drvr
  cdr >> ros_message.win_posn_sts_at_drvr;

  // Member: win_posn_sts_at_pass
  cdr >> ros_message.win_posn_sts_at_pass;

  // Member: win_posn_sts_at_re_le
  cdr >> ros_message.win_posn_sts_at_re_le;

  // Member: win_posn_sts_at_re_ri
  cdr >> ros_message.win_posn_sts_at_re_ri;

  // Member: brk_sys_sts_ad_l3_brk_fall_bck
  cdr >> ros_message.brk_sys_sts_ad_l3_brk_fall_bck;

  // Member: brk_sys_sts_brk_degradation
  cdr >> ros_message.brk_sys_sts_brk_degradation;

  // Member: brk_sys_sts_brk_sys_mod_cfmd
  cdr >> ros_message.brk_sys_sts_brk_sys_mod_cfmd;

  // Member: tank_turn_mod_sts_tank_turn_mod_sts
  cdr >> ros_message.tank_turn_mod_sts_tank_turn_mod_sts;

  // Member: sfty_decel_group_safe_asy_sfty_ena_decel
  cdr >> ros_message.sfty_decel_group_safe_asy_sfty_ena_decel;

  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  cdr >> ros_message.steer_tq_addl_for_ema_steer_tq_addl_for_ema;

  // Member: asy_emgy_lane_keep_aid_sts
  cdr >> ros_message.asy_emgy_lane_keep_aid_sts;

  // Member: asy_lane_keep_aid_sts
  cdr >> ros_message.asy_lane_keep_aid_sts;

  // Member: rcwm_brk_req_rcwm_brk_req
  cdr >> ros_message.rcwm_brk_req_rcwm_brk_req;

  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  cdr >> ros_message.asy_a_lgt_sts_asy_a_lgt_sts;

  // Member: asy_a_lat_indcr
  cdr >> ros_message.asy_a_lat_indcr;

  // Member: asy_cnoa_crs_sts
  cdr >> ros_message.asy_cnoa_crs_sts;

  // Member: indcr_sts
  cdr >> ros_message.indcr_sts;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
get_serialized_size(
  const deva_function_msgs::msg::BusToSmData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    deva_common_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: tr_lock_sts
  {
    size_t item_size = sizeof(ros_message.tr_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_drvr_lock_sts
  {
    size_t item_size = sizeof(ros_message.door_drvr_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_pass_lock_sts
  {
    size_t item_size = sizeof(ros_message.door_pass_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_le_re_lock_sts
  {
    size_t item_size = sizeof(ros_message.door_le_re_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_ri_re_lock_sts
  {
    size_t item_size = sizeof(ros_message.door_ri_re_lock_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_sys_sts_brk_sys_capability
  {
    size_t item_size = sizeof(ros_message.brk_sys_sts_brk_sys_capability);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rev
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.rev[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calltype_and_sts_ecall_status
  {
    size_t item_size = sizeof(ros_message.calltype_and_sts_ecall_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blt_lock_st_at_drvr
  {
    size_t item_size = sizeof(ros_message.blt_lock_st_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blt_lock_st_err_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message.blt_lock_st_err_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_st_esc_st
  {
    size_t item_size = sizeof(ros_message.esc_st_esc_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prk_lat_lgt_failr
  {
    size_t item_size = sizeof(ros_message.prk_lat_lgt_failr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: road_incln_qly
  {
    size_t item_size = sizeof(ros_message.road_incln_qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_mtn_st
  {
    size_t item_size = sizeof(ros_message.veh_mtn_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: whl_spd_circuml_frnt_le_qf
  {
    size_t item_size = sizeof(ros_message.whl_spd_circuml_frnt_le_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: whl_spd_circuml_frnt_ri_qf
  {
    size_t item_size = sizeof(ros_message.whl_spd_circuml_frnt_ri_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: whl_spd_circuml_re_le_qf
  {
    size_t item_size = sizeof(ros_message.whl_spd_circuml_re_le_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: whl_spd_circuml_re_ri_qf
  {
    size_t item_size = sizeof(ros_message.whl_spd_circuml_re_ri_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_mov
  {
    size_t item_size = sizeof(ros_message.gear_mov);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accr_pedl_psd_accr_pedl_psd
  {
    size_t item_size = sizeof(ros_message.accr_pedl_psd_accr_pedl_psd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accr_pedl_psd_sts
  {
    size_t item_size = sizeof(ros_message.accr_pedl_psd_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: typ_ext_req_to_upd_qf
  {
    size_t item_size = sizeof(ros_message.typ_ext_req_to_upd_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trsm_park_lockd
  {
    size_t item_size = sizeof(ros_message.trsm_park_lockd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_drvr_sts
  {
    size_t item_size = sizeof(ros_message.door_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_le_re_sts
  {
    size_t item_size = sizeof(ros_message.door_le_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_pass_sts
  {
    size_t item_size = sizeof(ros_message.door_pass_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_ri_re_sts
  {
    size_t item_size = sizeof(ros_message.door_ri_re_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hood_sts
  {
    size_t item_size = sizeof(ros_message.hood_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirr_fold_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message.mirr_fold_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mirr_fold_sts_at_pass
  {
    size_t item_size = sizeof(ros_message.mirr_fold_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tr_sts
  {
    size_t item_size = sizeof(ros_message.tr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: trlr_prsnt
  {
    size_t item_size = sizeof(ros_message.trlr_prsnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    size_t item_size = sizeof(ros_message.veh_mod_mngt_glb_safe1_car_mod_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    size_t item_size = sizeof(ros_message.veh_mod_mngt_glb_safe1_usg_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_sts_to_park_assi
  {
    size_t item_size = sizeof(ros_message.steer_sts_to_park_assi);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcr_typ_ext_req
  {
    size_t item_size = sizeof(ros_message.indcr_typ_ext_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rainfall_amnt
  {
    size_t item_size = sizeof(ros_message.rainfall_amnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: egy_lvl_elec_mai
  {
    size_t item_size = sizeof(ros_message.egy_lvl_elec_mai);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_p_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_p_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_lat_shake_hand_state
  {
    size_t item_size = sizeof(ros_message.sm_lat_shake_hand_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sm_lon_shake_hand_state
  {
    size_t item_size = sizeof(ros_message.sm_lon_shake_hand_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rcv_ctrl_req
  {
    size_t item_size = sizeof(ros_message.rcv_ctrl_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rcv_steertrim_req
  {
    size_t item_size = sizeof(ros_message.rcv_steertrim_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rcv_req1_mob_dev_sts
  {
    size_t item_size = sizeof(ros_message.mob_dev_rcv_req1_mob_dev_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dc_dc_actvd
  {
    size_t item_size = sizeof(ros_message.dc_dc_actvd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_whl_snsr_ag
  {
    size_t item_size = sizeof(ros_message.steer_whl_snsr_ag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ble_con_sts
  {
    size_t item_size = sizeof(ros_message.ble_con_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: twbr_lockd_posn
  {
    size_t item_size = sizeof(ros_message.twbr_lockd_posn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: full_elec_twbr_posn
  {
    size_t item_size = sizeof(ros_message.full_elec_twbr_posn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtsd_mode_sts
  {
    size_t item_size = sizeof(ros_message.vtsd_mode_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: key_read_sts_to_asm
  {
    size_t array_size = 12;
    size_t item_size = sizeof(ros_message.key_read_sts_to_asm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_rspa_ctrl
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_rspa_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_rpa_req
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_rpa_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_rpa_out_mode_sub_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mob_dev_rpa_req_mob_dev_sts
  {
    size_t item_size = sizeof(ros_message.mob_dev_rpa_req_mob_dev_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crab_mov_mod_sts
  {
    size_t item_size = sizeof(ros_message.crab_mov_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tank_turn_mod_sts
  {
    size_t item_size = sizeof(ros_message.tank_turn_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pass_seat_sts2
  {
    size_t item_size = sizeof(ros_message.pass_seat_sts2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_max_ev_mod
  {
    size_t item_size = sizeof(ros_message.hmi_max_ev_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: adcu_max_ev_mod
  {
    size_t item_size = sizeof(ros_message.adcu_max_ev_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lamp_req_by_veh_hld
  {
    size_t item_size = sizeof(ros_message.lamp_req_by_veh_hld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    size_t item_size = sizeof(ros_message.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: msg_req_by_hill_dwn_ctrl
  {
    size_t item_size = sizeof(ros_message.msg_req_by_hill_dwn_ctrl);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_warn_indcn_req_esc_warn_indcn_req
  {
    size_t item_size = sizeof(ros_message.esc_warn_indcn_req_esc_warn_indcn_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: abs_ctrl_actv_ctrl_sts1
  {
    size_t item_size = sizeof(ros_message.abs_ctrl_actv_ctrl_sts1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eng_st1_wd_sts_eng_st1_wd_sts
  {
    size_t item_size = sizeof(ros_message.eng_st1_wd_sts_eng_st1_wd_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crs_ctrl_ovrdn
  {
    size_t item_size = sizeof(ros_message.crs_ctrl_ovrdn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    size_t item_size = sizeof(ros_message.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_steer_whl_hld_qly
  {
    size_t item_size = sizeof(ros_message.drvr_steer_whl_hld_qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_drvr_sts_with_fac_qly_door_sts
  {
    size_t item_size = sizeof(ros_message.door_drvr_sts_with_fac_qly_door_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: door_drvr_sts_with_fac_qly_fac_qly
  {
    size_t item_size = sizeof(ros_message.door_drvr_sts_with_fac_qly_fac_qly);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lat_ctrl_mod_cfmd
  {
    size_t item_size = sizeof(ros_message.lat_ctrl_mod_cfmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: esc_ctrl_indcn
  {
    size_t item_size = sizeof(ros_message.esc_ctrl_indcn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_drvr_setg_drv_mod_req
  {
    size_t item_size = sizeof(ros_message.pt_drvr_setg_drv_mod_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_four_d_radar_sts_for_dim
  {
    size_t item_size = sizeof(ros_message.front_four_d_radar_sts_for_dim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_prsnt_sts
  {
    size_t item_size = sizeof(ros_message.drvr_prsnt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wipr_actv
  {
    size_t item_size = sizeof(ros_message.wipr_actv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stand_still_mgr_sts_for_hld
  {
    size_t item_size = sizeof(ros_message.stand_still_mgr_sts_for_hld);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pt_drvr_setg
  {
    size_t item_size = sizeof(ros_message.pt_drvr_setg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tptf_status_error
  {
    size_t item_size = sizeof(ros_message.tptf_status_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tptf_status
  {
    size_t item_size = sizeof(ros_message.tptf_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tptf_time_gap
  {
    size_t item_size = sizeof(ros_message.tptf_time_gap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_sod_lan_chg_switch
  {
    size_t item_size = sizeof(ros_message.hmi_sod_lan_chg_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_drvr_sod_req_chg
  {
    size_t item_size = sizeof(ros_message.hmi_drvr_sod_req_chg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: turn_indcr_monostable
  {
    size_t item_size = sizeof(ros_message.turn_indcr_monostable);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_lane_chg_aut_actv_sts
  {
    size_t item_size = sizeof(ros_message.drvr_lane_chg_aut_actv_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_lane_chg_with_navi_sw_onoff
  {
    size_t item_size = sizeof(ros_message.auto_lane_chg_with_navi_sw_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: nop_cofm_of_lan_chag_onoff
  {
    size_t item_size = sizeof(ros_message.nop_cofm_of_lan_chag_onoff);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wipg_spd_info
  {
    size_t item_size = sizeof(ros_message.wipg_spd_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_safe_stop_sts
  {
    size_t item_size = sizeof(ros_message.asy_safe_stop_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hmi_sup_end_mod
  {
    size_t item_size = sizeof(ros_message.hmi_sup_end_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crash_sts_safe_sts
  {
    size_t item_size = sizeof(ros_message.crash_sts_safe_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_park_not_allow
  {
    size_t item_size = sizeof(ros_message.gear_park_not_allow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_seat_sts
  {
    size_t item_size = sizeof(ros_message.drvr_seat_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drvr_seat_snsr_sts
  {
    size_t item_size = sizeof(ros_message.drvr_seat_snsr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_l3_lat_ctrl_sts_ad_mod
  {
    size_t item_size = sizeof(ros_message.ad_l3_lat_ctrl_sts_ad_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ad_l3_lgt_ctrl_sts_ad_mod
  {
    size_t item_size = sizeof(ros_message.ad_l3_lgt_ctrl_sts_ad_mod);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accr_pedl_sts_flt_sts
  {
    size_t item_size = sizeof(ros_message.accr_pedl_sts_flt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: amb_t_raw_amb_t_val
  {
    size_t item_size = sizeof(ros_message.amb_t_raw_amb_t_val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: body_hei
  {
    size_t item_size = sizeof(ros_message.body_hei);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_p
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_t
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message.le_frnt_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_p
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_t
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: le_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message.le_re_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_p
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_t
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message.ri_frnt_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_batt_lo_st
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_batt_lo_st);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_fast_lose_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_fast_lose_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_msg_old_flg
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_msg_old_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_p
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_p);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_sys_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_sys_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_t
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_t);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_t_warn_flg
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_t_warn_flg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t item_size = sizeof(ros_message.ri_re_tire_msg_tire_fillg_assi_p_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: occupy_mon_sts_drvr_sts
  {
    size_t item_size = sizeof(ros_message.occupy_mon_sts_drvr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sun_roof_posn_sts
  {
    size_t item_size = sizeof(ros_message.sun_roof_posn_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_le1_frnt
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_le1_frnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_le1_frnt_qf
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_le1_frnt_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_le1_re
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_le1_re);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_le1_re_qf
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_le1_re_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_frnt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_re);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    size_t item_size = sizeof(ros_message.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: twli_bri_raw_qf
  {
    size_t item_size = sizeof(ros_message.twli_bri_raw_qf);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: twli_bri_raw_twli_bri_raw
  {
    size_t item_size = sizeof(ros_message.twli_bri_raw_twli_bri_raw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_drvr
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_drvr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_pass
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_pass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_re_le
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_re_le);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: win_posn_sts_at_re_ri
  {
    size_t item_size = sizeof(ros_message.win_posn_sts_at_re_ri);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_sys_sts_ad_l3_brk_fall_bck
  {
    size_t item_size = sizeof(ros_message.brk_sys_sts_ad_l3_brk_fall_bck);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_sys_sts_brk_degradation
  {
    size_t item_size = sizeof(ros_message.brk_sys_sts_brk_degradation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brk_sys_sts_brk_sys_mod_cfmd
  {
    size_t item_size = sizeof(ros_message.brk_sys_sts_brk_sys_mod_cfmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tank_turn_mod_sts_tank_turn_mod_sts
  {
    size_t item_size = sizeof(ros_message.tank_turn_mod_sts_tank_turn_mod_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sfty_decel_group_safe_asy_sfty_ena_decel
  {
    size_t item_size = sizeof(ros_message.sfty_decel_group_safe_asy_sfty_ena_decel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t item_size = sizeof(ros_message.steer_tq_addl_for_ema_steer_tq_addl_for_ema);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_emgy_lane_keep_aid_sts
  {
    size_t item_size = sizeof(ros_message.asy_emgy_lane_keep_aid_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_lane_keep_aid_sts
  {
    size_t item_size = sizeof(ros_message.asy_lane_keep_aid_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rcwm_brk_req_rcwm_brk_req
  {
    size_t item_size = sizeof(ros_message.rcwm_brk_req_rcwm_brk_req);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t item_size = sizeof(ros_message.asy_a_lgt_sts_asy_a_lgt_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_a_lat_indcr
  {
    size_t item_size = sizeof(ros_message.asy_a_lat_indcr);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: asy_cnoa_crs_sts
  {
    size_t item_size = sizeof(ros_message.asy_cnoa_crs_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: indcr_sts
  {
    size_t item_size = sizeof(ros_message.indcr_sts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_deva_function_msgs
max_serialized_size_BusToSmData(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        deva_common_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: tr_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_drvr_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_pass_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_le_re_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_ri_re_lock_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk_sys_sts_brk_sys_capability
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rev
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: calltype_and_sts_ecall_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blt_lock_st_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: blt_lock_st_err_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc_st_esc_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: prk_lat_lgt_failr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: road_incln_qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_mtn_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: whl_spd_circuml_frnt_le_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: whl_spd_circuml_frnt_ri_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: whl_spd_circuml_re_le_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: whl_spd_circuml_re_ri_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_mov
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accr_pedl_psd_accr_pedl_psd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accr_pedl_psd_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: typ_ext_req_to_upd_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trsm_park_lockd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_le_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_pass_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_ri_re_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hood_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mirr_fold_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mirr_fold_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: trlr_prsnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_sts_to_park_assi
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: indcr_typ_ext_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rainfall_amnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: egy_lvl_elec_mai
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_frnt_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_re_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_frnt_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_re_tire_msg_p_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_lat_shake_hand_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sm_lon_shake_hand_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rcv_ctrl_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rcv_steertrim_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rcv_req1_mob_dev_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dc_dc_actvd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_whl_snsr_ag
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ble_con_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: twbr_lockd_posn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: full_elec_twbr_posn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtsd_mode_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: key_read_sts_to_asm
  {
    size_t array_size = 12;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_rspa_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_rpa_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mob_dev_rpa_req_mob_dev_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: crab_mov_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tank_turn_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pass_seat_sts2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_max_ev_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adcu_max_ev_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lamp_req_by_veh_hld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: msg_req_by_hill_dwn_ctrl
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc_warn_indcn_req_esc_warn_indcn_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: abs_ctrl_actv_ctrl_sts1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: eng_st1_wd_sts_eng_st1_wd_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: crs_ctrl_ovrdn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_steer_whl_hld_qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_drvr_sts_with_fac_qly_door_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: door_drvr_sts_with_fac_qly_fac_qly
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lat_ctrl_mod_cfmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: esc_ctrl_indcn
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pt_drvr_setg_drv_mod_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: front_four_d_radar_sts_for_dim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_prsnt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wipr_actv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: stand_still_mgr_sts_for_hld
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pt_drvr_setg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tptf_status_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tptf_status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tptf_time_gap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_sod_lan_chg_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_drvr_sod_req_chg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: turn_indcr_monostable
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_lane_chg_aut_actv_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_lane_chg_with_navi_sw_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: nop_cofm_of_lan_chag_onoff
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: wipg_spd_info
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_safe_stop_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: hmi_sup_end_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: crash_sts_safe_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gear_park_not_allow
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_seat_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: drvr_seat_snsr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_l3_lat_ctrl_sts_ad_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ad_l3_lgt_ctrl_sts_ad_mod
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: accr_pedl_sts_flt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: amb_t_raw_amb_t_val
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: body_hei
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: le_frnt_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_frnt_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_frnt_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: le_frnt_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_frnt_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: le_frnt_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_re_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_re_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_re_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_re_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: le_re_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_re_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: le_re_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: le_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_frnt_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_frnt_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_frnt_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_frnt_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ri_frnt_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_frnt_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ri_frnt_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_re_tire_msg_batt_lo_st
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_re_tire_msg_fast_lose_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_re_tire_msg_msg_old_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_re_tire_msg_p
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ri_re_tire_msg_sys_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_re_tire_msg_t
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ri_re_tire_msg_t_warn_flg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: occupy_mon_sts_drvr_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sun_roof_posn_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: susp_posn_vert_le1_frnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: susp_posn_vert_le1_frnt_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: susp_posn_vert_le1_re
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: susp_posn_vert_le1_re_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: twli_bri_raw_qf
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: twli_bri_raw_twli_bri_raw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_drvr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_pass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_re_le
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: win_posn_sts_at_re_ri
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk_sys_sts_ad_l3_brk_fall_bck
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk_sys_sts_brk_degradation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: brk_sys_sts_brk_sys_mod_cfmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tank_turn_mod_sts_tank_turn_mod_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sfty_decel_group_safe_asy_sfty_ena_decel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: asy_emgy_lane_keep_aid_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_lane_keep_aid_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rcwm_brk_req_rcwm_brk_req
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_a_lat_indcr
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: asy_cnoa_crs_sts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: indcr_sts
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
    using DataType = deva_function_msgs::msg::BusToSmData;
    is_plain =
      (
      offsetof(DataType, indcr_sts) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _BusToSmData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::BusToSmData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BusToSmData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<deva_function_msgs::msg::BusToSmData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BusToSmData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const deva_function_msgs::msg::BusToSmData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BusToSmData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BusToSmData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BusToSmData__callbacks = {
  "deva_function_msgs::msg",
  "BusToSmData",
  _BusToSmData__cdr_serialize,
  _BusToSmData__cdr_deserialize,
  _BusToSmData__get_serialized_size,
  _BusToSmData__max_serialized_size
};

static rosidl_message_type_support_t _BusToSmData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BusToSmData__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_deva_function_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<deva_function_msgs::msg::BusToSmData>()
{
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_BusToSmData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, deva_function_msgs, msg, BusToSmData)() {
  return &deva_function_msgs::msg::typesupport_fastrtps_cpp::_BusToSmData__handle;
}

#ifdef __cplusplus
}
#endif
