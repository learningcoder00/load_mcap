// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/IntersectionRoadNode.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/intersection_road_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionRoadNode_out_intersection_roads_ids
{
public:
  explicit Init_IntersectionRoadNode_out_intersection_roads_ids(::deva_gaode_routing_msgs::msg::IntersectionRoadNode & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::IntersectionRoadNode out_intersection_roads_ids(::deva_gaode_routing_msgs::msg::IntersectionRoadNode::_out_intersection_roads_ids_type arg)
  {
    msg_.out_intersection_roads_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoadNode msg_;
};

class Init_IntersectionRoadNode_enter_intersection_road_ids
{
public:
  explicit Init_IntersectionRoadNode_enter_intersection_road_ids(::deva_gaode_routing_msgs::msg::IntersectionRoadNode & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoadNode_out_intersection_roads_ids enter_intersection_road_ids(::deva_gaode_routing_msgs::msg::IntersectionRoadNode::_enter_intersection_road_ids_type arg)
  {
    msg_.enter_intersection_road_ids = std::move(arg);
    return Init_IntersectionRoadNode_out_intersection_roads_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoadNode msg_;
};

class Init_IntersectionRoadNode_position
{
public:
  explicit Init_IntersectionRoadNode_position(::deva_gaode_routing_msgs::msg::IntersectionRoadNode & msg)
  : msg_(msg)
  {}
  Init_IntersectionRoadNode_enter_intersection_road_ids position(::deva_gaode_routing_msgs::msg::IntersectionRoadNode::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_IntersectionRoadNode_enter_intersection_road_ids(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoadNode msg_;
};

class Init_IntersectionRoadNode_id
{
public:
  Init_IntersectionRoadNode_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionRoadNode_position id(::deva_gaode_routing_msgs::msg::IntersectionRoadNode::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionRoadNode_position(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::IntersectionRoadNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::IntersectionRoadNode>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_IntersectionRoadNode_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__INTERSECTION_ROAD_NODE__BUILDER_HPP_
