// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProSplitList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_split_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SdProSplitList & msg,
  std::ostream & out)
{
  out << "{";
  // member: sub_path_id
  {
    out << "sub_path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_path_id, out);
    out << ", ";
  }

  // member: turn_angle
  {
    out << "turn_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_angle, out);
    out << ", ";
  }

  // member: right_of_way
  {
    out << "right_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.right_of_way, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SdProSplitList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sub_path_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sub_path_id: ";
    rosidl_generator_traits::value_to_yaml(msg.sub_path_id, out);
    out << "\n";
  }

  // member: turn_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "turn_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.turn_angle, out);
    out << "\n";
  }

  // member: right_of_way
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "right_of_way: ";
    rosidl_generator_traits::value_to_yaml(msg.right_of_way, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SdProSplitList & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::SdProSplitList & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::SdProSplitList & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::SdProSplitList>()
{
  return "deva_gaode_routing_msgs::msg::SdProSplitList";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::SdProSplitList>()
{
  return "deva_gaode_routing_msgs/msg/SdProSplitList";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::SdProSplitList>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::SdProSplitList>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::SdProSplitList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__TRAITS_HPP_
