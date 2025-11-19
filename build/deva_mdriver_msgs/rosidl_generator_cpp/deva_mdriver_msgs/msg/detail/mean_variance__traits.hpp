// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_mdriver_msgs:msg/MeanVariance.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__TRAITS_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_mdriver_msgs/msg/detail/mean_variance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_mdriver_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MeanVariance & msg,
  std::ostream & out)
{
  out << "{";
  // member: mean
  {
    out << "mean: ";
    rosidl_generator_traits::value_to_yaml(msg.mean, out);
    out << ", ";
  }

  // member: variance
  {
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MeanVariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mean: ";
    rosidl_generator_traits::value_to_yaml(msg.mean, out);
    out << "\n";
  }

  // member: variance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "variance: ";
    rosidl_generator_traits::value_to_yaml(msg.variance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MeanVariance & msg, bool use_flow_style = false)
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

}  // namespace deva_mdriver_msgs

namespace rosidl_generator_traits
{

[[deprecated("use deva_mdriver_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const deva_mdriver_msgs::msg::MeanVariance & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_mdriver_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_mdriver_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_mdriver_msgs::msg::MeanVariance & msg)
{
  return deva_mdriver_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_mdriver_msgs::msg::MeanVariance>()
{
  return "deva_mdriver_msgs::msg::MeanVariance";
}

template<>
inline const char * name<deva_mdriver_msgs::msg::MeanVariance>()
{
  return "deva_mdriver_msgs/msg/MeanVariance";
}

template<>
struct has_fixed_size<deva_mdriver_msgs::msg::MeanVariance>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_mdriver_msgs::msg::MeanVariance>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_mdriver_msgs::msg::MeanVariance>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MEAN_VARIANCE__TRAITS_HPP_
