// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/ViaPointInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/via_point_info_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_ViaPointInfoProto_poi_name
{
public:
  explicit Init_ViaPointInfoProto_poi_name(::deva_navi_msgs::msg::ViaPointInfoProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::ViaPointInfoProto poi_name(::deva_navi_msgs::msg::ViaPointInfoProto::_poi_name_type arg)
  {
    msg_.poi_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::ViaPointInfoProto msg_;
};

class Init_ViaPointInfoProto_projective
{
public:
  explicit Init_ViaPointInfoProto_projective(::deva_navi_msgs::msg::ViaPointInfoProto & msg)
  : msg_(msg)
  {}
  Init_ViaPointInfoProto_poi_name projective(::deva_navi_msgs::msg::ViaPointInfoProto::_projective_type arg)
  {
    msg_.projective = std::move(arg);
    return Init_ViaPointInfoProto_poi_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::ViaPointInfoProto msg_;
};

class Init_ViaPointInfoProto_show
{
public:
  explicit Init_ViaPointInfoProto_show(::deva_navi_msgs::msg::ViaPointInfoProto & msg)
  : msg_(msg)
  {}
  Init_ViaPointInfoProto_projective show(::deva_navi_msgs::msg::ViaPointInfoProto::_show_type arg)
  {
    msg_.show = std::move(arg);
    return Init_ViaPointInfoProto_projective(msg_);
  }

private:
  ::deva_navi_msgs::msg::ViaPointInfoProto msg_;
};

class Init_ViaPointInfoProto_direction
{
public:
  explicit Init_ViaPointInfoProto_direction(::deva_navi_msgs::msg::ViaPointInfoProto & msg)
  : msg_(msg)
  {}
  Init_ViaPointInfoProto_show direction(::deva_navi_msgs::msg::ViaPointInfoProto::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_ViaPointInfoProto_show(msg_);
  }

private:
  ::deva_navi_msgs::msg::ViaPointInfoProto msg_;
};

class Init_ViaPointInfoProto_segment_idx
{
public:
  Init_ViaPointInfoProto_segment_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ViaPointInfoProto_direction segment_idx(::deva_navi_msgs::msg::ViaPointInfoProto::_segment_idx_type arg)
  {
    msg_.segment_idx = std::move(arg);
    return Init_ViaPointInfoProto_direction(msg_);
  }

private:
  ::deva_navi_msgs::msg::ViaPointInfoProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::ViaPointInfoProto>()
{
  return deva_navi_msgs::msg::builder::Init_ViaPointInfoProto_segment_idx();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__BUILDER_HPP_
