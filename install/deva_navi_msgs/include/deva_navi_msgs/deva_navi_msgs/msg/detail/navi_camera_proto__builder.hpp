// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/NaviCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/navi_camera_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_NaviCameraProto_is_hidden
{
public:
  explicit Init_NaviCameraProto_is_hidden(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::NaviCameraProto is_hidden(::deva_navi_msgs::msg::NaviCameraProto::_is_hidden_type arg)
  {
    msg_.is_hidden = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_is_new
{
public:
  explicit Init_NaviCameraProto_is_new(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_is_hidden is_new(::deva_navi_msgs::msg::NaviCameraProto::_is_new_type arg)
  {
    msg_.is_new = std::move(arg);
    return Init_NaviCameraProto_is_hidden(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_id
{
public:
  explicit Init_NaviCameraProto_id(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_is_new id(::deva_navi_msgs::msg::NaviCameraProto::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_NaviCameraProto_is_new(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_penalty
{
public:
  explicit Init_NaviCameraProto_penalty(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_id penalty(::deva_navi_msgs::msg::NaviCameraProto::_penalty_type arg)
  {
    msg_.penalty = std::move(arg);
    return Init_NaviCameraProto_id(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_sub_cameras
{
public:
  explicit Init_NaviCameraProto_sub_cameras(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_penalty sub_cameras(::deva_navi_msgs::msg::NaviCameraProto::_sub_cameras_type arg)
  {
    msg_.sub_cameras = std::move(arg);
    return Init_NaviCameraProto_penalty(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_distance_to_end
{
public:
  explicit Init_NaviCameraProto_distance_to_end(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_sub_cameras distance_to_end(::deva_navi_msgs::msg::NaviCameraProto::_distance_to_end_type arg)
  {
    msg_.distance_to_end = std::move(arg);
    return Init_NaviCameraProto_sub_cameras(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_link_index
{
public:
  explicit Init_NaviCameraProto_link_index(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_distance_to_end link_index(::deva_navi_msgs::msg::NaviCameraProto::_link_index_type arg)
  {
    msg_.link_index = std::move(arg);
    return Init_NaviCameraProto_distance_to_end(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_segment_index
{
public:
  explicit Init_NaviCameraProto_segment_index(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_link_index segment_index(::deva_navi_msgs::msg::NaviCameraProto::_segment_index_type arg)
  {
    msg_.segment_index = std::move(arg);
    return Init_NaviCameraProto_link_index(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_road_class
{
public:
  explicit Init_NaviCameraProto_road_class(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_segment_index road_class(::deva_navi_msgs::msg::NaviCameraProto::_road_class_type arg)
  {
    msg_.road_class = std::move(arg);
    return Init_NaviCameraProto_segment_index(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_speed
{
public:
  explicit Init_NaviCameraProto_speed(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_road_class speed(::deva_navi_msgs::msg::NaviCameraProto::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_NaviCameraProto_road_class(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_distance
{
public:
  explicit Init_NaviCameraProto_distance(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_speed distance(::deva_navi_msgs::msg::NaviCameraProto::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_NaviCameraProto_speed(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_type
{
public:
  explicit Init_NaviCameraProto_type(::deva_navi_msgs::msg::NaviCameraProto & msg)
  : msg_(msg)
  {}
  Init_NaviCameraProto_distance type(::deva_navi_msgs::msg::NaviCameraProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_NaviCameraProto_distance(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

class Init_NaviCameraProto_coord_3d
{
public:
  Init_NaviCameraProto_coord_3d()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NaviCameraProto_type coord_3d(::deva_navi_msgs::msg::NaviCameraProto::_coord_3d_type arg)
  {
    msg_.coord_3d = std::move(arg);
    return Init_NaviCameraProto_type(msg_);
  }

private:
  ::deva_navi_msgs::msg::NaviCameraProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::NaviCameraProto>()
{
  return deva_navi_msgs::msg::builder::Init_NaviCameraProto_coord_3d();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_CAMERA_PROTO__BUILDER_HPP_
