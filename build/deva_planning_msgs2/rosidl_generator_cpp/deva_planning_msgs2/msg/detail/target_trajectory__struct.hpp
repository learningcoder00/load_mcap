// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/TargetTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'sensor_timestamp'
#include "deva_planning_msgs2/msg/detail/sensor_time__struct.hpp"
// Member 'trajectory_point'
#include "deva_planning_msgs2/msg/detail/trajectory_point__struct.hpp"
// Member 'path_point'
// Member 'stop_pose'
#include "deva_planning_msgs2/msg/detail/path_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__TargetTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__TargetTrajectory __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TargetTrajectory_
{
  using Type = TargetTrajectory_<ContainerAllocator>;

  explicit TargetTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    sensor_timestamp(_init),
    stop_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_gnss_time = 0.0;
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
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
      this->trace_type = 0;
    }
  }

  explicit TargetTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_timestamp(_alloc, _init),
    gear(_alloc),
    estop_reason(_alloc),
    stop_pose(_alloc, _init),
    stop_reason(_alloc),
    replan_reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_gnss_time = 0.0;
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
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
      this->trace_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_timestamp_type =
    deva_planning_msgs2::msg::SensorTime_<ContainerAllocator>;
  _sensor_timestamp_type sensor_timestamp;
  using _start_gnss_time_type =
    double;
  _start_gnss_time_type start_gnss_time;
  using _total_path_length_type =
    double;
  _total_path_length_type total_path_length;
  using _total_path_time_type =
    double;
  _total_path_time_type total_path_time;
  using _trajectory_point_type =
    std::vector<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _trajectory_point_type trajectory_point;
  using _path_point_type =
    std::vector<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>>>;
  _path_point_type path_point;
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
  using _stop_pose_type =
    deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>;
  _stop_pose_type stop_pose;
  using _stop_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stop_reason_type stop_reason;
  using _is_replan_type =
    bool;
  _is_replan_type is_replan;
  using _replan_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _replan_reason_type replan_reason;
  using _car_in_dead_end_type =
    bool;
  _car_in_dead_end_type car_in_dead_end;
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
  using _trace_type_type =
    uint8_t;
  _trace_type_type trace_type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_timestamp(
    const deva_planning_msgs2::msg::SensorTime_<ContainerAllocator> & _arg)
  {
    this->sensor_timestamp = _arg;
    return *this;
  }
  Type & set__start_gnss_time(
    const double & _arg)
  {
    this->start_gnss_time = _arg;
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
  Type & set__trajectory_point(
    const std::vector<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->trajectory_point = _arg;
    return *this;
  }
  Type & set__path_point(
    const std::vector<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->path_point = _arg;
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
  Type & set__stop_pose(
    const deva_planning_msgs2::msg::PathPoint_<ContainerAllocator> & _arg)
  {
    this->stop_pose = _arg;
    return *this;
  }
  Type & set__stop_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stop_reason = _arg;
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
  Type & set__trace_type(
    const uint8_t & _arg)
  {
    this->trace_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t TRACETYPE_GO_STRAIGHT =
    0u;
  static constexpr uint8_t TRACETYPE_TURN_LEFT =
    1u;
  static constexpr uint8_t TRACETYPE_TURN_RIGHT =
    2u;
  static constexpr uint8_t TRACETYPE_CHANGELINE_LEFT =
    3u;
  static constexpr uint8_t TRACETYPE_CHANGELINE_RIGHT =
    4u;

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__TargetTrajectory
    std::shared_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__TargetTrajectory
    std::shared_ptr<deva_planning_msgs2::msg::TargetTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TargetTrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_timestamp != other.sensor_timestamp) {
      return false;
    }
    if (this->start_gnss_time != other.start_gnss_time) {
      return false;
    }
    if (this->total_path_length != other.total_path_length) {
      return false;
    }
    if (this->total_path_time != other.total_path_time) {
      return false;
    }
    if (this->trajectory_point != other.trajectory_point) {
      return false;
    }
    if (this->path_point != other.path_point) {
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
    if (this->stop_pose != other.stop_pose) {
      return false;
    }
    if (this->stop_reason != other.stop_reason) {
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
    if (this->trace_type != other.trace_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const TargetTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TargetTrajectory_

// alias to use template instance with default allocator
using TargetTrajectory =
  deva_planning_msgs2::msg::TargetTrajectory_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TargetTrajectory_<ContainerAllocator>::TRACETYPE_GO_STRAIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TargetTrajectory_<ContainerAllocator>::TRACETYPE_TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TargetTrajectory_<ContainerAllocator>::TRACETYPE_TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TargetTrajectory_<ContainerAllocator>::TRACETYPE_CHANGELINE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t TargetTrajectory_<ContainerAllocator>::TRACETYPE_CHANGELINE_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__TARGET_TRAJECTORY__STRUCT_HPP_
