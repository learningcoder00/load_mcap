// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/ParaSerApaMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/para_ser_apa_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParaSerApaMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: publish_timestamp
  {
    out << "publish_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_timestamp, out);
    out << ", ";
  }

  // member: apa_switch_setting_result
  {
    out << "apa_switch_setting_result: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_switch_setting_result, out);
    out << ", ";
  }

  // member: rpa_switch_setting_result
  {
    out << "rpa_switch_setting_result: ";
    rosidl_generator_traits::value_to_yaml(msg.rpa_switch_setting_result, out);
    out << ", ";
  }

  // member: summon_switch_setting_result
  {
    out << "summon_switch_setting_result: ";
    rosidl_generator_traits::value_to_yaml(msg.summon_switch_setting_result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParaSerApaMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: publish_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publish_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_timestamp, out);
    out << "\n";
  }

  // member: apa_switch_setting_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "apa_switch_setting_result: ";
    rosidl_generator_traits::value_to_yaml(msg.apa_switch_setting_result, out);
    out << "\n";
  }

  // member: rpa_switch_setting_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rpa_switch_setting_result: ";
    rosidl_generator_traits::value_to_yaml(msg.rpa_switch_setting_result, out);
    out << "\n";
  }

  // member: summon_switch_setting_result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "summon_switch_setting_result: ";
    rosidl_generator_traits::value_to_yaml(msg.summon_switch_setting_result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParaSerApaMsg & msg, bool use_flow_style = false)
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

}  // namespace deva_function_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_function_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_function_msgs::msg::ParaSerApaMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::ParaSerApaMsg & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::ParaSerApaMsg>()
{
  return "deva_function_msgs::msg::ParaSerApaMsg";
}

template<>
inline const char * name<deva_function_msgs::msg::ParaSerApaMsg>()
{
  return "deva_function_msgs/msg/ParaSerApaMsg";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::ParaSerApaMsg>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::ParaSerApaMsg>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_function_msgs::msg::ParaSerApaMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__PARA_SER_APA_MSG__TRAITS_HPP_
