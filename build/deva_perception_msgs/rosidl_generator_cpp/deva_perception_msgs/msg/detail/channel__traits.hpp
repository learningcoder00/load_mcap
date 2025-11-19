// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/channel__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'dimensions'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'bbox2d'
#include "deva_common_msgs/msg/detail/bounding_box2d__traits.hpp"
// Member 'extra_info'
#include "deva_perception_msgs/msg/detail/extra_info__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Channel & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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

  // member: score
  {
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << ", ";
  }

  // member: last_observation_depth
  {
    out << "last_observation_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.last_observation_depth, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: bbox2d
  {
    out << "bbox2d: ";
    to_flow_style_yaml(msg.bbox2d, out);
    out << ", ";
  }

  // member: extra_info
  {
    if (msg.extra_info.size() == 0) {
      out << "extra_info: []";
    } else {
      out << "extra_info: [";
      size_t pending_items = msg.extra_info.size();
      for (auto item : msg.extra_info) {
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
  const Channel & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
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

  // member: score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "score: ";
    rosidl_generator_traits::value_to_yaml(msg.score, out);
    out << "\n";
  }

  // member: last_observation_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_observation_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.last_observation_depth, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: bbox2d
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox2d:\n";
    to_block_style_yaml(msg.bbox2d, out, indentation + 2);
  }

  // member: extra_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.extra_info.size() == 0) {
      out << "extra_info: []\n";
    } else {
      out << "extra_info:\n";
      for (auto item : msg.extra_info) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Channel & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Channel & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Channel & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Channel>()
{
  return "deva_perception_msgs::msg::Channel";
}

template<>
inline const char * name<deva_perception_msgs::msg::Channel>()
{
  return "deva_perception_msgs/msg/Channel";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Channel>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Channel>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::Channel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CHANNEL__TRAITS_HPP_
