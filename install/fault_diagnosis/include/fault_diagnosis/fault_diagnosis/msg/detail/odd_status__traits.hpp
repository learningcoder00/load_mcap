// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fault_diagnosis:msg/OddStatus.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__TRAITS_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fault_diagnosis/msg/detail/odd_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fault_diagnosis
{

namespace msg
{

inline void to_flow_style_yaml(
  const OddStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: function_id
  {
    out << "function_id: ";
    rosidl_generator_traits::value_to_yaml(msg.function_id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: fault_reasons
  {
    if (msg.fault_reasons.size() == 0) {
      out << "fault_reasons: []";
    } else {
      out << "fault_reasons: [";
      size_t pending_items = msg.fault_reasons.size();
      for (auto item : msg.fault_reasons) {
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
  const OddStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: function_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "function_id: ";
    rosidl_generator_traits::value_to_yaml(msg.function_id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: fault_reasons
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fault_reasons.size() == 0) {
      out << "fault_reasons: []\n";
    } else {
      out << "fault_reasons:\n";
      for (auto item : msg.fault_reasons) {
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

inline std::string to_yaml(const OddStatus & msg, bool use_flow_style = false)
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
  const fault_diagnosis::msg::OddStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  fault_diagnosis::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fault_diagnosis::msg::to_yaml() instead")]]
inline std::string to_yaml(const fault_diagnosis::msg::OddStatus & msg)
{
  return fault_diagnosis::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fault_diagnosis::msg::OddStatus>()
{
  return "fault_diagnosis::msg::OddStatus";
}

template<>
inline const char * name<fault_diagnosis::msg::OddStatus>()
{
  return "fault_diagnosis/msg/OddStatus";
}

template<>
struct has_fixed_size<fault_diagnosis::msg::OddStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fault_diagnosis::msg::OddStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fault_diagnosis::msg::OddStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__TRAITS_HPP_
