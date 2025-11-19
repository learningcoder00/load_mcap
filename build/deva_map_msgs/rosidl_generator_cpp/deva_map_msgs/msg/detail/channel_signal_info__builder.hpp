// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelSignalInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_signal_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelSignalInfo_offset
{
public:
  explicit Init_ChannelSignalInfo_offset(::deva_map_msgs::msg::ChannelSignalInfo & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelSignalInfo offset(::deva_map_msgs::msg::ChannelSignalInfo::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelSignalInfo msg_;
};

class Init_ChannelSignalInfo_lane_id
{
public:
  explicit Init_ChannelSignalInfo_lane_id(::deva_map_msgs::msg::ChannelSignalInfo & msg)
  : msg_(msg)
  {}
  Init_ChannelSignalInfo_offset lane_id(::deva_map_msgs::msg::ChannelSignalInfo::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_ChannelSignalInfo_offset(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelSignalInfo msg_;
};

class Init_ChannelSignalInfo_id
{
public:
  Init_ChannelSignalInfo_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelSignalInfo_lane_id id(::deva_map_msgs::msg::ChannelSignalInfo::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ChannelSignalInfo_lane_id(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelSignalInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelSignalInfo>()
{
  return deva_map_msgs::msg::builder::Init_ChannelSignalInfo_id();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__BUILDER_HPP_
