// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/MachFsmState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__MachFsmState __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__MachFsmState __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachFsmState_
{
  using Type = MachFsmState_<ContainerAllocator>;

  explicit MachFsmState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_state = 0ul;
      this->icc_state = 0ul;
      this->noa_state = 0ul;
      this->d2d_state = 0ul;
      this->aes_state = 0ul;
      this->magic_carpet_state = 0ul;
      this->calibration_state = 0ul;
    }
  }

  explicit MachFsmState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc_state = 0ul;
      this->icc_state = 0ul;
      this->noa_state = 0ul;
      this->d2d_state = 0ul;
      this->aes_state = 0ul;
      this->magic_carpet_state = 0ul;
      this->calibration_state = 0ul;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _acc_state_type =
    uint32_t;
  _acc_state_type acc_state;
  using _icc_state_type =
    uint32_t;
  _icc_state_type icc_state;
  using _noa_state_type =
    uint32_t;
  _noa_state_type noa_state;
  using _d2d_state_type =
    uint32_t;
  _d2d_state_type d2d_state;
  using _aes_state_type =
    uint32_t;
  _aes_state_type aes_state;
  using _magic_carpet_state_type =
    uint32_t;
  _magic_carpet_state_type magic_carpet_state;
  using _calibration_state_type =
    uint32_t;
  _calibration_state_type calibration_state;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__acc_state(
    const uint32_t & _arg)
  {
    this->acc_state = _arg;
    return *this;
  }
  Type & set__icc_state(
    const uint32_t & _arg)
  {
    this->icc_state = _arg;
    return *this;
  }
  Type & set__noa_state(
    const uint32_t & _arg)
  {
    this->noa_state = _arg;
    return *this;
  }
  Type & set__d2d_state(
    const uint32_t & _arg)
  {
    this->d2d_state = _arg;
    return *this;
  }
  Type & set__aes_state(
    const uint32_t & _arg)
  {
    this->aes_state = _arg;
    return *this;
  }
  Type & set__magic_carpet_state(
    const uint32_t & _arg)
  {
    this->magic_carpet_state = _arg;
    return *this;
  }
  Type & set__calibration_state(
    const uint32_t & _arg)
  {
    this->calibration_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::MachFsmState_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::MachFsmState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachFsmState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachFsmState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__MachFsmState
    std::shared_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__MachFsmState
    std::shared_ptr<deva_function_msgs::msg::MachFsmState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachFsmState_ & other) const
  {
    if (this->header != other.header) {
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
    if (this->aes_state != other.aes_state) {
      return false;
    }
    if (this->magic_carpet_state != other.magic_carpet_state) {
      return false;
    }
    if (this->calibration_state != other.calibration_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachFsmState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachFsmState_

// alias to use template instance with default allocator
using MachFsmState =
  deva_function_msgs::msg::MachFsmState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_FSM_STATE__STRUCT_HPP_
