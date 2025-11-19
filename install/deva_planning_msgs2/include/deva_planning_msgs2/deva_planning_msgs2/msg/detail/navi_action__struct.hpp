// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/NaviAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__NAVI_ACTION__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__NAVI_ACTION__STRUCT_HPP_

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
# define DEPRECATED__deva_planning_msgs2__msg__NaviAction __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__NaviAction __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NaviAction_
{
  using Type = NaviAction_<ContainerAllocator>;

  explicit NaviAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meta_action = 0;
      this->current_score = 0.0;
      this->left_score = 0.0;
      this->right_score = 0.0;
    }
  }

  explicit NaviAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->meta_action = 0;
      this->current_score = 0.0;
      this->left_score = 0.0;
      this->right_score = 0.0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _meta_action_type =
    uint8_t;
  _meta_action_type meta_action;
  using _current_score_type =
    double;
  _current_score_type current_score;
  using _left_score_type =
    double;
  _left_score_type left_score;
  using _right_score_type =
    double;
  _right_score_type right_score;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__meta_action(
    const uint8_t & _arg)
  {
    this->meta_action = _arg;
    return *this;
  }
  Type & set__current_score(
    const double & _arg)
  {
    this->current_score = _arg;
    return *this;
  }
  Type & set__left_score(
    const double & _arg)
  {
    this->left_score = _arg;
    return *this;
  }
  Type & set__right_score(
    const double & _arg)
  {
    this->right_score = _arg;
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
    deva_planning_msgs2::msg::NaviAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::NaviAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NaviAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::NaviAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__NaviAction
    std::shared_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__NaviAction
    std::shared_ptr<deva_planning_msgs2::msg::NaviAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NaviAction_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->meta_action != other.meta_action) {
      return false;
    }
    if (this->current_score != other.current_score) {
      return false;
    }
    if (this->left_score != other.left_score) {
      return false;
    }
    if (this->right_score != other.right_score) {
      return false;
    }
    return true;
  }
  bool operator!=(const NaviAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NaviAction_

// alias to use template instance with default allocator
using NaviAction =
  deva_planning_msgs2::msg::NaviAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::WAIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::SPEED_UP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::SLOW_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::SLOW_DOWN_RAPIDLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::GO_STRAIGHT_SLOWLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::GO_STRAIGHT_AT_A_CONSTANT_SPEED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::REVERSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::TURN_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::TURN_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::CHANGE_LANE_TO_THE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::CHANGE_LANE_TO_THE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::SHIFT_SLIGHTLY_TO_THE_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::SHIFT_SLIGHTLY_TO_THE_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::AROUND_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::AROUND_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::SPLIT_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t NaviAction_<ContainerAllocator>::SPLIT_RIGHT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__NAVI_ACTION__STRUCT_HPP_
