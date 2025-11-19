// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/web_road__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_WebRoad_lane_num
{
public:
  explicit Init_WebRoad_lane_num(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::WebRoad lane_num(::deva_gaode_routing_msgs::msg::WebRoad::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_intersection_msg
{
public:
  explicit Init_WebRoad_intersection_msg(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_lane_num intersection_msg(::deva_gaode_routing_msgs::msg::WebRoad::_intersection_msg_type arg)
  {
    msg_.intersection_msg = std::move(arg);
    return Init_WebRoad_lane_num(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_traffic_status
{
public:
  explicit Init_WebRoad_traffic_status(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_intersection_msg traffic_status(::deva_gaode_routing_msgs::msg::WebRoad::_traffic_status_type arg)
  {
    msg_.traffic_status = std::move(arg);
    return Init_WebRoad_intersection_msg(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_coord_list
{
public:
  explicit Init_WebRoad_coord_list(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_traffic_status coord_list(::deva_gaode_routing_msgs::msg::WebRoad::_coord_list_type arg)
  {
    msg_.coord_list = std::move(arg);
    return Init_WebRoad_traffic_status(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_link_direction
{
public:
  explicit Init_WebRoad_link_direction(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_coord_list link_direction(::deva_gaode_routing_msgs::msg::WebRoad::_link_direction_type arg)
  {
    msg_.link_direction = std::move(arg);
    return Init_WebRoad_coord_list(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_road_direction
{
public:
  explicit Init_WebRoad_road_direction(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_link_direction road_direction(::deva_gaode_routing_msgs::msg::WebRoad::_road_direction_type arg)
  {
    msg_.road_direction = std::move(arg);
    return Init_WebRoad_link_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_specific_type
{
public:
  explicit Init_WebRoad_specific_type(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_road_direction specific_type(::deva_gaode_routing_msgs::msg::WebRoad::_specific_type_type arg)
  {
    msg_.specific_type = std::move(arg);
    return Init_WebRoad_road_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_road_class
{
public:
  explicit Init_WebRoad_road_class(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_specific_type road_class(::deva_gaode_routing_msgs::msg::WebRoad::_road_class_type arg)
  {
    msg_.road_class = std::move(arg);
    return Init_WebRoad_specific_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_road_type
{
public:
  explicit Init_WebRoad_road_type(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_road_class road_type(::deva_gaode_routing_msgs::msg::WebRoad::_road_type_type arg)
  {
    msg_.road_type = std::move(arg);
    return Init_WebRoad_road_class(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_time
{
public:
  explicit Init_WebRoad_time(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_road_type time(::deva_gaode_routing_msgs::msg::WebRoad::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_WebRoad_road_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_distance
{
public:
  explicit Init_WebRoad_distance(::deva_gaode_routing_msgs::msg::WebRoad & msg)
  : msg_(msg)
  {}
  Init_WebRoad_time distance(::deva_gaode_routing_msgs::msg::WebRoad::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_WebRoad_time(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

class Init_WebRoad_has_traffic_light
{
public:
  Init_WebRoad_has_traffic_light()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WebRoad_distance has_traffic_light(::deva_gaode_routing_msgs::msg::WebRoad::_has_traffic_light_type arg)
  {
    msg_.has_traffic_light = std::move(arg);
    return Init_WebRoad_distance(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::WebRoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::WebRoad>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_WebRoad_has_traffic_light();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__BUILDER_HPP_
