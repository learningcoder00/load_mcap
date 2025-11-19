// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/LaneType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__LaneType __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__LaneType __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneType_
{
  using Type = LaneType_<ContainerAllocator>;

  explicit LaneType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0;
      this->lane_color = 0;
      this->s_start = 0.0;
      this->s_end = 0.0;
    }
  }

  explicit LaneType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_type = 0;
      this->lane_color = 0;
      this->s_start = 0.0;
      this->s_end = 0.0;
    }
  }

  // field types and members
  using _lane_type_type =
    uint8_t;
  _lane_type_type lane_type;
  using _lane_color_type =
    uint8_t;
  _lane_color_type lane_color;
  using _s_start_type =
    double;
  _s_start_type s_start;
  using _s_end_type =
    double;
  _s_end_type s_end;

  // setters for named parameter idiom
  Type & set__lane_type(
    const uint8_t & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__lane_color(
    const uint8_t & _arg)
  {
    this->lane_color = _arg;
    return *this;
  }
  Type & set__s_start(
    const double & _arg)
  {
    this->s_start = _arg;
    return *this;
  }
  Type & set__s_end(
    const double & _arg)
  {
    this->s_end = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t DASHED_LINE =
    1u;
  static constexpr uint8_t SOLID_LINE =
    2u;
  static constexpr uint8_t L_DASHED_R_SOLID =
    3u;
  static constexpr uint8_t L_SOLID_R_DASHED =
    4u;
  static constexpr uint8_t DOUBLE_DASHED =
    5u;
  static constexpr uint8_t DOUBLE_SOLID =
    6u;
  static constexpr uint8_t CURB =
    7u;
  static constexpr uint8_t GUARDRAIL =
    8u;
  static constexpr uint8_t CENTER_LINE =
    9u;
  static constexpr uint8_t VIRTUAL_JUNCTION =
    10u;
  static constexpr uint8_t VIRTUAL =
    11u;
  static constexpr uint8_t WHITE =
    1u;
  static constexpr uint8_t YELLOW =
    2u;
  static constexpr uint8_t DOUBLE_YELLOW =
    3u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::LaneType_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::LaneType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__LaneType
    std::shared_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__LaneType
    std::shared_ptr<deva_perception_msgs::msg::LaneType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneType_ & other) const
  {
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->lane_color != other.lane_color) {
      return false;
    }
    if (this->s_start != other.s_start) {
      return false;
    }
    if (this->s_end != other.s_end) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneType_

// alias to use template instance with default allocator
using LaneType =
  deva_perception_msgs::msg::LaneType_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::DASHED_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::SOLID_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::L_DASHED_R_SOLID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::L_SOLID_R_DASHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::DOUBLE_DASHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::DOUBLE_SOLID;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::CURB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::GUARDRAIL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::CENTER_LINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::VIRTUAL_JUNCTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::VIRTUAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::WHITE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::YELLOW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneType_<ContainerAllocator>::DOUBLE_YELLOW;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_TYPE__STRUCT_HPP_
