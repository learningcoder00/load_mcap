// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/EnergyConsumeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/energy_consume_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'energy_end_point'
#include "deva_navi_msgs/msg/detail/energy_end_point_proto__traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EnergyConsumeProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: energy_end_flag
  {
    out << "energy_end_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_end_flag, out);
    out << ", ";
  }

  // member: energy_end_point
  {
    out << "energy_end_point: ";
    to_flow_style_yaml(msg.energy_end_point, out);
    out << ", ";
  }

  // member: vehiclechargeleft
  {
    if (msg.vehiclechargeleft.size() == 0) {
      out << "vehiclechargeleft: []";
    } else {
      out << "vehiclechargeleft: [";
      size_t pending_items = msg.vehiclechargeleft.size();
      for (auto item : msg.vehiclechargeleft) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const EnergyConsumeProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: energy_end_flag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_end_flag: ";
    rosidl_generator_traits::value_to_yaml(msg.energy_end_flag, out);
    out << "\n";
  }

  // member: energy_end_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "energy_end_point:\n";
    to_block_style_yaml(msg.energy_end_point, out, indentation + 2);
  }

  // member: vehiclechargeleft
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vehiclechargeleft.size() == 0) {
      out << "vehiclechargeleft: []\n";
    } else {
      out << "vehiclechargeleft:\n";
      for (auto item : msg.vehiclechargeleft) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EnergyConsumeProto & msg, bool use_flow_style = false)
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

}  // namespace deva_navi_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_navi_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_navi_msgs::msg::EnergyConsumeProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::EnergyConsumeProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::EnergyConsumeProto>()
{
  return "deva_navi_msgs::msg::EnergyConsumeProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::EnergyConsumeProto>()
{
  return "deva_navi_msgs/msg/EnergyConsumeProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::EnergyConsumeProto>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::EnergyConsumeProto>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_navi_msgs::msg::EnergyConsumeProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_CONSUME_PROTO__TRAITS_HPP_
