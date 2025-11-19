// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/E2eTrafficDetPair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/e2e_traffic_det_pair__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'e2e_decode_result'
#include "deva_perception_msgs/msg/detail/e2e_decode_result__traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eTrafficDetPair & msg,
  std::ostream & out)
{
  out << "{";
  // member: traffic_e2e_result
  {
    out << "traffic_e2e_result: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_e2e_result, out);
    out << ", ";
  }

  // member: e2e_decode_result
  {
    out << "e2e_decode_result: ";
    to_flow_style_yaml(msg.e2e_decode_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eTrafficDetPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: traffic_e2e_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_e2e_result: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_e2e_result, out);
    out << "\n";
  }

  // member: e2e_decode_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e2e_decode_result:\n";
    to_block_style_yaml(msg.e2e_decode_result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eTrafficDetPair & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::E2eTrafficDetPair & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::E2eTrafficDetPair & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::E2eTrafficDetPair>()
{
  return "deva_perception_msgs::msg::E2eTrafficDetPair";
}

template<>
inline const char * name<deva_perception_msgs::msg::E2eTrafficDetPair>()
{
  return "deva_perception_msgs/msg/E2eTrafficDetPair";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::E2eTrafficDetPair>
  : std::integral_constant<bool, has_fixed_size<deva_perception_msgs::msg::E2eDecodeResult>::value> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::E2eTrafficDetPair>
  : std::integral_constant<bool, has_bounded_size<deva_perception_msgs::msg::E2eDecodeResult>::value> {};

template<>
struct is_message<deva_perception_msgs::msg::E2eTrafficDetPair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__TRAITS_HPP_
