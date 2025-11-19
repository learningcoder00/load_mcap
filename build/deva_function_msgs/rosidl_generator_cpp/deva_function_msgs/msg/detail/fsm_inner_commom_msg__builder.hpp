// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FsmInnerCommomMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fsm_inner_commom_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FsmInnerCommomMsg_trfc_jam_warn
{
public:
  explicit Init_FsmInnerCommomMsg_trfc_jam_warn(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FsmInnerCommomMsg trfc_jam_warn(::deva_function_msgs::msg::FsmInnerCommomMsg::_trfc_jam_warn_type arg)
  {
    msg_.trfc_jam_warn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_hmi_auto_lane_chg_style
{
public:
  explicit Init_FsmInnerCommomMsg_hmi_auto_lane_chg_style(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_trfc_jam_warn hmi_auto_lane_chg_style(::deva_function_msgs::msg::FsmInnerCommomMsg::_hmi_auto_lane_chg_style_type arg)
  {
    msg_.hmi_auto_lane_chg_style = std::move(arg);
    return Init_FsmInnerCommomMsg_trfc_jam_warn(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_algt_sts
{
public:
  explicit Init_FsmInnerCommomMsg_asy_algt_sts(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_hmi_auto_lane_chg_style asy_algt_sts(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_algt_sts_type arg)
  {
    msg_.asy_algt_sts = std::move(arg);
    return Init_FsmInnerCommomMsg_hmi_auto_lane_chg_style(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_hmi_re_cam_sts0
{
public:
  explicit Init_FsmInnerCommomMsg_hmi_re_cam_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_algt_sts hmi_re_cam_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg::_hmi_re_cam_sts0_type arg)
  {
    msg_.hmi_re_cam_sts0 = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_algt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_re_side_cam_ri_sts0
{
public:
  explicit Init_FsmInnerCommomMsg_re_side_cam_ri_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_hmi_re_cam_sts0 re_side_cam_ri_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg::_re_side_cam_ri_sts0_type arg)
  {
    msg_.re_side_cam_ri_sts0 = std::move(arg);
    return Init_FsmInnerCommomMsg_hmi_re_cam_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_re_side_cam_le_sts0
{
public:
  explicit Init_FsmInnerCommomMsg_re_side_cam_le_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_re_side_cam_ri_sts0 re_side_cam_le_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg::_re_side_cam_le_sts0_type arg)
  {
    msg_.re_side_cam_le_sts0 = std::move(arg);
    return Init_FsmInnerCommomMsg_re_side_cam_ri_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_frnt_side_cam_ri_sts0
{
public:
  explicit Init_FsmInnerCommomMsg_frnt_side_cam_ri_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_re_side_cam_le_sts0 frnt_side_cam_ri_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg::_frnt_side_cam_ri_sts0_type arg)
  {
    msg_.frnt_side_cam_ri_sts0 = std::move(arg);
    return Init_FsmInnerCommomMsg_re_side_cam_le_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_frnt_side_cam_le_sts0
{
public:
  explicit Init_FsmInnerCommomMsg_frnt_side_cam_le_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_frnt_side_cam_ri_sts0 frnt_side_cam_le_sts0(::deva_function_msgs::msg::FsmInnerCommomMsg::_frnt_side_cam_le_sts0_type arg)
  {
    msg_.frnt_side_cam_le_sts0 = std::move(arg);
    return Init_FsmInnerCommomMsg_frnt_side_cam_ri_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_cam_status0
{
public:
  explicit Init_FsmInnerCommomMsg_cam_status0(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_frnt_side_cam_le_sts0 cam_status0(::deva_function_msgs::msg::FsmInnerCommomMsg::_cam_status0_type arg)
  {
    msg_.cam_status0 = std::move(arg);
    return Init_FsmInnerCommomMsg_frnt_side_cam_le_sts0(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_hmi_drvr_sod_req_chg
{
public:
  explicit Init_FsmInnerCommomMsg_hmi_drvr_sod_req_chg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_cam_status0 hmi_drvr_sod_req_chg(::deva_function_msgs::msg::FsmInnerCommomMsg::_hmi_drvr_sod_req_chg_type arg)
  {
    msg_.hmi_drvr_sod_req_chg = std::move(arg);
    return Init_FsmInnerCommomMsg_cam_status0(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_ad_ctrl_mode
{
public:
  explicit Init_FsmInnerCommomMsg_ad_ctrl_mode(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_hmi_drvr_sod_req_chg ad_ctrl_mode(::deva_function_msgs::msg::FsmInnerCommomMsg::_ad_ctrl_mode_type arg)
  {
    msg_.ad_ctrl_mode = std::move(arg);
    return Init_FsmInnerCommomMsg_hmi_drvr_sod_req_chg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_aut_lane_chg_sts
{
public:
  explicit Init_FsmInnerCommomMsg_aut_lane_chg_sts(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_ad_ctrl_mode aut_lane_chg_sts(::deva_function_msgs::msg::FsmInnerCommomMsg::_aut_lane_chg_sts_type arg)
  {
    msg_.aut_lane_chg_sts = std::move(arg);
    return Init_FsmInnerCommomMsg_ad_ctrl_mode(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_ihu_set_disp_ad
{
public:
  explicit Init_FsmInnerCommomMsg_ihu_set_disp_ad(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_aut_lane_chg_sts ihu_set_disp_ad(::deva_function_msgs::msg::FsmInnerCommomMsg::_ihu_set_disp_ad_type arg)
  {
    msg_.ihu_set_disp_ad = std::move(arg);
    return Init_FsmInnerCommomMsg_aut_lane_chg_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_aut_drv_ctrl_typ_dim_req
{
public:
  explicit Init_FsmInnerCommomMsg_asy_aut_drv_ctrl_typ_dim_req(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_ihu_set_disp_ad asy_aut_drv_ctrl_typ_dim_req(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_aut_drv_ctrl_typ_dim_req_type arg)
  {
    msg_.asy_aut_drv_ctrl_typ_dim_req = std::move(arg);
    return Init_FsmInnerCommomMsg_ihu_set_disp_ad(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_d2d_crs_dim_indcr
{
public:
  explicit Init_FsmInnerCommomMsg_asy_d2d_crs_dim_indcr(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_aut_drv_ctrl_typ_dim_req asy_d2d_crs_dim_indcr(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_d2d_crs_dim_indcr_type arg)
  {
    msg_.asy_d2d_crs_dim_indcr = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_aut_drv_ctrl_typ_dim_req(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_ad_dim_light
{
public:
  explicit Init_FsmInnerCommomMsg_ad_dim_light(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_d2d_crs_dim_indcr ad_dim_light(::deva_function_msgs::msg::FsmInnerCommomMsg::_ad_dim_light_type arg)
  {
    msg_.ad_dim_light = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_d2d_crs_dim_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_disp_spd_set_for_lgt_ctrl
{
public:
  explicit Init_FsmInnerCommomMsg_disp_spd_set_for_lgt_ctrl(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_ad_dim_light disp_spd_set_for_lgt_ctrl(::deva_function_msgs::msg::FsmInnerCommomMsg::_disp_spd_set_for_lgt_ctrl_type arg)
  {
    msg_.disp_spd_set_for_lgt_ctrl = std::move(arg);
    return Init_FsmInnerCommomMsg_ad_dim_light(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_disp_tsi_info_for_lgt_ctrl
{
public:
  explicit Init_FsmInnerCommomMsg_disp_tsi_info_for_lgt_ctrl(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_disp_spd_set_for_lgt_ctrl disp_tsi_info_for_lgt_ctrl(::deva_function_msgs::msg::FsmInnerCommomMsg::_disp_tsi_info_for_lgt_ctrl_type arg)
  {
    msg_.disp_tsi_info_for_lgt_ctrl = std::move(arg);
    return Init_FsmInnerCommomMsg_disp_spd_set_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_d2d_remind_msg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_d2d_remind_msg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_disp_tsi_info_for_lgt_ctrl asy_d2d_remind_msg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_d2d_remind_msg_type arg)
  {
    msg_.asy_d2d_remind_msg = std::move(arg);
    return Init_FsmInnerCommomMsg_disp_tsi_info_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_d2d_etc_distan_msg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_d2d_etc_distan_msg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_d2d_remind_msg asy_d2d_etc_distan_msg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_d2d_etc_distan_msg_type arg)
  {
    msg_.asy_d2d_etc_distan_msg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_d2d_remind_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_aut_emgy_steer_actv
{
public:
  explicit Init_FsmInnerCommomMsg_asy_aut_emgy_steer_actv(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_d2d_etc_distan_msg asy_aut_emgy_steer_actv(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_aut_emgy_steer_actv_type arg)
  {
    msg_.asy_aut_emgy_steer_actv = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_d2d_etc_distan_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_d2d_deactvd_reasn_mesg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_d2d_deactvd_reasn_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_aut_emgy_steer_actv asy_d2d_deactvd_reasn_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_d2d_deactvd_reasn_mesg_type arg)
  {
    msg_.asy_d2d_deactvd_reasn_mesg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_aut_emgy_steer_actv(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_d2d_strt_to_end
{
public:
  explicit Init_FsmInnerCommomMsg_asy_d2d_strt_to_end(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_d2d_deactvd_reasn_mesg asy_d2d_strt_to_end(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_d2d_strt_to_end_type arg)
  {
    msg_.asy_d2d_strt_to_end = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_d2d_deactvd_reasn_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_d2d_distan_msg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_d2d_distan_msg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_d2d_strt_to_end asy_d2d_distan_msg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_d2d_distan_msg_type arg)
  {
    msg_.asy_d2d_distan_msg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_d2d_strt_to_end(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_d2d_avl_rmn
{
public:
  explicit Init_FsmInnerCommomMsg_asy_d2d_avl_rmn(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_d2d_distan_msg asy_d2d_avl_rmn(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_d2d_avl_rmn_type arg)
  {
    msg_.asy_d2d_avl_rmn = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_d2d_distan_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_cnoa_crs_cross_intsec_msg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_cnoa_crs_cross_intsec_msg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_d2d_avl_rmn asy_cnoa_crs_cross_intsec_msg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_cnoa_crs_cross_intsec_msg_type arg)
  {
    msg_.asy_cnoa_crs_cross_intsec_msg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_d2d_avl_rmn(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_cnoa_takeover_warn_msg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_cnoa_takeover_warn_msg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_cnoa_crs_cross_intsec_msg asy_cnoa_takeover_warn_msg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_cnoa_takeover_warn_msg_type arg)
  {
    msg_.asy_cnoa_takeover_warn_msg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_cnoa_crs_cross_intsec_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_icc_max_warn_msg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_icc_max_warn_msg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_cnoa_takeover_warn_msg asy_icc_max_warn_msg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_icc_max_warn_msg_type arg)
  {
    msg_.asy_icc_max_warn_msg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_cnoa_takeover_warn_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_lat_deg_sts
{
public:
  explicit Init_FsmInnerCommomMsg_asy_lat_deg_sts(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_icc_max_warn_msg asy_lat_deg_sts(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_lat_deg_sts_type arg)
  {
    msg_.asy_lat_deg_sts = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_icc_max_warn_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_cncl_warn_for_aut_drv
{
public:
  explicit Init_FsmInnerCommomMsg_cncl_warn_for_aut_drv(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_lat_deg_sts cncl_warn_for_aut_drv(::deva_function_msgs::msg::FsmInnerCommomMsg::_cncl_warn_for_aut_drv_type arg)
  {
    msg_.cncl_warn_for_aut_drv = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_lat_deg_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_noa_actv_suggest
{
public:
  explicit Init_FsmInnerCommomMsg_asy_noa_actv_suggest(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_cncl_warn_for_aut_drv asy_noa_actv_suggest(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_noa_actv_suggest_type arg)
  {
    msg_.asy_noa_actv_suggest = std::move(arg);
    return Init_FsmInnerCommomMsg_cncl_warn_for_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_aut_drvg_avl
{
public:
  explicit Init_FsmInnerCommomMsg_asy_aut_drvg_avl(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_noa_actv_suggest asy_aut_drvg_avl(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_aut_drvg_avl_type arg)
  {
    msg_.asy_aut_drvg_avl = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_noa_actv_suggest(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_noa_takeover_mesg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_noa_takeover_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_aut_drvg_avl asy_noa_takeover_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_noa_takeover_mesg_type arg)
  {
    msg_.asy_noa_takeover_mesg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_aut_drvg_avl(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_noa_remind_mesg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_noa_remind_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_noa_takeover_mesg asy_noa_remind_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_noa_remind_mesg_type arg)
  {
    msg_.asy_noa_remind_mesg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_noa_takeover_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_eyes_off_warn_rqrd
{
public:
  explicit Init_FsmInnerCommomMsg_asy_eyes_off_warn_rqrd(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_noa_remind_mesg asy_eyes_off_warn_rqrd(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_eyes_off_warn_rqrd_type arg)
  {
    msg_.asy_eyes_off_warn_rqrd = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_noa_remind_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_safe_stop_sts
{
public:
  explicit Init_FsmInnerCommomMsg_asy_safe_stop_sts(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_eyes_off_warn_rqrd asy_safe_stop_sts(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_safe_stop_sts_type arg)
  {
    msg_.asy_safe_stop_sts = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_eyes_off_warn_rqrd(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_lan_chg_mesg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_lan_chg_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_safe_stop_sts asy_lan_chg_mesg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_lan_chg_mesg_type arg)
  {
    msg_.asy_lan_chg_mesg = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_safe_stop_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_steer_apply_rqrd
{
public:
  explicit Init_FsmInnerCommomMsg_asy_steer_apply_rqrd(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_lan_chg_mesg asy_steer_apply_rqrd(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_steer_apply_rqrd_type arg)
  {
    msg_.asy_steer_apply_rqrd = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_lan_chg_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_avl_sts_for_long_aut_drv
{
public:
  explicit Init_FsmInnerCommomMsg_avl_sts_for_long_aut_drv(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_steer_apply_rqrd avl_sts_for_long_aut_drv(::deva_function_msgs::msg::FsmInnerCommomMsg::_avl_sts_for_long_aut_drv_type arg)
  {
    msg_.avl_sts_for_long_aut_drv = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_steer_apply_rqrd(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_cncl_warn_lgt_for_aut_drv
{
public:
  explicit Init_FsmInnerCommomMsg_cncl_warn_lgt_for_aut_drv(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_avl_sts_for_long_aut_drv cncl_warn_lgt_for_aut_drv(::deva_function_msgs::msg::FsmInnerCommomMsg::_cncl_warn_lgt_for_aut_drv_type arg)
  {
    msg_.cncl_warn_lgt_for_aut_drv = std::move(arg);
    return Init_FsmInnerCommomMsg_avl_sts_for_long_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_inform_for_drvr
{
public:
  explicit Init_FsmInnerCommomMsg_asy_inform_for_drvr(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_cncl_warn_lgt_for_aut_drv asy_inform_for_drvr(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_inform_for_drvr_type arg)
  {
    msg_.asy_inform_for_drvr = std::move(arg);
    return Init_FsmInnerCommomMsg_cncl_warn_lgt_for_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_ovrd_wrn_for_fst_actv
{
public:
  explicit Init_FsmInnerCommomMsg_ovrd_wrn_for_fst_actv(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_inform_for_drvr ovrd_wrn_for_fst_actv(::deva_function_msgs::msg::FsmInnerCommomMsg::_ovrd_wrn_for_fst_actv_type arg)
  {
    msg_.ovrd_wrn_for_fst_actv = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_inform_for_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_lgt_ctrl_take_over_req
{
public:
  explicit Init_FsmInnerCommomMsg_asy_lgt_ctrl_take_over_req(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_ovrd_wrn_for_fst_actv asy_lgt_ctrl_take_over_req(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_lgt_ctrl_take_over_req_type arg)
  {
    msg_.asy_lgt_ctrl_take_over_req = std::move(arg);
    return Init_FsmInnerCommomMsg_ovrd_wrn_for_fst_actv(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_alat_indcr
{
public:
  explicit Init_FsmInnerCommomMsg_asy_alat_indcr(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_lgt_ctrl_take_over_req asy_alat_indcr(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_alat_indcr_type arg)
  {
    msg_.asy_alat_indcr = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_lgt_ctrl_take_over_req(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_drv_off_warn
{
public:
  explicit Init_FsmInnerCommomMsg_drv_off_warn(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_alat_indcr drv_off_warn(::deva_function_msgs::msg::FsmInnerCommomMsg::_drv_off_warn_type arg)
  {
    msg_.drv_off_warn = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_alat_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_drv_mod_req
{
public:
  explicit Init_FsmInnerCommomMsg_drv_mod_req(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_drv_off_warn drv_mod_req(::deva_function_msgs::msg::FsmInnerCommomMsg::_drv_mod_req_type arg)
  {
    msg_.drv_mod_req = std::move(arg);
    return Init_FsmInnerCommomMsg_drv_off_warn(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_ti_gap_set_for_lgt_ctrl
{
public:
  explicit Init_FsmInnerCommomMsg_ti_gap_set_for_lgt_ctrl(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_drv_mod_req ti_gap_set_for_lgt_ctrl(::deva_function_msgs::msg::FsmInnerCommomMsg::_ti_gap_set_for_lgt_ctrl_type arg)
  {
    msg_.ti_gap_set_for_lgt_ctrl = std::move(arg);
    return Init_FsmInnerCommomMsg_drv_mod_req(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_algt_indcr
{
public:
  explicit Init_FsmInnerCommomMsg_asy_algt_indcr(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_ti_gap_set_for_lgt_ctrl asy_algt_indcr(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_algt_indcr_type arg)
  {
    msg_.asy_algt_indcr = std::move(arg);
    return Init_FsmInnerCommomMsg_ti_gap_set_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_drvr_crs_ctrl_fct_actv_req
{
public:
  explicit Init_FsmInnerCommomMsg_drvr_crs_ctrl_fct_actv_req(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_algt_indcr drvr_crs_ctrl_fct_actv_req(::deva_function_msgs::msg::FsmInnerCommomMsg::_drvr_crs_ctrl_fct_actv_req_type arg)
  {
    msg_.drvr_crs_ctrl_fct_actv_req = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_algt_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_hmi_drvr_sod_req_pilot
{
public:
  explicit Init_FsmInnerCommomMsg_hmi_drvr_sod_req_pilot(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_drvr_crs_ctrl_fct_actv_req hmi_drvr_sod_req_pilot(::deva_function_msgs::msg::FsmInnerCommomMsg::_hmi_drvr_sod_req_pilot_type arg)
  {
    msg_.hmi_drvr_sod_req_pilot = std::move(arg);
    return Init_FsmInnerCommomMsg_drvr_crs_ctrl_fct_actv_req(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_noa_takeover_sod
{
public:
  explicit Init_FsmInnerCommomMsg_asy_noa_takeover_sod(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_hmi_drvr_sod_req_pilot asy_noa_takeover_sod(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_noa_takeover_sod_type arg)
  {
    msg_.asy_noa_takeover_sod = std::move(arg);
    return Init_FsmInnerCommomMsg_hmi_drvr_sod_req_pilot(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_indcr_sts
{
public:
  explicit Init_FsmInnerCommomMsg_indcr_sts(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_noa_takeover_sod indcr_sts(::deva_function_msgs::msg::FsmInnerCommomMsg::_indcr_sts_type arg)
  {
    msg_.indcr_sts = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_noa_takeover_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_lane_chg_assist_sts
{
public:
  explicit Init_FsmInnerCommomMsg_asy_lane_chg_assist_sts(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_indcr_sts asy_lane_chg_assist_sts(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_lane_chg_assist_sts_type arg)
  {
    msg_.asy_lane_chg_assist_sts = std::move(arg);
    return Init_FsmInnerCommomMsg_indcr_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_set_spd_for_crs_ctrl_fct_active
{
public:
  explicit Init_FsmInnerCommomMsg_set_spd_for_crs_ctrl_fct_active(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_asy_lane_chg_assist_sts set_spd_for_crs_ctrl_fct_active(::deva_function_msgs::msg::FsmInnerCommomMsg::_set_spd_for_crs_ctrl_fct_active_type arg)
  {
    msg_.set_spd_for_crs_ctrl_fct_active = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_lane_chg_assist_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_asy_cnoa_crs_lan_chg_msg
{
public:
  explicit Init_FsmInnerCommomMsg_asy_cnoa_crs_lan_chg_msg(::deva_function_msgs::msg::FsmInnerCommomMsg & msg)
  : msg_(msg)
  {}
  Init_FsmInnerCommomMsg_set_spd_for_crs_ctrl_fct_active asy_cnoa_crs_lan_chg_msg(::deva_function_msgs::msg::FsmInnerCommomMsg::_asy_cnoa_crs_lan_chg_msg_type arg)
  {
    msg_.asy_cnoa_crs_lan_chg_msg = std::move(arg);
    return Init_FsmInnerCommomMsg_set_spd_for_crs_ctrl_fct_active(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

class Init_FsmInnerCommomMsg_header
{
public:
  Init_FsmInnerCommomMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsmInnerCommomMsg_asy_cnoa_crs_lan_chg_msg header(::deva_function_msgs::msg::FsmInnerCommomMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FsmInnerCommomMsg_asy_cnoa_crs_lan_chg_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmInnerCommomMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FsmInnerCommomMsg>()
{
  return deva_function_msgs::msg::builder::Init_FsmInnerCommomMsg_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_INNER_COMMOM_MSG__BUILDER_HPP_
