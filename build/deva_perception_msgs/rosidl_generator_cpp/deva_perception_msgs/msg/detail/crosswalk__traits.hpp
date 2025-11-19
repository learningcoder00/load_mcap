// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/Crosswalk.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/crosswalk__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Crosswalk & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: vertices
  {
    if (msg.vertices.size() == 0) {
      out << "vertices: []";
    } else {
      out << "vertices: [";
      size_t pending_items = msg.vertices.size();
      for (auto item : msg.vertices) {
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
  const Crosswalk & msg,
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

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices.size() == 0) {
      out << "vertices: []\n";
    } else {
      out << "vertices:\n";
      for (auto item : msg.vertices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Crosswalk & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::Crosswalk & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::Crosswalk & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::Crosswalk>()
{
  return "deva_perception_msgs::msg::Crosswalk";
}

template<>
inline const char * name<deva_perception_msgs::msg::Crosswalk>()
{
  return "deva_perception_msgs/msg/Crosswalk";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::Crosswalk>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::Crosswalk>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::Crosswalk>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CROSSWALK__TRAITS_HPP_
