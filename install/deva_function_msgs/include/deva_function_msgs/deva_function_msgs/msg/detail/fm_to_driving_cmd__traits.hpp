// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/FMToDrivingCmd.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/fm_to_driving_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FMToDrivingCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: err_num
  {
    out << "err_num: ";
    rosidl_generator_traits::value_to_yaml(msg.err_num, out);
    out << ", ";
  }

  // member: dilg_data
  {
    if (msg.dilg_data.size() == 0) {
      out << "dilg_data: []";
    } else {
      out << "dilg_data: [";
      size_t pending_items = msg.dilg_data.size();
      for (auto item : msg.dilg_data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FMToDrivingCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: err_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "err_num: ";
    rosidl_generator_traits::value_to_yaml(msg.err_num, out);
    out << "\n";
  }

  // member: dilg_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dilg_data.size() == 0) {
      out << "dilg_data: []\n";
    } else {
      out << "dilg_data:\n";
      for (auto item : msg.dilg_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FMToDrivingCmd & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::FMToDrivingCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::FMToDrivingCmd & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::FMToDrivingCmd>()
{
  return "deva_function_msgs::msg::FMToDrivingCmd";
}

template<>
inline const char * name<deva_function_msgs::msg::FMToDrivingCmd>()
{
  return "deva_function_msgs/msg/FMToDrivingCmd";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::FMToDrivingCmd>
  : std::integral_constant<bool, has_fixed_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::FMToDrivingCmd>
  : std::integral_constant<bool, has_bounded_size<deva_common_msgs::msg::Header>::value> {};

template<>
struct is_message<deva_function_msgs::msg::FMToDrivingCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__TRAITS_HPP_
