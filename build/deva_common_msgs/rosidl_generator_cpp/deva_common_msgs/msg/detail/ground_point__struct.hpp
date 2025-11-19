// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_common_msgs:msg/GroundPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__STRUCT_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_common_msgs__msg__GroundPoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_common_msgs__msg__GroundPoint __declspec(deprecated)
#endif

namespace deva_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroundPoint_
{
  using Type = GroundPoint_<ContainerAllocator>;

  explicit GroundPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ul;
      this->y = 0ul;
      this->confidence = 0.0f;
    }
  }

  explicit GroundPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0ul;
      this->y = 0ul;
      this->confidence = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    uint32_t;
  _x_type x;
  using _y_type =
    uint32_t;
  _y_type y;
  using _confidence_type =
    float;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__x(
    const uint32_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const uint32_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_common_msgs::msg::GroundPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_common_msgs::msg::GroundPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_common_msgs__msg__GroundPoint
    std::shared_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_common_msgs__msg__GroundPoint
    std::shared_ptr<deva_common_msgs::msg::GroundPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroundPoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroundPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroundPoint_

// alias to use template instance with default allocator
using GroundPoint =
  deva_common_msgs::msg::GroundPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__GROUND_POINT__STRUCT_HPP_
