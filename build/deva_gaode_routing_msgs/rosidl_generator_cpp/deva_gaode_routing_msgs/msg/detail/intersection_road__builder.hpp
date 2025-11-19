// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/intersection_road__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionRoad_prevs
{
public:
  explicit Init_IntersectionRoad_prevs(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::IntersectionRoad prevs(::deva_gaode_routing_msgs::msg::IntersectionRoad::_prevs_type arg)
  {
    msg_.prevs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_nexts
{
public:
  explicit Init_IntersectionRoad_nexts(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_prevs nexts(::deva_gaode_routing_msgs::msg::IntersectionRoad::_nexts_type arg)
  {
    msg_.nexts = std::move(arg);
    return Init_IntersectionRoad_prevs(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_relate_link_id
{
public:
  explicit Init_IntersectionRoad_relate_link_id(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_nexts relate_link_id(::deva_gaode_routing_msgs::msg::IntersectionRoad::_relate_link_id_type arg)
  {
    msg_.relate_link_id = std::move(arg);
    return Init_IntersectionRoad_nexts(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_end_feature_point_id
{
public:
  explicit Init_IntersectionRoad_end_feature_point_id(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_relate_link_id end_feature_point_id(::deva_gaode_routing_msgs::msg::IntersectionRoad::_end_feature_point_id_type arg)
  {
    msg_.end_feature_point_id = std::move(arg);
    return Init_IntersectionRoad_relate_link_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_start_feature_point_id
{
public:
  explicit Init_IntersectionRoad_start_feature_point_id(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_end_feature_point_id start_feature_point_id(::deva_gaode_routing_msgs::msg::IntersectionRoad::_start_feature_point_id_type arg)
  {
    msg_.start_feature_point_id = std::move(arg);
    return Init_IntersectionRoad_end_feature_point_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_end_node_id
{
public:
  explicit Init_IntersectionRoad_end_node_id(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_start_feature_point_id end_node_id(::deva_gaode_routing_msgs::msg::IntersectionRoad::_end_node_id_type arg)
  {
    msg_.end_node_id = std::move(arg);
    return Init_IntersectionRoad_start_feature_point_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_start_node_id
{
public:
  explicit Init_IntersectionRoad_start_node_id(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_end_node_id start_node_id(::deva_gaode_routing_msgs::msg::IntersectionRoad::_start_node_id_type arg)
  {
    msg_.start_node_id = std::move(arg);
    return Init_IntersectionRoad_end_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_geometry
{
public:
  explicit Init_IntersectionRoad_geometry(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_start_node_id geometry(::deva_gaode_routing_msgs::msg::IntersectionRoad::_geometry_type arg)
  {
    msg_.geometry = std::move(arg);
    return Init_IntersectionRoad_start_node_id(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_has_traffic_light
{
public:
  explicit Init_IntersectionRoad_has_traffic_light(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_geometry has_traffic_light(::deva_gaode_routing_msgs::msg::IntersectionRoad::_has_traffic_light_type arg)
  {
    msg_.has_traffic_light = std::move(arg);
    return Init_IntersectionRoad_geometry(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_cross_turn_type
{
public:
  explicit Init_IntersectionRoad_cross_turn_type(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_has_traffic_light cross_turn_type(::deva_gaode_routing_msgs::msg::IntersectionRoad::_cross_turn_type_type arg)
  {
    msg_.cross_turn_type = std::move(arg);
    return Init_IntersectionRoad_has_traffic_light(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_link_direction
{
public:
  explicit Init_IntersectionRoad_link_direction(::deva_gaode_routing_msgs::msg::IntersectionRoad & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoad_cross_turn_type link_direction(::deva_gaode_routing_msgs::msg::IntersectionRoad::_link_direction_type arg)
  {
    msg_.link_direction = std::move(arg);
    return Init_IntersectionRoad_cross_turn_type(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

class Init_IntersectionRoad_id
{
public:
  Init_IntersectionRoad_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionRoad_link_direction id(::deva_gaode_routing_msgs::msg::IntersectionRoad::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionRoad_link_direction(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::IntersectionRoad>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_IntersectionRoad_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD__BUILDER_HPP_
