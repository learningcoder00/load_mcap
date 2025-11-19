// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/FsmStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/fsm_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FsmStateMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: publish_timestamp
  {
    out << "publish_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_timestamp, out);
    out << ", ";
  }

  // member: fsm_state
  {
    out << "fsm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_state, out);
    out << ", ";
  }

  // member: top_state
  {
    out << "top_state: ";
    rosidl_generator_traits::value_to_yaml(msg.top_state, out);
    out << ", ";
  }

  // member: acc_state
  {
    out << "acc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_state, out);
    out << ", ";
  }

  // member: icc_state
  {
    out << "icc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.icc_state, out);
    out << ", ";
  }

  // member: noa_state
  {
    out << "noa_state: ";
    rosidl_generator_traits::value_to_yaml(msg.noa_state, out);
    out << ", ";
  }

  // member: d2d_state
  {
    out << "d2d_state: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_state, out);
    out << ", ";
  }

  // member: calibra_state
  {
    out << "calibra_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibra_state, out);
    out << ", ";
  }

  // member: mapping_state
  {
    out << "mapping_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping_state, out);
    out << ", ";
  }

  // member: parking_state
  {
    out << "parking_state: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FsmStateMsg & msg,
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

  // member: publish_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "publish_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_timestamp, out);
    out << "\n";
  }

  // member: fsm_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_state, out);
    out << "\n";
  }

  // member: top_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "top_state: ";
    rosidl_generator_traits::value_to_yaml(msg.top_state, out);
    out << "\n";
  }

  // member: acc_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_state, out);
    out << "\n";
  }

  // member: icc_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icc_state: ";
    rosidl_generator_traits::value_to_yaml(msg.icc_state, out);
    out << "\n";
  }

  // member: noa_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noa_state: ";
    rosidl_generator_traits::value_to_yaml(msg.noa_state, out);
    out << "\n";
  }

  // member: d2d_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "d2d_state: ";
    rosidl_generator_traits::value_to_yaml(msg.d2d_state, out);
    out << "\n";
  }

  // member: calibra_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibra_state: ";
    rosidl_generator_traits::value_to_yaml(msg.calibra_state, out);
    out << "\n";
  }

  // member: mapping_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mapping_state: ";
    rosidl_generator_traits::value_to_yaml(msg.mapping_state, out);
    out << "\n";
  }

  // member: parking_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parking_state: ";
    rosidl_generator_traits::value_to_yaml(msg.parking_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FsmStateMsg & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::FsmStateMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::FsmStateMsg & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::FsmStateMsg>()
{
  return "deva_function_msgs::msg::FsmStateMsg";
}

template<>
inline const char * name<deva_function_msgs::msg::FsmStateMsg>()
{
  return "deva_function_msgs/msg/FsmStateMsg";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::FsmStateMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::FsmStateMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<deva_function_msgs::msg::FsmStateMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__TRAITS_HPP_
