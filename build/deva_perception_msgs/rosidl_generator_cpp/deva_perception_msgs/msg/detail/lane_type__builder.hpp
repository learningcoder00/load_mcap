// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/LaneType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/lane_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneType_s_end
{
public:
  explicit Init_LaneType_s_end(::deva_perception_msgs::msg::LaneType & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::LaneType s_end(::deva_perception_msgs::msg::LaneType::_s_end_type arg)
  {
    msg_.s_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneType msg_;
};

class Init_LaneType_s_start
{
public:
  explicit Init_LaneType_s_start(::deva_perception_msgs::msg::LaneType & msg)
  : msg_(msg)
  {}
  Init_LaneType_s_end s_start(::deva_perception_msgs::msg::LaneType::_s_start_type arg)
  {
    msg_.s_start = std::move(arg);
    return Init_LaneType_s_end(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneType msg_;
};

class Init_LaneType_lane_color
{
public:
  explicit Init_LaneType_lane_color(::deva_perception_msgs::msg::LaneType & msg)
  : msg_(msg)
  {}
  Init_LaneType_s_start lane_color(::deva_perception_msgs::msg::LaneType::_lane_color_type arg)
  {
    msg_.lane_color = std::move(arg);
    return Init_LaneType_s_start(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneType msg_;
};

class Init_LaneType_lane_type
{
public:
  Init_LaneType_lane_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneType_lane_color lane_type(::deva_perception_msgs::msg::LaneType::_lane_type_type arg)
  {
    msg_.lane_type = std::move(arg);
    return Init_LaneType_lane_color(msg_);
  }

private:
  ::deva_perception_msgs::msg::LaneType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::LaneType>()
{
  return deva_perception_msgs::msg::builder::Init_LaneType_lane_type();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__BUILDER_HPP_
