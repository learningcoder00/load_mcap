// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_gaode_routing_msgs:msg/RestrictionDetail.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__TRAITS_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_gaode_routing_msgs/msg/detail/restriction_detail__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_gaode_routing_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RestrictionDetail & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: vehicle_limit
  {
    out << "vehicle_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_limit, out);
    out << ", ";
  }

  // member: period_approx
  {
    out << "period_approx: ";
    rosidl_generator_traits::value_to_yaml(msg.period_approx, out);
    out << ", ";
  }

  // member: valid_period
  {
    out << "valid_period: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_period, out);
    out << ", ";
  }

  // member: time_type
  {
    out << "time_type: ";
    rosidl_generator_traits::value_to_yaml(msg.time_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RestrictionDetail & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: vehicle_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_limit, out);
    out << "\n";
  }

  // member: period_approx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "period_approx: ";
    rosidl_generator_traits::value_to_yaml(msg.period_approx, out);
    out << "\n";
  }

  // member: valid_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_period: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_period, out);
    out << "\n";
  }

  // member: time_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_type: ";
    rosidl_generator_traits::value_to_yaml(msg.time_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RestrictionDetail & msg, bool use_flow_style = false)
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
  const deva_gaode_routing_msgs::msg::RestrictionDetail & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_gaode_routing_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_gaode_routing_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_gaode_routing_msgs::msg::RestrictionDetail & msg)
{
  return deva_gaode_routing_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_gaode_routing_msgs::msg::RestrictionDetail>()
{
  return "deva_gaode_routing_msgs::msg::RestrictionDetail";
}

template<>
inline const char * name<deva_gaode_routing_msgs::msg::RestrictionDetail>()
{
  return "deva_gaode_routing_msgs/msg/RestrictionDetail";
}

template<>
struct has_fixed_size<deva_gaode_routing_msgs::msg::RestrictionDetail>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_gaode_routing_msgs::msg::RestrictionDetail>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_gaode_routing_msgs::msg::RestrictionDetail>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__RESTRICTION_DETAIL__TRAITS_HPP_
