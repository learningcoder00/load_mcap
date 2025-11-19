// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_lane_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelLaneType_lanetype
{
public:
  explicit Init_ChannelLaneType_lanetype(::deva_map_msgs::msg::ChannelLaneType & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelLaneType lanetype(::deva_map_msgs::msg::ChannelLaneType::_lanetype_type arg)
  {
    msg_.lanetype = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneType msg_;
};

class Init_ChannelLaneType_s_end
{
public:
  explicit Init_ChannelLaneType_s_end(::deva_map_msgs::msg::ChannelLaneType & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneType_lanetype s_end(::deva_map_msgs::msg::ChannelLaneType::_s_end_type arg)
  {
    msg_.s_end = std::move(arg);
    return Init_ChannelLaneType_lanetype(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneType msg_;
};

class Init_ChannelLaneType_s_start
{
public:
  Init_ChannelLaneType_s_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelLaneType_s_end s_start(::deva_map_msgs::msg::ChannelLaneType::_s_start_type arg)
  {
    msg_.s_start = std::move(arg);
    return Init_ChannelLaneType_s_end(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelLaneType>()
{
  return deva_map_msgs::msg::builder::Init_ChannelLaneType_s_start();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__BUILDER_HPP_
