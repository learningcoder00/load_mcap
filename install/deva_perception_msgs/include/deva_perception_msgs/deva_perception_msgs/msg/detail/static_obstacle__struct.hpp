// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/StaticObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__StaticObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__StaticObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StaticObstacle_
{
  using Type = StaticObstacle_<ContainerAllocator>;

  explicit StaticObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_type = 0;
      this->static_obstacle_type = 0;
      this->slot_lock_type = 0;
    }
  }

  explicit StaticObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_type = 0;
      this->static_obstacle_type = 0;
      this->slot_lock_type = 0;
    }
  }

  // field types and members
  using _obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _object_type_type =
    uint8_t;
  _object_type_type object_type;
  using _static_obstacle_type_type =
    uint8_t;
  _static_obstacle_type_type static_obstacle_type;
  using _slot_lock_type_type =
    uint8_t;
  _slot_lock_type_type slot_lock_type;

  // setters for named parameter idiom
  Type & set__obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->obstacle = _arg;
    return *this;
  }
  Type & set__object_type(
    const uint8_t & _arg)
  {
    this->object_type = _arg;
    return *this;
  }
  Type & set__static_obstacle_type(
    const uint8_t & _arg)
  {
    this->static_obstacle_type = _arg;
    return *this;
  }
  Type & set__slot_lock_type(
    const uint8_t & _arg)
  {
    this->slot_lock_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t OBJECT_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t OBJECT_TYPE_STOPLINE =
    1u;
  static constexpr uint8_t OBJECT_TYPE_JUNCTION =
    2u;
  static constexpr uint8_t OBJECT_TYPE_LEFTTURN =
    3u;
  static constexpr uint8_t OBJECT_TYPE_RIGHTTURN =
    4u;
  static constexpr uint8_t OBJECT_TYPE_CROSSWALK =
    5u;
  static constexpr uint8_t OBJECT_TYPE_SPEED_CONTROL =
    6u;
  static constexpr uint8_t OBJECT_TYPE_CURB =
    7u;
  static constexpr uint8_t OBJECT_TYPE_BARRIER =
    8u;
  static constexpr uint8_t OBJECT_TYPE_SIGNAL =
    9u;
  static constexpr uint8_t UNKOWN =
    0u;
  static constexpr uint8_t PILLAR =
    1u;
  static constexpr uint8_t SLOT_LIMITTER =
    2u;
  static constexpr uint8_t SLOT_LOCK =
    3u;
  static constexpr uint8_t CONE =
    4u;
  static constexpr uint8_t SPEED_BUMP =
    5u;
  static constexpr uint8_t SIGNAL =
    6u;
  static constexpr uint8_t PARKING_WALLEDGE =
    7u;
  static constexpr uint8_t PARKING_CURB =
    8u;
  static constexpr uint8_t ULTRAOBS =
    9u;
  static constexpr uint8_t FREE =
    0u;
  static constexpr uint8_t LOCKED =
    1u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__StaticObstacle
    std::shared_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__StaticObstacle
    std::shared_ptr<deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StaticObstacle_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    if (this->static_obstacle_type != other.static_obstacle_type) {
      return false;
    }
    if (this->slot_lock_type != other.slot_lock_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const StaticObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StaticObstacle_

// alias to use template instance with default allocator
using StaticObstacle =
  deva_perception_msgs::msg::StaticObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_STOPLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_JUNCTION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_LEFTTURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_RIGHTTURN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_CROSSWALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_SPEED_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_CURB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_BARRIER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::OBJECT_TYPE_SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::UNKOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::PILLAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::SLOT_LIMITTER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::SLOT_LOCK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::CONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::SPEED_BUMP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::SIGNAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::PARKING_WALLEDGE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::PARKING_CURB;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::ULTRAOBS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::FREE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t StaticObstacle_<ContainerAllocator>::LOCKED;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__STATIC_OBSTACLE__STRUCT_HPP_
