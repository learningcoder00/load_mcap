// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RVDynObstacleList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'dynamic_obstacles'
#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RVDynObstacleList __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RVDynObstacleList __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RVDynObstacleList_
{
  using Type = RVDynObstacleList_<ContainerAllocator>;

  explicit RVDynObstacleList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  explicit RVDynObstacleList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->source = 0;
    }
  }

  // field types and members
  using _dynamic_obstacles_type =
    std::vector<deva_perception_msgs::msg::RVDynObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RVDynObstacle_<ContainerAllocator>>>;
  _dynamic_obstacles_type dynamic_obstacles;
  using _source_type =
    uint8_t;
  _source_type source;

  // setters for named parameter idiom
  Type & set__dynamic_obstacles(
    const std::vector<deva_perception_msgs::msg::RVDynObstacle_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::RVDynObstacle_<ContainerAllocator>>> & _arg)
  {
    this->dynamic_obstacles = _arg;
    return *this;
  }
  Type & set__source(
    const uint8_t & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t FOV120_3D =
    0u;
  static constexpr uint8_t FOV120_2D =
    1u;
  static constexpr uint8_t FOV30_3D =
    2u;
  static constexpr uint8_t FOV30_2D =
    3u;

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RVDynObstacleList
    std::shared_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RVDynObstacleList
    std::shared_ptr<deva_perception_msgs::msg::RVDynObstacleList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RVDynObstacleList_ & other) const
  {
    if (this->dynamic_obstacles != other.dynamic_obstacles) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const RVDynObstacleList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RVDynObstacleList_

// alias to use template instance with default allocator
using RVDynObstacleList =
  deva_perception_msgs::msg::RVDynObstacleList_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynObstacleList_<ContainerAllocator>::FOV120_3D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynObstacleList_<ContainerAllocator>::FOV120_2D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynObstacleList_<ContainerAllocator>::FOV30_3D;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t RVDynObstacleList_<ContainerAllocator>::FOV30_2D;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE_LIST__STRUCT_HPP_
