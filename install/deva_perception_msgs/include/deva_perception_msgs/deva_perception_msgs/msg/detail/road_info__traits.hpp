// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/RoadInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/road_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RoadInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_traffic_light
  {
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << ", ";
  }

  // member: road_type
  {
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << ", ";
  }

  // member: road_class
  {
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RoadInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_traffic_light
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_traffic_light: ";
    rosidl_generator_traits::value_to_yaml(msg.has_traffic_light, out);
    out << "\n";
  }

  // member: road_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << "\n";
  }

  // member: road_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_class: ";
    rosidl_generator_traits::value_to_yaml(msg.road_class, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RoadInfo & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::RoadInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::RoadInfo & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::RoadInfo>()
{
  return "deva_perception_msgs::msg::RoadInfo";
}

template<>
inline const char * name<deva_perception_msgs::msg::RoadInfo>()
{
  return "deva_perception_msgs/msg/RoadInfo";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::RoadInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::RoadInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::RoadInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ROAD_INFO__TRAITS_HPP_
