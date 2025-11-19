// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/VehicleSignal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__VehicleSignal __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__VehicleSignal __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleSignal_
{
  using Type = VehicleSignal_<ContainerAllocator>;

  explicit VehicleSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
      this->turn_light = 0;
    }
  }

  explicit VehicleSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->high_beam = false;
      this->low_beam = false;
      this->horn = false;
      this->emergency_light = false;
      this->turn_light = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
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
  using _turn_light_type =
    uint8_t;
  _turn_light_type turn_light;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__turn_light(
    const uint8_t & _arg)
  {
    this->turn_light = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t NO_TURN =
    0u;
  static constexpr uint8_t TURN_LEFT =
    1u;
  static constexpr uint8_t TURN_RIGHT =
    2u;
  static constexpr uint8_t EMERGENCY_FLASHERS =
    3u;

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__VehicleSignal
    std::shared_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__VehicleSignal
    std::shared_ptr<deva_planning_msgs::msg::VehicleSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleSignal_ & other) const
  {
    if (this->header != other.header) {
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
    if (this->turn_light != other.turn_light) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleSignal_

// alias to use template instance with default allocator
using VehicleSignal =
  deva_planning_msgs::msg::VehicleSignal_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleSignal_<ContainerAllocator>::NO_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleSignal_<ContainerAllocator>::TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleSignal_<ContainerAllocator>::TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t VehicleSignal_<ContainerAllocator>::EMERGENCY_FLASHERS;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__VEHICLE_SIGNAL__STRUCT_HPP_
