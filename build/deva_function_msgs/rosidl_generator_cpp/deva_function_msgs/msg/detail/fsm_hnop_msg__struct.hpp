// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FsmHnopMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_HNOP_MSG__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_HNOP_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__FsmHnopMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FsmHnopMsg __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FsmHnopMsg_
{
  using Type = FsmHnopMsg_<ContainerAllocator>;

  explicit FsmHnopMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->status = 0;
    }
  }

  explicit FsmHnopMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->status = 0;
    }
  }

  // field types and members
  using _publish_timestamp_type =
    double;
  _publish_timestamp_type publish_timestamp;
  using _status_type =
    uint8_t;
  _status_type status;

  // setters for named parameter idiom
  Type & set__publish_timestamp(
    const double & _arg)
  {
    this->publish_timestamp = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FsmHnopMsg
    std::shared_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FsmHnopMsg
    std::shared_ptr<deva_function_msgs::msg::FsmHnopMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FsmHnopMsg_ & other) const
  {
    if (this->publish_timestamp != other.publish_timestamp) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const FsmHnopMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FsmHnopMsg_

// alias to use template instance with default allocator
using FsmHnopMsg =
  deva_function_msgs::msg::FsmHnopMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_HNOP_MSG__STRUCT_HPP_
