// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/NavOpenspaceDebugInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacles_info'
#include "deva_planning_msgs2/msg/detail/nav_openspace_obstacle__struct.hpp"
// Member 'parking_slots'
#include "deva_planning_msgs2/msg/detail/nav_openspace_parking_slot__struct.hpp"
// Member 'ref_points'
// Member 'last_ref_points'
#include "deva_planning_msgs2/msg/detail/path_data__struct.hpp"
// Member 'last_trajectory'
// Member 'last_internal_trajectory_paths'
// Member 'hybrid_astar_search_results'
// Member 'optimization_results'
#include "deva_planning_msgs2/msg/detail/target_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceDebugInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceDebugInfo __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NavOpenspaceDebugInfo_
{
  using Type = NavOpenspaceDebugInfo_<ContainerAllocator>;

  explicit NavOpenspaceDebugInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : last_trajectory(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_s = 0.0;
      this->y_s = 0.0;
      this->theta_s = 0.0;
      this->x_e = 0.0;
      this->y_e = 0.0;
      this->theta_e = 0.0;
      this->start_gear = 0ul;
      this->speed = 0.0;
      this->keep_start_gear_distance = 0.0;
      this->kappa = 0.0;
      this->timestamp = 0.0;
      this->openspace_planning_status = 0ul;
      this->last_trajectory_timestamp = 0.0;
      this->current_path_index = 0ul;
      this->is_arrived_path_end = false;
    }
  }

  explicit NavOpenspaceDebugInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : last_trajectory(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_s = 0.0;
      this->y_s = 0.0;
      this->theta_s = 0.0;
      this->x_e = 0.0;
      this->y_e = 0.0;
      this->theta_e = 0.0;
      this->start_gear = 0ul;
      this->speed = 0.0;
      this->keep_start_gear_distance = 0.0;
      this->kappa = 0.0;
      this->timestamp = 0.0;
      this->openspace_planning_status = 0ul;
      this->last_trajectory_timestamp = 0.0;
      this->current_path_index = 0ul;
      this->is_arrived_path_end = false;
    }
  }

  // field types and members
  using _x_s_type =
    double;
  _x_s_type x_s;
  using _y_s_type =
    double;
  _y_s_type y_s;
  using _theta_s_type =
    double;
  _theta_s_type theta_s;
  using _x_e_type =
    double;
  _x_e_type x_e;
  using _y_e_type =
    double;
  _y_e_type y_e;
  using _theta_e_type =
    double;
  _theta_e_type theta_e;
  using _xy_bounds_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _xy_bounds_type xy_bounds;
  using _obstacles_info_type =
    std::vector<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>>>;
  _obstacles_info_type obstacles_info;
  using _parking_slots_type =
    std::vector<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>>>;
  _parking_slots_type parking_slots;
  using _start_gear_type =
    uint32_t;
  _start_gear_type start_gear;
  using _speed_type =
    double;
  _speed_type speed;
  using _keep_start_gear_distance_type =
    double;
  _keep_start_gear_distance_type keep_start_gear_distance;
  using _kappa_type =
    double;
  _kappa_type kappa;
  using _timestamp_type =
    double;
  _timestamp_type timestamp;
  using _ref_points_type =
    std::vector<deva_planning_msgs2::msg::PathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathData_<ContainerAllocator>>>;
  _ref_points_type ref_points;
  using _openspace_planning_status_type =
    uint32_t;
  _openspace_planning_status_type openspace_planning_status;
  using _last_trajectory_type =
    deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>;
  _last_trajectory_type last_trajectory;
  using _last_trajectory_timestamp_type =
    double;
  _last_trajectory_timestamp_type last_trajectory_timestamp;
  using _last_internal_trajectory_paths_type =
    std::vector<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>>;
  _last_internal_trajectory_paths_type last_internal_trajectory_paths;
  using _current_path_index_type =
    uint32_t;
  _current_path_index_type current_path_index;
  using _is_arrived_path_end_type =
    bool;
  _is_arrived_path_end_type is_arrived_path_end;
  using _last_ref_points_type =
    std::vector<deva_planning_msgs2::msg::PathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathData_<ContainerAllocator>>>;
  _last_ref_points_type last_ref_points;
  using _hybrid_astar_search_results_type =
    std::vector<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>>;
  _hybrid_astar_search_results_type hybrid_astar_search_results;
  using _optimization_results_type =
    std::vector<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>>;
  _optimization_results_type optimization_results;

  // setters for named parameter idiom
  Type & set__x_s(
    const double & _arg)
  {
    this->x_s = _arg;
    return *this;
  }
  Type & set__y_s(
    const double & _arg)
  {
    this->y_s = _arg;
    return *this;
  }
  Type & set__theta_s(
    const double & _arg)
  {
    this->theta_s = _arg;
    return *this;
  }
  Type & set__x_e(
    const double & _arg)
  {
    this->x_e = _arg;
    return *this;
  }
  Type & set__y_e(
    const double & _arg)
  {
    this->y_e = _arg;
    return *this;
  }
  Type & set__theta_e(
    const double & _arg)
  {
    this->theta_e = _arg;
    return *this;
  }
  Type & set__xy_bounds(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->xy_bounds = _arg;
    return *this;
  }
  Type & set__obstacles_info(
    const std::vector<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::NavOpenspaceObstacle_<ContainerAllocator>>> & _arg)
  {
    this->obstacles_info = _arg;
    return *this;
  }
  Type & set__parking_slots(
    const std::vector<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::NavOpenspaceParkingSlot_<ContainerAllocator>>> & _arg)
  {
    this->parking_slots = _arg;
    return *this;
  }
  Type & set__start_gear(
    const uint32_t & _arg)
  {
    this->start_gear = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__keep_start_gear_distance(
    const double & _arg)
  {
    this->keep_start_gear_distance = _arg;
    return *this;
  }
  Type & set__kappa(
    const double & _arg)
  {
    this->kappa = _arg;
    return *this;
  }
  Type & set__timestamp(
    const double & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__ref_points(
    const std::vector<deva_planning_msgs2::msg::PathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathData_<ContainerAllocator>>> & _arg)
  {
    this->ref_points = _arg;
    return *this;
  }
  Type & set__openspace_planning_status(
    const uint32_t & _arg)
  {
    this->openspace_planning_status = _arg;
    return *this;
  }
  Type & set__last_trajectory(
    const deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator> & _arg)
  {
    this->last_trajectory = _arg;
    return *this;
  }
  Type & set__last_trajectory_timestamp(
    const double & _arg)
  {
    this->last_trajectory_timestamp = _arg;
    return *this;
  }
  Type & set__last_internal_trajectory_paths(
    const std::vector<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->last_internal_trajectory_paths = _arg;
    return *this;
  }
  Type & set__current_path_index(
    const uint32_t & _arg)
  {
    this->current_path_index = _arg;
    return *this;
  }
  Type & set__is_arrived_path_end(
    const bool & _arg)
  {
    this->is_arrived_path_end = _arg;
    return *this;
  }
  Type & set__last_ref_points(
    const std::vector<deva_planning_msgs2::msg::PathData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathData_<ContainerAllocator>>> & _arg)
  {
    this->last_ref_points = _arg;
    return *this;
  }
  Type & set__hybrid_astar_search_results(
    const std::vector<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->hybrid_astar_search_results = _arg;
    return *this;
  }
  Type & set__optimization_results(
    const std::vector<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->optimization_results = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceDebugInfo
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__NavOpenspaceDebugInfo
    std::shared_ptr<deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NavOpenspaceDebugInfo_ & other) const
  {
    if (this->x_s != other.x_s) {
      return false;
    }
    if (this->y_s != other.y_s) {
      return false;
    }
    if (this->theta_s != other.theta_s) {
      return false;
    }
    if (this->x_e != other.x_e) {
      return false;
    }
    if (this->y_e != other.y_e) {
      return false;
    }
    if (this->theta_e != other.theta_e) {
      return false;
    }
    if (this->xy_bounds != other.xy_bounds) {
      return false;
    }
    if (this->obstacles_info != other.obstacles_info) {
      return false;
    }
    if (this->parking_slots != other.parking_slots) {
      return false;
    }
    if (this->start_gear != other.start_gear) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->keep_start_gear_distance != other.keep_start_gear_distance) {
      return false;
    }
    if (this->kappa != other.kappa) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->ref_points != other.ref_points) {
      return false;
    }
    if (this->openspace_planning_status != other.openspace_planning_status) {
      return false;
    }
    if (this->last_trajectory != other.last_trajectory) {
      return false;
    }
    if (this->last_trajectory_timestamp != other.last_trajectory_timestamp) {
      return false;
    }
    if (this->last_internal_trajectory_paths != other.last_internal_trajectory_paths) {
      return false;
    }
    if (this->current_path_index != other.current_path_index) {
      return false;
    }
    if (this->is_arrived_path_end != other.is_arrived_path_end) {
      return false;
    }
    if (this->last_ref_points != other.last_ref_points) {
      return false;
    }
    if (this->hybrid_astar_search_results != other.hybrid_astar_search_results) {
      return false;
    }
    if (this->optimization_results != other.optimization_results) {
      return false;
    }
    return true;
  }
  bool operator!=(const NavOpenspaceDebugInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NavOpenspaceDebugInfo_

// alias to use template instance with default allocator
using NavOpenspaceDebugInfo =
  deva_planning_msgs2::msg::NavOpenspaceDebugInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAV_OPENSPACE_DEBUG_INFO__STRUCT_HPP_
