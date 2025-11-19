// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fault_diagnosis:msg/ODDStatusArray.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__BUILDER_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fault_diagnosis/msg/detail/odd_status_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fault_diagnosis
{

namespace msg
{

namespace builder
{

class Init_ODDStatusArray_global_faults
{
public:
  explicit Init_ODDStatusArray_global_faults(::fault_diagnosis::msg::ODDStatusArray & msg)
  : msg_(msg)
  {}
  ::fault_diagnosis::msg::ODDStatusArray global_faults(::fault_diagnosis::msg::ODDStatusArray::_global_faults_type arg)
  {
    msg_.global_faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fault_diagnosis::msg::ODDStatusArray msg_;
};

class Init_ODDStatusArray_functions
{
public:
  explicit Init_ODDStatusArray_functions(::fault_diagnosis::msg::ODDStatusArray & msg)
  : msg_(msg)
  {}
  Init_ODDStatusArray_global_faults functions(::fault_diagnosis::msg::ODDStatusArray::_functions_type arg)
  {
    msg_.functions = std::move(arg);
    return Init_ODDStatusArray_global_faults(msg_);
  }

private:
  ::fault_diagnosis::msg::ODDStatusArray msg_;
};

class Init_ODDStatusArray_header
{
public:
  Init_ODDStatusArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ODDStatusArray_functions header(::fault_diagnosis::msg::ODDStatusArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ODDStatusArray_functions(msg_);
  }

private:
  ::fault_diagnosis::msg::ODDStatusArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fault_diagnosis::msg::ODDStatusArray>()
{
  return fault_diagnosis::msg::builder::Init_ODDStatusArray_header();
}

}  // namespace fault_diagnosis

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__ODD_STATUS_ARRAY__BUILDER_HPP_
