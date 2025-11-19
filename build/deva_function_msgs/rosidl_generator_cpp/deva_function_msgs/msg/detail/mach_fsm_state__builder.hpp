// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/MachFsmState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/mach_fsm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_MachFsmState_calibration_state
{
public:
  explicit Init_MachFsmState_calibration_state(::deva_function_msgs::msg::MachFsmState & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::MachFsmState calibration_state(::deva_function_msgs::msg::MachFsmState::_calibration_state_type arg)
  {
    msg_.calibration_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

class Init_MachFsmState_magic_carpet_state
{
public:
  explicit Init_MachFsmState_magic_carpet_state(::deva_function_msgs::msg::MachFsmState & msg)
  : msg_(msg)
  {}
  Init_MachFsmState_calibration_state magic_carpet_state(::deva_function_msgs::msg::MachFsmState::_magic_carpet_state_type arg)
  {
    msg_.magic_carpet_state = std::move(arg);
    return Init_MachFsmState_calibration_state(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

class Init_MachFsmState_aes_state
{
public:
  explicit Init_MachFsmState_aes_state(::deva_function_msgs::msg::MachFsmState & msg)
  : msg_(msg)
  {}
  Init_MachFsmState_magic_carpet_state aes_state(::deva_function_msgs::msg::MachFsmState::_aes_state_type arg)
  {
    msg_.aes_state = std::move(arg);
    return Init_MachFsmState_magic_carpet_state(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

class Init_MachFsmState_d2d_state
{
public:
  explicit Init_MachFsmState_d2d_state(::deva_function_msgs::msg::MachFsmState & msg)
  : msg_(msg)
  {}
  Init_MachFsmState_aes_state d2d_state(::deva_function_msgs::msg::MachFsmState::_d2d_state_type arg)
  {
    msg_.d2d_state = std::move(arg);
    return Init_MachFsmState_aes_state(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

class Init_MachFsmState_noa_state
{
public:
  explicit Init_MachFsmState_noa_state(::deva_function_msgs::msg::MachFsmState & msg)
  : msg_(msg)
  {}
  Init_MachFsmState_d2d_state noa_state(::deva_function_msgs::msg::MachFsmState::_noa_state_type arg)
  {
    msg_.noa_state = std::move(arg);
    return Init_MachFsmState_d2d_state(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

class Init_MachFsmState_icc_state
{
public:
  explicit Init_MachFsmState_icc_state(::deva_function_msgs::msg::MachFsmState & msg)
  : msg_(msg)
  {}
  Init_MachFsmState_noa_state icc_state(::deva_function_msgs::msg::MachFsmState::_icc_state_type arg)
  {
    msg_.icc_state = std::move(arg);
    return Init_MachFsmState_noa_state(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

class Init_MachFsmState_acc_state
{
public:
  explicit Init_MachFsmState_acc_state(::deva_function_msgs::msg::MachFsmState & msg)
  : msg_(msg)
  {}
  Init_MachFsmState_icc_state acc_state(::deva_function_msgs::msg::MachFsmState::_acc_state_type arg)
  {
    msg_.acc_state = std::move(arg);
    return Init_MachFsmState_icc_state(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

class Init_MachFsmState_header
{
public:
  Init_MachFsmState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachFsmState_acc_state header(::deva_function_msgs::msg::MachFsmState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachFsmState_acc_state(msg_);
  }

private:
  ::deva_function_msgs::msg::MachFsmState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::MachFsmState>()
{
  return deva_function_msgs::msg::builder::Init_MachFsmState_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__BUILDER_HPP_
