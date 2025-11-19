// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FsmModuleRunningStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fsm_module_running_state_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FsmModuleRunningStateMsg_state
{
public:
  explicit Init_FsmModuleRunningStateMsg_state(::deva_function_msgs::msg::FsmModuleRunningStateMsg & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FsmModuleRunningStateMsg state(::deva_function_msgs::msg::FsmModuleRunningStateMsg::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmModuleRunningStateMsg msg_;
};

class Init_FsmModuleRunningStateMsg_module_name
{
public:
  explicit Init_FsmModuleRunningStateMsg_module_name(::deva_function_msgs::msg::FsmModuleRunningStateMsg & msg)
  : msg_(msg)
  {}
  Init_FsmModuleRunningStateMsg_state module_name(::deva_function_msgs::msg::FsmModuleRunningStateMsg::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return Init_FsmModuleRunningStateMsg_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmModuleRunningStateMsg msg_;
};

class Init_FsmModuleRunningStateMsg_header
{
public:
  Init_FsmModuleRunningStateMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FsmModuleRunningStateMsg_module_name header(::deva_function_msgs::msg::FsmModuleRunningStateMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FsmModuleRunningStateMsg_module_name(msg_);
  }

private:
  ::deva_function_msgs::msg::FsmModuleRunningStateMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FsmModuleRunningStateMsg>()
{
  return deva_function_msgs::msg::builder::Init_FsmModuleRunningStateMsg_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__BUILDER_HPP_
