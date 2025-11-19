// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/E2eAdb.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/e2e_adb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eAdb & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: eh_obj_for_adb_abs_dist
  {
    out << "eh_obj_for_adb_abs_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.eh_obj_for_adb_abs_dist, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_classn
  {
    out << "veh_obj_for_adb_classn: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_classn, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_hozl_ag_le
  {
    out << "veh_obj_for_adb_hozl_ag_le: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_hozl_ag_le, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_hozl_ag_ri
  {
    out << "veh_obj_for_adb_hozl_ag_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_hozl_ag_ri, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_obj_dir
  {
    out << "veh_obj_for_adb_obj_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_obj_dir, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_obj_hozl_ag_spd_le
  {
    out << "veh_obj_for_adb_obj_hozl_ag_spd_le: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_obj_hozl_ag_spd_le, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_obj_hozl_ag_spd_ri
  {
    out << "veh_obj_for_adb_obj_hozl_ag_spd_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_obj_hozl_ag_spd_ri, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_trk_info
  {
    out << "veh_obj_for_adb_trk_info: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_trk_info, out);
    out << ", ";
  }

  // member: veh_obj_for_adb_vert_ag
  {
    out << "veh_obj_for_adb_vert_ag: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_vert_ag, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eAdb & msg,
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

  // member: eh_obj_for_adb_abs_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eh_obj_for_adb_abs_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.eh_obj_for_adb_abs_dist, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_classn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_classn: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_classn, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_hozl_ag_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_hozl_ag_le: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_hozl_ag_le, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_hozl_ag_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_hozl_ag_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_hozl_ag_ri, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_obj_dir
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_obj_dir: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_obj_dir, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_obj_hozl_ag_spd_le
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_obj_hozl_ag_spd_le: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_obj_hozl_ag_spd_le, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_obj_hozl_ag_spd_ri
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_obj_hozl_ag_spd_ri: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_obj_hozl_ag_spd_ri, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_trk_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_trk_info: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_trk_info, out);
    out << "\n";
  }

  // member: veh_obj_for_adb_vert_ag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "veh_obj_for_adb_vert_ag: ";
    rosidl_generator_traits::value_to_yaml(msg.veh_obj_for_adb_vert_ag, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eAdb & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::E2eAdb & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::E2eAdb & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::E2eAdb>()
{
  return "deva_perception_msgs::msg::E2eAdb";
}

template<>
inline const char * name<deva_perception_msgs::msg::E2eAdb>()
{
  return "deva_perception_msgs/msg/E2eAdb";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::E2eAdb>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::E2eAdb>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::E2eAdb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__TRAITS_HPP_
