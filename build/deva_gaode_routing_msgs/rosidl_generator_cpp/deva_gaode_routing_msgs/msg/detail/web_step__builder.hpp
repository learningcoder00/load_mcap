// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebStep.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_step__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebStep_assistant_action
{
public:
  explicit Init_WebStep_assistant_action(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebStep assistant_action(::deva_gaode_routing_msgs::msg::WebStep::_assistant_action_type arg)
  {
    msg_.assistant_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_main_action
{
public:
  explicit Init_WebStep_main_action(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  Init_WebStep_assistant_action main_action(::deva_gaode_routing_msgs::msg::WebStep::_main_action_type arg)
  {
    msg_.main_action = std::move(arg);
    return Init_WebStep_assistant_action(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_forward_type
{
public:
  explicit Init_WebStep_forward_type(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  Init_WebStep_main_action forward_type(::deva_gaode_routing_msgs::msg::WebStep::_forward_type_type arg)
  {
    msg_.forward_type = std::move(arg);
    return Init_WebStep_main_action(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_forward_direction
{
public:
  explicit Init_WebStep_forward_direction(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  Init_WebStep_forward_type forward_direction(::deva_gaode_routing_msgs::msg::WebStep::_forward_direction_type arg)
  {
    msg_.forward_direction = std::move(arg);
    return Init_WebStep_forward_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_time
{
public:
  explicit Init_WebStep_time(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  Init_WebStep_forward_direction time(::deva_gaode_routing_msgs::msg::WebStep::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_WebStep_forward_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_distance
{
public:
  explicit Init_WebStep_distance(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  Init_WebStep_time distance(::deva_gaode_routing_msgs::msg::WebStep::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_WebStep_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_traffic_light_count
{
public:
  explicit Init_WebStep_traffic_light_count(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  Init_WebStep_distance traffic_light_count(::deva_gaode_routing_msgs::msg::WebStep::_traffic_light_count_type arg)
  {
    msg_.traffic_light_count = std::move(arg);
    return Init_WebStep_distance(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_roads
{
public:
  explicit Init_WebStep_roads(::deva_gaode_routing_msgs::msg::WebStep & msg)
  : msg_(msg)
  {}
  Init_WebStep_traffic_light_count roads(::deva_gaode_routing_msgs::msg::WebStep::_roads_type arg)
  {
    msg_.roads = std::move(arg);
    return Init_WebStep_traffic_light_count(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

class Init_WebStep_id
{
public:
  Init_WebStep_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebStep_roads id(::deva_gaode_routing_msgs::msg::WebStep::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_WebStep_roads(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebStep msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebStep>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebStep_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__BUILDER_HPP_
