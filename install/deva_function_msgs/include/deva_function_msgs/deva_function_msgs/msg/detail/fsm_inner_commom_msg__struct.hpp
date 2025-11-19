// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__FsmInnerCommomMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FsmInnerCommomMsg __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FsmInnerCommomMsg_
{
  using Type = FsmInnerCommomMsg_<ContainerAllocator>;

  explicit FsmInnerCommomMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_cnoa_crs_lan_chg_msg = 0ul;
      this->set_spd_for_crs_ctrl_fct_active = 0.0f;
      this->asy_lane_chg_assist_sts = 0ul;
      this->indcr_sts = 0ul;
      this->asy_noa_takeover_sod = 0ul;
      this->hmi_drvr_sod_req_pilot = 0;
      this->drvr_crs_ctrl_fct_actv_req = 0;
      this->asy_algt_indcr = 0;
      this->ti_gap_set_for_lgt_ctrl = 0;
      this->drv_mod_req = 0;
      this->drv_off_warn = 0;
      this->asy_alat_indcr = 0;
      this->asy_lgt_ctrl_take_over_req = 0;
      this->ovrd_wrn_for_fst_actv = 0;
      this->asy_inform_for_drvr = 0;
      this->cncl_warn_lgt_for_aut_drv = 0;
      this->avl_sts_for_long_aut_drv = 0;
      this->asy_steer_apply_rqrd = 0;
      this->asy_lan_chg_mesg = 0;
      this->asy_safe_stop_sts = 0ul;
      this->asy_eyes_off_warn_rqrd = 0;
      this->asy_noa_remind_mesg = 0;
      this->asy_noa_takeover_mesg = 0;
      this->asy_aut_drvg_avl = 0;
      this->asy_noa_actv_suggest = 0;
      this->cncl_warn_for_aut_drv = 0;
      this->asy_lat_deg_sts = 0;
      this->asy_icc_max_warn_msg = 0;
      this->asy_cnoa_takeover_warn_msg = 0;
      this->asy_cnoa_crs_cross_intsec_msg = 0;
      this->asy_d2d_avl_rmn = 0;
      this->asy_d2d_distan_msg = 0;
      this->asy_d2d_strt_to_end = 0;
      this->asy_d2d_deactvd_reasn_mesg = 0;
      this->asy_aut_emgy_steer_actv = 0;
      this->asy_d2d_etc_distan_msg = 0;
      this->asy_d2d_remind_msg = 0;
      this->disp_tsi_info_for_lgt_ctrl = 0;
      this->disp_spd_set_for_lgt_ctrl = 0.0f;
      this->ad_dim_light = 0;
      this->asy_d2d_crs_dim_indcr = 0;
      this->asy_aut_drv_ctrl_typ_dim_req = 0;
      this->ihu_set_disp_ad = 0;
      this->aut_lane_chg_sts = 0;
      this->ad_ctrl_mode = 0;
      this->hmi_drvr_sod_req_chg = 0;
      this->cam_status0 = 0;
      this->frnt_side_cam_le_sts0 = 0;
      this->frnt_side_cam_ri_sts0 = 0;
      this->re_side_cam_le_sts0 = 0;
      this->re_side_cam_ri_sts0 = 0;
      this->hmi_re_cam_sts0 = 0;
      this->asy_algt_sts = 0;
      this->hmi_auto_lane_chg_style = 0;
      this->trfc_jam_warn = 0;
    }
  }

  explicit FsmInnerCommomMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->asy_cnoa_crs_lan_chg_msg = 0ul;
      this->set_spd_for_crs_ctrl_fct_active = 0.0f;
      this->asy_lane_chg_assist_sts = 0ul;
      this->indcr_sts = 0ul;
      this->asy_noa_takeover_sod = 0ul;
      this->hmi_drvr_sod_req_pilot = 0;
      this->drvr_crs_ctrl_fct_actv_req = 0;
      this->asy_algt_indcr = 0;
      this->ti_gap_set_for_lgt_ctrl = 0;
      this->drv_mod_req = 0;
      this->drv_off_warn = 0;
      this->asy_alat_indcr = 0;
      this->asy_lgt_ctrl_take_over_req = 0;
      this->ovrd_wrn_for_fst_actv = 0;
      this->asy_inform_for_drvr = 0;
      this->cncl_warn_lgt_for_aut_drv = 0;
      this->avl_sts_for_long_aut_drv = 0;
      this->asy_steer_apply_rqrd = 0;
      this->asy_lan_chg_mesg = 0;
      this->asy_safe_stop_sts = 0ul;
      this->asy_eyes_off_warn_rqrd = 0;
      this->asy_noa_remind_mesg = 0;
      this->asy_noa_takeover_mesg = 0;
      this->asy_aut_drvg_avl = 0;
      this->asy_noa_actv_suggest = 0;
      this->cncl_warn_for_aut_drv = 0;
      this->asy_lat_deg_sts = 0;
      this->asy_icc_max_warn_msg = 0;
      this->asy_cnoa_takeover_warn_msg = 0;
      this->asy_cnoa_crs_cross_intsec_msg = 0;
      this->asy_d2d_avl_rmn = 0;
      this->asy_d2d_distan_msg = 0;
      this->asy_d2d_strt_to_end = 0;
      this->asy_d2d_deactvd_reasn_mesg = 0;
      this->asy_aut_emgy_steer_actv = 0;
      this->asy_d2d_etc_distan_msg = 0;
      this->asy_d2d_remind_msg = 0;
      this->disp_tsi_info_for_lgt_ctrl = 0;
      this->disp_spd_set_for_lgt_ctrl = 0.0f;
      this->ad_dim_light = 0;
      this->asy_d2d_crs_dim_indcr = 0;
      this->asy_aut_drv_ctrl_typ_dim_req = 0;
      this->ihu_set_disp_ad = 0;
      this->aut_lane_chg_sts = 0;
      this->ad_ctrl_mode = 0;
      this->hmi_drvr_sod_req_chg = 0;
      this->cam_status0 = 0;
      this->frnt_side_cam_le_sts0 = 0;
      this->frnt_side_cam_ri_sts0 = 0;
      this->re_side_cam_le_sts0 = 0;
      this->re_side_cam_ri_sts0 = 0;
      this->hmi_re_cam_sts0 = 0;
      this->asy_algt_sts = 0;
      this->hmi_auto_lane_chg_style = 0;
      this->trfc_jam_warn = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _asy_cnoa_crs_lan_chg_msg_type =
    uint32_t;
  _asy_cnoa_crs_lan_chg_msg_type asy_cnoa_crs_lan_chg_msg;
  using _set_spd_for_crs_ctrl_fct_active_type =
    float;
  _set_spd_for_crs_ctrl_fct_active_type set_spd_for_crs_ctrl_fct_active;
  using _asy_lane_chg_assist_sts_type =
    uint32_t;
  _asy_lane_chg_assist_sts_type asy_lane_chg_assist_sts;
  using _indcr_sts_type =
    uint32_t;
  _indcr_sts_type indcr_sts;
  using _asy_noa_takeover_sod_type =
    uint32_t;
  _asy_noa_takeover_sod_type asy_noa_takeover_sod;
  using _hmi_drvr_sod_req_pilot_type =
    uint8_t;
  _hmi_drvr_sod_req_pilot_type hmi_drvr_sod_req_pilot;
  using _drvr_crs_ctrl_fct_actv_req_type =
    uint8_t;
  _drvr_crs_ctrl_fct_actv_req_type drvr_crs_ctrl_fct_actv_req;
  using _asy_algt_indcr_type =
    uint8_t;
  _asy_algt_indcr_type asy_algt_indcr;
  using _ti_gap_set_for_lgt_ctrl_type =
    uint8_t;
  _ti_gap_set_for_lgt_ctrl_type ti_gap_set_for_lgt_ctrl;
  using _drv_mod_req_type =
    uint8_t;
  _drv_mod_req_type drv_mod_req;
  using _drv_off_warn_type =
    uint8_t;
  _drv_off_warn_type drv_off_warn;
  using _asy_alat_indcr_type =
    uint8_t;
  _asy_alat_indcr_type asy_alat_indcr;
  using _asy_lgt_ctrl_take_over_req_type =
    uint8_t;
  _asy_lgt_ctrl_take_over_req_type asy_lgt_ctrl_take_over_req;
  using _ovrd_wrn_for_fst_actv_type =
    uint8_t;
  _ovrd_wrn_for_fst_actv_type ovrd_wrn_for_fst_actv;
  using _asy_inform_for_drvr_type =
    uint8_t;
  _asy_inform_for_drvr_type asy_inform_for_drvr;
  using _cncl_warn_lgt_for_aut_drv_type =
    uint8_t;
  _cncl_warn_lgt_for_aut_drv_type cncl_warn_lgt_for_aut_drv;
  using _avl_sts_for_long_aut_drv_type =
    uint8_t;
  _avl_sts_for_long_aut_drv_type avl_sts_for_long_aut_drv;
  using _asy_steer_apply_rqrd_type =
    uint8_t;
  _asy_steer_apply_rqrd_type asy_steer_apply_rqrd;
  using _asy_lan_chg_mesg_type =
    uint8_t;
  _asy_lan_chg_mesg_type asy_lan_chg_mesg;
  using _asy_safe_stop_sts_type =
    uint32_t;
  _asy_safe_stop_sts_type asy_safe_stop_sts;
  using _asy_eyes_off_warn_rqrd_type =
    uint8_t;
  _asy_eyes_off_warn_rqrd_type asy_eyes_off_warn_rqrd;
  using _asy_noa_remind_mesg_type =
    uint8_t;
  _asy_noa_remind_mesg_type asy_noa_remind_mesg;
  using _asy_noa_takeover_mesg_type =
    uint8_t;
  _asy_noa_takeover_mesg_type asy_noa_takeover_mesg;
  using _asy_aut_drvg_avl_type =
    uint8_t;
  _asy_aut_drvg_avl_type asy_aut_drvg_avl;
  using _asy_noa_actv_suggest_type =
    uint8_t;
  _asy_noa_actv_suggest_type asy_noa_actv_suggest;
  using _cncl_warn_for_aut_drv_type =
    uint8_t;
  _cncl_warn_for_aut_drv_type cncl_warn_for_aut_drv;
  using _asy_lat_deg_sts_type =
    uint8_t;
  _asy_lat_deg_sts_type asy_lat_deg_sts;
  using _asy_icc_max_warn_msg_type =
    uint8_t;
  _asy_icc_max_warn_msg_type asy_icc_max_warn_msg;
  using _asy_cnoa_takeover_warn_msg_type =
    uint8_t;
  _asy_cnoa_takeover_warn_msg_type asy_cnoa_takeover_warn_msg;
  using _asy_cnoa_crs_cross_intsec_msg_type =
    uint8_t;
  _asy_cnoa_crs_cross_intsec_msg_type asy_cnoa_crs_cross_intsec_msg;
  using _asy_d2d_avl_rmn_type =
    uint8_t;
  _asy_d2d_avl_rmn_type asy_d2d_avl_rmn;
  using _asy_d2d_distan_msg_type =
    uint8_t;
  _asy_d2d_distan_msg_type asy_d2d_distan_msg;
  using _asy_d2d_strt_to_end_type =
    uint8_t;
  _asy_d2d_strt_to_end_type asy_d2d_strt_to_end;
  using _asy_d2d_deactvd_reasn_mesg_type =
    uint8_t;
  _asy_d2d_deactvd_reasn_mesg_type asy_d2d_deactvd_reasn_mesg;
  using _asy_aut_emgy_steer_actv_type =
    uint8_t;
  _asy_aut_emgy_steer_actv_type asy_aut_emgy_steer_actv;
  using _asy_d2d_etc_distan_msg_type =
    uint8_t;
  _asy_d2d_etc_distan_msg_type asy_d2d_etc_distan_msg;
  using _asy_d2d_remind_msg_type =
    uint8_t;
  _asy_d2d_remind_msg_type asy_d2d_remind_msg;
  using _disp_tsi_info_for_lgt_ctrl_type =
    uint8_t;
  _disp_tsi_info_for_lgt_ctrl_type disp_tsi_info_for_lgt_ctrl;
  using _disp_spd_set_for_lgt_ctrl_type =
    float;
  _disp_spd_set_for_lgt_ctrl_type disp_spd_set_for_lgt_ctrl;
  using _ad_dim_light_type =
    uint8_t;
  _ad_dim_light_type ad_dim_light;
  using _asy_d2d_crs_dim_indcr_type =
    uint8_t;
  _asy_d2d_crs_dim_indcr_type asy_d2d_crs_dim_indcr;
  using _asy_aut_drv_ctrl_typ_dim_req_type =
    uint8_t;
  _asy_aut_drv_ctrl_typ_dim_req_type asy_aut_drv_ctrl_typ_dim_req;
  using _ihu_set_disp_ad_type =
    uint8_t;
  _ihu_set_disp_ad_type ihu_set_disp_ad;
  using _aut_lane_chg_sts_type =
    uint8_t;
  _aut_lane_chg_sts_type aut_lane_chg_sts;
  using _ad_ctrl_mode_type =
    uint8_t;
  _ad_ctrl_mode_type ad_ctrl_mode;
  using _hmi_drvr_sod_req_chg_type =
    uint8_t;
  _hmi_drvr_sod_req_chg_type hmi_drvr_sod_req_chg;
  using _cam_status0_type =
    uint8_t;
  _cam_status0_type cam_status0;
  using _frnt_side_cam_le_sts0_type =
    uint8_t;
  _frnt_side_cam_le_sts0_type frnt_side_cam_le_sts0;
  using _frnt_side_cam_ri_sts0_type =
    uint8_t;
  _frnt_side_cam_ri_sts0_type frnt_side_cam_ri_sts0;
  using _re_side_cam_le_sts0_type =
    uint8_t;
  _re_side_cam_le_sts0_type re_side_cam_le_sts0;
  using _re_side_cam_ri_sts0_type =
    uint8_t;
  _re_side_cam_ri_sts0_type re_side_cam_ri_sts0;
  using _hmi_re_cam_sts0_type =
    uint8_t;
  _hmi_re_cam_sts0_type hmi_re_cam_sts0;
  using _asy_algt_sts_type =
    uint8_t;
  _asy_algt_sts_type asy_algt_sts;
  using _hmi_auto_lane_chg_style_type =
    uint8_t;
  _hmi_auto_lane_chg_style_type hmi_auto_lane_chg_style;
  using _trfc_jam_warn_type =
    uint8_t;
  _trfc_jam_warn_type trfc_jam_warn;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_lan_chg_msg(
    const uint32_t & _arg)
  {
    this->asy_cnoa_crs_lan_chg_msg = _arg;
    return *this;
  }
  Type & set__set_spd_for_crs_ctrl_fct_active(
    const float & _arg)
  {
    this->set_spd_for_crs_ctrl_fct_active = _arg;
    return *this;
  }
  Type & set__asy_lane_chg_assist_sts(
    const uint32_t & _arg)
  {
    this->asy_lane_chg_assist_sts = _arg;
    return *this;
  }
  Type & set__indcr_sts(
    const uint32_t & _arg)
  {
    this->indcr_sts = _arg;
    return *this;
  }
  Type & set__asy_noa_takeover_sod(
    const uint32_t & _arg)
  {
    this->asy_noa_takeover_sod = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_pilot(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_pilot = _arg;
    return *this;
  }
  Type & set__drvr_crs_ctrl_fct_actv_req(
    const uint8_t & _arg)
  {
    this->drvr_crs_ctrl_fct_actv_req = _arg;
    return *this;
  }
  Type & set__asy_algt_indcr(
    const uint8_t & _arg)
  {
    this->asy_algt_indcr = _arg;
    return *this;
  }
  Type & set__ti_gap_set_for_lgt_ctrl(
    const uint8_t & _arg)
  {
    this->ti_gap_set_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__drv_mod_req(
    const uint8_t & _arg)
  {
    this->drv_mod_req = _arg;
    return *this;
  }
  Type & set__drv_off_warn(
    const uint8_t & _arg)
  {
    this->drv_off_warn = _arg;
    return *this;
  }
  Type & set__asy_alat_indcr(
    const uint8_t & _arg)
  {
    this->asy_alat_indcr = _arg;
    return *this;
  }
  Type & set__asy_lgt_ctrl_take_over_req(
    const uint8_t & _arg)
  {
    this->asy_lgt_ctrl_take_over_req = _arg;
    return *this;
  }
  Type & set__ovrd_wrn_for_fst_actv(
    const uint8_t & _arg)
  {
    this->ovrd_wrn_for_fst_actv = _arg;
    return *this;
  }
  Type & set__asy_inform_for_drvr(
    const uint8_t & _arg)
  {
    this->asy_inform_for_drvr = _arg;
    return *this;
  }
  Type & set__cncl_warn_lgt_for_aut_drv(
    const uint8_t & _arg)
  {
    this->cncl_warn_lgt_for_aut_drv = _arg;
    return *this;
  }
  Type & set__avl_sts_for_long_aut_drv(
    const uint8_t & _arg)
  {
    this->avl_sts_for_long_aut_drv = _arg;
    return *this;
  }
  Type & set__asy_steer_apply_rqrd(
    const uint8_t & _arg)
  {
    this->asy_steer_apply_rqrd = _arg;
    return *this;
  }
  Type & set__asy_lan_chg_mesg(
    const uint8_t & _arg)
  {
    this->asy_lan_chg_mesg = _arg;
    return *this;
  }
  Type & set__asy_safe_stop_sts(
    const uint32_t & _arg)
  {
    this->asy_safe_stop_sts = _arg;
    return *this;
  }
  Type & set__asy_eyes_off_warn_rqrd(
    const uint8_t & _arg)
  {
    this->asy_eyes_off_warn_rqrd = _arg;
    return *this;
  }
  Type & set__asy_noa_remind_mesg(
    const uint8_t & _arg)
  {
    this->asy_noa_remind_mesg = _arg;
    return *this;
  }
  Type & set__asy_noa_takeover_mesg(
    const uint8_t & _arg)
  {
    this->asy_noa_takeover_mesg = _arg;
    return *this;
  }
  Type & set__asy_aut_drvg_avl(
    const uint8_t & _arg)
  {
    this->asy_aut_drvg_avl = _arg;
    return *this;
  }
  Type & set__asy_noa_actv_suggest(
    const uint8_t & _arg)
  {
    this->asy_noa_actv_suggest = _arg;
    return *this;
  }
  Type & set__cncl_warn_for_aut_drv(
    const uint8_t & _arg)
  {
    this->cncl_warn_for_aut_drv = _arg;
    return *this;
  }
  Type & set__asy_lat_deg_sts(
    const uint8_t & _arg)
  {
    this->asy_lat_deg_sts = _arg;
    return *this;
  }
  Type & set__asy_icc_max_warn_msg(
    const uint8_t & _arg)
  {
    this->asy_icc_max_warn_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_takeover_warn_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_takeover_warn_msg = _arg;
    return *this;
  }
  Type & set__asy_cnoa_crs_cross_intsec_msg(
    const uint8_t & _arg)
  {
    this->asy_cnoa_crs_cross_intsec_msg = _arg;
    return *this;
  }
  Type & set__asy_d2d_avl_rmn(
    const uint8_t & _arg)
  {
    this->asy_d2d_avl_rmn = _arg;
    return *this;
  }
  Type & set__asy_d2d_distan_msg(
    const uint8_t & _arg)
  {
    this->asy_d2d_distan_msg = _arg;
    return *this;
  }
  Type & set__asy_d2d_strt_to_end(
    const uint8_t & _arg)
  {
    this->asy_d2d_strt_to_end = _arg;
    return *this;
  }
  Type & set__asy_d2d_deactvd_reasn_mesg(
    const uint8_t & _arg)
  {
    this->asy_d2d_deactvd_reasn_mesg = _arg;
    return *this;
  }
  Type & set__asy_aut_emgy_steer_actv(
    const uint8_t & _arg)
  {
    this->asy_aut_emgy_steer_actv = _arg;
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
  Type & set__disp_tsi_info_for_lgt_ctrl(
    const uint8_t & _arg)
  {
    this->disp_tsi_info_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__disp_spd_set_for_lgt_ctrl(
    const float & _arg)
  {
    this->disp_spd_set_for_lgt_ctrl = _arg;
    return *this;
  }
  Type & set__ad_dim_light(
    const uint8_t & _arg)
  {
    this->ad_dim_light = _arg;
    return *this;
  }
  Type & set__asy_d2d_crs_dim_indcr(
    const uint8_t & _arg)
  {
    this->asy_d2d_crs_dim_indcr = _arg;
    return *this;
  }
  Type & set__asy_aut_drv_ctrl_typ_dim_req(
    const uint8_t & _arg)
  {
    this->asy_aut_drv_ctrl_typ_dim_req = _arg;
    return *this;
  }
  Type & set__ihu_set_disp_ad(
    const uint8_t & _arg)
  {
    this->ihu_set_disp_ad = _arg;
    return *this;
  }
  Type & set__aut_lane_chg_sts(
    const uint8_t & _arg)
  {
    this->aut_lane_chg_sts = _arg;
    return *this;
  }
  Type & set__ad_ctrl_mode(
    const uint8_t & _arg)
  {
    this->ad_ctrl_mode = _arg;
    return *this;
  }
  Type & set__hmi_drvr_sod_req_chg(
    const uint8_t & _arg)
  {
    this->hmi_drvr_sod_req_chg = _arg;
    return *this;
  }
  Type & set__cam_status0(
    const uint8_t & _arg)
  {
    this->cam_status0 = _arg;
    return *this;
  }
  Type & set__frnt_side_cam_le_sts0(
    const uint8_t & _arg)
  {
    this->frnt_side_cam_le_sts0 = _arg;
    return *this;
  }
  Type & set__frnt_side_cam_ri_sts0(
    const uint8_t & _arg)
  {
    this->frnt_side_cam_ri_sts0 = _arg;
    return *this;
  }
  Type & set__re_side_cam_le_sts0(
    const uint8_t & _arg)
  {
    this->re_side_cam_le_sts0 = _arg;
    return *this;
  }
  Type & set__re_side_cam_ri_sts0(
    const uint8_t & _arg)
  {
    this->re_side_cam_ri_sts0 = _arg;
    return *this;
  }
  Type & set__hmi_re_cam_sts0(
    const uint8_t & _arg)
  {
    this->hmi_re_cam_sts0 = _arg;
    return *this;
  }
  Type & set__asy_algt_sts(
    const uint8_t & _arg)
  {
    this->asy_algt_sts = _arg;
    return *this;
  }
  Type & set__hmi_auto_lane_chg_style(
    const uint8_t & _arg)
  {
    this->hmi_auto_lane_chg_style = _arg;
    return *this;
  }
  Type & set__trfc_jam_warn(
    const uint8_t & _arg)
  {
    this->trfc_jam_warn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FsmInnerCommomMsg
    std::shared_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FsmInnerCommomMsg
    std::shared_ptr<deva_function_msgs::msg::FsmInnerCommomMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FsmInnerCommomMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->asy_cnoa_crs_lan_chg_msg != other.asy_cnoa_crs_lan_chg_msg) {
      return false;
    }
    if (this->set_spd_for_crs_ctrl_fct_active != other.set_spd_for_crs_ctrl_fct_active) {
      return false;
    }
    if (this->asy_lane_chg_assist_sts != other.asy_lane_chg_assist_sts) {
      return false;
    }
    if (this->indcr_sts != other.indcr_sts) {
      return false;
    }
    if (this->asy_noa_takeover_sod != other.asy_noa_takeover_sod) {
      return false;
    }
    if (this->hmi_drvr_sod_req_pilot != other.hmi_drvr_sod_req_pilot) {
      return false;
    }
    if (this->drvr_crs_ctrl_fct_actv_req != other.drvr_crs_ctrl_fct_actv_req) {
      return false;
    }
    if (this->asy_algt_indcr != other.asy_algt_indcr) {
      return false;
    }
    if (this->ti_gap_set_for_lgt_ctrl != other.ti_gap_set_for_lgt_ctrl) {
      return false;
    }
    if (this->drv_mod_req != other.drv_mod_req) {
      return false;
    }
    if (this->drv_off_warn != other.drv_off_warn) {
      return false;
    }
    if (this->asy_alat_indcr != other.asy_alat_indcr) {
      return false;
    }
    if (this->asy_lgt_ctrl_take_over_req != other.asy_lgt_ctrl_take_over_req) {
      return false;
    }
    if (this->ovrd_wrn_for_fst_actv != other.ovrd_wrn_for_fst_actv) {
      return false;
    }
    if (this->asy_inform_for_drvr != other.asy_inform_for_drvr) {
      return false;
    }
    if (this->cncl_warn_lgt_for_aut_drv != other.cncl_warn_lgt_for_aut_drv) {
      return false;
    }
    if (this->avl_sts_for_long_aut_drv != other.avl_sts_for_long_aut_drv) {
      return false;
    }
    if (this->asy_steer_apply_rqrd != other.asy_steer_apply_rqrd) {
      return false;
    }
    if (this->asy_lan_chg_mesg != other.asy_lan_chg_mesg) {
      return false;
    }
    if (this->asy_safe_stop_sts != other.asy_safe_stop_sts) {
      return false;
    }
    if (this->asy_eyes_off_warn_rqrd != other.asy_eyes_off_warn_rqrd) {
      return false;
    }
    if (this->asy_noa_remind_mesg != other.asy_noa_remind_mesg) {
      return false;
    }
    if (this->asy_noa_takeover_mesg != other.asy_noa_takeover_mesg) {
      return false;
    }
    if (this->asy_aut_drvg_avl != other.asy_aut_drvg_avl) {
      return false;
    }
    if (this->asy_noa_actv_suggest != other.asy_noa_actv_suggest) {
      return false;
    }
    if (this->cncl_warn_for_aut_drv != other.cncl_warn_for_aut_drv) {
      return false;
    }
    if (this->asy_lat_deg_sts != other.asy_lat_deg_sts) {
      return false;
    }
    if (this->asy_icc_max_warn_msg != other.asy_icc_max_warn_msg) {
      return false;
    }
    if (this->asy_cnoa_takeover_warn_msg != other.asy_cnoa_takeover_warn_msg) {
      return false;
    }
    if (this->asy_cnoa_crs_cross_intsec_msg != other.asy_cnoa_crs_cross_intsec_msg) {
      return false;
    }
    if (this->asy_d2d_avl_rmn != other.asy_d2d_avl_rmn) {
      return false;
    }
    if (this->asy_d2d_distan_msg != other.asy_d2d_distan_msg) {
      return false;
    }
    if (this->asy_d2d_strt_to_end != other.asy_d2d_strt_to_end) {
      return false;
    }
    if (this->asy_d2d_deactvd_reasn_mesg != other.asy_d2d_deactvd_reasn_mesg) {
      return false;
    }
    if (this->asy_aut_emgy_steer_actv != other.asy_aut_emgy_steer_actv) {
      return false;
    }
    if (this->asy_d2d_etc_distan_msg != other.asy_d2d_etc_distan_msg) {
      return false;
    }
    if (this->asy_d2d_remind_msg != other.asy_d2d_remind_msg) {
      return false;
    }
    if (this->disp_tsi_info_for_lgt_ctrl != other.disp_tsi_info_for_lgt_ctrl) {
      return false;
    }
    if (this->disp_spd_set_for_lgt_ctrl != other.disp_spd_set_for_lgt_ctrl) {
      return false;
    }
    if (this->ad_dim_light != other.ad_dim_light) {
      return false;
    }
    if (this->asy_d2d_crs_dim_indcr != other.asy_d2d_crs_dim_indcr) {
      return false;
    }
    if (this->asy_aut_drv_ctrl_typ_dim_req != other.asy_aut_drv_ctrl_typ_dim_req) {
      return false;
    }
    if (this->ihu_set_disp_ad != other.ihu_set_disp_ad) {
      return false;
    }
    if (this->aut_lane_chg_sts != other.aut_lane_chg_sts) {
      return false;
    }
    if (this->ad_ctrl_mode != other.ad_ctrl_mode) {
      return false;
    }
    if (this->hmi_drvr_sod_req_chg != other.hmi_drvr_sod_req_chg) {
      return false;
    }
    if (this->cam_status0 != other.cam_status0) {
      return false;
    }
    if (this->frnt_side_cam_le_sts0 != other.frnt_side_cam_le_sts0) {
      return false;
    }
    if (this->frnt_side_cam_ri_sts0 != other.frnt_side_cam_ri_sts0) {
      return false;
    }
    if (this->re_side_cam_le_sts0 != other.re_side_cam_le_sts0) {
      return false;
    }
    if (this->re_side_cam_ri_sts0 != other.re_side_cam_ri_sts0) {
      return false;
    }
    if (this->hmi_re_cam_sts0 != other.hmi_re_cam_sts0) {
      return false;
    }
    if (this->asy_algt_sts != other.asy_algt_sts) {
      return false;
    }
    if (this->hmi_auto_lane_chg_style != other.hmi_auto_lane_chg_style) {
      return false;
    }
    if (this->trfc_jam_warn != other.trfc_jam_warn) {
      return false;
    }
    return true;
  }
  bool operator!=(const FsmInnerCommomMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FsmInnerCommomMsg_

// alias to use template instance with default allocator
using FsmInnerCommomMsg =
  deva_function_msgs::msg::FsmInnerCommomMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__STRUCT_HPP_
