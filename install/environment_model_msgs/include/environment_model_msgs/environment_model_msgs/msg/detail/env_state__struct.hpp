// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvState.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvState __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvState __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvState_
{
  using Type = EnvState_<ContainerAllocator>;

  explicit EnvState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->msg_length = 0l;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->msg.begin(), this->msg.end(), 0);
    }
  }

  explicit EnvState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
      this->msg_length = 0l;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->msg.begin(), this->msg.end(), 0);
    }
  }

  // field types and members
  using _type_type =
    uint8_t;
  _type_type type;
  using _msg_length_type =
    int32_t;
  _msg_length_type msg_length;
  using _msg_type =
    std::array<uint8_t, 64>;
  _msg_type msg;

  // setters for named parameter idiom
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__msg_length(
    const int32_t & _arg)
  {
    this->msg_length = _arg;
    return *this;
  }
  Type & set__msg(
    const std::array<uint8_t, 64> & _arg)
  {
    this->msg = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvState_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvState
    std::shared_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvState
    std::shared_ptr<environment_model_msgs::msg::EnvState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvState_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->msg_length != other.msg_length) {
      return false;
    }
    if (this->msg != other.msg) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvState_

// alias to use template instance with default allocator
using EnvState =
  environment_model_msgs::msg::EnvState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_STATE__STRUCT_HPP_
