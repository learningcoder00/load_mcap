// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/ADASFunctionState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/adas_function_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_ADASFunctionState_adas_function_state
{
public:
  explicit Init_ADASFunctionState_adas_function_state(::deva_function_msgs::msg::ADASFunctionState & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::ADASFunctionState adas_function_state(::deva_function_msgs::msg::ADASFunctionState::_adas_function_state_type arg)
  {
    msg_.adas_function_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::ADASFunctionState msg_;
};

class Init_ADASFunctionState_header
{
public:
  Init_ADASFunctionState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ADASFunctionState_adas_function_state header(::deva_function_msgs::msg::ADASFunctionState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ADASFunctionState_adas_function_state(msg_);
  }

private:
  ::deva_function_msgs::msg::ADASFunctionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::ADASFunctionState>()
{
  return deva_function_msgs::msg::builder::Init_ADASFunctionState_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__BUILDER_HPP_
