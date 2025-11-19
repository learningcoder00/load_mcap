// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/NavOpenspaceObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/nav_openspace_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_NavOpenspaceObstacle_xy_vec
{
public:
  explicit Init_NavOpenspaceObstacle_xy_vec(::deva_planning_msgs::msg::NavOpenspaceObstacle & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::NavOpenspaceObstacle xy_vec(::deva_planning_msgs::msg::NavOpenspaceObstacle::_xy_vec_type arg)
  {
    msg_.xy_vec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceObstacle msg_;
};

class Init_NavOpenspaceObstacle_obs_type
{
public:
  Init_NavOpenspaceObstacle_obs_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavOpenspaceObstacle_xy_vec obs_type(::deva_planning_msgs::msg::NavOpenspaceObstacle::_obs_type_type arg)
  {
    msg_.obs_type = std::move(arg);
    return Init_NavOpenspaceObstacle_xy_vec(msg_);
  }

private:
  ::deva_planning_msgs::msg::NavOpenspaceObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::NavOpenspaceObstacle>()
{
  return deva_planning_msgs::msg::builder::Init_NavOpenspaceObstacle_obs_type();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__NAV_OPENSPACE_OBSTACLE__BUILDER_HPP_
