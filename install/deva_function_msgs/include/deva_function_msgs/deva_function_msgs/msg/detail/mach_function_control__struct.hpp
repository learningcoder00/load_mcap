// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__MachFunctionControl __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__MachFunctionControl __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachFunctionControl_
{
  using Type = MachFunctionControl_<ContainerAllocator>;

  explicit MachFunctionControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_aut_drvg_avl = 0;
      this->asy_lat_offst_sts = 0;
      this->asy_noa_degrade_msg = 0;
      this->lane_chg_aut_info_for_asy_hi_way = 0;
      this->lane_chg_aut_sts_for_asy_hi_way = 0;
      this->ti_gap_set_for_lgt_ctrl = 0;
      this->asy_lgt_ctrl_take_over_req = 0;
      this->steer_tq_addl_for_ema_steer_tq_addl_for_ema = 0.0f;
      this->strt_req_of_lgt_ctrl_for_prpsn = 0;
      this->asy_noa_deactvd_reasn_mesg = 0;
      this->asy_noa_remind_mesg = 0;
      this->asy_high_beam_flash_warn_rqrd = 0;
      this->asy_noa_takeover_mesg = 0;
      this->asy_fast_lane_swt_sts = 0;
      this->asy_cnoa_auto_lane_chg_style = 0;
      this->asy_cnoa_crs_actv_faild_msg = 0;
      this->asy_cnoa_crs_cross_intsec_msg = 0;
      this->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = 0;
      this->asy_cnoa_crs_finshd_msg = 0;
      this->asy_cnoa_crs_ind_ti_gap_msg = 0;
      this->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = 0;
      this->asy_cnoa_crs_actv_msg = 0;
      this->asy_cnoa_crs_off_odddistan = 0ul;
      this->asy_cnoa_crs_sts = 0;
      this->asy_cnoa_game_fail_type = 0;
      this->asy_cnoa_game_reason = 0;
      this->asy_cnoa_crs_sts_csd_msg = 0;
      this->asy_cnoa_crs_swt_on_off = 0;
      this->asy_cnoa_crs_swt_sts = 0;
      this->asy_cnoa_data_download_faild_msg = 0;
      this->asy_cnoa_crs_offs_msg = 0;
      this->asy_cnoa_crs_rmn_msg = 0;
      this->asy_cnoa_sod_lane_chg_swt = 0;
      this->asy_cnoa_lrng_prmpt_msg = 0;
      this->asy_cnoa_lrng_swt_on_off = 0;
      this->asy_cnoa_lrng_swt_sts = 0;
      this->asy_cnoa_takeover_warn_msg = 0;
      this->asy_cnoa_turn_fail_type = 0;
      this->asy_cnoa_turn_sts = 0;
      this->asy_noa_tar_spd_offs = 0;
      this->asy_noa_avl_rmn = 0;
      this->asy_aut_lane_chg_swt_sts = 0;
      this->stop_req_of_lgt_ctrl_for_prpsn = 0;
      this->ad_theme_disp = 0;
      this->cncl_warn_for_aut_drv = 0;
      this->disp_tsi_info_for_lgt_ctrl = 0;
      this->disp_spd_set_for_lgt_ctrl = 0;
      this->hmi_nop_cofm_of_lan_chag = 0;
      this->ad4_lane_chg_for_e2e = 0;
      this->hwa_leading_point_valid = 0;
      this->hwa_leading_point_center_y = 0.0f;
      this->hwa_leading_point_center_x = 0.0f;
      this->ad4_turn_indic_req_req = 0;
      this->ad4_unavl_sts_for_e2e = 0;
      this->ad4_warn_sts_for_e2e = 0;
      this->ad4_win_open_req = 0;
      this->ad_ctrl_mode_ad_ctrl_mode = 0;
      this->ad4_drv_off_req_for_lgt_ctrl_drv_off_req = 0;
      this->asy_dece_remind = 0;
      this->asy_lat_offs_swt_sts = 0;
      this->asy_undertak_on_off_sts = 0;
      this->asy_undertak_rmind = 0;
      this->asy_warn_mesg_for_aut_drv = 0;
      this->lgt_fusn_trfc_sgn = 0;
      this->drvg_ast_on_sys_sts = 0;
      this->asy_d2d_avl_rmn = 0;
      this->asy_d2d_deactvd_reasn_mesg = 0;
      this->asy_d2d_distan_msg = 0;
      this->asy_d2d_etc_distan_msg = 0;
      this->asy_d2d_remind_msg = 0;
      this->asy_etc_traffic_sw_sts = 0;
      this->asy_d2d_strt_to_end = 0;
      this->asy_safe_stop_sts = 0;
      this->asy_sod_lane_chg_switch = 0;
      this->avl_sts_for_long_aut_drv_sound = 0;
      this->asy_sod_pilot_cfirm = 0;
      this->cncl_warn_for_aut_drv_sound = 0;
      this->cncl_warn_lgt_for_aut_drv_sound = 0;
      this->hmi_auto_lane_chg_style = 0;
      this->hmi_lane_chg_info = 0;
      this->ovrd_wrn_for_fst_actv = 0;
      this->ad4_frt_lamp_req = 0;
      this->ad4_rear_fog_lamp_req = 0;
      this->ad4_res_req_for_e2e = 0;
      this->ad4_trunk_ctrl_req = 0;
      this->acc_fusn_trfc_sgn = 0;
      this->asy_sfty_fct_sts_to_edraccfct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfb1_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfb2_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfc_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfd_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfe_fct_sts = 0;
      this->asy_cnoa_crs_csd_indcr = 0;
      this->asy_cnoa_crs_hud_indcr = 0;
      this->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = 0;
      this->asy_emgy_manoeuvre_aid_sts = 0;
      this->asy_fctn_ihbt_by_trlr = 0;
      this->asy_icc_max_warn_msg = 0;
      this->asy_sfty_hwl_req = 0;
      this->aut_lane_chg_sts = 0;
      this->cllsn_aid_post_ema = 0;
      this->lane_chg_aut_actv_sts = 0;
      this->cam_sts_cam_cam_frnt_cal_not_cmpl = 0;
      this->asy_cnoa_lane_chg_assist_sts = 0;
      this->asy_cnoa_lane_chg_fail_type = 0;
      this->aut_cnoa_lane_chg_sts = 0;
      this->asy_cnoa_req_lane_chg = 0;
    }
  }

  explicit MachFunctionControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_aut_drvg_avl = 0;
      this->asy_lat_offst_sts = 0;
      this->asy_noa_degrade_msg = 0;
      this->lane_chg_aut_info_for_asy_hi_way = 0;
      this->lane_chg_aut_sts_for_asy_hi_way = 0;
      this->ti_gap_set_for_lgt_ctrl = 0;
      this->asy_lgt_ctrl_take_over_req = 0;
      this->steer_tq_addl_for_ema_steer_tq_addl_for_ema = 0.0f;
      this->strt_req_of_lgt_ctrl_for_prpsn = 0;
      this->asy_noa_deactvd_reasn_mesg = 0;
      this->asy_noa_remind_mesg = 0;
      this->asy_high_beam_flash_warn_rqrd = 0;
      this->asy_noa_takeover_mesg = 0;
      this->asy_fast_lane_swt_sts = 0;
      this->asy_cnoa_auto_lane_chg_style = 0;
      this->asy_cnoa_crs_actv_faild_msg = 0;
      this->asy_cnoa_crs_cross_intsec_msg = 0;
      this->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = 0;
      this->asy_cnoa_crs_finshd_msg = 0;
      this->asy_cnoa_crs_ind_ti_gap_msg = 0;
      this->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = 0;
      this->asy_cnoa_crs_actv_msg = 0;
      this->asy_cnoa_crs_off_odddistan = 0ul;
      this->asy_cnoa_crs_sts = 0;
      this->asy_cnoa_game_fail_type = 0;
      this->asy_cnoa_game_reason = 0;
      this->asy_cnoa_crs_sts_csd_msg = 0;
      this->asy_cnoa_crs_swt_on_off = 0;
      this->asy_cnoa_crs_swt_sts = 0;
      this->asy_cnoa_data_download_faild_msg = 0;
      this->asy_cnoa_crs_offs_msg = 0;
      this->asy_cnoa_crs_rmn_msg = 0;
      this->asy_cnoa_sod_lane_chg_swt = 0;
      this->asy_cnoa_lrng_prmpt_msg = 0;
      this->asy_cnoa_lrng_swt_on_off = 0;
      this->asy_cnoa_lrng_swt_sts = 0;
      this->asy_cnoa_takeover_warn_msg = 0;
      this->asy_cnoa_turn_fail_type = 0;
      this->asy_cnoa_turn_sts = 0;
      this->asy_noa_tar_spd_offs = 0;
      this->asy_noa_avl_rmn = 0;
      this->asy_aut_lane_chg_swt_sts = 0;
      this->stop_req_of_lgt_ctrl_for_prpsn = 0;
      this->ad_theme_disp = 0;
      this->cncl_warn_for_aut_drv = 0;
      this->disp_tsi_info_for_lgt_ctrl = 0;
      this->disp_spd_set_for_lgt_ctrl = 0;
      this->hmi_nop_cofm_of_lan_chag = 0;
      this->ad4_lane_chg_for_e2e = 0;
      this->hwa_leading_point_valid = 0;
      this->hwa_leading_point_center_y = 0.0f;
      this->hwa_leading_point_center_x = 0.0f;
      this->ad4_turn_indic_req_req = 0;
      this->ad4_unavl_sts_for_e2e = 0;
      this->ad4_warn_sts_for_e2e = 0;
      this->ad4_win_open_req = 0;
      this->ad_ctrl_mode_ad_ctrl_mode = 0;
      this->ad4_drv_off_req_for_lgt_ctrl_drv_off_req = 0;
      this->asy_dece_remind = 0;
      this->asy_lat_offs_swt_sts = 0;
      this->asy_undertak_on_off_sts = 0;
      this->asy_undertak_rmind = 0;
      this->asy_warn_mesg_for_aut_drv = 0;
      this->lgt_fusn_trfc_sgn = 0;
      this->drvg_ast_on_sys_sts = 0;
      this->asy_d2d_avl_rmn = 0;
      this->asy_d2d_deactvd_reasn_mesg = 0;
      this->asy_d2d_distan_msg = 0;
      this->asy_d2d_etc_distan_msg = 0;
      this->asy_d2d_remind_msg = 0;
      this->asy_etc_traffic_sw_sts = 0;
      this->asy_d2d_strt_to_end = 0;
      this->asy_safe_stop_sts = 0;
      this->asy_sod_lane_chg_switch = 0;
      this->avl_sts_for_long_aut_drv_sound = 0;
      this->asy_sod_pilot_cfirm = 0;
      this->cncl_warn_for_aut_drv_sound = 0;
      this->cncl_warn_lgt_for_aut_drv_sound = 0;
      this->hmi_auto_lane_chg_style = 0;
      this->hmi_lane_chg_info = 0;
      this->ovrd_wrn_for_fst_actv = 0;
      this->ad4_frt_lamp_req = 0;
      this->ad4_rear_fog_lamp_req = 0;
      this->ad4_res_req_for_e2e = 0;
      this->ad4_trunk_ctrl_req = 0;
      this->acc_fusn_trfc_sgn = 0;
      this->asy_sfty_fct_sts_to_edraccfct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfb1_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfb2_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfc_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfd_fct_sts = 0;
      this->asy_sfty_fct_sts_to_edracsfe_fct_sts = 0;
      this->asy_cnoa_crs_csd_indcr = 0;
      this->asy_cnoa_crs_hud_indcr = 0;
      this->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = 0;
      this->asy_emgy_manoeuvre_aid_sts = 0;
      this->asy_fctn_ihbt_by_trlr = 0;
      this->asy_icc_max_warn_msg = 0;
      this->asy_sfty_hwl_req = 0;
      this->aut_lane_chg_sts = 0;
      this->cllsn_aid_post_ema = 0;
      this->lane_chg_aut_actv_sts = 0;
      this->cam_sts_cam_cam_frnt_cal_not_cmpl = 0;
      this->asy_cnoa_lane_chg_assist_sts = 0;
      this->asy_cnoa_lane_chg_fail_type = 0;
      this->aut_cnoa_lane_chg_sts = 0;
      this->asy_cnoa_req_lane_chg = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _asy_aut_drvg_avl_type =
    uint8_t;
  _asy_aut_drvg_avl_type asy_aut_drvg_avl;
  using _asy_lat_offst_sts_type =
    uint8_t;
  _asy_lat_offst_sts_type asy_lat_offst_sts;
  using _asy_noa_degrade_msg_type =
    uint8_t;
  _asy_noa_degrade_msg_type asy_noa_degrade_msg;
  using _lane_chg_aut_info_for_asy_hi_way_type =
    uint8_t;
  _lane_chg_aut_info_for_asy_hi_way_type lane_chg_aut_info_for_asy_hi_way;
  using _lane_chg_aut_sts_for_asy_hi_way_type =
    uint8_t;
  _lane_chg_aut_sts_for_asy_hi_way_type lane_chg_aut_sts_for_asy_hi_way;
  using _ti_gap_set_for_lgt_ctrl_type =
    uint8_t;
  _ti_gap_set_for_lgt_ctrl_type ti_gap_set_for_lgt_ctrl;
  using _asy_lgt_ctrl_take_over_req_type =
    uint8_t;
  _asy_lgt_ctrl_take_over_req_type asy_lgt_ctrl_take_over_req;
  using _steer_tq_addl_for_ema_steer_tq_addl_for_ema_type =
    float;
  _steer_tq_addl_for_ema_steer_tq_addl_for_ema_type steer_tq_addl_for_ema_steer_tq_addl_for_ema;
  using _strt_req_of_lgt_ctrl_for_prpsn_type =
    uint8_t;
  _strt_req_of_lgt_ctrl_for_prpsn_type strt_req_of_lgt_ctrl_for_prpsn;
  using _asy_noa_deactvd_reasn_mesg_type =
    uint8_t;
  _asy_noa_deactvd_reasn_mesg_type asy_noa_deactvd_reasn_mesg;
  using _asy_noa_remind_mesg_type =
    uint8_t;
  _asy_noa_remind_mesg_type asy_noa_remind_mesg;
  using _asy_high_beam_flash_warn_rqrd_type =
    uint8_t;
  _asy_high_beam_flash_warn_rqrd_type asy_high_beam_flash_warn_rqrd;
  using _asy_noa_takeover_mesg_type =
    uint8_t;
  _asy_noa_takeover_mesg_type asy_noa_takeover_mesg;
  using _asy_fast_lane_swt_sts_type =
    uint8_t;
  _asy_fast_lane_swt_sts_type asy_fast_lane_swt_sts;
  using _asy_cnoa_auto_lane_chg_style_type =
    uint8_t;
  _asy_cnoa_auto_lane_chg_style_type asy_cnoa_auto_lane_chg_style;
  using _asy_cnoa_crs_actv_faild_msg_type =
    uint8_t;
  _asy_cnoa_crs_actv_faild_msg_type asy_cnoa_crs_actv_faild_msg;
  using _asy_cnoa_crs_cross_intsec_msg_type =
    uint8_t;
  _asy_cnoa_crs_cross_intsec_msg_type asy_cnoa_crs_cross_intsec_msg;
  using _asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg_type =
    uint8_t;
  _asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg_type asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg;
  using _asy_cnoa_crs_finshd_msg_type =
    uint8_t;
  _asy_cnoa_crs_finshd_msg_type asy_cnoa_crs_finshd_msg;
  using _asy_cnoa_crs_ind_ti_gap_msg_type =
    uint8_t;
  _asy_cnoa_crs_ind_ti_gap_msg_type asy_cnoa_crs_ind_ti_gap_msg;
  using _asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg_type =
    uint8_t;
  _asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg_type asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg;
  using _asy_cnoa_crs_actv_msg_type =
    uint8_t;
  _asy_cnoa_crs_actv_msg_type asy_cnoa_crs_actv_msg;
  using _asy_cnoa_crs_off_odddistan_type =
    uint32_t;
  _asy_cnoa_crs_off_odddistan_type asy_cnoa_crs_off_odddistan;
  using _asy_cnoa_crs_sts_type =
    uint8_t;
  _asy_cnoa_crs_sts_type asy_cnoa_crs_sts;
  using _asy_cnoa_game_fail_type_type =
    uint8_t;
  _asy_cnoa_game_fail_type_type asy_cnoa_game_fail_type;
  using _asy_cnoa_game_reason_type =
    uint8_t;
  _asy_cnoa_game_reason_type asy_cnoa_game_reason;
  using _asy_cnoa_crs_sts_csd_msg_type =
    uint8_t;
  _asy_cnoa_crs_sts_csd_msg_type asy_cnoa_crs_sts_csd_msg;
  using _asy_cnoa_crs_swt_on_off_type =
    uint8_t;
  _asy_cnoa_crs_swt_on_off_type asy_cnoa_crs_swt_on_off;
  using _asy_cnoa_crs_swt_sts_type =
    uint8_t;
  _asy_cnoa_crs_swt_sts_type asy_cnoa_crs_swt_sts;
  using _asy_cnoa_data_download_faild_msg_type =
    uint8_t;
  _asy_cnoa_data_download_faild_msg_type asy_cnoa_data_download_faild_msg;
  using _asy_cnoa_crs_offs_msg_type =
    uint8_t;
  _asy_cnoa_crs_offs_msg_type asy_cnoa_crs_offs_msg;
  using _asy_cnoa_crs_rmn_msg_type =
    uint8_t;
  _asy_cnoa_crs_rmn_msg_type asy_cnoa_crs_rmn_msg;
  using _asy_cnoa_sod_lane_chg_swt_type =
    uint8_t;
  _asy_cnoa_sod_lane_chg_swt_type asy_cnoa_sod_lane_chg_swt;
  using _asy_cnoa_lrng_prmpt_msg_type =
    uint8_t;
  _asy_cnoa_lrng_prmpt_msg_type asy_cnoa_lrng_prmpt_msg;
  using _asy_cnoa_lrng_swt_on_off_type =
    uint8_t;
  _asy_cnoa_lrng_swt_on_off_type asy_cnoa_lrng_swt_on_off;
  using _asy_cnoa_lrng_swt_sts_type =
    uint8_t;
  _asy_cnoa_lrng_swt_sts_type asy_cnoa_lrng_swt_sts;
  using _asy_cnoa_takeover_warn_msg_type =
    uint8_t;
  _asy_cnoa_takeover_warn_msg_type asy_cnoa_takeover_warn_msg;
  using _asy_cnoa_turn_fail_type_type =
    uint8_t;
  _asy_cnoa_turn_fail_type_type asy_cnoa_turn_fail_type;
  using _asy_cnoa_turn_sts_type =
    uint8_t;
  _asy_cnoa_turn_sts_type asy_cnoa_turn_sts;
  using _asy_noa_tar_spd_offs_type =
    uint8_t;
  _asy_noa_tar_spd_offs_type asy_noa_tar_spd_offs;
  using _asy_noa_avl_rmn_type =
    uint8_t;
  _asy_noa_avl_rmn_type asy_noa_avl_rmn;
  using _asy_aut_lane_chg_swt_sts_type =
    uint8_t;
  _asy_aut_lane_chg_swt_sts_type asy_aut_lane_chg_swt_sts;
  using _stop_req_of_lgt_ctrl_for_prpsn_type =
    uint8_t;
  _stop_req_of_lgt_ctrl_for_prpsn_type stop_req_of_lgt_ctrl_for_prpsn;
  using _ad_theme_disp_type =
    uint8_t;
  _ad_theme_disp_type ad_theme_disp;
  using _cncl_warn_for_aut_drv_type =
    uint8_t;
  _cncl_warn_for_aut_drv_type cncl_warn_for_aut_drv;
  using _disp_tsi_info_for_lgt_ctrl_type =
    uint8_t;
  _disp_tsi_info_for_lgt_ctrl_type disp_tsi_info_for_lgt_ctrl;
  using _disp_spd_set_for_lgt_ctrl_type =
    uint16_t;
  _disp_spd_set_for_lgt_ctrl_type disp_spd_set_for_lgt_ctrl;
  using _hmi_nop_cofm_of_lan_chag_type =
    uint8_t;
  _hmi_nop_cofm_of_lan_chag_type hmi_nop_cofm_of_lan_chag;
  using _ad4_lane_chg_for_e2e_type =
    uint8_t;
  _ad4_lane_chg_for_e2e_type ad4_lane_chg_for_e2e;
  using _hwa_leading_point_valid_type =
    uint8_t;
  _hwa_leading_point_valid_type hwa_leading_point_valid;
  using _hwa_leading_point_center_y_type =
    float;
  _hwa_leading_point_center_y_type hwa_leading_point_center_y;
  using _hwa_leading_point_center_x_type =
    float;
  _hwa_leading_point_center_x_type hwa_leading_point_center_x;
  using _ad4_turn_indic_req_req_type =
    uint8_t;
  _ad4_turn_indic_req_req_type ad4_turn_indic_req_req;
  using _ad4_unavl_sts_for_e2e_type =
    uint8_t;
  _ad4_unavl_sts_for_e2e_type ad4_unavl_sts_for_e2e;
  using _ad4_warn_sts_for_e2e_type =
    uint8_t;
  _ad4_warn_sts_for_e2e_type ad4_warn_sts_for_e2e;
  using _ad4_win_open_req_type =
    uint8_t;
  _ad4_win_open_req_type ad4_win_open_req;
  using _ad_ctrl_mode_ad_ctrl_mode_type =
    uint8_t;
  _ad_ctrl_mode_ad_ctrl_mode_type ad_ctrl_mode_ad_ctrl_mode;
  using _ad4_drv_off_req_for_lgt_ctrl_drv_off_req_type =
    uint8_t;
  _ad4_drv_off_req_for_lgt_ctrl_drv_off_req_type ad4_drv_off_req_for_lgt_ctrl_drv_off_req;
  using _asy_dece_remind_type =
    uint8_t;
  _asy_dece_remind_type asy_dece_remind;
  using _asy_lat_offs_swt_sts_type =
    uint8_t;
  _asy_lat_offs_swt_sts_type asy_lat_offs_swt_sts;
  using _asy_undertak_on_off_sts_type =
    uint8_t;
  _asy_undertak_on_off_sts_type asy_undertak_on_off_sts;
  using _asy_undertak_rmind_type =
    uint8_t;
  _asy_undertak_rmind_type asy_undertak_rmind;
  using _asy_warn_mesg_for_aut_drv_type =
    uint8_t;
  _asy_warn_mesg_for_aut_drv_type asy_warn_mesg_for_aut_drv;
  using _lgt_fusn_trfc_sgn_type =
    uint8_t;
  _lgt_fusn_trfc_sgn_type lgt_fusn_trfc_sgn;
  using _drvg_ast_on_sys_sts_type =
    uint8_t;
  _drvg_ast_on_sys_sts_type drvg_ast_on_sys_sts;
  using _asy_d2d_avl_rmn_type =
    uint8_t;
  _asy_d2d_avl_rmn_type asy_d2d_avl_rmn;
  using _asy_d2d_deactvd_reasn_mesg_type =
    uint8_t;
  _asy_d2d_deactvd_reasn_mesg_type asy_d2d_deactvd_reasn_mesg;
  using _asy_d2d_distan_msg_type =
    uint8_t;
  _asy_d2d_distan_msg_type asy_d2d_distan_msg;
  using _asy_d2d_etc_distan_msg_type =
    uint8_t;
  _asy_d2d_etc_distan_msg_type asy_d2d_etc_distan_msg;
  using _asy_d2d_remind_msg_type =
    uint8_t;
  _asy_d2d_remind_msg_type asy_d2d_remind_msg;
  using _asy_etc_traffic_sw_sts_type =
    uint8_t;
  _asy_etc_traffic_sw_sts_type asy_etc_traffic_sw_sts;
  using _asy_d2d_strt_to_end_type =
    uint8_t;
  _asy_d2d_strt_to_end_type asy_d2d_strt_to_end;
  using _asy_safe_stop_sts_type =
    uint8_t;
  _asy_safe_stop_sts_type asy_safe_stop_sts;
  using _asy_sod_lane_chg_switch_type =
    uint8_t;
  _asy_sod_lane_chg_switch_type asy_sod_lane_chg_switch;
  using _avl_sts_for_long_aut_drv_sound_type =
    uint8_t;
  _avl_sts_for_long_aut_drv_sound_type avl_sts_for_long_aut_drv_sound;
  using _asy_sod_pilot_cfirm_type =
    uint8_t;
  _asy_sod_pilot_cfirm_type asy_sod_pilot_cfirm;
  using _cncl_warn_for_aut_drv_sound_type =
    uint8_t;
  _cncl_warn_for_aut_drv_sound_type cncl_warn_for_aut_drv_sound;
  using _cncl_warn_lgt_for_aut_drv_sound_type =
    uint8_t;
  _cncl_warn_lgt_for_aut_drv_sound_type cncl_warn_lgt_for_aut_drv_sound;
  using _hmi_auto_lane_chg_style_type =
    uint8_t;
  _hmi_auto_lane_chg_style_type hmi_auto_lane_chg_style;
  using _hmi_lane_chg_info_type =
    uint8_t;
  _hmi_lane_chg_info_type hmi_lane_chg_info;
  using _ovrd_wrn_for_fst_actv_type =
    uint8_t;
  _ovrd_wrn_for_fst_actv_type ovrd_wrn_for_fst_actv;
  using _ad4_frt_lamp_req_type =
    uint8_t;
  _ad4_frt_lamp_req_type ad4_frt_lamp_req;
  using _ad4_rear_fog_lamp_req_type =
    uint8_t;
  _ad4_rear_fog_lamp_req_type ad4_rear_fog_lamp_req;
  using _ad4_res_req_for_e2e_type =
    uint8_t;
  _ad4_res_req_for_e2e_type ad4_res_req_for_e2e;
  using _ad4_trunk_ctrl_req_type =
    uint8_t;
  _ad4_trunk_ctrl_req_type ad4_trunk_ctrl_req;
  using _acc_fusn_trfc_sgn_type =
    uint8_t;
  _acc_fusn_trfc_sgn_type acc_fusn_trfc_sgn;
  using _asy_sfty_fct_sts_to_edraccfct_sts_type =
    uint8_t;
  _asy_sfty_fct_sts_to_edraccfct_sts_type asy_sfty_fct_sts_to_edraccfct_sts;
  using _asy_sfty_fct_sts_to_edracsfb1_fct_sts_type =
    uint8_t;
  _asy_sfty_fct_sts_to_edracsfb1_fct_sts_type asy_sfty_fct_sts_to_edracsfb1_fct_sts;
  using _asy_sfty_fct_sts_to_edracsfb2_fct_sts_type =
    uint8_t;
  _asy_sfty_fct_sts_to_edracsfb2_fct_sts_type asy_sfty_fct_sts_to_edracsfb2_fct_sts;
  using _asy_sfty_fct_sts_to_edracsfc_fct_sts_type =
    uint8_t;
  _asy_sfty_fct_sts_to_edracsfc_fct_sts_type asy_sfty_fct_sts_to_edracsfc_fct_sts;
  using _asy_sfty_fct_sts_to_edracsfd_fct_sts_type =
    uint8_t;
  _asy_sfty_fct_sts_to_edracsfd_fct_sts_type asy_sfty_fct_sts_to_edracsfd_fct_sts;
  using _asy_sfty_fct_sts_to_edracsfe_fct_sts_type =
    uint8_t;
  _asy_sfty_fct_sts_to_edracsfe_fct_sts_type asy_sfty_fct_sts_to_edracsfe_fct_sts;
  using _asy_cnoa_crs_csd_indcr_type =
    uint8_t;
  _asy_cnoa_crs_csd_indcr_type asy_cnoa_crs_csd_indcr;
  using _asy_cnoa_crs_hud_indcr_type =
    uint8_t;
  _asy_cnoa_crs_hud_indcr_type asy_cnoa_crs_hud_indcr;
  using _asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr_type =
    uint8_t;
  _asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr_type asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr;
  using _asy_emgy_manoeuvre_aid_sts_type =
    uint8_t;
  _asy_emgy_manoeuvre_aid_sts_type asy_emgy_manoeuvre_aid_sts;
  using _asy_fctn_ihbt_by_trlr_type =
    uint8_t;
  _asy_fctn_ihbt_by_trlr_type asy_fctn_ihbt_by_trlr;
  using _asy_icc_max_warn_msg_type =
    uint8_t;
  _asy_icc_max_warn_msg_type asy_icc_max_warn_msg;
  using _asy_sfty_hwl_req_type =
    uint8_t;
  _asy_sfty_hwl_req_type asy_sfty_hwl_req;
  using _aut_lane_chg_sts_type =
    uint8_t;
  _aut_lane_chg_sts_type aut_lane_chg_sts;
  using _cllsn_aid_post_ema_type =
    uint8_t;
  _cllsn_aid_post_ema_type cllsn_aid_post_ema;
  using _lane_chg_aut_actv_sts_type =
    uint8_t;
  _lane_chg_aut_actv_sts_type lane_chg_aut_actv_sts;
  using _cam_sts_cam_cam_frnt_cal_not_cmpl_type =
    uint8_t;
  _cam_sts_cam_cam_frnt_cal_not_cmpl_type cam_sts_cam_cam_frnt_cal_not_cmpl;
  using _asy_cnoa_lane_chg_assist_sts_type =
    uint8_t;
  _asy_cnoa_lane_chg_assist_sts_type asy_cnoa_lane_chg_assist_sts;
  using _asy_cnoa_lane_chg_fail_type_type =
    uint8_t;
  _asy_cnoa_lane_chg_fail_type_type asy_cnoa_lane_chg_fail_type;
  using _aut_cnoa_lane_chg_sts_type =
    uint8_t;
  _aut_cnoa_lane_chg_sts_type aut_cnoa_lane_chg_sts;
  using _asy_cnoa_req_lane_chg_type =
    uint8_t;
  _asy_cnoa_req_lane_chg_type asy_cnoa_req_lane_chg;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__asy_aut_drvg_avl(
    const uint8_t & _arg)
  {
    this->asy_aut_drvg_avl = _arg;
    return *this;
  }
  Type & set__asy_lat_offst_sts(
    const uint8_t & _arg)
  {
    this->asy_lat_offst_sts = _arg;
    return *this;
  }
  Type & set__asy_noa_degrade_msg(
    const uint8_t & _arg)
  {
    this->asy_noa_degrade_msg = _arg;
    return *this;
  }
  Type & set__lane_chg_aut_info_for_asy_hi_way(
    const uint8_t & _arg)
  {
    this->lane_chg_aut_info_for_asy_hi_way = _arg;
    return *this;
  }
  Type & set__lane_chg_aut_sts_for_asy_hi_way(
    const uint8_t & _arg)
  {
    this->lane_chg_aut_sts_for_asy_hi_way = _arg;
    return *this;
  }
  Type & set__ti_gap_set_for_lgt_ctrl(
    const uint8_t & _arg)
  {
    this->ti_gap_set_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__asy_lgt_ctrl_take_over_req(
    const uint8_t & _arg)
  {
    this->asy_lgt_ctrl_take_over_req = _arg;
    return *this;
  }
  Type & set__steer_tq_addl_for_ema_steer_tq_addl_for_ema(
    const float & _arg)
  {
    this->steer_tq_addl_for_ema_steer_tq_addl_for_ema = _arg;
    return *this;
  }
  Type & set__strt_req_of_lgt_ctrl_for_prpsn(
    const uint8_t & _arg)
  {
    this->strt_req_of_lgt_ctrl_for_prpsn = _arg;
    return *this;
  }
  Type & set__asy_noa_deactvd_reasn_mesg(
    const uint8_t & _arg)
  {
    this->asy_noa_deactvd_reasn_mesg = _arg;
    return *this;
  }
  Type & set__asy_noa_remind_mesg(
    const uint8_t & _arg)
  {
    this->asy_noa_remind_mesg = _arg;
    return *this;
  }
  Type & set__asy_high_beam_flash_warn_rqrd(
    const uint8_t & _arg)
  {
    this->asy_high_beam_flash_warn_rqrd = _arg;
    return *this;
  }
  Type & set__asy_noa_takeover_mesg(
    const uint8_t & _arg)
  {
    this->asy_noa_takeover_mesg = _arg;
    return *this;
  }
  Type & set__asy_fast_lane_swt_sts(
    const uint8_t & _arg)
  {
    this->asy_fast_lane_swt_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_auto_lane_chg_style(
    const uint8_t & _arg)
  {
    this->asy_cnoa_auto_lane_chg_style = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_actv_faild_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_actv_faild_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_cross_intsec_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_cross_intsec_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_finshd_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_finshd_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_ind_ti_gap_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_ind_ti_gap_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_actv_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_actv_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_off_odddistan(
    const uint32_t & _arg)
  {
    this->asy_cnoa_crs_off_odddistan = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_sts(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_game_fail_type(
    const uint8_t & _arg)
  {
    this->asy_cnoa_game_fail_type = _arg;
    return *this;
  }
  Type & set__asy_cnoa_game_reason(
    const uint8_t & _arg)
  {
    this->asy_cnoa_game_reason = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_sts_csd_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_sts_csd_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_swt_on_off(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_swt_on_off = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_swt_sts(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_swt_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_data_download_faild_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_data_download_faild_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_offs_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_offs_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_rmn_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_rmn_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_sod_lane_chg_swt(
    const uint8_t & _arg)
  {
    this->asy_cnoa_sod_lane_chg_swt = _arg;
    return *this;
  }
  Type & set__asy_cnoa_lrng_prmpt_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_lrng_prmpt_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_lrng_swt_on_off(
    const uint8_t & _arg)
  {
    this->asy_cnoa_lrng_swt_on_off = _arg;
    return *this;
  }
  Type & set__asy_cnoa_lrng_swt_sts(
    const uint8_t & _arg)
  {
    this->asy_cnoa_lrng_swt_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_takeover_warn_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_takeover_warn_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_turn_fail_type(
    const uint8_t & _arg)
  {
    this->asy_cnoa_turn_fail_type = _arg;
    return *this;
  }
  Type & set__asy_cnoa_turn_sts(
    const uint8_t & _arg)
  {
    this->asy_cnoa_turn_sts = _arg;
    return *this;
  }
  Type & set__asy_noa_tar_spd_offs(
    const uint8_t & _arg)
  {
    this->asy_noa_tar_spd_offs = _arg;
    return *this;
  }
  Type & set__asy_noa_avl_rmn(
    const uint8_t & _arg)
  {
    this->asy_noa_avl_rmn = _arg;
    return *this;
  }
  Type & set__asy_aut_lane_chg_swt_sts(
    const uint8_t & _arg)
  {
    this->asy_aut_lane_chg_swt_sts = _arg;
    return *this;
  }
  Type & set__stop_req_of_lgt_ctrl_for_prpsn(
    const uint8_t & _arg)
  {
    this->stop_req_of_lgt_ctrl_for_prpsn = _arg;
    return *this;
  }
  Type & set__ad_theme_disp(
    const uint8_t & _arg)
  {
    this->ad_theme_disp = _arg;
    return *this;
  }
  Type & set__cncl_warn_for_aut_drv(
    const uint8_t & _arg)
  {
    this->cncl_warn_for_aut_drv = _arg;
    return *this;
  }
  Type & set__disp_tsi_info_for_lgt_ctrl(
    const uint8_t & _arg)
  {
    this->disp_tsi_info_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__disp_spd_set_for_lgt_ctrl(
    const uint16_t & _arg)
  {
    this->disp_spd_set_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__hmi_nop_cofm_of_lan_chag(
    const uint8_t & _arg)
  {
    this->hmi_nop_cofm_of_lan_chag = _arg;
    return *this;
  }
  Type & set__ad4_lane_chg_for_e2e(
    const uint8_t & _arg)
  {
    this->ad4_lane_chg_for_e2e = _arg;
    return *this;
  }
  Type & set__hwa_leading_point_valid(
    const uint8_t & _arg)
  {
    this->hwa_leading_point_valid = _arg;
    return *this;
  }
  Type & set__hwa_leading_point_center_y(
    const float & _arg)
  {
    this->hwa_leading_point_center_y = _arg;
    return *this;
  }
  Type & set__hwa_leading_point_center_x(
    const float & _arg)
  {
    this->hwa_leading_point_center_x = _arg;
    return *this;
  }
  Type & set__ad4_turn_indic_req_req(
    const uint8_t & _arg)
  {
    this->ad4_turn_indic_req_req = _arg;
    return *this;
  }
  Type & set__ad4_unavl_sts_for_e2e(
    const uint8_t & _arg)
  {
    this->ad4_unavl_sts_for_e2e = _arg;
    return *this;
  }
  Type & set__ad4_warn_sts_for_e2e(
    const uint8_t & _arg)
  {
    this->ad4_warn_sts_for_e2e = _arg;
    return *this;
  }
  Type & set__ad4_win_open_req(
    const uint8_t & _arg)
  {
    this->ad4_win_open_req = _arg;
    return *this;
  }
  Type & set__ad_ctrl_mode_ad_ctrl_mode(
    const uint8_t & _arg)
  {
    this->ad_ctrl_mode_ad_ctrl_mode = _arg;
    return *this;
  }
  Type & set__ad4_drv_off_req_for_lgt_ctrl_drv_off_req(
    const uint8_t & _arg)
  {
    this->ad4_drv_off_req_for_lgt_ctrl_drv_off_req = _arg;
    return *this;
  }
  Type & set__asy_dece_remind(
    const uint8_t & _arg)
  {
    this->asy_dece_remind = _arg;
    return *this;
  }
  Type & set__asy_lat_offs_swt_sts(
    const uint8_t & _arg)
  {
    this->asy_lat_offs_swt_sts = _arg;
    return *this;
  }
  Type & set__asy_undertak_on_off_sts(
    const uint8_t & _arg)
  {
    this->asy_undertak_on_off_sts = _arg;
    return *this;
  }
  Type & set__asy_undertak_rmind(
    const uint8_t & _arg)
  {
    this->asy_undertak_rmind = _arg;
    return *this;
  }
  Type & set__asy_warn_mesg_for_aut_drv(
    const uint8_t & _arg)
  {
    this->asy_warn_mesg_for_aut_drv = _arg;
    return *this;
  }
  Type & set__lgt_fusn_trfc_sgn(
    const uint8_t & _arg)
  {
    this->lgt_fusn_trfc_sgn = _arg;
    return *this;
  }
  Type & set__drvg_ast_on_sys_sts(
    const uint8_t & _arg)
  {
    this->drvg_ast_on_sys_sts = _arg;
    return *this;
  }
  Type & set__asy_d2d_avl_rmn(
    const uint8_t & _arg)
  {
    this->asy_d2d_avl_rmn = _arg;
    return *this;
  }
  Type & set__asy_d2d_deactvd_reasn_mesg(
    const uint8_t & _arg)
  {
    this->asy_d2d_deactvd_reasn_mesg = _arg;
    return *this;
  }
  Type & set__asy_d2d_distan_msg(
    const uint8_t & _arg)
  {
    this->asy_d2d_distan_msg = _arg;
    return *this;
  }
  Type & set__asy_d2d_etc_distan_msg(
    const uint8_t & _arg)
  {
    this->asy_d2d_etc_distan_msg = _arg;
    return *this;
  }
  Type & set__asy_d2d_remind_msg(
    const uint8_t & _arg)
  {
    this->asy_d2d_remind_msg = _arg;
    return *this;
  }
  Type & set__asy_etc_traffic_sw_sts(
    const uint8_t & _arg)
  {
    this->asy_etc_traffic_sw_sts = _arg;
    return *this;
  }
  Type & set__asy_d2d_strt_to_end(
    const uint8_t & _arg)
  {
    this->asy_d2d_strt_to_end = _arg;
    return *this;
  }
  Type & set__asy_safe_stop_sts(
    const uint8_t & _arg)
  {
    this->asy_safe_stop_sts = _arg;
    return *this;
  }
  Type & set__asy_sod_lane_chg_switch(
    const uint8_t & _arg)
  {
    this->asy_sod_lane_chg_switch = _arg;
    return *this;
  }
  Type & set__avl_sts_for_long_aut_drv_sound(
    const uint8_t & _arg)
  {
    this->avl_sts_for_long_aut_drv_sound = _arg;
    return *this;
  }
  Type & set__asy_sod_pilot_cfirm(
    const uint8_t & _arg)
  {
    this->asy_sod_pilot_cfirm = _arg;
    return *this;
  }
  Type & set__cncl_warn_for_aut_drv_sound(
    const uint8_t & _arg)
  {
    this->cncl_warn_for_aut_drv_sound = _arg;
    return *this;
  }
  Type & set__cncl_warn_lgt_for_aut_drv_sound(
    const uint8_t & _arg)
  {
    this->cncl_warn_lgt_for_aut_drv_sound = _arg;
    return *this;
  }
  Type & set__hmi_auto_lane_chg_style(
    const uint8_t & _arg)
  {
    this->hmi_auto_lane_chg_style = _arg;
    return *this;
  }
  Type & set__hmi_lane_chg_info(
    const uint8_t & _arg)
  {
    this->hmi_lane_chg_info = _arg;
    return *this;
  }
  Type & set__ovrd_wrn_for_fst_actv(
    const uint8_t & _arg)
  {
    this->ovrd_wrn_for_fst_actv = _arg;
    return *this;
  }
  Type & set__ad4_frt_lamp_req(
    const uint8_t & _arg)
  {
    this->ad4_frt_lamp_req = _arg;
    return *this;
  }
  Type & set__ad4_rear_fog_lamp_req(
    const uint8_t & _arg)
  {
    this->ad4_rear_fog_lamp_req = _arg;
    return *this;
  }
  Type & set__ad4_res_req_for_e2e(
    const uint8_t & _arg)
  {
    this->ad4_res_req_for_e2e = _arg;
    return *this;
  }
  Type & set__ad4_trunk_ctrl_req(
    const uint8_t & _arg)
  {
    this->ad4_trunk_ctrl_req = _arg;
    return *this;
  }
  Type & set__acc_fusn_trfc_sgn(
    const uint8_t & _arg)
  {
    this->acc_fusn_trfc_sgn = _arg;
    return *this;
  }
  Type & set__asy_sfty_fct_sts_to_edraccfct_sts(
    const uint8_t & _arg)
  {
    this->asy_sfty_fct_sts_to_edraccfct_sts = _arg;
    return *this;
  }
  Type & set__asy_sfty_fct_sts_to_edracsfb1_fct_sts(
    const uint8_t & _arg)
  {
    this->asy_sfty_fct_sts_to_edracsfb1_fct_sts = _arg;
    return *this;
  }
  Type & set__asy_sfty_fct_sts_to_edracsfb2_fct_sts(
    const uint8_t & _arg)
  {
    this->asy_sfty_fct_sts_to_edracsfb2_fct_sts = _arg;
    return *this;
  }
  Type & set__asy_sfty_fct_sts_to_edracsfc_fct_sts(
    const uint8_t & _arg)
  {
    this->asy_sfty_fct_sts_to_edracsfc_fct_sts = _arg;
    return *this;
  }
  Type & set__asy_sfty_fct_sts_to_edracsfd_fct_sts(
    const uint8_t & _arg)
  {
    this->asy_sfty_fct_sts_to_edracsfd_fct_sts = _arg;
    return *this;
  }
  Type & set__asy_sfty_fct_sts_to_edracsfe_fct_sts(
    const uint8_t & _arg)
  {
    this->asy_sfty_fct_sts_to_edracsfe_fct_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_csd_indcr(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_csd_indcr = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_hud_indcr(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_hud_indcr = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = _arg;
    return *this;
  }
  Type & set__asy_emgy_manoeuvre_aid_sts(
    const uint8_t & _arg)
  {
    this->asy_emgy_manoeuvre_aid_sts = _arg;
    return *this;
  }
  Type & set__asy_fctn_ihbt_by_trlr(
    const uint8_t & _arg)
  {
    this->asy_fctn_ihbt_by_trlr = _arg;
    return *this;
  }
  Type & set__asy_icc_max_warn_msg(
    const uint8_t & _arg)
  {
    this->asy_icc_max_warn_msg = _arg;
    return *this;
  }
  Type & set__asy_sfty_hwl_req(
    const uint8_t & _arg)
  {
    this->asy_sfty_hwl_req = _arg;
    return *this;
  }
  Type & set__aut_lane_chg_sts(
    const uint8_t & _arg)
  {
    this->aut_lane_chg_sts = _arg;
    return *this;
  }
  Type & set__cllsn_aid_post_ema(
    const uint8_t & _arg)
  {
    this->cllsn_aid_post_ema = _arg;
    return *this;
  }
  Type & set__lane_chg_aut_actv_sts(
    const uint8_t & _arg)
  {
    this->lane_chg_aut_actv_sts = _arg;
    return *this;
  }
  Type & set__cam_sts_cam_cam_frnt_cal_not_cmpl(
    const uint8_t & _arg)
  {
    this->cam_sts_cam_cam_frnt_cal_not_cmpl = _arg;
    return *this;
  }
  Type & set__asy_cnoa_lane_chg_assist_sts(
    const uint8_t & _arg)
  {
    this->asy_cnoa_lane_chg_assist_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_lane_chg_fail_type(
    const uint8_t & _arg)
  {
    this->asy_cnoa_lane_chg_fail_type = _arg;
    return *this;
  }
  Type & set__aut_cnoa_lane_chg_sts(
    const uint8_t & _arg)
  {
    this->aut_cnoa_lane_chg_sts = _arg;
    return *this;
  }
  Type & set__asy_cnoa_req_lane_chg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_req_lane_chg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__MachFunctionControl
    std::shared_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__MachFunctionControl
    std::shared_ptr<deva_function_msgs::msg::MachFunctionControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachFunctionControl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->asy_aut_drvg_avl != other.asy_aut_drvg_avl) {
      return false;
    }
    if (this->asy_lat_offst_sts != other.asy_lat_offst_sts) {
      return false;
    }
    if (this->asy_noa_degrade_msg != other.asy_noa_degrade_msg) {
      return false;
    }
    if (this->lane_chg_aut_info_for_asy_hi_way != other.lane_chg_aut_info_for_asy_hi_way) {
      return false;
    }
    if (this->lane_chg_aut_sts_for_asy_hi_way != other.lane_chg_aut_sts_for_asy_hi_way) {
      return false;
    }
    if (this->ti_gap_set_for_lgt_ctrl != other.ti_gap_set_for_lgt_ctrl) {
      return false;
    }
    if (this->asy_lgt_ctrl_take_over_req != other.asy_lgt_ctrl_take_over_req) {
      return false;
    }
    if (this->steer_tq_addl_for_ema_steer_tq_addl_for_ema != other.steer_tq_addl_for_ema_steer_tq_addl_for_ema) {
      return false;
    }
    if (this->strt_req_of_lgt_ctrl_for_prpsn != other.strt_req_of_lgt_ctrl_for_prpsn) {
      return false;
    }
    if (this->asy_noa_deactvd_reasn_mesg != other.asy_noa_deactvd_reasn_mesg) {
      return false;
    }
    if (this->asy_noa_remind_mesg != other.asy_noa_remind_mesg) {
      return false;
    }
    if (this->asy_high_beam_flash_warn_rqrd != other.asy_high_beam_flash_warn_rqrd) {
      return false;
    }
    if (this->asy_noa_takeover_mesg != other.asy_noa_takeover_mesg) {
      return false;
    }
    if (this->asy_fast_lane_swt_sts != other.asy_fast_lane_swt_sts) {
      return false;
    }
    if (this->asy_cnoa_auto_lane_chg_style != other.asy_cnoa_auto_lane_chg_style) {
      return false;
    }
    if (this->asy_cnoa_crs_actv_faild_msg != other.asy_cnoa_crs_actv_faild_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_cross_intsec_msg != other.asy_cnoa_crs_cross_intsec_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg != other.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_finshd_msg != other.asy_cnoa_crs_finshd_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_ind_ti_gap_msg != other.asy_cnoa_crs_ind_ti_gap_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg != other.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_actv_msg != other.asy_cnoa_crs_actv_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_off_odddistan != other.asy_cnoa_crs_off_odddistan) {
      return false;
    }
    if (this->asy_cnoa_crs_sts != other.asy_cnoa_crs_sts) {
      return false;
    }
    if (this->asy_cnoa_game_fail_type != other.asy_cnoa_game_fail_type) {
      return false;
    }
    if (this->asy_cnoa_game_reason != other.asy_cnoa_game_reason) {
      return false;
    }
    if (this->asy_cnoa_crs_sts_csd_msg != other.asy_cnoa_crs_sts_csd_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_swt_on_off != other.asy_cnoa_crs_swt_on_off) {
      return false;
    }
    if (this->asy_cnoa_crs_swt_sts != other.asy_cnoa_crs_swt_sts) {
      return false;
    }
    if (this->asy_cnoa_data_download_faild_msg != other.asy_cnoa_data_download_faild_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_offs_msg != other.asy_cnoa_crs_offs_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_rmn_msg != other.asy_cnoa_crs_rmn_msg) {
      return false;
    }
    if (this->asy_cnoa_sod_lane_chg_swt != other.asy_cnoa_sod_lane_chg_swt) {
      return false;
    }
    if (this->asy_cnoa_lrng_prmpt_msg != other.asy_cnoa_lrng_prmpt_msg) {
      return false;
    }
    if (this->asy_cnoa_lrng_swt_on_off != other.asy_cnoa_lrng_swt_on_off) {
      return false;
    }
    if (this->asy_cnoa_lrng_swt_sts != other.asy_cnoa_lrng_swt_sts) {
      return false;
    }
    if (this->asy_cnoa_takeover_warn_msg != other.asy_cnoa_takeover_warn_msg) {
      return false;
    }
    if (this->asy_cnoa_turn_fail_type != other.asy_cnoa_turn_fail_type) {
      return false;
    }
    if (this->asy_cnoa_turn_sts != other.asy_cnoa_turn_sts) {
      return false;
    }
    if (this->asy_noa_tar_spd_offs != other.asy_noa_tar_spd_offs) {
      return false;
    }
    if (this->asy_noa_avl_rmn != other.asy_noa_avl_rmn) {
      return false;
    }
    if (this->asy_aut_lane_chg_swt_sts != other.asy_aut_lane_chg_swt_sts) {
      return false;
    }
    if (this->stop_req_of_lgt_ctrl_for_prpsn != other.stop_req_of_lgt_ctrl_for_prpsn) {
      return false;
    }
    if (this->ad_theme_disp != other.ad_theme_disp) {
      return false;
    }
    if (this->cncl_warn_for_aut_drv != other.cncl_warn_for_aut_drv) {
      return false;
    }
    if (this->disp_tsi_info_for_lgt_ctrl != other.disp_tsi_info_for_lgt_ctrl) {
      return false;
    }
    if (this->disp_spd_set_for_lgt_ctrl != other.disp_spd_set_for_lgt_ctrl) {
      return false;
    }
    if (this->hmi_nop_cofm_of_lan_chag != other.hmi_nop_cofm_of_lan_chag) {
      return false;
    }
    if (this->ad4_lane_chg_for_e2e != other.ad4_lane_chg_for_e2e) {
      return false;
    }
    if (this->hwa_leading_point_valid != other.hwa_leading_point_valid) {
      return false;
    }
    if (this->hwa_leading_point_center_y != other.hwa_leading_point_center_y) {
      return false;
    }
    if (this->hwa_leading_point_center_x != other.hwa_leading_point_center_x) {
      return false;
    }
    if (this->ad4_turn_indic_req_req != other.ad4_turn_indic_req_req) {
      return false;
    }
    if (this->ad4_unavl_sts_for_e2e != other.ad4_unavl_sts_for_e2e) {
      return false;
    }
    if (this->ad4_warn_sts_for_e2e != other.ad4_warn_sts_for_e2e) {
      return false;
    }
    if (this->ad4_win_open_req != other.ad4_win_open_req) {
      return false;
    }
    if (this->ad_ctrl_mode_ad_ctrl_mode != other.ad_ctrl_mode_ad_ctrl_mode) {
      return false;
    }
    if (this->ad4_drv_off_req_for_lgt_ctrl_drv_off_req != other.ad4_drv_off_req_for_lgt_ctrl_drv_off_req) {
      return false;
    }
    if (this->asy_dece_remind != other.asy_dece_remind) {
      return false;
    }
    if (this->asy_lat_offs_swt_sts != other.asy_lat_offs_swt_sts) {
      return false;
    }
    if (this->asy_undertak_on_off_sts != other.asy_undertak_on_off_sts) {
      return false;
    }
    if (this->asy_undertak_rmind != other.asy_undertak_rmind) {
      return false;
    }
    if (this->asy_warn_mesg_for_aut_drv != other.asy_warn_mesg_for_aut_drv) {
      return false;
    }
    if (this->lgt_fusn_trfc_sgn != other.lgt_fusn_trfc_sgn) {
      return false;
    }
    if (this->drvg_ast_on_sys_sts != other.drvg_ast_on_sys_sts) {
      return false;
    }
    if (this->asy_d2d_avl_rmn != other.asy_d2d_avl_rmn) {
      return false;
    }
    if (this->asy_d2d_deactvd_reasn_mesg != other.asy_d2d_deactvd_reasn_mesg) {
      return false;
    }
    if (this->asy_d2d_distan_msg != other.asy_d2d_distan_msg) {
      return false;
    }
    if (this->asy_d2d_etc_distan_msg != other.asy_d2d_etc_distan_msg) {
      return false;
    }
    if (this->asy_d2d_remind_msg != other.asy_d2d_remind_msg) {
      return false;
    }
    if (this->asy_etc_traffic_sw_sts != other.asy_etc_traffic_sw_sts) {
      return false;
    }
    if (this->asy_d2d_strt_to_end != other.asy_d2d_strt_to_end) {
      return false;
    }
    if (this->asy_safe_stop_sts != other.asy_safe_stop_sts) {
      return false;
    }
    if (this->asy_sod_lane_chg_switch != other.asy_sod_lane_chg_switch) {
      return false;
    }
    if (this->avl_sts_for_long_aut_drv_sound != other.avl_sts_for_long_aut_drv_sound) {
      return false;
    }
    if (this->asy_sod_pilot_cfirm != other.asy_sod_pilot_cfirm) {
      return false;
    }
    if (this->cncl_warn_for_aut_drv_sound != other.cncl_warn_for_aut_drv_sound) {
      return false;
    }
    if (this->cncl_warn_lgt_for_aut_drv_sound != other.cncl_warn_lgt_for_aut_drv_sound) {
      return false;
    }
    if (this->hmi_auto_lane_chg_style != other.hmi_auto_lane_chg_style) {
      return false;
    }
    if (this->hmi_lane_chg_info != other.hmi_lane_chg_info) {
      return false;
    }
    if (this->ovrd_wrn_for_fst_actv != other.ovrd_wrn_for_fst_actv) {
      return false;
    }
    if (this->ad4_frt_lamp_req != other.ad4_frt_lamp_req) {
      return false;
    }
    if (this->ad4_rear_fog_lamp_req != other.ad4_rear_fog_lamp_req) {
      return false;
    }
    if (this->ad4_res_req_for_e2e != other.ad4_res_req_for_e2e) {
      return false;
    }
    if (this->ad4_trunk_ctrl_req != other.ad4_trunk_ctrl_req) {
      return false;
    }
    if (this->acc_fusn_trfc_sgn != other.acc_fusn_trfc_sgn) {
      return false;
    }
    if (this->asy_sfty_fct_sts_to_edraccfct_sts != other.asy_sfty_fct_sts_to_edraccfct_sts) {
      return false;
    }
    if (this->asy_sfty_fct_sts_to_edracsfb1_fct_sts != other.asy_sfty_fct_sts_to_edracsfb1_fct_sts) {
      return false;
    }
    if (this->asy_sfty_fct_sts_to_edracsfb2_fct_sts != other.asy_sfty_fct_sts_to_edracsfb2_fct_sts) {
      return false;
    }
    if (this->asy_sfty_fct_sts_to_edracsfc_fct_sts != other.asy_sfty_fct_sts_to_edracsfc_fct_sts) {
      return false;
    }
    if (this->asy_sfty_fct_sts_to_edracsfd_fct_sts != other.asy_sfty_fct_sts_to_edracsfd_fct_sts) {
      return false;
    }
    if (this->asy_sfty_fct_sts_to_edracsfe_fct_sts != other.asy_sfty_fct_sts_to_edracsfe_fct_sts) {
      return false;
    }
    if (this->asy_cnoa_crs_csd_indcr != other.asy_cnoa_crs_csd_indcr) {
      return false;
    }
    if (this->asy_cnoa_crs_hud_indcr != other.asy_cnoa_crs_hud_indcr) {
      return false;
    }
    if (this->asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr != other.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr) {
      return false;
    }
    if (this->asy_emgy_manoeuvre_aid_sts != other.asy_emgy_manoeuvre_aid_sts) {
      return false;
    }
    if (this->asy_fctn_ihbt_by_trlr != other.asy_fctn_ihbt_by_trlr) {
      return false;
    }
    if (this->asy_icc_max_warn_msg != other.asy_icc_max_warn_msg) {
      return false;
    }
    if (this->asy_sfty_hwl_req != other.asy_sfty_hwl_req) {
      return false;
    }
    if (this->aut_lane_chg_sts != other.aut_lane_chg_sts) {
      return false;
    }
    if (this->cllsn_aid_post_ema != other.cllsn_aid_post_ema) {
      return false;
    }
    if (this->lane_chg_aut_actv_sts != other.lane_chg_aut_actv_sts) {
      return false;
    }
    if (this->cam_sts_cam_cam_frnt_cal_not_cmpl != other.cam_sts_cam_cam_frnt_cal_not_cmpl) {
      return false;
    }
    if (this->asy_cnoa_lane_chg_assist_sts != other.asy_cnoa_lane_chg_assist_sts) {
      return false;
    }
    if (this->asy_cnoa_lane_chg_fail_type != other.asy_cnoa_lane_chg_fail_type) {
      return false;
    }
    if (this->aut_cnoa_lane_chg_sts != other.aut_cnoa_lane_chg_sts) {
      return false;
    }
    if (this->asy_cnoa_req_lane_chg != other.asy_cnoa_req_lane_chg) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachFunctionControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachFunctionControl_

// alias to use template instance with default allocator
using MachFunctionControl =
  deva_function_msgs::msg::MachFunctionControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__STRUCT_HPP_
