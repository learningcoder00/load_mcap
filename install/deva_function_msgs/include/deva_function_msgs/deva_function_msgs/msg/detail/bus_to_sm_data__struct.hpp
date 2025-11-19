// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/BusToSmData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__BusToSmData __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__BusToSmData __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BusToSmData_
{
  using Type = BusToSmData_<ContainerAllocator>;

  explicit BusToSmData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tr_lock_sts = 0;
      this->door_drvr_lock_sts = 0;
      this->door_pass_lock_sts = 0;
      this->door_le_re_lock_sts = 0;
      this->door_ri_re_lock_sts = 0;
      this->brk_sys_sts_brk_sys_capability = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->rev.begin(), this->rev.end(), 0);
      this->calltype_and_sts_ecall_status = 0;
      this->blt_lock_st_at_drvr = 0;
      this->blt_lock_st_err_sts_at_drvr = 0;
      this->esc_st_esc_st = 0;
      this->prk_lat_lgt_failr = 0;
      this->road_incln_qly = 0;
      this->veh_mtn_st = 0;
      this->whl_spd_circuml_frnt_le_qf = 0;
      this->whl_spd_circuml_frnt_ri_qf = 0;
      this->whl_spd_circuml_re_le_qf = 0;
      this->whl_spd_circuml_re_ri_qf = 0;
      this->gear_mov = 0;
      this->accr_pedl_psd_accr_pedl_psd = 0;
      this->accr_pedl_psd_sts = 0;
      this->typ_ext_req_to_upd_qf = 0;
      this->trsm_park_lockd = 0;
      this->door_drvr_sts = 0;
      this->door_le_re_sts = 0;
      this->door_pass_sts = 0;
      this->door_ri_re_sts = 0;
      this->hood_sts = 0;
      this->mirr_fold_sts_at_drvr = 0;
      this->mirr_fold_sts_at_pass = 0;
      this->tr_sts = 0;
      this->trlr_prsnt = 0;
      this->veh_mod_mngt_glb_safe1_car_mod_sts1 = 0;
      this->veh_mod_mngt_glb_safe1_usg_mod_sts = 0;
      this->steer_sts_to_park_assi = 0;
      this->indcr_typ_ext_req = 0;
      this->rainfall_amnt = 0;
      this->egy_lvl_elec_mai = 0;
      this->le_frnt_tire_msg_p_warn_flg = 0;
      this->le_re_tire_msg_p_warn_flg = 0;
      this->ri_frnt_tire_msg_p_warn_flg = 0;
      this->ri_re_tire_msg_p_warn_flg = 0;
      this->sm_lat_shake_hand_state = 0;
      this->sm_lon_shake_hand_state = 0;
      this->rcv_ctrl_req = 0;
      this->rcv_steertrim_req = 0;
      this->mob_dev_rcv_req1_mob_dev_sts = 0;
      this->dc_dc_actvd = 0;
      this->steer_whl_snsr_ag = 0.0f;
      this->ble_con_sts = 0;
      this->twbr_lockd_posn = 0;
      this->full_elec_twbr_posn = 0;
      this->vtsd_mode_sts = 0;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->key_read_sts_to_asm.begin(), this->key_read_sts_to_asm.end(), 0);
      this->mob_dev_rpa_req_rspa_ctrl = 0;
      this->mob_dev_rpa_req_rpa_req = 0;
      this->mob_dev_rpa_req_rpa_out_mode_sub_t = 0;
      this->mob_dev_rpa_req_mob_dev_sts = 0;
      this->crab_mov_mod_sts = 0;
      this->tank_turn_mod_sts = 0;
      this->pass_seat_sts2 = 0;
      this->hmi_max_ev_mod = 0;
      this->adcu_max_ev_mod = 0;
      this->lamp_req_by_veh_hld = 0;
      this->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = 0;
      this->msg_req_by_hill_dwn_ctrl = 0;
      this->esc_warn_indcn_req_esc_warn_indcn_req = 0;
      this->abs_ctrl_actv_ctrl_sts1 = 0;
      this->eng_st1_wd_sts_eng_st1_wd_sts = 0;
      this->crs_ctrl_ovrdn = 0;
      this->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = 0;
      this->drvr_steer_whl_hld_qly = 0;
      this->door_drvr_sts_with_fac_qly_door_sts = 0;
      this->door_drvr_sts_with_fac_qly_fac_qly = 0;
      this->lat_ctrl_mod_cfmd = 0;
      this->esc_ctrl_indcn = 0;
      this->pt_drvr_setg_drv_mod_req = 0;
      this->front_four_d_radar_sts_for_dim = 0;
      this->drvr_prsnt_sts = 0;
      this->wipr_actv = 0;
      this->stand_still_mgr_sts_for_hld = 0;
      this->pt_drvr_setg = 0;
      this->tptf_status_error = 0;
      this->tptf_status = 0;
      this->tptf_time_gap = 0;
      this->hmi_sod_lan_chg_switch = 0;
      this->hmi_drvr_sod_req_chg = 0;
      this->turn_indcr_monostable = 0;
      this->drvr_lane_chg_aut_actv_sts = 0;
      this->auto_lane_chg_with_navi_sw_onoff = 0;
      this->nop_cofm_of_lan_chag_onoff = 0;
      this->wipg_spd_info = 0;
      this->asy_safe_stop_sts = 0;
      this->hmi_sup_end_mod = 0;
      this->crash_sts_safe_sts = 0;
      this->gear_park_not_allow = 0;
      this->drvr_seat_sts = 0;
      this->drvr_seat_snsr_sts = 0;
      this->ad_l3_lat_ctrl_sts_ad_mod = 0;
      this->ad_l3_lgt_ctrl_sts_ad_mod = 0;
      this->accr_pedl_sts_flt_sts = 0;
      this->amb_t_raw_amb_t_val = 0.0f;
      this->body_hei = 0.0f;
      this->le_frnt_tire_msg_batt_lo_st = 0;
      this->le_frnt_tire_msg_fast_lose_warn_flg = 0;
      this->le_frnt_tire_msg_msg_old_flg = 0;
      this->le_frnt_tire_msg_p = 0.0f;
      this->le_frnt_tire_msg_sys_warn_flg = 0;
      this->le_frnt_tire_msg_t = 0.0f;
      this->le_frnt_tire_msg_t_warn_flg = 0;
      this->le_frnt_tire_msg_tire_fillg_assi_p_sts = 0;
      this->le_re_tire_msg_batt_lo_st = 0;
      this->le_re_tire_msg_fast_lose_warn_flg = 0;
      this->le_re_tire_msg_msg_old_flg = 0;
      this->le_re_tire_msg_p = 0.0f;
      this->le_re_tire_msg_sys_warn_flg = 0;
      this->le_re_tire_msg_t = 0.0f;
      this->le_re_tire_msg_t_warn_flg = 0;
      this->le_re_tire_msg_tire_fillg_assi_p_sts = 0;
      this->ri_frnt_tire_msg_batt_lo_st = 0;
      this->ri_frnt_tire_msg_fast_lose_warn_flg = 0;
      this->ri_frnt_tire_msg_msg_old_flg = 0;
      this->ri_frnt_tire_msg_p = 0.0f;
      this->ri_frnt_tire_msg_sys_warn_flg = 0;
      this->ri_frnt_tire_msg_t = 0.0f;
      this->ri_frnt_tire_msg_t_warn_flg = 0;
      this->ri_frnt_tire_msg_tire_fillg_assi_p_sts = 0;
      this->ri_re_tire_msg_batt_lo_st = 0;
      this->ri_re_tire_msg_fast_lose_warn_flg = 0;
      this->ri_re_tire_msg_msg_old_flg = 0;
      this->ri_re_tire_msg_p = 0.0f;
      this->ri_re_tire_msg_sys_warn_flg = 0;
      this->ri_re_tire_msg_t = 0.0f;
      this->ri_re_tire_msg_t_warn_flg = 0;
      this->ri_re_tire_msg_tire_fillg_assi_p_sts = 0;
      this->occupy_mon_sts_drvr_sts = 0;
      this->sun_roof_posn_sts = 0;
      this->susp_posn_vert_le1_frnt = 0.0f;
      this->susp_posn_vert_le1_frnt_qf = 0;
      this->susp_posn_vert_le1_re = 0.0f;
      this->susp_posn_vert_le1_re_qf = 0;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt = 0.0f;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = 0;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_re = 0.0f;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = 0;
      this->twli_bri_raw_qf = 0;
      this->twli_bri_raw_twli_bri_raw = 0;
      this->win_posn_sts_at_drvr = 0;
      this->win_posn_sts_at_pass = 0;
      this->win_posn_sts_at_re_le = 0;
      this->win_posn_sts_at_re_ri = 0;
      this->brk_sys_sts_ad_l3_brk_fall_bck = 0;
      this->brk_sys_sts_brk_degradation = 0;
      this->brk_sys_sts_brk_sys_mod_cfmd = 0;
      this->tank_turn_mod_sts_tank_turn_mod_sts = 0;
      this->sfty_decel_group_safe_asy_sfty_ena_decel = 0;
      this->steer_tq_addl_for_ema_steer_tq_addl_for_ema = 0.0f;
      this->asy_emgy_lane_keep_aid_sts = 0;
      this->asy_lane_keep_aid_sts = 0;
      this->rcwm_brk_req_rcwm_brk_req = 0;
      this->asy_a_lgt_sts_asy_a_lgt_sts = 0;
      this->asy_a_lat_indcr = 0;
      this->asy_cnoa_crs_sts = 0;
      this->indcr_sts = 0;
    }
  }

  explicit BusToSmData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rev(_alloc),
    key_read_sts_to_asm(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tr_lock_sts = 0;
      this->door_drvr_lock_sts = 0;
      this->door_pass_lock_sts = 0;
      this->door_le_re_lock_sts = 0;
      this->door_ri_re_lock_sts = 0;
      this->brk_sys_sts_brk_sys_capability = 0;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->rev.begin(), this->rev.end(), 0);
      this->calltype_and_sts_ecall_status = 0;
      this->blt_lock_st_at_drvr = 0;
      this->blt_lock_st_err_sts_at_drvr = 0;
      this->esc_st_esc_st = 0;
      this->prk_lat_lgt_failr = 0;
      this->road_incln_qly = 0;
      this->veh_mtn_st = 0;
      this->whl_spd_circuml_frnt_le_qf = 0;
      this->whl_spd_circuml_frnt_ri_qf = 0;
      this->whl_spd_circuml_re_le_qf = 0;
      this->whl_spd_circuml_re_ri_qf = 0;
      this->gear_mov = 0;
      this->accr_pedl_psd_accr_pedl_psd = 0;
      this->accr_pedl_psd_sts = 0;
      this->typ_ext_req_to_upd_qf = 0;
      this->trsm_park_lockd = 0;
      this->door_drvr_sts = 0;
      this->door_le_re_sts = 0;
      this->door_pass_sts = 0;
      this->door_ri_re_sts = 0;
      this->hood_sts = 0;
      this->mirr_fold_sts_at_drvr = 0;
      this->mirr_fold_sts_at_pass = 0;
      this->tr_sts = 0;
      this->trlr_prsnt = 0;
      this->veh_mod_mngt_glb_safe1_car_mod_sts1 = 0;
      this->veh_mod_mngt_glb_safe1_usg_mod_sts = 0;
      this->steer_sts_to_park_assi = 0;
      this->indcr_typ_ext_req = 0;
      this->rainfall_amnt = 0;
      this->egy_lvl_elec_mai = 0;
      this->le_frnt_tire_msg_p_warn_flg = 0;
      this->le_re_tire_msg_p_warn_flg = 0;
      this->ri_frnt_tire_msg_p_warn_flg = 0;
      this->ri_re_tire_msg_p_warn_flg = 0;
      this->sm_lat_shake_hand_state = 0;
      this->sm_lon_shake_hand_state = 0;
      this->rcv_ctrl_req = 0;
      this->rcv_steertrim_req = 0;
      this->mob_dev_rcv_req1_mob_dev_sts = 0;
      this->dc_dc_actvd = 0;
      this->steer_whl_snsr_ag = 0.0f;
      this->ble_con_sts = 0;
      this->twbr_lockd_posn = 0;
      this->full_elec_twbr_posn = 0;
      this->vtsd_mode_sts = 0;
      std::fill<typename std::array<uint8_t, 12>::iterator, uint8_t>(this->key_read_sts_to_asm.begin(), this->key_read_sts_to_asm.end(), 0);
      this->mob_dev_rpa_req_rspa_ctrl = 0;
      this->mob_dev_rpa_req_rpa_req = 0;
      this->mob_dev_rpa_req_rpa_out_mode_sub_t = 0;
      this->mob_dev_rpa_req_mob_dev_sts = 0;
      this->crab_mov_mod_sts = 0;
      this->tank_turn_mod_sts = 0;
      this->pass_seat_sts2 = 0;
      this->hmi_max_ev_mod = 0;
      this->adcu_max_ev_mod = 0;
      this->lamp_req_by_veh_hld = 0;
      this->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = 0;
      this->msg_req_by_hill_dwn_ctrl = 0;
      this->esc_warn_indcn_req_esc_warn_indcn_req = 0;
      this->abs_ctrl_actv_ctrl_sts1 = 0;
      this->eng_st1_wd_sts_eng_st1_wd_sts = 0;
      this->crs_ctrl_ovrdn = 0;
      this->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = 0;
      this->drvr_steer_whl_hld_qly = 0;
      this->door_drvr_sts_with_fac_qly_door_sts = 0;
      this->door_drvr_sts_with_fac_qly_fac_qly = 0;
      this->lat_ctrl_mod_cfmd = 0;
      this->esc_ctrl_indcn = 0;
      this->pt_drvr_setg_drv_mod_req = 0;
      this->front_four_d_radar_sts_for_dim = 0;
      this->drvr_prsnt_sts = 0;
      this->wipr_actv = 0;
      this->stand_still_mgr_sts_for_hld = 0;
      this->pt_drvr_setg = 0;
      this->tptf_status_error = 0;
      this->tptf_status = 0;
      this->tptf_time_gap = 0;
      this->hmi_sod_lan_chg_switch = 0;
      this->hmi_drvr_sod_req_chg = 0;
      this->turn_indcr_monostable = 0;
      this->drvr_lane_chg_aut_actv_sts = 0;
      this->auto_lane_chg_with_navi_sw_onoff = 0;
      this->nop_cofm_of_lan_chag_onoff = 0;
      this->wipg_spd_info = 0;
      this->asy_safe_stop_sts = 0;
      this->hmi_sup_end_mod = 0;
      this->crash_sts_safe_sts = 0;
      this->gear_park_not_allow = 0;
      this->drvr_seat_sts = 0;
      this->drvr_seat_snsr_sts = 0;
      this->ad_l3_lat_ctrl_sts_ad_mod = 0;
      this->ad_l3_lgt_ctrl_sts_ad_mod = 0;
      this->accr_pedl_sts_flt_sts = 0;
      this->amb_t_raw_amb_t_val = 0.0f;
      this->body_hei = 0.0f;
      this->le_frnt_tire_msg_batt_lo_st = 0;
      this->le_frnt_tire_msg_fast_lose_warn_flg = 0;
      this->le_frnt_tire_msg_msg_old_flg = 0;
      this->le_frnt_tire_msg_p = 0.0f;
      this->le_frnt_tire_msg_sys_warn_flg = 0;
      this->le_frnt_tire_msg_t = 0.0f;
      this->le_frnt_tire_msg_t_warn_flg = 0;
      this->le_frnt_tire_msg_tire_fillg_assi_p_sts = 0;
      this->le_re_tire_msg_batt_lo_st = 0;
      this->le_re_tire_msg_fast_lose_warn_flg = 0;
      this->le_re_tire_msg_msg_old_flg = 0;
      this->le_re_tire_msg_p = 0.0f;
      this->le_re_tire_msg_sys_warn_flg = 0;
      this->le_re_tire_msg_t = 0.0f;
      this->le_re_tire_msg_t_warn_flg = 0;
      this->le_re_tire_msg_tire_fillg_assi_p_sts = 0;
      this->ri_frnt_tire_msg_batt_lo_st = 0;
      this->ri_frnt_tire_msg_fast_lose_warn_flg = 0;
      this->ri_frnt_tire_msg_msg_old_flg = 0;
      this->ri_frnt_tire_msg_p = 0.0f;
      this->ri_frnt_tire_msg_sys_warn_flg = 0;
      this->ri_frnt_tire_msg_t = 0.0f;
      this->ri_frnt_tire_msg_t_warn_flg = 0;
      this->ri_frnt_tire_msg_tire_fillg_assi_p_sts = 0;
      this->ri_re_tire_msg_batt_lo_st = 0;
      this->ri_re_tire_msg_fast_lose_warn_flg = 0;
      this->ri_re_tire_msg_msg_old_flg = 0;
      this->ri_re_tire_msg_p = 0.0f;
      this->ri_re_tire_msg_sys_warn_flg = 0;
      this->ri_re_tire_msg_t = 0.0f;
      this->ri_re_tire_msg_t_warn_flg = 0;
      this->ri_re_tire_msg_tire_fillg_assi_p_sts = 0;
      this->occupy_mon_sts_drvr_sts = 0;
      this->sun_roof_posn_sts = 0;
      this->susp_posn_vert_le1_frnt = 0.0f;
      this->susp_posn_vert_le1_frnt_qf = 0;
      this->susp_posn_vert_le1_re = 0.0f;
      this->susp_posn_vert_le1_re_qf = 0;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt = 0.0f;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = 0;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_re = 0.0f;
      this->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = 0;
      this->twli_bri_raw_qf = 0;
      this->twli_bri_raw_twli_bri_raw = 0;
      this->win_posn_sts_at_drvr = 0;
      this->win_posn_sts_at_pass = 0;
      this->win_posn_sts_at_re_le = 0;
      this->win_posn_sts_at_re_ri = 0;
      this->brk_sys_sts_ad_l3_brk_fall_bck = 0;
      this->brk_sys_sts_brk_degradation = 0;
      this->brk_sys_sts_brk_sys_mod_cfmd = 0;
      this->tank_turn_mod_sts_tank_turn_mod_sts = 0;
      this->sfty_decel_group_safe_asy_sfty_ena_decel = 0;
      this->steer_tq_addl_for_ema_steer_tq_addl_for_ema = 0.0f;
      this->asy_emgy_lane_keep_aid_sts = 0;
      this->asy_lane_keep_aid_sts = 0;
      this->rcwm_brk_req_rcwm_brk_req = 0;
      this->asy_a_lgt_sts_asy_a_lgt_sts = 0;
      this->asy_a_lat_indcr = 0;
      this->asy_cnoa_crs_sts = 0;
      this->indcr_sts = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _tr_lock_sts_type =
    uint8_t;
  _tr_lock_sts_type tr_lock_sts;
  using _door_drvr_lock_sts_type =
    uint8_t;
  _door_drvr_lock_sts_type door_drvr_lock_sts;
  using _door_pass_lock_sts_type =
    uint8_t;
  _door_pass_lock_sts_type door_pass_lock_sts;
  using _door_le_re_lock_sts_type =
    uint8_t;
  _door_le_re_lock_sts_type door_le_re_lock_sts;
  using _door_ri_re_lock_sts_type =
    uint8_t;
  _door_ri_re_lock_sts_type door_ri_re_lock_sts;
  using _brk_sys_sts_brk_sys_capability_type =
    uint8_t;
  _brk_sys_sts_brk_sys_capability_type brk_sys_sts_brk_sys_capability;
  using _rev_type =
    std::array<uint8_t, 2>;
  _rev_type rev;
  using _calltype_and_sts_ecall_status_type =
    uint8_t;
  _calltype_and_sts_ecall_status_type calltype_and_sts_ecall_status;
  using _blt_lock_st_at_drvr_type =
    uint8_t;
  _blt_lock_st_at_drvr_type blt_lock_st_at_drvr;
  using _blt_lock_st_err_sts_at_drvr_type =
    uint8_t;
  _blt_lock_st_err_sts_at_drvr_type blt_lock_st_err_sts_at_drvr;
  using _esc_st_esc_st_type =
    uint8_t;
  _esc_st_esc_st_type esc_st_esc_st;
  using _prk_lat_lgt_failr_type =
    uint8_t;
  _prk_lat_lgt_failr_type prk_lat_lgt_failr;
  using _road_incln_qly_type =
    uint8_t;
  _road_incln_qly_type road_incln_qly;
  using _veh_mtn_st_type =
    uint8_t;
  _veh_mtn_st_type veh_mtn_st;
  using _whl_spd_circuml_frnt_le_qf_type =
    uint8_t;
  _whl_spd_circuml_frnt_le_qf_type whl_spd_circuml_frnt_le_qf;
  using _whl_spd_circuml_frnt_ri_qf_type =
    uint8_t;
  _whl_spd_circuml_frnt_ri_qf_type whl_spd_circuml_frnt_ri_qf;
  using _whl_spd_circuml_re_le_qf_type =
    uint8_t;
  _whl_spd_circuml_re_le_qf_type whl_spd_circuml_re_le_qf;
  using _whl_spd_circuml_re_ri_qf_type =
    uint8_t;
  _whl_spd_circuml_re_ri_qf_type whl_spd_circuml_re_ri_qf;
  using _gear_mov_type =
    uint8_t;
  _gear_mov_type gear_mov;
  using _accr_pedl_psd_accr_pedl_psd_type =
    uint8_t;
  _accr_pedl_psd_accr_pedl_psd_type accr_pedl_psd_accr_pedl_psd;
  using _accr_pedl_psd_sts_type =
    uint8_t;
  _accr_pedl_psd_sts_type accr_pedl_psd_sts;
  using _typ_ext_req_to_upd_qf_type =
    uint8_t;
  _typ_ext_req_to_upd_qf_type typ_ext_req_to_upd_qf;
  using _trsm_park_lockd_type =
    uint8_t;
  _trsm_park_lockd_type trsm_park_lockd;
  using _door_drvr_sts_type =
    uint8_t;
  _door_drvr_sts_type door_drvr_sts;
  using _door_le_re_sts_type =
    uint8_t;
  _door_le_re_sts_type door_le_re_sts;
  using _door_pass_sts_type =
    uint8_t;
  _door_pass_sts_type door_pass_sts;
  using _door_ri_re_sts_type =
    uint8_t;
  _door_ri_re_sts_type door_ri_re_sts;
  using _hood_sts_type =
    uint8_t;
  _hood_sts_type hood_sts;
  using _mirr_fold_sts_at_drvr_type =
    uint8_t;
  _mirr_fold_sts_at_drvr_type mirr_fold_sts_at_drvr;
  using _mirr_fold_sts_at_pass_type =
    uint8_t;
  _mirr_fold_sts_at_pass_type mirr_fold_sts_at_pass;
  using _tr_sts_type =
    uint8_t;
  _tr_sts_type tr_sts;
  using _trlr_prsnt_type =
    uint8_t;
  _trlr_prsnt_type trlr_prsnt;
  using _veh_mod_mngt_glb_safe1_car_mod_sts1_type =
    uint8_t;
  _veh_mod_mngt_glb_safe1_car_mod_sts1_type veh_mod_mngt_glb_safe1_car_mod_sts1;
  using _veh_mod_mngt_glb_safe1_usg_mod_sts_type =
    uint8_t;
  _veh_mod_mngt_glb_safe1_usg_mod_sts_type veh_mod_mngt_glb_safe1_usg_mod_sts;
  using _steer_sts_to_park_assi_type =
    uint8_t;
  _steer_sts_to_park_assi_type steer_sts_to_park_assi;
  using _indcr_typ_ext_req_type =
    uint8_t;
  _indcr_typ_ext_req_type indcr_typ_ext_req;
  using _rainfall_amnt_type =
    uint8_t;
  _rainfall_amnt_type rainfall_amnt;
  using _egy_lvl_elec_mai_type =
    uint8_t;
  _egy_lvl_elec_mai_type egy_lvl_elec_mai;
  using _le_frnt_tire_msg_p_warn_flg_type =
    uint8_t;
  _le_frnt_tire_msg_p_warn_flg_type le_frnt_tire_msg_p_warn_flg;
  using _le_re_tire_msg_p_warn_flg_type =
    uint8_t;
  _le_re_tire_msg_p_warn_flg_type le_re_tire_msg_p_warn_flg;
  using _ri_frnt_tire_msg_p_warn_flg_type =
    uint8_t;
  _ri_frnt_tire_msg_p_warn_flg_type ri_frnt_tire_msg_p_warn_flg;
  using _ri_re_tire_msg_p_warn_flg_type =
    uint8_t;
  _ri_re_tire_msg_p_warn_flg_type ri_re_tire_msg_p_warn_flg;
  using _sm_lat_shake_hand_state_type =
    uint8_t;
  _sm_lat_shake_hand_state_type sm_lat_shake_hand_state;
  using _sm_lon_shake_hand_state_type =
    uint8_t;
  _sm_lon_shake_hand_state_type sm_lon_shake_hand_state;
  using _rcv_ctrl_req_type =
    uint8_t;
  _rcv_ctrl_req_type rcv_ctrl_req;
  using _rcv_steertrim_req_type =
    uint8_t;
  _rcv_steertrim_req_type rcv_steertrim_req;
  using _mob_dev_rcv_req1_mob_dev_sts_type =
    uint8_t;
  _mob_dev_rcv_req1_mob_dev_sts_type mob_dev_rcv_req1_mob_dev_sts;
  using _dc_dc_actvd_type =
    uint8_t;
  _dc_dc_actvd_type dc_dc_actvd;
  using _steer_whl_snsr_ag_type =
    float;
  _steer_whl_snsr_ag_type steer_whl_snsr_ag;
  using _ble_con_sts_type =
    uint8_t;
  _ble_con_sts_type ble_con_sts;
  using _twbr_lockd_posn_type =
    uint8_t;
  _twbr_lockd_posn_type twbr_lockd_posn;
  using _full_elec_twbr_posn_type =
    uint8_t;
  _full_elec_twbr_posn_type full_elec_twbr_posn;
  using _vtsd_mode_sts_type =
    uint8_t;
  _vtsd_mode_sts_type vtsd_mode_sts;
  using _key_read_sts_to_asm_type =
    std::array<uint8_t, 12>;
  _key_read_sts_to_asm_type key_read_sts_to_asm;
  using _mob_dev_rpa_req_rspa_ctrl_type =
    uint8_t;
  _mob_dev_rpa_req_rspa_ctrl_type mob_dev_rpa_req_rspa_ctrl;
  using _mob_dev_rpa_req_rpa_req_type =
    uint8_t;
  _mob_dev_rpa_req_rpa_req_type mob_dev_rpa_req_rpa_req;
  using _mob_dev_rpa_req_rpa_out_mode_sub_t_type =
    uint8_t;
  _mob_dev_rpa_req_rpa_out_mode_sub_t_type mob_dev_rpa_req_rpa_out_mode_sub_t;
  using _mob_dev_rpa_req_mob_dev_sts_type =
    uint8_t;
  _mob_dev_rpa_req_mob_dev_sts_type mob_dev_rpa_req_mob_dev_sts;
  using _crab_mov_mod_sts_type =
    uint8_t;
  _crab_mov_mod_sts_type crab_mov_mod_sts;
  using _tank_turn_mod_sts_type =
    uint8_t;
  _tank_turn_mod_sts_type tank_turn_mod_sts;
  using _pass_seat_sts2_type =
    uint8_t;
  _pass_seat_sts2_type pass_seat_sts2;
  using _hmi_max_ev_mod_type =
    uint8_t;
  _hmi_max_ev_mod_type hmi_max_ev_mod;
  using _adcu_max_ev_mod_type =
    uint8_t;
  _adcu_max_ev_mod_type adcu_max_ev_mod;
  using _lamp_req_by_veh_hld_type =
    uint8_t;
  _lamp_req_by_veh_hld_type lamp_req_by_veh_hld;
  using _ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn_type =
    uint8_t;
  _ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn_type ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn;
  using _msg_req_by_hill_dwn_ctrl_type =
    uint8_t;
  _msg_req_by_hill_dwn_ctrl_type msg_req_by_hill_dwn_ctrl;
  using _esc_warn_indcn_req_esc_warn_indcn_req_type =
    uint8_t;
  _esc_warn_indcn_req_esc_warn_indcn_req_type esc_warn_indcn_req_esc_warn_indcn_req;
  using _abs_ctrl_actv_ctrl_sts1_type =
    uint8_t;
  _abs_ctrl_actv_ctrl_sts1_type abs_ctrl_actv_ctrl_sts1;
  using _eng_st1_wd_sts_eng_st1_wd_sts_type =
    uint8_t;
  _eng_st1_wd_sts_eng_st1_wd_sts_type eng_st1_wd_sts_eng_st1_wd_sts;
  using _crs_ctrl_ovrdn_type =
    uint8_t;
  _crs_ctrl_ovrdn_type crs_ctrl_ovrdn;
  using _veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai_type =
    uint8_t;
  _veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai_type veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai;
  using _drvr_steer_whl_hld_qly_type =
    uint8_t;
  _drvr_steer_whl_hld_qly_type drvr_steer_whl_hld_qly;
  using _door_drvr_sts_with_fac_qly_door_sts_type =
    uint8_t;
  _door_drvr_sts_with_fac_qly_door_sts_type door_drvr_sts_with_fac_qly_door_sts;
  using _door_drvr_sts_with_fac_qly_fac_qly_type =
    uint8_t;
  _door_drvr_sts_with_fac_qly_fac_qly_type door_drvr_sts_with_fac_qly_fac_qly;
  using _lat_ctrl_mod_cfmd_type =
    uint8_t;
  _lat_ctrl_mod_cfmd_type lat_ctrl_mod_cfmd;
  using _esc_ctrl_indcn_type =
    uint8_t;
  _esc_ctrl_indcn_type esc_ctrl_indcn;
  using _pt_drvr_setg_drv_mod_req_type =
    uint8_t;
  _pt_drvr_setg_drv_mod_req_type pt_drvr_setg_drv_mod_req;
  using _front_four_d_radar_sts_for_dim_type =
    uint8_t;
  _front_four_d_radar_sts_for_dim_type front_four_d_radar_sts_for_dim;
  using _drvr_prsnt_sts_type =
    uint8_t;
  _drvr_prsnt_sts_type drvr_prsnt_sts;
  using _wipr_actv_type =
    uint8_t;
  _wipr_actv_type wipr_actv;
  using _stand_still_mgr_sts_for_hld_type =
    uint8_t;
  _stand_still_mgr_sts_for_hld_type stand_still_mgr_sts_for_hld;
  using _pt_drvr_setg_type =
    uint8_t;
  _pt_drvr_setg_type pt_drvr_setg;
  using _tptf_status_error_type =
    uint8_t;
  _tptf_status_error_type tptf_status_error;
  using _tptf_status_type =
    uint8_t;
  _tptf_status_type tptf_status;
  using _tptf_time_gap_type =
    uint8_t;
  _tptf_time_gap_type tptf_time_gap;
  using _hmi_sod_lan_chg_switch_type =
    uint8_t;
  _hmi_sod_lan_chg_switch_type hmi_sod_lan_chg_switch;
  using _hmi_drvr_sod_req_chg_type =
    uint8_t;
  _hmi_drvr_sod_req_chg_type hmi_drvr_sod_req_chg;
  using _turn_indcr_monostable_type =
    uint8_t;
  _turn_indcr_monostable_type turn_indcr_monostable;
  using _drvr_lane_chg_aut_actv_sts_type =
    uint8_t;
  _drvr_lane_chg_aut_actv_sts_type drvr_lane_chg_aut_actv_sts;
  using _auto_lane_chg_with_navi_sw_onoff_type =
    uint8_t;
  _auto_lane_chg_with_navi_sw_onoff_type auto_lane_chg_with_navi_sw_onoff;
  using _nop_cofm_of_lan_chag_onoff_type =
    uint8_t;
  _nop_cofm_of_lan_chag_onoff_type nop_cofm_of_lan_chag_onoff;
  using _wipg_spd_info_type =
    uint8_t;
  _wipg_spd_info_type wipg_spd_info;
  using _asy_safe_stop_sts_type =
    uint8_t;
  _asy_safe_stop_sts_type asy_safe_stop_sts;
  using _hmi_sup_end_mod_type =
    uint8_t;
  _hmi_sup_end_mod_type hmi_sup_end_mod;
  using _crash_sts_safe_sts_type =
    uint8_t;
  _crash_sts_safe_sts_type crash_sts_safe_sts;
  using _gear_park_not_allow_type =
    uint8_t;
  _gear_park_not_allow_type gear_park_not_allow;
  using _drvr_seat_sts_type =
    uint8_t;
  _drvr_seat_sts_type drvr_seat_sts;
  using _drvr_seat_snsr_sts_type =
    uint8_t;
  _drvr_seat_snsr_sts_type drvr_seat_snsr_sts;
  using _ad_l3_lat_ctrl_sts_ad_mod_type =
    uint8_t;
  _ad_l3_lat_ctrl_sts_ad_mod_type ad_l3_lat_ctrl_sts_ad_mod;
  using _ad_l3_lgt_ctrl_sts_ad_mod_type =
    uint8_t;
  _ad_l3_lgt_ctrl_sts_ad_mod_type ad_l3_lgt_ctrl_sts_ad_mod;
  using _accr_pedl_sts_flt_sts_type =
    uint8_t;
  _accr_pedl_sts_flt_sts_type accr_pedl_sts_flt_sts;
  using _amb_t_raw_amb_t_val_type =
    float;
  _amb_t_raw_amb_t_val_type amb_t_raw_amb_t_val;
  using _body_hei_type =
    float;
  _body_hei_type body_hei;
  using _le_frnt_tire_msg_batt_lo_st_type =
    uint8_t;
  _le_frnt_tire_msg_batt_lo_st_type le_frnt_tire_msg_batt_lo_st;
  using _le_frnt_tire_msg_fast_lose_warn_flg_type =
    uint8_t;
  _le_frnt_tire_msg_fast_lose_warn_flg_type le_frnt_tire_msg_fast_lose_warn_flg;
  using _le_frnt_tire_msg_msg_old_flg_type =
    uint8_t;
  _le_frnt_tire_msg_msg_old_flg_type le_frnt_tire_msg_msg_old_flg;
  using _le_frnt_tire_msg_p_type =
    float;
  _le_frnt_tire_msg_p_type le_frnt_tire_msg_p;
  using _le_frnt_tire_msg_sys_warn_flg_type =
    uint8_t;
  _le_frnt_tire_msg_sys_warn_flg_type le_frnt_tire_msg_sys_warn_flg;
  using _le_frnt_tire_msg_t_type =
    float;
  _le_frnt_tire_msg_t_type le_frnt_tire_msg_t;
  using _le_frnt_tire_msg_t_warn_flg_type =
    uint8_t;
  _le_frnt_tire_msg_t_warn_flg_type le_frnt_tire_msg_t_warn_flg;
  using _le_frnt_tire_msg_tire_fillg_assi_p_sts_type =
    uint8_t;
  _le_frnt_tire_msg_tire_fillg_assi_p_sts_type le_frnt_tire_msg_tire_fillg_assi_p_sts;
  using _le_re_tire_msg_batt_lo_st_type =
    uint8_t;
  _le_re_tire_msg_batt_lo_st_type le_re_tire_msg_batt_lo_st;
  using _le_re_tire_msg_fast_lose_warn_flg_type =
    uint8_t;
  _le_re_tire_msg_fast_lose_warn_flg_type le_re_tire_msg_fast_lose_warn_flg;
  using _le_re_tire_msg_msg_old_flg_type =
    uint8_t;
  _le_re_tire_msg_msg_old_flg_type le_re_tire_msg_msg_old_flg;
  using _le_re_tire_msg_p_type =
    float;
  _le_re_tire_msg_p_type le_re_tire_msg_p;
  using _le_re_tire_msg_sys_warn_flg_type =
    uint8_t;
  _le_re_tire_msg_sys_warn_flg_type le_re_tire_msg_sys_warn_flg;
  using _le_re_tire_msg_t_type =
    float;
  _le_re_tire_msg_t_type le_re_tire_msg_t;
  using _le_re_tire_msg_t_warn_flg_type =
    uint8_t;
  _le_re_tire_msg_t_warn_flg_type le_re_tire_msg_t_warn_flg;
  using _le_re_tire_msg_tire_fillg_assi_p_sts_type =
    uint8_t;
  _le_re_tire_msg_tire_fillg_assi_p_sts_type le_re_tire_msg_tire_fillg_assi_p_sts;
  using _ri_frnt_tire_msg_batt_lo_st_type =
    uint8_t;
  _ri_frnt_tire_msg_batt_lo_st_type ri_frnt_tire_msg_batt_lo_st;
  using _ri_frnt_tire_msg_fast_lose_warn_flg_type =
    uint8_t;
  _ri_frnt_tire_msg_fast_lose_warn_flg_type ri_frnt_tire_msg_fast_lose_warn_flg;
  using _ri_frnt_tire_msg_msg_old_flg_type =
    uint8_t;
  _ri_frnt_tire_msg_msg_old_flg_type ri_frnt_tire_msg_msg_old_flg;
  using _ri_frnt_tire_msg_p_type =
    float;
  _ri_frnt_tire_msg_p_type ri_frnt_tire_msg_p;
  using _ri_frnt_tire_msg_sys_warn_flg_type =
    uint8_t;
  _ri_frnt_tire_msg_sys_warn_flg_type ri_frnt_tire_msg_sys_warn_flg;
  using _ri_frnt_tire_msg_t_type =
    float;
  _ri_frnt_tire_msg_t_type ri_frnt_tire_msg_t;
  using _ri_frnt_tire_msg_t_warn_flg_type =
    uint8_t;
  _ri_frnt_tire_msg_t_warn_flg_type ri_frnt_tire_msg_t_warn_flg;
  using _ri_frnt_tire_msg_tire_fillg_assi_p_sts_type =
    uint8_t;
  _ri_frnt_tire_msg_tire_fillg_assi_p_sts_type ri_frnt_tire_msg_tire_fillg_assi_p_sts;
  using _ri_re_tire_msg_batt_lo_st_type =
    uint8_t;
  _ri_re_tire_msg_batt_lo_st_type ri_re_tire_msg_batt_lo_st;
  using _ri_re_tire_msg_fast_lose_warn_flg_type =
    uint8_t;
  _ri_re_tire_msg_fast_lose_warn_flg_type ri_re_tire_msg_fast_lose_warn_flg;
  using _ri_re_tire_msg_msg_old_flg_type =
    uint8_t;
  _ri_re_tire_msg_msg_old_flg_type ri_re_tire_msg_msg_old_flg;
  using _ri_re_tire_msg_p_type =
    float;
  _ri_re_tire_msg_p_type ri_re_tire_msg_p;
  using _ri_re_tire_msg_sys_warn_flg_type =
    uint8_t;
  _ri_re_tire_msg_sys_warn_flg_type ri_re_tire_msg_sys_warn_flg;
  using _ri_re_tire_msg_t_type =
    float;
  _ri_re_tire_msg_t_type ri_re_tire_msg_t;
  using _ri_re_tire_msg_t_warn_flg_type =
    uint8_t;
  _ri_re_tire_msg_t_warn_flg_type ri_re_tire_msg_t_warn_flg;
  using _ri_re_tire_msg_tire_fillg_assi_p_sts_type =
    uint8_t;
  _ri_re_tire_msg_tire_fillg_assi_p_sts_type ri_re_tire_msg_tire_fillg_assi_p_sts;
  using _occupy_mon_sts_drvr_sts_type =
    uint8_t;
  _occupy_mon_sts_drvr_sts_type occupy_mon_sts_drvr_sts;
  using _sun_roof_posn_sts_type =
    uint8_t;
  _sun_roof_posn_sts_type sun_roof_posn_sts;
  using _susp_posn_vert_le1_frnt_type =
    float;
  _susp_posn_vert_le1_frnt_type susp_posn_vert_le1_frnt;
  using _susp_posn_vert_le1_frnt_qf_type =
    uint8_t;
  _susp_posn_vert_le1_frnt_qf_type susp_posn_vert_le1_frnt_qf;
  using _susp_posn_vert_le1_re_type =
    float;
  _susp_posn_vert_le1_re_type susp_posn_vert_le1_re;
  using _susp_posn_vert_le1_re_qf_type =
    uint8_t;
  _susp_posn_vert_le1_re_qf_type susp_posn_vert_le1_re_qf;
  using _susp_posn_vert_ri1_susp_posn_vert_ri_frnt_type =
    float;
  _susp_posn_vert_ri1_susp_posn_vert_ri_frnt_type susp_posn_vert_ri1_susp_posn_vert_ri_frnt;
  using _susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf_type =
    uint8_t;
  _susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf_type susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf;
  using _susp_posn_vert_ri1_susp_posn_vert_ri_re_type =
    float;
  _susp_posn_vert_ri1_susp_posn_vert_ri_re_type susp_posn_vert_ri1_susp_posn_vert_ri_re;
  using _susp_posn_vert_ri1_susp_posn_vert_ri_re_qf_type =
    uint8_t;
  _susp_posn_vert_ri1_susp_posn_vert_ri_re_qf_type susp_posn_vert_ri1_susp_posn_vert_ri_re_qf;
  using _twli_bri_raw_qf_type =
    uint8_t;
  _twli_bri_raw_qf_type twli_bri_raw_qf;
  using _twli_bri_raw_twli_bri_raw_type =
    uint8_t;
  _twli_bri_raw_twli_bri_raw_type twli_bri_raw_twli_bri_raw;
  using _win_posn_sts_at_drvr_type =
    uint8_t;
  _win_posn_sts_at_drvr_type win_posn_sts_at_drvr;
  using _win_posn_sts_at_pass_type =
    uint8_t;
  _win_posn_sts_at_pass_type win_posn_sts_at_pass;
  using _win_posn_sts_at_re_le_type =
    uint8_t;
  _win_posn_sts_at_re_le_type win_posn_sts_at_re_le;
  using _win_posn_sts_at_re_ri_type =
    uint8_t;
  _win_posn_sts_at_re_ri_type win_posn_sts_at_re_ri;
  using _brk_sys_sts_ad_l3_brk_fall_bck_type =
    uint8_t;
  _brk_sys_sts_ad_l3_brk_fall_bck_type brk_sys_sts_ad_l3_brk_fall_bck;
  using _brk_sys_sts_brk_degradation_type =
    uint8_t;
  _brk_sys_sts_brk_degradation_type brk_sys_sts_brk_degradation;
  using _brk_sys_sts_brk_sys_mod_cfmd_type =
    uint8_t;
  _brk_sys_sts_brk_sys_mod_cfmd_type brk_sys_sts_brk_sys_mod_cfmd;
  using _tank_turn_mod_sts_tank_turn_mod_sts_type =
    uint8_t;
  _tank_turn_mod_sts_tank_turn_mod_sts_type tank_turn_mod_sts_tank_turn_mod_sts;
  using _sfty_decel_group_safe_asy_sfty_ena_decel_type =
    uint8_t;
  _sfty_decel_group_safe_asy_sfty_ena_decel_type sfty_decel_group_safe_asy_sfty_ena_decel;
  using _steer_tq_addl_for_ema_steer_tq_addl_for_ema_type =
    float;
  _steer_tq_addl_for_ema_steer_tq_addl_for_ema_type steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  using _asy_emgy_lane_keep_aid_sts_type =
    uint8_t;
  _asy_emgy_lane_keep_aid_sts_type asy_emgy_lane_keep_aid_sts;
  using _asy_lane_keep_aid_sts_type =
    uint8_t;
  _asy_lane_keep_aid_sts_type asy_lane_keep_aid_sts;
  using _rcwm_brk_req_rcwm_brk_req_type =
    uint8_t;
  _rcwm_brk_req_rcwm_brk_req_type rcwm_brk_req_rcwm_brk_req;
  using _asy_a_lgt_sts_asy_a_lgt_sts_type =
    uint8_t;
  _asy_a_lgt_sts_asy_a_lgt_sts_type asy_a_lgt_sts_asy_a_lgt_sts;
  using _asy_a_lat_indcr_type =
    uint8_t;
  _asy_a_lat_indcr_type asy_a_lat_indcr;
  using _asy_cnoa_crs_sts_type =
    uint8_t;
  _asy_cnoa_crs_sts_type asy_cnoa_crs_sts;
  using _indcr_sts_type =
    uint8_t;
  _indcr_sts_type indcr_sts;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__tr_lock_sts(
    const uint8_t & _arg)
  {
    this->tr_lock_sts = _arg;
    return *this;
  }
  Type & set__door_drvr_lock_sts(
    const uint8_t & _arg)
  {
    this->door_drvr_lock_sts = _arg;
    return *this;
  }
  Type & set__door_pass_lock_sts(
    const uint8_t & _arg)
  {
    this->door_pass_lock_sts = _arg;
    return *this;
  }
  Type & set__door_le_re_lock_sts(
    const uint8_t & _arg)
  {
    this->door_le_re_lock_sts = _arg;
    return *this;
  }
  Type & set__door_ri_re_lock_sts(
    const uint8_t & _arg)
  {
    this->door_ri_re_lock_sts = _arg;
    return *this;
  }
  Type & set__brk_sys_sts_brk_sys_capability(
    const uint8_t & _arg)
  {
    this->brk_sys_sts_brk_sys_capability = _arg;
    return *this;
  }
  Type & set__rev(
    const std::array<uint8_t, 2> & _arg)
  {
    this->rev = _arg;
    return *this;
  }
  Type & set__calltype_and_sts_ecall_status(
    const uint8_t & _arg)
  {
    this->calltype_and_sts_ecall_status = _arg;
    return *this;
  }
  Type & set__blt_lock_st_at_drvr(
    const uint8_t & _arg)
  {
    this->blt_lock_st_at_drvr = _arg;
    return *this;
  }
  Type & set__blt_lock_st_err_sts_at_drvr(
    const uint8_t & _arg)
  {
    this->blt_lock_st_err_sts_at_drvr = _arg;
    return *this;
  }
  Type & set__esc_st_esc_st(
    const uint8_t & _arg)
  {
    this->esc_st_esc_st = _arg;
    return *this;
  }
  Type & set__prk_lat_lgt_failr(
    const uint8_t & _arg)
  {
    this->prk_lat_lgt_failr = _arg;
    return *this;
  }
  Type & set__road_incln_qly(
    const uint8_t & _arg)
  {
    this->road_incln_qly = _arg;
    return *this;
  }
  Type & set__veh_mtn_st(
    const uint8_t & _arg)
  {
    this->veh_mtn_st = _arg;
    return *this;
  }
  Type & set__whl_spd_circuml_frnt_le_qf(
    const uint8_t & _arg)
  {
    this->whl_spd_circuml_frnt_le_qf = _arg;
    return *this;
  }
  Type & set__whl_spd_circuml_frnt_ri_qf(
    const uint8_t & _arg)
  {
    this->whl_spd_circuml_frnt_ri_qf = _arg;
    return *this;
  }
  Type & set__whl_spd_circuml_re_le_qf(
    const uint8_t & _arg)
  {
    this->whl_spd_circuml_re_le_qf = _arg;
    return *this;
  }
  Type & set__whl_spd_circuml_re_ri_qf(
    const uint8_t & _arg)
  {
    this->whl_spd_circuml_re_ri_qf = _arg;
    return *this;
  }
  Type & set__gear_mov(
    const uint8_t & _arg)
  {
    this->gear_mov = _arg;
    return *this;
  }
  Type & set__accr_pedl_psd_accr_pedl_psd(
    const uint8_t & _arg)
  {
    this->accr_pedl_psd_accr_pedl_psd = _arg;
    return *this;
  }
  Type & set__accr_pedl_psd_sts(
    const uint8_t & _arg)
  {
    this->accr_pedl_psd_sts = _arg;
    return *this;
  }
  Type & set__typ_ext_req_to_upd_qf(
    const uint8_t & _arg)
  {
    this->typ_ext_req_to_upd_qf = _arg;
    return *this;
  }
  Type & set__trsm_park_lockd(
    const uint8_t & _arg)
  {
    this->trsm_park_lockd = _arg;
    return *this;
  }
  Type & set__door_drvr_sts(
    const uint8_t & _arg)
  {
    this->door_drvr_sts = _arg;
    return *this;
  }
  Type & set__door_le_re_sts(
    const uint8_t & _arg)
  {
    this->door_le_re_sts = _arg;
    return *this;
  }
  Type & set__door_pass_sts(
    const uint8_t & _arg)
  {
    this->door_pass_sts = _arg;
    return *this;
  }
  Type & set__door_ri_re_sts(
    const uint8_t & _arg)
  {
    this->door_ri_re_sts = _arg;
    return *this;
  }
  Type & set__hood_sts(
    const uint8_t & _arg)
  {
    this->hood_sts = _arg;
    return *this;
  }
  Type & set__mirr_fold_sts_at_drvr(
    const uint8_t & _arg)
  {
    this->mirr_fold_sts_at_drvr = _arg;
    return *this;
  }
  Type & set__mirr_fold_sts_at_pass(
    const uint8_t & _arg)
  {
    this->mirr_fold_sts_at_pass = _arg;
    return *this;
  }
  Type & set__tr_sts(
    const uint8_t & _arg)
  {
    this->tr_sts = _arg;
    return *this;
  }
  Type & set__trlr_prsnt(
    const uint8_t & _arg)
  {
    this->trlr_prsnt = _arg;
    return *this;
  }
  Type & set__veh_mod_mngt_glb_safe1_car_mod_sts1(
    const uint8_t & _arg)
  {
    this->veh_mod_mngt_glb_safe1_car_mod_sts1 = _arg;
    return *this;
  }
  Type & set__veh_mod_mngt_glb_safe1_usg_mod_sts(
    const uint8_t & _arg)
  {
    this->veh_mod_mngt_glb_safe1_usg_mod_sts = _arg;
    return *this;
  }
  Type & set__steer_sts_to_park_assi(
    const uint8_t & _arg)
  {
    this->steer_sts_to_park_assi = _arg;
    return *this;
  }
  Type & set__indcr_typ_ext_req(
    const uint8_t & _arg)
  {
    this->indcr_typ_ext_req = _arg;
    return *this;
  }
  Type & set__rainfall_amnt(
    const uint8_t & _arg)
  {
    this->rainfall_amnt = _arg;
    return *this;
  }
  Type & set__egy_lvl_elec_mai(
    const uint8_t & _arg)
  {
    this->egy_lvl_elec_mai = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_p_warn_flg(
    const uint8_t & _arg)
  {
    this->le_frnt_tire_msg_p_warn_flg = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_p_warn_flg(
    const uint8_t & _arg)
  {
    this->le_re_tire_msg_p_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_p_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_frnt_tire_msg_p_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_p_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_re_tire_msg_p_warn_flg = _arg;
    return *this;
  }
  Type & set__sm_lat_shake_hand_state(
    const uint8_t & _arg)
  {
    this->sm_lat_shake_hand_state = _arg;
    return *this;
  }
  Type & set__sm_lon_shake_hand_state(
    const uint8_t & _arg)
  {
    this->sm_lon_shake_hand_state = _arg;
    return *this;
  }
  Type & set__rcv_ctrl_req(
    const uint8_t & _arg)
  {
    this->rcv_ctrl_req = _arg;
    return *this;
  }
  Type & set__rcv_steertrim_req(
    const uint8_t & _arg)
  {
    this->rcv_steertrim_req = _arg;
    return *this;
  }
  Type & set__mob_dev_rcv_req1_mob_dev_sts(
    const uint8_t & _arg)
  {
    this->mob_dev_rcv_req1_mob_dev_sts = _arg;
    return *this;
  }
  Type & set__dc_dc_actvd(
    const uint8_t & _arg)
  {
    this->dc_dc_actvd = _arg;
    return *this;
  }
  Type & set__steer_whl_snsr_ag(
    const float & _arg)
  {
    this->steer_whl_snsr_ag = _arg;
    return *this;
  }
  Type & set__ble_con_sts(
    const uint8_t & _arg)
  {
    this->ble_con_sts = _arg;
    return *this;
  }
  Type & set__twbr_lockd_posn(
    const uint8_t & _arg)
  {
    this->twbr_lockd_posn = _arg;
    return *this;
  }
  Type & set__full_elec_twbr_posn(
    const uint8_t & _arg)
  {
    this->full_elec_twbr_posn = _arg;
    return *this;
  }
  Type & set__vtsd_mode_sts(
    const uint8_t & _arg)
  {
    this->vtsd_mode_sts = _arg;
    return *this;
  }
  Type & set__key_read_sts_to_asm(
    const std::array<uint8_t, 12> & _arg)
  {
    this->key_read_sts_to_asm = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_rspa_ctrl(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_rspa_ctrl = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_rpa_req(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_rpa_req = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_rpa_out_mode_sub_t(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_rpa_out_mode_sub_t = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_mob_dev_sts(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_mob_dev_sts = _arg;
    return *this;
  }
  Type & set__crab_mov_mod_sts(
    const uint8_t & _arg)
  {
    this->crab_mov_mod_sts = _arg;
    return *this;
  }
  Type & set__tank_turn_mod_sts(
    const uint8_t & _arg)
  {
    this->tank_turn_mod_sts = _arg;
    return *this;
  }
  Type & set__pass_seat_sts2(
    const uint8_t & _arg)
  {
    this->pass_seat_sts2 = _arg;
    return *this;
  }
  Type & set__hmi_max_ev_mod(
    const uint8_t & _arg)
  {
    this->hmi_max_ev_mod = _arg;
    return *this;
  }
  Type & set__adcu_max_ev_mod(
    const uint8_t & _arg)
  {
    this->adcu_max_ev_mod = _arg;
    return *this;
  }
  Type & set__lamp_req_by_veh_hld(
    const uint8_t & _arg)
  {
    this->lamp_req_by_veh_hld = _arg;
    return *this;
  }
  Type & set__ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn(
    const uint8_t & _arg)
  {
    this->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn = _arg;
    return *this;
  }
  Type & set__msg_req_by_hill_dwn_ctrl(
    const uint8_t & _arg)
  {
    this->msg_req_by_hill_dwn_ctrl = _arg;
    return *this;
  }
  Type & set__esc_warn_indcn_req_esc_warn_indcn_req(
    const uint8_t & _arg)
  {
    this->esc_warn_indcn_req_esc_warn_indcn_req = _arg;
    return *this;
  }
  Type & set__abs_ctrl_actv_ctrl_sts1(
    const uint8_t & _arg)
  {
    this->abs_ctrl_actv_ctrl_sts1 = _arg;
    return *this;
  }
  Type & set__eng_st1_wd_sts_eng_st1_wd_sts(
    const uint8_t & _arg)
  {
    this->eng_st1_wd_sts_eng_st1_wd_sts = _arg;
    return *this;
  }
  Type & set__crs_ctrl_ovrdn(
    const uint8_t & _arg)
  {
    this->crs_ctrl_ovrdn = _arg;
    return *this;
  }
  Type & set__veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai(
    const uint8_t & _arg)
  {
    this->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai = _arg;
    return *this;
  }
  Type & set__drvr_steer_whl_hld_qly(
    const uint8_t & _arg)
  {
    this->drvr_steer_whl_hld_qly = _arg;
    return *this;
  }
  Type & set__door_drvr_sts_with_fac_qly_door_sts(
    const uint8_t & _arg)
  {
    this->door_drvr_sts_with_fac_qly_door_sts = _arg;
    return *this;
  }
  Type & set__door_drvr_sts_with_fac_qly_fac_qly(
    const uint8_t & _arg)
  {
    this->door_drvr_sts_with_fac_qly_fac_qly = _arg;
    return *this;
  }
  Type & set__lat_ctrl_mod_cfmd(
    const uint8_t & _arg)
  {
    this->lat_ctrl_mod_cfmd = _arg;
    return *this;
  }
  Type & set__esc_ctrl_indcn(
    const uint8_t & _arg)
  {
    this->esc_ctrl_indcn = _arg;
    return *this;
  }
  Type & set__pt_drvr_setg_drv_mod_req(
    const uint8_t & _arg)
  {
    this->pt_drvr_setg_drv_mod_req = _arg;
    return *this;
  }
  Type & set__front_four_d_radar_sts_for_dim(
    const uint8_t & _arg)
  {
    this->front_four_d_radar_sts_for_dim = _arg;
    return *this;
  }
  Type & set__drvr_prsnt_sts(
    const uint8_t & _arg)
  {
    this->drvr_prsnt_sts = _arg;
    return *this;
  }
  Type & set__wipr_actv(
    const uint8_t & _arg)
  {
    this->wipr_actv = _arg;
    return *this;
  }
  Type & set__stand_still_mgr_sts_for_hld(
    const uint8_t & _arg)
  {
    this->stand_still_mgr_sts_for_hld = _arg;
    return *this;
  }
  Type & set__pt_drvr_setg(
    const uint8_t & _arg)
  {
    this->pt_drvr_setg = _arg;
    return *this;
  }
  Type & set__tptf_status_error(
    const uint8_t & _arg)
  {
    this->tptf_status_error = _arg;
    return *this;
  }
  Type & set__tptf_status(
    const uint8_t & _arg)
  {
    this->tptf_status = _arg;
    return *this;
  }
  Type & set__tptf_time_gap(
    const uint8_t & _arg)
  {
    this->tptf_time_gap = _arg;
    return *this;
  }
  Type & set__hmi_sod_lan_chg_switch(
    const uint8_t & _arg)
  {
    this->hmi_sod_lan_chg_switch = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_chg(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_chg = _arg;
    return *this;
  }
  Type & set__turn_indcr_monostable(
    const uint8_t & _arg)
  {
    this->turn_indcr_monostable = _arg;
    return *this;
  }
  Type & set__drvr_lane_chg_aut_actv_sts(
    const uint8_t & _arg)
  {
    this->drvr_lane_chg_aut_actv_sts = _arg;
    return *this;
  }
  Type & set__auto_lane_chg_with_navi_sw_onoff(
    const uint8_t & _arg)
  {
    this->auto_lane_chg_with_navi_sw_onoff = _arg;
    return *this;
  }
  Type & set__nop_cofm_of_lan_chag_onoff(
    const uint8_t & _arg)
  {
    this->nop_cofm_of_lan_chag_onoff = _arg;
    return *this;
  }
  Type & set__wipg_spd_info(
    const uint8_t & _arg)
  {
    this->wipg_spd_info = _arg;
    return *this;
  }
  Type & set__asy_safe_stop_sts(
    const uint8_t & _arg)
  {
    this->asy_safe_stop_sts = _arg;
    return *this;
  }
  Type & set__hmi_sup_end_mod(
    const uint8_t & _arg)
  {
    this->hmi_sup_end_mod = _arg;
    return *this;
  }
  Type & set__crash_sts_safe_sts(
    const uint8_t & _arg)
  {
    this->crash_sts_safe_sts = _arg;
    return *this;
  }
  Type & set__gear_park_not_allow(
    const uint8_t & _arg)
  {
    this->gear_park_not_allow = _arg;
    return *this;
  }
  Type & set__drvr_seat_sts(
    const uint8_t & _arg)
  {
    this->drvr_seat_sts = _arg;
    return *this;
  }
  Type & set__drvr_seat_snsr_sts(
    const uint8_t & _arg)
  {
    this->drvr_seat_snsr_sts = _arg;
    return *this;
  }
  Type & set__ad_l3_lat_ctrl_sts_ad_mod(
    const uint8_t & _arg)
  {
    this->ad_l3_lat_ctrl_sts_ad_mod = _arg;
    return *this;
  }
  Type & set__ad_l3_lgt_ctrl_sts_ad_mod(
    const uint8_t & _arg)
  {
    this->ad_l3_lgt_ctrl_sts_ad_mod = _arg;
    return *this;
  }
  Type & set__accr_pedl_sts_flt_sts(
    const uint8_t & _arg)
  {
    this->accr_pedl_sts_flt_sts = _arg;
    return *this;
  }
  Type & set__amb_t_raw_amb_t_val(
    const float & _arg)
  {
    this->amb_t_raw_amb_t_val = _arg;
    return *this;
  }
  Type & set__body_hei(
    const float & _arg)
  {
    this->body_hei = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_batt_lo_st(
    const uint8_t & _arg)
  {
    this->le_frnt_tire_msg_batt_lo_st = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_fast_lose_warn_flg(
    const uint8_t & _arg)
  {
    this->le_frnt_tire_msg_fast_lose_warn_flg = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_msg_old_flg(
    const uint8_t & _arg)
  {
    this->le_frnt_tire_msg_msg_old_flg = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_p(
    const float & _arg)
  {
    this->le_frnt_tire_msg_p = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_sys_warn_flg(
    const uint8_t & _arg)
  {
    this->le_frnt_tire_msg_sys_warn_flg = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_t(
    const float & _arg)
  {
    this->le_frnt_tire_msg_t = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_t_warn_flg(
    const uint8_t & _arg)
  {
    this->le_frnt_tire_msg_t_warn_flg = _arg;
    return *this;
  }
  Type & set__le_frnt_tire_msg_tire_fillg_assi_p_sts(
    const uint8_t & _arg)
  {
    this->le_frnt_tire_msg_tire_fillg_assi_p_sts = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_batt_lo_st(
    const uint8_t & _arg)
  {
    this->le_re_tire_msg_batt_lo_st = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_fast_lose_warn_flg(
    const uint8_t & _arg)
  {
    this->le_re_tire_msg_fast_lose_warn_flg = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_msg_old_flg(
    const uint8_t & _arg)
  {
    this->le_re_tire_msg_msg_old_flg = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_p(
    const float & _arg)
  {
    this->le_re_tire_msg_p = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_sys_warn_flg(
    const uint8_t & _arg)
  {
    this->le_re_tire_msg_sys_warn_flg = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_t(
    const float & _arg)
  {
    this->le_re_tire_msg_t = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_t_warn_flg(
    const uint8_t & _arg)
  {
    this->le_re_tire_msg_t_warn_flg = _arg;
    return *this;
  }
  Type & set__le_re_tire_msg_tire_fillg_assi_p_sts(
    const uint8_t & _arg)
  {
    this->le_re_tire_msg_tire_fillg_assi_p_sts = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_batt_lo_st(
    const uint8_t & _arg)
  {
    this->ri_frnt_tire_msg_batt_lo_st = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_fast_lose_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_frnt_tire_msg_fast_lose_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_msg_old_flg(
    const uint8_t & _arg)
  {
    this->ri_frnt_tire_msg_msg_old_flg = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_p(
    const float & _arg)
  {
    this->ri_frnt_tire_msg_p = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_sys_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_frnt_tire_msg_sys_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_t(
    const float & _arg)
  {
    this->ri_frnt_tire_msg_t = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_t_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_frnt_tire_msg_t_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_frnt_tire_msg_tire_fillg_assi_p_sts(
    const uint8_t & _arg)
  {
    this->ri_frnt_tire_msg_tire_fillg_assi_p_sts = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_batt_lo_st(
    const uint8_t & _arg)
  {
    this->ri_re_tire_msg_batt_lo_st = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_fast_lose_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_re_tire_msg_fast_lose_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_msg_old_flg(
    const uint8_t & _arg)
  {
    this->ri_re_tire_msg_msg_old_flg = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_p(
    const float & _arg)
  {
    this->ri_re_tire_msg_p = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_sys_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_re_tire_msg_sys_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_t(
    const float & _arg)
  {
    this->ri_re_tire_msg_t = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_t_warn_flg(
    const uint8_t & _arg)
  {
    this->ri_re_tire_msg_t_warn_flg = _arg;
    return *this;
  }
  Type & set__ri_re_tire_msg_tire_fillg_assi_p_sts(
    const uint8_t & _arg)
  {
    this->ri_re_tire_msg_tire_fillg_assi_p_sts = _arg;
    return *this;
  }
  Type & set__occupy_mon_sts_drvr_sts(
    const uint8_t & _arg)
  {
    this->occupy_mon_sts_drvr_sts = _arg;
    return *this;
  }
  Type & set__sun_roof_posn_sts(
    const uint8_t & _arg)
  {
    this->sun_roof_posn_sts = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_le1_frnt(
    const float & _arg)
  {
    this->susp_posn_vert_le1_frnt = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_le1_frnt_qf(
    const uint8_t & _arg)
  {
    this->susp_posn_vert_le1_frnt_qf = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_le1_re(
    const float & _arg)
  {
    this->susp_posn_vert_le1_re = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_le1_re_qf(
    const uint8_t & _arg)
  {
    this->susp_posn_vert_le1_re_qf = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_ri1_susp_posn_vert_ri_frnt(
    const float & _arg)
  {
    this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf(
    const uint8_t & _arg)
  {
    this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_ri1_susp_posn_vert_ri_re(
    const float & _arg)
  {
    this->susp_posn_vert_ri1_susp_posn_vert_ri_re = _arg;
    return *this;
  }
  Type & set__susp_posn_vert_ri1_susp_posn_vert_ri_re_qf(
    const uint8_t & _arg)
  {
    this->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf = _arg;
    return *this;
  }
  Type & set__twli_bri_raw_qf(
    const uint8_t & _arg)
  {
    this->twli_bri_raw_qf = _arg;
    return *this;
  }
  Type & set__twli_bri_raw_twli_bri_raw(
    const uint8_t & _arg)
  {
    this->twli_bri_raw_twli_bri_raw = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_drvr(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_drvr = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_pass(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_pass = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_re_le(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_re_le = _arg;
    return *this;
  }
  Type & set__win_posn_sts_at_re_ri(
    const uint8_t & _arg)
  {
    this->win_posn_sts_at_re_ri = _arg;
    return *this;
  }
  Type & set__brk_sys_sts_ad_l3_brk_fall_bck(
    const uint8_t & _arg)
  {
    this->brk_sys_sts_ad_l3_brk_fall_bck = _arg;
    return *this;
  }
  Type & set__brk_sys_sts_brk_degradation(
    const uint8_t & _arg)
  {
    this->brk_sys_sts_brk_degradation = _arg;
    return *this;
  }
  Type & set__brk_sys_sts_brk_sys_mod_cfmd(
    const uint8_t & _arg)
  {
    this->brk_sys_sts_brk_sys_mod_cfmd = _arg;
    return *this;
  }
  Type & set__tank_turn_mod_sts_tank_turn_mod_sts(
    const uint8_t & _arg)
  {
    this->tank_turn_mod_sts_tank_turn_mod_sts = _arg;
    return *this;
  }
  Type & set__sfty_decel_group_safe_asy_sfty_ena_decel(
    const uint8_t & _arg)
  {
    this->sfty_decel_group_safe_asy_sfty_ena_decel = _arg;
    return *this;
  }
  Type & set__steer_tq_addl_for_ema_steer_tq_addl_for_ema(
    const float & _arg)
  {
    this->steer_tq_addl_for_ema_steer_tq_addl_for_ema = _arg;
    return *this;
  }
  Type & set__asy_emgy_lane_keep_aid_sts(
    const uint8_t & _arg)
  {
    this->asy_emgy_lane_keep_aid_sts = _arg;
    return *this;
  }
  Type & set__asy_lane_keep_aid_sts(
    const uint8_t & _arg)
  {
    this->asy_lane_keep_aid_sts = _arg;
    return *this;
  }
  Type & set__rcwm_brk_req_rcwm_brk_req(
    const uint8_t & _arg)
  {
    this->rcwm_brk_req_rcwm_brk_req = _arg;
    return *this;
  }
  Type & set__asy_a_lgt_sts_asy_a_lgt_sts(
    const uint8_t & _arg)
  {
    this->asy_a_lgt_sts_asy_a_lgt_sts = _arg;
    return *this;
  }
  Type & set__asy_a_lat_indcr(
    const uint8_t & _arg)
  {
    this->asy_a_lat_indcr = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_sts(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_sts = _arg;
    return *this;
  }
  Type & set__indcr_sts(
    const uint8_t & _arg)
  {
    this->indcr_sts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::BusToSmData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::BusToSmData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::BusToSmData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::BusToSmData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__BusToSmData
    std::shared_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__BusToSmData
    std::shared_ptr<deva_function_msgs::msg::BusToSmData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BusToSmData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->tr_lock_sts != other.tr_lock_sts) {
      return false;
    }
    if (this->door_drvr_lock_sts != other.door_drvr_lock_sts) {
      return false;
    }
    if (this->door_pass_lock_sts != other.door_pass_lock_sts) {
      return false;
    }
    if (this->door_le_re_lock_sts != other.door_le_re_lock_sts) {
      return false;
    }
    if (this->door_ri_re_lock_sts != other.door_ri_re_lock_sts) {
      return false;
    }
    if (this->brk_sys_sts_brk_sys_capability != other.brk_sys_sts_brk_sys_capability) {
      return false;
    }
    if (this->rev != other.rev) {
      return false;
    }
    if (this->calltype_and_sts_ecall_status != other.calltype_and_sts_ecall_status) {
      return false;
    }
    if (this->blt_lock_st_at_drvr != other.blt_lock_st_at_drvr) {
      return false;
    }
    if (this->blt_lock_st_err_sts_at_drvr != other.blt_lock_st_err_sts_at_drvr) {
      return false;
    }
    if (this->esc_st_esc_st != other.esc_st_esc_st) {
      return false;
    }
    if (this->prk_lat_lgt_failr != other.prk_lat_lgt_failr) {
      return false;
    }
    if (this->road_incln_qly != other.road_incln_qly) {
      return false;
    }
    if (this->veh_mtn_st != other.veh_mtn_st) {
      return false;
    }
    if (this->whl_spd_circuml_frnt_le_qf != other.whl_spd_circuml_frnt_le_qf) {
      return false;
    }
    if (this->whl_spd_circuml_frnt_ri_qf != other.whl_spd_circuml_frnt_ri_qf) {
      return false;
    }
    if (this->whl_spd_circuml_re_le_qf != other.whl_spd_circuml_re_le_qf) {
      return false;
    }
    if (this->whl_spd_circuml_re_ri_qf != other.whl_spd_circuml_re_ri_qf) {
      return false;
    }
    if (this->gear_mov != other.gear_mov) {
      return false;
    }
    if (this->accr_pedl_psd_accr_pedl_psd != other.accr_pedl_psd_accr_pedl_psd) {
      return false;
    }
    if (this->accr_pedl_psd_sts != other.accr_pedl_psd_sts) {
      return false;
    }
    if (this->typ_ext_req_to_upd_qf != other.typ_ext_req_to_upd_qf) {
      return false;
    }
    if (this->trsm_park_lockd != other.trsm_park_lockd) {
      return false;
    }
    if (this->door_drvr_sts != other.door_drvr_sts) {
      return false;
    }
    if (this->door_le_re_sts != other.door_le_re_sts) {
      return false;
    }
    if (this->door_pass_sts != other.door_pass_sts) {
      return false;
    }
    if (this->door_ri_re_sts != other.door_ri_re_sts) {
      return false;
    }
    if (this->hood_sts != other.hood_sts) {
      return false;
    }
    if (this->mirr_fold_sts_at_drvr != other.mirr_fold_sts_at_drvr) {
      return false;
    }
    if (this->mirr_fold_sts_at_pass != other.mirr_fold_sts_at_pass) {
      return false;
    }
    if (this->tr_sts != other.tr_sts) {
      return false;
    }
    if (this->trlr_prsnt != other.trlr_prsnt) {
      return false;
    }
    if (this->veh_mod_mngt_glb_safe1_car_mod_sts1 != other.veh_mod_mngt_glb_safe1_car_mod_sts1) {
      return false;
    }
    if (this->veh_mod_mngt_glb_safe1_usg_mod_sts != other.veh_mod_mngt_glb_safe1_usg_mod_sts) {
      return false;
    }
    if (this->steer_sts_to_park_assi != other.steer_sts_to_park_assi) {
      return false;
    }
    if (this->indcr_typ_ext_req != other.indcr_typ_ext_req) {
      return false;
    }
    if (this->rainfall_amnt != other.rainfall_amnt) {
      return false;
    }
    if (this->egy_lvl_elec_mai != other.egy_lvl_elec_mai) {
      return false;
    }
    if (this->le_frnt_tire_msg_p_warn_flg != other.le_frnt_tire_msg_p_warn_flg) {
      return false;
    }
    if (this->le_re_tire_msg_p_warn_flg != other.le_re_tire_msg_p_warn_flg) {
      return false;
    }
    if (this->ri_frnt_tire_msg_p_warn_flg != other.ri_frnt_tire_msg_p_warn_flg) {
      return false;
    }
    if (this->ri_re_tire_msg_p_warn_flg != other.ri_re_tire_msg_p_warn_flg) {
      return false;
    }
    if (this->sm_lat_shake_hand_state != other.sm_lat_shake_hand_state) {
      return false;
    }
    if (this->sm_lon_shake_hand_state != other.sm_lon_shake_hand_state) {
      return false;
    }
    if (this->rcv_ctrl_req != other.rcv_ctrl_req) {
      return false;
    }
    if (this->rcv_steertrim_req != other.rcv_steertrim_req) {
      return false;
    }
    if (this->mob_dev_rcv_req1_mob_dev_sts != other.mob_dev_rcv_req1_mob_dev_sts) {
      return false;
    }
    if (this->dc_dc_actvd != other.dc_dc_actvd) {
      return false;
    }
    if (this->steer_whl_snsr_ag != other.steer_whl_snsr_ag) {
      return false;
    }
    if (this->ble_con_sts != other.ble_con_sts) {
      return false;
    }
    if (this->twbr_lockd_posn != other.twbr_lockd_posn) {
      return false;
    }
    if (this->full_elec_twbr_posn != other.full_elec_twbr_posn) {
      return false;
    }
    if (this->vtsd_mode_sts != other.vtsd_mode_sts) {
      return false;
    }
    if (this->key_read_sts_to_asm != other.key_read_sts_to_asm) {
      return false;
    }
    if (this->mob_dev_rpa_req_rspa_ctrl != other.mob_dev_rpa_req_rspa_ctrl) {
      return false;
    }
    if (this->mob_dev_rpa_req_rpa_req != other.mob_dev_rpa_req_rpa_req) {
      return false;
    }
    if (this->mob_dev_rpa_req_rpa_out_mode_sub_t != other.mob_dev_rpa_req_rpa_out_mode_sub_t) {
      return false;
    }
    if (this->mob_dev_rpa_req_mob_dev_sts != other.mob_dev_rpa_req_mob_dev_sts) {
      return false;
    }
    if (this->crab_mov_mod_sts != other.crab_mov_mod_sts) {
      return false;
    }
    if (this->tank_turn_mod_sts != other.tank_turn_mod_sts) {
      return false;
    }
    if (this->pass_seat_sts2 != other.pass_seat_sts2) {
      return false;
    }
    if (this->hmi_max_ev_mod != other.hmi_max_ev_mod) {
      return false;
    }
    if (this->adcu_max_ev_mod != other.adcu_max_ev_mod) {
      return false;
    }
    if (this->lamp_req_by_veh_hld != other.lamp_req_by_veh_hld) {
      return false;
    }
    if (this->ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn != other.ad_mod_ctrl_inhbn_ad_mod_ctrl_inhbn) {
      return false;
    }
    if (this->msg_req_by_hill_dwn_ctrl != other.msg_req_by_hill_dwn_ctrl) {
      return false;
    }
    if (this->esc_warn_indcn_req_esc_warn_indcn_req != other.esc_warn_indcn_req_esc_warn_indcn_req) {
      return false;
    }
    if (this->abs_ctrl_actv_ctrl_sts1 != other.abs_ctrl_actv_ctrl_sts1) {
      return false;
    }
    if (this->eng_st1_wd_sts_eng_st1_wd_sts != other.eng_st1_wd_sts_eng_st1_wd_sts) {
      return false;
    }
    if (this->crs_ctrl_ovrdn != other.crs_ctrl_ovrdn) {
      return false;
    }
    if (this->veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai != other.veh_mod_mngt_glb_safe1_pwr_lvl_elec_mai) {
      return false;
    }
    if (this->drvr_steer_whl_hld_qly != other.drvr_steer_whl_hld_qly) {
      return false;
    }
    if (this->door_drvr_sts_with_fac_qly_door_sts != other.door_drvr_sts_with_fac_qly_door_sts) {
      return false;
    }
    if (this->door_drvr_sts_with_fac_qly_fac_qly != other.door_drvr_sts_with_fac_qly_fac_qly) {
      return false;
    }
    if (this->lat_ctrl_mod_cfmd != other.lat_ctrl_mod_cfmd) {
      return false;
    }
    if (this->esc_ctrl_indcn != other.esc_ctrl_indcn) {
      return false;
    }
    if (this->pt_drvr_setg_drv_mod_req != other.pt_drvr_setg_drv_mod_req) {
      return false;
    }
    if (this->front_four_d_radar_sts_for_dim != other.front_four_d_radar_sts_for_dim) {
      return false;
    }
    if (this->drvr_prsnt_sts != other.drvr_prsnt_sts) {
      return false;
    }
    if (this->wipr_actv != other.wipr_actv) {
      return false;
    }
    if (this->stand_still_mgr_sts_for_hld != other.stand_still_mgr_sts_for_hld) {
      return false;
    }
    if (this->pt_drvr_setg != other.pt_drvr_setg) {
      return false;
    }
    if (this->tptf_status_error != other.tptf_status_error) {
      return false;
    }
    if (this->tptf_status != other.tptf_status) {
      return false;
    }
    if (this->tptf_time_gap != other.tptf_time_gap) {
      return false;
    }
    if (this->hmi_sod_lan_chg_switch != other.hmi_sod_lan_chg_switch) {
      return false;
    }
    if (this->hmi_drvr_sod_req_chg != other.hmi_drvr_sod_req_chg) {
      return false;
    }
    if (this->turn_indcr_monostable != other.turn_indcr_monostable) {
      return false;
    }
    if (this->drvr_lane_chg_aut_actv_sts != other.drvr_lane_chg_aut_actv_sts) {
      return false;
    }
    if (this->auto_lane_chg_with_navi_sw_onoff != other.auto_lane_chg_with_navi_sw_onoff) {
      return false;
    }
    if (this->nop_cofm_of_lan_chag_onoff != other.nop_cofm_of_lan_chag_onoff) {
      return false;
    }
    if (this->wipg_spd_info != other.wipg_spd_info) {
      return false;
    }
    if (this->asy_safe_stop_sts != other.asy_safe_stop_sts) {
      return false;
    }
    if (this->hmi_sup_end_mod != other.hmi_sup_end_mod) {
      return false;
    }
    if (this->crash_sts_safe_sts != other.crash_sts_safe_sts) {
      return false;
    }
    if (this->gear_park_not_allow != other.gear_park_not_allow) {
      return false;
    }
    if (this->drvr_seat_sts != other.drvr_seat_sts) {
      return false;
    }
    if (this->drvr_seat_snsr_sts != other.drvr_seat_snsr_sts) {
      return false;
    }
    if (this->ad_l3_lat_ctrl_sts_ad_mod != other.ad_l3_lat_ctrl_sts_ad_mod) {
      return false;
    }
    if (this->ad_l3_lgt_ctrl_sts_ad_mod != other.ad_l3_lgt_ctrl_sts_ad_mod) {
      return false;
    }
    if (this->accr_pedl_sts_flt_sts != other.accr_pedl_sts_flt_sts) {
      return false;
    }
    if (this->amb_t_raw_amb_t_val != other.amb_t_raw_amb_t_val) {
      return false;
    }
    if (this->body_hei != other.body_hei) {
      return false;
    }
    if (this->le_frnt_tire_msg_batt_lo_st != other.le_frnt_tire_msg_batt_lo_st) {
      return false;
    }
    if (this->le_frnt_tire_msg_fast_lose_warn_flg != other.le_frnt_tire_msg_fast_lose_warn_flg) {
      return false;
    }
    if (this->le_frnt_tire_msg_msg_old_flg != other.le_frnt_tire_msg_msg_old_flg) {
      return false;
    }
    if (this->le_frnt_tire_msg_p != other.le_frnt_tire_msg_p) {
      return false;
    }
    if (this->le_frnt_tire_msg_sys_warn_flg != other.le_frnt_tire_msg_sys_warn_flg) {
      return false;
    }
    if (this->le_frnt_tire_msg_t != other.le_frnt_tire_msg_t) {
      return false;
    }
    if (this->le_frnt_tire_msg_t_warn_flg != other.le_frnt_tire_msg_t_warn_flg) {
      return false;
    }
    if (this->le_frnt_tire_msg_tire_fillg_assi_p_sts != other.le_frnt_tire_msg_tire_fillg_assi_p_sts) {
      return false;
    }
    if (this->le_re_tire_msg_batt_lo_st != other.le_re_tire_msg_batt_lo_st) {
      return false;
    }
    if (this->le_re_tire_msg_fast_lose_warn_flg != other.le_re_tire_msg_fast_lose_warn_flg) {
      return false;
    }
    if (this->le_re_tire_msg_msg_old_flg != other.le_re_tire_msg_msg_old_flg) {
      return false;
    }
    if (this->le_re_tire_msg_p != other.le_re_tire_msg_p) {
      return false;
    }
    if (this->le_re_tire_msg_sys_warn_flg != other.le_re_tire_msg_sys_warn_flg) {
      return false;
    }
    if (this->le_re_tire_msg_t != other.le_re_tire_msg_t) {
      return false;
    }
    if (this->le_re_tire_msg_t_warn_flg != other.le_re_tire_msg_t_warn_flg) {
      return false;
    }
    if (this->le_re_tire_msg_tire_fillg_assi_p_sts != other.le_re_tire_msg_tire_fillg_assi_p_sts) {
      return false;
    }
    if (this->ri_frnt_tire_msg_batt_lo_st != other.ri_frnt_tire_msg_batt_lo_st) {
      return false;
    }
    if (this->ri_frnt_tire_msg_fast_lose_warn_flg != other.ri_frnt_tire_msg_fast_lose_warn_flg) {
      return false;
    }
    if (this->ri_frnt_tire_msg_msg_old_flg != other.ri_frnt_tire_msg_msg_old_flg) {
      return false;
    }
    if (this->ri_frnt_tire_msg_p != other.ri_frnt_tire_msg_p) {
      return false;
    }
    if (this->ri_frnt_tire_msg_sys_warn_flg != other.ri_frnt_tire_msg_sys_warn_flg) {
      return false;
    }
    if (this->ri_frnt_tire_msg_t != other.ri_frnt_tire_msg_t) {
      return false;
    }
    if (this->ri_frnt_tire_msg_t_warn_flg != other.ri_frnt_tire_msg_t_warn_flg) {
      return false;
    }
    if (this->ri_frnt_tire_msg_tire_fillg_assi_p_sts != other.ri_frnt_tire_msg_tire_fillg_assi_p_sts) {
      return false;
    }
    if (this->ri_re_tire_msg_batt_lo_st != other.ri_re_tire_msg_batt_lo_st) {
      return false;
    }
    if (this->ri_re_tire_msg_fast_lose_warn_flg != other.ri_re_tire_msg_fast_lose_warn_flg) {
      return false;
    }
    if (this->ri_re_tire_msg_msg_old_flg != other.ri_re_tire_msg_msg_old_flg) {
      return false;
    }
    if (this->ri_re_tire_msg_p != other.ri_re_tire_msg_p) {
      return false;
    }
    if (this->ri_re_tire_msg_sys_warn_flg != other.ri_re_tire_msg_sys_warn_flg) {
      return false;
    }
    if (this->ri_re_tire_msg_t != other.ri_re_tire_msg_t) {
      return false;
    }
    if (this->ri_re_tire_msg_t_warn_flg != other.ri_re_tire_msg_t_warn_flg) {
      return false;
    }
    if (this->ri_re_tire_msg_tire_fillg_assi_p_sts != other.ri_re_tire_msg_tire_fillg_assi_p_sts) {
      return false;
    }
    if (this->occupy_mon_sts_drvr_sts != other.occupy_mon_sts_drvr_sts) {
      return false;
    }
    if (this->sun_roof_posn_sts != other.sun_roof_posn_sts) {
      return false;
    }
    if (this->susp_posn_vert_le1_frnt != other.susp_posn_vert_le1_frnt) {
      return false;
    }
    if (this->susp_posn_vert_le1_frnt_qf != other.susp_posn_vert_le1_frnt_qf) {
      return false;
    }
    if (this->susp_posn_vert_le1_re != other.susp_posn_vert_le1_re) {
      return false;
    }
    if (this->susp_posn_vert_le1_re_qf != other.susp_posn_vert_le1_re_qf) {
      return false;
    }
    if (this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt != other.susp_posn_vert_ri1_susp_posn_vert_ri_frnt) {
      return false;
    }
    if (this->susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf != other.susp_posn_vert_ri1_susp_posn_vert_ri_frnt_qf) {
      return false;
    }
    if (this->susp_posn_vert_ri1_susp_posn_vert_ri_re != other.susp_posn_vert_ri1_susp_posn_vert_ri_re) {
      return false;
    }
    if (this->susp_posn_vert_ri1_susp_posn_vert_ri_re_qf != other.susp_posn_vert_ri1_susp_posn_vert_ri_re_qf) {
      return false;
    }
    if (this->twli_bri_raw_qf != other.twli_bri_raw_qf) {
      return false;
    }
    if (this->twli_bri_raw_twli_bri_raw != other.twli_bri_raw_twli_bri_raw) {
      return false;
    }
    if (this->win_posn_sts_at_drvr != other.win_posn_sts_at_drvr) {
      return false;
    }
    if (this->win_posn_sts_at_pass != other.win_posn_sts_at_pass) {
      return false;
    }
    if (this->win_posn_sts_at_re_le != other.win_posn_sts_at_re_le) {
      return false;
    }
    if (this->win_posn_sts_at_re_ri != other.win_posn_sts_at_re_ri) {
      return false;
    }
    if (this->brk_sys_sts_ad_l3_brk_fall_bck != other.brk_sys_sts_ad_l3_brk_fall_bck) {
      return false;
    }
    if (this->brk_sys_sts_brk_degradation != other.brk_sys_sts_brk_degradation) {
      return false;
    }
    if (this->brk_sys_sts_brk_sys_mod_cfmd != other.brk_sys_sts_brk_sys_mod_cfmd) {
      return false;
    }
    if (this->tank_turn_mod_sts_tank_turn_mod_sts != other.tank_turn_mod_sts_tank_turn_mod_sts) {
      return false;
    }
    if (this->sfty_decel_group_safe_asy_sfty_ena_decel != other.sfty_decel_group_safe_asy_sfty_ena_decel) {
      return false;
    }
    if (this->steer_tq_addl_for_ema_steer_tq_addl_for_ema != other.steer_tq_addl_for_ema_steer_tq_addl_for_ema) {
      return false;
    }
    if (this->asy_emgy_lane_keep_aid_sts != other.asy_emgy_lane_keep_aid_sts) {
      return false;
    }
    if (this->asy_lane_keep_aid_sts != other.asy_lane_keep_aid_sts) {
      return false;
    }
    if (this->rcwm_brk_req_rcwm_brk_req != other.rcwm_brk_req_rcwm_brk_req) {
      return false;
    }
    if (this->asy_a_lgt_sts_asy_a_lgt_sts != other.asy_a_lgt_sts_asy_a_lgt_sts) {
      return false;
    }
    if (this->asy_a_lat_indcr != other.asy_a_lat_indcr) {
      return false;
    }
    if (this->asy_cnoa_crs_sts != other.asy_cnoa_crs_sts) {
      return false;
    }
    if (this->indcr_sts != other.indcr_sts) {
      return false;
    }
    return true;
  }
  bool operator!=(const BusToSmData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BusToSmData_

// alias to use template instance with default allocator
using BusToSmData =
  deva_function_msgs::msg::BusToSmData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__BUS_TO_SM_DATA__STRUCT_HPP_
