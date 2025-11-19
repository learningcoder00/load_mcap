// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__TRAITS_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fault_diagnosis/msg/detail/odd_status_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"
// Member 'functions'
#include "fault_diagnosis/msg/detail/odd_status__traits.hpp"

namespace fault_diagnosis
{

namespace msg
{

inline void to_flow_style_yaml(
  const ODDStatusArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: functions
  {
    if (msg.functions.size() == 0) {
      out << "functions: []";
    } else {
      out << "functions: [";
      size_t pending_items = msg.functions.size();
      for (auto item : msg.functions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: global_faults
  {
    if (msg.global_faults.size() == 0) {
      out << "global_faults: []";
    } else {
      out << "global_faults: [";
      size_t pending_items = msg.global_faults.size();
      for (auto item : msg.global_faults) {
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
  const ODDStatusArray & msg,
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

  // member: functions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.functions.size() == 0) {
      out << "functions: []\n";
    } else {
      out << "functions:\n";
      for (auto item : msg.functions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: global_faults
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.global_faults.size() == 0) {
      out << "global_faults: []\n";
    } else {
      out << "global_faults:\n";
      for (auto item : msg.global_faults) {
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

inline std::string to_yaml(const ODDStatusArray & msg, bool use_flow_style = false)
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

}  // namespace fault_diagnosis

namespace rosidl_generator_traits
{

[[deprecated("use fault_diagnosis::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fault_diagnosis::msg::ODDStatusArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  fault_diagnosis::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fault_diagnosis::msg::to_yaml() instead")]]
inline std::string to_yaml(const fault_diagnosis::msg::ODDStatusArray & msg)
{
  return fault_diagnosis::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fault_diagnosis::msg::ODDStatusArray>()
{
  return "fault_diagnosis::msg::ODDStatusArray";
}

template<>
inline const char * name<fault_diagnosis::msg::ODDStatusArray>()
{
  return "fault_diagnosis/msg/ODDStatusArray";
}

template<>
struct has_fixed_size<fault_diagnosis::msg::ODDStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fault_diagnosis::msg::ODDStatusArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fault_diagnosis::msg::ODDStatusArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__TRAITS_HPP_
