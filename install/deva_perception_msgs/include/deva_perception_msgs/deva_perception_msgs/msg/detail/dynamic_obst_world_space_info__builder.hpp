// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/DynamicObstWorldSpaceInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/dynamic_obst_world_space_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObstWorldSpaceInfo_cipv
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_cipv(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo cipv(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_cipv_type arg)
  {
    msg_.cipv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_lane_assignment
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_lane_assignment(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_cipv lane_assignment(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_lane_assignment_type arg)
  {
    msg_.lane_assignment = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_cipv(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_sigma_yaw_rate
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_sigma_yaw_rate(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_lane_assignment sigma_yaw_rate(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_sigma_yaw_rate_type arg)
  {
    msg_.sigma_yaw_rate = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_lane_assignment(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_sigma_position
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_sigma_position(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_sigma_yaw_rate sigma_position(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_sigma_position_type arg)
  {
    msg_.sigma_position = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_sigma_yaw_rate(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_sigma_length
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_sigma_length(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_sigma_position sigma_length(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_sigma_length_type arg)
  {
    msg_.sigma_length = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_sigma_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_sigma_height
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_sigma_height(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_sigma_length sigma_height(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_sigma_height_type arg)
  {
    msg_.sigma_height = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_sigma_length(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_sigma_width
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_sigma_width(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_sigma_height sigma_width(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_sigma_width_type arg)
  {
    msg_.sigma_width = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_sigma_height(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_sigma_yaw
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_sigma_yaw(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_sigma_width sigma_yaw(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_sigma_yaw_type arg)
  {
    msg_.sigma_yaw = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_sigma_width(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_sigma_vel
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_sigma_vel(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_sigma_yaw sigma_vel(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_sigma_vel_type arg)
  {
    msg_.sigma_vel = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_sigma_yaw(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_yaw_rate
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_yaw_rate(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_sigma_vel yaw_rate(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_yaw_rate_type arg)
  {
    msg_.yaw_rate = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_sigma_vel(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_motion_status
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_motion_status(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_yaw_rate motion_status(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_motion_status_type arg)
  {
    msg_.motion_status = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_yaw_rate(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_acc_abs_world
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_acc_abs_world(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_motion_status acc_abs_world(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_acc_abs_world_type arg)
  {
    msg_.acc_abs_world = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_motion_status(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_acc
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_acc(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_acc_abs_world acc(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_acc_abs_world(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_vel_abs_world
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_vel_abs_world(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_acc vel_abs_world(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_vel_abs_world_type arg)
  {
    msg_.vel_abs_world = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_acc(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_vel
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_vel(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_vel_abs_world vel(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_vel_abs_world(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_ttc
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_ttc(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_vel ttc(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_ttc_type arg)
  {
    msg_.ttc = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_vel(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_position
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_position(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_ttc position(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_ttc(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_poly_vcs
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_poly_vcs(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_position poly_vcs(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_poly_vcs_type arg)
  {
    msg_.poly_vcs = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_position(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_poly
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_poly(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_poly_vcs poly(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_poly_type arg)
  {
    msg_.poly = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_poly_vcs(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_height
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_height(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_poly height(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_poly(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_width
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_width(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_height width(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_height(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_length
{
public:
  explicit Init_DynamicObstWorldSpaceInfo_length(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo & msg)
  : msg_(msg)
  {}
  Init_DynamicObstWorldSpaceInfo_width length(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_width(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

class Init_DynamicObstWorldSpaceInfo_yaw
{
public:
  Init_DynamicObstWorldSpaceInfo_yaw()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObstWorldSpaceInfo_length yaw(::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_DynamicObstWorldSpaceInfo_length(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::DynamicObstWorldSpaceInfo>()
{
  return deva_perception_msgs::msg::builder::Init_DynamicObstWorldSpaceInfo_yaw();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBST_WORLD_SPACE_INFO__BUILDER_HPP_
