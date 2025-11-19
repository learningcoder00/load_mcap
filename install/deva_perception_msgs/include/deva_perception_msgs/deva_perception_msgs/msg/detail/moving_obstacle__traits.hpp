// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/MovingObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/moving_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__traits.hpp"
// Member 'velocity'
// Member 'velocity_var'
#include "geometry_msgs/msg/detail/twist__traits.hpp"
// Member 'acceleration'
// Member 'acceleration_var'
#include "geometry_msgs/msg/detail/accel__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MovingObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: obstacle
  {
    out << "obstacle: ";
    to_flow_style_yaml(msg.obstacle, out);
    out << ", ";
  }

  // member: moving_obstacle_type
  {
    out << "moving_obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_obstacle_type, out);
    out << ", ";
  }

  // member: det_type
  {
    out << "det_type: ";
    rosidl_generator_traits::value_to_yaml(msg.det_type, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    to_flow_style_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: velocity_var
  {
    out << "velocity_var: ";
    to_flow_style_yaml(msg.velocity_var, out);
    out << ", ";
  }

  // member: acceleration_var
  {
    out << "acceleration_var: ";
    to_flow_style_yaml(msg.acceleration_var, out);
    out << ", ";
  }

  // member: is_predict
  {
    out << "is_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.is_predict, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MovingObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obstacle:\n";
    to_block_style_yaml(msg.obstacle, out, indentation + 2);
  }

  // member: moving_obstacle_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "moving_obstacle_type: ";
    rosidl_generator_traits::value_to_yaml(msg.moving_obstacle_type, out);
    out << "\n";
  }

  // member: det_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "det_type: ";
    rosidl_generator_traits::value_to_yaml(msg.det_type, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration:\n";
    to_block_style_yaml(msg.acceleration, out, indentation + 2);
  }

  // member: velocity_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_var:\n";
    to_block_style_yaml(msg.velocity_var, out, indentation + 2);
  }

  // member: acceleration_var
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_var:\n";
    to_block_style_yaml(msg.acceleration_var, out, indentation + 2);
  }

  // member: is_predict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.is_predict, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MovingObstacle & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::MovingObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::MovingObstacle & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::MovingObstacle>()
{
  return "deva_perception_msgs::msg::MovingObstacle";
}

template<>
inline const char * name<deva_perception_msgs::msg::MovingObstacle>()
{
  return "deva_perception_msgs/msg/MovingObstacle";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::MovingObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::MovingObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::MovingObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__TRAITS_HPP_
