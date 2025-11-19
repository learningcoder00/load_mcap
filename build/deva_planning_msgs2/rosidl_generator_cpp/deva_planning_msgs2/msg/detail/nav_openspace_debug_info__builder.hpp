// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs2:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__BUILDER_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs2/msg/detail/nav_openspace_debug_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs2
{

namespace msg
{

namespace builder
{

class Init_NavOpenspaceDebugInfo_optimization_results
{
public:
  explicit Init_NavOpenspaceDebugInfo_optimization_results(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo optimization_results(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_optimization_results_type arg)
  {
    msg_.optimization_results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_hybrid_astar_search_results
{
public:
  explicit Init_NavOpenspaceDebugInfo_hybrid_astar_search_results(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_optimization_results hybrid_astar_search_results(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_hybrid_astar_search_results_type arg)
  {
    msg_.hybrid_astar_search_results = std::move(arg);
    return Init_NavOpenspaceDebugInfo_optimization_results(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_last_ref_points
{
public:
  explicit Init_NavOpenspaceDebugInfo_last_ref_points(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_hybrid_astar_search_results last_ref_points(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_last_ref_points_type arg)
  {
    msg_.last_ref_points = std::move(arg);
    return Init_NavOpenspaceDebugInfo_hybrid_astar_search_results(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_is_arrived_path_end
{
public:
  explicit Init_NavOpenspaceDebugInfo_is_arrived_path_end(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_last_ref_points is_arrived_path_end(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_is_arrived_path_end_type arg)
  {
    msg_.is_arrived_path_end = std::move(arg);
    return Init_NavOpenspaceDebugInfo_last_ref_points(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_current_path_index
{
public:
  explicit Init_NavOpenspaceDebugInfo_current_path_index(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_is_arrived_path_end current_path_index(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_current_path_index_type arg)
  {
    msg_.current_path_index = std::move(arg);
    return Init_NavOpenspaceDebugInfo_is_arrived_path_end(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_last_internal_trajectory_paths
{
public:
  explicit Init_NavOpenspaceDebugInfo_last_internal_trajectory_paths(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_current_path_index last_internal_trajectory_paths(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_last_internal_trajectory_paths_type arg)
  {
    msg_.last_internal_trajectory_paths = std::move(arg);
    return Init_NavOpenspaceDebugInfo_current_path_index(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_last_trajectory_timestamp
{
public:
  explicit Init_NavOpenspaceDebugInfo_last_trajectory_timestamp(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_last_internal_trajectory_paths last_trajectory_timestamp(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_last_trajectory_timestamp_type arg)
  {
    msg_.last_trajectory_timestamp = std::move(arg);
    return Init_NavOpenspaceDebugInfo_last_internal_trajectory_paths(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_last_trajectory
{
public:
  explicit Init_NavOpenspaceDebugInfo_last_trajectory(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_last_trajectory_timestamp last_trajectory(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_last_trajectory_type arg)
  {
    msg_.last_trajectory = std::move(arg);
    return Init_NavOpenspaceDebugInfo_last_trajectory_timestamp(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_openspace_planning_status
{
public:
  explicit Init_NavOpenspaceDebugInfo_openspace_planning_status(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_last_trajectory openspace_planning_status(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_openspace_planning_status_type arg)
  {
    msg_.openspace_planning_status = std::move(arg);
    return Init_NavOpenspaceDebugInfo_last_trajectory(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_ref_points
{
public:
  explicit Init_NavOpenspaceDebugInfo_ref_points(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_openspace_planning_status ref_points(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_ref_points_type arg)
  {
    msg_.ref_points = std::move(arg);
    return Init_NavOpenspaceDebugInfo_openspace_planning_status(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_timestamp
{
public:
  explicit Init_NavOpenspaceDebugInfo_timestamp(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_ref_points timestamp(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_NavOpenspaceDebugInfo_ref_points(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_kappa
{
public:
  explicit Init_NavOpenspaceDebugInfo_kappa(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_timestamp kappa(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_kappa_type arg)
  {
    msg_.kappa = std::move(arg);
    return Init_NavOpenspaceDebugInfo_timestamp(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_keep_start_gear_distance
{
public:
  explicit Init_NavOpenspaceDebugInfo_keep_start_gear_distance(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_kappa keep_start_gear_distance(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_keep_start_gear_distance_type arg)
  {
    msg_.keep_start_gear_distance = std::move(arg);
    return Init_NavOpenspaceDebugInfo_kappa(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_speed
{
public:
  explicit Init_NavOpenspaceDebugInfo_speed(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_keep_start_gear_distance speed(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_NavOpenspaceDebugInfo_keep_start_gear_distance(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_start_gear
{
public:
  explicit Init_NavOpenspaceDebugInfo_start_gear(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_speed start_gear(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_start_gear_type arg)
  {
    msg_.start_gear = std::move(arg);
    return Init_NavOpenspaceDebugInfo_speed(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_parking_slots
{
public:
  explicit Init_NavOpenspaceDebugInfo_parking_slots(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_start_gear parking_slots(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_parking_slots_type arg)
  {
    msg_.parking_slots = std::move(arg);
    return Init_NavOpenspaceDebugInfo_start_gear(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_obstacles_info
{
public:
  explicit Init_NavOpenspaceDebugInfo_obstacles_info(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_parking_slots obstacles_info(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_obstacles_info_type arg)
  {
    msg_.obstacles_info = std::move(arg);
    return Init_NavOpenspaceDebugInfo_parking_slots(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_xy_bounds
{
public:
  explicit Init_NavOpenspaceDebugInfo_xy_bounds(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_obstacles_info xy_bounds(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_xy_bounds_type arg)
  {
    msg_.xy_bounds = std::move(arg);
    return Init_NavOpenspaceDebugInfo_obstacles_info(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_theta_e
{
public:
  explicit Init_NavOpenspaceDebugInfo_theta_e(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_xy_bounds theta_e(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_theta_e_type arg)
  {
    msg_.theta_e = std::move(arg);
    return Init_NavOpenspaceDebugInfo_xy_bounds(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_y_e
{
public:
  explicit Init_NavOpenspaceDebugInfo_y_e(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_theta_e y_e(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_y_e_type arg)
  {
    msg_.y_e = std::move(arg);
    return Init_NavOpenspaceDebugInfo_theta_e(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_x_e
{
public:
  explicit Init_NavOpenspaceDebugInfo_x_e(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_y_e x_e(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_x_e_type arg)
  {
    msg_.x_e = std::move(arg);
    return Init_NavOpenspaceDebugInfo_y_e(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_theta_s
{
public:
  explicit Init_NavOpenspaceDebugInfo_theta_s(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_x_e theta_s(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_theta_s_type arg)
  {
    msg_.theta_s = std::move(arg);
    return Init_NavOpenspaceDebugInfo_x_e(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_y_s
{
public:
  explicit Init_NavOpenspaceDebugInfo_y_s(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo & msg)
  : msg_(msg)
  {}
  Init_NavOpenspaceDebugInfo_theta_s y_s(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_y_s_type arg)
  {
    msg_.y_s = std::move(arg);
    return Init_NavOpenspaceDebugInfo_theta_s(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

class Init_NavOpenspaceDebugInfo_x_s
{
public:
  Init_NavOpenspaceDebugInfo_x_s()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavOpenspaceDebugInfo_y_s x_s(::deva_planning_msgs2::msg::NavOpenspaceDebugInfo::_x_s_type arg)
  {
    msg_.x_s = std::move(arg);
    return Init_NavOpenspaceDebugInfo_y_s(msg_);
  }

private:
  ::deva_planning_msgs2::msg::NavOpenspaceDebugInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs2::msg::NavOpenspaceDebugInfo>()
{
  return deva_planning_msgs2::msg::builder::Init_NavOpenspaceDebugInfo_x_s();
}

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__BUILDER_HPP_
