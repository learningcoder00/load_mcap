// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/SteeringArrow.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/steering_arrow__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center_point'
// Member 'vertices'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SteeringArrow & msg,
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

  // member: center_point
  {
    out << "center_point: ";
    to_flow_style_yaml(msg.center_point, out);
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
    out << ", ";
  }

  // member: center_line_id
  {
    out << "center_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.center_line_id, out);
    out << ", ";
  }

  // member: property
  {
    out << "property: ";
    rosidl_generator_traits::value_to_yaml(msg.property, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SteeringArrow & msg,
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

  // member: center_point
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_point:\n";
    to_block_style_yaml(msg.center_point, out, indentation + 2);
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

  // member: center_line_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center_line_id: ";
    rosidl_generator_traits::value_to_yaml(msg.center_line_id, out);
    out << "\n";
  }

  // member: property
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "property: ";
    rosidl_generator_traits::value_to_yaml(msg.property, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SteeringArrow & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::SteeringArrow & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::SteeringArrow & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::SteeringArrow>()
{
  return "deva_perception_msgs::msg::SteeringArrow";
}

template<>
inline const char * name<deva_perception_msgs::msg::SteeringArrow>()
{
  return "deva_perception_msgs/msg/SteeringArrow";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::SteeringArrow>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::SteeringArrow>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::SteeringArrow>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STEERING_ARROW__TRAITS_HPP_
