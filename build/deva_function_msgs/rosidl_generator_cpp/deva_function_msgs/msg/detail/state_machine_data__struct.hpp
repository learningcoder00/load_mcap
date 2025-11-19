// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/StateMachineData.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__StateMachineData __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__StateMachineData __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StateMachineData_
{
  using Type = StateMachineData_<ContainerAllocator>;

  explicit StateMachineData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->three_d_angle_req = 0.0f;
      this->tsm_version = 0ul;
      this->apa_version = 0ul;
      this->avm_version = 0ul;
      this->hmi_version = 0ul;
      this->drvr_assc_sys_sts = 0;
      this->apa_sub_sys_sts = 0;
      this->last_prk_type = 0;
      this->monr_sys_sts = 0;
      this->obstcl_trig_resp = 0;
      this->pla_mod_sts_resp = 0;
      this->swt_disp_on_and_off_sts_resp = 0;
      this->thr_d_touring_view_resp = 0;
      this->turn_entry_ag_wide_vis_resp = 0;
      this->veh_mdl_clr_resp = 0;
      this->visn_ag_extn_resp = 0;
      this->visn_img_disp_mod_resp = 0;
      this->drvr_assc_sys_disp = 0;
      this->prkg_aux_info_disp = 0;
      this->prkg_back_disp = 0;
      this->prkg_btn_sts_disp_group_cancel = 0;
      this->prkg_btn_sts_disp_group_prkg_in = 0;
      this->prkg_btn_sts_disp_group_prkg_out = 0;
      this->prkg_fct_di_disp = 0;
      this->prkg_fct_di_mod_resp = 0;
      this->prkg_progs_disp = 0;
      this->prkg_stop_aud_warn_req = false;
      this->back_push_apa_info_req = 0;
      this->voice_prompt_req = 0;
      this->prkg_img_disp_req = 0;
      this->park_in_or_out = 0;
      this->shakehand_rq = 0;
      this->park_enter_req = false;
      this->park_exit_req = false;
      this->park_function = 0;
      this->prkg_fct_vmm_mod_req = false;
      this->eng_runng_req_by_park_assi1 = 0;
      this->apa_sts_flag = 0;
      this->aut_actv_prkg_fct_swt_resp = 0;
      this->aut_prkg_voice_swt_resp = 0;
      this->aut_prkg_voice_typ_resp = 0;
      this->img_sn_sr_cal_sts = false;
      this->prkg_dock_dis_req = 0;
      this->pdc_ctrl_rsn = 0;
      this->system_fault = 0ul;
      this->prkg_lock_req = 0;
      this->mirr_open_cls_req = 0;
      this->mob_dev_rpa_req_resp = 0;
      this->prkg_mod_incln = 0;
      this->prkg_assi_sys_rem_prkg_sts = 0;
      this->veh_win_sun_roof_cls_req = 0;
      this->veh_prkg_lock_theft_req = 0;
      this->rpa_version = 0ul;
      this->prkg_usg_drv_mod_tran_req = 0;
      this->mob_dev_rpa_sts_uint8 = 0;
      this->prkg_proc_dst_disp = 0.0f;
      this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = 0;
      this->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = 0;
      this->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = 0;
      this->rem_straight_prkg_assi_seln_req_resp = 0.0f;
      this->rem_str_sts = 0;
      this->tsm_req_rpa_on = 0;
      this->last_parkg_type_con_rq = 0;
      this->forward_distance = 0.0f;
      this->backward_distance = 0.0f;
      this->total_distance = 0.0f;
      this->apa_self_park_or_out_version = 0ul;
      this->plan_first_sucs = 0;
      this->disp_interface_chg_req = 0;
      this->prkg_fcts_swt_sts_disp = 0;
      this->avm_drvr_assc_sys_disp = 0;
      this->avm_prkg_fct_di_disp = 0;
      this->prkg_btn_sts_dispset = 0;
      this->drvr_assc_sys_disp_list = 0;
      this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = 0;
      this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = 0;
      this->prkg_fct_test_pnd_req = 0ul;
      this->sm_hpa_version = 0ul;
      this->sm_hpa_state_ind = 0;
      this->sm_hpa_state = 0;
      this->sm_hpa_req_apa = 0;
      this->sm_hpa_proc_prompt_req = 0;
      this->sm_hpa_quit_reason = 0;
      this->valt_prkg_failr_notif = 0;
      this->home_prkg_voice_prompt_req = 0;
      this->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = 0;
      this->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = 0;
      this->valt_prkg_reminder = 0;
      this->veh_home_prkg_sys_sts = 0;
      this->prkg_amb_li_req = 0;
      this->veh_prkg_to_horn = 0;
      this->prkg_accr_ovrdn_ctrl_reqgrp = 0;
      this->hpa_st_code_to_sm = 0;
      this->lo_spd_and_trk_bck_sys_sts = 0;
      this->sm_rem_ctrl_veh_sts = 0;
      this->sm_rem_str_sts = 0;
      this->sm_rcv_mod_incln = 0;
      this->sm_mob_dev_rcv_req_resp = 0;
      this->sm_mob_dev_rcv_sts = 0;
      this->sm_rcv_version = 0ul;
      this->lgt_control_request = 0;
      this->lat_control_request = 0;
      this->mai_sts = 0;
      this->prkg_emgy_brk_sys_sts = 0;
      this->prkg_btn_sts_disp_float = 0;
      this->prkg_active_push = 0;
      this->prkg_fct_di_mod = 0;
      this->no_touching_for_avm_req = 0;
      this->aut_prkg_in_btn_sts_from_rpa = 0;
      this->asy_a_lgt_sts_asy_a_lgt_sts = 0;
      this->asy_stand_still_req_for_cmft = 0;
      this->drv_off_req_for_lgt_ctrl = 0;
      this->stop_req_of_lgt_ctrl_for_prpsn = 0;
      this->strt_req_of_lgt_ctrl_for_prpsn = 0;
      this->avl_sts_for_long_aut_drv = 0;
      this->hwa_lat_ctrl_sts = 0;
      this->ad_ctrl_mode = 0;
      this->asy_lane_chg_assist_sts = 0;
      this->asy_noa_sts = 0;
      this->aut_lane_chg_sts = 0;
      this->asy_req_lane_chg = 0;
      this->sm_state = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->function_status.begin(), this->function_status.end(), 0);
      this->hwa_odd_off = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->smfault_level.begin(), this->smfault_level.end(), 0);
      this->prkg_camera_store_resp = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->rev.begin(), this->rev.end(), 0);
      this->dpa_mode_broadcast = 0;
      this->dpa_btn_sts = 0;
      this->sm_fct_err_code2_hmi = 0;
      this->view_layout_req = 0;
      this->cust_btn_sts = 0;
      this->exit_cust_btn_sts = 0;
      this->frnt_and_re_prkg_in_btn_sts = 0;
      this->mai_version = 0;
      this->peb_version = 0;
      this->lo_spd_and_trk_bck_sub_sts = 0;
      this->fill_light_req = 0;
    }
  }

  explicit StateMachineData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    function_status(_alloc),
    smfault_level(_alloc),
    rev(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->three_d_angle_req = 0.0f;
      this->tsm_version = 0ul;
      this->apa_version = 0ul;
      this->avm_version = 0ul;
      this->hmi_version = 0ul;
      this->drvr_assc_sys_sts = 0;
      this->apa_sub_sys_sts = 0;
      this->last_prk_type = 0;
      this->monr_sys_sts = 0;
      this->obstcl_trig_resp = 0;
      this->pla_mod_sts_resp = 0;
      this->swt_disp_on_and_off_sts_resp = 0;
      this->thr_d_touring_view_resp = 0;
      this->turn_entry_ag_wide_vis_resp = 0;
      this->veh_mdl_clr_resp = 0;
      this->visn_ag_extn_resp = 0;
      this->visn_img_disp_mod_resp = 0;
      this->drvr_assc_sys_disp = 0;
      this->prkg_aux_info_disp = 0;
      this->prkg_back_disp = 0;
      this->prkg_btn_sts_disp_group_cancel = 0;
      this->prkg_btn_sts_disp_group_prkg_in = 0;
      this->prkg_btn_sts_disp_group_prkg_out = 0;
      this->prkg_fct_di_disp = 0;
      this->prkg_fct_di_mod_resp = 0;
      this->prkg_progs_disp = 0;
      this->prkg_stop_aud_warn_req = false;
      this->back_push_apa_info_req = 0;
      this->voice_prompt_req = 0;
      this->prkg_img_disp_req = 0;
      this->park_in_or_out = 0;
      this->shakehand_rq = 0;
      this->park_enter_req = false;
      this->park_exit_req = false;
      this->park_function = 0;
      this->prkg_fct_vmm_mod_req = false;
      this->eng_runng_req_by_park_assi1 = 0;
      this->apa_sts_flag = 0;
      this->aut_actv_prkg_fct_swt_resp = 0;
      this->aut_prkg_voice_swt_resp = 0;
      this->aut_prkg_voice_typ_resp = 0;
      this->img_sn_sr_cal_sts = false;
      this->prkg_dock_dis_req = 0;
      this->pdc_ctrl_rsn = 0;
      this->system_fault = 0ul;
      this->prkg_lock_req = 0;
      this->mirr_open_cls_req = 0;
      this->mob_dev_rpa_req_resp = 0;
      this->prkg_mod_incln = 0;
      this->prkg_assi_sys_rem_prkg_sts = 0;
      this->veh_win_sun_roof_cls_req = 0;
      this->veh_prkg_lock_theft_req = 0;
      this->rpa_version = 0ul;
      this->prkg_usg_drv_mod_tran_req = 0;
      this->mob_dev_rpa_sts_uint8 = 0;
      this->prkg_proc_dst_disp = 0.0f;
      this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = 0;
      this->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = 0;
      this->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = 0;
      this->rem_straight_prkg_assi_seln_req_resp = 0.0f;
      this->rem_str_sts = 0;
      this->tsm_req_rpa_on = 0;
      this->last_parkg_type_con_rq = 0;
      this->forward_distance = 0.0f;
      this->backward_distance = 0.0f;
      this->total_distance = 0.0f;
      this->apa_self_park_or_out_version = 0ul;
      this->plan_first_sucs = 0;
      this->disp_interface_chg_req = 0;
      this->prkg_fcts_swt_sts_disp = 0;
      this->avm_drvr_assc_sys_disp = 0;
      this->avm_prkg_fct_di_disp = 0;
      this->prkg_btn_sts_dispset = 0;
      this->drvr_assc_sys_disp_list = 0;
      this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = 0;
      this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = 0;
      this->prkg_fct_test_pnd_req = 0ul;
      this->sm_hpa_version = 0ul;
      this->sm_hpa_state_ind = 0;
      this->sm_hpa_state = 0;
      this->sm_hpa_req_apa = 0;
      this->sm_hpa_proc_prompt_req = 0;
      this->sm_hpa_quit_reason = 0;
      this->valt_prkg_failr_notif = 0;
      this->home_prkg_voice_prompt_req = 0;
      this->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = 0;
      this->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = 0;
      this->valt_prkg_reminder = 0;
      this->veh_home_prkg_sys_sts = 0;
      this->prkg_amb_li_req = 0;
      this->veh_prkg_to_horn = 0;
      this->prkg_accr_ovrdn_ctrl_reqgrp = 0;
      this->hpa_st_code_to_sm = 0;
      this->lo_spd_and_trk_bck_sys_sts = 0;
      this->sm_rem_ctrl_veh_sts = 0;
      this->sm_rem_str_sts = 0;
      this->sm_rcv_mod_incln = 0;
      this->sm_mob_dev_rcv_req_resp = 0;
      this->sm_mob_dev_rcv_sts = 0;
      this->sm_rcv_version = 0ul;
      this->lgt_control_request = 0;
      this->lat_control_request = 0;
      this->mai_sts = 0;
      this->prkg_emgy_brk_sys_sts = 0;
      this->prkg_btn_sts_disp_float = 0;
      this->prkg_active_push = 0;
      this->prkg_fct_di_mod = 0;
      this->no_touching_for_avm_req = 0;
      this->aut_prkg_in_btn_sts_from_rpa = 0;
      this->asy_a_lgt_sts_asy_a_lgt_sts = 0;
      this->asy_stand_still_req_for_cmft = 0;
      this->drv_off_req_for_lgt_ctrl = 0;
      this->stop_req_of_lgt_ctrl_for_prpsn = 0;
      this->strt_req_of_lgt_ctrl_for_prpsn = 0;
      this->avl_sts_for_long_aut_drv = 0;
      this->hwa_lat_ctrl_sts = 0;
      this->ad_ctrl_mode = 0;
      this->asy_lane_chg_assist_sts = 0;
      this->asy_noa_sts = 0;
      this->aut_lane_chg_sts = 0;
      this->asy_req_lane_chg = 0;
      this->sm_state = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->function_status.begin(), this->function_status.end(), 0);
      this->hwa_odd_off = 0;
      std::fill<typename std::array<uint8_t, 32>::iterator, uint8_t>(this->smfault_level.begin(), this->smfault_level.end(), 0);
      this->prkg_camera_store_resp = 0;
      std::fill<typename std::array<uint8_t, 8>::iterator, uint8_t>(this->rev.begin(), this->rev.end(), 0);
      this->dpa_mode_broadcast = 0;
      this->dpa_btn_sts = 0;
      this->sm_fct_err_code2_hmi = 0;
      this->view_layout_req = 0;
      this->cust_btn_sts = 0;
      this->exit_cust_btn_sts = 0;
      this->frnt_and_re_prkg_in_btn_sts = 0;
      this->mai_version = 0;
      this->peb_version = 0;
      this->lo_spd_and_trk_bck_sub_sts = 0;
      this->fill_light_req = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _three_d_angle_req_type =
    float;
  _three_d_angle_req_type three_d_angle_req;
  using _tsm_version_type =
    uint32_t;
  _tsm_version_type tsm_version;
  using _apa_version_type =
    uint32_t;
  _apa_version_type apa_version;
  using _avm_version_type =
    uint32_t;
  _avm_version_type avm_version;
  using _hmi_version_type =
    uint32_t;
  _hmi_version_type hmi_version;
  using _drvr_assc_sys_sts_type =
    uint8_t;
  _drvr_assc_sys_sts_type drvr_assc_sys_sts;
  using _apa_sub_sys_sts_type =
    uint8_t;
  _apa_sub_sys_sts_type apa_sub_sys_sts;
  using _last_prk_type_type =
    uint8_t;
  _last_prk_type_type last_prk_type;
  using _monr_sys_sts_type =
    uint8_t;
  _monr_sys_sts_type monr_sys_sts;
  using _obstcl_trig_resp_type =
    uint8_t;
  _obstcl_trig_resp_type obstcl_trig_resp;
  using _pla_mod_sts_resp_type =
    uint8_t;
  _pla_mod_sts_resp_type pla_mod_sts_resp;
  using _swt_disp_on_and_off_sts_resp_type =
    uint8_t;
  _swt_disp_on_and_off_sts_resp_type swt_disp_on_and_off_sts_resp;
  using _thr_d_touring_view_resp_type =
    uint8_t;
  _thr_d_touring_view_resp_type thr_d_touring_view_resp;
  using _turn_entry_ag_wide_vis_resp_type =
    uint8_t;
  _turn_entry_ag_wide_vis_resp_type turn_entry_ag_wide_vis_resp;
  using _veh_mdl_clr_resp_type =
    uint8_t;
  _veh_mdl_clr_resp_type veh_mdl_clr_resp;
  using _visn_ag_extn_resp_type =
    uint8_t;
  _visn_ag_extn_resp_type visn_ag_extn_resp;
  using _visn_img_disp_mod_resp_type =
    uint8_t;
  _visn_img_disp_mod_resp_type visn_img_disp_mod_resp;
  using _drvr_assc_sys_disp_type =
    uint8_t;
  _drvr_assc_sys_disp_type drvr_assc_sys_disp;
  using _prkg_aux_info_disp_type =
    uint8_t;
  _prkg_aux_info_disp_type prkg_aux_info_disp;
  using _prkg_back_disp_type =
    uint8_t;
  _prkg_back_disp_type prkg_back_disp;
  using _prkg_btn_sts_disp_group_cancel_type =
    uint8_t;
  _prkg_btn_sts_disp_group_cancel_type prkg_btn_sts_disp_group_cancel;
  using _prkg_btn_sts_disp_group_prkg_in_type =
    uint8_t;
  _prkg_btn_sts_disp_group_prkg_in_type prkg_btn_sts_disp_group_prkg_in;
  using _prkg_btn_sts_disp_group_prkg_out_type =
    uint8_t;
  _prkg_btn_sts_disp_group_prkg_out_type prkg_btn_sts_disp_group_prkg_out;
  using _prkg_fct_di_disp_type =
    uint8_t;
  _prkg_fct_di_disp_type prkg_fct_di_disp;
  using _prkg_fct_di_mod_resp_type =
    uint8_t;
  _prkg_fct_di_mod_resp_type prkg_fct_di_mod_resp;
  using _prkg_progs_disp_type =
    uint8_t;
  _prkg_progs_disp_type prkg_progs_disp;
  using _prkg_stop_aud_warn_req_type =
    bool;
  _prkg_stop_aud_warn_req_type prkg_stop_aud_warn_req;
  using _back_push_apa_info_req_type =
    uint8_t;
  _back_push_apa_info_req_type back_push_apa_info_req;
  using _voice_prompt_req_type =
    uint8_t;
  _voice_prompt_req_type voice_prompt_req;
  using _prkg_img_disp_req_type =
    uint8_t;
  _prkg_img_disp_req_type prkg_img_disp_req;
  using _park_in_or_out_type =
    uint8_t;
  _park_in_or_out_type park_in_or_out;
  using _shakehand_rq_type =
    uint8_t;
  _shakehand_rq_type shakehand_rq;
  using _park_enter_req_type =
    bool;
  _park_enter_req_type park_enter_req;
  using _park_exit_req_type =
    bool;
  _park_exit_req_type park_exit_req;
  using _park_function_type =
    uint8_t;
  _park_function_type park_function;
  using _prkg_fct_vmm_mod_req_type =
    bool;
  _prkg_fct_vmm_mod_req_type prkg_fct_vmm_mod_req;
  using _eng_runng_req_by_park_assi1_type =
    uint8_t;
  _eng_runng_req_by_park_assi1_type eng_runng_req_by_park_assi1;
  using _apa_sts_flag_type =
    uint8_t;
  _apa_sts_flag_type apa_sts_flag;
  using _aut_actv_prkg_fct_swt_resp_type =
    uint8_t;
  _aut_actv_prkg_fct_swt_resp_type aut_actv_prkg_fct_swt_resp;
  using _aut_prkg_voice_swt_resp_type =
    uint8_t;
  _aut_prkg_voice_swt_resp_type aut_prkg_voice_swt_resp;
  using _aut_prkg_voice_typ_resp_type =
    uint8_t;
  _aut_prkg_voice_typ_resp_type aut_prkg_voice_typ_resp;
  using _img_sn_sr_cal_sts_type =
    bool;
  _img_sn_sr_cal_sts_type img_sn_sr_cal_sts;
  using _prkg_dock_dis_req_type =
    uint8_t;
  _prkg_dock_dis_req_type prkg_dock_dis_req;
  using _pdc_ctrl_rsn_type =
    uint8_t;
  _pdc_ctrl_rsn_type pdc_ctrl_rsn;
  using _system_fault_type =
    uint32_t;
  _system_fault_type system_fault;
  using _prkg_lock_req_type =
    uint8_t;
  _prkg_lock_req_type prkg_lock_req;
  using _mirr_open_cls_req_type =
    uint8_t;
  _mirr_open_cls_req_type mirr_open_cls_req;
  using _mob_dev_rpa_req_resp_type =
    uint8_t;
  _mob_dev_rpa_req_resp_type mob_dev_rpa_req_resp;
  using _prkg_mod_incln_type =
    uint8_t;
  _prkg_mod_incln_type prkg_mod_incln;
  using _prkg_assi_sys_rem_prkg_sts_type =
    uint8_t;
  _prkg_assi_sys_rem_prkg_sts_type prkg_assi_sys_rem_prkg_sts;
  using _veh_win_sun_roof_cls_req_type =
    uint8_t;
  _veh_win_sun_roof_cls_req_type veh_win_sun_roof_cls_req;
  using _veh_prkg_lock_theft_req_type =
    uint8_t;
  _veh_prkg_lock_theft_req_type veh_prkg_lock_theft_req;
  using _rpa_version_type =
    uint32_t;
  _rpa_version_type rpa_version;
  using _prkg_usg_drv_mod_tran_req_type =
    uint8_t;
  _prkg_usg_drv_mod_tran_req_type prkg_usg_drv_mod_tran_req;
  using _mob_dev_rpa_sts_uint8_type =
    uint8_t;
  _mob_dev_rpa_sts_uint8_type mob_dev_rpa_sts_uint8;
  using _prkg_proc_dst_disp_type =
    float;
  _prkg_proc_dst_disp_type prkg_proc_dst_disp;
  using _prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1_type =
    uint8_t;
  _prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1_type prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1;
  using _mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts_type =
    uint8_t;
  _mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts_type mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts;
  using _mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts_type =
    uint8_t;
  _mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts_type mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts;
  using _rem_straight_prkg_assi_seln_req_resp_type =
    float;
  _rem_straight_prkg_assi_seln_req_resp_type rem_straight_prkg_assi_seln_req_resp;
  using _rem_str_sts_type =
    uint8_t;
  _rem_str_sts_type rem_str_sts;
  using _tsm_req_rpa_on_type =
    uint8_t;
  _tsm_req_rpa_on_type tsm_req_rpa_on;
  using _last_parkg_type_con_rq_type =
    uint8_t;
  _last_parkg_type_con_rq_type last_parkg_type_con_rq;
  using _forward_distance_type =
    float;
  _forward_distance_type forward_distance;
  using _backward_distance_type =
    float;
  _backward_distance_type backward_distance;
  using _total_distance_type =
    float;
  _total_distance_type total_distance;
  using _apa_self_park_or_out_version_type =
    uint32_t;
  _apa_self_park_or_out_version_type apa_self_park_or_out_version;
  using _plan_first_sucs_type =
    uint8_t;
  _plan_first_sucs_type plan_first_sucs;
  using _disp_interface_chg_req_type =
    uint8_t;
  _disp_interface_chg_req_type disp_interface_chg_req;
  using _prkg_fcts_swt_sts_disp_type =
    uint8_t;
  _prkg_fcts_swt_sts_disp_type prkg_fcts_swt_sts_disp;
  using _avm_drvr_assc_sys_disp_type =
    uint8_t;
  _avm_drvr_assc_sys_disp_type avm_drvr_assc_sys_disp;
  using _avm_prkg_fct_di_disp_type =
    uint8_t;
  _avm_prkg_fct_di_disp_type avm_prkg_fct_di_disp;
  using _prkg_btn_sts_dispset_type =
    uint8_t;
  _prkg_btn_sts_dispset_type prkg_btn_sts_dispset;
  using _drvr_assc_sys_disp_list_type =
    uint8_t;
  _drvr_assc_sys_disp_list_type drvr_assc_sys_disp_list;
  using _prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5_type =
    uint8_t;
  _prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5_type prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5;
  using _prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6_type =
    uint8_t;
  _prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6_type prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6;
  using _prkg_fct_test_pnd_req_type =
    uint32_t;
  _prkg_fct_test_pnd_req_type prkg_fct_test_pnd_req;
  using _sm_hpa_version_type =
    uint32_t;
  _sm_hpa_version_type sm_hpa_version;
  using _sm_hpa_state_ind_type =
    uint8_t;
  _sm_hpa_state_ind_type sm_hpa_state_ind;
  using _sm_hpa_state_type =
    uint8_t;
  _sm_hpa_state_type sm_hpa_state;
  using _sm_hpa_req_apa_type =
    uint8_t;
  _sm_hpa_req_apa_type sm_hpa_req_apa;
  using _sm_hpa_proc_prompt_req_type =
    uint8_t;
  _sm_hpa_proc_prompt_req_type sm_hpa_proc_prompt_req;
  using _sm_hpa_quit_reason_type =
    uint8_t;
  _sm_hpa_quit_reason_type sm_hpa_quit_reason;
  using _valt_prkg_failr_notif_type =
    uint8_t;
  _valt_prkg_failr_notif_type valt_prkg_failr_notif;
  using _home_prkg_voice_prompt_req_type =
    uint8_t;
  _home_prkg_voice_prompt_req_type home_prkg_voice_prompt_req;
  using _sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req_type =
    uint8_t;
  _sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req_type sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req;
  using _sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1_type =
    uint8_t;
  _sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1_type sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1;
  using _valt_prkg_reminder_type =
    uint8_t;
  _valt_prkg_reminder_type valt_prkg_reminder;
  using _veh_home_prkg_sys_sts_type =
    uint8_t;
  _veh_home_prkg_sys_sts_type veh_home_prkg_sys_sts;
  using _prkg_amb_li_req_type =
    uint8_t;
  _prkg_amb_li_req_type prkg_amb_li_req;
  using _veh_prkg_to_horn_type =
    uint8_t;
  _veh_prkg_to_horn_type veh_prkg_to_horn;
  using _prkg_accr_ovrdn_ctrl_reqgrp_type =
    uint8_t;
  _prkg_accr_ovrdn_ctrl_reqgrp_type prkg_accr_ovrdn_ctrl_reqgrp;
  using _hpa_st_code_to_sm_type =
    uint8_t;
  _hpa_st_code_to_sm_type hpa_st_code_to_sm;
  using _lo_spd_and_trk_bck_sys_sts_type =
    uint8_t;
  _lo_spd_and_trk_bck_sys_sts_type lo_spd_and_trk_bck_sys_sts;
  using _sm_rem_ctrl_veh_sts_type =
    uint8_t;
  _sm_rem_ctrl_veh_sts_type sm_rem_ctrl_veh_sts;
  using _sm_rem_str_sts_type =
    uint8_t;
  _sm_rem_str_sts_type sm_rem_str_sts;
  using _sm_rcv_mod_incln_type =
    uint8_t;
  _sm_rcv_mod_incln_type sm_rcv_mod_incln;
  using _sm_mob_dev_rcv_req_resp_type =
    uint8_t;
  _sm_mob_dev_rcv_req_resp_type sm_mob_dev_rcv_req_resp;
  using _sm_mob_dev_rcv_sts_type =
    uint8_t;
  _sm_mob_dev_rcv_sts_type sm_mob_dev_rcv_sts;
  using _sm_rcv_version_type =
    uint32_t;
  _sm_rcv_version_type sm_rcv_version;
  using _lgt_control_request_type =
    uint8_t;
  _lgt_control_request_type lgt_control_request;
  using _lat_control_request_type =
    uint8_t;
  _lat_control_request_type lat_control_request;
  using _mai_sts_type =
    uint8_t;
  _mai_sts_type mai_sts;
  using _prkg_emgy_brk_sys_sts_type =
    uint8_t;
  _prkg_emgy_brk_sys_sts_type prkg_emgy_brk_sys_sts;
  using _prkg_btn_sts_disp_float_type =
    uint8_t;
  _prkg_btn_sts_disp_float_type prkg_btn_sts_disp_float;
  using _prkg_active_push_type =
    uint8_t;
  _prkg_active_push_type prkg_active_push;
  using _prkg_fct_di_mod_type =
    uint8_t;
  _prkg_fct_di_mod_type prkg_fct_di_mod;
  using _no_touching_for_avm_req_type =
    uint8_t;
  _no_touching_for_avm_req_type no_touching_for_avm_req;
  using _aut_prkg_in_btn_sts_from_rpa_type =
    uint8_t;
  _aut_prkg_in_btn_sts_from_rpa_type aut_prkg_in_btn_sts_from_rpa;
  using _asy_a_lgt_sts_asy_a_lgt_sts_type =
    uint8_t;
  _asy_a_lgt_sts_asy_a_lgt_sts_type asy_a_lgt_sts_asy_a_lgt_sts;
  using _asy_stand_still_req_for_cmft_type =
    uint8_t;
  _asy_stand_still_req_for_cmft_type asy_stand_still_req_for_cmft;
  using _drv_off_req_for_lgt_ctrl_type =
    uint8_t;
  _drv_off_req_for_lgt_ctrl_type drv_off_req_for_lgt_ctrl;
  using _stop_req_of_lgt_ctrl_for_prpsn_type =
    uint8_t;
  _stop_req_of_lgt_ctrl_for_prpsn_type stop_req_of_lgt_ctrl_for_prpsn;
  using _strt_req_of_lgt_ctrl_for_prpsn_type =
    uint8_t;
  _strt_req_of_lgt_ctrl_for_prpsn_type strt_req_of_lgt_ctrl_for_prpsn;
  using _avl_sts_for_long_aut_drv_type =
    uint8_t;
  _avl_sts_for_long_aut_drv_type avl_sts_for_long_aut_drv;
  using _hwa_lat_ctrl_sts_type =
    uint8_t;
  _hwa_lat_ctrl_sts_type hwa_lat_ctrl_sts;
  using _ad_ctrl_mode_type =
    uint8_t;
  _ad_ctrl_mode_type ad_ctrl_mode;
  using _asy_lane_chg_assist_sts_type =
    uint8_t;
  _asy_lane_chg_assist_sts_type asy_lane_chg_assist_sts;
  using _asy_noa_sts_type =
    uint8_t;
  _asy_noa_sts_type asy_noa_sts;
  using _aut_lane_chg_sts_type =
    uint8_t;
  _aut_lane_chg_sts_type aut_lane_chg_sts;
  using _asy_req_lane_chg_type =
    uint8_t;
  _asy_req_lane_chg_type asy_req_lane_chg;
  using _sm_state_type =
    uint8_t;
  _sm_state_type sm_state;
  using _function_status_type =
    std::array<uint8_t, 32>;
  _function_status_type function_status;
  using _hwa_odd_off_type =
    uint8_t;
  _hwa_odd_off_type hwa_odd_off;
  using _smfault_level_type =
    std::array<uint8_t, 32>;
  _smfault_level_type smfault_level;
  using _prkg_camera_store_resp_type =
    uint8_t;
  _prkg_camera_store_resp_type prkg_camera_store_resp;
  using _rev_type =
    std::array<uint8_t, 8>;
  _rev_type rev;
  using _dpa_mode_broadcast_type =
    uint8_t;
  _dpa_mode_broadcast_type dpa_mode_broadcast;
  using _dpa_btn_sts_type =
    uint8_t;
  _dpa_btn_sts_type dpa_btn_sts;
  using _sm_fct_err_code2_hmi_type =
    uint16_t;
  _sm_fct_err_code2_hmi_type sm_fct_err_code2_hmi;
  using _view_layout_req_type =
    uint8_t;
  _view_layout_req_type view_layout_req;
  using _cust_btn_sts_type =
    uint8_t;
  _cust_btn_sts_type cust_btn_sts;
  using _exit_cust_btn_sts_type =
    uint8_t;
  _exit_cust_btn_sts_type exit_cust_btn_sts;
  using _frnt_and_re_prkg_in_btn_sts_type =
    uint8_t;
  _frnt_and_re_prkg_in_btn_sts_type frnt_and_re_prkg_in_btn_sts;
  using _mai_version_type =
    uint8_t;
  _mai_version_type mai_version;
  using _peb_version_type =
    uint8_t;
  _peb_version_type peb_version;
  using _lo_spd_and_trk_bck_sub_sts_type =
    uint8_t;
  _lo_spd_and_trk_bck_sub_sts_type lo_spd_and_trk_bck_sub_sts;
  using _fill_light_req_type =
    uint8_t;
  _fill_light_req_type fill_light_req;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__three_d_angle_req(
    const float & _arg)
  {
    this->three_d_angle_req = _arg;
    return *this;
  }
  Type & set__tsm_version(
    const uint32_t & _arg)
  {
    this->tsm_version = _arg;
    return *this;
  }
  Type & set__apa_version(
    const uint32_t & _arg)
  {
    this->apa_version = _arg;
    return *this;
  }
  Type & set__avm_version(
    const uint32_t & _arg)
  {
    this->avm_version = _arg;
    return *this;
  }
  Type & set__hmi_version(
    const uint32_t & _arg)
  {
    this->hmi_version = _arg;
    return *this;
  }
  Type & set__drvr_assc_sys_sts(
    const uint8_t & _arg)
  {
    this->drvr_assc_sys_sts = _arg;
    return *this;
  }
  Type & set__apa_sub_sys_sts(
    const uint8_t & _arg)
  {
    this->apa_sub_sys_sts = _arg;
    return *this;
  }
  Type & set__last_prk_type(
    const uint8_t & _arg)
  {
    this->last_prk_type = _arg;
    return *this;
  }
  Type & set__monr_sys_sts(
    const uint8_t & _arg)
  {
    this->monr_sys_sts = _arg;
    return *this;
  }
  Type & set__obstcl_trig_resp(
    const uint8_t & _arg)
  {
    this->obstcl_trig_resp = _arg;
    return *this;
  }
  Type & set__pla_mod_sts_resp(
    const uint8_t & _arg)
  {
    this->pla_mod_sts_resp = _arg;
    return *this;
  }
  Type & set__swt_disp_on_and_off_sts_resp(
    const uint8_t & _arg)
  {
    this->swt_disp_on_and_off_sts_resp = _arg;
    return *this;
  }
  Type & set__thr_d_touring_view_resp(
    const uint8_t & _arg)
  {
    this->thr_d_touring_view_resp = _arg;
    return *this;
  }
  Type & set__turn_entry_ag_wide_vis_resp(
    const uint8_t & _arg)
  {
    this->turn_entry_ag_wide_vis_resp = _arg;
    return *this;
  }
  Type & set__veh_mdl_clr_resp(
    const uint8_t & _arg)
  {
    this->veh_mdl_clr_resp = _arg;
    return *this;
  }
  Type & set__visn_ag_extn_resp(
    const uint8_t & _arg)
  {
    this->visn_ag_extn_resp = _arg;
    return *this;
  }
  Type & set__visn_img_disp_mod_resp(
    const uint8_t & _arg)
  {
    this->visn_img_disp_mod_resp = _arg;
    return *this;
  }
  Type & set__drvr_assc_sys_disp(
    const uint8_t & _arg)
  {
    this->drvr_assc_sys_disp = _arg;
    return *this;
  }
  Type & set__prkg_aux_info_disp(
    const uint8_t & _arg)
  {
    this->prkg_aux_info_disp = _arg;
    return *this;
  }
  Type & set__prkg_back_disp(
    const uint8_t & _arg)
  {
    this->prkg_back_disp = _arg;
    return *this;
  }
  Type & set__prkg_btn_sts_disp_group_cancel(
    const uint8_t & _arg)
  {
    this->prkg_btn_sts_disp_group_cancel = _arg;
    return *this;
  }
  Type & set__prkg_btn_sts_disp_group_prkg_in(
    const uint8_t & _arg)
  {
    this->prkg_btn_sts_disp_group_prkg_in = _arg;
    return *this;
  }
  Type & set__prkg_btn_sts_disp_group_prkg_out(
    const uint8_t & _arg)
  {
    this->prkg_btn_sts_disp_group_prkg_out = _arg;
    return *this;
  }
  Type & set__prkg_fct_di_disp(
    const uint8_t & _arg)
  {
    this->prkg_fct_di_disp = _arg;
    return *this;
  }
  Type & set__prkg_fct_di_mod_resp(
    const uint8_t & _arg)
  {
    this->prkg_fct_di_mod_resp = _arg;
    return *this;
  }
  Type & set__prkg_progs_disp(
    const uint8_t & _arg)
  {
    this->prkg_progs_disp = _arg;
    return *this;
  }
  Type & set__prkg_stop_aud_warn_req(
    const bool & _arg)
  {
    this->prkg_stop_aud_warn_req = _arg;
    return *this;
  }
  Type & set__back_push_apa_info_req(
    const uint8_t & _arg)
  {
    this->back_push_apa_info_req = _arg;
    return *this;
  }
  Type & set__voice_prompt_req(
    const uint8_t & _arg)
  {
    this->voice_prompt_req = _arg;
    return *this;
  }
  Type & set__prkg_img_disp_req(
    const uint8_t & _arg)
  {
    this->prkg_img_disp_req = _arg;
    return *this;
  }
  Type & set__park_in_or_out(
    const uint8_t & _arg)
  {
    this->park_in_or_out = _arg;
    return *this;
  }
  Type & set__shakehand_rq(
    const uint8_t & _arg)
  {
    this->shakehand_rq = _arg;
    return *this;
  }
  Type & set__park_enter_req(
    const bool & _arg)
  {
    this->park_enter_req = _arg;
    return *this;
  }
  Type & set__park_exit_req(
    const bool & _arg)
  {
    this->park_exit_req = _arg;
    return *this;
  }
  Type & set__park_function(
    const uint8_t & _arg)
  {
    this->park_function = _arg;
    return *this;
  }
  Type & set__prkg_fct_vmm_mod_req(
    const bool & _arg)
  {
    this->prkg_fct_vmm_mod_req = _arg;
    return *this;
  }
  Type & set__eng_runng_req_by_park_assi1(
    const uint8_t & _arg)
  {
    this->eng_runng_req_by_park_assi1 = _arg;
    return *this;
  }
  Type & set__apa_sts_flag(
    const uint8_t & _arg)
  {
    this->apa_sts_flag = _arg;
    return *this;
  }
  Type & set__aut_actv_prkg_fct_swt_resp(
    const uint8_t & _arg)
  {
    this->aut_actv_prkg_fct_swt_resp = _arg;
    return *this;
  }
  Type & set__aut_prkg_voice_swt_resp(
    const uint8_t & _arg)
  {
    this->aut_prkg_voice_swt_resp = _arg;
    return *this;
  }
  Type & set__aut_prkg_voice_typ_resp(
    const uint8_t & _arg)
  {
    this->aut_prkg_voice_typ_resp = _arg;
    return *this;
  }
  Type & set__img_sn_sr_cal_sts(
    const bool & _arg)
  {
    this->img_sn_sr_cal_sts = _arg;
    return *this;
  }
  Type & set__prkg_dock_dis_req(
    const uint8_t & _arg)
  {
    this->prkg_dock_dis_req = _arg;
    return *this;
  }
  Type & set__pdc_ctrl_rsn(
    const uint8_t & _arg)
  {
    this->pdc_ctrl_rsn = _arg;
    return *this;
  }
  Type & set__system_fault(
    const uint32_t & _arg)
  {
    this->system_fault = _arg;
    return *this;
  }
  Type & set__prkg_lock_req(
    const uint8_t & _arg)
  {
    this->prkg_lock_req = _arg;
    return *this;
  }
  Type & set__mirr_open_cls_req(
    const uint8_t & _arg)
  {
    this->mirr_open_cls_req = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_req_resp(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_req_resp = _arg;
    return *this;
  }
  Type & set__prkg_mod_incln(
    const uint8_t & _arg)
  {
    this->prkg_mod_incln = _arg;
    return *this;
  }
  Type & set__prkg_assi_sys_rem_prkg_sts(
    const uint8_t & _arg)
  {
    this->prkg_assi_sys_rem_prkg_sts = _arg;
    return *this;
  }
  Type & set__veh_win_sun_roof_cls_req(
    const uint8_t & _arg)
  {
    this->veh_win_sun_roof_cls_req = _arg;
    return *this;
  }
  Type & set__veh_prkg_lock_theft_req(
    const uint8_t & _arg)
  {
    this->veh_prkg_lock_theft_req = _arg;
    return *this;
  }
  Type & set__rpa_version(
    const uint32_t & _arg)
  {
    this->rpa_version = _arg;
    return *this;
  }
  Type & set__prkg_usg_drv_mod_tran_req(
    const uint8_t & _arg)
  {
    this->prkg_usg_drv_mod_tran_req = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_sts_uint8(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_sts_uint8 = _arg;
    return *this;
  }
  Type & set__prkg_proc_dst_disp(
    const float & _arg)
  {
    this->prkg_proc_dst_disp = _arg;
    return *this;
  }
  Type & set__prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1(
    const uint8_t & _arg)
  {
    this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts = _arg;
    return *this;
  }
  Type & set__mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts(
    const uint8_t & _arg)
  {
    this->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts = _arg;
    return *this;
  }
  Type & set__rem_straight_prkg_assi_seln_req_resp(
    const float & _arg)
  {
    this->rem_straight_prkg_assi_seln_req_resp = _arg;
    return *this;
  }
  Type & set__rem_str_sts(
    const uint8_t & _arg)
  {
    this->rem_str_sts = _arg;
    return *this;
  }
  Type & set__tsm_req_rpa_on(
    const uint8_t & _arg)
  {
    this->tsm_req_rpa_on = _arg;
    return *this;
  }
  Type & set__last_parkg_type_con_rq(
    const uint8_t & _arg)
  {
    this->last_parkg_type_con_rq = _arg;
    return *this;
  }
  Type & set__forward_distance(
    const float & _arg)
  {
    this->forward_distance = _arg;
    return *this;
  }
  Type & set__backward_distance(
    const float & _arg)
  {
    this->backward_distance = _arg;
    return *this;
  }
  Type & set__total_distance(
    const float & _arg)
  {
    this->total_distance = _arg;
    return *this;
  }
  Type & set__apa_self_park_or_out_version(
    const uint32_t & _arg)
  {
    this->apa_self_park_or_out_version = _arg;
    return *this;
  }
  Type & set__plan_first_sucs(
    const uint8_t & _arg)
  {
    this->plan_first_sucs = _arg;
    return *this;
  }
  Type & set__disp_interface_chg_req(
    const uint8_t & _arg)
  {
    this->disp_interface_chg_req = _arg;
    return *this;
  }
  Type & set__prkg_fcts_swt_sts_disp(
    const uint8_t & _arg)
  {
    this->prkg_fcts_swt_sts_disp = _arg;
    return *this;
  }
  Type & set__avm_drvr_assc_sys_disp(
    const uint8_t & _arg)
  {
    this->avm_drvr_assc_sys_disp = _arg;
    return *this;
  }
  Type & set__avm_prkg_fct_di_disp(
    const uint8_t & _arg)
  {
    this->avm_prkg_fct_di_disp = _arg;
    return *this;
  }
  Type & set__prkg_btn_sts_dispset(
    const uint8_t & _arg)
  {
    this->prkg_btn_sts_dispset = _arg;
    return *this;
  }
  Type & set__drvr_assc_sys_disp_list(
    const uint8_t & _arg)
  {
    this->drvr_assc_sys_disp_list = _arg;
    return *this;
  }
  Type & set__prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5(
    const uint8_t & _arg)
  {
    this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 = _arg;
    return *this;
  }
  Type & set__prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6(
    const uint8_t & _arg)
  {
    this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 = _arg;
    return *this;
  }
  Type & set__prkg_fct_test_pnd_req(
    const uint32_t & _arg)
  {
    this->prkg_fct_test_pnd_req = _arg;
    return *this;
  }
  Type & set__sm_hpa_version(
    const uint32_t & _arg)
  {
    this->sm_hpa_version = _arg;
    return *this;
  }
  Type & set__sm_hpa_state_ind(
    const uint8_t & _arg)
  {
    this->sm_hpa_state_ind = _arg;
    return *this;
  }
  Type & set__sm_hpa_state(
    const uint8_t & _arg)
  {
    this->sm_hpa_state = _arg;
    return *this;
  }
  Type & set__sm_hpa_req_apa(
    const uint8_t & _arg)
  {
    this->sm_hpa_req_apa = _arg;
    return *this;
  }
  Type & set__sm_hpa_proc_prompt_req(
    const uint8_t & _arg)
  {
    this->sm_hpa_proc_prompt_req = _arg;
    return *this;
  }
  Type & set__sm_hpa_quit_reason(
    const uint8_t & _arg)
  {
    this->sm_hpa_quit_reason = _arg;
    return *this;
  }
  Type & set__valt_prkg_failr_notif(
    const uint8_t & _arg)
  {
    this->valt_prkg_failr_notif = _arg;
    return *this;
  }
  Type & set__home_prkg_voice_prompt_req(
    const uint8_t & _arg)
  {
    this->home_prkg_voice_prompt_req = _arg;
    return *this;
  }
  Type & set__sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req(
    const uint8_t & _arg)
  {
    this->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req = _arg;
    return *this;
  }
  Type & set__sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1(
    const uint8_t & _arg)
  {
    this->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 = _arg;
    return *this;
  }
  Type & set__valt_prkg_reminder(
    const uint8_t & _arg)
  {
    this->valt_prkg_reminder = _arg;
    return *this;
  }
  Type & set__veh_home_prkg_sys_sts(
    const uint8_t & _arg)
  {
    this->veh_home_prkg_sys_sts = _arg;
    return *this;
  }
  Type & set__prkg_amb_li_req(
    const uint8_t & _arg)
  {
    this->prkg_amb_li_req = _arg;
    return *this;
  }
  Type & set__veh_prkg_to_horn(
    const uint8_t & _arg)
  {
    this->veh_prkg_to_horn = _arg;
    return *this;
  }
  Type & set__prkg_accr_ovrdn_ctrl_reqgrp(
    const uint8_t & _arg)
  {
    this->prkg_accr_ovrdn_ctrl_reqgrp = _arg;
    return *this;
  }
  Type & set__hpa_st_code_to_sm(
    const uint8_t & _arg)
  {
    this->hpa_st_code_to_sm = _arg;
    return *this;
  }
  Type & set__lo_spd_and_trk_bck_sys_sts(
    const uint8_t & _arg)
  {
    this->lo_spd_and_trk_bck_sys_sts = _arg;
    return *this;
  }
  Type & set__sm_rem_ctrl_veh_sts(
    const uint8_t & _arg)
  {
    this->sm_rem_ctrl_veh_sts = _arg;
    return *this;
  }
  Type & set__sm_rem_str_sts(
    const uint8_t & _arg)
  {
    this->sm_rem_str_sts = _arg;
    return *this;
  }
  Type & set__sm_rcv_mod_incln(
    const uint8_t & _arg)
  {
    this->sm_rcv_mod_incln = _arg;
    return *this;
  }
  Type & set__sm_mob_dev_rcv_req_resp(
    const uint8_t & _arg)
  {
    this->sm_mob_dev_rcv_req_resp = _arg;
    return *this;
  }
  Type & set__sm_mob_dev_rcv_sts(
    const uint8_t & _arg)
  {
    this->sm_mob_dev_rcv_sts = _arg;
    return *this;
  }
  Type & set__sm_rcv_version(
    const uint32_t & _arg)
  {
    this->sm_rcv_version = _arg;
    return *this;
  }
  Type & set__lgt_control_request(
    const uint8_t & _arg)
  {
    this->lgt_control_request = _arg;
    return *this;
  }
  Type & set__lat_control_request(
    const uint8_t & _arg)
  {
    this->lat_control_request = _arg;
    return *this;
  }
  Type & set__mai_sts(
    const uint8_t & _arg)
  {
    this->mai_sts = _arg;
    return *this;
  }
  Type & set__prkg_emgy_brk_sys_sts(
    const uint8_t & _arg)
  {
    this->prkg_emgy_brk_sys_sts = _arg;
    return *this;
  }
  Type & set__prkg_btn_sts_disp_float(
    const uint8_t & _arg)
  {
    this->prkg_btn_sts_disp_float = _arg;
    return *this;
  }
  Type & set__prkg_active_push(
    const uint8_t & _arg)
  {
    this->prkg_active_push = _arg;
    return *this;
  }
  Type & set__prkg_fct_di_mod(
    const uint8_t & _arg)
  {
    this->prkg_fct_di_mod = _arg;
    return *this;
  }
  Type & set__no_touching_for_avm_req(
    const uint8_t & _arg)
  {
    this->no_touching_for_avm_req = _arg;
    return *this;
  }
  Type & set__aut_prkg_in_btn_sts_from_rpa(
    const uint8_t & _arg)
  {
    this->aut_prkg_in_btn_sts_from_rpa = _arg;
    return *this;
  }
  Type & set__asy_a_lgt_sts_asy_a_lgt_sts(
    const uint8_t & _arg)
  {
    this->asy_a_lgt_sts_asy_a_lgt_sts = _arg;
    return *this;
  }
  Type & set__asy_stand_still_req_for_cmft(
    const uint8_t & _arg)
  {
    this->asy_stand_still_req_for_cmft = _arg;
    return *this;
  }
  Type & set__drv_off_req_for_lgt_ctrl(
    const uint8_t & _arg)
  {
    this->drv_off_req_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__stop_req_of_lgt_ctrl_for_prpsn(
    const uint8_t & _arg)
  {
    this->stop_req_of_lgt_ctrl_for_prpsn = _arg;
    return *this;
  }
  Type & set__strt_req_of_lgt_ctrl_for_prpsn(
    const uint8_t & _arg)
  {
    this->strt_req_of_lgt_ctrl_for_prpsn = _arg;
    return *this;
  }
  Type & set__avl_sts_for_long_aut_drv(
    const uint8_t & _arg)
  {
    this->avl_sts_for_long_aut_drv = _arg;
    return *this;
  }
  Type & set__hwa_lat_ctrl_sts(
    const uint8_t & _arg)
  {
    this->hwa_lat_ctrl_sts = _arg;
    return *this;
  }
  Type & set__ad_ctrl_mode(
    const uint8_t & _arg)
  {
    this->ad_ctrl_mode = _arg;
    return *this;
  }
  Type & set__asy_lane_chg_assist_sts(
    const uint8_t & _arg)
  {
    this->asy_lane_chg_assist_sts = _arg;
    return *this;
  }
  Type & set__asy_noa_sts(
    const uint8_t & _arg)
  {
    this->asy_noa_sts = _arg;
    return *this;
  }
  Type & set__aut_lane_chg_sts(
    const uint8_t & _arg)
  {
    this->aut_lane_chg_sts = _arg;
    return *this;
  }
  Type & set__asy_req_lane_chg(
    const uint8_t & _arg)
  {
    this->asy_req_lane_chg = _arg;
    return *this;
  }
  Type & set__sm_state(
    const uint8_t & _arg)
  {
    this->sm_state = _arg;
    return *this;
  }
  Type & set__function_status(
    const std::array<uint8_t, 32> & _arg)
  {
    this->function_status = _arg;
    return *this;
  }
  Type & set__hwa_odd_off(
    const uint8_t & _arg)
  {
    this->hwa_odd_off = _arg;
    return *this;
  }
  Type & set__smfault_level(
    const std::array<uint8_t, 32> & _arg)
  {
    this->smfault_level = _arg;
    return *this;
  }
  Type & set__prkg_camera_store_resp(
    const uint8_t & _arg)
  {
    this->prkg_camera_store_resp = _arg;
    return *this;
  }
  Type & set__rev(
    const std::array<uint8_t, 8> & _arg)
  {
    this->rev = _arg;
    return *this;
  }
  Type & set__dpa_mode_broadcast(
    const uint8_t & _arg)
  {
    this->dpa_mode_broadcast = _arg;
    return *this;
  }
  Type & set__dpa_btn_sts(
    const uint8_t & _arg)
  {
    this->dpa_btn_sts = _arg;
    return *this;
  }
  Type & set__sm_fct_err_code2_hmi(
    const uint16_t & _arg)
  {
    this->sm_fct_err_code2_hmi = _arg;
    return *this;
  }
  Type & set__view_layout_req(
    const uint8_t & _arg)
  {
    this->view_layout_req = _arg;
    return *this;
  }
  Type & set__cust_btn_sts(
    const uint8_t & _arg)
  {
    this->cust_btn_sts = _arg;
    return *this;
  }
  Type & set__exit_cust_btn_sts(
    const uint8_t & _arg)
  {
    this->exit_cust_btn_sts = _arg;
    return *this;
  }
  Type & set__frnt_and_re_prkg_in_btn_sts(
    const uint8_t & _arg)
  {
    this->frnt_and_re_prkg_in_btn_sts = _arg;
    return *this;
  }
  Type & set__mai_version(
    const uint8_t & _arg)
  {
    this->mai_version = _arg;
    return *this;
  }
  Type & set__peb_version(
    const uint8_t & _arg)
  {
    this->peb_version = _arg;
    return *this;
  }
  Type & set__lo_spd_and_trk_bck_sub_sts(
    const uint8_t & _arg)
  {
    this->lo_spd_and_trk_bck_sub_sts = _arg;
    return *this;
  }
  Type & set__fill_light_req(
    const uint8_t & _arg)
  {
    this->fill_light_req = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::StateMachineData_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::StateMachineData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::StateMachineData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::StateMachineData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__StateMachineData
    std::shared_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__StateMachineData
    std::shared_ptr<deva_function_msgs::msg::StateMachineData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StateMachineData_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->three_d_angle_req != other.three_d_angle_req) {
      return false;
    }
    if (this->tsm_version != other.tsm_version) {
      return false;
    }
    if (this->apa_version != other.apa_version) {
      return false;
    }
    if (this->avm_version != other.avm_version) {
      return false;
    }
    if (this->hmi_version != other.hmi_version) {
      return false;
    }
    if (this->drvr_assc_sys_sts != other.drvr_assc_sys_sts) {
      return false;
    }
    if (this->apa_sub_sys_sts != other.apa_sub_sys_sts) {
      return false;
    }
    if (this->last_prk_type != other.last_prk_type) {
      return false;
    }
    if (this->monr_sys_sts != other.monr_sys_sts) {
      return false;
    }
    if (this->obstcl_trig_resp != other.obstcl_trig_resp) {
      return false;
    }
    if (this->pla_mod_sts_resp != other.pla_mod_sts_resp) {
      return false;
    }
    if (this->swt_disp_on_and_off_sts_resp != other.swt_disp_on_and_off_sts_resp) {
      return false;
    }
    if (this->thr_d_touring_view_resp != other.thr_d_touring_view_resp) {
      return false;
    }
    if (this->turn_entry_ag_wide_vis_resp != other.turn_entry_ag_wide_vis_resp) {
      return false;
    }
    if (this->veh_mdl_clr_resp != other.veh_mdl_clr_resp) {
      return false;
    }
    if (this->visn_ag_extn_resp != other.visn_ag_extn_resp) {
      return false;
    }
    if (this->visn_img_disp_mod_resp != other.visn_img_disp_mod_resp) {
      return false;
    }
    if (this->drvr_assc_sys_disp != other.drvr_assc_sys_disp) {
      return false;
    }
    if (this->prkg_aux_info_disp != other.prkg_aux_info_disp) {
      return false;
    }
    if (this->prkg_back_disp != other.prkg_back_disp) {
      return false;
    }
    if (this->prkg_btn_sts_disp_group_cancel != other.prkg_btn_sts_disp_group_cancel) {
      return false;
    }
    if (this->prkg_btn_sts_disp_group_prkg_in != other.prkg_btn_sts_disp_group_prkg_in) {
      return false;
    }
    if (this->prkg_btn_sts_disp_group_prkg_out != other.prkg_btn_sts_disp_group_prkg_out) {
      return false;
    }
    if (this->prkg_fct_di_disp != other.prkg_fct_di_disp) {
      return false;
    }
    if (this->prkg_fct_di_mod_resp != other.prkg_fct_di_mod_resp) {
      return false;
    }
    if (this->prkg_progs_disp != other.prkg_progs_disp) {
      return false;
    }
    if (this->prkg_stop_aud_warn_req != other.prkg_stop_aud_warn_req) {
      return false;
    }
    if (this->back_push_apa_info_req != other.back_push_apa_info_req) {
      return false;
    }
    if (this->voice_prompt_req != other.voice_prompt_req) {
      return false;
    }
    if (this->prkg_img_disp_req != other.prkg_img_disp_req) {
      return false;
    }
    if (this->park_in_or_out != other.park_in_or_out) {
      return false;
    }
    if (this->shakehand_rq != other.shakehand_rq) {
      return false;
    }
    if (this->park_enter_req != other.park_enter_req) {
      return false;
    }
    if (this->park_exit_req != other.park_exit_req) {
      return false;
    }
    if (this->park_function != other.park_function) {
      return false;
    }
    if (this->prkg_fct_vmm_mod_req != other.prkg_fct_vmm_mod_req) {
      return false;
    }
    if (this->eng_runng_req_by_park_assi1 != other.eng_runng_req_by_park_assi1) {
      return false;
    }
    if (this->apa_sts_flag != other.apa_sts_flag) {
      return false;
    }
    if (this->aut_actv_prkg_fct_swt_resp != other.aut_actv_prkg_fct_swt_resp) {
      return false;
    }
    if (this->aut_prkg_voice_swt_resp != other.aut_prkg_voice_swt_resp) {
      return false;
    }
    if (this->aut_prkg_voice_typ_resp != other.aut_prkg_voice_typ_resp) {
      return false;
    }
    if (this->img_sn_sr_cal_sts != other.img_sn_sr_cal_sts) {
      return false;
    }
    if (this->prkg_dock_dis_req != other.prkg_dock_dis_req) {
      return false;
    }
    if (this->pdc_ctrl_rsn != other.pdc_ctrl_rsn) {
      return false;
    }
    if (this->system_fault != other.system_fault) {
      return false;
    }
    if (this->prkg_lock_req != other.prkg_lock_req) {
      return false;
    }
    if (this->mirr_open_cls_req != other.mirr_open_cls_req) {
      return false;
    }
    if (this->mob_dev_rpa_req_resp != other.mob_dev_rpa_req_resp) {
      return false;
    }
    if (this->prkg_mod_incln != other.prkg_mod_incln) {
      return false;
    }
    if (this->prkg_assi_sys_rem_prkg_sts != other.prkg_assi_sys_rem_prkg_sts) {
      return false;
    }
    if (this->veh_win_sun_roof_cls_req != other.veh_win_sun_roof_cls_req) {
      return false;
    }
    if (this->veh_prkg_lock_theft_req != other.veh_prkg_lock_theft_req) {
      return false;
    }
    if (this->rpa_version != other.rpa_version) {
      return false;
    }
    if (this->prkg_usg_drv_mod_tran_req != other.prkg_usg_drv_mod_tran_req) {
      return false;
    }
    if (this->mob_dev_rpa_sts_uint8 != other.mob_dev_rpa_sts_uint8) {
      return false;
    }
    if (this->prkg_proc_dst_disp != other.prkg_proc_dst_disp) {
      return false;
    }
    if (this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1 != other.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts1) {
      return false;
    }
    if (this->mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts != other.mob_dev_rpa_btn_sts_to_app_grp_prkg_in_btn_sts) {
      return false;
    }
    if (this->mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts != other.mob_dev_rpa_btn_sts_to_app_grp_prkg_out_btn_sts) {
      return false;
    }
    if (this->rem_straight_prkg_assi_seln_req_resp != other.rem_straight_prkg_assi_seln_req_resp) {
      return false;
    }
    if (this->rem_str_sts != other.rem_str_sts) {
      return false;
    }
    if (this->tsm_req_rpa_on != other.tsm_req_rpa_on) {
      return false;
    }
    if (this->last_parkg_type_con_rq != other.last_parkg_type_con_rq) {
      return false;
    }
    if (this->forward_distance != other.forward_distance) {
      return false;
    }
    if (this->backward_distance != other.backward_distance) {
      return false;
    }
    if (this->total_distance != other.total_distance) {
      return false;
    }
    if (this->apa_self_park_or_out_version != other.apa_self_park_or_out_version) {
      return false;
    }
    if (this->plan_first_sucs != other.plan_first_sucs) {
      return false;
    }
    if (this->disp_interface_chg_req != other.disp_interface_chg_req) {
      return false;
    }
    if (this->prkg_fcts_swt_sts_disp != other.prkg_fcts_swt_sts_disp) {
      return false;
    }
    if (this->avm_drvr_assc_sys_disp != other.avm_drvr_assc_sys_disp) {
      return false;
    }
    if (this->avm_prkg_fct_di_disp != other.avm_prkg_fct_di_disp) {
      return false;
    }
    if (this->prkg_btn_sts_dispset != other.prkg_btn_sts_dispset) {
      return false;
    }
    if (this->drvr_assc_sys_disp_list != other.drvr_assc_sys_disp_list) {
      return false;
    }
    if (this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5 != other.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts5) {
      return false;
    }
    if (this->prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6 != other.prkg_out_mod_btn_sts_to_app_prkg_out_mod_btn_sts6) {
      return false;
    }
    if (this->prkg_fct_test_pnd_req != other.prkg_fct_test_pnd_req) {
      return false;
    }
    if (this->sm_hpa_version != other.sm_hpa_version) {
      return false;
    }
    if (this->sm_hpa_state_ind != other.sm_hpa_state_ind) {
      return false;
    }
    if (this->sm_hpa_state != other.sm_hpa_state) {
      return false;
    }
    if (this->sm_hpa_req_apa != other.sm_hpa_req_apa) {
      return false;
    }
    if (this->sm_hpa_proc_prompt_req != other.sm_hpa_proc_prompt_req) {
      return false;
    }
    if (this->sm_hpa_quit_reason != other.sm_hpa_quit_reason) {
      return false;
    }
    if (this->valt_prkg_failr_notif != other.valt_prkg_failr_notif) {
      return false;
    }
    if (this->home_prkg_voice_prompt_req != other.home_prkg_voice_prompt_req) {
      return false;
    }
    if (this->sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req != other.sm_asy_lat_ctrl_mod_req_group_asy_lat_ctrl_mod_req) {
      return false;
    }
    if (this->sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1 != other.sm_asy_a_lgt_ctrl_mod_asy_a_lgt_ctrl_mod1) {
      return false;
    }
    if (this->valt_prkg_reminder != other.valt_prkg_reminder) {
      return false;
    }
    if (this->veh_home_prkg_sys_sts != other.veh_home_prkg_sys_sts) {
      return false;
    }
    if (this->prkg_amb_li_req != other.prkg_amb_li_req) {
      return false;
    }
    if (this->veh_prkg_to_horn != other.veh_prkg_to_horn) {
      return false;
    }
    if (this->prkg_accr_ovrdn_ctrl_reqgrp != other.prkg_accr_ovrdn_ctrl_reqgrp) {
      return false;
    }
    if (this->hpa_st_code_to_sm != other.hpa_st_code_to_sm) {
      return false;
    }
    if (this->lo_spd_and_trk_bck_sys_sts != other.lo_spd_and_trk_bck_sys_sts) {
      return false;
    }
    if (this->sm_rem_ctrl_veh_sts != other.sm_rem_ctrl_veh_sts) {
      return false;
    }
    if (this->sm_rem_str_sts != other.sm_rem_str_sts) {
      return false;
    }
    if (this->sm_rcv_mod_incln != other.sm_rcv_mod_incln) {
      return false;
    }
    if (this->sm_mob_dev_rcv_req_resp != other.sm_mob_dev_rcv_req_resp) {
      return false;
    }
    if (this->sm_mob_dev_rcv_sts != other.sm_mob_dev_rcv_sts) {
      return false;
    }
    if (this->sm_rcv_version != other.sm_rcv_version) {
      return false;
    }
    if (this->lgt_control_request != other.lgt_control_request) {
      return false;
    }
    if (this->lat_control_request != other.lat_control_request) {
      return false;
    }
    if (this->mai_sts != other.mai_sts) {
      return false;
    }
    if (this->prkg_emgy_brk_sys_sts != other.prkg_emgy_brk_sys_sts) {
      return false;
    }
    if (this->prkg_btn_sts_disp_float != other.prkg_btn_sts_disp_float) {
      return false;
    }
    if (this->prkg_active_push != other.prkg_active_push) {
      return false;
    }
    if (this->prkg_fct_di_mod != other.prkg_fct_di_mod) {
      return false;
    }
    if (this->no_touching_for_avm_req != other.no_touching_for_avm_req) {
      return false;
    }
    if (this->aut_prkg_in_btn_sts_from_rpa != other.aut_prkg_in_btn_sts_from_rpa) {
      return false;
    }
    if (this->asy_a_lgt_sts_asy_a_lgt_sts != other.asy_a_lgt_sts_asy_a_lgt_sts) {
      return false;
    }
    if (this->asy_stand_still_req_for_cmft != other.asy_stand_still_req_for_cmft) {
      return false;
    }
    if (this->drv_off_req_for_lgt_ctrl != other.drv_off_req_for_lgt_ctrl) {
      return false;
    }
    if (this->stop_req_of_lgt_ctrl_for_prpsn != other.stop_req_of_lgt_ctrl_for_prpsn) {
      return false;
    }
    if (this->strt_req_of_lgt_ctrl_for_prpsn != other.strt_req_of_lgt_ctrl_for_prpsn) {
      return false;
    }
    if (this->avl_sts_for_long_aut_drv != other.avl_sts_for_long_aut_drv) {
      return false;
    }
    if (this->hwa_lat_ctrl_sts != other.hwa_lat_ctrl_sts) {
      return false;
    }
    if (this->ad_ctrl_mode != other.ad_ctrl_mode) {
      return false;
    }
    if (this->asy_lane_chg_assist_sts != other.asy_lane_chg_assist_sts) {
      return false;
    }
    if (this->asy_noa_sts != other.asy_noa_sts) {
      return false;
    }
    if (this->aut_lane_chg_sts != other.aut_lane_chg_sts) {
      return false;
    }
    if (this->asy_req_lane_chg != other.asy_req_lane_chg) {
      return false;
    }
    if (this->sm_state != other.sm_state) {
      return false;
    }
    if (this->function_status != other.function_status) {
      return false;
    }
    if (this->hwa_odd_off != other.hwa_odd_off) {
      return false;
    }
    if (this->smfault_level != other.smfault_level) {
      return false;
    }
    if (this->prkg_camera_store_resp != other.prkg_camera_store_resp) {
      return false;
    }
    if (this->rev != other.rev) {
      return false;
    }
    if (this->dpa_mode_broadcast != other.dpa_mode_broadcast) {
      return false;
    }
    if (this->dpa_btn_sts != other.dpa_btn_sts) {
      return false;
    }
    if (this->sm_fct_err_code2_hmi != other.sm_fct_err_code2_hmi) {
      return false;
    }
    if (this->view_layout_req != other.view_layout_req) {
      return false;
    }
    if (this->cust_btn_sts != other.cust_btn_sts) {
      return false;
    }
    if (this->exit_cust_btn_sts != other.exit_cust_btn_sts) {
      return false;
    }
    if (this->frnt_and_re_prkg_in_btn_sts != other.frnt_and_re_prkg_in_btn_sts) {
      return false;
    }
    if (this->mai_version != other.mai_version) {
      return false;
    }
    if (this->peb_version != other.peb_version) {
      return false;
    }
    if (this->lo_spd_and_trk_bck_sub_sts != other.lo_spd_and_trk_bck_sub_sts) {
      return false;
    }
    if (this->fill_light_req != other.fill_light_req) {
      return false;
    }
    return true;
  }
  bool operator!=(const StateMachineData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StateMachineData_

// alias to use template instance with default allocator
using StateMachineData =
  deva_function_msgs::msg::StateMachineData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__STATE_MACHINE_DATA__STRUCT_HPP_
