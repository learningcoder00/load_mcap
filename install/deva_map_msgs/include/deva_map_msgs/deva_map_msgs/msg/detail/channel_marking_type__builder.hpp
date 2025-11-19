// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelMarkingType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_MARKING_TYPE__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_MARKING_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_marking_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelMarkingType_markingcolor
{
public:
  explicit Init_ChannelMarkingType_markingcolor(::deva_map_msgs::msg::ChannelMarkingType & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelMarkingType markingcolor(::deva_map_msgs::msg::ChannelMarkingType::_markingcolor_type arg)
  {
    msg_.markingcolor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelMarkingType msg_;
};

class Init_ChannelMarkingType_markingtype
{
public:
  explicit Init_ChannelMarkingType_markingtype(::deva_map_msgs::msg::ChannelMarkingType & msg)
  : msg_(msg)
  {}
  Init_ChannelMarkingType_markingcolor markingtype(::deva_map_msgs::msg::ChannelMarkingType::_markingtype_type arg)
  {
    msg_.markingtype = std::move(arg);
    return Init_ChannelMarkingType_markingcolor(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelMarkingType msg_;
};

class Init_ChannelMarkingType_s_end
{
public:
  explicit Init_ChannelMarkingType_s_end(::deva_map_msgs::msg::ChannelMarkingType & msg)
  : msg_(msg)
  {}
  Init_ChannelMarkingType_markingtype s_end(::deva_map_msgs::msg::ChannelMarkingType::_s_end_type arg)
  {
    msg_.s_end = std::move(arg);
    return Init_ChannelMarkingType_markingtype(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelMarkingType msg_;
};

class Init_ChannelMarkingType_s_start
{
public:
  Init_ChannelMarkingType_s_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelMarkingType_s_end s_start(::deva_map_msgs::msg::ChannelMarkingType::_s_start_type arg)
  {
    msg_.s_start = std::move(arg);
    return Init_ChannelMarkingType_s_end(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelMarkingType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelMarkingType>()
{
  return deva_map_msgs::msg::builder::Init_ChannelMarkingType_s_start();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_MARKING_TYPE__BUILDER_HPP_
