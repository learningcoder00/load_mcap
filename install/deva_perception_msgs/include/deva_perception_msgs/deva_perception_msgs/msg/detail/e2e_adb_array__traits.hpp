// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/E2eAdbArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/e2e_adb_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'e2e_adb_veh_obj'
#include "deva_perception_msgs/msg/detail/e2e_adb__traits.hpp"
// Member 'e2e_adb_traffic_sign'
#include "deva_perception_msgs/msg/detail/e2e_adb_traffic_sign__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eAdbArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: pre_crash_front_data_closing_velocity
  {
    out << "pre_crash_front_data_closing_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_closing_velocity, out);
    out << ", ";
  }

  // member: pre_crash_front_data_object_class
  {
    out << "pre_crash_front_data_object_class: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_object_class, out);
    out << ", ";
  }

  // member: pre_crash_front_data_overlap
  {
    out << "pre_crash_front_data_overlap: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_overlap, out);
    out << ", ";
  }

  // member: pre_crash_front_data_time_to_impact
  {
    out << "pre_crash_front_data_time_to_impact: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_time_to_impact, out);
    out << ", ";
  }

  // member: lit_area
  {
    out << "lit_area: ";
    rosidl_generator_traits::value_to_yaml(msg.lit_area, out);
    out << ", ";
  }

  // member: camera_sts_for_ahbc
  {
    out << "camera_sts_for_ahbc: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_sts_for_ahbc, out);
    out << ", ";
  }

  // member: too_many_cars
  {
    out << "too_many_cars: ";
    rosidl_generator_traits::value_to_yaml(msg.too_many_cars, out);
    out << ", ";
  }

  // member: e2e_adb_veh_obj
  {
    if (msg.e2e_adb_veh_obj.size() == 0) {
      out << "e2e_adb_veh_obj: []";
    } else {
      out << "e2e_adb_veh_obj: [";
      size_t pending_items = msg.e2e_adb_veh_obj.size();
      for (auto item : msg.e2e_adb_veh_obj) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: e2e_adb_traffic_sign
  {
    if (msg.e2e_adb_traffic_sign.size() == 0) {
      out << "e2e_adb_traffic_sign: []";
    } else {
      out << "e2e_adb_traffic_sign: [";
      size_t pending_items = msg.e2e_adb_traffic_sign.size();
      for (auto item : msg.e2e_adb_traffic_sign) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eAdbArray & msg,
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

  // member: pre_crash_front_data_closing_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_crash_front_data_closing_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_closing_velocity, out);
    out << "\n";
  }

  // member: pre_crash_front_data_object_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_crash_front_data_object_class: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_object_class, out);
    out << "\n";
  }

  // member: pre_crash_front_data_overlap
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_crash_front_data_overlap: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_overlap, out);
    out << "\n";
  }

  // member: pre_crash_front_data_time_to_impact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pre_crash_front_data_time_to_impact: ";
    rosidl_generator_traits::value_to_yaml(msg.pre_crash_front_data_time_to_impact, out);
    out << "\n";
  }

  // member: lit_area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lit_area: ";
    rosidl_generator_traits::value_to_yaml(msg.lit_area, out);
    out << "\n";
  }

  // member: camera_sts_for_ahbc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera_sts_for_ahbc: ";
    rosidl_generator_traits::value_to_yaml(msg.camera_sts_for_ahbc, out);
    out << "\n";
  }

  // member: too_many_cars
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "too_many_cars: ";
    rosidl_generator_traits::value_to_yaml(msg.too_many_cars, out);
    out << "\n";
  }

  // member: e2e_adb_veh_obj
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.e2e_adb_veh_obj.size() == 0) {
      out << "e2e_adb_veh_obj: []\n";
    } else {
      out << "e2e_adb_veh_obj:\n";
      for (auto item : msg.e2e_adb_veh_obj) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: e2e_adb_traffic_sign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.e2e_adb_traffic_sign.size() == 0) {
      out << "e2e_adb_traffic_sign: []\n";
    } else {
      out << "e2e_adb_traffic_sign:\n";
      for (auto item : msg.e2e_adb_traffic_sign) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eAdbArray & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::E2eAdbArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::E2eAdbArray & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::E2eAdbArray>()
{
  return "deva_perception_msgs::msg::E2eAdbArray";
}

template<>
inline const char * name<deva_perception_msgs::msg::E2eAdbArray>()
{
  return "deva_perception_msgs/msg/E2eAdbArray";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::E2eAdbArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::E2eAdbArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::E2eAdbArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_ARRAY__TRAITS_HPP_
