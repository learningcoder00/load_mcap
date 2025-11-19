// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/PlanningResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__STRUCT_HPP_

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
#include "deva_planning_msgs2/msg/detail/sensor_time__struct.hpp"
// Member 'trajectories'
#include "deva_planning_msgs2/msg/detail/planning_trajectory__struct.hpp"
// Member 'fail_reason'
#include "deva_planning_msgs2/msg/detail/planning_fail__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__PlanningResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__PlanningResult __declspec(deprecated)
#endif

namespace deva_planning_msgs2
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
      this->pilot_planning_state = 0;
      this->planning_work_state = 0;
      this->function_state_available = 0;
    }
  }

  explicit PlanningResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    sensor_time(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pilot_planning_state = 0;
      this->planning_work_state = 0;
      this->function_state_available = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_time_type =
    deva_planning_msgs2::msg::SensorTime_<ContainerAllocator>;
  _sensor_time_type sensor_time;
  using _trajectories_type =
    std::vector<deva_planning_msgs2::msg::PlanningTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PlanningTrajectory_<ContainerAllocator>>>;
  _trajectories_type trajectories;
  using _pilot_planning_state_type =
    int8_t;
  _pilot_planning_state_type pilot_planning_state;
  using _planning_work_state_type =
    uint8_t;
  _planning_work_state_type planning_work_state;
  using _function_state_available_type =
    uint8_t;
  _function_state_available_type function_state_available;
  using _fail_reason_type =
    std::vector<deva_planning_msgs2::msg::PlanningFail_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PlanningFail_<ContainerAllocator>>>;
  _fail_reason_type fail_reason;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor_time(
    const deva_planning_msgs2::msg::SensorTime_<ContainerAllocator> & _arg)
  {
    this->sensor_time = _arg;
    return *this;
  }
  Type & set__trajectories(
    const std::vector<deva_planning_msgs2::msg::PlanningTrajectory_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PlanningTrajectory_<ContainerAllocator>>> & _arg)
  {
    this->trajectories = _arg;
    return *this;
  }
  Type & set__pilot_planning_state(
    const int8_t & _arg)
  {
    this->pilot_planning_state = _arg;
    return *this;
  }
  Type & set__planning_work_state(
    const uint8_t & _arg)
  {
    this->planning_work_state = _arg;
    return *this;
  }
  Type & set__function_state_available(
    const uint8_t & _arg)
  {
    this->function_state_available = _arg;
    return *this;
  }
  Type & set__fail_reason(
    const std::vector<deva_planning_msgs2::msg::PlanningFail_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs2::msg::PlanningFail_<ContainerAllocator>>> & _arg)
  {
    this->fail_reason = _arg;
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
  static constexpr uint8_t MANUAL =
    0u;
  static constexpr uint8_t ACC =
    1u;
  static constexpr uint8_t ICC =
    2u;
  static constexpr uint8_t NOA =
    3u;
  static constexpr uint8_t D2D =
    4u;
  static constexpr uint8_t OFF =
    5u;

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__PlanningResult
    std::shared_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__PlanningResult
    std::shared_ptr<deva_planning_msgs2::msg::PlanningResult_<ContainerAllocator> const>
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
    if (this->pilot_planning_state != other.pilot_planning_state) {
      return false;
    }
    if (this->planning_work_state != other.planning_work_state) {
      return false;
    }
    if (this->function_state_available != other.function_state_available) {
      return false;
    }
    if (this->fail_reason != other.fail_reason) {
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
  deva_planning_msgs2::msg::PlanningResult_<std::allocator<void>>;

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
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningResult_<ContainerAllocator>::MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningResult_<ContainerAllocator>::ACC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningResult_<ContainerAllocator>::ICC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningResult_<ContainerAllocator>::NOA;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningResult_<ContainerAllocator>::D2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningResult_<ContainerAllocator>::OFF;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_RESULT__STRUCT_HPP_
