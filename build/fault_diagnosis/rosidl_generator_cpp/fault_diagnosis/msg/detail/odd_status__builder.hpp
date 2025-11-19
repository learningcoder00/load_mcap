// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fault_diagnosis:msg/OddStatus.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__BUILDER_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fault_diagnosis/msg/detail/odd_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fault_diagnosis
{

namespace msg
{

namespace builder
{

class Init_OddStatus_fault_reasons
{
public:
  explicit Init_OddStatus_fault_reasons(::fault_diagnosis::msg::OddStatus & msg)
  : msg_(msg)
  {}
  ::fault_diagnosis::msg::OddStatus fault_reasons(::fault_diagnosis::msg::OddStatus::_fault_reasons_type arg)
  {
    msg_.fault_reasons = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fault_diagnosis::msg::OddStatus msg_;
};

class Init_OddStatus_state
{
public:
  explicit Init_OddStatus_state(::fault_diagnosis::msg::OddStatus & msg)
  : msg_(msg)
  {}
  Init_OddStatus_fault_reasons state(::fault_diagnosis::msg::OddStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_OddStatus_fault_reasons(msg_);
  }

private:
  ::fault_diagnosis::msg::OddStatus msg_;
};

class Init_OddStatus_function_id
{
public:
  Init_OddStatus_function_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OddStatus_state function_id(::fault_diagnosis::msg::OddStatus::_function_id_type arg)
  {
    msg_.function_id = std::move(arg);
    return Init_OddStatus_state(msg_);
  }

private:
  ::fault_diagnosis::msg::OddStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fault_diagnosis::msg::OddStatus>()
{
  return fault_diagnosis::msg::builder::Init_OddStatus_function_id();
}

}  // namespace fault_diagnosis

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS__BUILDER_HPP_
