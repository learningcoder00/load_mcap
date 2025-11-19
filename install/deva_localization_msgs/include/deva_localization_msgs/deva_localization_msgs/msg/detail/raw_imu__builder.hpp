// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_localization_msgs:msg/RawImu.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__BUILDER_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_localization_msgs/msg/detail/raw_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_RawImu_angular_velocity
{
public:
  explicit Init_RawImu_angular_velocity(::deva_localization_msgs::msg::RawImu & msg)
  : msg_(msg)
  {}
  ::deva_localization_msgs::msg::RawImu angular_velocity(::deva_localization_msgs::msg::RawImu::_angular_velocity_type arg)
  {
    msg_.angular_velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_localization_msgs::msg::RawImu msg_;
};

class Init_RawImu_linear_acceleration
{
public:
  explicit Init_RawImu_linear_acceleration(::deva_localization_msgs::msg::RawImu & msg)
  : msg_(msg)
  {}
  Init_RawImu_angular_velocity linear_acceleration(::deva_localization_msgs::msg::RawImu::_linear_acceleration_type arg)
  {
    msg_.linear_acceleration = std::move(arg);
    return Init_RawImu_angular_velocity(msg_);
  }

private:
  ::deva_localization_msgs::msg::RawImu msg_;
};

class Init_RawImu_measurement_span
{
public:
  explicit Init_RawImu_measurement_span(::deva_localization_msgs::msg::RawImu & msg)
  : msg_(msg)
  {}
  Init_RawImu_linear_acceleration measurement_span(::deva_localization_msgs::msg::RawImu::_measurement_span_type arg)
  {
    msg_.measurement_span = std::move(arg);
    return Init_RawImu_linear_acceleration(msg_);
  }

private:
  ::deva_localization_msgs::msg::RawImu msg_;
};

class Init_RawImu_header
{
public:
  Init_RawImu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RawImu_measurement_span header(::deva_localization_msgs::msg::RawImu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RawImu_measurement_span(msg_);
  }

private:
  ::deva_localization_msgs::msg::RawImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_localization_msgs::msg::RawImu>()
{
  return deva_localization_msgs::msg::builder::Init_RawImu_header();
}

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__BUILDER_HPP_
