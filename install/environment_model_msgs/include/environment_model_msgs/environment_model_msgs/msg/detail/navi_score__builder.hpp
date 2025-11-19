// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/NaviScore.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/navi_score__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_NaviScore_dis2junction
{
public:
  explicit Init_NaviScore_dis2junction(::environment_model_msgs::msg::NaviScore & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::NaviScore dis2junction(::environment_model_msgs::msg::NaviScore::_dis2junction_type arg)
  {
    msg_.dis2junction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::NaviScore msg_;
};

class Init_NaviScore_is_on_route
{
public:
  explicit Init_NaviScore_is_on_route(::environment_model_msgs::msg::NaviScore & msg)
  : msg_(msg)
  {}
  Init_NaviScore_dis2junction is_on_route(::environment_model_msgs::msg::NaviScore::_is_on_route_type arg)
  {
    msg_.is_on_route = std::move(arg);
    return Init_NaviScore_dis2junction(msg_);
  }

private:
  ::environment_model_msgs::msg::NaviScore msg_;
};

class Init_NaviScore_static_score
{
public:
  explicit Init_NaviScore_static_score(::environment_model_msgs::msg::NaviScore & msg)
  : msg_(msg)
  {}
  Init_NaviScore_is_on_route static_score(::environment_model_msgs::msg::NaviScore::_static_score_type arg)
  {
    msg_.static_score = std::move(arg);
    return Init_NaviScore_is_on_route(msg_);
  }

private:
  ::environment_model_msgs::msg::NaviScore msg_;
};

class Init_NaviScore_has_route_signal
{
public:
  Init_NaviScore_has_route_signal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NaviScore_static_score has_route_signal(::environment_model_msgs::msg::NaviScore::_has_route_signal_type arg)
  {
    msg_.has_route_signal = std::move(arg);
    return Init_NaviScore_static_score(msg_);
  }

private:
  ::environment_model_msgs::msg::NaviScore msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::NaviScore>()
{
  return environment_model_msgs::msg::builder::Init_NaviScore_has_route_signal();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__NAVI_SCORE__BUILDER_HPP_
