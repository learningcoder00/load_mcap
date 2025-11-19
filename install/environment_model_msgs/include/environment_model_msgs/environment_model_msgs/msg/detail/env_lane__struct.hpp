// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvLane.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coords'
// Member 'extends'
// Member 'left_boundary'
// Member 'right_boundary'
#include "environment_model_msgs/msg/detail/vec2d__struct.hpp"
// Member 'left_neibors'
// Member 'right_neibors'
#include "environment_model_msgs/msg/detail/map_ids__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvLane __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvLane __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvLane_
{
  using Type = EnvLane_<ContainerAllocator>;

  explicit EnvLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  explicit EnvLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _coords_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _coords_type coords;
  using _extends_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _extends_type extends;
  using _left_boundary_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _left_boundary_type left_boundary;
  using _right_boundary_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _right_boundary_type right_boundary;
  using _left_neibors_type =
    std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>>;
  _left_neibors_type left_neibors;
  using _right_neibors_type =
    std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>>;
  _right_neibors_type right_neibors;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__coords(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->coords = _arg;
    return *this;
  }
  Type & set__extends(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->extends = _arg;
    return *this;
  }
  Type & set__left_boundary(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->left_boundary = _arg;
    return *this;
  }
  Type & set__right_boundary(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->right_boundary = _arg;
    return *this;
  }
  Type & set__left_neibors(
    const std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>> & _arg)
  {
    this->left_neibors = _arg;
    return *this;
  }
  Type & set__right_neibors(
    const std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>> & _arg)
  {
    this->right_neibors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvLane
    std::shared_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvLane
    std::shared_ptr<environment_model_msgs::msg::EnvLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvLane_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->coords != other.coords) {
      return false;
    }
    if (this->extends != other.extends) {
      return false;
    }
    if (this->left_boundary != other.left_boundary) {
      return false;
    }
    if (this->right_boundary != other.right_boundary) {
      return false;
    }
    if (this->left_neibors != other.left_neibors) {
      return false;
    }
    if (this->right_neibors != other.right_neibors) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvLane_

// alias to use template instance with default allocator
using EnvLane =
  environment_model_msgs::msg::EnvLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE__STRUCT_HPP_
