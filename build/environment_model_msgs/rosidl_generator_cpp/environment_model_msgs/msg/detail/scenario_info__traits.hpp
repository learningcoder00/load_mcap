// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from environment_model_msgs:msg/ScenarioInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__TRAITS_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "environment_model_msgs/msg/detail/scenario_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace environment_model_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScenarioInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: scenario
  {
    out << "scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScenarioInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: scenario
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scenario: ";
    rosidl_generator_traits::value_to_yaml(msg.scenario, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScenarioInfo & msg, bool use_flow_style = false)
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

}  // namespace environment_model_msgs

namespace rosidl_generator_traits
{

[[deprecated("use environment_model_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const environment_model_msgs::msg::ScenarioInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  environment_model_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use environment_model_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const environment_model_msgs::msg::ScenarioInfo & msg)
{
  return environment_model_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<environment_model_msgs::msg::ScenarioInfo>()
{
  return "environment_model_msgs::msg::ScenarioInfo";
}

template<>
inline const char * name<environment_model_msgs::msg::ScenarioInfo>()
{
  return "environment_model_msgs/msg/ScenarioInfo";
}

template<>
struct has_fixed_size<environment_model_msgs::msg::ScenarioInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<environment_model_msgs::msg::ScenarioInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<environment_model_msgs::msg::ScenarioInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__SCENARIO_INFO__TRAITS_HPP_
