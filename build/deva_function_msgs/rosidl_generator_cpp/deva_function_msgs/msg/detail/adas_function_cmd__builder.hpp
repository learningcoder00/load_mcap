// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/ADASFunctionCmd.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_CMD__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/adas_function_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_ADASFunctionCmd_adas_function_cmd
{
public:
  explicit Init_ADASFunctionCmd_adas_function_cmd(::deva_function_msgs::msg::ADASFunctionCmd & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::ADASFunctionCmd adas_function_cmd(::deva_function_msgs::msg::ADASFunctionCmd::_adas_function_cmd_type arg)
  {
    msg_.adas_function_cmd = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::ADASFunctionCmd msg_;
};

class Init_ADASFunctionCmd_header
{
public:
  Init_ADASFunctionCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ADASFunctionCmd_adas_function_cmd header(::deva_function_msgs::msg::ADASFunctionCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ADASFunctionCmd_adas_function_cmd(msg_);
  }

private:
  ::deva_function_msgs::msg::ADASFunctionCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::ADASFunctionCmd>()
{
  return deva_function_msgs::msg::builder::Init_ADASFunctionCmd_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_CMD__BUILDER_HPP_
