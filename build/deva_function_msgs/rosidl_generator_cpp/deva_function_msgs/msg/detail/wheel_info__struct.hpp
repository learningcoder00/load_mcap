// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/WheelInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__WheelInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__WheelInfo __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelInfo_
{
  using Type = WheelInfo_<ContainerAllocator>;

  explicit WheelInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->counter = 0;
      this->direction = 0;
      this->is_slip = false;
      this->is_brake = false;
      this->is_valid = 0;
    }
  }

  explicit WheelInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->counter = 0;
      this->direction = 0;
      this->is_slip = false;
      this->is_brake = false;
      this->is_valid = 0;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _counter_type =
    uint8_t;
  _counter_type counter;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _is_slip_type =
    bool;
  _is_slip_type is_slip;
  using _is_brake_type =
    bool;
  _is_brake_type is_brake;
  using _is_valid_type =
    uint8_t;
  _is_valid_type is_valid;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__counter(
    const uint8_t & _arg)
  {
    this->counter = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__is_slip(
    const bool & _arg)
  {
    this->is_slip = _arg;
    return *this;
  }
  Type & set__is_brake(
    const bool & _arg)
  {
    this->is_brake = _arg;
    return *this;
  }
  Type & set__is_valid(
    const uint8_t & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::WheelInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::WheelInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::WheelInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::WheelInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__WheelInfo
    std::shared_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__WheelInfo
    std::shared_ptr<deva_function_msgs::msg::WheelInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelInfo_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->counter != other.counter) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->is_slip != other.is_slip) {
      return false;
    }
    if (this->is_brake != other.is_brake) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelInfo_

// alias to use template instance with default allocator
using WheelInfo =
  deva_function_msgs::msg::WheelInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__WHEEL_INFO__STRUCT_HPP_
