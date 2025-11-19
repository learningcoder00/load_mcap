// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/BoundPoint.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__BoundPoint __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__BoundPoint __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundPoint_
{
  using Type = BoundPoint_<ContainerAllocator>;

  explicit BoundPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->enum_marking_type = 0;
      this->enum_color = 0;
      this->width = 0.0;
    }
  }

  explicit BoundPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->enum_marking_type = 0;
      this->enum_color = 0;
      this->width = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _enum_marking_type_type =
    uint8_t;
  _enum_marking_type_type enum_marking_type;
  using _enum_color_type =
    uint8_t;
  _enum_color_type enum_color;
  using _width_type =
    double;
  _width_type width;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__enum_marking_type(
    const uint8_t & _arg)
  {
    this->enum_marking_type = _arg;
    return *this;
  }
  Type & set__enum_color(
    const uint8_t & _arg)
  {
    this->enum_color = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::BoundPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::BoundPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::BoundPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::BoundPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__BoundPoint
    std::shared_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__BoundPoint
    std::shared_ptr<environment_model_msgs::msg::BoundPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundPoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->enum_marking_type != other.enum_marking_type) {
      return false;
    }
    if (this->enum_color != other.enum_color) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundPoint_

// alias to use template instance with default allocator
using BoundPoint =
  environment_model_msgs::msg::BoundPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__BOUND_POINT__STRUCT_HPP_
