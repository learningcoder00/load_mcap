// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/GroupSegmentProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/group_segment_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_GroupSegmentProto_is_crucial
{
public:
  explicit Init_GroupSegmentProto_is_crucial(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::GroupSegmentProto is_crucial(::deva_navi_msgs::msg::GroupSegmentProto::_is_crucial_type arg)
  {
    msg_.is_crucial = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_is_via_point
{
public:
  explicit Init_GroupSegmentProto_is_via_point(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  Init_GroupSegmentProto_is_crucial is_via_point(::deva_navi_msgs::msg::GroupSegmentProto::_is_via_point_type arg)
  {
    msg_.is_via_point = std::move(arg);
    return Init_GroupSegmentProto_is_crucial(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_speed
{
public:
  explicit Init_GroupSegmentProto_speed(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  Init_GroupSegmentProto_is_via_point speed(::deva_navi_msgs::msg::GroupSegmentProto::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_GroupSegmentProto_is_via_point(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_status
{
public:
  explicit Init_GroupSegmentProto_status(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  Init_GroupSegmentProto_speed status(::deva_navi_msgs::msg::GroupSegmentProto::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GroupSegmentProto_speed(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_segment_count
{
public:
  explicit Init_GroupSegmentProto_segment_count(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  Init_GroupSegmentProto_status segment_count(::deva_navi_msgs::msg::GroupSegmentProto::_segment_count_type arg)
  {
    msg_.segment_count = std::move(arg);
    return Init_GroupSegmentProto_status(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_start_segment_index
{
public:
  explicit Init_GroupSegmentProto_start_segment_index(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  Init_GroupSegmentProto_segment_count start_segment_index(::deva_navi_msgs::msg::GroupSegmentProto::_start_segment_index_type arg)
  {
    msg_.start_segment_index = std::move(arg);
    return Init_GroupSegmentProto_segment_count(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_road_name
{
public:
  explicit Init_GroupSegmentProto_road_name(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  Init_GroupSegmentProto_start_segment_index road_name(::deva_navi_msgs::msg::GroupSegmentProto::_road_name_type arg)
  {
    msg_.road_name = std::move(arg);
    return Init_GroupSegmentProto_start_segment_index(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_toll_cost
{
public:
  explicit Init_GroupSegmentProto_toll_cost(::deva_navi_msgs::msg::GroupSegmentProto & msg)
  : msg_(msg)
  {}
  Init_GroupSegmentProto_road_name toll_cost(::deva_navi_msgs::msg::GroupSegmentProto::_toll_cost_type arg)
  {
    msg_.toll_cost = std::move(arg);
    return Init_GroupSegmentProto_road_name(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

class Init_GroupSegmentProto_length
{
public:
  Init_GroupSegmentProto_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GroupSegmentProto_toll_cost length(::deva_navi_msgs::msg::GroupSegmentProto::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_GroupSegmentProto_toll_cost(msg_);
  }

private:
  ::deva_navi_msgs::msg::GroupSegmentProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::GroupSegmentProto>()
{
  return deva_navi_msgs::msg::builder::Init_GroupSegmentProto_length();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__BUILDER_HPP_
