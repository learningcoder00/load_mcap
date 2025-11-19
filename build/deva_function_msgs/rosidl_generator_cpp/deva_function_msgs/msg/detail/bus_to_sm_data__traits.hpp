// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/bus_to_sm_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BusToSmData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: tr_lock_sts
  {
    out << "tr_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tr_lock_sts, out);
    out << ", ";
  }

  // member: door_drvr_lock_sts
  {
    out << "door_drvr_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_lock_sts, out);
    out << ", ";
  }

  // member: door_pass_lock_sts
  {
    out << "door_pass_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_pass_lock_sts, out);
    out << ", ";
  }

  // member: door_le_re_lock_sts
  {
    out << "door_le_re_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_le_re_lock_sts, out);
    out << ", ";
  }

  // member: door_ri_re_lock_sts
  {
    out << "door_ri_re_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_ri_re_lock_sts, out);
    out << ", ";
  }

  // member: brk_sys_sts_brk_sys_capability
  {
    out << "brk_sys_sts_brk_sys_capability: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_brk_sys_capability, out);
    out << ", ";
  }

  // member: rev
  {
    if (msg.rev.size() == 0) {
      out << "rev: []";
    } else {
      out << "rev: [";
      size_t pending_items = msg.rev.size();
      for (auto item : msg.rev) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: calltype_and_sts_ecall_status
  {
    out << "calltype_and_sts_ecall_status: ";
    rosidl_generator_traits::value_to_yaml(msg.calltype_and_sts_ecall_status, out);
    out << ", ";
  }

  // member: blt_lock_st_at_drvr
  {
    out << "blt_lock_st_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.blt_lock_st_at_drvr, out);
    out << ", ";
  }

  // member: blt_lock_st_err_sts_at_drvr
  {
    out << "blt_lock_st_err_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.blt_lock_st_err_sts_at_drvr, out);
    out << ", ";
  }

  // member: esc_st_esc_st
  {
    out << "esc_st_esc_st: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_st_esc_st, out);
    out << ", ";
  }

  // member: prk_lat_lgt_failr
  {
    out << "prk_lat_lgt_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.prk_lat_lgt_failr, out);
    out << ", ";
  }

  // member: road_incln_qly
  {
    out << "road_incln_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.road_incln_qly, out);
    out << ", ";
  }

  // member: veh_mtn_st
  {
    out << "veh_mtn_st: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mtn_st, out);
    out << ", ";
  }

  // member: whl_spd_circuml_frnt_le_qf
  {
    out << "whl_spd_circuml_frnt_le_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_frnt_le_qf, out);
    out << ", ";
  }

  // member: whl_spd_circuml_frnt_ri_qf
  {
    out << "whl_spd_circuml_frnt_ri_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_frnt_ri_qf, out);
    out << ", ";
  }

  // member: whl_spd_circuml_re_le_qf
  {
    out << "whl_spd_circuml_re_le_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_re_le_qf, out);
    out << ", ";
  }

  // member: whl_spd_circuml_re_ri_qf
  {
    out << "whl_spd_circuml_re_ri_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_re_ri_qf, out);
    out << ", ";
  }

  // member: gear_mov
  {
    out << "gear_mov: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_mov, out);
    out << ", ";
  }

  // member: accr_pedl_psd_accr_pedl_psd
  {
    out << "accr_pedl_psd_accr_pedl_psd: ";
    rosidl_generator_traits::value_to_yaml(msg.accr_pedl_psd_accr_pedl_psd, out);
    out << ", ";
  }

  // member: accr_pedl_psd_sts
  {
    out << "accr_pedl_psd_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.accr_pedl_psd_sts, out);
    out << ", ";
  }

  // member: typ_ext_req_to_upd_qf
  {
    out << "typ_ext_req_to_upd_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.typ_ext_req_to_upd_qf, out);
    out << ", ";
  }

  // member: trsm_park_lockd
  {
    out << "trsm_park_lockd: ";
    rosidl_generator_traits::value_to_yaml(msg.trsm_park_lockd, out);
    out << ", ";
  }

  // member: door_drvr_sts
  {
    out << "door_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts, out);
    out << ", ";
  }

  // member: door_le_re_sts
  {
    out << "door_le_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_le_re_sts, out);
    out << ", ";
  }

  // member: door_pass_sts
  {
    out << "door_pass_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_pass_sts, out);
    out << ", ";
  }

  // member: door_ri_re_sts
  {
    out << "door_ri_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_ri_re_sts, out);
    out << ", ";
  }

  // member: hood_sts
  {
    out << "hood_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hood_sts, out);
    out << ", ";
  }

  // member: mirr_fold_sts_at_drvr
  {
    out << "mirr_fold_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_drvr, out);
    out << ", ";
  }

  // member: mirr_fold_sts_at_pass
  {
    out << "mirr_fold_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_pass, out);
    out << ", ";
  }

  // member: tr_sts
  {
    out << "tr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tr_sts, out);
    out << ", ";
  }

  // member: trlr_prsnt
  {
    out << "trlr_prsnt: ";
    rosidl_generator_traits::value_to_yaml(msg.trlr_prsnt, out);
    out << ", ";
  }

  // member: veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    out << "veh_mod_mngt_glb_safe1_car_mod_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mod_mngt_glb_safe1_car_mod_sts1, out);
    out << ", ";
  }

  // member: veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    out << "veh_mod_mngt_glb_safe1_usg_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mod_mngt_glb_safe1_usg_mod_sts, out);
    out << ", ";
  }

  // member: steer_sts_to_park_assi
  {
    out << "steer_sts_to_park_assi: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_sts_to_park_assi, out);
    out << ", ";
  }

  // member: indcr_typ_ext_req
  {
    out << "indcr_typ_ext_req: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_typ_ext_req, out);
    out << ", ";
  }

  // member: rainfall_amnt
  {
    out << "rainfall_amnt: ";
    rosidl_generator_traits::value_to_yaml(msg.rainfall_amnt, out);
    out << ", ";
  }

  // member: egy_lvl_elec_mai
  {
    out << "egy_lvl_elec_mai: ";
    rosidl_generator_traits::value_to_yaml(msg.egy_lvl_elec_mai, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_p_warn_flg
  {
    out << "le_frnt_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_p_warn_flg, out);
    out << ", ";
  }

  // member: le_re_tire_msg_p_warn_flg
  {
    out << "le_re_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_p_warn_flg, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_p_warn_flg
  {
    out << "ri_frnt_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_p_warn_flg, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_p_warn_flg
  {
    out << "ri_re_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_p_warn_flg, out);
    out << ", ";
  }

  // member: sm_lat_shake_hand_state
  {
    out << "sm_lat_shake_hand_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_lat_shake_hand_state, out);
    out << ", ";
  }

  // member: sm_lon_shake_hand_state
  {
    out << "sm_lon_shake_hand_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_lon_shake_hand_state, out);
    out << ", ";
  }

  // member: rcv_ctrl_req
  {
    out << "rcv_ctrl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_ctrl_req, out);
    out << ", ";
  }

  // member: rcv_steertrim_req
  {
    out << "rcv_steertrim_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_steertrim_req, out);
    out << ", ";
  }

  // member: mob_dev_rcv_req1_mob_dev_sts
  {
    out << "mob_dev_rcv_req1_mob_dev_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rcv_req1_mob_dev_sts, out);
    out << ", ";
  }

  // member: dc_dc_actvd
  {
    out << "dc_dc_actvd: ";
    rosidl_generator_traits::value_to_yaml(msg.dc_dc_actvd, out);
    out << ", ";
  }

  // member: steer_whl_snsr_ag
  {
    out << "steer_whl_snsr_ag: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_whl_snsr_ag, out);
    out << ", ";
  }

  // member: ble_con_sts
  {
    out << "ble_con_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.ble_con_sts, out);
    out << ", ";
  }

  // member: twbr_lockd_posn
  {
    out << "twbr_lockd_posn: ";
    rosidl_generator_traits::value_to_yaml(msg.twbr_lockd_posn, out);
    out << ", ";
  }

  // member: full_elec_twbr_posn
  {
    out << "full_elec_twbr_posn: ";
    rosidl_generator_traits::value_to_yaml(msg.full_elec_twbr_posn, out);
    out << ", ";
  }

  // member: vtsd_mode_sts
  {
    out << "vtsd_mode_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.vtsd_mode_sts, out);
    out << ", ";
  }

  // member: key_read_sts_to_asm
  {
    if (msg.key_read_sts_to_asm.size() == 0) {
      out << "key_read_sts_to_asm: []";
    } else {
      out << "key_read_sts_to_asm: [";
      size_t pending_items = msg.key_read_sts_to_asm.size();
      for (auto item : msg.key_read_sts_to_asm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mob_dev_rpa_req_rspa_ctrl
  {
    out << "mob_dev_rpa_req_rspa_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rspa_ctrl, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_rpa_req
  {
    out << "mob_dev_rpa_req_rpa_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_req, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    out << "mob_dev_rpa_req_rpa_out_mode_sub_t: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_out_mode_sub_t, out);
    out << ", ";
  }

  // member: mob_dev_rpa_req_mob_dev_sts
  {
    out << "mob_dev_rpa_req_mob_dev_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_mob_dev_sts, out);
    out << ", ";
  }

  // member: crab_mov_mod_sts
  {
    out << "crab_mov_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.crab_mov_mod_sts, out);
    out << ", ";
  }

  // member: tank_turn_mod_sts
  {
    out << "tank_turn_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tank_turn_mod_sts, out);
    out << ", ";
  }

  // member: pass_seat_sts2
  {
    out << "pass_seat_sts2: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_seat_sts2, out);
    out << ", ";
  }

  // member: hmi_max_ev_mod
  {
    out << "hmi_max_ev_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_max_ev_mod, out);
    out << ", ";
  }

  // member: adcu_max_ev_mod
  {
    out << "adcu_max_ev_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.adcu_max_ev_mod, out);
    out << ", ";
  }

  // member: lamp_req_by_veh_hld
  {
    out << "lamp_req_by_veh_hld: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_req_by_veh_hld, out);
    out << ", ";
  }

  // member: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    out << "ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn, out);
    out << ", ";
  }

  // member: msg_req_by_hill_dwn_ctrl
  {
    out << "msg_req_by_hill_dwn_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_req_by_hill_dwn_ctrl, out);
    out << ", ";
  }

  // member: esc_warn_indcn_req_esc_warn_indcn_req
  {
    out << "esc_warn_indcn_req_esc_warn_indcn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_warn_indcn_req_esc_warn_indcn_req, out);
    out << ", ";
  }

  // member: abs_ctrl_actv_ctrl_sts1
  {
    out << "abs_ctrl_actv_ctrl_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_ctrl_actv_ctrl_sts1, out);
    out << ", ";
  }

  // member: eng_st1_wd_sts_eng_st1_wd_sts
  {
    out << "eng_st1_wd_sts_eng_st1_wd_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.eng_st1_wd_sts_eng_st1_wd_sts, out);
    out << ", ";
  }

  // member: crs_ctrl_ovrdn
  {
    out << "crs_ctrl_ovrdn: ";
    rosidl_generator_traits::value_to_yaml(msg.crs_ctrl_ovrdn, out);
    out << ", ";
  }

  // member: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    out << "veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai, out);
    out << ", ";
  }

  // member: drvr_steer_whl_hld_qly
  {
    out << "drvr_steer_whl_hld_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_steer_whl_hld_qly, out);
    out << ", ";
  }

  // member: door_drvr_sts_with_fac_qly_door_sts
  {
    out << "door_drvr_sts_with_fac_qly_door_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts_with_fac_qly_door_sts, out);
    out << ", ";
  }

  // member: door_drvr_sts_with_fac_qly_fac_qly
  {
    out << "door_drvr_sts_with_fac_qly_fac_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts_with_fac_qly_fac_qly, out);
    out << ", ";
  }

  // member: lat_ctrl_mod_cfmd
  {
    out << "lat_ctrl_mod_cfmd: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_ctrl_mod_cfmd, out);
    out << ", ";
  }

  // member: esc_ctrl_indcn
  {
    out << "esc_ctrl_indcn: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_ctrl_indcn, out);
    out << ", ";
  }

  // member: pt_drvr_setg_drv_mod_req
  {
    out << "pt_drvr_setg_drv_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_drvr_setg_drv_mod_req, out);
    out << ", ";
  }

  // member: front_four_d_radar_sts_for_dim
  {
    out << "front_four_d_radar_sts_for_dim: ";
    rosidl_generator_traits::value_to_yaml(msg.front_four_d_radar_sts_for_dim, out);
    out << ", ";
  }

  // member: drvr_prsnt_sts
  {
    out << "drvr_prsnt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_prsnt_sts, out);
    out << ", ";
  }

  // member: wipr_actv
  {
    out << "wipr_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.wipr_actv, out);
    out << ", ";
  }

  // member: stand_still_mgr_sts_for_hld
  {
    out << "stand_still_mgr_sts_for_hld: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_still_mgr_sts_for_hld, out);
    out << ", ";
  }

  // member: pt_drvr_setg
  {
    out << "pt_drvr_setg: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_drvr_setg, out);
    out << ", ";
  }

  // member: tptf_status_error
  {
    out << "tptf_status_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tptf_status_error, out);
    out << ", ";
  }

  // member: tptf_status
  {
    out << "tptf_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tptf_status, out);
    out << ", ";
  }

  // member: tptf_time_gap
  {
    out << "tptf_time_gap: ";
    rosidl_generator_traits::value_to_yaml(msg.tptf_time_gap, out);
    out << ", ";
  }

  // member: hmi_sod_lan_chg_switch
  {
    out << "hmi_sod_lan_chg_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_sod_lan_chg_switch, out);
    out << ", ";
  }

  // member: hmi_drvr_sod_req_chg
  {
    out << "hmi_drvr_sod_req_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_chg, out);
    out << ", ";
  }

  // member: turn_indcr_monostable
  {
    out << "turn_indcr_monostable: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_indcr_monostable, out);
    out << ", ";
  }

  // member: drvr_lane_chg_aut_actv_sts
  {
    out << "drvr_lane_chg_aut_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_lane_chg_aut_actv_sts, out);
    out << ", ";
  }

  // member: auto_lane_chg_with_navi_sw_onoff
  {
    out << "auto_lane_chg_with_navi_sw_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_lane_chg_with_navi_sw_onoff, out);
    out << ", ";
  }

  // member: nop_cofm_of_lan_chag_onoff
  {
    out << "nop_cofm_of_lan_chag_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.nop_cofm_of_lan_chag_onoff, out);
    out << ", ";
  }

  // member: wipg_spd_info
  {
    out << "wipg_spd_info: ";
    rosidl_generator_traits::value_to_yaml(msg.wipg_spd_info, out);
    out << ", ";
  }

  // member: asy_safe_stop_sts
  {
    out << "asy_safe_stop_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_safe_stop_sts, out);
    out << ", ";
  }

  // member: hmi_sup_end_mod
  {
    out << "hmi_sup_end_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_sup_end_mod, out);
    out << ", ";
  }

  // member: crash_sts_safe_sts
  {
    out << "crash_sts_safe_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.crash_sts_safe_sts, out);
    out << ", ";
  }

  // member: gear_park_not_allow
  {
    out << "gear_park_not_allow: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_park_not_allow, out);
    out << ", ";
  }

  // member: drvr_seat_sts
  {
    out << "drvr_seat_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_seat_sts, out);
    out << ", ";
  }

  // member: drvr_seat_snsr_sts
  {
    out << "drvr_seat_snsr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_seat_snsr_sts, out);
    out << ", ";
  }

  // member: ad_l3_lat_ctrl_sts_ad_mod
  {
    out << "ad_l3_lat_ctrl_sts_ad_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_l3_lat_ctrl_sts_ad_mod, out);
    out << ", ";
  }

  // member: ad_l3_lgt_ctrl_sts_ad_mod
  {
    out << "ad_l3_lgt_ctrl_sts_ad_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_l3_lgt_ctrl_sts_ad_mod, out);
    out << ", ";
  }

  // member: accr_pedl_sts_flt_sts
  {
    out << "accr_pedl_sts_flt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.accr_pedl_sts_flt_sts, out);
    out << ", ";
  }

  // member: amb_t_raw_amb_t_val
  {
    out << "amb_t_raw_amb_t_val: ";
    rosidl_generator_traits::value_to_yaml(msg.amb_t_raw_amb_t_val, out);
    out << ", ";
  }

  // member: body_hei
  {
    out << "body_hei: ";
    rosidl_generator_traits::value_to_yaml(msg.body_hei, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_batt_lo_st
  {
    out << "le_frnt_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_batt_lo_st, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_fast_lose_warn_flg
  {
    out << "le_frnt_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_fast_lose_warn_flg, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_msg_old_flg
  {
    out << "le_frnt_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_msg_old_flg, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_p
  {
    out << "le_frnt_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_p, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_sys_warn_flg
  {
    out << "le_frnt_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_sys_warn_flg, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_t
  {
    out << "le_frnt_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_t, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_t_warn_flg
  {
    out << "le_frnt_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_t_warn_flg, out);
    out << ", ";
  }

  // member: le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    out << "le_frnt_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_tire_fillg_assi_p_sts, out);
    out << ", ";
  }

  // member: le_re_tire_msg_batt_lo_st
  {
    out << "le_re_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_batt_lo_st, out);
    out << ", ";
  }

  // member: le_re_tire_msg_fast_lose_warn_flg
  {
    out << "le_re_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_fast_lose_warn_flg, out);
    out << ", ";
  }

  // member: le_re_tire_msg_msg_old_flg
  {
    out << "le_re_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_msg_old_flg, out);
    out << ", ";
  }

  // member: le_re_tire_msg_p
  {
    out << "le_re_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_p, out);
    out << ", ";
  }

  // member: le_re_tire_msg_sys_warn_flg
  {
    out << "le_re_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_sys_warn_flg, out);
    out << ", ";
  }

  // member: le_re_tire_msg_t
  {
    out << "le_re_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_t, out);
    out << ", ";
  }

  // member: le_re_tire_msg_t_warn_flg
  {
    out << "le_re_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_t_warn_flg, out);
    out << ", ";
  }

  // member: le_re_tire_msg_tire_fillg_assi_p_sts
  {
    out << "le_re_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_tire_fillg_assi_p_sts, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_batt_lo_st
  {
    out << "ri_frnt_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_batt_lo_st, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_fast_lose_warn_flg
  {
    out << "ri_frnt_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_fast_lose_warn_flg, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_msg_old_flg
  {
    out << "ri_frnt_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_msg_old_flg, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_p
  {
    out << "ri_frnt_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_p, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_sys_warn_flg
  {
    out << "ri_frnt_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_sys_warn_flg, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_t
  {
    out << "ri_frnt_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_t, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_t_warn_flg
  {
    out << "ri_frnt_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_t_warn_flg, out);
    out << ", ";
  }

  // member: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    out << "ri_frnt_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_tire_fillg_assi_p_sts, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_batt_lo_st
  {
    out << "ri_re_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_batt_lo_st, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_fast_lose_warn_flg
  {
    out << "ri_re_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_fast_lose_warn_flg, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_msg_old_flg
  {
    out << "ri_re_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_msg_old_flg, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_p
  {
    out << "ri_re_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_p, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_sys_warn_flg
  {
    out << "ri_re_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_sys_warn_flg, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_t
  {
    out << "ri_re_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_t, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_t_warn_flg
  {
    out << "ri_re_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_t_warn_flg, out);
    out << ", ";
  }

  // member: ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    out << "ri_re_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_tire_fillg_assi_p_sts, out);
    out << ", ";
  }

  // member: occupy_mon_sts_drvr_sts
  {
    out << "occupy_mon_sts_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.occupy_mon_sts_drvr_sts, out);
    out << ", ";
  }

  // member: sun_roof_posn_sts
  {
    out << "sun_roof_posn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sun_roof_posn_sts, out);
    out << ", ";
  }

  // member: susp_posn_vert_le1_frnt
  {
    out << "susp_posn_vert_le1_frnt: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_frnt, out);
    out << ", ";
  }

  // member: susp_posn_vert_le1_frnt_qf
  {
    out << "susp_posn_vert_le1_frnt_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_frnt_qf, out);
    out << ", ";
  }

  // member: susp_posn_vert_le1_re
  {
    out << "susp_posn_vert_le1_re: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_re, out);
    out << ", ";
  }

  // member: susp_posn_vert_le1_re_qf
  {
    out << "susp_posn_vert_le1_re_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_re_qf, out);
    out << ", ";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_frnt: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_frnt, out);
    out << ", ";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf, out);
    out << ", ";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_re: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_re, out);
    out << ", ";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_re_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf, out);
    out << ", ";
  }

  // member: twli_bri_raw_qf
  {
    out << "twli_bri_raw_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_qf, out);
    out << ", ";
  }

  // member: twli_bri_raw_twli_bri_raw
  {
    out << "twli_bri_raw_twli_bri_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_twli_bri_raw, out);
    out << ", ";
  }

  // member: win_posn_sts_at_drvr
  {
    out << "win_posn_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_drvr, out);
    out << ", ";
  }

  // member: win_posn_sts_at_pass
  {
    out << "win_posn_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_pass, out);
    out << ", ";
  }

  // member: win_posn_sts_at_re_le
  {
    out << "win_posn_sts_at_re_le: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_le, out);
    out << ", ";
  }

  // member: win_posn_sts_at_re_ri
  {
    out << "win_posn_sts_at_re_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_ri, out);
    out << ", ";
  }

  // member: brk_sys_sts_ad_l3_brk_fall_bck
  {
    out << "brk_sys_sts_ad_l3_brk_fall_bck: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_ad_l3_brk_fall_bck, out);
    out << ", ";
  }

  // member: brk_sys_sts_brk_degradation
  {
    out << "brk_sys_sts_brk_degradation: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_brk_degradation, out);
    out << ", ";
  }

  // member: brk_sys_sts_brk_sys_mod_cfmd
  {
    out << "brk_sys_sts_brk_sys_mod_cfmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_brk_sys_mod_cfmd, out);
    out << ", ";
  }

  // member: tank_turn_mod_sts_tank_turn_mod_sts
  {
    out << "tank_turn_mod_sts_tank_turn_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tank_turn_mod_sts_tank_turn_mod_sts, out);
    out << ", ";
  }

  // member: sfty_decel_group_safe_asy_sfty_ena_decel
  {
    out << "sfty_decel_group_safe_asy_sfty_ena_decel: ";
    rosidl_generator_traits::value_to_yaml(msg.sfty_decel_group_safe_asy_sfty_ena_decel, out);
    out << ", ";
  }

  // member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    out << "steer_tq_addl_for_ema_steer_tq_addl_for_ema: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_tq_addl_for_ema_steer_tq_addl_for_ema, out);
    out << ", ";
  }

  // member: asy_emgy_lane_keep_aid_sts
  {
    out << "asy_emgy_lane_keep_aid_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_emgy_lane_keep_aid_sts, out);
    out << ", ";
  }

  // member: asy_lane_keep_aid_sts
  {
    out << "asy_lane_keep_aid_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_keep_aid_sts, out);
    out << ", ";
  }

  // member: rcwm_brk_req_rcwm_brk_req
  {
    out << "rcwm_brk_req_rcwm_brk_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rcwm_brk_req_rcwm_brk_req, out);
    out << ", ";
  }

  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    out << "asy_a_lgt_sts_asy_a_lgt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_sts_asy_a_lgt_sts, out);
    out << ", ";
  }

  // member: asy_a_lat_indcr
  {
    out << "asy_a_lat_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lat_indcr, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_sts
  {
    out << "asy_cnoa_crs_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_sts, out);
    out << ", ";
  }

  // member: indcr_sts
  {
    out << "indcr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_sts, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BusToSmData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: tr_lock_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tr_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tr_lock_sts, out);
    out << "\n";
  }

  // member: door_drvr_lock_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_drvr_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_lock_sts, out);
    out << "\n";
  }

  // member: door_pass_lock_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_pass_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_pass_lock_sts, out);
    out << "\n";
  }

  // member: door_le_re_lock_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_le_re_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_le_re_lock_sts, out);
    out << "\n";
  }

  // member: door_ri_re_lock_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_ri_re_lock_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_ri_re_lock_sts, out);
    out << "\n";
  }

  // member: brk_sys_sts_brk_sys_capability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_sys_sts_brk_sys_capability: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_brk_sys_capability, out);
    out << "\n";
  }

  // member: rev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rev.size() == 0) {
      out << "rev: []\n";
    } else {
      out << "rev:\n";
      for (auto item : msg.rev) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: calltype_and_sts_ecall_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calltype_and_sts_ecall_status: ";
    rosidl_generator_traits::value_to_yaml(msg.calltype_and_sts_ecall_status, out);
    out << "\n";
  }

  // member: blt_lock_st_at_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blt_lock_st_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.blt_lock_st_at_drvr, out);
    out << "\n";
  }

  // member: blt_lock_st_err_sts_at_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blt_lock_st_err_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.blt_lock_st_err_sts_at_drvr, out);
    out << "\n";
  }

  // member: esc_st_esc_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_st_esc_st: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_st_esc_st, out);
    out << "\n";
  }

  // member: prk_lat_lgt_failr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prk_lat_lgt_failr: ";
    rosidl_generator_traits::value_to_yaml(msg.prk_lat_lgt_failr, out);
    out << "\n";
  }

  // member: road_incln_qly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_incln_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.road_incln_qly, out);
    out << "\n";
  }

  // member: veh_mtn_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_mtn_st: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mtn_st, out);
    out << "\n";
  }

  // member: whl_spd_circuml_frnt_le_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whl_spd_circuml_frnt_le_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_frnt_le_qf, out);
    out << "\n";
  }

  // member: whl_spd_circuml_frnt_ri_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whl_spd_circuml_frnt_ri_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_frnt_ri_qf, out);
    out << "\n";
  }

  // member: whl_spd_circuml_re_le_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whl_spd_circuml_re_le_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_re_le_qf, out);
    out << "\n";
  }

  // member: whl_spd_circuml_re_ri_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "whl_spd_circuml_re_ri_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.whl_spd_circuml_re_ri_qf, out);
    out << "\n";
  }

  // member: gear_mov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_mov: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_mov, out);
    out << "\n";
  }

  // member: accr_pedl_psd_accr_pedl_psd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accr_pedl_psd_accr_pedl_psd: ";
    rosidl_generator_traits::value_to_yaml(msg.accr_pedl_psd_accr_pedl_psd, out);
    out << "\n";
  }

  // member: accr_pedl_psd_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accr_pedl_psd_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.accr_pedl_psd_sts, out);
    out << "\n";
  }

  // member: typ_ext_req_to_upd_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "typ_ext_req_to_upd_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.typ_ext_req_to_upd_qf, out);
    out << "\n";
  }

  // member: trsm_park_lockd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trsm_park_lockd: ";
    rosidl_generator_traits::value_to_yaml(msg.trsm_park_lockd, out);
    out << "\n";
  }

  // member: door_drvr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts, out);
    out << "\n";
  }

  // member: door_le_re_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_le_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_le_re_sts, out);
    out << "\n";
  }

  // member: door_pass_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_pass_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_pass_sts, out);
    out << "\n";
  }

  // member: door_ri_re_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_ri_re_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_ri_re_sts, out);
    out << "\n";
  }

  // member: hood_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hood_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.hood_sts, out);
    out << "\n";
  }

  // member: mirr_fold_sts_at_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirr_fold_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_drvr, out);
    out << "\n";
  }

  // member: mirr_fold_sts_at_pass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mirr_fold_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.mirr_fold_sts_at_pass, out);
    out << "\n";
  }

  // member: tr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tr_sts, out);
    out << "\n";
  }

  // member: trlr_prsnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trlr_prsnt: ";
    rosidl_generator_traits::value_to_yaml(msg.trlr_prsnt, out);
    out << "\n";
  }

  // member: veh_mod_mngt_glb_safe1_car_mod_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_mod_mngt_glb_safe1_car_mod_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mod_mngt_glb_safe1_car_mod_sts1, out);
    out << "\n";
  }

  // member: veh_mod_mngt_glb_safe1_usg_mod_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_mod_mngt_glb_safe1_usg_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mod_mngt_glb_safe1_usg_mod_sts, out);
    out << "\n";
  }

  // member: steer_sts_to_park_assi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_sts_to_park_assi: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_sts_to_park_assi, out);
    out << "\n";
  }

  // member: indcr_typ_ext_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indcr_typ_ext_req: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_typ_ext_req, out);
    out << "\n";
  }

  // member: rainfall_amnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rainfall_amnt: ";
    rosidl_generator_traits::value_to_yaml(msg.rainfall_amnt, out);
    out << "\n";
  }

  // member: egy_lvl_elec_mai
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "egy_lvl_elec_mai: ";
    rosidl_generator_traits::value_to_yaml(msg.egy_lvl_elec_mai, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_p_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_p_warn_flg, out);
    out << "\n";
  }

  // member: le_re_tire_msg_p_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_p_warn_flg, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_p_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_p_warn_flg, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_p_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_p_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_p_warn_flg, out);
    out << "\n";
  }

  // member: sm_lat_shake_hand_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_lat_shake_hand_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_lat_shake_hand_state, out);
    out << "\n";
  }

  // member: sm_lon_shake_hand_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sm_lon_shake_hand_state: ";
    rosidl_generator_traits::value_to_yaml(msg.sm_lon_shake_hand_state, out);
    out << "\n";
  }

  // member: rcv_ctrl_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcv_ctrl_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_ctrl_req, out);
    out << "\n";
  }

  // member: rcv_steertrim_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcv_steertrim_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rcv_steertrim_req, out);
    out << "\n";
  }

  // member: mob_dev_rcv_req1_mob_dev_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rcv_req1_mob_dev_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rcv_req1_mob_dev_sts, out);
    out << "\n";
  }

  // member: dc_dc_actvd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dc_dc_actvd: ";
    rosidl_generator_traits::value_to_yaml(msg.dc_dc_actvd, out);
    out << "\n";
  }

  // member: steer_whl_snsr_ag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_whl_snsr_ag: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_whl_snsr_ag, out);
    out << "\n";
  }

  // member: ble_con_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ble_con_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.ble_con_sts, out);
    out << "\n";
  }

  // member: twbr_lockd_posn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twbr_lockd_posn: ";
    rosidl_generator_traits::value_to_yaml(msg.twbr_lockd_posn, out);
    out << "\n";
  }

  // member: full_elec_twbr_posn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "full_elec_twbr_posn: ";
    rosidl_generator_traits::value_to_yaml(msg.full_elec_twbr_posn, out);
    out << "\n";
  }

  // member: vtsd_mode_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtsd_mode_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.vtsd_mode_sts, out);
    out << "\n";
  }

  // member: key_read_sts_to_asm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.key_read_sts_to_asm.size() == 0) {
      out << "key_read_sts_to_asm: []\n";
    } else {
      out << "key_read_sts_to_asm:\n";
      for (auto item : msg.key_read_sts_to_asm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mob_dev_rpa_req_rspa_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_rspa_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rspa_ctrl, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_rpa_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_rpa_req: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_req, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_rpa_out_mode_sub_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_rpa_out_mode_sub_t: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_rpa_out_mode_sub_t, out);
    out << "\n";
  }

  // member: mob_dev_rpa_req_mob_dev_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mob_dev_rpa_req_mob_dev_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.mob_dev_rpa_req_mob_dev_sts, out);
    out << "\n";
  }

  // member: crab_mov_mod_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crab_mov_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.crab_mov_mod_sts, out);
    out << "\n";
  }

  // member: tank_turn_mod_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tank_turn_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tank_turn_mod_sts, out);
    out << "\n";
  }

  // member: pass_seat_sts2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_seat_sts2: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_seat_sts2, out);
    out << "\n";
  }

  // member: hmi_max_ev_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_max_ev_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_max_ev_mod, out);
    out << "\n";
  }

  // member: adcu_max_ev_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adcu_max_ev_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.adcu_max_ev_mod, out);
    out << "\n";
  }

  // member: lamp_req_by_veh_hld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lamp_req_by_veh_hld: ";
    rosidl_generator_traits::value_to_yaml(msg.lamp_req_by_veh_hld, out);
    out << "\n";
  }

  // member: ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn, out);
    out << "\n";
  }

  // member: msg_req_by_hill_dwn_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_req_by_hill_dwn_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_req_by_hill_dwn_ctrl, out);
    out << "\n";
  }

  // member: esc_warn_indcn_req_esc_warn_indcn_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_warn_indcn_req_esc_warn_indcn_req: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_warn_indcn_req_esc_warn_indcn_req, out);
    out << "\n";
  }

  // member: abs_ctrl_actv_ctrl_sts1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abs_ctrl_actv_ctrl_sts1: ";
    rosidl_generator_traits::value_to_yaml(msg.abs_ctrl_actv_ctrl_sts1, out);
    out << "\n";
  }

  // member: eng_st1_wd_sts_eng_st1_wd_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eng_st1_wd_sts_eng_st1_wd_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.eng_st1_wd_sts_eng_st1_wd_sts, out);
    out << "\n";
  }

  // member: crs_ctrl_ovrdn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crs_ctrl_ovrdn: ";
    rosidl_generator_traits::value_to_yaml(msg.crs_ctrl_ovrdn, out);
    out << "\n";
  }

  // member: veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai, out);
    out << "\n";
  }

  // member: drvr_steer_whl_hld_qly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_steer_whl_hld_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_steer_whl_hld_qly, out);
    out << "\n";
  }

  // member: door_drvr_sts_with_fac_qly_door_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_drvr_sts_with_fac_qly_door_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts_with_fac_qly_door_sts, out);
    out << "\n";
  }

  // member: door_drvr_sts_with_fac_qly_fac_qly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_drvr_sts_with_fac_qly_fac_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.door_drvr_sts_with_fac_qly_fac_qly, out);
    out << "\n";
  }

  // member: lat_ctrl_mod_cfmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_ctrl_mod_cfmd: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_ctrl_mod_cfmd, out);
    out << "\n";
  }

  // member: esc_ctrl_indcn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "esc_ctrl_indcn: ";
    rosidl_generator_traits::value_to_yaml(msg.esc_ctrl_indcn, out);
    out << "\n";
  }

  // member: pt_drvr_setg_drv_mod_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_drvr_setg_drv_mod_req: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_drvr_setg_drv_mod_req, out);
    out << "\n";
  }

  // member: front_four_d_radar_sts_for_dim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "front_four_d_radar_sts_for_dim: ";
    rosidl_generator_traits::value_to_yaml(msg.front_four_d_radar_sts_for_dim, out);
    out << "\n";
  }

  // member: drvr_prsnt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_prsnt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_prsnt_sts, out);
    out << "\n";
  }

  // member: wipr_actv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wipr_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.wipr_actv, out);
    out << "\n";
  }

  // member: stand_still_mgr_sts_for_hld
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stand_still_mgr_sts_for_hld: ";
    rosidl_generator_traits::value_to_yaml(msg.stand_still_mgr_sts_for_hld, out);
    out << "\n";
  }

  // member: pt_drvr_setg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pt_drvr_setg: ";
    rosidl_generator_traits::value_to_yaml(msg.pt_drvr_setg, out);
    out << "\n";
  }

  // member: tptf_status_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tptf_status_error: ";
    rosidl_generator_traits::value_to_yaml(msg.tptf_status_error, out);
    out << "\n";
  }

  // member: tptf_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tptf_status: ";
    rosidl_generator_traits::value_to_yaml(msg.tptf_status, out);
    out << "\n";
  }

  // member: tptf_time_gap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tptf_time_gap: ";
    rosidl_generator_traits::value_to_yaml(msg.tptf_time_gap, out);
    out << "\n";
  }

  // member: hmi_sod_lan_chg_switch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_sod_lan_chg_switch: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_sod_lan_chg_switch, out);
    out << "\n";
  }

  // member: hmi_drvr_sod_req_chg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_drvr_sod_req_chg: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_drvr_sod_req_chg, out);
    out << "\n";
  }

  // member: turn_indcr_monostable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_indcr_monostable: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_indcr_monostable, out);
    out << "\n";
  }

  // member: drvr_lane_chg_aut_actv_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_lane_chg_aut_actv_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_lane_chg_aut_actv_sts, out);
    out << "\n";
  }

  // member: auto_lane_chg_with_navi_sw_onoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_lane_chg_with_navi_sw_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_lane_chg_with_navi_sw_onoff, out);
    out << "\n";
  }

  // member: nop_cofm_of_lan_chag_onoff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nop_cofm_of_lan_chag_onoff: ";
    rosidl_generator_traits::value_to_yaml(msg.nop_cofm_of_lan_chag_onoff, out);
    out << "\n";
  }

  // member: wipg_spd_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wipg_spd_info: ";
    rosidl_generator_traits::value_to_yaml(msg.wipg_spd_info, out);
    out << "\n";
  }

  // member: asy_safe_stop_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_safe_stop_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_safe_stop_sts, out);
    out << "\n";
  }

  // member: hmi_sup_end_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_sup_end_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_sup_end_mod, out);
    out << "\n";
  }

  // member: crash_sts_safe_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crash_sts_safe_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.crash_sts_safe_sts, out);
    out << "\n";
  }

  // member: gear_park_not_allow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gear_park_not_allow: ";
    rosidl_generator_traits::value_to_yaml(msg.gear_park_not_allow, out);
    out << "\n";
  }

  // member: drvr_seat_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_seat_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_seat_sts, out);
    out << "\n";
  }

  // member: drvr_seat_snsr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drvr_seat_snsr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.drvr_seat_snsr_sts, out);
    out << "\n";
  }

  // member: ad_l3_lat_ctrl_sts_ad_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_l3_lat_ctrl_sts_ad_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_l3_lat_ctrl_sts_ad_mod, out);
    out << "\n";
  }

  // member: ad_l3_lgt_ctrl_sts_ad_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ad_l3_lgt_ctrl_sts_ad_mod: ";
    rosidl_generator_traits::value_to_yaml(msg.ad_l3_lgt_ctrl_sts_ad_mod, out);
    out << "\n";
  }

  // member: accr_pedl_sts_flt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accr_pedl_sts_flt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.accr_pedl_sts_flt_sts, out);
    out << "\n";
  }

  // member: amb_t_raw_amb_t_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amb_t_raw_amb_t_val: ";
    rosidl_generator_traits::value_to_yaml(msg.amb_t_raw_amb_t_val, out);
    out << "\n";
  }

  // member: body_hei
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_hei: ";
    rosidl_generator_traits::value_to_yaml(msg.body_hei, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_batt_lo_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_batt_lo_st, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_fast_lose_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_fast_lose_warn_flg, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_msg_old_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_msg_old_flg, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_p, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_sys_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_sys_warn_flg, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_t, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_t_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_t_warn_flg, out);
    out << "\n";
  }

  // member: le_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_frnt_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.le_frnt_tire_msg_tire_fillg_assi_p_sts, out);
    out << "\n";
  }

  // member: le_re_tire_msg_batt_lo_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_batt_lo_st, out);
    out << "\n";
  }

  // member: le_re_tire_msg_fast_lose_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_fast_lose_warn_flg, out);
    out << "\n";
  }

  // member: le_re_tire_msg_msg_old_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_msg_old_flg, out);
    out << "\n";
  }

  // member: le_re_tire_msg_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_p, out);
    out << "\n";
  }

  // member: le_re_tire_msg_sys_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_sys_warn_flg, out);
    out << "\n";
  }

  // member: le_re_tire_msg_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_t, out);
    out << "\n";
  }

  // member: le_re_tire_msg_t_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_t_warn_flg, out);
    out << "\n";
  }

  // member: le_re_tire_msg_tire_fillg_assi_p_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "le_re_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.le_re_tire_msg_tire_fillg_assi_p_sts, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_batt_lo_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_batt_lo_st, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_fast_lose_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_fast_lose_warn_flg, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_msg_old_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_msg_old_flg, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_p, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_sys_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_sys_warn_flg, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_t, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_t_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_t_warn_flg, out);
    out << "\n";
  }

  // member: ri_frnt_tire_msg_tire_fillg_assi_p_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_frnt_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_frnt_tire_msg_tire_fillg_assi_p_sts, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_batt_lo_st
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_batt_lo_st: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_batt_lo_st, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_fast_lose_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_fast_lose_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_fast_lose_warn_flg, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_msg_old_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_msg_old_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_msg_old_flg, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_p: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_p, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_sys_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_sys_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_sys_warn_flg, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_t: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_t, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_t_warn_flg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_t_warn_flg: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_t_warn_flg, out);
    out << "\n";
  }

  // member: ri_re_tire_msg_tire_fillg_assi_p_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ri_re_tire_msg_tire_fillg_assi_p_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.ri_re_tire_msg_tire_fillg_assi_p_sts, out);
    out << "\n";
  }

  // member: occupy_mon_sts_drvr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "occupy_mon_sts_drvr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.occupy_mon_sts_drvr_sts, out);
    out << "\n";
  }

  // member: sun_roof_posn_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sun_roof_posn_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.sun_roof_posn_sts, out);
    out << "\n";
  }

  // member: susp_posn_vert_le1_frnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_le1_frnt: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_frnt, out);
    out << "\n";
  }

  // member: susp_posn_vert_le1_frnt_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_le1_frnt_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_frnt_qf, out);
    out << "\n";
  }

  // member: susp_posn_vert_le1_re
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_le1_re: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_re, out);
    out << "\n";
  }

  // member: susp_posn_vert_le1_re_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_le1_re_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_le1_re_qf, out);
    out << "\n";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_frnt: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_frnt, out);
    out << "\n";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf, out);
    out << "\n";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_re
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_re: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_re, out);
    out << "\n";
  }

  // member: susp_posn_vert_ri1_susp_posn_vert_ri_re_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "susp_posn_vert_ri1_susp_posn_vert_ri_re_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf, out);
    out << "\n";
  }

  // member: twli_bri_raw_qf
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twli_bri_raw_qf: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_qf, out);
    out << "\n";
  }

  // member: twli_bri_raw_twli_bri_raw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "twli_bri_raw_twli_bri_raw: ";
    rosidl_generator_traits::value_to_yaml(msg.twli_bri_raw_twli_bri_raw, out);
    out << "\n";
  }

  // member: win_posn_sts_at_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_drvr, out);
    out << "\n";
  }

  // member: win_posn_sts_at_pass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_pass: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_pass, out);
    out << "\n";
  }

  // member: win_posn_sts_at_re_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_re_le: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_le, out);
    out << "\n";
  }

  // member: win_posn_sts_at_re_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "win_posn_sts_at_re_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.win_posn_sts_at_re_ri, out);
    out << "\n";
  }

  // member: brk_sys_sts_ad_l3_brk_fall_bck
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_sys_sts_ad_l3_brk_fall_bck: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_ad_l3_brk_fall_bck, out);
    out << "\n";
  }

  // member: brk_sys_sts_brk_degradation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_sys_sts_brk_degradation: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_brk_degradation, out);
    out << "\n";
  }

  // member: brk_sys_sts_brk_sys_mod_cfmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_sys_sts_brk_sys_mod_cfmd: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_sys_sts_brk_sys_mod_cfmd, out);
    out << "\n";
  }

  // member: tank_turn_mod_sts_tank_turn_mod_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tank_turn_mod_sts_tank_turn_mod_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.tank_turn_mod_sts_tank_turn_mod_sts, out);
    out << "\n";
  }

  // member: sfty_decel_group_safe_asy_sfty_ena_decel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sfty_decel_group_safe_asy_sfty_ena_decel: ";
    rosidl_generator_traits::value_to_yaml(msg.sfty_decel_group_safe_asy_sfty_ena_decel, out);
    out << "\n";
  }

  // member: steer_tq_addl_for_ema_steer_tq_addl_for_ema
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "steer_tq_addl_for_ema_steer_tq_addl_for_ema: ";
    rosidl_generator_traits::value_to_yaml(msg.steer_tq_addl_for_ema_steer_tq_addl_for_ema, out);
    out << "\n";
  }

  // member: asy_emgy_lane_keep_aid_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_emgy_lane_keep_aid_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_emgy_lane_keep_aid_sts, out);
    out << "\n";
  }

  // member: asy_lane_keep_aid_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lane_keep_aid_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lane_keep_aid_sts, out);
    out << "\n";
  }

  // member: rcwm_brk_req_rcwm_brk_req
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rcwm_brk_req_rcwm_brk_req: ";
    rosidl_generator_traits::value_to_yaml(msg.rcwm_brk_req_rcwm_brk_req, out);
    out << "\n";
  }

  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_a_lgt_sts_asy_a_lgt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_sts_asy_a_lgt_sts, out);
    out << "\n";
  }

  // member: asy_a_lat_indcr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_a_lat_indcr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lat_indcr, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_sts, out);
    out << "\n";
  }

  // member: indcr_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "indcr_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.indcr_sts, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BusToSmData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::BusToSmData & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::BusToSmData & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::BusToSmData>()
{
  return "deva_function_msgs::msg::BusToSmData";
}

template<>
inline const char * name<deva_function_msgs::msg::BusToSmData>()
{
  return "deva_function_msgs/msg/BusToSmData";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::BusToSmData>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::BusToSmData>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::BusToSmData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__TRAITS_HPP_
