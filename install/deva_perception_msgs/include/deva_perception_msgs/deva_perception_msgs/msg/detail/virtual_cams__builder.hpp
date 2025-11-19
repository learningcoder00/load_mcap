// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/VirtualCams.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAMS__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/virtual_cams__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_VirtualCams_vitual_cams
{
public:
  explicit Init_VirtualCams_vitual_cams(::deva_perception_msgs::msg::VirtualCams & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::VirtualCams vitual_cams(::deva_perception_msgs::msg::VirtualCams::_vitual_cams_type arg)
  {
    msg_.vitual_cams = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCams msg_;
};

class Init_VirtualCams_header
{
public:
  Init_VirtualCams_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VirtualCams_vitual_cams header(::deva_perception_msgs::msg::VirtualCams::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_VirtualCams_vitual_cams(msg_);
  }

private:
  ::deva_perception_msgs::msg::VirtualCams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::VirtualCams>()
{
  return deva_perception_msgs::msg::builder::Init_VirtualCams_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__VIRTUAL_CAMS__BUILDER_HPP_
