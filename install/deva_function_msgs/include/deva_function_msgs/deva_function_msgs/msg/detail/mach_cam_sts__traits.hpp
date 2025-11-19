// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/MachCamSts.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/mach_cam_sts__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MachCamSts & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: trip_reset_sync_req_msg_asdm
  {
    out << "trip_reset_sync_req_msg_asdm: ";
    rosidl_generator_traits::value_to_yaml(msg.trip_reset_sync_req_msg_asdm, out);
    out << ", ";
  }

  // member: cam_sts_cam_cam_heatr_actv
  {
    out << "cam_sts_cam_cam_heatr_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_cam_heatr_actv, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd1
  {
    out << "cam_sts_cam_frnt_blkd1: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd1, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd2
  {
    out << "cam_sts_cam_frnt_blkd2: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd2, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd3
  {
    out << "cam_sts_cam_frnt_blkd3: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd3, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd4
  {
    out << "cam_sts_cam_frnt_blkd4: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd4, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd5
  {
    out << "cam_sts_cam_frnt_blkd5: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd5, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd6
  {
    out << "cam_sts_cam_frnt_blkd6: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd6, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd7
  {
    out << "cam_sts_cam_frnt_blkd7: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd7, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_blkd8
  {
    out << "cam_sts_cam_frnt_blkd8: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd8, out);
    out << ", ";
  }

  // member: cam_sts_cam_frnt_cal_not_strtd
  {
    out << "cam_sts_cam_frnt_cal_not_strtd: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_cal_not_strtd, out);
    out << ", ";
  }

  // member: cam_sts_cam_miss_com
  {
    out << "cam_sts_cam_miss_com: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_miss_com, out);
    out << ", ";
  }

  // member: cam_status0
  {
    out << "cam_status0: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_status0, out);
    out << ", ";
  }

  // member: hmi_re_cam_sts0
  {
    out << "hmi_re_cam_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_re_cam_sts0, out);
    out << ", ";
  }

  // member: frnt_side_cam_le_sts0
  {
    out << "frnt_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_le_sts0, out);
    out << ", ";
  }

  // member: frnt_side_cam_ri_sts0
  {
    out << "frnt_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_ri_sts0, out);
    out << ", ";
  }

  // member: re_side_cam_le_sts0
  {
    out << "re_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_le_sts0, out);
    out << ", ";
  }

  // member: re_side_cam_ri_sts0
  {
    out << "re_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_ri_sts0, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MachCamSts & msg,
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

  // member: trip_reset_sync_req_msg_asdm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trip_reset_sync_req_msg_asdm: ";
    rosidl_generator_traits::value_to_yaml(msg.trip_reset_sync_req_msg_asdm, out);
    out << "\n";
  }

  // member: cam_sts_cam_cam_heatr_actv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_cam_heatr_actv: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_cam_heatr_actv, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd1: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd1, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd2: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd2, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd3: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd3, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd4: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd4, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd5: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd5, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd6: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd6, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd7
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd7: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd7, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_blkd8
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_blkd8: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_blkd8, out);
    out << "\n";
  }

  // member: cam_sts_cam_frnt_cal_not_strtd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_frnt_cal_not_strtd: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_frnt_cal_not_strtd, out);
    out << "\n";
  }

  // member: cam_sts_cam_miss_com
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_sts_cam_miss_com: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_sts_cam_miss_com, out);
    out << "\n";
  }

  // member: cam_status0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cam_status0: ";
    rosidl_generator_traits::value_to_yaml(msg.cam_status0, out);
    out << "\n";
  }

  // member: hmi_re_cam_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hmi_re_cam_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.hmi_re_cam_sts0, out);
    out << "\n";
  }

  // member: frnt_side_cam_le_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frnt_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_le_sts0, out);
    out << "\n";
  }

  // member: frnt_side_cam_ri_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frnt_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.frnt_side_cam_ri_sts0, out);
    out << "\n";
  }

  // member: re_side_cam_le_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "re_side_cam_le_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_le_sts0, out);
    out << "\n";
  }

  // member: re_side_cam_ri_sts0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "re_side_cam_ri_sts0: ";
    rosidl_generator_traits::value_to_yaml(msg.re_side_cam_ri_sts0, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MachCamSts & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::MachCamSts & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::MachCamSts & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::MachCamSts>()
{
  return "deva_function_msgs::msg::MachCamSts";
}

template<>
inline const char * name<deva_function_msgs::msg::MachCamSts>()
{
  return "deva_function_msgs/msg/MachCamSts";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::MachCamSts>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::MachCamSts>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::MachCamSts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CAM_STS__TRAITS_HPP_
