// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_Channel_signal_info
{
public:
  explicit Init_Channel_signal_info(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::Channel signal_info(::deva_map_msgs::msg::Channel::_signal_info_type arg)
  {
    msg_.signal_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_object_info
{
public:
  explicit Init_Channel_object_info(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_signal_info object_info(::deva_map_msgs::msg::Channel::_object_info_type arg)
  {
    msg_.object_info = std::move(arg);
    return Init_Channel_signal_info(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_right_channel_idx
{
public:
  explicit Init_Channel_right_channel_idx(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_object_info right_channel_idx(::deva_map_msgs::msg::Channel::_right_channel_idx_type arg)
  {
    msg_.right_channel_idx = std::move(arg);
    return Init_Channel_object_info(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_left_channel_idx
{
public:
  explicit Init_Channel_left_channel_idx(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_right_channel_idx left_channel_idx(::deva_map_msgs::msg::Channel::_left_channel_idx_type arg)
  {
    msg_.left_channel_idx = std::move(arg);
    return Init_Channel_right_channel_idx(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_right_marking
{
public:
  explicit Init_Channel_right_marking(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_left_channel_idx right_marking(::deva_map_msgs::msg::Channel::_right_marking_type arg)
  {
    msg_.right_marking = std::move(arg);
    return Init_Channel_left_channel_idx(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_left_marking
{
public:
  explicit Init_Channel_left_marking(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_right_marking left_marking(::deva_map_msgs::msg::Channel::_left_marking_type arg)
  {
    msg_.left_marking = std::move(arg);
    return Init_Channel_right_marking(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_reference_line_vec
{
public:
  explicit Init_Channel_reference_line_vec(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_left_marking reference_line_vec(::deva_map_msgs::msg::Channel::_reference_line_vec_type arg)
  {
    msg_.reference_line_vec = std::move(arg);
    return Init_Channel_left_marking(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_middle_line
{
public:
  explicit Init_Channel_middle_line(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_reference_line_vec middle_line(::deva_map_msgs::msg::Channel::_middle_line_type arg)
  {
    msg_.middle_line = std::move(arg);
    return Init_Channel_reference_line_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_laneinfo
{
public:
  explicit Init_Channel_laneinfo(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_middle_line laneinfo(::deva_map_msgs::msg::Channel::_laneinfo_type arg)
  {
    msg_.laneinfo = std::move(arg);
    return Init_Channel_middle_line(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_lane_offset
{
public:
  explicit Init_Channel_lane_offset(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_laneinfo lane_offset(::deva_map_msgs::msg::Channel::_lane_offset_type arg)
  {
    msg_.lane_offset = std::move(arg);
    return Init_Channel_laneinfo(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_channel_idx
{
public:
  explicit Init_Channel_channel_idx(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_lane_offset channel_idx(::deva_map_msgs::msg::Channel::_channel_idx_type arg)
  {
    msg_.channel_idx = std::move(arg);
    return Init_Channel_lane_offset(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_current_lane_id
{
public:
  explicit Init_Channel_current_lane_id(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_channel_idx current_lane_id(::deva_map_msgs::msg::Channel::_current_lane_id_type arg)
  {
    msg_.current_lane_id = std::move(arg);
    return Init_Channel_channel_idx(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_errcode
{
public:
  explicit Init_Channel_errcode(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_current_lane_id errcode(::deva_map_msgs::msg::Channel::_errcode_type arg)
  {
    msg_.errcode = std::move(arg);
    return Init_Channel_current_lane_id(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_is_on_route
{
public:
  explicit Init_Channel_is_on_route(::deva_map_msgs::msg::Channel & msg)
  : msg_(msg)
  {}
  Init_Channel_errcode is_on_route(::deva_map_msgs::msg::Channel::_is_on_route_type arg)
  {
    msg_.is_on_route = std::move(arg);
    return Init_Channel_errcode(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

class Init_Channel_available
{
public:
  Init_Channel_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Channel_is_on_route available(::deva_map_msgs::msg::Channel::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_Channel_is_on_route(msg_);
  }

private:
  ::deva_map_msgs::msg::Channel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::Channel>()
{
  return deva_map_msgs::msg::builder::Init_Channel_available();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__BUILDER_HPP_
