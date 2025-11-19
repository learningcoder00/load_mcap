// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/EgoTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'trajectory'
// Member 'left_boundary'
// Member 'right_boundary'
#include "deva_map_msgs/msg/detail/ego_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__EgoTrajectory __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__EgoTrajectory __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EgoTrajectory_
{
  using Type = EgoTrajectory_<ContainerAllocator>;

  explicit EgoTrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit EgoTrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _trajectory_type =
    std::vector<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>>>;
  _trajectory_type trajectory;
  using _left_boundary_type =
    std::vector<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>>>;
  _left_boundary_type left_boundary;
  using _right_boundary_type =
    std::vector<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>>>;
  _right_boundary_type right_boundary;

  // setters for named parameter idiom
  Type & set__trajectory(
    const std::vector<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }
  Type & set__left_boundary(
    const std::vector<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->left_boundary = _arg;
    return *this;
  }
  Type & set__right_boundary(
    const std::vector<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::EgoTrajectoryPoint_<ContainerAllocator>>> & _arg)
  {
    this->right_boundary = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__EgoTrajectory
    std::shared_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__EgoTrajectory
    std::shared_ptr<deva_map_msgs::msg::EgoTrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EgoTrajectory_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    if (this->left_boundary != other.left_boundary) {
      return false;
    }
    if (this->right_boundary != other.right_boundary) {
      return false;
    }
    return true;
  }
  bool operator!=(const EgoTrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EgoTrajectory_

// alias to use template instance with default allocator
using EgoTrajectory =
  deva_map_msgs::msg::EgoTrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__EGO_TRAJECTORY__STRUCT_HPP_
