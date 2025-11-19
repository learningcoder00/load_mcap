// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eAdbTrafficSign & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: traffic_sign_for_adb_adb_trk_info
  {
    out << "traffic_sign_for_adb_adb_trk_info: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_trk_info, out);
    out << ", ";
  }

  // member: traffic_sign_for_adb_adb_abs_dist
  {
    out << "traffic_sign_for_adb_adb_abs_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_abs_dist, out);
    out << ", ";
  }

  // member: traffic_sign_for_adb_adb_vert_ag_bot
  {
    out << "traffic_sign_for_adb_adb_vert_ag_bot: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_vert_ag_bot, out);
    out << ", ";
  }

  // member: traffic_sign_for_adb_adb_vert_ag_top
  {
    out << "traffic_sign_for_adb_adb_vert_ag_top: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_vert_ag_top, out);
    out << ", ";
  }

  // member: traffic_sign_for_adb_adb_hozl_ag_le
  {
    out << "traffic_sign_for_adb_adb_hozl_ag_le: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_hozl_ag_le, out);
    out << ", ";
  }

  // member: traffic_sign_for_adb_adb_hozl_ag_ri
  {
    out << "traffic_sign_for_adb_adb_hozl_ag_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_hozl_ag_ri, out);
    out << ", ";
  }

  // member: traffic_sign_for_adb_adb_detd_qly
  {
    out << "traffic_sign_for_adb_adb_detd_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_detd_qly, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eAdbTrafficSign & msg,
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

  // member: traffic_sign_for_adb_adb_trk_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_sign_for_adb_adb_trk_info: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_trk_info, out);
    out << "\n";
  }

  // member: traffic_sign_for_adb_adb_abs_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_sign_for_adb_adb_abs_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_abs_dist, out);
    out << "\n";
  }

  // member: traffic_sign_for_adb_adb_vert_ag_bot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_sign_for_adb_adb_vert_ag_bot: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_vert_ag_bot, out);
    out << "\n";
  }

  // member: traffic_sign_for_adb_adb_vert_ag_top
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_sign_for_adb_adb_vert_ag_top: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_vert_ag_top, out);
    out << "\n";
  }

  // member: traffic_sign_for_adb_adb_hozl_ag_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_sign_for_adb_adb_hozl_ag_le: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_hozl_ag_le, out);
    out << "\n";
  }

  // member: traffic_sign_for_adb_adb_hozl_ag_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_sign_for_adb_adb_hozl_ag_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_hozl_ag_ri, out);
    out << "\n";
  }

  // member: traffic_sign_for_adb_adb_detd_qly
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_sign_for_adb_adb_detd_qly: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_sign_for_adb_adb_detd_qly, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eAdbTrafficSign & msg, bool use_flow_style = false)
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

}  // namespace deva_perception_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_perception_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_perception_msgs::msg::E2eAdbTrafficSign & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::E2eAdbTrafficSign & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::E2eAdbTrafficSign>()
{
  return "deva_perception_msgs::msg::E2eAdbTrafficSign";
}

template<>
inline const char * name<deva_perception_msgs::msg::E2eAdbTrafficSign>()
{
  return "deva_perception_msgs/msg/E2eAdbTrafficSign";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::E2eAdbTrafficSign>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::E2eAdbTrafficSign>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::E2eAdbTrafficSign>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__TRAITS_HPP_
