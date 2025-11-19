// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'sensor_time'
#include "deva_planning_msgs/msg/detail/sensor_time__struct.hpp"
// Member 'trajectories'
#include "deva_planning_msgs/msg/detail/planning_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__PlanningResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__PlanningResult __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningResult_
{
  using Type = PlanningResult_<ContainerAllocator>;

  explicit PlanningResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    sensor_time(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit PlanningResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_time_type =
    deva_planning_msgs::msg::SensorTime_<ContainerAllocator>;
  _sensor_time_type sensor_time;
  using _trajectories_type =
    std::vector<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>>>;
  _trajectories_type trajectories;
  using _status_type =
    int8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_time(
    const deva_planning_msgs::msg::SensorTime_<ContainerAllocator> & _arg)
  {
    this->sensor_time = _arg;
    return *this;
  }
  Type & set__trajectories(
    const std::vector<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::PlanningTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectories = _arg;
    return *this;
  }
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t SUCCESS =
    1;
  static constexpr int8_t FAILED =
    2;
  static constexpr int8_t FREEZE =
    3;
  static constexpr int8_t QUIT =
    4;

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::PlanningResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::PlanningResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::PlanningResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningResult
    std::shared_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__PlanningResult
    std::shared_ptr<deva_planning_msgs::msg::PlanningResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor_time != other.sensor_time) {
      return false;
    }
    if (this->trajectories != other.trajectories) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningResult_

// alias to use template instance with default allocator
using PlanningResult =
  deva_planning_msgs::msg::PlanningResult_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlanningResult_<ContainerAllocator>::SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlanningResult_<ContainerAllocator>::FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlanningResult_<ContainerAllocator>::FREEZE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t PlanningResult_<ContainerAllocator>::QUIT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PLANNING_RESULT__STRUCT_HPP_
