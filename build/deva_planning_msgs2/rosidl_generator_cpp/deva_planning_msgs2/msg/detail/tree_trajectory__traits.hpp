// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_planning_msgs2:msg/TreeTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__TRAITS_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_planning_msgs2/msg/detail/tree_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory_points'
#include "deva_planning_msgs2/msg/detail/trajectory_point__traits.hpp"
// Member 'traj_score'
#include "deva_planning_msgs2/msg/detail/string2_double__traits.hpp"

namespace deva_planning_msgs2
{

namespace msg
{

inline void to_flow_style_yaml(
  const TreeTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: obs_id
  {
    out << "obs_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: trajectory_points
  {
    if (msg.trajectory_points.size() == 0) {
      out << "trajectory_points: []";
    } else {
      out << "trajectory_points: [";
      size_t pending_items = msg.trajectory_points.size();
      for (auto item : msg.trajectory_points) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traj_score
  {
    if (msg.traj_score.size() == 0) {
      out << "traj_score: []";
    } else {
      out << "traj_score: [";
      size_t pending_items = msg.traj_score.size();
      for (auto item : msg.traj_score) {
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
  const TreeTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obs_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obs_id: ";
    rosidl_generator_traits::value_to_yaml(msg.obs_id, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: trajectory_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory_points.size() == 0) {
      out << "trajectory_points: []\n";
    } else {
      out << "trajectory_points:\n";
      for (auto item : msg.trajectory_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: traj_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traj_score.size() == 0) {
      out << "traj_score: []\n";
    } else {
      out << "traj_score:\n";
      for (auto item : msg.traj_score) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TreeTrajectory & msg, bool use_flow_style = false)
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
  const deva_planning_msgs2::msg::TreeTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_planning_msgs2::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_planning_msgs2::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_planning_msgs2::msg::TreeTrajectory & msg)
{
  return deva_planning_msgs2::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_planning_msgs2::msg::TreeTrajectory>()
{
  return "deva_planning_msgs2::msg::TreeTrajectory";
}

template<>
inline const char * name<deva_planning_msgs2::msg::TreeTrajectory>()
{
  return "deva_planning_msgs2/msg/TreeTrajectory";
}

template<>
struct has_fixed_size<deva_planning_msgs2::msg::TreeTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_planning_msgs2::msg::TreeTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_planning_msgs2::msg::TreeTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__TREE_TRAJECTORY__TRAITS_HPP_
