// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficLight_bind_id
{
public:
  explicit Init_TrafficLight_bind_id(::deva_map_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  ::deva_map_msgs::msg::TrafficLight bind_id(::deva_map_msgs::msg::TrafficLight::_bind_id_type arg)
  {
    msg_.bind_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_remaining_time
{
public:
  explicit Init_TrafficLight_remaining_time(::deva_map_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_bind_id remaining_time(::deva_map_msgs::msg::TrafficLight::_remaining_time_type arg)
  {
    msg_.remaining_time = std::move(arg);
    return Init_TrafficLight_bind_id(msg_);
  }

private:
  ::deva_map_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_blink
{
public:
  explicit Init_TrafficLight_blink(::deva_map_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_remaining_time blink(::deva_map_msgs::msg::TrafficLight::_blink_type arg)
  {
    msg_.blink = std::move(arg);
    return Init_TrafficLight_remaining_time(msg_);
  }

private:
  ::deva_map_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_color_type
{
public:
  explicit Init_TrafficLight_color_type(::deva_map_msgs::msg::TrafficLight & msg)
  : msg_(msg)
  {}
  Init_TrafficLight_blink color_type(::deva_map_msgs::msg::TrafficLight::_color_type_type arg)
  {
    msg_.color_type = std::move(arg);
    return Init_TrafficLight_blink(msg_);
  }

private:
  ::deva_map_msgs::msg::TrafficLight msg_;
};

class Init_TrafficLight_perception_obstacle
{
public:
  Init_TrafficLight_perception_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficLight_color_type perception_obstacle(::deva_map_msgs::msg::TrafficLight::_perception_obstacle_type arg)
  {
    msg_.perception_obstacle = std::move(arg);
    return Init_TrafficLight_color_type(msg_);
  }

private:
  ::deva_map_msgs::msg::TrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::TrafficLight>()
{
  return deva_map_msgs::msg::builder::Init_TrafficLight_perception_obstacle();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__BUILDER_HPP_
