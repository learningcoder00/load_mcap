// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_localization_msgs:msg/CorrectedImu.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__BUILDER_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_localization_msgs/msg/detail/corrected_imu__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_localization_msgs
{

namespace msg
{

namespace builder
{

class Init_CorrectedImu_imu
{
public:
  explicit Init_CorrectedImu_imu(::deva_localization_msgs::msg::CorrectedImu & msg)
  : msg_(msg)
  {}
  ::deva_localization_msgs::msg::CorrectedImu imu(::deva_localization_msgs::msg::CorrectedImu::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_localization_msgs::msg::CorrectedImu msg_;
};

class Init_CorrectedImu_header
{
public:
  Init_CorrectedImu_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CorrectedImu_imu header(::deva_localization_msgs::msg::CorrectedImu::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CorrectedImu_imu(msg_);
  }

private:
  ::deva_localization_msgs::msg::CorrectedImu msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_localization_msgs::msg::CorrectedImu>()
{
  return deva_localization_msgs::msg::builder::Init_CorrectedImu_header();
}

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__CORRECTED_IMU__BUILDER_HPP_
