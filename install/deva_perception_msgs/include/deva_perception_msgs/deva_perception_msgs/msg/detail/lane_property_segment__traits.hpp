// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/LanePropertySegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/lane_property_segment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'segment_points'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LanePropertySegment & msg,
  std::ostream & out)
{
  out << "{";
  // member: num_segment
  {
    out << "num_segment: ";
    rosidl_generator_traits::value_to_yaml(msg.num_segment, out);
    out << ", ";
  }

  // member: segment_properties
  {
    if (msg.segment_properties.size() == 0) {
      out << "segment_properties: []";
    } else {
      out << "segment_properties: [";
      size_t pending_items = msg.segment_properties.size();
      for (auto item : msg.segment_properties) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: segment_points
  {
    if (msg.segment_points.size() == 0) {
      out << "segment_points: []";
    } else {
      out << "segment_points: [";
      size_t pending_items = msg.segment_points.size();
      for (auto item : msg.segment_points) {
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
  const LanePropertySegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num_segment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_segment: ";
    rosidl_generator_traits::value_to_yaml(msg.num_segment, out);
    out << "\n";
  }

  // member: segment_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.segment_properties.size() == 0) {
      out << "segment_properties: []\n";
    } else {
      out << "segment_properties:\n";
      for (auto item : msg.segment_properties) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: segment_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.segment_points.size() == 0) {
      out << "segment_points: []\n";
    } else {
      out << "segment_points:\n";
      for (auto item : msg.segment_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LanePropertySegment & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::LanePropertySegment & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::LanePropertySegment & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::LanePropertySegment>()
{
  return "deva_perception_msgs::msg::LanePropertySegment";
}

template<>
inline const char * name<deva_perception_msgs::msg::LanePropertySegment>()
{
  return "deva_perception_msgs/msg/LanePropertySegment";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::LanePropertySegment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::LanePropertySegment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_perception_msgs::msg::LanePropertySegment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_PROPERTY_SEGMENT__TRAITS_HPP_
