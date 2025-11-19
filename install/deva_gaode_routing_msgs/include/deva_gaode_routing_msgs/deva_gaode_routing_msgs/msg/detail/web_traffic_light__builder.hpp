// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebTrafficLight_light_info
{
public:
  explicit Init_WebTrafficLight_light_info(::deva_gaode_routing_msgs::msg::WebTrafficLight & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebTrafficLight light_info(::deva_gaode_routing_msgs::msg::WebTrafficLight::_light_info_type arg)
  {
    msg_.light_info = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebTrafficLight msg_;
};

class Init_WebTrafficLight_status
{
public:
  explicit Init_WebTrafficLight_status(::deva_gaode_routing_msgs::msg::WebTrafficLight & msg)
  : msg_(msg)
  {}
  Init_WebTrafficLight_light_info status(::deva_gaode_routing_msgs::msg::WebTrafficLight::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_WebTrafficLight_light_info(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebTrafficLight msg_;
};

class Init_WebTrafficLight_position
{
public:
  explicit Init_WebTrafficLight_position(::deva_gaode_routing_msgs::msg::WebTrafficLight & msg)
  : msg_(msg)
  {}
  Init_WebTrafficLight_status position(::deva_gaode_routing_msgs::msg::WebTrafficLight::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_WebTrafficLight_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebTrafficLight msg_;
};

class Init_WebTrafficLight_path_id
{
public:
  explicit Init_WebTrafficLight_path_id(::deva_gaode_routing_msgs::msg::WebTrafficLight & msg)
  : msg_(msg)
  {}
  Init_WebTrafficLight_position path_id(::deva_gaode_routing_msgs::msg::WebTrafficLight::_path_id_type arg)
  {
    msg_.path_id = std::move(arg);
    return Init_WebTrafficLight_position(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebTrafficLight msg_;
};

class Init_WebTrafficLight_setp_index
{
public:
  explicit Init_WebTrafficLight_setp_index(::deva_gaode_routing_msgs::msg::WebTrafficLight & msg)
  : msg_(msg)
  {}
  Init_WebTrafficLight_path_id setp_index(::deva_gaode_routing_msgs::msg::WebTrafficLight::_setp_index_type arg)
  {
    msg_.setp_index = std::move(arg);
    return Init_WebTrafficLight_path_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebTrafficLight msg_;
};

class Init_WebTrafficLight_road_index
{
public:
  explicit Init_WebTrafficLight_road_index(::deva_gaode_routing_msgs::msg::WebTrafficLight & msg)
  : msg_(msg)
  {}
  Init_WebTrafficLight_setp_index road_index(::deva_gaode_routing_msgs::msg::WebTrafficLight::_road_index_type arg)
  {
    msg_.road_index = std::move(arg);
    return Init_WebTrafficLight_setp_index(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebTrafficLight msg_;
};

class Init_WebTrafficLight_road_id
{
public:
  Init_WebTrafficLight_road_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebTrafficLight_road_index road_id(::deva_gaode_routing_msgs::msg::WebTrafficLight::_road_id_type arg)
  {
    msg_.road_id = std::move(arg);
    return Init_WebTrafficLight_road_index(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebTrafficLight msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebTrafficLight>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebTrafficLight_road_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__BUILDER_HPP_
