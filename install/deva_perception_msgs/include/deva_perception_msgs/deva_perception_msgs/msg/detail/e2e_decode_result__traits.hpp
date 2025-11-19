// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_perception_msgs:msg/E2eDecodeResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_RESULT__TRAITS_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_perception_msgs/msg/detail/e2e_decode_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_perception_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const E2eDecodeResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: pred_category
  {
    out << "pred_category: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_category, out);
    out << ", ";
  }

  // member: pred_score
  {
    out << "pred_score: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_score, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const E2eDecodeResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pred_category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pred_category: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_category, out);
    out << "\n";
  }

  // member: pred_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pred_score: ";
    rosidl_generator_traits::value_to_yaml(msg.pred_score, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const E2eDecodeResult & msg, bool use_flow_style = false)
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
  const deva_perception_msgs::msg::E2eDecodeResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_perception_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_perception_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_perception_msgs::msg::E2eDecodeResult & msg)
{
  return deva_perception_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_perception_msgs::msg::E2eDecodeResult>()
{
  return "deva_perception_msgs::msg::E2eDecodeResult";
}

template<>
inline const char * name<deva_perception_msgs::msg::E2eDecodeResult>()
{
  return "deva_perception_msgs/msg/E2eDecodeResult";
}

template<>
struct has_fixed_size<deva_perception_msgs::msg::E2eDecodeResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_perception_msgs::msg::E2eDecodeResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_perception_msgs::msg::E2eDecodeResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_RESULT__TRAITS_HPP_
