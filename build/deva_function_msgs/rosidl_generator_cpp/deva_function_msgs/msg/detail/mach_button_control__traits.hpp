// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/MachButtonControl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/mach_button_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachButtonControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    out << "asy_a_lgt_sts_asy_a_lgt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_sts_asy_a_lgt_sts, out);
    out << ", ";
  }

  // member: asy_cnoa_crs_lat_offs_anima_sts
  {
    out << "asy_cnoa_crs_lat_offs_anima_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_lat_offs_anima_sts, out);
    out << ", ";
  }

  // member: drv_off_req_for_lgt_ctrl
  {
    out << "drv_off_req_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_req_for_lgt_ctrl, out);
    out << ", ";
  }

  // member: asy_eyes_off_warn_rqrd
  {
    out << "asy_eyes_off_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_eyes_off_warn_rqrd, out);
    out << ", ";
  }

  // member: asy_eyes_off_warn_rqrd_sound
  {
    out << "asy_eyes_off_warn_rqrd_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_eyes_off_warn_rqrd_sound, out);
    out << ", ";
  }

  // member: asy_first_ti_actvn
  {
    out << "asy_first_ti_actvn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_first_ti_actvn, out);
    out << ", ";
  }

  // member: asy_noa_actv_suggest_sound
  {
    out << "asy_noa_actv_suggest_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_actv_suggest_sound, out);
    out << ", ";
  }

  // member: asy_inform_for_drvr
  {
    out << "asy_inform_for_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_inform_for_drvr, out);
    out << ", ";
  }

  // member: asy_lat_deg_sts
  {
    out << "asy_lat_deg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_deg_sts, out);
    out << ", ";
  }

  // member: asy_inform_for_drvr_sound
  {
    out << "asy_inform_for_drvr_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_inform_for_drvr_sound, out);
    out << ", ";
  }

  // member: asy_noa_actv_suggest
  {
    out << "asy_noa_actv_suggest: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_actv_suggest, out);
    out << ", ";
  }

  // member: asy_noa_distan_msg
  {
    out << "asy_noa_distan_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_distan_msg, out);
    out << ", ";
  }

  // member: asy_noa_distan_msg_sound
  {
    out << "asy_noa_distan_msg_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_distan_msg_sound, out);
    out << ", ";
  }

  // member: asy_noa_sts
  {
    out << "asy_noa_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_sts, out);
    out << ", ";
  }

  // member: asy_steer_apply_rqrd_sound
  {
    out << "asy_steer_apply_rqrd_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_steer_apply_rqrd_sound, out);
    out << ", ";
  }

  // member: asy_aut_drvg_avl_sound
  {
    out << "asy_aut_drvg_avl_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drvg_avl_sound, out);
    out << ", ";
  }

  // member: asy_lan_chg_color_dsp
  {
    out << "asy_lan_chg_color_dsp: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_color_dsp, out);
    out << ", ";
  }

  // member: asy_lan_chg_mesg
  {
    out << "asy_lan_chg_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_mesg, out);
    out << ", ";
  }

  // member: asy_lan_chg_sod
  {
    out << "asy_lan_chg_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_sod, out);
    out << ", ";
  }

  // member: asy_aut_emgy_steer_actv
  {
    out << "asy_aut_emgy_steer_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_emgy_steer_actv, out);
    out << ", ";
  }

  // member: brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  {
    out << "brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv, out);
    out << ", ";
  }

  // member: cllsn_threat
  {
    out << "cllsn_threat: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsn_threat, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachButtonControl & msg,
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

  // member: asy_a_lgt_sts_asy_a_lgt_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_a_lgt_sts_asy_a_lgt_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_a_lgt_sts_asy_a_lgt_sts, out);
    out << "\n";
  }

  // member: asy_cnoa_crs_lat_offs_anima_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_cnoa_crs_lat_offs_anima_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_cnoa_crs_lat_offs_anima_sts, out);
    out << "\n";
  }

  // member: drv_off_req_for_lgt_ctrl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drv_off_req_for_lgt_ctrl: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_off_req_for_lgt_ctrl, out);
    out << "\n";
  }

  // member: asy_eyes_off_warn_rqrd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_eyes_off_warn_rqrd: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_eyes_off_warn_rqrd, out);
    out << "\n";
  }

  // member: asy_eyes_off_warn_rqrd_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_eyes_off_warn_rqrd_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_eyes_off_warn_rqrd_sound, out);
    out << "\n";
  }

  // member: asy_first_ti_actvn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_first_ti_actvn: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_first_ti_actvn, out);
    out << "\n";
  }

  // member: asy_noa_actv_suggest_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_actv_suggest_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_actv_suggest_sound, out);
    out << "\n";
  }

  // member: asy_inform_for_drvr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_inform_for_drvr: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_inform_for_drvr, out);
    out << "\n";
  }

  // member: asy_lat_deg_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lat_deg_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lat_deg_sts, out);
    out << "\n";
  }

  // member: asy_inform_for_drvr_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_inform_for_drvr_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_inform_for_drvr_sound, out);
    out << "\n";
  }

  // member: asy_noa_actv_suggest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_actv_suggest: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_actv_suggest, out);
    out << "\n";
  }

  // member: asy_noa_distan_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_distan_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_distan_msg, out);
    out << "\n";
  }

  // member: asy_noa_distan_msg_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_distan_msg_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_distan_msg_sound, out);
    out << "\n";
  }

  // member: asy_noa_sts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_noa_sts: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_noa_sts, out);
    out << "\n";
  }

  // member: asy_steer_apply_rqrd_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_steer_apply_rqrd_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_steer_apply_rqrd_sound, out);
    out << "\n";
  }

  // member: asy_aut_drvg_avl_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_aut_drvg_avl_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_drvg_avl_sound, out);
    out << "\n";
  }

  // member: asy_lan_chg_color_dsp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lan_chg_color_dsp: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_color_dsp, out);
    out << "\n";
  }

  // member: asy_lan_chg_mesg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lan_chg_mesg: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_mesg, out);
    out << "\n";
  }

  // member: asy_lan_chg_sod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_lan_chg_sod: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_lan_chg_sod, out);
    out << "\n";
  }

  // member: asy_aut_emgy_steer_actv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "asy_aut_emgy_steer_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.asy_aut_emgy_steer_actv, out);
    out << "\n";
  }

  // member: brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_hptc_warn_req_for_aut_drv_brk_hptc_warn_req_for_aut_drv, out);
    out << "\n";
  }

  // member: cllsn_threat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cllsn_threat: ";
    rosidl_generator_traits::value_to_yaml(msg.cllsn_threat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachButtonControl & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::MachButtonControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::MachButtonControl & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::MachButtonControl>()
{
  return "deva_function_msgs::msg::MachButtonControl";
}

template<>
inline const char * name<deva_function_msgs::msg::MachButtonControl>()
{
  return "deva_function_msgs/msg/MachButtonControl";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::MachButtonControl>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::MachButtonControl>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::MachButtonControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_BUTTON_CONTROL__TRAITS_HPP_
