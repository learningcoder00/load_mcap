// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_ads_msgs:msg/AdsInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__TRAITS_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_ads_msgs/msg/detail/ads_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_ads_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AdsInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AdsInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AdsInfo & msg, bool use_flow_style = false)
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

}  // namespace deva_ads_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_ads_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_ads_msgs::msg::AdsInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_ads_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_ads_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_ads_msgs::msg::AdsInfo & msg)
{
  return deva_ads_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_ads_msgs::msg::AdsInfo>()
{
  return "deva_ads_msgs::msg::AdsInfo";
}

template<>
inline const char * name<deva_ads_msgs::msg::AdsInfo>()
{
  return "deva_ads_msgs/msg/AdsInfo";
}

template<>
struct has_fixed_size<deva_ads_msgs::msg::AdsInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_ads_msgs::msg::AdsInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_ads_msgs::msg::AdsInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_INFO__TRAITS_HPP_
