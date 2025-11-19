// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneSpeedLimitation.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_SPEED_LIMITATION__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_SPEED_LIMITATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelLaneSpeedLimitation_max_speed_limitation
{
public:
  explicit Init_ChannelLaneSpeedLimitation_max_speed_limitation(::deva_map_msgs::msg::ChannelLaneSpeedLimitation & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelLaneSpeedLimitation max_speed_limitation(::deva_map_msgs::msg::ChannelLaneSpeedLimitation::_max_speed_limitation_type arg)
  {
    msg_.max_speed_limitation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneSpeedLimitation msg_;
};

class Init_ChannelLaneSpeedLimitation_min_speed_limitation
{
public:
  explicit Init_ChannelLaneSpeedLimitation_min_speed_limitation(::deva_map_msgs::msg::ChannelLaneSpeedLimitation & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneSpeedLimitation_max_speed_limitation min_speed_limitation(::deva_map_msgs::msg::ChannelLaneSpeedLimitation::_min_speed_limitation_type arg)
  {
    msg_.min_speed_limitation = std::move(arg);
    return Init_ChannelLaneSpeedLimitation_max_speed_limitation(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneSpeedLimitation msg_;
};

class Init_ChannelLaneSpeedLimitation_s_end
{
public:
  explicit Init_ChannelLaneSpeedLimitation_s_end(::deva_map_msgs::msg::ChannelLaneSpeedLimitation & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneSpeedLimitation_min_speed_limitation s_end(::deva_map_msgs::msg::ChannelLaneSpeedLimitation::_s_end_type arg)
  {
    msg_.s_end = std::move(arg);
    return Init_ChannelLaneSpeedLimitation_min_speed_limitation(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneSpeedLimitation msg_;
};

class Init_ChannelLaneSpeedLimitation_s_start
{
public:
  Init_ChannelLaneSpeedLimitation_s_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelLaneSpeedLimitation_s_end s_start(::deva_map_msgs::msg::ChannelLaneSpeedLimitation::_s_start_type arg)
  {
    msg_.s_start = std::move(arg);
    return Init_ChannelLaneSpeedLimitation_s_end(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneSpeedLimitation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelLaneSpeedLimitation>()
{
  return deva_map_msgs::msg::builder::Init_ChannelLaneSpeedLimitation_s_start();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_SPEED_LIMITATION__BUILDER_HPP_
