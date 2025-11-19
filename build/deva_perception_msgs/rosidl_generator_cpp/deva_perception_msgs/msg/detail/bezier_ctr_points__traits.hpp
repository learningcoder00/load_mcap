// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/BezierCtrPoints.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/bezier_ctr_points__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bezier_ctr_points'
#include "deva_perception_msgs/msg/detail/bezier_ctr_point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BezierCtrPoints & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: bezier_ctr_points
  {
    if (msg.bezier_ctr_points.size() == 0) {
      out << "bezier_ctr_points: []";
    } else {
      out << "bezier_ctr_points: [";
      size_t pending_items = msg.bezier_ctr_points.size();
      for (auto item : msg.bezier_ctr_points) {
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
  const BezierCtrPoints & msg,
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

  // member: bezier_ctr_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bezier_ctr_points.size() == 0) {
      out << "bezier_ctr_points: []\n";
    } else {
      out << "bezier_ctr_points:\n";
      for (auto item : msg.bezier_ctr_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BezierCtrPoints & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::BezierCtrPoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::BezierCtrPoints & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::BezierCtrPoints>()
{
  return "deva_perception_msgs::msg::BezierCtrPoints";
}

template<>
inline const char * name<deva_perception_msgs::msg::BezierCtrPoints>()
{
  return "deva_perception_msgs/msg/BezierCtrPoints";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::BezierCtrPoints>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::BezierCtrPoints>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::BezierCtrPoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__BEZIER_CTR_POINTS__TRAITS_HPP_
