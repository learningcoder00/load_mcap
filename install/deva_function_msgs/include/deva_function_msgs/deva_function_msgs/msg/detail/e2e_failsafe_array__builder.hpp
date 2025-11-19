// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/E2eFailsafeArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/e2e_failsafe_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eFailsafeArray_sum_result
{
public:
  explicit Init_E2eFailsafeArray_sum_result(::deva_function_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::E2eFailsafeArray sum_result(::deva_function_msgs::msg::E2eFailsafeArray::_sum_result_type arg)
  {
    msg_.sum_result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_e2e_failsafe_array
{
public:
  explicit Init_E2eFailsafeArray_e2e_failsafe_array(::deva_function_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_sum_result e2e_failsafe_array(::deva_function_msgs::msg::E2eFailsafeArray::_e2e_failsafe_array_type arg)
  {
    msg_.e2e_failsafe_array = std::move(arg);
    return Init_E2eFailsafeArray_sum_result(msg_);
  }

private:
  ::deva_function_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_index
{
public:
  explicit Init_E2eFailsafeArray_index(::deva_function_msgs::msg::E2eFailsafeArray & msg)
  : msg_(msg)
  {}
  Init_E2eFailsafeArray_e2e_failsafe_array index(::deva_function_msgs::msg::E2eFailsafeArray::_index_type arg)
  {
    msg_.index = std::move(arg);
    return Init_E2eFailsafeArray_e2e_failsafe_array(msg_);
  }

private:
  ::deva_function_msgs::msg::E2eFailsafeArray msg_;
};

class Init_E2eFailsafeArray_header
{
public:
  Init_E2eFailsafeArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eFailsafeArray_index header(::deva_function_msgs::msg::E2eFailsafeArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_E2eFailsafeArray_index(msg_);
  }

private:
  ::deva_function_msgs::msg::E2eFailsafeArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::E2eFailsafeArray>()
{
  return deva_function_msgs::msg::builder::Init_E2eFailsafeArray_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__E2E_FAILSAFE_ARRAY__BUILDER_HPP_
