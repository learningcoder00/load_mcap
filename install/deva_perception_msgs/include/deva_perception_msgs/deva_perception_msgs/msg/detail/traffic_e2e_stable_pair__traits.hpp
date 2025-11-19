// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/TrafficE2eStablePair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/traffic_e2e_stable_pair__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficE2eStablePair & msg,
  std::ostream & out)
{
  out << "{";
  // member: traffic_e2e_result
  {
    out << "traffic_e2e_result: ";
    rosidl_generator_traits::value_to_yaml(msg.traffic_e2e_result, out);
    out << ", ";
  }

  // member: is_stable
  {
    out << "is_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stable, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficE2eStablePair & msg,
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

  // member: is_stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_stable: ";
    rosidl_generator_traits::value_to_yaml(msg.is_stable, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficE2eStablePair & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::TrafficE2eStablePair & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::TrafficE2eStablePair & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::TrafficE2eStablePair>()
{
  return "deva_perception_msgs::msg::TrafficE2eStablePair";
}

template<>
inline const char * name<deva_perception_msgs::msg::TrafficE2eStablePair>()
{
  return "deva_perception_msgs/msg/TrafficE2eStablePair";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::TrafficE2eStablePair>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::TrafficE2eStablePair>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::TrafficE2eStablePair>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__TRAITS_HPP_
