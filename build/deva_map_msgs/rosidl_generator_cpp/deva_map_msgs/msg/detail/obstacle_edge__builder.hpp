// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_map_msgs:msg/ObstacleEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__BUILDER_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_map_msgs/msg/detail/obstacle_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_map_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleEdge_world_coord_center_point
{
public:
  Init_ObstacleEdge_world_coord_center_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_map_msgs::msg::ObstacleEdge world_coord_center_point(::deva_map_msgs::msg::ObstacleEdge::_world_coord_center_point_type arg)
  {
    msg_.world_coord_center_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_map_msgs::msg::ObstacleEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_map_msgs::msg::ObstacleEdge>()
{
  return deva_map_msgs::msg::builder::Init_ObstacleEdge_world_coord_center_point();
}

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__BUILDER_HPP_
