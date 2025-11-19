// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_lane_line__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelLaneLine_markingpoint_vec
{
public:
  explicit Init_ChannelLaneLine_markingpoint_vec(::deva_map_msgs::msg::ChannelLaneLine & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelLaneLine markingpoint_vec(::deva_map_msgs::msg::ChannelLaneLine::_markingpoint_vec_type arg)
  {
    msg_.markingpoint_vec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneLine msg_;
};

class Init_ChannelLaneLine_markingequation_vec
{
public:
  explicit Init_ChannelLaneLine_markingequation_vec(::deva_map_msgs::msg::ChannelLaneLine & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneLine_markingpoint_vec markingequation_vec(::deva_map_msgs::msg::ChannelLaneLine::_markingequation_vec_type arg)
  {
    msg_.markingequation_vec = std::move(arg);
    return Init_ChannelLaneLine_markingpoint_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneLine msg_;
};

class Init_ChannelLaneLine_available
{
public:
  Init_ChannelLaneLine_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelLaneLine_markingequation_vec available(::deva_map_msgs::msg::ChannelLaneLine::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_ChannelLaneLine_markingequation_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneLine msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelLaneLine>()
{
  return deva_map_msgs::msg::builder::Init_ChannelLaneLine_available();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_LINE__BUILDER_HPP_
