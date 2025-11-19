// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficStatus __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficStatus __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficStatus_
{
  using Type = TrafficStatus_<ContainerAllocator>;

  explicit TrafficStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->color_confidence = 0.0f;
      this->shape_confidence = 0.0f;
      this->blink = false;
      this->countdown_value = 0l;
    }
  }

  explicit TrafficStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->shape = 0;
      this->color_confidence = 0.0f;
      this->shape_confidence = 0.0f;
      this->blink = false;
      this->countdown_value = 0l;
    }
  }

  // field types and members
  using _color_type =
    uint8_t;
  _color_type color;
  using _shape_type =
    uint8_t;
  _shape_type shape;
  using _color_confidence_type =
    float;
  _color_confidence_type color_confidence;
  using _shape_confidence_type =
    float;
  _shape_confidence_type shape_confidence;
  using _blink_type =
    bool;
  _blink_type blink;
  using _countdown_value_type =
    int32_t;
  _countdown_value_type countdown_value;

  // setters for named parameter idiom
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__shape(
    const uint8_t & _arg)
  {
    this->shape = _arg;
    return *this;
  }
  Type & set__color_confidence(
    const float & _arg)
  {
    this->color_confidence = _arg;
    return *this;
  }
  Type & set__shape_confidence(
    const float & _arg)
  {
    this->shape_confidence = _arg;
    return *this;
  }
  Type & set__blink(
    const bool & _arg)
  {
    this->blink = _arg;
    return *this;
  }
  Type & set__countdown_value(
    const int32_t & _arg)
  {
    this->countdown_value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficStatus
    std::shared_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficStatus
    std::shared_ptr<deva_perception_msgs::msg::TrafficStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficStatus_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->shape != other.shape) {
      return false;
    }
    if (this->color_confidence != other.color_confidence) {
      return false;
    }
    if (this->shape_confidence != other.shape_confidence) {
      return false;
    }
    if (this->blink != other.blink) {
      return false;
    }
    if (this->countdown_value != other.countdown_value) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficStatus_

// alias to use template instance with default allocator
using TrafficStatus =
  deva_perception_msgs::msg::TrafficStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_STATUS__STRUCT_HPP_
