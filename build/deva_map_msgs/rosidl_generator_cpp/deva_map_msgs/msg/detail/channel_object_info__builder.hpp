// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelObjectInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_OBJECT_INFO__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_OBJECT_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_object_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelObjectInfo_offset
{
public:
  explicit Init_ChannelObjectInfo_offset(::deva_map_msgs::msg::ChannelObjectInfo & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelObjectInfo offset(::deva_map_msgs::msg::ChannelObjectInfo::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelObjectInfo msg_;
};

class Init_ChannelObjectInfo_object_type
{
public:
  explicit Init_ChannelObjectInfo_object_type(::deva_map_msgs::msg::ChannelObjectInfo & msg)
  : msg_(msg)
  {}
  Init_ChannelObjectInfo_offset object_type(::deva_map_msgs::msg::ChannelObjectInfo::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_ChannelObjectInfo_offset(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelObjectInfo msg_;
};

class Init_ChannelObjectInfo_lane_id
{
public:
  explicit Init_ChannelObjectInfo_lane_id(::deva_map_msgs::msg::ChannelObjectInfo & msg)
  : msg_(msg)
  {}
  Init_ChannelObjectInfo_object_type lane_id(::deva_map_msgs::msg::ChannelObjectInfo::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_ChannelObjectInfo_object_type(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelObjectInfo msg_;
};

class Init_ChannelObjectInfo_id
{
public:
  Init_ChannelObjectInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelObjectInfo_lane_id id(::deva_map_msgs::msg::ChannelObjectInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ChannelObjectInfo_lane_id(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelObjectInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelObjectInfo>()
{
  return deva_map_msgs::msg::builder::Init_ChannelObjectInfo_id();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_OBJECT_INFO__BUILDER_HPP_
