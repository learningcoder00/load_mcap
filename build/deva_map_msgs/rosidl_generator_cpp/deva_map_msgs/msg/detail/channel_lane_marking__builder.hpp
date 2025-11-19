// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneMarking.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ChannelLaneMarking_marking_point_vec
{
public:
  explicit Init_ChannelLaneMarking_marking_point_vec(::deva_map_msgs::msg::ChannelLaneMarking & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::ChannelLaneMarking marking_point_vec(::deva_map_msgs::msg::ChannelLaneMarking::_marking_point_vec_type arg)
  {
    msg_.marking_point_vec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneMarking msg_;
};

class Init_ChannelLaneMarking_marking_type_vec
{
public:
  explicit Init_ChannelLaneMarking_marking_type_vec(::deva_map_msgs::msg::ChannelLaneMarking & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneMarking_marking_point_vec marking_type_vec(::deva_map_msgs::msg::ChannelLaneMarking::_marking_type_vec_type arg)
  {
    msg_.marking_type_vec = std::move(arg);
    return Init_ChannelLaneMarking_marking_point_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneMarking msg_;
};

class Init_ChannelLaneMarking_marking_equation_vec
{
public:
  explicit Init_ChannelLaneMarking_marking_equation_vec(::deva_map_msgs::msg::ChannelLaneMarking & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneMarking_marking_type_vec marking_equation_vec(::deva_map_msgs::msg::ChannelLaneMarking::_marking_equation_vec_type arg)
  {
    msg_.marking_equation_vec = std::move(arg);
    return Init_ChannelLaneMarking_marking_type_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneMarking msg_;
};

class Init_ChannelLaneMarking_perception_lane_id
{
public:
  explicit Init_ChannelLaneMarking_perception_lane_id(::deva_map_msgs::msg::ChannelLaneMarking & msg)
  : msg_(msg)
  {}
  Init_ChannelLaneMarking_marking_equation_vec perception_lane_id(::deva_map_msgs::msg::ChannelLaneMarking::_perception_lane_id_type arg)
  {
    msg_.perception_lane_id = std::move(arg);
    return Init_ChannelLaneMarking_marking_equation_vec(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneMarking msg_;
};

class Init_ChannelLaneMarking_available
{
public:
  Init_ChannelLaneMarking_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChannelLaneMarking_perception_lane_id available(::deva_map_msgs::msg::ChannelLaneMarking::_available_type arg)
  {
    msg_.available = std::move(arg);
    return Init_ChannelLaneMarking_perception_lane_id(msg_);
  }

private:
  ::deva_map_msgs::msg::ChannelLaneMarking msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ChannelLaneMarking>()
{
  return deva_map_msgs::msg::builder::Init_ChannelLaneMarking_available();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_MARKING__BUILDER_HPP_
