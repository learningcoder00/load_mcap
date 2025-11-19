// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__BUILDER_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_mdriver_msgs/msg/detail/m_world__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_mdriver_msgs
{

namespace msg
{

namespace builder
{

class Init_MWorld_refline_points
{
public:
  explicit Init_MWorld_refline_points(::deva_mdriver_msgs::msg::MWorld & msg)
  : msg_(msg)
  {}
  ::deva_mdriver_msgs::msg::MWorld refline_points(::deva_mdriver_msgs::msg::MWorld::_refline_points_type arg)
  {
    msg_.refline_points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

class Init_MWorld_score
{
public:
  explicit Init_MWorld_score(::deva_mdriver_msgs::msg::MWorld & msg)
  : msg_(msg)
  {}
  Init_MWorld_refline_points score(::deva_mdriver_msgs::msg::MWorld::_score_type arg)
  {
    msg_.score = std::move(arg);
    return Init_MWorld_refline_points(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

class Init_MWorld_mdriver_meta_actions
{
public:
  explicit Init_MWorld_mdriver_meta_actions(::deva_mdriver_msgs::msg::MWorld & msg)
  : msg_(msg)
  {}
  Init_MWorld_score mdriver_meta_actions(::deva_mdriver_msgs::msg::MWorld::_mdriver_meta_actions_type arg)
  {
    msg_.mdriver_meta_actions = std::move(arg);
    return Init_MWorld_score(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

class Init_MWorld_ego_ref_v
{
public:
  explicit Init_MWorld_ego_ref_v(::deva_mdriver_msgs::msg::MWorld & msg)
  : msg_(msg)
  {}
  Init_MWorld_mdriver_meta_actions ego_ref_v(::deva_mdriver_msgs::msg::MWorld::_ego_ref_v_type arg)
  {
    msg_.ego_ref_v = std::move(arg);
    return Init_MWorld_mdriver_meta_actions(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

class Init_MWorld_nudge_buffer
{
public:
  explicit Init_MWorld_nudge_buffer(::deva_mdriver_msgs::msg::MWorld & msg)
  : msg_(msg)
  {}
  Init_MWorld_ego_ref_v nudge_buffer(::deva_mdriver_msgs::msg::MWorld::_nudge_buffer_type arg)
  {
    msg_.nudge_buffer = std::move(arg);
    return Init_MWorld_ego_ref_v(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

class Init_MWorld_all_obstacles
{
public:
  explicit Init_MWorld_all_obstacles(::deva_mdriver_msgs::msg::MWorld & msg)
  : msg_(msg)
  {}
  Init_MWorld_nudge_buffer all_obstacles(::deva_mdriver_msgs::msg::MWorld::_all_obstacles_type arg)
  {
    msg_.all_obstacles = std::move(arg);
    return Init_MWorld_nudge_buffer(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

class Init_MWorld_meta_action
{
public:
  explicit Init_MWorld_meta_action(::deva_mdriver_msgs::msg::MWorld & msg)
  : msg_(msg)
  {}
  Init_MWorld_all_obstacles meta_action(::deva_mdriver_msgs::msg::MWorld::_meta_action_type arg)
  {
    msg_.meta_action = std::move(arg);
    return Init_MWorld_all_obstacles(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

class Init_MWorld_world_id
{
public:
  Init_MWorld_world_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MWorld_meta_action world_id(::deva_mdriver_msgs::msg::MWorld::_world_id_type arg)
  {
    msg_.world_id = std::move(arg);
    return Init_MWorld_meta_action(msg_);
  }

private:
  ::deva_mdriver_msgs::msg::MWorld msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_mdriver_msgs::msg::MWorld>()
{
  return deva_mdriver_msgs::msg::builder::Init_MWorld_world_id();
}

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_WORLD__BUILDER_HPP_
