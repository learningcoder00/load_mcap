// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/LaneAction.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ACTION__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__LaneAction __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__LaneAction __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneAction_
{
  using Type = LaneAction_<ContainerAllocator>;

  explicit LaneAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit LaneAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint8_t LANE_ACTION_NULL =
    255u;
  static constexpr uint8_t LANE_ACTION_AHEAD =
    0u;
  static constexpr uint8_t LANE_ACTION_LEFT =
    1u;
  static constexpr uint8_t LANE_ACTION_AHEAD_LEFT =
    2u;
  static constexpr uint8_t LANE_ACTION_RIGHT =
    3u;
  static constexpr uint8_t LANE_ACTION_AHEAD_RIGHT =
    4u;
  static constexpr uint8_t LANE_ACTION_LU_TURN =
    5u;
  static constexpr uint8_t LANE_ACTION_LEFT_RIGHT =
    6u;
  static constexpr uint8_t LANE_ACTION_AHEAD_LEFT_RIGHT =
    7u;
  static constexpr uint8_t LANE_ACTION_RU_TURN =
    8u;
  static constexpr uint8_t LANE_ACTION_AHEAD_LU_TURN =
    9u;
  static constexpr uint8_t LANE_ACTION_AHEAD_RU_TURN =
    10u;
  static constexpr uint8_t LANE_ACTION_LEFT_LU_TURN =
    11u;
  static constexpr uint8_t LANE_ACTION_RIGHT_RU_TURN =
    12u;
  static constexpr uint8_t LANE_ACTION_AHEAD_LEFT_LU_TURN =
    16u;
  static constexpr uint8_t LANE_ACTION_RIGHT_LU_TURN =
    17u;
  static constexpr uint8_t LANE_ACTION_LEFT_RIGHT_LU_TURN =
    18u;
  static constexpr uint8_t LANE_ACTION_AHEAD_RIGHT_LU_TURN =
    19u;
  static constexpr uint8_t LANE_ACTION_LEFT_RU_TURN =
    20u;
  static constexpr uint8_t LANE_ACTION_BUS =
    21u;
  static constexpr uint8_t LANE_ACTION_EMPTY =
    22u;
  static constexpr uint8_t LANE_ACTION_VARIABLE =
    23u;
  static constexpr uint8_t LANE_ACTION_DEDICATED =
    24u;
  static constexpr uint8_t LANE_ACTION_TIDAL =
    25u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::LaneAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::LaneAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::LaneAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__LaneAction
    std::shared_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__LaneAction
    std::shared_ptr<deva_perception_msgs::msg::LaneAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneAction_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneAction_

// alias to use template instance with default allocator
using LaneAction =
  deva_perception_msgs::msg::LaneAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_NULL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD_LEFT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_LU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_LEFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD_LEFT_RIGHT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_RU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD_LU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD_RU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_LEFT_LU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_RIGHT_RU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD_LEFT_LU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_RIGHT_LU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_LEFT_RIGHT_LU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_AHEAD_RIGHT_LU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_LEFT_RU_TURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_BUS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_EMPTY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_VARIABLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_DEDICATED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaneAction_<ContainerAllocator>::LANE_ACTION_TIDAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__LANE_ACTION__STRUCT_HPP_
