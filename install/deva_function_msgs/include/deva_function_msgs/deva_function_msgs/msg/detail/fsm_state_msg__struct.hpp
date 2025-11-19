// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FsmStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__FsmStateMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FsmStateMsg __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FsmStateMsg_
{
  using Type = FsmStateMsg_<ContainerAllocator>;

  explicit FsmStateMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->fsm_state = "";
      this->top_state = 0;
      this->acc_state = 0;
      this->icc_state = 0;
      this->noa_state = 0;
      this->d2d_state = 0;
      this->calibra_state = 0;
      this->mapping_state = 0;
      this->parking_state = 0;
    }
  }

  explicit FsmStateMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fsm_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->fsm_state = "";
      this->top_state = 0;
      this->acc_state = 0;
      this->icc_state = 0;
      this->noa_state = 0;
      this->d2d_state = 0;
      this->calibra_state = 0;
      this->mapping_state = 0;
      this->parking_state = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _publish_timestamp_type =
    double;
  _publish_timestamp_type publish_timestamp;
  using _fsm_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fsm_state_type fsm_state;
  using _top_state_type =
    uint8_t;
  _top_state_type top_state;
  using _acc_state_type =
    uint8_t;
  _acc_state_type acc_state;
  using _icc_state_type =
    uint8_t;
  _icc_state_type icc_state;
  using _noa_state_type =
    uint8_t;
  _noa_state_type noa_state;
  using _d2d_state_type =
    uint8_t;
  _d2d_state_type d2d_state;
  using _calibra_state_type =
    uint8_t;
  _calibra_state_type calibra_state;
  using _mapping_state_type =
    uint8_t;
  _mapping_state_type mapping_state;
  using _parking_state_type =
    uint8_t;
  _parking_state_type parking_state;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__publish_timestamp(
    const double & _arg)
  {
    this->publish_timestamp = _arg;
    return *this;
  }
  Type & set__fsm_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fsm_state = _arg;
    return *this;
  }
  Type & set__top_state(
    const uint8_t & _arg)
  {
    this->top_state = _arg;
    return *this;
  }
  Type & set__acc_state(
    const uint8_t & _arg)
  {
    this->acc_state = _arg;
    return *this;
  }
  Type & set__icc_state(
    const uint8_t & _arg)
  {
    this->icc_state = _arg;
    return *this;
  }
  Type & set__noa_state(
    const uint8_t & _arg)
  {
    this->noa_state = _arg;
    return *this;
  }
  Type & set__d2d_state(
    const uint8_t & _arg)
  {
    this->d2d_state = _arg;
    return *this;
  }
  Type & set__calibra_state(
    const uint8_t & _arg)
  {
    this->calibra_state = _arg;
    return *this;
  }
  Type & set__mapping_state(
    const uint8_t & _arg)
  {
    this->mapping_state = _arg;
    return *this;
  }
  Type & set__parking_state(
    const uint8_t & _arg)
  {
    this->parking_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FsmStateMsg
    std::shared_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FsmStateMsg
    std::shared_ptr<deva_function_msgs::msg::FsmStateMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FsmStateMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->publish_timestamp != other.publish_timestamp) {
      return false;
    }
    if (this->fsm_state != other.fsm_state) {
      return false;
    }
    if (this->top_state != other.top_state) {
      return false;
    }
    if (this->acc_state != other.acc_state) {
      return false;
    }
    if (this->icc_state != other.icc_state) {
      return false;
    }
    if (this->noa_state != other.noa_state) {
      return false;
    }
    if (this->d2d_state != other.d2d_state) {
      return false;
    }
    if (this->calibra_state != other.calibra_state) {
      return false;
    }
    if (this->mapping_state != other.mapping_state) {
      return false;
    }
    if (this->parking_state != other.parking_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const FsmStateMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FsmStateMsg_

// alias to use template instance with default allocator
using FsmStateMsg =
  deva_function_msgs::msg::FsmStateMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_STATE_MSG__STRUCT_HPP_
