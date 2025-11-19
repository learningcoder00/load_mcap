// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/MachCalibrationResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/mach_calibration_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_MachCalibrationResult_res_content
{
public:
  explicit Init_MachCalibrationResult_res_content(::deva_function_msgs::msg::MachCalibrationResult & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::MachCalibrationResult res_content(::deva_function_msgs::msg::MachCalibrationResult::_res_content_type arg)
  {
    msg_.res_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResult msg_;
};

class Init_MachCalibrationResult_length
{
public:
  explicit Init_MachCalibrationResult_length(::deva_function_msgs::msg::MachCalibrationResult & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResult_res_content length(::deva_function_msgs::msg::MachCalibrationResult::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_MachCalibrationResult_res_content(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResult msg_;
};

class Init_MachCalibrationResult_senor_type
{
public:
  explicit Init_MachCalibrationResult_senor_type(::deva_function_msgs::msg::MachCalibrationResult & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResult_length senor_type(::deva_function_msgs::msg::MachCalibrationResult::_senor_type_type arg)
  {
    msg_.senor_type = std::move(arg);
    return Init_MachCalibrationResult_length(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResult msg_;
};

class Init_MachCalibrationResult_calibration_type
{
public:
  explicit Init_MachCalibrationResult_calibration_type(::deva_function_msgs::msg::MachCalibrationResult & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResult_senor_type calibration_type(::deva_function_msgs::msg::MachCalibrationResult::_calibration_type_type arg)
  {
    msg_.calibration_type = std::move(arg);
    return Init_MachCalibrationResult_senor_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResult msg_;
};

class Init_MachCalibrationResult_header
{
public:
  Init_MachCalibrationResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachCalibrationResult_calibration_type header(::deva_function_msgs::msg::MachCalibrationResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachCalibrationResult_calibration_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::MachCalibrationResult>()
{
  return deva_function_msgs::msg::builder::Init_MachCalibrationResult_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__BUILDER_HPP_
