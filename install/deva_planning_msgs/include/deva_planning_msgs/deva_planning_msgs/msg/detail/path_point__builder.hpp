// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/path_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_PathPoint_distance2obs
{
public:
  explicit Init_PathPoint_distance2obs(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::PathPoint distance2obs(::deva_planning_msgs::msg::PathPoint::_distance2obs_type arg)
  {
    msg_.distance2obs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_is_junction
{
public:
  explicit Init_PathPoint_is_junction(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_distance2obs is_junction(::deva_planning_msgs::msg::PathPoint::_is_junction_type arg)
  {
    msg_.is_junction = std::move(arg);
    return Init_PathPoint_distance2obs(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_lane_width
{
public:
  explicit Init_PathPoint_lane_width(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_is_junction lane_width(::deva_planning_msgs::msg::PathPoint::_lane_width_type arg)
  {
    msg_.lane_width = std::move(arg);
    return Init_PathPoint_is_junction(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_y_derivative
{
public:
  explicit Init_PathPoint_y_derivative(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_lane_width y_derivative(::deva_planning_msgs::msg::PathPoint::_y_derivative_type arg)
  {
    msg_.y_derivative = std::move(arg);
    return Init_PathPoint_lane_width(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_x_derivative
{
public:
  explicit Init_PathPoint_x_derivative(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_y_derivative x_derivative(::deva_planning_msgs::msg::PathPoint::_x_derivative_type arg)
  {
    msg_.x_derivative = std::move(arg);
    return Init_PathPoint_y_derivative(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_lane_id
{
public:
  explicit Init_PathPoint_lane_id(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_x_derivative lane_id(::deva_planning_msgs::msg::PathPoint::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return Init_PathPoint_x_derivative(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_ddkappa
{
public:
  explicit Init_PathPoint_ddkappa(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_lane_id ddkappa(::deva_planning_msgs::msg::PathPoint::_ddkappa_type arg)
  {
    msg_.ddkappa = std::move(arg);
    return Init_PathPoint_lane_id(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_dkappa
{
public:
  explicit Init_PathPoint_dkappa(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_ddkappa dkappa(::deva_planning_msgs::msg::PathPoint::_dkappa_type arg)
  {
    msg_.dkappa = std::move(arg);
    return Init_PathPoint_ddkappa(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_s
{
public:
  explicit Init_PathPoint_s(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_dkappa s(::deva_planning_msgs::msg::PathPoint::_s_type arg)
  {
    msg_.s = std::move(arg);
    return Init_PathPoint_dkappa(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_kappa
{
public:
  explicit Init_PathPoint_kappa(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_s kappa(::deva_planning_msgs::msg::PathPoint::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_PathPoint_s(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_theta
{
public:
  explicit Init_PathPoint_theta(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_kappa theta(::deva_planning_msgs::msg::PathPoint::_theta_type arg)
  {
    msg_.theta = std::move(arg);
    return Init_PathPoint_kappa(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_speed
{
public:
  explicit Init_PathPoint_speed(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_theta speed(::deva_planning_msgs::msg::PathPoint::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_PathPoint_theta(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_heading
{
public:
  explicit Init_PathPoint_heading(::deva_planning_msgs::msg::PathPoint & msg)
  : msg_(msg)
  {}
  Init_PathPoint_speed heading(::deva_planning_msgs::msg::PathPoint::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_PathPoint_speed(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

class Init_PathPoint_pos
{
public:
  Init_PathPoint_pos()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPoint_heading pos(::deva_planning_msgs::msg::PathPoint::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_PathPoint_heading(msg_);
  }

private:
  ::deva_planning_msgs::msg::PathPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::PathPoint>()
{
  return deva_planning_msgs::msg::builder::Init_PathPoint_pos();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PATH_POINT__BUILDER_HPP_
