// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FaultStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fault_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FaultStatus_report_time
{
public:
  explicit Init_FaultStatus_report_time(::deva_function_msgs::msg::FaultStatus & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FaultStatus report_time(::deva_function_msgs::msg::FaultStatus::_report_time_type arg)
  {
    msg_.report_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FaultStatus msg_;
};

class Init_FaultStatus_error_status
{
public:
  explicit Init_FaultStatus_error_status(::deva_function_msgs::msg::FaultStatus & msg)
  : msg_(msg)
  {}
  Init_FaultStatus_report_time error_status(::deva_function_msgs::msg::FaultStatus::_error_status_type arg)
  {
    msg_.error_status = std::move(arg);
    return Init_FaultStatus_report_time(msg_);
  }

private:
  ::deva_function_msgs::msg::FaultStatus msg_;
};

class Init_FaultStatus_error_code
{
public:
  Init_FaultStatus_error_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaultStatus_error_status error_code(::deva_function_msgs::msg::FaultStatus::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FaultStatus_error_status(msg_);
  }

private:
  ::deva_function_msgs::msg::FaultStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FaultStatus>()
{
  return deva_function_msgs::msg::builder::Init_FaultStatus_error_code();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__BUILDER_HPP_
