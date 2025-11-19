// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/Vec2dArray.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'vec2d_array'
#include "environment_model_msgs/msg/detail/vec2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__Vec2dArray __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__Vec2dArray __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Vec2dArray_
{
  using Type = Vec2dArray_<ContainerAllocator>;

  explicit Vec2dArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Vec2dArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _vec2d_array_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _vec2d_array_type vec2d_array;

  // setters for named parameter idiom
  Type & set__vec2d_array(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->vec2d_array = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::Vec2dArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::Vec2dArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__Vec2dArray
    std::shared_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__Vec2dArray
    std::shared_ptr<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Vec2dArray_ & other) const
  {
    if (this->vec2d_array != other.vec2d_array) {
      return false;
    }
    return true;
  }
  bool operator!=(const Vec2dArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Vec2dArray_

// alias to use template instance with default allocator
using Vec2dArray =
  environment_model_msgs::msg::Vec2dArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__VEC2D_ARRAY__STRUCT_HPP_
