// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/UltrasonicRadarArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR_ARRAY__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/ultrasonic_radar_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_UltrasonicRadarArray_ultrasonic_radar_array
{
public:
  explicit Init_UltrasonicRadarArray_ultrasonic_radar_array(::deva_perception_msgs::msg::UltrasonicRadarArray & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::UltrasonicRadarArray ultrasonic_radar_array(::deva_perception_msgs::msg::UltrasonicRadarArray::_ultrasonic_radar_array_type arg)
  {
    msg_.ultrasonic_radar_array = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadarArray msg_;
};

class Init_UltrasonicRadarArray_version
{
public:
  explicit Init_UltrasonicRadarArray_version(::deva_perception_msgs::msg::UltrasonicRadarArray & msg)
  : msg_(msg)
  {}
  Init_UltrasonicRadarArray_ultrasonic_radar_array version(::deva_perception_msgs::msg::UltrasonicRadarArray::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_UltrasonicRadarArray_ultrasonic_radar_array(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadarArray msg_;
};

class Init_UltrasonicRadarArray_header
{
public:
  Init_UltrasonicRadarArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UltrasonicRadarArray_version header(::deva_perception_msgs::msg::UltrasonicRadarArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_UltrasonicRadarArray_version(msg_);
  }

private:
  ::deva_perception_msgs::msg::UltrasonicRadarArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::UltrasonicRadarArray>()
{
  return deva_perception_msgs::msg::builder::Init_UltrasonicRadarArray_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__ULTRASONIC_RADAR_ARRAY__BUILDER_HPP_
