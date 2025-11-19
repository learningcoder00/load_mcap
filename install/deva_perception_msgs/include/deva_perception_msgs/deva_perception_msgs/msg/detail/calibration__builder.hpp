// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Calibration.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/calibration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Calibration_gnss2ego
{
public:
  explicit Init_Calibration_gnss2ego(::deva_perception_msgs::msg::Calibration & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Calibration gnss2ego(::deva_perception_msgs::msg::Calibration::_gnss2ego_type arg)
  {
    msg_.gnss2ego = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Calibration msg_;
};

class Init_Calibration_lidar2gnss
{
public:
  explicit Init_Calibration_lidar2gnss(::deva_perception_msgs::msg::Calibration & msg)
  : msg_(msg)
  {}
  Init_Calibration_gnss2ego lidar2gnss(::deva_perception_msgs::msg::Calibration::_lidar2gnss_type arg)
  {
    msg_.lidar2gnss = std::move(arg);
    return Init_Calibration_gnss2ego(msg_);
  }

private:
  ::deva_perception_msgs::msg::Calibration msg_;
};

class Init_Calibration_version
{
public:
  explicit Init_Calibration_version(::deva_perception_msgs::msg::Calibration & msg)
  : msg_(msg)
  {}
  Init_Calibration_lidar2gnss version(::deva_perception_msgs::msg::Calibration::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_Calibration_lidar2gnss(msg_);
  }

private:
  ::deva_perception_msgs::msg::Calibration msg_;
};

class Init_Calibration_header
{
public:
  Init_Calibration_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Calibration_version header(::deva_perception_msgs::msg::Calibration::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Calibration_version(msg_);
  }

private:
  ::deva_perception_msgs::msg::Calibration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Calibration>()
{
  return deva_perception_msgs::msg::builder::Init_Calibration_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__CALIBRATION__BUILDER_HPP_
