// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_map_msgs:msg/EgoTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__TRAITS_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_map_msgs/msg/detail/ego_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
// Member 'left_boundary'
// Member 'right_boundary'
#include "deva_map_msgs/msg/detail/ego_trajectory_point__traits.hpp"

namespace deva_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EgoTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory
  {
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []";
    } else {
      out << "trajectory: [";
      size_t pending_items = msg.trajectory.size();
      for (auto item : msg.trajectory) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: left_boundary
  {
    if (msg.left_boundary.size() == 0) {
      out << "left_boundary: []";
    } else {
      out << "left_boundary: [";
      size_t pending_items = msg.left_boundary.size();
      for (auto item : msg.left_boundary) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: right_boundary
  {
    if (msg.right_boundary.size() == 0) {
      out << "right_boundary: []";
    } else {
      out << "right_boundary: [";
      size_t pending_items = msg.right_boundary.size();
      for (auto item : msg.right_boundary) {
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
  const EgoTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []\n";
    } else {
      out << "trajectory:\n";
      for (auto item : msg.trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: left_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.left_boundary.size() == 0) {
      out << "left_boundary: []\n";
    } else {
      out << "left_boundary:\n";
      for (auto item : msg.left_boundary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: right_boundary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.right_boundary.size() == 0) {
      out << "right_boundary: []\n";
    } else {
      out << "right_boundary:\n";
      for (auto item : msg.right_boundary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EgoTrajectory & msg, bool use_flow_style = false)
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

}  // namespace deva_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_map_msgs::msg::EgoTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_map_msgs::msg::EgoTrajectory & msg)
{
  return deva_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_map_msgs::msg::EgoTrajectory>()
{
  return "deva_map_msgs::msg::EgoTrajectory";
}

template<>
inline const char * name<deva_map_msgs::msg::EgoTrajectory>()
{
  return "deva_map_msgs/msg/EgoTrajectory";
}

template<>
struct has_fixed_size<deva_map_msgs::msg::EgoTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_map_msgs::msg::EgoTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_map_msgs::msg::EgoTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__TRAITS_HPP_
