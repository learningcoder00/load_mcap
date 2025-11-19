// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/MutableObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'static_obstacle'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__MutableObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__MutableObstacle __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MutableObstacle_
{
  using Type = MutableObstacle_<ContainerAllocator>;

  explicit MutableObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : static_obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_blocked = false;
    }
  }

  explicit MutableObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : static_obstacle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_blocked = false;
    }
  }

  // field types and members
  using _static_obstacle_type =
    deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>;
  _static_obstacle_type static_obstacle;
  using _is_blocked_type =
    bool;
  _is_blocked_type is_blocked;

  // setters for named parameter idiom
  Type & set__static_obstacle(
    const deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> & _arg)
  {
    this->static_obstacle = _arg;
    return *this;
  }
  Type & set__is_blocked(
    const bool & _arg)
  {
    this->is_blocked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__MutableObstacle
    std::shared_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__MutableObstacle
    std::shared_ptr<deva_perception_msgs::msg::MutableObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MutableObstacle_ & other) const
  {
    if (this->static_obstacle != other.static_obstacle) {
      return false;
    }
    if (this->is_blocked != other.is_blocked) {
      return false;
    }
    return true;
  }
  bool operator!=(const MutableObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MutableObstacle_

// alias to use template instance with default allocator
using MutableObstacle =
  deva_perception_msgs::msg::MutableObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__MUTABLE_OBSTACLE__STRUCT_HPP_
