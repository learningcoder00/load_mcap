// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/MPredictionObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'perception_obstacle'
#include "deva_perception_msgs/msg/detail/moving_obstacle__struct.hpp"
// Member 'trajectory'
#include "deva_planning_msgs/msg/detail/trajectory_point__struct.hpp"
// Member 'acc_heading_steering_stats'
#include "deva_mdriver_msgs/msg/detail/acc_heading_steering_stats__struct.hpp"
// Member 'prediction_debug_info'
#include "deva_mdriver_msgs/msg/detail/debug_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__MPredictionObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__MPredictionObstacle __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MPredictionObstacle_
{
  using Type = MPredictionObstacle_<ContainerAllocator>;

  explicit MPredictionObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_id = 0l;
      this->score = 0.0;
      this->is_static = 0;
    }
  }

  explicit MPredictionObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obs_id = 0l;
      this->score = 0.0;
      this->is_static = 0;
    }
  }

  // field types and members
  using _perception_obstacle_type =
    deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator>;
  _perception_obstacle_type perception_obstacle;
  using _trajectory_type =
    std::vector<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>>;
  _trajectory_type trajectory;
  using _decision_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _decision_type decision;
  using _obs_id_type =
    int32_t;
  _obs_id_type obs_id;
  using _score_type =
    double;
  _score_type score;
  using _cov_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _cov_type cov;
  using _is_static_type =
    uint8_t;
  _is_static_type is_static;
  using _acc_heading_steering_stats_type =
    std::vector<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>>>;
  _acc_heading_steering_stats_type acc_heading_steering_stats;
  using _prediction_debug_info_type =
    std::vector<deva_mdriver_msgs::msg::DebugInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::DebugInfo_<ContainerAllocator>>>;
  _prediction_debug_info_type prediction_debug_info;

  // setters for named parameter idiom
  Type & set__perception_obstacle(
    const deva_perception_msgs::msg::MovingObstacle_<ContainerAllocator> & _arg)
  {
    this->perception_obstacle = _arg;
    return *this;
  }
  Type & set__trajectory(
    const std::vector<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::TrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__decision(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->decision = _arg;
    return *this;
  }
  Type & set__obs_id(
    const int32_t & _arg)
  {
    this->obs_id = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }
  Type & set__cov(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->cov = _arg;
    return *this;
  }
  Type & set__is_static(
    const uint8_t & _arg)
  {
    this->is_static = _arg;
    return *this;
  }
  Type & set__acc_heading_steering_stats(
    const std::vector<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>>> & _arg)
  {
    this->acc_heading_steering_stats = _arg;
    return *this;
  }
  Type & set__prediction_debug_info(
    const std::vector<deva_mdriver_msgs::msg::DebugInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::DebugInfo_<ContainerAllocator>>> & _arg)
  {
    this->prediction_debug_info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NOT_STATIC =
    0u;
  static constexpr uint8_t WAIT_TO_MOVE =
    1u;
  static constexpr uint8_t DEAD_CAR =
    2u;

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__MPredictionObstacle
    std::shared_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__MPredictionObstacle
    std::shared_ptr<deva_mdriver_msgs::msg::MPredictionObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MPredictionObstacle_ & other) const
  {
    if (this->perception_obstacle != other.perception_obstacle) {
      return false;
    }
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->decision != other.decision) {
      return false;
    }
    if (this->obs_id != other.obs_id) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    if (this->cov != other.cov) {
      return false;
    }
    if (this->is_static != other.is_static) {
      return false;
    }
    if (this->acc_heading_steering_stats != other.acc_heading_steering_stats) {
      return false;
    }
    if (this->prediction_debug_info != other.prediction_debug_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const MPredictionObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MPredictionObstacle_

// alias to use template instance with default allocator
using MPredictionObstacle =
  deva_mdriver_msgs::msg::MPredictionObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MPredictionObstacle_<ContainerAllocator>::NOT_STATIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MPredictionObstacle_<ContainerAllocator>::WAIT_TO_MOVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MPredictionObstacle_<ContainerAllocator>::DEAD_CAR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__M_PREDICTION_OBSTACLE__STRUCT_HPP_
