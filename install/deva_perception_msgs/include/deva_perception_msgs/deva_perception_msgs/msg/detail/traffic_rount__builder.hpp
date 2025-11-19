// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/TrafficRount.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/traffic_rount__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficRount_road_info
{
public:
  explicit Init_TrafficRount_road_info(::deva_perception_msgs::msg::TrafficRount & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::TrafficRount road_info(::deva_perception_msgs::msg::TrafficRount::_road_info_type arg)
  {
    msg_.road_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRount msg_;
};

class Init_TrafficRount_cur_road
{
public:
  explicit Init_TrafficRount_cur_road(::deva_perception_msgs::msg::TrafficRount & msg)
  : msg_(msg)
  {}
  Init_TrafficRount_road_info cur_road(::deva_perception_msgs::msg::TrafficRount::_cur_road_type arg)
  {
    msg_.cur_road = std::move(arg);
    return Init_TrafficRount_road_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRount msg_;
};

class Init_TrafficRount_lane_info
{
public:
  explicit Init_TrafficRount_lane_info(::deva_perception_msgs::msg::TrafficRount & msg)
  : msg_(msg)
  {}
  Init_TrafficRount_cur_road lane_info(::deva_perception_msgs::msg::TrafficRount::_lane_info_type arg)
  {
    msg_.lane_info = std::move(arg);
    return Init_TrafficRount_cur_road(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRount msg_;
};

class Init_TrafficRount_timestamp
{
public:
  Init_TrafficRount_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficRount_lane_info timestamp(::deva_perception_msgs::msg::TrafficRount::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrafficRount_lane_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::TrafficRount msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::TrafficRount>()
{
  return deva_perception_msgs::msg::builder::Init_TrafficRount_timestamp();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_ROUNT__BUILDER_HPP_
