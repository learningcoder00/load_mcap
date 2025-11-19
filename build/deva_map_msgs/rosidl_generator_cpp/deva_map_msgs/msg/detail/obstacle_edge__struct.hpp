// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ObstacleEdge.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'world_coord_center_point'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ObstacleEdge __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ObstacleEdge __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleEdge_
{
  using Type = ObstacleEdge_<ContainerAllocator>;

  explicit ObstacleEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_coord_center_point(_init)
  {
    (void)_init;
  }

  explicit ObstacleEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : world_coord_center_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _world_coord_center_point_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _world_coord_center_point_type world_coord_center_point;

  // setters for named parameter idiom
  Type & set__world_coord_center_point(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->world_coord_center_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ObstacleEdge
    std::shared_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ObstacleEdge
    std::shared_ptr<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleEdge_ & other) const
  {
    if (this->world_coord_center_point != other.world_coord_center_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleEdge_

// alias to use template instance with default allocator
using ObstacleEdge =
  deva_map_msgs::msg::ObstacleEdge_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__OBSTACLE_EDGE__STRUCT_HPP_
