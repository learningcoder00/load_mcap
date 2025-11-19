// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryPoint_steer
{
public:
  explicit Init_TrajectoryPoint_steer(::deva_planning_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::TrajectoryPoint steer(::deva_planning_msgs::msg::TrajectoryPoint::_steer_type arg)
  {
    msg_.steer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_da
{
public:
  explicit Init_TrajectoryPoint_da(::deva_planning_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_steer da(::deva_planning_msgs::msg::TrajectoryPoint::_da_type arg)
  {
    msg_.da = std::move(arg);
    return Init_TrajectoryPoint_steer(msg_);
  }

private:
  ::deva_planning_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_relative_time
{
public:
  explicit Init_TrajectoryPoint_relative_time(::deva_planning_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_da relative_time(::deva_planning_msgs::msg::TrajectoryPoint::_relative_time_type arg)
  {
    msg_.relative_time = std::move(arg);
    return Init_TrajectoryPoint_da(msg_);
  }

private:
  ::deva_planning_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_a
{
public:
  explicit Init_TrajectoryPoint_a(::deva_planning_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_relative_time a(::deva_planning_msgs::msg::TrajectoryPoint::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_TrajectoryPoint_relative_time(msg_);
  }

private:
  ::deva_planning_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_v
{
public:
  explicit Init_TrajectoryPoint_v(::deva_planning_msgs::msg::TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryPoint_a v(::deva_planning_msgs::msg::TrajectoryPoint::_v_type arg)
  {
    msg_.v = std::move(arg);
    return Init_TrajectoryPoint_a(msg_);
  }

private:
  ::deva_planning_msgs::msg::TrajectoryPoint msg_;
};

class Init_TrajectoryPoint_path_point
{
public:
  Init_TrajectoryPoint_path_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryPoint_v path_point(::deva_planning_msgs::msg::TrajectoryPoint::_path_point_type arg)
  {
    msg_.path_point = std::move(arg);
    return Init_TrajectoryPoint_v(msg_);
  }

private:
  ::deva_planning_msgs::msg::TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::TrajectoryPoint>()
{
  return deva_planning_msgs::msg::builder::Init_TrajectoryPoint_path_point();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__TRAJECTORY_POINT__BUILDER_HPP_
