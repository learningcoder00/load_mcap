// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/PlanningCommand.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__PlanningCommand __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__PlanningCommand __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PlanningCommand_
{
  using Type = PlanningCommand_<ContainerAllocator>;

  explicit PlanningCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->cruise_speed = 0.0;
      this->park_slot_id = 0l;
      this->park_out_direction = 0;
      this->function = 0;
    }
  }

  explicit PlanningCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = 0;
      this->cruise_speed = 0.0;
      this->park_slot_id = 0l;
      this->park_out_direction = 0;
      this->function = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _action_type =
    uint8_t;
  _action_type action;
  using _cruise_speed_type =
    double;
  _cruise_speed_type cruise_speed;
  using _park_slot_id_type =
    int32_t;
  _park_slot_id_type park_slot_id;
  using _park_out_direction_type =
    uint8_t;
  _park_out_direction_type park_out_direction;
  using _lane_width_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _lane_width_type lane_width;
  using _function_type =
    uint8_t;
  _function_type function;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__action(
    const uint8_t & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__cruise_speed(
    const double & _arg)
  {
    this->cruise_speed = _arg;
    return *this;
  }
  Type & set__park_slot_id(
    const int32_t & _arg)
  {
    this->park_slot_id = _arg;
    return *this;
  }
  Type & set__park_out_direction(
    const uint8_t & _arg)
  {
    this->park_out_direction = _arg;
    return *this;
  }
  Type & set__lane_width(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__function(
    const uint8_t & _arg)
  {
    this->function = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t ACTION_NONE =
    100u;
  static constexpr uint8_t FOLLOW =
    0u;
  static constexpr uint8_t CHANGE_LEFT =
    1u;
  static constexpr uint8_t CHANGE_RIGHT =
    2u;
  static constexpr uint8_t PULL_OVER =
    3u;
  static constexpr uint8_t STOP =
    4u;
  static constexpr uint8_t RESUME_CRUISE =
    5u;
  static constexpr uint8_t FOLLOW_CIPV =
    6u;
  static constexpr uint8_t MAP_MODE =
    7u;
  static constexpr uint8_t LIGHT_RED =
    8u;
  static constexpr uint8_t LIGHT_GREEN =
    9u;
  static constexpr uint8_t SEARCHING_SLOT =
    10u;
  static constexpr uint8_t PARK_IN =
    11u;
  static constexpr uint8_t PARK_OUT =
    12u;
  static constexpr uint8_t LIGHT_YELLOW =
    13u;
  static constexpr uint8_t LIGHT_RESET =
    14u;
  static constexpr uint8_t AUTODRIVE =
    15u;
  static constexpr uint8_t MANUALDRIVE =
    16u;
  static constexpr uint8_t PARKOUT_DIRECTION_NONE =
    0u;
  static constexpr uint8_t LEFT =
    1u;
  static constexpr uint8_t LEFTFRONT =
    2u;
  static constexpr uint8_t FRONT =
    3u;
  static constexpr uint8_t RIGHTFRONT =
    4u;
  static constexpr uint8_t RIGHT =
    5u;
  static constexpr uint8_t RIGHT_LEFT =
    6u;
  static constexpr uint8_t LEFT_RIGHT =
    7u;
  static constexpr uint8_t MANUAL =
    0u;
  static constexpr uint8_t ACC =
    1u;
  static constexpr uint8_t ICC =
    2u;
  static constexpr uint8_t NOA =
    3u;

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__PlanningCommand
    std::shared_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__PlanningCommand
    std::shared_ptr<deva_planning_msgs2::msg::PlanningCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PlanningCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->action != other.action) {
      return false;
    }
    if (this->cruise_speed != other.cruise_speed) {
      return false;
    }
    if (this->park_slot_id != other.park_slot_id) {
      return false;
    }
    if (this->park_out_direction != other.park_out_direction) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->function != other.function) {
      return false;
    }
    return true;
  }
  bool operator!=(const PlanningCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PlanningCommand_

// alias to use template instance with default allocator
using PlanningCommand =
  deva_planning_msgs2::msg::PlanningCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::ACTION_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::FOLLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::CHANGE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::CHANGE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::PULL_OVER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::RESUME_CRUISE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::FOLLOW_CIPV;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::MAP_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::LIGHT_RED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::LIGHT_GREEN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::SEARCHING_SLOT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::PARK_IN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::PARK_OUT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::LIGHT_YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::LIGHT_RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::AUTODRIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::MANUALDRIVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::PARKOUT_DIRECTION_NONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::LEFTFRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::FRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::RIGHTFRONT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::RIGHT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::LEFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::MANUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::ACC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::ICC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t PlanningCommand_<ContainerAllocator>::NOA;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__PLANNING_COMMAND__STRUCT_HPP_
