// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs:msg/PlanningCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_COMMAND__TRAITS_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs/msg/detail/planning_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_planning_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: cruise_speed
  {
    out << "cruise_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_speed, out);
    out << ", ";
  }

  // member: park_slot_id
  {
    out << "park_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.park_slot_id, out);
    out << ", ";
  }

  // member: park_out_direction
  {
    out << "park_out_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.park_out_direction, out);
    out << ", ";
  }

  // member: lane_width
  {
    if (msg.lane_width.size() == 0) {
      out << "lane_width: []";
    } else {
      out << "lane_width: [";
      size_t pending_items = msg.lane_width.size();
      for (auto item : msg.lane_width) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: function
  {
    out << "function: ";
    rosidl_generator_traits::value_to_yaml(msg.function, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PlanningCommand & msg,
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

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: cruise_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cruise_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.cruise_speed, out);
    out << "\n";
  }

  // member: park_slot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_slot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.park_slot_id, out);
    out << "\n";
  }

  // member: park_out_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "park_out_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.park_out_direction, out);
    out << "\n";
  }

  // member: lane_width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lane_width.size() == 0) {
      out << "lane_width: []\n";
    } else {
      out << "lane_width:\n";
      for (auto item : msg.lane_width) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function: ";
    rosidl_generator_traits::value_to_yaml(msg.function, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningCommand & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs::msg::PlanningCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs::msg::PlanningCommand & msg)
{
  return deva_planning_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs::msg::PlanningCommand>()
{
  return "deva_planning_msgs::msg::PlanningCommand";
}

template<>
inline const char * name<deva_planning_msgs::msg::PlanningCommand>()
{
  return "deva_planning_msgs/msg/PlanningCommand";
}

template<>
struct has_fixed_size<deva_planning_msgs::msg::PlanningCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs::msg::PlanningCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs::msg::PlanningCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_COMMAND__TRAITS_HPP_
