// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FaultRequest.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fault_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FaultRequest_response_status
{
public:
  explicit Init_FaultRequest_response_status(::deva_function_msgs::msg::FaultRequest & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FaultRequest response_status(::deva_function_msgs::msg::FaultRequest::_response_status_type arg)
  {
    msg_.response_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FaultRequest msg_;
};

class Init_FaultRequest_report_fault_status
{
public:
  explicit Init_FaultRequest_report_fault_status(::deva_function_msgs::msg::FaultRequest & msg)
  : msg_(msg)
  {}
  Init_FaultRequest_response_status report_fault_status(::deva_function_msgs::msg::FaultRequest::_report_fault_status_type arg)
  {
    msg_.report_fault_status = std::move(arg);
    return Init_FaultRequest_response_status(msg_);
  }

private:
  ::deva_function_msgs::msg::FaultRequest msg_;
};

class Init_FaultRequest_request_type
{
public:
  explicit Init_FaultRequest_request_type(::deva_function_msgs::msg::FaultRequest & msg)
  : msg_(msg)
  {}
  Init_FaultRequest_report_fault_status request_type(::deva_function_msgs::msg::FaultRequest::_request_type_type arg)
  {
    msg_.request_type = std::move(arg);
    return Init_FaultRequest_report_fault_status(msg_);
  }

private:
  ::deva_function_msgs::msg::FaultRequest msg_;
};

class Init_FaultRequest_header
{
public:
  Init_FaultRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FaultRequest_request_type header(::deva_function_msgs::msg::FaultRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FaultRequest_request_type(msg_);
  }

private:
  ::deva_function_msgs::msg::FaultRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FaultRequest>()
{
  return deva_function_msgs::msg::builder::Init_FaultRequest_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__BUILDER_HPP_
