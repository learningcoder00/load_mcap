// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/planning_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'sensor_time'
#include "deva_planning_msgs2/msg/detail/sensor_time__traits.hpp"
// Member 'trajectories'
#include "deva_planning_msgs2/msg/detail/planning_trajectory__traits.hpp"
// Member 'fail_reason'
#include "deva_planning_msgs2/msg/detail/planning_fail__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const PlanningResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor_time
  {
    out << "sensor_time: ";
    to_flow_style_yaml(msg.sensor_time, out);
    out << ", ";
  }

  // member: trajectories
  {
    if (msg.trajectories.size() == 0) {
      out << "trajectories: []";
    } else {
      out << "trajectories: [";
      size_t pending_items = msg.trajectories.size();
      for (auto item : msg.trajectories) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pilot_planning_state
  {
    out << "pilot_planning_state: ";
    rosidl_generator_traits::value_to_yaml(msg.pilot_planning_state, out);
    out << ", ";
  }

  // member: planning_work_state
  {
    out << "planning_work_state: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_work_state, out);
    out << ", ";
  }

  // member: function_state_available
  {
    out << "function_state_available: ";
    rosidl_generator_traits::value_to_yaml(msg.function_state_available, out);
    out << ", ";
  }

  // member: fail_reason
  {
    if (msg.fail_reason.size() == 0) {
      out << "fail_reason: []";
    } else {
      out << "fail_reason: [";
      size_t pending_items = msg.fail_reason.size();
      for (auto item : msg.fail_reason) {
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
  const PlanningResult & msg,
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

  // member: sensor_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_time:\n";
    to_block_style_yaml(msg.sensor_time, out, indentation + 2);
  }

  // member: trajectories
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectories.size() == 0) {
      out << "trajectories: []\n";
    } else {
      out << "trajectories:\n";
      for (auto item : msg.trajectories) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pilot_planning_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pilot_planning_state: ";
    rosidl_generator_traits::value_to_yaml(msg.pilot_planning_state, out);
    out << "\n";
  }

  // member: planning_work_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planning_work_state: ";
    rosidl_generator_traits::value_to_yaml(msg.planning_work_state, out);
    out << "\n";
  }

  // member: function_state_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function_state_available: ";
    rosidl_generator_traits::value_to_yaml(msg.function_state_available, out);
    out << "\n";
  }

  // member: fail_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fail_reason.size() == 0) {
      out << "fail_reason: []\n";
    } else {
      out << "fail_reason:\n";
      for (auto item : msg.fail_reason) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PlanningResult & msg, bool use_flow_style = false)
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

}  // namespace deva_planning_msgs2

namespace rosidl_generator_traits
{

[[deprecated("use deva_planning_msgs2::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_planning_msgs2::msg::PlanningResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::PlanningResult & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::PlanningResult>()
{
  return "deva_planning_msgs2::msg::PlanningResult";
}

template<>
inline const char * name<deva_planning_msgs2::msg::PlanningResult>()
{
  return "deva_planning_msgs2/msg/PlanningResult";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::PlanningResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::PlanningResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::PlanningResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__TRAITS_HPP_
