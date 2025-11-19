// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_lane_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelLaneInfo_lanespeedlimitation_vec
{
public:
  explicit Init_ChannelLaneInfo_lanespeedlimitation_vec(::deva_map_msgs::msg::ChannelLaneInfo & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelLaneInfo lanespeedlimitation_vec(::deva_map_msgs::msg::ChannelLaneInfo::_lanespeedlimitation_vec_type arg)
  {
    msg_.lanespeedlimitation_vec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneInfo msg_;
};

class Init_ChannelLaneInfo_turntype_vec
{
public:
  explicit Init_ChannelLaneInfo_turntype_vec(::deva_map_msgs::msg::ChannelLaneInfo & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneInfo_lanespeedlimitation_vec turntype_vec(::deva_map_msgs::msg::ChannelLaneInfo::_turntype_vec_type arg)
  {
    msg_.turntype_vec = std::move(arg);
    return Init_ChannelLaneInfo_lanespeedlimitation_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneInfo msg_;
};

class Init_ChannelLaneInfo_lanetype_vec
{
public:
  explicit Init_ChannelLaneInfo_lanetype_vec(::deva_map_msgs::msg::ChannelLaneInfo & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneInfo_turntype_vec lanetype_vec(::deva_map_msgs::msg::ChannelLaneInfo::_lanetype_vec_type arg)
  {
    msg_.lanetype_vec = std::move(arg);
    return Init_ChannelLaneInfo_turntype_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneInfo msg_;
};

class Init_ChannelLaneInfo_lane_id_vec
{
public:
  Init_ChannelLaneInfo_lane_id_vec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelLaneInfo_lanetype_vec lane_id_vec(::deva_map_msgs::msg::ChannelLaneInfo::_lane_id_vec_type arg)
  {
    msg_.lane_id_vec = std::move(arg);
    return Init_ChannelLaneInfo_lanetype_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelLaneInfo>()
{
  return deva_map_msgs::msg::builder::Init_ChannelLaneInfo_lane_id_vec();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__BUILDER_HPP_
