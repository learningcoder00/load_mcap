// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/PlanningObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/planning_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_PlanningObstacle_scalable_multimap
{
public:
  explicit Init_PlanningObstacle_scalable_multimap(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::PlanningObstacle scalable_multimap(::deva_planning_msgs2::msg::PlanningObstacle::_scalable_multimap_type arg)
  {
    msg_.scalable_multimap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_scalable_flags
{
public:
  explicit Init_PlanningObstacle_scalable_flags(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_scalable_multimap scalable_flags(::deva_planning_msgs2::msg::PlanningObstacle::_scalable_flags_type arg)
  {
    msg_.scalable_flags = std::move(arg);
    return Init_PlanningObstacle_scalable_multimap(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_priority
{
public:
  explicit Init_PlanningObstacle_priority(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_scalable_flags priority(::deva_planning_msgs2::msg::PlanningObstacle::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_PlanningObstacle_scalable_flags(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_ttc
{
public:
  explicit Init_PlanningObstacle_ttc(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_priority ttc(::deva_planning_msgs2::msg::PlanningObstacle::_ttc_type arg)
  {
    msg_.ttc = std::move(arg);
    return Init_PlanningObstacle_priority(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_distance
{
public:
  explicit Init_PlanningObstacle_distance(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_ttc distance(::deva_planning_msgs2::msg::PlanningObstacle::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_PlanningObstacle_ttc(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_cutout_time
{
public:
  explicit Init_PlanningObstacle_cutout_time(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_distance cutout_time(::deva_planning_msgs2::msg::PlanningObstacle::_cutout_time_type arg)
  {
    msg_.cutout_time = std::move(arg);
    return Init_PlanningObstacle_distance(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_cutin_time
{
public:
  explicit Init_PlanningObstacle_cutin_time(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_cutout_time cutin_time(::deva_planning_msgs2::msg::PlanningObstacle::_cutin_time_type arg)
  {
    msg_.cutin_time = std::move(arg);
    return Init_PlanningObstacle_cutout_time(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_scene_understanding
{
public:
  explicit Init_PlanningObstacle_scene_understanding(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_cutin_time scene_understanding(::deva_planning_msgs2::msg::PlanningObstacle::_scene_understanding_type arg)
  {
    msg_.scene_understanding = std::move(arg);
    return Init_PlanningObstacle_cutin_time(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_decision_tag
{
public:
  explicit Init_PlanningObstacle_decision_tag(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_scene_understanding decision_tag(::deva_planning_msgs2::msg::PlanningObstacle::_decision_tag_type arg)
  {
    msg_.decision_tag = std::move(arg);
    return Init_PlanningObstacle_scene_understanding(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_target_line_id
{
public:
  explicit Init_PlanningObstacle_target_line_id(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_decision_tag target_line_id(::deva_planning_msgs2::msg::PlanningObstacle::_target_line_id_type arg)
  {
    msg_.target_line_id = std::move(arg);
    return Init_PlanningObstacle_decision_tag(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_current_line_id
{
public:
  explicit Init_PlanningObstacle_current_line_id(::deva_planning_msgs2::msg::PlanningObstacle & msg)
  : msg_(msg)
  {}
  Init_PlanningObstacle_target_line_id current_line_id(::deva_planning_msgs2::msg::PlanningObstacle::_current_line_id_type arg)
  {
    msg_.current_line_id = std::move(arg);
    return Init_PlanningObstacle_target_line_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

class Init_PlanningObstacle_id
{
public:
  Init_PlanningObstacle_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlanningObstacle_current_line_id id(::deva_planning_msgs2::msg::PlanningObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_PlanningObstacle_current_line_id(msg_);
  }

private:
  ::deva_planning_msgs2::msg::PlanningObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::PlanningObstacle>()
{
  return deva_planning_msgs2::msg::builder::Init_PlanningObstacle_id();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_OBSTACLE__BUILDER_HPP_
