// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLocParallelRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/web_loc_parallel_road__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WebLocParallelRoad & msg,
  std::ostream & out)
{
  out << "{";
  // member: formway
  {
    out << "formway: ";
    rosidl_generator_traits::value_to_yaml(msg.formway, out);
    out << ", ";
  }

  // member: road_type
  {
    out << "road_type: ";
    rosidl_generator_traits::value_to_yaml(msg.road_type, out);
    out << ", ";
  }

  // member: road_id
  {
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WebLocParallelRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: formway
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "formway: ";
    rosidl_generator_traits::value_to_yaml(msg.formway, out);
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

  // member: road_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "road_id: ";
    rosidl_generator_traits::value_to_yaml(msg.road_id, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WebLocParallelRoad & msg, bool use_flow_style = false)
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

}  // namespace deva_gaode_routing_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_gaode_routing_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_gaode_routing_msgs::msg::WebLocParallelRoad & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::WebLocParallelRoad & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::WebLocParallelRoad>()
{
  return "deva_gaode_routing_msgs::msg::WebLocParallelRoad";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::WebLocParallelRoad>()
{
  return "deva_gaode_routing_msgs/msg/WebLocParallelRoad";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::WebLocParallelRoad>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::WebLocParallelRoad>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::WebLocParallelRoad>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LOC_PARALLEL_ROAD__TRAITS_HPP_
