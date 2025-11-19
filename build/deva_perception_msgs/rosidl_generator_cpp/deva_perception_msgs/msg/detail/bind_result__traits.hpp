// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/BindResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/bind_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'result'
#include "deva_perception_msgs/msg/detail/perception_result__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BindResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: with_bev_info
  {
    out << "with_bev_info: ";
    rosidl_generator_traits::value_to_yaml(msg.with_bev_info, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: dimensions
  {
    out << "dimensions: ";
    to_flow_style_yaml(msg.dimensions, out);
    out << ", ";
  }

  // member: bind_type
  {
    out << "bind_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bind_type, out);
    out << ", ";
  }

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: vertical_distance
  {
    out << "vertical_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_distance, out);
    out << ", ";
  }

  // member: left_lane_id
  {
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << ", ";
  }

  // member: right_lane_id
  {
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << ", ";
  }

  // member: left_lane_distance
  {
    out << "left_lane_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_distance, out);
    out << ", ";
  }

  // member: right_lane_distance
  {
    out << "right_lane_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BindResult & msg,
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

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: with_bev_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "with_bev_info: ";
    rosidl_generator_traits::value_to_yaml(msg.with_bev_info, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: dimensions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dimensions:\n";
    to_block_style_yaml(msg.dimensions, out, indentation + 2);
  }

  // member: bind_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bind_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bind_type, out);
    out << "\n";
  }

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: vertical_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vertical_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.vertical_distance, out);
    out << "\n";
  }

  // member: left_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_id, out);
    out << "\n";
  }

  // member: right_lane_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_id: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_id, out);
    out << "\n";
  }

  // member: left_lane_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "left_lane_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.left_lane_distance, out);
    out << "\n";
  }

  // member: right_lane_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_lane_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.right_lane_distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BindResult & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::BindResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::BindResult & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::BindResult>()
{
  return "deva_perception_msgs::msg::BindResult";
}

template<>
inline const char * name<deva_perception_msgs::msg::BindResult>()
{
  return "deva_perception_msgs/msg/BindResult";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::BindResult>
  : std::integral_constant<bool, has_fixed_size<deva_perception_msgs::msg::PerceptionResult>::value && has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::BindResult>
  : std::integral_constant<bool, has_bounded_size<deva_perception_msgs::msg::PerceptionResult>::value && has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::BindResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BIND_RESULT__TRAITS_HPP_
