// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/AccHeadingSteeringStats.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'acc_steering_stats'
// Member 'heading_steering_stats'
#include "deva_mdriver_msgs/msg/detail/mean_variance__traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AccHeadingSteeringStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: acc_steering_stats
  {
    if (msg.acc_steering_stats.size() == 0) {
      out << "acc_steering_stats: []";
    } else {
      out << "acc_steering_stats: [";
      size_t pending_items = msg.acc_steering_stats.size();
      for (auto item : msg.acc_steering_stats) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading_steering_stats
  {
    if (msg.heading_steering_stats.size() == 0) {
      out << "heading_steering_stats: []";
    } else {
      out << "heading_steering_stats: [";
      size_t pending_items = msg.heading_steering_stats.size();
      for (auto item : msg.heading_steering_stats) {
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
  const AccHeadingSteeringStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acc_steering_stats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_steering_stats.size() == 0) {
      out << "acc_steering_stats: []\n";
    } else {
      out << "acc_steering_stats:\n";
      for (auto item : msg.acc_steering_stats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: heading_steering_stats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.heading_steering_stats.size() == 0) {
      out << "heading_steering_stats: []\n";
    } else {
      out << "heading_steering_stats:\n";
      for (auto item : msg.heading_steering_stats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AccHeadingSteeringStats & msg, bool use_flow_style = false)
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

}  // namespace deva_mdriver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_mdriver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_mdriver_msgs::msg::AccHeadingSteeringStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::AccHeadingSteeringStats & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::AccHeadingSteeringStats>()
{
  return "deva_mdriver_msgs::msg::AccHeadingSteeringStats";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::AccHeadingSteeringStats>()
{
  return "deva_mdriver_msgs/msg/AccHeadingSteeringStats";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::AccHeadingSteeringStats>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::AccHeadingSteeringStats>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_mdriver_msgs::msg::AccHeadingSteeringStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__TRAITS_HPP_
