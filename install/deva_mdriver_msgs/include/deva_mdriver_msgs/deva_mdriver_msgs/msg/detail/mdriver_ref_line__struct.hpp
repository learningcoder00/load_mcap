// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/MdriverRefLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLine __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MdriverRefLine_
{
  using Type = MdriverRefLine_<ContainerAllocator>;

  explicit MdriverRefLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meta_action = 0;
      this->score = 0.0;
    }
  }

  explicit MdriverRefLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meta_action = 0;
      this->score = 0.0;
    }
  }

  // field types and members
  using _points_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _points_type points;
  using _meta_action_type =
    uint8_t;
  _meta_action_type meta_action;
  using _score_type =
    double;
  _score_type score;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__meta_action(
    const uint8_t & _arg)
  {
    this->meta_action = _arg;
    return *this;
  }
  Type & set__score(
    const double & _arg)
  {
    this->score = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t UNKNOWN =
    0u;
  static constexpr uint8_t WAIT =
    1u;
  static constexpr uint8_t SPEED_UP =
    2u;
  static constexpr uint8_t SLOW_DOWN =
    3u;
  static constexpr uint8_t SLOW_DOWN_RAPIDLY =
    4u;
  static constexpr uint8_t GO_STRAIGHT_SLOWLY =
    5u;
  static constexpr uint8_t GO_STRAIGHT_AT_A_CONSTANT_SPEED =
    6u;
  static constexpr uint8_t REVERSE =
    7u;
  static constexpr uint8_t TURN_LEFT =
    8u;
  static constexpr uint8_t TURN_RIGHT =
    9u;
  static constexpr uint8_t STOP =
    10u;
  static constexpr uint8_t CHANGE_LANE_TO_THE_LEFT =
    11u;
  static constexpr uint8_t CHANGE_LANE_TO_THE_RIGHT =
    12u;
  static constexpr uint8_t SHIFT_SLIGHTLY_TO_THE_LEFT =
    13u;
  static constexpr uint8_t SHIFT_SLIGHTLY_TO_THE_RIGHT =
    14u;
  static constexpr uint8_t AROUND_LEFT =
    15u;
  static constexpr uint8_t AROUND_RIGHT =
    16u;
  static constexpr uint8_t SPLIT_LEFT =
    17u;
  static constexpr uint8_t SPLIT_RIGHT =
    18u;

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLine
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLine
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MdriverRefLine_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->meta_action != other.meta_action) {
      return false;
    }
    if (this->score != other.score) {
      return false;
    }
    return true;
  }
  bool operator!=(const MdriverRefLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MdriverRefLine_

// alias to use template instance with default allocator
using MdriverRefLine =
  deva_mdriver_msgs::msg::MdriverRefLine_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::SPEED_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::SLOW_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::SLOW_DOWN_RAPIDLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::GO_STRAIGHT_SLOWLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::GO_STRAIGHT_AT_A_CONSTANT_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::REVERSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::CHANGE_LANE_TO_THE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::CHANGE_LANE_TO_THE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::SHIFT_SLIGHTLY_TO_THE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::SHIFT_SLIGHTLY_TO_THE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::AROUND_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::AROUND_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::SPLIT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t MdriverRefLine_<ContainerAllocator>::SPLIT_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINE__STRUCT_HPP_
