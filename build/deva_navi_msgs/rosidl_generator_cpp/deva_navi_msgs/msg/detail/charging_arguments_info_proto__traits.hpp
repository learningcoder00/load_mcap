// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_navi_msgs:msg/ChargingArgumentsInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__TRAITS_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_navi_msgs/msg/detail/charging_arguments_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_navi_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargingArgumentsInfoProto & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: min_arrival_percent
  {
    out << "min_arrival_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.min_arrival_percent, out);
    out << ", ";
  }

  // member: power
  {
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: amperage
  {
    out << "amperage: ";
    rosidl_generator_traits::value_to_yaml(msg.amperage, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargingArgumentsInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: min_arrival_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_arrival_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.min_arrival_percent, out);
    out << "\n";
  }

  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    rosidl_generator_traits::value_to_yaml(msg.power, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: amperage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "amperage: ";
    rosidl_generator_traits::value_to_yaml(msg.amperage, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargingArgumentsInfoProto & msg, bool use_flow_style = false)
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
  const deva_navi_msgs::msg::ChargingArgumentsInfoProto & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_navi_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_navi_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_navi_msgs::msg::ChargingArgumentsInfoProto & msg)
{
  return deva_navi_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_navi_msgs::msg::ChargingArgumentsInfoProto>()
{
  return "deva_navi_msgs::msg::ChargingArgumentsInfoProto";
}

template<>
inline const char * name<deva_navi_msgs::msg::ChargingArgumentsInfoProto>()
{
  return "deva_navi_msgs/msg/ChargingArgumentsInfoProto";
}

template<>
struct has_fixed_size<deva_navi_msgs::msg::ChargingArgumentsInfoProto>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_navi_msgs::msg::ChargingArgumentsInfoProto>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_navi_msgs::msg::ChargingArgumentsInfoProto>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__CHARGING_ARGUMENTS_INFO_PROTO__TRAITS_HPP_
