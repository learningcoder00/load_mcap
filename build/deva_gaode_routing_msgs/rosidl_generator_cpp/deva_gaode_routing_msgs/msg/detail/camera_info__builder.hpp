// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/CameraInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/camera_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraInfo_camera_distance
{
public:
  explicit Init_CameraInfo_camera_distance(::deva_gaode_routing_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::CameraInfo camera_distance(::deva_gaode_routing_msgs::msg::CameraInfo::_camera_distance_type arg)
  {
    msg_.camera_distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_limit_speed
{
public:
  explicit Init_CameraInfo_limit_speed(::deva_gaode_routing_msgs::msg::CameraInfo & msg)
  : msg_(msg)
  {}
  Init_CameraInfo_camera_distance limit_speed(::deva_gaode_routing_msgs::msg::CameraInfo::_limit_speed_type arg)
  {
    msg_.limit_speed = std::move(arg);
    return Init_CameraInfo_camera_distance(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CameraInfo msg_;
};

class Init_CameraInfo_camera_type
{
public:
  Init_CameraInfo_camera_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraInfo_limit_speed camera_type(::deva_gaode_routing_msgs::msg::CameraInfo::_camera_type_type arg)
  {
    msg_.camera_type = std::move(arg);
    return Init_CameraInfo_limit_speed(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CameraInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::CameraInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_CameraInfo_camera_type();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_INFO__BUILDER_HPP_
