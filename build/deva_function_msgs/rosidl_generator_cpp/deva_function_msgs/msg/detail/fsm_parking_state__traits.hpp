// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from deva_function_msgs:msg/FsmParkingState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__TRAITS_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "deva_function_msgs/msg/detail/fsm_parking_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace deva_function_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FsmParkingState & msg,
  std::ostream & out)
{
  out << "{";
  // member: publish_timestamp
  {
    out << "publish_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.publish_timestamp, out);
    out << ", ";
  }

  // member: fsm_apa_current_state
  {
    out << "fsm_apa_current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_apa_current_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FsmParkingState & msg,
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

  // member: fsm_apa_current_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fsm_apa_current_state: ";
    rosidl_generator_traits::value_to_yaml(msg.fsm_apa_current_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FsmParkingState & msg, bool use_flow_style = false)
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
  const deva_function_msgs::msg::FsmParkingState & msg,
  std::ostream & out, size_t indentation = 0)
{
  deva_function_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use deva_function_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const deva_function_msgs::msg::FsmParkingState & msg)
{
  return deva_function_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<deva_function_msgs::msg::FsmParkingState>()
{
  return "deva_function_msgs::msg::FsmParkingState";
}

template<>
inline const char * name<deva_function_msgs::msg::FsmParkingState>()
{
  return "deva_function_msgs/msg/FsmParkingState";
}

template<>
struct has_fixed_size<deva_function_msgs::msg::FsmParkingState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<deva_function_msgs::msg::FsmParkingState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<deva_function_msgs::msg::FsmParkingState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_PARKING_STATE__TRAITS_HPP_
