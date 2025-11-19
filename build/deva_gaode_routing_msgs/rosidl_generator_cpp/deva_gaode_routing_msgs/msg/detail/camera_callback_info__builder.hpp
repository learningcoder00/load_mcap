// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/CameraCallbackInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraCallbackInfo_camera_info
{
public:
  explicit Init_CameraCallbackInfo_camera_info(::deva_gaode_routing_msgs::msg::CameraCallbackInfo & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::CameraCallbackInfo camera_info(::deva_gaode_routing_msgs::msg::CameraCallbackInfo::_camera_info_type arg)
  {
    msg_.camera_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CameraCallbackInfo msg_;
};

class Init_CameraCallbackInfo_inter_remain_distance
{
public:
  Init_CameraCallbackInfo_inter_remain_distance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraCallbackInfo_camera_info inter_remain_distance(::deva_gaode_routing_msgs::msg::CameraCallbackInfo::_inter_remain_distance_type arg)
  {
    msg_.inter_remain_distance = std::move(arg);
    return Init_CameraCallbackInfo_camera_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::CameraCallbackInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::CameraCallbackInfo>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_CameraCallbackInfo_inter_remain_distance();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__CAMERA_CALLBACK_INFO__BUILDER_HPP_
