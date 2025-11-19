// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/NaviAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAVI_ACTION__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAVI_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/navi_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_NaviAction_right_score
{
public:
  explicit Init_NaviAction_right_score(::deva_planning_msgs2::msg::NaviAction & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::NaviAction right_score(::deva_planning_msgs2::msg::NaviAction::_right_score_type arg)
  {
    msg_.right_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NaviAction msg_;
};

class Init_NaviAction_left_score
{
public:
  explicit Init_NaviAction_left_score(::deva_planning_msgs2::msg::NaviAction & msg)
  : msg_(msg)
  {}
  Init_NaviAction_right_score left_score(::deva_planning_msgs2::msg::NaviAction::_left_score_type arg)
  {
    msg_.left_score = std::move(arg);
    return Init_NaviAction_right_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NaviAction msg_;
};

class Init_NaviAction_current_score
{
public:
  explicit Init_NaviAction_current_score(::deva_planning_msgs2::msg::NaviAction & msg)
  : msg_(msg)
  {}
  Init_NaviAction_left_score current_score(::deva_planning_msgs2::msg::NaviAction::_current_score_type arg)
  {
    msg_.current_score = std::move(arg);
    return Init_NaviAction_left_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NaviAction msg_;
};

class Init_NaviAction_meta_action
{
public:
  explicit Init_NaviAction_meta_action(::deva_planning_msgs2::msg::NaviAction & msg)
  : msg_(msg)
  {}
  Init_NaviAction_current_score meta_action(::deva_planning_msgs2::msg::NaviAction::_meta_action_type arg)
  {
    msg_.meta_action = std::move(arg);
    return Init_NaviAction_current_score(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NaviAction msg_;
};

class Init_NaviAction_header
{
public:
  Init_NaviAction_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NaviAction_meta_action header(::deva_planning_msgs2::msg::NaviAction::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_NaviAction_meta_action(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NaviAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::NaviAction>()
{
  return deva_planning_msgs2::msg::builder::Init_NaviAction_header();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAVI_ACTION__BUILDER_HPP_
