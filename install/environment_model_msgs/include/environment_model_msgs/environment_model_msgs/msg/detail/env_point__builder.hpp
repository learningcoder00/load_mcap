// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/EnvPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/env_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_EnvPoint_enum_road_type
{
public:
  explicit Init_EnvPoint_enum_road_type(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::EnvPoint enum_road_type(::environment_model_msgs::msg::EnvPoint::_enum_road_type_type arg)
  {
    msg_.enum_road_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_enum_lane_type
{
public:
  explicit Init_EnvPoint_enum_lane_type(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_enum_road_type enum_lane_type(::environment_model_msgs::msg::EnvPoint::_enum_lane_type_type arg)
  {
    msg_.enum_lane_type = std::move(arg);
    return Init_EnvPoint_enum_road_type(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_speed_limit
{
public:
  explicit Init_EnvPoint_speed_limit(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_enum_lane_type speed_limit(::environment_model_msgs::msg::EnvPoint::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return Init_EnvPoint_enum_lane_type(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_right_road_bound
{
public:
  explicit Init_EnvPoint_right_road_bound(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_speed_limit right_road_bound(::environment_model_msgs::msg::EnvPoint::_right_road_bound_type arg)
  {
    msg_.right_road_bound = std::move(arg);
    return Init_EnvPoint_speed_limit(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_left_road_bound
{
public:
  explicit Init_EnvPoint_left_road_bound(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_right_road_bound left_road_bound(::environment_model_msgs::msg::EnvPoint::_left_road_bound_type arg)
  {
    msg_.left_road_bound = std::move(arg);
    return Init_EnvPoint_right_road_bound(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_right_lane_bound
{
public:
  explicit Init_EnvPoint_right_lane_bound(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_left_road_bound right_lane_bound(::environment_model_msgs::msg::EnvPoint::_right_lane_bound_type arg)
  {
    msg_.right_lane_bound = std::move(arg);
    return Init_EnvPoint_left_road_bound(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_left_lan_bound
{
public:
  explicit Init_EnvPoint_left_lan_bound(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_right_lane_bound left_lan_bound(::environment_model_msgs::msg::EnvPoint::_left_lan_bound_type arg)
  {
    msg_.left_lan_bound = std::move(arg);
    return Init_EnvPoint_right_lane_bound(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_kappa
{
public:
  explicit Init_EnvPoint_kappa(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_left_lan_bound kappa(::environment_model_msgs::msg::EnvPoint::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_EnvPoint_left_lan_bound(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_s
{
public:
  explicit Init_EnvPoint_s(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_kappa s(::environment_model_msgs::msg::EnvPoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_EnvPoint_kappa(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_heading
{
public:
  explicit Init_EnvPoint_heading(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_s heading(::environment_model_msgs::msg::EnvPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_EnvPoint_s(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_y
{
public:
  explicit Init_EnvPoint_y(::environment_model_msgs::msg::EnvPoint & msg)
  : msg_(msg)
  {}
  Init_EnvPoint_heading y(::environment_model_msgs::msg::EnvPoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EnvPoint_heading(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

class Init_EnvPoint_x
{
public:
  Init_EnvPoint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EnvPoint_y x(::environment_model_msgs::msg::EnvPoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EnvPoint_y(msg_);
  }

private:
  ::environment_model_msgs::msg::EnvPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::EnvPoint>()
{
  return environment_model_msgs::msg::builder::Init_EnvPoint_x();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_POINT__BUILDER_HPP_
