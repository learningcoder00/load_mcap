// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/GodObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__STRUCT_HPP_

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
# define DEPRECATED__deva_perception_msgs__msg__GodObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__GodObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GodObstacle_
{
  using Type = GodObstacle_<ContainerAllocator>;

  explicit GodObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_type = 0;
    }
  }

  explicit GodObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obstacle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->object_type = 0;
    }
  }

  // field types and members
  using _obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _obstacle_type obstacle;
  using _object_type_type =
    uint8_t;
  _object_type_type object_type;

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

  // constant declarations
  static constexpr uint8_t OBJECT_TYPE_UNKNOWN =
    0u;
  static constexpr uint8_t OBJECT_TYPE_BAR =
    1u;
  static constexpr uint8_t OBJECT_TYPE_CONE =
    2u;
  static constexpr uint8_t OBJECT_TYPE_WATERHORSE =
    3u;
  static constexpr uint8_t OBJECT_TYPE_BOARD =
    4u;
  static constexpr uint8_t OBJECT_TYPE_BUCKET =
    5u;
  static constexpr uint8_t OBJECT_TYPE_OTHER =
    6u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::GodObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::GodObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::GodObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::GodObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__GodObstacle
    std::shared_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__GodObstacle
    std::shared_ptr<deva_perception_msgs::msg::GodObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GodObstacle_ & other) const
  {
    if (this->obstacle != other.obstacle) {
      return false;
    }
    if (this->object_type != other.object_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GodObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GodObstacle_

// alias to use template instance with default allocator
using GodObstacle =
  deva_perception_msgs::msg::GodObstacle_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GodObstacle_<ContainerAllocator>::OBJECT_TYPE_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GodObstacle_<ContainerAllocator>::OBJECT_TYPE_BAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GodObstacle_<ContainerAllocator>::OBJECT_TYPE_CONE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GodObstacle_<ContainerAllocator>::OBJECT_TYPE_WATERHORSE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GodObstacle_<ContainerAllocator>::OBJECT_TYPE_BOARD;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GodObstacle_<ContainerAllocator>::OBJECT_TYPE_BUCKET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GodObstacle_<ContainerAllocator>::OBJECT_TYPE_OTHER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__GOD_OBSTACLE__STRUCT_HPP_
