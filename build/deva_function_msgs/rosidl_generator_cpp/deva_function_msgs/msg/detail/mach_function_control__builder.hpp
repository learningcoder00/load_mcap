// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/MachFunctionControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/mach_function_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_MachFunctionControl_asy_cnoa_req_lane_chg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_req_lane_chg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::MachFunctionControl asy_cnoa_req_lane_chg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_req_lane_chg_type arg)
  {
    msg_.asy_cnoa_req_lane_chg = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_aut_cnoa_lane_chg_sts
{
public:
  explicit Init_MachFunctionControl_aut_cnoa_lane_chg_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_req_lane_chg aut_cnoa_lane_chg_sts(::deva_function_msgs::msg::MachFunctionControl::_aut_cnoa_lane_chg_sts_type arg)
  {
    msg_.aut_cnoa_lane_chg_sts = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_req_lane_chg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_lane_chg_fail_type
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_lane_chg_fail_type(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_aut_cnoa_lane_chg_sts asy_cnoa_lane_chg_fail_type(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_lane_chg_fail_type_type arg)
  {
    msg_.asy_cnoa_lane_chg_fail_type = std::move(arg);
    return Init_MachFunctionControl_aut_cnoa_lane_chg_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_lane_chg_assist_sts
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_lane_chg_assist_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_lane_chg_fail_type asy_cnoa_lane_chg_assist_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_lane_chg_assist_sts_type arg)
  {
    msg_.asy_cnoa_lane_chg_assist_sts = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_lane_chg_fail_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_cam_sts_cam_cam_frnt_cal_not_cmpl
{
public:
  explicit Init_MachFunctionControl_cam_sts_cam_cam_frnt_cal_not_cmpl(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_lane_chg_assist_sts cam_sts_cam_cam_frnt_cal_not_cmpl(::deva_function_msgs::msg::MachFunctionControl::_cam_sts_cam_cam_frnt_cal_not_cmpl_type arg)
  {
    msg_.cam_sts_cam_cam_frnt_cal_not_cmpl = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_lane_chg_assist_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_lane_chg_aut_actv_sts
{
public:
  explicit Init_MachFunctionControl_lane_chg_aut_actv_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_cam_sts_cam_cam_frnt_cal_not_cmpl lane_chg_aut_actv_sts(::deva_function_msgs::msg::MachFunctionControl::_lane_chg_aut_actv_sts_type arg)
  {
    msg_.lane_chg_aut_actv_sts = std::move(arg);
    return Init_MachFunctionControl_cam_sts_cam_cam_frnt_cal_not_cmpl(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_cllsn_aid_post_ema
{
public:
  explicit Init_MachFunctionControl_cllsn_aid_post_ema(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_lane_chg_aut_actv_sts cllsn_aid_post_ema(::deva_function_msgs::msg::MachFunctionControl::_cllsn_aid_post_ema_type arg)
  {
    msg_.cllsn_aid_post_ema = std::move(arg);
    return Init_MachFunctionControl_lane_chg_aut_actv_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_aut_lane_chg_sts
{
public:
  explicit Init_MachFunctionControl_aut_lane_chg_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_cllsn_aid_post_ema aut_lane_chg_sts(::deva_function_msgs::msg::MachFunctionControl::_aut_lane_chg_sts_type arg)
  {
    msg_.aut_lane_chg_sts = std::move(arg);
    return Init_MachFunctionControl_cllsn_aid_post_ema(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sfty_hwl_req
{
public:
  explicit Init_MachFunctionControl_asy_sfty_hwl_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_aut_lane_chg_sts asy_sfty_hwl_req(::deva_function_msgs::msg::MachFunctionControl::_asy_sfty_hwl_req_type arg)
  {
    msg_.asy_sfty_hwl_req = std::move(arg);
    return Init_MachFunctionControl_aut_lane_chg_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_icc_max_warn_msg
{
public:
  explicit Init_MachFunctionControl_asy_icc_max_warn_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sfty_hwl_req asy_icc_max_warn_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_icc_max_warn_msg_type arg)
  {
    msg_.asy_icc_max_warn_msg = std::move(arg);
    return Init_MachFunctionControl_asy_sfty_hwl_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_fctn_ihbt_by_trlr
{
public:
  explicit Init_MachFunctionControl_asy_fctn_ihbt_by_trlr(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_icc_max_warn_msg asy_fctn_ihbt_by_trlr(::deva_function_msgs::msg::MachFunctionControl::_asy_fctn_ihbt_by_trlr_type arg)
  {
    msg_.asy_fctn_ihbt_by_trlr = std::move(arg);
    return Init_MachFunctionControl_asy_icc_max_warn_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_emgy_manoeuvre_aid_sts
{
public:
  explicit Init_MachFunctionControl_asy_emgy_manoeuvre_aid_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_fctn_ihbt_by_trlr asy_emgy_manoeuvre_aid_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_emgy_manoeuvre_aid_sts_type arg)
  {
    msg_.asy_emgy_manoeuvre_aid_sts = std::move(arg);
    return Init_MachFunctionControl_asy_fctn_ihbt_by_trlr(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_emgy_manoeuvre_aid_sts asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr_type arg)
  {
    msg_.asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr = std::move(arg);
    return Init_MachFunctionControl_asy_emgy_manoeuvre_aid_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_hud_indcr
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_hud_indcr(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr asy_cnoa_crs_hud_indcr(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_hud_indcr_type arg)
  {
    msg_.asy_cnoa_crs_hud_indcr = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_dim_indcr_asy_cnoa_crs_dim_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_csd_indcr
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_csd_indcr(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_hud_indcr asy_cnoa_crs_csd_indcr(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_csd_indcr_type arg)
  {
    msg_.asy_cnoa_crs_csd_indcr = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_hud_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfe_fct_sts
{
public:
  explicit Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfe_fct_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_csd_indcr asy_sfty_fct_sts_to_edracsfe_fct_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_sfty_fct_sts_to_edracsfe_fct_sts_type arg)
  {
    msg_.asy_sfty_fct_sts_to_edracsfe_fct_sts = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_csd_indcr(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfd_fct_sts
{
public:
  explicit Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfd_fct_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfe_fct_sts asy_sfty_fct_sts_to_edracsfd_fct_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_sfty_fct_sts_to_edracsfd_fct_sts_type arg)
  {
    msg_.asy_sfty_fct_sts_to_edracsfd_fct_sts = std::move(arg);
    return Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfe_fct_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfc_fct_sts
{
public:
  explicit Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfc_fct_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfd_fct_sts asy_sfty_fct_sts_to_edracsfc_fct_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_sfty_fct_sts_to_edracsfc_fct_sts_type arg)
  {
    msg_.asy_sfty_fct_sts_to_edracsfc_fct_sts = std::move(arg);
    return Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfd_fct_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb2_fct_sts
{
public:
  explicit Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb2_fct_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfc_fct_sts asy_sfty_fct_sts_to_edracsfb2_fct_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_sfty_fct_sts_to_edracsfb2_fct_sts_type arg)
  {
    msg_.asy_sfty_fct_sts_to_edracsfb2_fct_sts = std::move(arg);
    return Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfc_fct_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb1_fct_sts
{
public:
  explicit Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb1_fct_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb2_fct_sts asy_sfty_fct_sts_to_edracsfb1_fct_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_sfty_fct_sts_to_edracsfb1_fct_sts_type arg)
  {
    msg_.asy_sfty_fct_sts_to_edracsfb1_fct_sts = std::move(arg);
    return Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb2_fct_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sfty_fct_sts_to_edraccfct_sts
{
public:
  explicit Init_MachFunctionControl_asy_sfty_fct_sts_to_edraccfct_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb1_fct_sts asy_sfty_fct_sts_to_edraccfct_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_sfty_fct_sts_to_edraccfct_sts_type arg)
  {
    msg_.asy_sfty_fct_sts_to_edraccfct_sts = std::move(arg);
    return Init_MachFunctionControl_asy_sfty_fct_sts_to_edracsfb1_fct_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_acc_fusn_trfc_sgn
{
public:
  explicit Init_MachFunctionControl_acc_fusn_trfc_sgn(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sfty_fct_sts_to_edraccfct_sts acc_fusn_trfc_sgn(::deva_function_msgs::msg::MachFunctionControl::_acc_fusn_trfc_sgn_type arg)
  {
    msg_.acc_fusn_trfc_sgn = std::move(arg);
    return Init_MachFunctionControl_asy_sfty_fct_sts_to_edraccfct_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_trunk_ctrl_req
{
public:
  explicit Init_MachFunctionControl_ad4_trunk_ctrl_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_acc_fusn_trfc_sgn ad4_trunk_ctrl_req(::deva_function_msgs::msg::MachFunctionControl::_ad4_trunk_ctrl_req_type arg)
  {
    msg_.ad4_trunk_ctrl_req = std::move(arg);
    return Init_MachFunctionControl_acc_fusn_trfc_sgn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_res_req_for_e2e
{
public:
  explicit Init_MachFunctionControl_ad4_res_req_for_e2e(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_trunk_ctrl_req ad4_res_req_for_e2e(::deva_function_msgs::msg::MachFunctionControl::_ad4_res_req_for_e2e_type arg)
  {
    msg_.ad4_res_req_for_e2e = std::move(arg);
    return Init_MachFunctionControl_ad4_trunk_ctrl_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_rear_fog_lamp_req
{
public:
  explicit Init_MachFunctionControl_ad4_rear_fog_lamp_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_res_req_for_e2e ad4_rear_fog_lamp_req(::deva_function_msgs::msg::MachFunctionControl::_ad4_rear_fog_lamp_req_type arg)
  {
    msg_.ad4_rear_fog_lamp_req = std::move(arg);
    return Init_MachFunctionControl_ad4_res_req_for_e2e(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_frt_lamp_req
{
public:
  explicit Init_MachFunctionControl_ad4_frt_lamp_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_rear_fog_lamp_req ad4_frt_lamp_req(::deva_function_msgs::msg::MachFunctionControl::_ad4_frt_lamp_req_type arg)
  {
    msg_.ad4_frt_lamp_req = std::move(arg);
    return Init_MachFunctionControl_ad4_rear_fog_lamp_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ovrd_wrn_for_fst_actv
{
public:
  explicit Init_MachFunctionControl_ovrd_wrn_for_fst_actv(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_frt_lamp_req ovrd_wrn_for_fst_actv(::deva_function_msgs::msg::MachFunctionControl::_ovrd_wrn_for_fst_actv_type arg)
  {
    msg_.ovrd_wrn_for_fst_actv = std::move(arg);
    return Init_MachFunctionControl_ad4_frt_lamp_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_hmi_lane_chg_info
{
public:
  explicit Init_MachFunctionControl_hmi_lane_chg_info(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ovrd_wrn_for_fst_actv hmi_lane_chg_info(::deva_function_msgs::msg::MachFunctionControl::_hmi_lane_chg_info_type arg)
  {
    msg_.hmi_lane_chg_info = std::move(arg);
    return Init_MachFunctionControl_ovrd_wrn_for_fst_actv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_hmi_auto_lane_chg_style
{
public:
  explicit Init_MachFunctionControl_hmi_auto_lane_chg_style(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_hmi_lane_chg_info hmi_auto_lane_chg_style(::deva_function_msgs::msg::MachFunctionControl::_hmi_auto_lane_chg_style_type arg)
  {
    msg_.hmi_auto_lane_chg_style = std::move(arg);
    return Init_MachFunctionControl_hmi_lane_chg_info(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_cncl_warn_lgt_for_aut_drv_sound
{
public:
  explicit Init_MachFunctionControl_cncl_warn_lgt_for_aut_drv_sound(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_hmi_auto_lane_chg_style cncl_warn_lgt_for_aut_drv_sound(::deva_function_msgs::msg::MachFunctionControl::_cncl_warn_lgt_for_aut_drv_sound_type arg)
  {
    msg_.cncl_warn_lgt_for_aut_drv_sound = std::move(arg);
    return Init_MachFunctionControl_hmi_auto_lane_chg_style(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_cncl_warn_for_aut_drv_sound
{
public:
  explicit Init_MachFunctionControl_cncl_warn_for_aut_drv_sound(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_cncl_warn_lgt_for_aut_drv_sound cncl_warn_for_aut_drv_sound(::deva_function_msgs::msg::MachFunctionControl::_cncl_warn_for_aut_drv_sound_type arg)
  {
    msg_.cncl_warn_for_aut_drv_sound = std::move(arg);
    return Init_MachFunctionControl_cncl_warn_lgt_for_aut_drv_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sod_pilot_cfirm
{
public:
  explicit Init_MachFunctionControl_asy_sod_pilot_cfirm(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_cncl_warn_for_aut_drv_sound asy_sod_pilot_cfirm(::deva_function_msgs::msg::MachFunctionControl::_asy_sod_pilot_cfirm_type arg)
  {
    msg_.asy_sod_pilot_cfirm = std::move(arg);
    return Init_MachFunctionControl_cncl_warn_for_aut_drv_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_avl_sts_for_long_aut_drv_sound
{
public:
  explicit Init_MachFunctionControl_avl_sts_for_long_aut_drv_sound(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sod_pilot_cfirm avl_sts_for_long_aut_drv_sound(::deva_function_msgs::msg::MachFunctionControl::_avl_sts_for_long_aut_drv_sound_type arg)
  {
    msg_.avl_sts_for_long_aut_drv_sound = std::move(arg);
    return Init_MachFunctionControl_asy_sod_pilot_cfirm(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_sod_lane_chg_switch
{
public:
  explicit Init_MachFunctionControl_asy_sod_lane_chg_switch(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_avl_sts_for_long_aut_drv_sound asy_sod_lane_chg_switch(::deva_function_msgs::msg::MachFunctionControl::_asy_sod_lane_chg_switch_type arg)
  {
    msg_.asy_sod_lane_chg_switch = std::move(arg);
    return Init_MachFunctionControl_avl_sts_for_long_aut_drv_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_safe_stop_sts
{
public:
  explicit Init_MachFunctionControl_asy_safe_stop_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_sod_lane_chg_switch asy_safe_stop_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_safe_stop_sts_type arg)
  {
    msg_.asy_safe_stop_sts = std::move(arg);
    return Init_MachFunctionControl_asy_sod_lane_chg_switch(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_d2d_strt_to_end
{
public:
  explicit Init_MachFunctionControl_asy_d2d_strt_to_end(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_safe_stop_sts asy_d2d_strt_to_end(::deva_function_msgs::msg::MachFunctionControl::_asy_d2d_strt_to_end_type arg)
  {
    msg_.asy_d2d_strt_to_end = std::move(arg);
    return Init_MachFunctionControl_asy_safe_stop_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_etc_traffic_sw_sts
{
public:
  explicit Init_MachFunctionControl_asy_etc_traffic_sw_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_d2d_strt_to_end asy_etc_traffic_sw_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_etc_traffic_sw_sts_type arg)
  {
    msg_.asy_etc_traffic_sw_sts = std::move(arg);
    return Init_MachFunctionControl_asy_d2d_strt_to_end(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_d2d_remind_msg
{
public:
  explicit Init_MachFunctionControl_asy_d2d_remind_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_etc_traffic_sw_sts asy_d2d_remind_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_d2d_remind_msg_type arg)
  {
    msg_.asy_d2d_remind_msg = std::move(arg);
    return Init_MachFunctionControl_asy_etc_traffic_sw_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_d2d_etc_distan_msg
{
public:
  explicit Init_MachFunctionControl_asy_d2d_etc_distan_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_d2d_remind_msg asy_d2d_etc_distan_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_d2d_etc_distan_msg_type arg)
  {
    msg_.asy_d2d_etc_distan_msg = std::move(arg);
    return Init_MachFunctionControl_asy_d2d_remind_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_d2d_distan_msg
{
public:
  explicit Init_MachFunctionControl_asy_d2d_distan_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_d2d_etc_distan_msg asy_d2d_distan_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_d2d_distan_msg_type arg)
  {
    msg_.asy_d2d_distan_msg = std::move(arg);
    return Init_MachFunctionControl_asy_d2d_etc_distan_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_d2d_deactvd_reasn_mesg
{
public:
  explicit Init_MachFunctionControl_asy_d2d_deactvd_reasn_mesg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_d2d_distan_msg asy_d2d_deactvd_reasn_mesg(::deva_function_msgs::msg::MachFunctionControl::_asy_d2d_deactvd_reasn_mesg_type arg)
  {
    msg_.asy_d2d_deactvd_reasn_mesg = std::move(arg);
    return Init_MachFunctionControl_asy_d2d_distan_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_d2d_avl_rmn
{
public:
  explicit Init_MachFunctionControl_asy_d2d_avl_rmn(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_d2d_deactvd_reasn_mesg asy_d2d_avl_rmn(::deva_function_msgs::msg::MachFunctionControl::_asy_d2d_avl_rmn_type arg)
  {
    msg_.asy_d2d_avl_rmn = std::move(arg);
    return Init_MachFunctionControl_asy_d2d_deactvd_reasn_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_drvg_ast_on_sys_sts
{
public:
  explicit Init_MachFunctionControl_drvg_ast_on_sys_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_d2d_avl_rmn drvg_ast_on_sys_sts(::deva_function_msgs::msg::MachFunctionControl::_drvg_ast_on_sys_sts_type arg)
  {
    msg_.drvg_ast_on_sys_sts = std::move(arg);
    return Init_MachFunctionControl_asy_d2d_avl_rmn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_lgt_fusn_trfc_sgn
{
public:
  explicit Init_MachFunctionControl_lgt_fusn_trfc_sgn(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_drvg_ast_on_sys_sts lgt_fusn_trfc_sgn(::deva_function_msgs::msg::MachFunctionControl::_lgt_fusn_trfc_sgn_type arg)
  {
    msg_.lgt_fusn_trfc_sgn = std::move(arg);
    return Init_MachFunctionControl_drvg_ast_on_sys_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_warn_mesg_for_aut_drv
{
public:
  explicit Init_MachFunctionControl_asy_warn_mesg_for_aut_drv(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_lgt_fusn_trfc_sgn asy_warn_mesg_for_aut_drv(::deva_function_msgs::msg::MachFunctionControl::_asy_warn_mesg_for_aut_drv_type arg)
  {
    msg_.asy_warn_mesg_for_aut_drv = std::move(arg);
    return Init_MachFunctionControl_lgt_fusn_trfc_sgn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_undertak_rmind
{
public:
  explicit Init_MachFunctionControl_asy_undertak_rmind(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_warn_mesg_for_aut_drv asy_undertak_rmind(::deva_function_msgs::msg::MachFunctionControl::_asy_undertak_rmind_type arg)
  {
    msg_.asy_undertak_rmind = std::move(arg);
    return Init_MachFunctionControl_asy_warn_mesg_for_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_undertak_on_off_sts
{
public:
  explicit Init_MachFunctionControl_asy_undertak_on_off_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_undertak_rmind asy_undertak_on_off_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_undertak_on_off_sts_type arg)
  {
    msg_.asy_undertak_on_off_sts = std::move(arg);
    return Init_MachFunctionControl_asy_undertak_rmind(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_lat_offs_swt_sts
{
public:
  explicit Init_MachFunctionControl_asy_lat_offs_swt_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_undertak_on_off_sts asy_lat_offs_swt_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_lat_offs_swt_sts_type arg)
  {
    msg_.asy_lat_offs_swt_sts = std::move(arg);
    return Init_MachFunctionControl_asy_undertak_on_off_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_dece_remind
{
public:
  explicit Init_MachFunctionControl_asy_dece_remind(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_lat_offs_swt_sts asy_dece_remind(::deva_function_msgs::msg::MachFunctionControl::_asy_dece_remind_type arg)
  {
    msg_.asy_dece_remind = std::move(arg);
    return Init_MachFunctionControl_asy_lat_offs_swt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_drv_off_req_for_lgt_ctrl_drv_off_req
{
public:
  explicit Init_MachFunctionControl_ad4_drv_off_req_for_lgt_ctrl_drv_off_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_dece_remind ad4_drv_off_req_for_lgt_ctrl_drv_off_req(::deva_function_msgs::msg::MachFunctionControl::_ad4_drv_off_req_for_lgt_ctrl_drv_off_req_type arg)
  {
    msg_.ad4_drv_off_req_for_lgt_ctrl_drv_off_req = std::move(arg);
    return Init_MachFunctionControl_asy_dece_remind(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad_ctrl_mode_ad_ctrl_mode
{
public:
  explicit Init_MachFunctionControl_ad_ctrl_mode_ad_ctrl_mode(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_drv_off_req_for_lgt_ctrl_drv_off_req ad_ctrl_mode_ad_ctrl_mode(::deva_function_msgs::msg::MachFunctionControl::_ad_ctrl_mode_ad_ctrl_mode_type arg)
  {
    msg_.ad_ctrl_mode_ad_ctrl_mode = std::move(arg);
    return Init_MachFunctionControl_ad4_drv_off_req_for_lgt_ctrl_drv_off_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_win_open_req
{
public:
  explicit Init_MachFunctionControl_ad4_win_open_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad_ctrl_mode_ad_ctrl_mode ad4_win_open_req(::deva_function_msgs::msg::MachFunctionControl::_ad4_win_open_req_type arg)
  {
    msg_.ad4_win_open_req = std::move(arg);
    return Init_MachFunctionControl_ad_ctrl_mode_ad_ctrl_mode(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_warn_sts_for_e2e
{
public:
  explicit Init_MachFunctionControl_ad4_warn_sts_for_e2e(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_win_open_req ad4_warn_sts_for_e2e(::deva_function_msgs::msg::MachFunctionControl::_ad4_warn_sts_for_e2e_type arg)
  {
    msg_.ad4_warn_sts_for_e2e = std::move(arg);
    return Init_MachFunctionControl_ad4_win_open_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_unavl_sts_for_e2e
{
public:
  explicit Init_MachFunctionControl_ad4_unavl_sts_for_e2e(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_warn_sts_for_e2e ad4_unavl_sts_for_e2e(::deva_function_msgs::msg::MachFunctionControl::_ad4_unavl_sts_for_e2e_type arg)
  {
    msg_.ad4_unavl_sts_for_e2e = std::move(arg);
    return Init_MachFunctionControl_ad4_warn_sts_for_e2e(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_turn_indic_req_req
{
public:
  explicit Init_MachFunctionControl_ad4_turn_indic_req_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_unavl_sts_for_e2e ad4_turn_indic_req_req(::deva_function_msgs::msg::MachFunctionControl::_ad4_turn_indic_req_req_type arg)
  {
    msg_.ad4_turn_indic_req_req = std::move(arg);
    return Init_MachFunctionControl_ad4_unavl_sts_for_e2e(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_hwa_leading_point_center_x
{
public:
  explicit Init_MachFunctionControl_hwa_leading_point_center_x(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_turn_indic_req_req hwa_leading_point_center_x(::deva_function_msgs::msg::MachFunctionControl::_hwa_leading_point_center_x_type arg)
  {
    msg_.hwa_leading_point_center_x = std::move(arg);
    return Init_MachFunctionControl_ad4_turn_indic_req_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_hwa_leading_point_center_y
{
public:
  explicit Init_MachFunctionControl_hwa_leading_point_center_y(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_hwa_leading_point_center_x hwa_leading_point_center_y(::deva_function_msgs::msg::MachFunctionControl::_hwa_leading_point_center_y_type arg)
  {
    msg_.hwa_leading_point_center_y = std::move(arg);
    return Init_MachFunctionControl_hwa_leading_point_center_x(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_hwa_leading_point_valid
{
public:
  explicit Init_MachFunctionControl_hwa_leading_point_valid(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_hwa_leading_point_center_y hwa_leading_point_valid(::deva_function_msgs::msg::MachFunctionControl::_hwa_leading_point_valid_type arg)
  {
    msg_.hwa_leading_point_valid = std::move(arg);
    return Init_MachFunctionControl_hwa_leading_point_center_y(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad4_lane_chg_for_e2e
{
public:
  explicit Init_MachFunctionControl_ad4_lane_chg_for_e2e(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_hwa_leading_point_valid ad4_lane_chg_for_e2e(::deva_function_msgs::msg::MachFunctionControl::_ad4_lane_chg_for_e2e_type arg)
  {
    msg_.ad4_lane_chg_for_e2e = std::move(arg);
    return Init_MachFunctionControl_hwa_leading_point_valid(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_hmi_nop_cofm_of_lan_chag
{
public:
  explicit Init_MachFunctionControl_hmi_nop_cofm_of_lan_chag(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad4_lane_chg_for_e2e hmi_nop_cofm_of_lan_chag(::deva_function_msgs::msg::MachFunctionControl::_hmi_nop_cofm_of_lan_chag_type arg)
  {
    msg_.hmi_nop_cofm_of_lan_chag = std::move(arg);
    return Init_MachFunctionControl_ad4_lane_chg_for_e2e(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_disp_spd_set_for_lgt_ctrl
{
public:
  explicit Init_MachFunctionControl_disp_spd_set_for_lgt_ctrl(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_hmi_nop_cofm_of_lan_chag disp_spd_set_for_lgt_ctrl(::deva_function_msgs::msg::MachFunctionControl::_disp_spd_set_for_lgt_ctrl_type arg)
  {
    msg_.disp_spd_set_for_lgt_ctrl = std::move(arg);
    return Init_MachFunctionControl_hmi_nop_cofm_of_lan_chag(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_disp_tsi_info_for_lgt_ctrl
{
public:
  explicit Init_MachFunctionControl_disp_tsi_info_for_lgt_ctrl(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_disp_spd_set_for_lgt_ctrl disp_tsi_info_for_lgt_ctrl(::deva_function_msgs::msg::MachFunctionControl::_disp_tsi_info_for_lgt_ctrl_type arg)
  {
    msg_.disp_tsi_info_for_lgt_ctrl = std::move(arg);
    return Init_MachFunctionControl_disp_spd_set_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_cncl_warn_for_aut_drv
{
public:
  explicit Init_MachFunctionControl_cncl_warn_for_aut_drv(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_disp_tsi_info_for_lgt_ctrl cncl_warn_for_aut_drv(::deva_function_msgs::msg::MachFunctionControl::_cncl_warn_for_aut_drv_type arg)
  {
    msg_.cncl_warn_for_aut_drv = std::move(arg);
    return Init_MachFunctionControl_disp_tsi_info_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ad_theme_disp
{
public:
  explicit Init_MachFunctionControl_ad_theme_disp(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_cncl_warn_for_aut_drv ad_theme_disp(::deva_function_msgs::msg::MachFunctionControl::_ad_theme_disp_type arg)
  {
    msg_.ad_theme_disp = std::move(arg);
    return Init_MachFunctionControl_cncl_warn_for_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_stop_req_of_lgt_ctrl_for_prpsn
{
public:
  explicit Init_MachFunctionControl_stop_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ad_theme_disp stop_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::MachFunctionControl::_stop_req_of_lgt_ctrl_for_prpsn_type arg)
  {
    msg_.stop_req_of_lgt_ctrl_for_prpsn = std::move(arg);
    return Init_MachFunctionControl_ad_theme_disp(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_aut_lane_chg_swt_sts
{
public:
  explicit Init_MachFunctionControl_asy_aut_lane_chg_swt_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_stop_req_of_lgt_ctrl_for_prpsn asy_aut_lane_chg_swt_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_aut_lane_chg_swt_sts_type arg)
  {
    msg_.asy_aut_lane_chg_swt_sts = std::move(arg);
    return Init_MachFunctionControl_stop_req_of_lgt_ctrl_for_prpsn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_noa_avl_rmn
{
public:
  explicit Init_MachFunctionControl_asy_noa_avl_rmn(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_aut_lane_chg_swt_sts asy_noa_avl_rmn(::deva_function_msgs::msg::MachFunctionControl::_asy_noa_avl_rmn_type arg)
  {
    msg_.asy_noa_avl_rmn = std::move(arg);
    return Init_MachFunctionControl_asy_aut_lane_chg_swt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_noa_tar_spd_offs
{
public:
  explicit Init_MachFunctionControl_asy_noa_tar_spd_offs(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_noa_avl_rmn asy_noa_tar_spd_offs(::deva_function_msgs::msg::MachFunctionControl::_asy_noa_tar_spd_offs_type arg)
  {
    msg_.asy_noa_tar_spd_offs = std::move(arg);
    return Init_MachFunctionControl_asy_noa_avl_rmn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_turn_sts
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_turn_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_noa_tar_spd_offs asy_cnoa_turn_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_turn_sts_type arg)
  {
    msg_.asy_cnoa_turn_sts = std::move(arg);
    return Init_MachFunctionControl_asy_noa_tar_spd_offs(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_turn_fail_type
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_turn_fail_type(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_turn_sts asy_cnoa_turn_fail_type(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_turn_fail_type_type arg)
  {
    msg_.asy_cnoa_turn_fail_type = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_turn_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_takeover_warn_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_takeover_warn_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_turn_fail_type asy_cnoa_takeover_warn_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_takeover_warn_msg_type arg)
  {
    msg_.asy_cnoa_takeover_warn_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_turn_fail_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_lrng_swt_sts
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_lrng_swt_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_takeover_warn_msg asy_cnoa_lrng_swt_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_lrng_swt_sts_type arg)
  {
    msg_.asy_cnoa_lrng_swt_sts = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_takeover_warn_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_lrng_swt_on_off
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_lrng_swt_on_off(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_lrng_swt_sts asy_cnoa_lrng_swt_on_off(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_lrng_swt_on_off_type arg)
  {
    msg_.asy_cnoa_lrng_swt_on_off = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_lrng_swt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_lrng_prmpt_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_lrng_prmpt_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_lrng_swt_on_off asy_cnoa_lrng_prmpt_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_lrng_prmpt_msg_type arg)
  {
    msg_.asy_cnoa_lrng_prmpt_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_lrng_swt_on_off(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_sod_lane_chg_swt
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_sod_lane_chg_swt(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_lrng_prmpt_msg asy_cnoa_sod_lane_chg_swt(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_sod_lane_chg_swt_type arg)
  {
    msg_.asy_cnoa_sod_lane_chg_swt = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_lrng_prmpt_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_rmn_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_rmn_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_sod_lane_chg_swt asy_cnoa_crs_rmn_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_rmn_msg_type arg)
  {
    msg_.asy_cnoa_crs_rmn_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_sod_lane_chg_swt(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_offs_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_offs_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_rmn_msg asy_cnoa_crs_offs_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_offs_msg_type arg)
  {
    msg_.asy_cnoa_crs_offs_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_rmn_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_data_download_faild_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_data_download_faild_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_offs_msg asy_cnoa_data_download_faild_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_data_download_faild_msg_type arg)
  {
    msg_.asy_cnoa_data_download_faild_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_offs_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_swt_sts
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_swt_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_data_download_faild_msg asy_cnoa_crs_swt_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_swt_sts_type arg)
  {
    msg_.asy_cnoa_crs_swt_sts = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_data_download_faild_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_swt_on_off
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_swt_on_off(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_swt_sts asy_cnoa_crs_swt_on_off(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_swt_on_off_type arg)
  {
    msg_.asy_cnoa_crs_swt_on_off = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_swt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_sts_csd_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_sts_csd_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_swt_on_off asy_cnoa_crs_sts_csd_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_sts_csd_msg_type arg)
  {
    msg_.asy_cnoa_crs_sts_csd_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_swt_on_off(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_game_reason
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_game_reason(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_sts_csd_msg asy_cnoa_game_reason(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_game_reason_type arg)
  {
    msg_.asy_cnoa_game_reason = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_sts_csd_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_game_fail_type
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_game_fail_type(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_game_reason asy_cnoa_game_fail_type(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_game_fail_type_type arg)
  {
    msg_.asy_cnoa_game_fail_type = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_game_reason(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_sts
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_game_fail_type asy_cnoa_crs_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_sts_type arg)
  {
    msg_.asy_cnoa_crs_sts = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_game_fail_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_off_odddistan
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_off_odddistan(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_sts asy_cnoa_crs_off_odddistan(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_off_odddistan_type arg)
  {
    msg_.asy_cnoa_crs_off_odddistan = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_actv_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_actv_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_off_odddistan asy_cnoa_crs_actv_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_actv_msg_type arg)
  {
    msg_.asy_cnoa_crs_actv_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_off_odddistan(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_actv_msg asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg_type arg)
  {
    msg_.asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_actv_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_ind_ti_gap_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_ind_ti_gap_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg asy_cnoa_crs_ind_ti_gap_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_ind_ti_gap_msg_type arg)
  {
    msg_.asy_cnoa_crs_ind_ti_gap_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_lan_chg_msg_asy_cnoa_crs_lan_chg_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_finshd_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_finshd_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_ind_ti_gap_msg asy_cnoa_crs_finshd_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_finshd_msg_type arg)
  {
    msg_.asy_cnoa_crs_finshd_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_ind_ti_gap_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_finshd_msg asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg_type arg)
  {
    msg_.asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_finshd_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_cross_intsec_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_cross_intsec_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg asy_cnoa_crs_cross_intsec_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_cross_intsec_msg_type arg)
  {
    msg_.asy_cnoa_crs_cross_intsec_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_deactvd_msg_asy_cnoa_crs_deactvd_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_crs_actv_faild_msg
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_crs_actv_faild_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_cross_intsec_msg asy_cnoa_crs_actv_faild_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_crs_actv_faild_msg_type arg)
  {
    msg_.asy_cnoa_crs_actv_faild_msg = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_cross_intsec_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_cnoa_auto_lane_chg_style
{
public:
  explicit Init_MachFunctionControl_asy_cnoa_auto_lane_chg_style(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_crs_actv_faild_msg asy_cnoa_auto_lane_chg_style(::deva_function_msgs::msg::MachFunctionControl::_asy_cnoa_auto_lane_chg_style_type arg)
  {
    msg_.asy_cnoa_auto_lane_chg_style = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_crs_actv_faild_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_fast_lane_swt_sts
{
public:
  explicit Init_MachFunctionControl_asy_fast_lane_swt_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_cnoa_auto_lane_chg_style asy_fast_lane_swt_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_fast_lane_swt_sts_type arg)
  {
    msg_.asy_fast_lane_swt_sts = std::move(arg);
    return Init_MachFunctionControl_asy_cnoa_auto_lane_chg_style(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_noa_takeover_mesg
{
public:
  explicit Init_MachFunctionControl_asy_noa_takeover_mesg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_fast_lane_swt_sts asy_noa_takeover_mesg(::deva_function_msgs::msg::MachFunctionControl::_asy_noa_takeover_mesg_type arg)
  {
    msg_.asy_noa_takeover_mesg = std::move(arg);
    return Init_MachFunctionControl_asy_fast_lane_swt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_high_beam_flash_warn_rqrd
{
public:
  explicit Init_MachFunctionControl_asy_high_beam_flash_warn_rqrd(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_noa_takeover_mesg asy_high_beam_flash_warn_rqrd(::deva_function_msgs::msg::MachFunctionControl::_asy_high_beam_flash_warn_rqrd_type arg)
  {
    msg_.asy_high_beam_flash_warn_rqrd = std::move(arg);
    return Init_MachFunctionControl_asy_noa_takeover_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_noa_remind_mesg
{
public:
  explicit Init_MachFunctionControl_asy_noa_remind_mesg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_high_beam_flash_warn_rqrd asy_noa_remind_mesg(::deva_function_msgs::msg::MachFunctionControl::_asy_noa_remind_mesg_type arg)
  {
    msg_.asy_noa_remind_mesg = std::move(arg);
    return Init_MachFunctionControl_asy_high_beam_flash_warn_rqrd(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_noa_deactvd_reasn_mesg
{
public:
  explicit Init_MachFunctionControl_asy_noa_deactvd_reasn_mesg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_noa_remind_mesg asy_noa_deactvd_reasn_mesg(::deva_function_msgs::msg::MachFunctionControl::_asy_noa_deactvd_reasn_mesg_type arg)
  {
    msg_.asy_noa_deactvd_reasn_mesg = std::move(arg);
    return Init_MachFunctionControl_asy_noa_remind_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_strt_req_of_lgt_ctrl_for_prpsn
{
public:
  explicit Init_MachFunctionControl_strt_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_noa_deactvd_reasn_mesg strt_req_of_lgt_ctrl_for_prpsn(::deva_function_msgs::msg::MachFunctionControl::_strt_req_of_lgt_ctrl_for_prpsn_type arg)
  {
    msg_.strt_req_of_lgt_ctrl_for_prpsn = std::move(arg);
    return Init_MachFunctionControl_asy_noa_deactvd_reasn_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_steer_tq_addl_for_ema_steer_tq_addl_for_ema
{
public:
  explicit Init_MachFunctionControl_steer_tq_addl_for_ema_steer_tq_addl_for_ema(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_strt_req_of_lgt_ctrl_for_prpsn steer_tq_addl_for_ema_steer_tq_addl_for_ema(::deva_function_msgs::msg::MachFunctionControl::_steer_tq_addl_for_ema_steer_tq_addl_for_ema_type arg)
  {
    msg_.steer_tq_addl_for_ema_steer_tq_addl_for_ema = std::move(arg);
    return Init_MachFunctionControl_strt_req_of_lgt_ctrl_for_prpsn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_lgt_ctrl_take_over_req
{
public:
  explicit Init_MachFunctionControl_asy_lgt_ctrl_take_over_req(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_steer_tq_addl_for_ema_steer_tq_addl_for_ema asy_lgt_ctrl_take_over_req(::deva_function_msgs::msg::MachFunctionControl::_asy_lgt_ctrl_take_over_req_type arg)
  {
    msg_.asy_lgt_ctrl_take_over_req = std::move(arg);
    return Init_MachFunctionControl_steer_tq_addl_for_ema_steer_tq_addl_for_ema(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_ti_gap_set_for_lgt_ctrl
{
public:
  explicit Init_MachFunctionControl_ti_gap_set_for_lgt_ctrl(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_lgt_ctrl_take_over_req ti_gap_set_for_lgt_ctrl(::deva_function_msgs::msg::MachFunctionControl::_ti_gap_set_for_lgt_ctrl_type arg)
  {
    msg_.ti_gap_set_for_lgt_ctrl = std::move(arg);
    return Init_MachFunctionControl_asy_lgt_ctrl_take_over_req(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_lane_chg_aut_sts_for_asy_hi_way
{
public:
  explicit Init_MachFunctionControl_lane_chg_aut_sts_for_asy_hi_way(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_ti_gap_set_for_lgt_ctrl lane_chg_aut_sts_for_asy_hi_way(::deva_function_msgs::msg::MachFunctionControl::_lane_chg_aut_sts_for_asy_hi_way_type arg)
  {
    msg_.lane_chg_aut_sts_for_asy_hi_way = std::move(arg);
    return Init_MachFunctionControl_ti_gap_set_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_lane_chg_aut_info_for_asy_hi_way
{
public:
  explicit Init_MachFunctionControl_lane_chg_aut_info_for_asy_hi_way(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_lane_chg_aut_sts_for_asy_hi_way lane_chg_aut_info_for_asy_hi_way(::deva_function_msgs::msg::MachFunctionControl::_lane_chg_aut_info_for_asy_hi_way_type arg)
  {
    msg_.lane_chg_aut_info_for_asy_hi_way = std::move(arg);
    return Init_MachFunctionControl_lane_chg_aut_sts_for_asy_hi_way(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_noa_degrade_msg
{
public:
  explicit Init_MachFunctionControl_asy_noa_degrade_msg(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_lane_chg_aut_info_for_asy_hi_way asy_noa_degrade_msg(::deva_function_msgs::msg::MachFunctionControl::_asy_noa_degrade_msg_type arg)
  {
    msg_.asy_noa_degrade_msg = std::move(arg);
    return Init_MachFunctionControl_lane_chg_aut_info_for_asy_hi_way(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_lat_offst_sts
{
public:
  explicit Init_MachFunctionControl_asy_lat_offst_sts(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_noa_degrade_msg asy_lat_offst_sts(::deva_function_msgs::msg::MachFunctionControl::_asy_lat_offst_sts_type arg)
  {
    msg_.asy_lat_offst_sts = std::move(arg);
    return Init_MachFunctionControl_asy_noa_degrade_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_asy_aut_drvg_avl
{
public:
  explicit Init_MachFunctionControl_asy_aut_drvg_avl(::deva_function_msgs::msg::MachFunctionControl & msg)
  : msg_(msg)
  {}
  Init_MachFunctionControl_asy_lat_offst_sts asy_aut_drvg_avl(::deva_function_msgs::msg::MachFunctionControl::_asy_aut_drvg_avl_type arg)
  {
    msg_.asy_aut_drvg_avl = std::move(arg);
    return Init_MachFunctionControl_asy_lat_offst_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

class Init_MachFunctionControl_header
{
public:
  Init_MachFunctionControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachFunctionControl_asy_aut_drvg_avl header(::deva_function_msgs::msg::MachFunctionControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachFunctionControl_asy_aut_drvg_avl(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFunctionControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::MachFunctionControl>()
{
  return deva_function_msgs::msg::builder::Init_MachFunctionControl_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FUNCTION_CONTROL__BUILDER_HPP_
