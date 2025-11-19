// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/NaviSubCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/navi_sub_camera_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_NaviSubCameraProto_speed
{
public:
  explicit Init_NaviSubCameraProto_speed(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::NaviSubCameraProto speed(::deva_navi_msgs::msg::NaviSubCameraProto::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_is_special
{
public:
  explicit Init_NaviSubCameraProto_is_special(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_speed is_special(::deva_navi_msgs::msg::NaviSubCameraProto::_is_special_type arg)
  {
    msg_.is_special = std::move(arg);
    return Init_NaviSubCameraProto_speed(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_is_match
{
public:
  explicit Init_NaviSubCameraProto_is_match(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_is_special is_match(::deva_navi_msgs::msg::NaviSubCameraProto::_is_match_type arg)
  {
    msg_.is_match = std::move(arg);
    return Init_NaviSubCameraProto_is_special(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_is_variable_speed
{
public:
  explicit Init_NaviSubCameraProto_is_variable_speed(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_is_match is_variable_speed(::deva_navi_msgs::msg::NaviSubCameraProto::_is_variable_speed_type arg)
  {
    msg_.is_variable_speed = std::move(arg);
    return Init_NaviSubCameraProto_is_match(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_is_new
{
public:
  explicit Init_NaviSubCameraProto_is_new(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_is_variable_speed is_new(::deva_navi_msgs::msg::NaviSubCameraProto::_is_new_type arg)
  {
    msg_.is_new = std::move(arg);
    return Init_NaviSubCameraProto_is_variable_speed(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_priority
{
public:
  explicit Init_NaviSubCameraProto_priority(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_is_new priority(::deva_navi_msgs::msg::NaviSubCameraProto::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_NaviSubCameraProto_is_new(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_penalty
{
public:
  explicit Init_NaviSubCameraProto_penalty(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_priority penalty(::deva_navi_msgs::msg::NaviSubCameraProto::_penalty_type arg)
  {
    msg_.penalty = std::move(arg);
    return Init_NaviSubCameraProto_priority(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_busway_time_enable
{
public:
  explicit Init_NaviSubCameraProto_busway_time_enable(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_penalty busway_time_enable(::deva_navi_msgs::msg::NaviSubCameraProto::_busway_time_enable_type arg)
  {
    msg_.busway_time_enable = std::move(arg);
    return Init_NaviSubCameraProto_penalty(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_camera_id
{
public:
  explicit Init_NaviSubCameraProto_camera_id(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_busway_time_enable camera_id(::deva_navi_msgs::msg::NaviSubCameraProto::_camera_id_type arg)
  {
    msg_.camera_id = std::move(arg);
    return Init_NaviSubCameraProto_busway_time_enable(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_make_sound
{
public:
  explicit Init_NaviSubCameraProto_make_sound(::deva_navi_msgs::msg::NaviSubCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviSubCameraProto_camera_id make_sound(::deva_navi_msgs::msg::NaviSubCameraProto::_make_sound_type arg)
  {
    msg_.make_sound = std::move(arg);
    return Init_NaviSubCameraProto_camera_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

class Init_NaviSubCameraProto_sub_type
{
public:
  Init_NaviSubCameraProto_sub_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NaviSubCameraProto_make_sound sub_type(::deva_navi_msgs::msg::NaviSubCameraProto::_sub_type_type arg)
  {
    msg_.sub_type = std::move(arg);
    return Init_NaviSubCameraProto_make_sound(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviSubCameraProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::NaviSubCameraProto>()
{
  return deva_navi_msgs::msg::builder::Init_NaviSubCameraProto_sub_type();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__BUILDER_HPP_
