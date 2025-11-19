// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/VehicleReportPedal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/vehicle_report_pedal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleReportPedal & msg,
  std::ostream & out)
{
  out << "{";
  // member: acc_pedal_pos
  {
    out << "acc_pedal_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_pedal_pos, out);
    out << ", ";
  }

  // member: brk_pedal_pos
  {
    out << "brk_pedal_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_pedal_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleReportPedal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acc_pedal_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_pedal_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_pedal_pos, out);
    out << "\n";
  }

  // member: brk_pedal_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brk_pedal_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.brk_pedal_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleReportPedal & msg, bool use_flow_style = false)
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

}  // namespace deva_control_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_control_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_control_msgs::msg::VehicleReportPedal & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::VehicleReportPedal & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::VehicleReportPedal>()
{
  return "deva_control_msgs::msg::VehicleReportPedal";
}

template<>
inline const char * name<deva_control_msgs::msg::VehicleReportPedal>()
{
  return "deva_control_msgs/msg/VehicleReportPedal";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::VehicleReportPedal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::VehicleReportPedal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_control_msgs::msg::VehicleReportPedal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_PEDAL__TRAITS_HPP_
