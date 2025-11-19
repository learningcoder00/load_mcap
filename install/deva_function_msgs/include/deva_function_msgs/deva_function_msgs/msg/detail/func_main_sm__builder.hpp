// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FuncMainSM.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/func_main_sm__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FuncMainSM_act_func_arbn
{
public:
  explicit Init_FuncMainSM_act_func_arbn(::deva_function_msgs::msg::FuncMainSM & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FuncMainSM act_func_arbn(::deva_function_msgs::msg::FuncMainSM::_act_func_arbn_type arg)
  {
    msg_.act_func_arbn = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FuncMainSM msg_;
};

class Init_FuncMainSM_state_machine_mode
{
public:
  explicit Init_FuncMainSM_state_machine_mode(::deva_function_msgs::msg::FuncMainSM & msg)
  : msg_(msg)
  {}
  Init_FuncMainSM_act_func_arbn state_machine_mode(::deva_function_msgs::msg::FuncMainSM::_state_machine_mode_type arg)
  {
    msg_.state_machine_mode = std::move(arg);
    return Init_FuncMainSM_act_func_arbn(msg_);
  }

private:
  ::deva_function_msgs::msg::FuncMainSM msg_;
};

class Init_FuncMainSM_state_machine_main_state
{
public:
  explicit Init_FuncMainSM_state_machine_main_state(::deva_function_msgs::msg::FuncMainSM & msg)
  : msg_(msg)
  {}
  Init_FuncMainSM_state_machine_mode state_machine_main_state(::deva_function_msgs::msg::FuncMainSM::_state_machine_main_state_type arg)
  {
    msg_.state_machine_main_state = std::move(arg);
    return Init_FuncMainSM_state_machine_mode(msg_);
  }

private:
  ::deva_function_msgs::msg::FuncMainSM msg_;
};

class Init_FuncMainSM_header
{
public:
  Init_FuncMainSM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FuncMainSM_state_machine_main_state header(::deva_function_msgs::msg::FuncMainSM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FuncMainSM_state_machine_main_state(msg_);
  }

private:
  ::deva_function_msgs::msg::FuncMainSM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FuncMainSM>()
{
  return deva_function_msgs::msg::builder::Init_FuncMainSM_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__BUILDER_HPP_
