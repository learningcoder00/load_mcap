// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/AvpDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_DEBUG_INFO__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_DEBUG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/avp_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpDebugInfo_stitch_data
{
public:
  explicit Init_AvpDebugInfo_stitch_data(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs::msg::AvpDebugInfo stitch_data(::deva_planning_msgs::msg::AvpDebugInfo::_stitch_data_type arg)
  {
    msg_.stitch_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_obstacle_poses
{
public:
  explicit Init_AvpDebugInfo_obstacle_poses(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_stitch_data obstacle_poses(::deva_planning_msgs::msg::AvpDebugInfo::_obstacle_poses_type arg)
  {
    msg_.obstacle_poses = std::move(arg);
    return Init_AvpDebugInfo_stitch_data(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_boundary_poses
{
public:
  explicit Init_AvpDebugInfo_boundary_poses(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_obstacle_poses boundary_poses(::deva_planning_msgs::msg::AvpDebugInfo::_boundary_poses_type arg)
  {
    msg_.boundary_poses = std::move(arg);
    return Init_AvpDebugInfo_obstacle_poses(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_past_path_data
{
public:
  explicit Init_AvpDebugInfo_past_path_data(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_boundary_poses past_path_data(::deva_planning_msgs::msg::AvpDebugInfo::_past_path_data_type arg)
  {
    msg_.past_path_data = std::move(arg);
    return Init_AvpDebugInfo_boundary_poses(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_now_path_data
{
public:
  explicit Init_AvpDebugInfo_now_path_data(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_past_path_data now_path_data(::deva_planning_msgs::msg::AvpDebugInfo::_now_path_data_type arg)
  {
    msg_.now_path_data = std::move(arg);
    return Init_AvpDebugInfo_past_path_data(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_now_mpc_data
{
public:
  explicit Init_AvpDebugInfo_now_mpc_data(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_now_path_data now_mpc_data(::deva_planning_msgs::msg::AvpDebugInfo::_now_mpc_data_type arg)
  {
    msg_.now_mpc_data = std::move(arg);
    return Init_AvpDebugInfo_now_path_data(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_driver_path
{
public:
  explicit Init_AvpDebugInfo_driver_path(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_now_mpc_data driver_path(::deva_planning_msgs::msg::AvpDebugInfo::_driver_path_type arg)
  {
    msg_.driver_path = std::move(arg);
    return Init_AvpDebugInfo_now_mpc_data(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_used_ref_line_tree
{
public:
  explicit Init_AvpDebugInfo_used_ref_line_tree(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_driver_path used_ref_line_tree(::deva_planning_msgs::msg::AvpDebugInfo::_used_ref_line_tree_type arg)
  {
    msg_.used_ref_line_tree = std::move(arg);
    return Init_AvpDebugInfo_driver_path(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_smooth_line
{
public:
  explicit Init_AvpDebugInfo_smooth_line(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_used_ref_line_tree smooth_line(::deva_planning_msgs::msg::AvpDebugInfo::_smooth_line_type arg)
  {
    msg_.smooth_line = std::move(arg);
    return Init_AvpDebugInfo_used_ref_line_tree(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_origin_ref_line
{
public:
  explicit Init_AvpDebugInfo_origin_ref_line(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_smooth_line origin_ref_line(::deva_planning_msgs::msg::AvpDebugInfo::_origin_ref_line_type arg)
  {
    msg_.origin_ref_line = std::move(arg);
    return Init_AvpDebugInfo_smooth_line(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_acados_status
{
public:
  explicit Init_AvpDebugInfo_acados_status(::deva_planning_msgs::msg::AvpDebugInfo & msg)
  : msg_(msg)
  {}
  Init_AvpDebugInfo_origin_ref_line acados_status(::deva_planning_msgs::msg::AvpDebugInfo::_acados_status_type arg)
  {
    msg_.acados_status = std::move(arg);
    return Init_AvpDebugInfo_origin_ref_line(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

class Init_AvpDebugInfo_solve_num
{
public:
  Init_AvpDebugInfo_solve_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AvpDebugInfo_acados_status solve_num(::deva_planning_msgs::msg::AvpDebugInfo::_solve_num_type arg)
  {
    msg_.solve_num = std::move(arg);
    return Init_AvpDebugInfo_acados_status(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpDebugInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::AvpDebugInfo>()
{
  return deva_planning_msgs::msg::builder::Init_AvpDebugInfo_solve_num();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_DEBUG_INFO__BUILDER_HPP_
