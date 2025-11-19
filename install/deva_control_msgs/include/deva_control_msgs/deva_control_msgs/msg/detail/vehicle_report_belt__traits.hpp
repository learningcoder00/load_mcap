// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/VehicleReportBelt.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/vehicle_report_belt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleReportBelt & msg,
  std::ostream & out)
{
  out << "{";
  // member: drv_belt
  {
    out << "drv_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_belt, out);
    out << ", ";
  }

  // member: pass_belt
  {
    out << "pass_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_belt, out);
    out << ", ";
  }

  // member: rl_belt
  {
    out << "rl_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_belt, out);
    out << ", ";
  }

  // member: rm_belt
  {
    out << "rm_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_belt, out);
    out << ", ";
  }

  // member: rr_belt
  {
    out << "rr_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_belt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleReportBelt & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drv_belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drv_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.drv_belt, out);
    out << "\n";
  }

  // member: pass_belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pass_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.pass_belt, out);
    out << "\n";
  }

  // member: rl_belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rl_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.rl_belt, out);
    out << "\n";
  }

  // member: rm_belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rm_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.rm_belt, out);
    out << "\n";
  }

  // member: rr_belt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rr_belt: ";
    rosidl_generator_traits::value_to_yaml(msg.rr_belt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleReportBelt & msg, bool use_flow_style = false)
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
  const deva_control_msgs::msg::VehicleReportBelt & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::VehicleReportBelt & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::VehicleReportBelt>()
{
  return "deva_control_msgs::msg::VehicleReportBelt";
}

template<>
inline const char * name<deva_control_msgs::msg::VehicleReportBelt>()
{
  return "deva_control_msgs/msg/VehicleReportBelt";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::VehicleReportBelt>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::VehicleReportBelt>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_control_msgs::msg::VehicleReportBelt>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_REPORT_BELT__TRAITS_HPP_
