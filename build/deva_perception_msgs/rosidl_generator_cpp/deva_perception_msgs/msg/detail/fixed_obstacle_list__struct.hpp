// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/FixedObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE_LIST__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'fixed_obstacles'
#include "deva_perception_msgs/msg/detail/fixed_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__FixedObstacleList __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__FixedObstacleList __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FixedObstacleList_
{
  using Type = FixedObstacleList_<ContainerAllocator>;

  explicit FixedObstacleList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  explicit FixedObstacleList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  // field types and members
  using _fixed_obstacles_type =
    std::vector<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>>>;
  _fixed_obstacles_type fixed_obstacles;
  using _source_type =
    uint8_t;
  _source_type source;

  // setters for named parameter idiom
  Type & set__fixed_obstacles(
    const std::vector<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::FixedObstacle_<ContainerAllocator>>> & _arg)
  {
    this->fixed_obstacles = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FOV120 =
    0u;
  static constexpr uint8_t FOV30 =
    1u;
  static constexpr uint8_t TRANS =
    2u;
  static constexpr uint8_t FUSION =
    3u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__FixedObstacleList
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__FixedObstacleList
    std::shared_ptr<deva_perception_msgs::msg::FixedObstacleList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FixedObstacleList_ & other) const
  {
    if (this->fixed_obstacles != other.fixed_obstacles) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const FixedObstacleList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FixedObstacleList_

// alias to use template instance with default allocator
using FixedObstacleList =
  deva_perception_msgs::msg::FixedObstacleList_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacleList_<ContainerAllocator>::FOV120;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacleList_<ContainerAllocator>::FOV30;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacleList_<ContainerAllocator>::TRANS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FixedObstacleList_<ContainerAllocator>::FUSION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FIXED_OBSTACLE_LIST__STRUCT_HPP_
