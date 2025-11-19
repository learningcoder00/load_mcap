// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/FMToDrivingCmd.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/fm_to_driving_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_FMToDrivingCmd_dilg_data
{
public:
  explicit Init_FMToDrivingCmd_dilg_data(::deva_function_msgs::msg::FMToDrivingCmd & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::FMToDrivingCmd dilg_data(::deva_function_msgs::msg::FMToDrivingCmd::_dilg_data_type arg)
  {
    msg_.dilg_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::FMToDrivingCmd msg_;
};

class Init_FMToDrivingCmd_err_num
{
public:
  explicit Init_FMToDrivingCmd_err_num(::deva_function_msgs::msg::FMToDrivingCmd & msg)
  : msg_(msg)
  {}
  Init_FMToDrivingCmd_dilg_data err_num(::deva_function_msgs::msg::FMToDrivingCmd::_err_num_type arg)
  {
    msg_.err_num = std::move(arg);
    return Init_FMToDrivingCmd_dilg_data(msg_);
  }

private:
  ::deva_function_msgs::msg::FMToDrivingCmd msg_;
};

class Init_FMToDrivingCmd_header
{
public:
  Init_FMToDrivingCmd_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FMToDrivingCmd_err_num header(::deva_function_msgs::msg::FMToDrivingCmd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FMToDrivingCmd_err_num(msg_);
  }

private:
  ::deva_function_msgs::msg::FMToDrivingCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::FMToDrivingCmd>()
{
  return deva_function_msgs::msg::builder::Init_FMToDrivingCmd_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__BUILDER_HPP_
