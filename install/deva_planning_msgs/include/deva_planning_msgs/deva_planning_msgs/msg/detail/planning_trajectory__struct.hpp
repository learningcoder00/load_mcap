// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/PlanningTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory_points'
#include "deva_planning_msgs/msg/detail/trajectory_point__struct.hpp"
// Member 'curve'
#include "deva_common_msgs/msg/detail/equation_curve__struct.hpp"
// Member 'stop_pose'
// Member 'circle_center'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__PlanningTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__PlanningTrajectory __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningTrajectory_
{
  using Type = PlanningTrajectory_<ContainerAllocator>;

  explicit PlanningTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : curve(_init),
    stop_pose(_init),
    circle_center(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_type = 0;
      this->total_path_length = 0.0;
      this->total_path_time = 0.0;
      this->gear = "";
      this->is_estop = false;
      this->estop_reason = "";
      this->is_stop = false;
      this->stop_reason = "";
      this->is_replan = false;
      this->replan_reason = "";
      this->car_in_dead_end = false;
      this->trace_type = 0;
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
      this->vehicle_gear = 0;
      this->radius = 0.0;
      this->id = 0ul;
    }
  }

  explicit PlanningTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : curve(_alloc, _init),
    gear(_alloc),
    estop_reason(_alloc),
    stop_reason(_alloc),
    stop_pose(_alloc, _init),
    replan_reason(_alloc),
    circle_center(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path_type = 0;
      this->total_path_length = 0.0;
      this->total_path_time = 0.0;
      this->gear = "";
      this->is_estop = false;
      this->estop_reason = "";
      this->is_stop = false;
      this->stop_reason = "";
      this->is_replan = false;
      this->replan_reason = "";
      this->car_in_dead_end = false;
      this->trace_type = 0;
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
      this->vehicle_gear = 0;
      this->radius = 0.0;
      this->id = 0ul;
    }
  }

  // field types and members
  using _path_type_type =
    int8_t;
  _path_type_type path_type;
  using _trajectory_points_type =
    std::vector<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _trajectory_points_type trajectory_points;
  using _curve_type =
    deva_common_msgs::msg::EquationCurve_<ContainerAllocator>;
  _curve_type curve;
  using _total_path_length_type =
    double;
  _total_path_length_type total_path_length;
  using _total_path_time_type =
    double;
  _total_path_time_type total_path_time;
  using _gear_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gear_type gear;
  using _is_estop_type =
    bool;
  _is_estop_type is_estop;
  using _estop_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _estop_reason_type estop_reason;
  using _is_stop_type =
    bool;
  _is_stop_type is_stop;
  using _stop_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stop_reason_type stop_reason;
  using _stop_pose_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _stop_pose_type stop_pose;
  using _is_replan_type =
    bool;
  _is_replan_type is_replan;
  using _replan_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _replan_reason_type replan_reason;
  using _car_in_dead_end_type =
    bool;
  _car_in_dead_end_type car_in_dead_end;
  using _trace_type_type =
    uint8_t;
  _trace_type_type trace_type;
  using _high_beam_type =
    bool;
  _high_beam_type high_beam;
  using _low_beam_type =
    bool;
  _low_beam_type low_beam;
  using _horn_type =
    bool;
  _horn_type horn;
  using _emergency_light_type =
    bool;
  _emergency_light_type emergency_light;
  using _vehicle_gear_type =
    int8_t;
  _vehicle_gear_type vehicle_gear;
  using _circle_center_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _circle_center_type circle_center;
  using _radius_type =
    double;
  _radius_type radius;
  using _id_type =
    uint32_t;
  _id_type id;

  // setters for named parameter idiom
  Type & set__path_type(
    const int8_t & _arg)
  {
    this->path_type = _arg;
    return *this;
  }
  Type & set__trajectory_points(
    const std::vector<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_points = _arg;
    return *this;
  }
  Type & set__curve(
    const deva_common_msgs::msg::EquationCurve_<ContainerAllocator> & _arg)
  {
    this->curve = _arg;
    return *this;
  }
  Type & set__total_path_length(
    const double & _arg)
  {
    this->total_path_length = _arg;
    return *this;
  }
  Type & set__total_path_time(
    const double & _arg)
  {
    this->total_path_time = _arg;
    return *this;
  }
  Type & set__gear(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gear = _arg;
    return *this;
  }
  Type & set__is_estop(
    const bool & _arg)
  {
    this->is_estop = _arg;
    return *this;
  }
  Type & set__estop_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->estop_reason = _arg;
    return *this;
  }
  Type & set__is_stop(
    const bool & _arg)
  {
    this->is_stop = _arg;
    return *this;
  }
  Type & set__stop_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stop_reason = _arg;
    return *this;
  }
  Type & set__stop_pose(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->stop_pose = _arg;
    return *this;
  }
  Type & set__is_replan(
    const bool & _arg)
  {
    this->is_replan = _arg;
    return *this;
  }
  Type & set__replan_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->replan_reason = _arg;
    return *this;
  }
  Type & set__car_in_dead_end(
    const bool & _arg)
  {
    this->car_in_dead_end = _arg;
    return *this;
  }
  Type & set__trace_type(
    const uint8_t & _arg)
  {
    this->trace_type = _arg;
    return *this;
  }
  Type & set__high_beam(
    const bool & _arg)
  {
    this->high_beam = _arg;
    return *this;
  }
  Type & set__low_beam(
    const bool & _arg)
  {
    this->low_beam = _arg;
    return *this;
  }
  Type & set__horn(
    const bool & _arg)
  {
    this->horn = _arg;
    return *this;
  }
  Type & set__emergency_light(
    const bool & _arg)
  {
    this->emergency_light = _arg;
    return *this;
  }
  Type & set__vehicle_gear(
    const int8_t & _arg)
  {
    this->vehicle_gear = _arg;
    return *this;
  }
  Type & set__circle_center(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->circle_center = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningTrajectory
    std::shared_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningTrajectory
    std::shared_ptr<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningTrajectory_ & other) const
  {
    if (this->path_type != other.path_type) {
      return false;
    }
    if (this->trajectory_points != other.trajectory_points) {
      return false;
    }
    if (this->curve != other.curve) {
      return false;
    }
    if (this->total_path_length != other.total_path_length) {
      return false;
    }
    if (this->total_path_time != other.total_path_time) {
      return false;
    }
    if (this->gear != other.gear) {
      return false;
    }
    if (this->is_estop != other.is_estop) {
      return false;
    }
    if (this->estop_reason != other.estop_reason) {
      return false;
    }
    if (this->is_stop != other.is_stop) {
      return false;
    }
    if (this->stop_reason != other.stop_reason) {
      return false;
    }
    if (this->stop_pose != other.stop_pose) {
      return false;
    }
    if (this->is_replan != other.is_replan) {
      return false;
    }
    if (this->replan_reason != other.replan_reason) {
      return false;
    }
    if (this->car_in_dead_end != other.car_in_dead_end) {
      return false;
    }
    if (this->trace_type != other.trace_type) {
      return false;
    }
    if (this->high_beam != other.high_beam) {
      return false;
    }
    if (this->low_beam != other.low_beam) {
      return false;
    }
    if (this->horn != other.horn) {
      return false;
    }
    if (this->emergency_light != other.emergency_light) {
      return false;
    }
    if (this->vehicle_gear != other.vehicle_gear) {
      return false;
    }
    if (this->circle_center != other.circle_center) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningTrajectory_

// alias to use template instance with default allocator
using PlanningTrajectory =
  deva_planning_msgs::msg::PlanningTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_TRAJECTORY__STRUCT_HPP_
