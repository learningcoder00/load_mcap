// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RadarStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/radar_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RadarStatus_vdy_timestamp
{
public:
  explicit Init_RadarStatus_vdy_timestamp(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RadarStatus vdy_timestamp(::deva_perception_msgs::msg::RadarStatus::_vdy_timestamp_type arg)
  {
    msg_.vdy_timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_vdy_yawrate
{
public:
  explicit Init_RadarStatus_vdy_yawrate(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_vdy_timestamp vdy_yawrate(::deva_perception_msgs::msg::RadarStatus::_vdy_yawrate_type arg)
  {
    msg_.vdy_yawrate = std::move(arg);
    return Init_RadarStatus_vdy_timestamp(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_vdy_velocity
{
public:
  explicit Init_RadarStatus_vdy_velocity(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_vdy_yawrate vdy_velocity(::deva_perception_msgs::msg::RadarStatus::_vdy_velocity_type arg)
  {
    msg_.vdy_velocity = std::move(arg);
    return Init_RadarStatus_vdy_yawrate(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_timestamp_l
{
public:
  explicit Init_RadarStatus_timestamp_l(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_vdy_velocity timestamp_l(::deva_perception_msgs::msg::RadarStatus::_timestamp_l_type arg)
  {
    msg_.timestamp_l = std::move(arg);
    return Init_RadarStatus_vdy_velocity(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_timestamp_h
{
public:
  explicit Init_RadarStatus_timestamp_h(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_timestamp_l timestamp_h(::deva_perception_msgs::msg::RadarStatus::_timestamp_h_type arg)
  {
    msg_.timestamp_h = std::move(arg);
    return Init_RadarStatus_timestamp_l(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_status_safety_fault
{
public:
  explicit Init_RadarStatus_status_safety_fault(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_timestamp_h status_safety_fault(::deva_perception_msgs::msg::RadarStatus::_status_safety_fault_type arg)
  {
    msg_.status_safety_fault = std::move(arg);
    return Init_RadarStatus_timestamp_h(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_status_latency
{
public:
  explicit Init_RadarStatus_status_latency(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_status_safety_fault status_latency(::deva_perception_msgs::msg::RadarStatus::_status_latency_type arg)
  {
    msg_.status_latency = std::move(arg);
    return Init_RadarStatus_status_safety_fault(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_status_faulty
{
public:
  explicit Init_RadarStatus_status_faulty(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_status_latency status_faulty(::deva_perception_msgs::msg::RadarStatus::_status_faulty_type arg)
  {
    msg_.status_faulty = std::move(arg);
    return Init_RadarStatus_status_latency(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_status_enable
{
public:
  explicit Init_RadarStatus_status_enable(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_status_faulty status_enable(::deva_perception_msgs::msg::RadarStatus::_status_enable_type arg)
  {
    msg_.status_enable = std::move(arg);
    return Init_RadarStatus_status_faulty(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_num_object
{
public:
  explicit Init_RadarStatus_num_object(::deva_perception_msgs::msg::RadarStatus & msg)
  : msg_(msg)
  {}
  Init_RadarStatus_status_enable num_object(::deva_perception_msgs::msg::RadarStatus::_num_object_type arg)
  {
    msg_.num_object = std::move(arg);
    return Init_RadarStatus_status_enable(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

class Init_RadarStatus_num_detection
{
public:
  Init_RadarStatus_num_detection()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RadarStatus_num_object num_detection(::deva_perception_msgs::msg::RadarStatus::_num_detection_type arg)
  {
    msg_.num_detection = std::move(arg);
    return Init_RadarStatus_num_object(msg_);
  }

private:
  ::deva_perception_msgs::msg::RadarStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RadarStatus>()
{
  return deva_perception_msgs::msg::builder::Init_RadarStatus_num_detection();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__BUILDER_HPP_
