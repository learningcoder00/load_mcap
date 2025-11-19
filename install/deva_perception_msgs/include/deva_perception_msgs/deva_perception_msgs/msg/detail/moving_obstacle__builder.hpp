// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/MovingObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/moving_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_MovingObstacle_is_predict
{
public:
  explicit Init_MovingObstacle_is_predict(::deva_perception_msgs::msg::MovingObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::MovingObstacle is_predict(::deva_perception_msgs::msg::MovingObstacle::_is_predict_type arg)
  {
    msg_.is_predict = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

class Init_MovingObstacle_acceleration_var
{
public:
  explicit Init_MovingObstacle_acceleration_var(::deva_perception_msgs::msg::MovingObstacle & msg)
  : msg_(msg)
  {}
  Init_MovingObstacle_is_predict acceleration_var(::deva_perception_msgs::msg::MovingObstacle::_acceleration_var_type arg)
  {
    msg_.acceleration_var = std::move(arg);
    return Init_MovingObstacle_is_predict(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

class Init_MovingObstacle_velocity_var
{
public:
  explicit Init_MovingObstacle_velocity_var(::deva_perception_msgs::msg::MovingObstacle & msg)
  : msg_(msg)
  {}
  Init_MovingObstacle_acceleration_var velocity_var(::deva_perception_msgs::msg::MovingObstacle::_velocity_var_type arg)
  {
    msg_.velocity_var = std::move(arg);
    return Init_MovingObstacle_acceleration_var(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

class Init_MovingObstacle_acceleration
{
public:
  explicit Init_MovingObstacle_acceleration(::deva_perception_msgs::msg::MovingObstacle & msg)
  : msg_(msg)
  {}
  Init_MovingObstacle_velocity_var acceleration(::deva_perception_msgs::msg::MovingObstacle::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_MovingObstacle_velocity_var(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

class Init_MovingObstacle_velocity
{
public:
  explicit Init_MovingObstacle_velocity(::deva_perception_msgs::msg::MovingObstacle & msg)
  : msg_(msg)
  {}
  Init_MovingObstacle_acceleration velocity(::deva_perception_msgs::msg::MovingObstacle::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_MovingObstacle_acceleration(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

class Init_MovingObstacle_det_type
{
public:
  explicit Init_MovingObstacle_det_type(::deva_perception_msgs::msg::MovingObstacle & msg)
  : msg_(msg)
  {}
  Init_MovingObstacle_velocity det_type(::deva_perception_msgs::msg::MovingObstacle::_det_type_type arg)
  {
    msg_.det_type = std::move(arg);
    return Init_MovingObstacle_velocity(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

class Init_MovingObstacle_moving_obstacle_type
{
public:
  explicit Init_MovingObstacle_moving_obstacle_type(::deva_perception_msgs::msg::MovingObstacle & msg)
  : msg_(msg)
  {}
  Init_MovingObstacle_det_type moving_obstacle_type(::deva_perception_msgs::msg::MovingObstacle::_moving_obstacle_type_type arg)
  {
    msg_.moving_obstacle_type = std::move(arg);
    return Init_MovingObstacle_det_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

class Init_MovingObstacle_obstacle
{
public:
  Init_MovingObstacle_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovingObstacle_moving_obstacle_type obstacle(::deva_perception_msgs::msg::MovingObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_MovingObstacle_moving_obstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::MovingObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::MovingObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_MovingObstacle_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MOVING_OBSTACLE__BUILDER_HPP_
