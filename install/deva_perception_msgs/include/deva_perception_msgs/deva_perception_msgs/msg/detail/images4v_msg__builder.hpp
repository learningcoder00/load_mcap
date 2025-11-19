// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/Images4vMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/images4v_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_Images4vMsg_pubtime
{
public:
  explicit Init_Images4vMsg_pubtime(::deva_perception_msgs::msg::Images4vMsg & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::Images4vMsg pubtime(::deva_perception_msgs::msg::Images4vMsg::_pubtime_type arg)
  {
    msg_.pubtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::Images4vMsg msg_;
};

class Init_Images4vMsg_left_cam_image
{
public:
  explicit Init_Images4vMsg_left_cam_image(::deva_perception_msgs::msg::Images4vMsg & msg)
  : msg_(msg)
  {}
  Init_Images4vMsg_pubtime left_cam_image(::deva_perception_msgs::msg::Images4vMsg::_left_cam_image_type arg)
  {
    msg_.left_cam_image = std::move(arg);
    return Init_Images4vMsg_pubtime(msg_);
  }

private:
  ::deva_perception_msgs::msg::Images4vMsg msg_;
};

class Init_Images4vMsg_back_cam_image
{
public:
  explicit Init_Images4vMsg_back_cam_image(::deva_perception_msgs::msg::Images4vMsg & msg)
  : msg_(msg)
  {}
  Init_Images4vMsg_left_cam_image back_cam_image(::deva_perception_msgs::msg::Images4vMsg::_back_cam_image_type arg)
  {
    msg_.back_cam_image = std::move(arg);
    return Init_Images4vMsg_left_cam_image(msg_);
  }

private:
  ::deva_perception_msgs::msg::Images4vMsg msg_;
};

class Init_Images4vMsg_front_cam_image
{
public:
  explicit Init_Images4vMsg_front_cam_image(::deva_perception_msgs::msg::Images4vMsg & msg)
  : msg_(msg)
  {}
  Init_Images4vMsg_back_cam_image front_cam_image(::deva_perception_msgs::msg::Images4vMsg::_front_cam_image_type arg)
  {
    msg_.front_cam_image = std::move(arg);
    return Init_Images4vMsg_back_cam_image(msg_);
  }

private:
  ::deva_perception_msgs::msg::Images4vMsg msg_;
};

class Init_Images4vMsg_right_cam_image
{
public:
  explicit Init_Images4vMsg_right_cam_image(::deva_perception_msgs::msg::Images4vMsg & msg)
  : msg_(msg)
  {}
  Init_Images4vMsg_front_cam_image right_cam_image(::deva_perception_msgs::msg::Images4vMsg::_right_cam_image_type arg)
  {
    msg_.right_cam_image = std::move(arg);
    return Init_Images4vMsg_front_cam_image(msg_);
  }

private:
  ::deva_perception_msgs::msg::Images4vMsg msg_;
};

class Init_Images4vMsg_header
{
public:
  Init_Images4vMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Images4vMsg_right_cam_image header(::deva_perception_msgs::msg::Images4vMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Images4vMsg_right_cam_image(msg_);
  }

private:
  ::deva_perception_msgs::msg::Images4vMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::Images4vMsg>()
{
  return deva_perception_msgs::msg::builder::Init_Images4vMsg_header();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__IMAGES4V_MSG__BUILDER_HPP_
