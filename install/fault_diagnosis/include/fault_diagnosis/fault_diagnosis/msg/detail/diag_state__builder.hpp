// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fault_diagnosis:msg/DiagState.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__BUILDER_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fault_diagnosis/msg/detail/diag_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fault_diagnosis
{

namespace msg
{

namespace builder
{

class Init_DiagState_info
{
public:
  explicit Init_DiagState_info(::fault_diagnosis::msg::DiagState & msg)
  : msg_(msg)
  {}
  ::fault_diagnosis::msg::DiagState info(::fault_diagnosis::msg::DiagState::_info_type arg)
  {
    msg_.info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fault_diagnosis::msg::DiagState msg_;
};

class Init_DiagState_state
{
public:
  explicit Init_DiagState_state(::fault_diagnosis::msg::DiagState & msg)
  : msg_(msg)
  {}
  Init_DiagState_info state(::fault_diagnosis::msg::DiagState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_DiagState_info(msg_);
  }

private:
  ::fault_diagnosis::msg::DiagState msg_;
};

class Init_DiagState_fault_name
{
public:
  explicit Init_DiagState_fault_name(::fault_diagnosis::msg::DiagState & msg)
  : msg_(msg)
  {}
  Init_DiagState_state fault_name(::fault_diagnosis::msg::DiagState::_fault_name_type arg)
  {
    msg_.fault_name = std::move(arg);
    return Init_DiagState_state(msg_);
  }

private:
  ::fault_diagnosis::msg::DiagState msg_;
};

class Init_DiagState_header
{
public:
  Init_DiagState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DiagState_fault_name header(::fault_diagnosis::msg::DiagState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DiagState_fault_name(msg_);
  }

private:
  ::fault_diagnosis::msg::DiagState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fault_diagnosis::msg::DiagState>()
{
  return fault_diagnosis::msg::builder::Init_DiagState_header();
}

}  // namespace fault_diagnosis

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__BUILDER_HPP_
