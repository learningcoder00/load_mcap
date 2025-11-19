// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_control_msgs:msg/WheelSpeed.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__TRAITS_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_control_msgs/msg/detail/wheel_speed__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_control_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelSpeed & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: loop_count_start
  {
    out << "loop_count_start: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_count_start, out);
    out << ", ";
  }

  // member: loop_count_end
  {
    out << "loop_count_end: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_count_end, out);
    out << ", ";
  }

  // member: wheelspeed_rc_valid
  {
    if (msg.wheelspeed_rc_valid.size() == 0) {
      out << "wheelspeed_rc_valid: []";
    } else {
      out << "wheelspeed_rc_valid: [";
      size_t pending_items = msg.wheelspeed_rc_valid.size();
      for (auto item : msg.wheelspeed_rc_valid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheelspeed_rc
  {
    if (msg.wheelspeed_rc.size() == 0) {
      out << "wheelspeed_rc: []";
    } else {
      out << "wheelspeed_rc: [";
      size_t pending_items = msg.wheelspeed_rc.size();
      for (auto item : msg.wheelspeed_rc) {
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
  const WheelSpeed & msg,
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

  // member: loop_count_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_count_start: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_count_start, out);
    out << "\n";
  }

  // member: loop_count_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop_count_end: ";
    rosidl_generator_traits::value_to_yaml(msg.loop_count_end, out);
    out << "\n";
  }

  // member: wheelspeed_rc_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelspeed_rc_valid.size() == 0) {
      out << "wheelspeed_rc_valid: []\n";
    } else {
      out << "wheelspeed_rc_valid:\n";
      for (auto item : msg.wheelspeed_rc_valid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheelspeed_rc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheelspeed_rc.size() == 0) {
      out << "wheelspeed_rc: []\n";
    } else {
      out << "wheelspeed_rc:\n";
      for (auto item : msg.wheelspeed_rc) {
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

inline std::string to_yaml(const WheelSpeed & msg, bool use_flow_style = false)
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
  const deva_control_msgs::msg::WheelSpeed & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_control_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_control_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_control_msgs::msg::WheelSpeed & msg)
{
  return deva_control_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_control_msgs::msg::WheelSpeed>()
{
  return "deva_control_msgs::msg::WheelSpeed";
}

template<>
inline const char * name<deva_control_msgs::msg::WheelSpeed>()
{
  return "deva_control_msgs/msg/WheelSpeed";
}

template<>
struct has_fixed_size<deva_control_msgs::msg::WheelSpeed>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_control_msgs::msg::WheelSpeed>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_control_msgs::msg::WheelSpeed>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__WHEEL_SPEED__TRAITS_HPP_
