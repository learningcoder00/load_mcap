// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/MachButtonControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/mach_button_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_MachButtonControl_cllsn_threat
{
public:
  explicit Init_MachButtonControl_cllsn_threat(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::MachButtonControl cllsn_threat(::deva_function_msgs::msg::MachButtonControl::_cllsn_threat_type arg)
  {
    msg_.cllsn_threat = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
{
public:
  explicit Init_MachButtonControl_brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_cllsn_threat brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv(::deva_function_msgs::msg::MachButtonControl::_brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv_type arg)
  {
    msg_.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv = std::move(arg);
    return Init_MachButtonControl_cllsn_threat(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_aut_emgy_steer_actv
{
public:
  explicit Init_MachButtonControl_asy_aut_emgy_steer_actv(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv asy_aut_emgy_steer_actv(::deva_function_msgs::msg::MachButtonControl::_asy_aut_emgy_steer_actv_type arg)
  {
    msg_.asy_aut_emgy_steer_actv = std::move(arg);
    return Init_MachButtonControl_brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_lan_chg_sod
{
public:
  explicit Init_MachButtonControl_asy_lan_chg_sod(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_aut_emgy_steer_actv asy_lan_chg_sod(::deva_function_msgs::msg::MachButtonControl::_asy_lan_chg_sod_type arg)
  {
    msg_.asy_lan_chg_sod = std::move(arg);
    return Init_MachButtonControl_asy_aut_emgy_steer_actv(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_lan_chg_mesg
{
public:
  explicit Init_MachButtonControl_asy_lan_chg_mesg(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_lan_chg_sod asy_lan_chg_mesg(::deva_function_msgs::msg::MachButtonControl::_asy_lan_chg_mesg_type arg)
  {
    msg_.asy_lan_chg_mesg = std::move(arg);
    return Init_MachButtonControl_asy_lan_chg_sod(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_lan_chg_color_dsp
{
public:
  explicit Init_MachButtonControl_asy_lan_chg_color_dsp(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_lan_chg_mesg asy_lan_chg_color_dsp(::deva_function_msgs::msg::MachButtonControl::_asy_lan_chg_color_dsp_type arg)
  {
    msg_.asy_lan_chg_color_dsp = std::move(arg);
    return Init_MachButtonControl_asy_lan_chg_mesg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_aut_drvg_avl_sound
{
public:
  explicit Init_MachButtonControl_asy_aut_drvg_avl_sound(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_lan_chg_color_dsp asy_aut_drvg_avl_sound(::deva_function_msgs::msg::MachButtonControl::_asy_aut_drvg_avl_sound_type arg)
  {
    msg_.asy_aut_drvg_avl_sound = std::move(arg);
    return Init_MachButtonControl_asy_lan_chg_color_dsp(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_steer_apply_rqrd_sound
{
public:
  explicit Init_MachButtonControl_asy_steer_apply_rqrd_sound(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_aut_drvg_avl_sound asy_steer_apply_rqrd_sound(::deva_function_msgs::msg::MachButtonControl::_asy_steer_apply_rqrd_sound_type arg)
  {
    msg_.asy_steer_apply_rqrd_sound = std::move(arg);
    return Init_MachButtonControl_asy_aut_drvg_avl_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_noa_sts
{
public:
  explicit Init_MachButtonControl_asy_noa_sts(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_steer_apply_rqrd_sound asy_noa_sts(::deva_function_msgs::msg::MachButtonControl::_asy_noa_sts_type arg)
  {
    msg_.asy_noa_sts = std::move(arg);
    return Init_MachButtonControl_asy_steer_apply_rqrd_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_noa_distan_msg_sound
{
public:
  explicit Init_MachButtonControl_asy_noa_distan_msg_sound(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_noa_sts asy_noa_distan_msg_sound(::deva_function_msgs::msg::MachButtonControl::_asy_noa_distan_msg_sound_type arg)
  {
    msg_.asy_noa_distan_msg_sound = std::move(arg);
    return Init_MachButtonControl_asy_noa_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_noa_distan_msg
{
public:
  explicit Init_MachButtonControl_asy_noa_distan_msg(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_noa_distan_msg_sound asy_noa_distan_msg(::deva_function_msgs::msg::MachButtonControl::_asy_noa_distan_msg_type arg)
  {
    msg_.asy_noa_distan_msg = std::move(arg);
    return Init_MachButtonControl_asy_noa_distan_msg_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_noa_actv_suggest
{
public:
  explicit Init_MachButtonControl_asy_noa_actv_suggest(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_noa_distan_msg asy_noa_actv_suggest(::deva_function_msgs::msg::MachButtonControl::_asy_noa_actv_suggest_type arg)
  {
    msg_.asy_noa_actv_suggest = std::move(arg);
    return Init_MachButtonControl_asy_noa_distan_msg(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_inform_for_drvr_sound
{
public:
  explicit Init_MachButtonControl_asy_inform_for_drvr_sound(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_noa_actv_suggest asy_inform_for_drvr_sound(::deva_function_msgs::msg::MachButtonControl::_asy_inform_for_drvr_sound_type arg)
  {
    msg_.asy_inform_for_drvr_sound = std::move(arg);
    return Init_MachButtonControl_asy_noa_actv_suggest(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_lat_deg_sts
{
public:
  explicit Init_MachButtonControl_asy_lat_deg_sts(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_inform_for_drvr_sound asy_lat_deg_sts(::deva_function_msgs::msg::MachButtonControl::_asy_lat_deg_sts_type arg)
  {
    msg_.asy_lat_deg_sts = std::move(arg);
    return Init_MachButtonControl_asy_inform_for_drvr_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_inform_for_drvr
{
public:
  explicit Init_MachButtonControl_asy_inform_for_drvr(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_lat_deg_sts asy_inform_for_drvr(::deva_function_msgs::msg::MachButtonControl::_asy_inform_for_drvr_type arg)
  {
    msg_.asy_inform_for_drvr = std::move(arg);
    return Init_MachButtonControl_asy_lat_deg_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_noa_actv_suggest_sound
{
public:
  explicit Init_MachButtonControl_asy_noa_actv_suggest_sound(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_inform_for_drvr asy_noa_actv_suggest_sound(::deva_function_msgs::msg::MachButtonControl::_asy_noa_actv_suggest_sound_type arg)
  {
    msg_.asy_noa_actv_suggest_sound = std::move(arg);
    return Init_MachButtonControl_asy_inform_for_drvr(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_first_ti_actvn
{
public:
  explicit Init_MachButtonControl_asy_first_ti_actvn(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_noa_actv_suggest_sound asy_first_ti_actvn(::deva_function_msgs::msg::MachButtonControl::_asy_first_ti_actvn_type arg)
  {
    msg_.asy_first_ti_actvn = std::move(arg);
    return Init_MachButtonControl_asy_noa_actv_suggest_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_eyes_off_warn_rqrd_sound
{
public:
  explicit Init_MachButtonControl_asy_eyes_off_warn_rqrd_sound(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_first_ti_actvn asy_eyes_off_warn_rqrd_sound(::deva_function_msgs::msg::MachButtonControl::_asy_eyes_off_warn_rqrd_sound_type arg)
  {
    msg_.asy_eyes_off_warn_rqrd_sound = std::move(arg);
    return Init_MachButtonControl_asy_first_ti_actvn(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_eyes_off_warn_rqrd
{
public:
  explicit Init_MachButtonControl_asy_eyes_off_warn_rqrd(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_eyes_off_warn_rqrd_sound asy_eyes_off_warn_rqrd(::deva_function_msgs::msg::MachButtonControl::_asy_eyes_off_warn_rqrd_type arg)
  {
    msg_.asy_eyes_off_warn_rqrd = std::move(arg);
    return Init_MachButtonControl_asy_eyes_off_warn_rqrd_sound(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_drv_off_req_for_lgt_ctrl
{
public:
  explicit Init_MachButtonControl_drv_off_req_for_lgt_ctrl(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_eyes_off_warn_rqrd drv_off_req_for_lgt_ctrl(::deva_function_msgs::msg::MachButtonControl::_drv_off_req_for_lgt_ctrl_type arg)
  {
    msg_.drv_off_req_for_lgt_ctrl = std::move(arg);
    return Init_MachButtonControl_asy_eyes_off_warn_rqrd(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_cnoa_crs_lat_offs_anima_sts
{
public:
  explicit Init_MachButtonControl_asy_cnoa_crs_lat_offs_anima_sts(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_drv_off_req_for_lgt_ctrl asy_cnoa_crs_lat_offs_anima_sts(::deva_function_msgs::msg::MachButtonControl::_asy_cnoa_crs_lat_offs_anima_sts_type arg)
  {
    msg_.asy_cnoa_crs_lat_offs_anima_sts = std::move(arg);
    return Init_MachButtonControl_drv_off_req_for_lgt_ctrl(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_asy_a_lgt_sts_asy_a_lgt_sts
{
public:
  explicit Init_MachButtonControl_asy_a_lgt_sts_asy_a_lgt_sts(::deva_function_msgs::msg::MachButtonControl & msg)
  : msg_(msg)
  {}
  Init_MachButtonControl_asy_cnoa_crs_lat_offs_anima_sts asy_a_lgt_sts_asy_a_lgt_sts(::deva_function_msgs::msg::MachButtonControl::_asy_a_lgt_sts_asy_a_lgt_sts_type arg)
  {
    msg_.asy_a_lgt_sts_asy_a_lgt_sts = std::move(arg);
    return Init_MachButtonControl_asy_cnoa_crs_lat_offs_anima_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

class Init_MachButtonControl_header
{
public:
  Init_MachButtonControl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachButtonControl_asy_a_lgt_sts_asy_a_lgt_sts header(::deva_function_msgs::msg::MachButtonControl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachButtonControl_asy_a_lgt_sts_asy_a_lgt_sts(msg_);
  }

private:
  ::deva_function_msgs::msg::MachButtonControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::MachButtonControl>()
{
  return deva_function_msgs::msg::builder::Init_MachButtonControl_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__BUILDER_HPP_
