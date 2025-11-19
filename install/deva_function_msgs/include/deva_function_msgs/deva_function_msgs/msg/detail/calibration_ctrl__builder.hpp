// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/CalibrationCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/calibration_ctrl__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_CalibrationCtrl_calibration_type
{
public:
  explicit Init_CalibrationCtrl_calibration_type(::deva_function_msgs::msg::CalibrationCtrl & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::CalibrationCtrl calibration_type(::deva_function_msgs::msg::CalibrationCtrl::_calibration_type_type arg)
  {
    msg_.calibration_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::CalibrationCtrl msg_;
};

class Init_CalibrationCtrl_calibration_action
{
public:
  explicit Init_CalibrationCtrl_calibration_action(::deva_function_msgs::msg::CalibrationCtrl & msg)
  : msg_(msg)
  {}
  Init_CalibrationCtrl_calibration_type calibration_action(::deva_function_msgs::msg::CalibrationCtrl::_calibration_action_type arg)
  {
    msg_.calibration_action = std::move(arg);
    return Init_CalibrationCtrl_calibration_type(msg_);
  }

private:
  ::deva_function_msgs::msg::CalibrationCtrl msg_;
};

class Init_CalibrationCtrl_header
{
public:
  Init_CalibrationCtrl_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CalibrationCtrl_calibration_action header(::deva_function_msgs::msg::CalibrationCtrl::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CalibrationCtrl_calibration_action(msg_);
  }

private:
  ::deva_function_msgs::msg::CalibrationCtrl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::CalibrationCtrl>()
{
  return deva_function_msgs::msg::builder::Init_CalibrationCtrl_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__BUILDER_HPP_
