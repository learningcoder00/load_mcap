// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_function_msgs:msg/MachCalibrationResponse.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__BUILDER_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_function_msgs/msg/detail/mach_calibration_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_function_msgs
{

namespace msg
{

namespace builder
{

class Init_MachCalibrationResponse_res_content
{
public:
  explicit Init_MachCalibrationResponse_res_content(::deva_function_msgs::msg::MachCalibrationResponse & msg)
  : msg_(msg)
  {}
  ::deva_function_msgs::msg::MachCalibrationResponse res_content(::deva_function_msgs::msg::MachCalibrationResponse::_res_content_type arg)
  {
    msg_.res_content = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResponse msg_;
};

class Init_MachCalibrationResponse_length
{
public:
  explicit Init_MachCalibrationResponse_length(::deva_function_msgs::msg::MachCalibrationResponse & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResponse_res_content length(::deva_function_msgs::msg::MachCalibrationResponse::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_MachCalibrationResponse_res_content(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResponse msg_;
};

class Init_MachCalibrationResponse_sensor_type
{
public:
  explicit Init_MachCalibrationResponse_sensor_type(::deva_function_msgs::msg::MachCalibrationResponse & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResponse_length sensor_type(::deva_function_msgs::msg::MachCalibrationResponse::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return Init_MachCalibrationResponse_length(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResponse msg_;
};

class Init_MachCalibrationResponse_calibration_type
{
public:
  explicit Init_MachCalibrationResponse_calibration_type(::deva_function_msgs::msg::MachCalibrationResponse & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResponse_sensor_type calibration_type(::deva_function_msgs::msg::MachCalibrationResponse::_calibration_type_type arg)
  {
    msg_.calibration_type = std::move(arg);
    return Init_MachCalibrationResponse_sensor_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResponse msg_;
};

class Init_MachCalibrationResponse_calibration_reason
{
public:
  explicit Init_MachCalibrationResponse_calibration_reason(::deva_function_msgs::msg::MachCalibrationResponse & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResponse_calibration_type calibration_reason(::deva_function_msgs::msg::MachCalibrationResponse::_calibration_reason_type arg)
  {
    msg_.calibration_reason = std::move(arg);
    return Init_MachCalibrationResponse_calibration_type(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResponse msg_;
};

class Init_MachCalibrationResponse_calibration_response
{
public:
  explicit Init_MachCalibrationResponse_calibration_response(::deva_function_msgs::msg::MachCalibrationResponse & msg)
  : msg_(msg)
  {}
  Init_MachCalibrationResponse_calibration_reason calibration_response(::deva_function_msgs::msg::MachCalibrationResponse::_calibration_response_type arg)
  {
    msg_.calibration_response = std::move(arg);
    return Init_MachCalibrationResponse_calibration_reason(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResponse msg_;
};

class Init_MachCalibrationResponse_header
{
public:
  Init_MachCalibrationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MachCalibrationResponse_calibration_response header(::deva_function_msgs::msg::MachCalibrationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MachCalibrationResponse_calibration_response(msg_);
  }

private:
  ::deva_function_msgs::msg::MachCalibrationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_function_msgs::msg::MachCalibrationResponse>()
{
  return deva_function_msgs::msg::builder::Init_MachCalibrationResponse_header();
}

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__BUILDER_HPP_
