// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FuncMainSM.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__FuncMainSM __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FuncMainSM __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FuncMainSM_
{
  using Type = FuncMainSM_<ContainerAllocator>;

  explicit FuncMainSM_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_machine_main_state = 0;
      this->state_machine_mode = 0;
      this->act_func_arbn = 0;
    }
  }

  explicit FuncMainSM_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_machine_main_state = 0;
      this->state_machine_mode = 0;
      this->act_func_arbn = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _state_machine_main_state_type =
    uint8_t;
  _state_machine_main_state_type state_machine_main_state;
  using _state_machine_mode_type =
    uint8_t;
  _state_machine_mode_type state_machine_mode;
  using _act_func_arbn_type =
    uint8_t;
  _act_func_arbn_type act_func_arbn;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__state_machine_main_state(
    const uint8_t & _arg)
  {
    this->state_machine_main_state = _arg;
    return *this;
  }
  Type & set__state_machine_mode(
    const uint8_t & _arg)
  {
    this->state_machine_mode = _arg;
    return *this;
  }
  Type & set__act_func_arbn(
    const uint8_t & _arg)
  {
    this->act_func_arbn = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FuncMainSM_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FuncMainSM_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FuncMainSM_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FuncMainSM_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FuncMainSM
    std::shared_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FuncMainSM
    std::shared_ptr<deva_function_msgs::msg::FuncMainSM_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FuncMainSM_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->state_machine_main_state != other.state_machine_main_state) {
      return false;
    }
    if (this->state_machine_mode != other.state_machine_mode) {
      return false;
    }
    if (this->act_func_arbn != other.act_func_arbn) {
      return false;
    }
    return true;
  }
  bool operator!=(const FuncMainSM_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FuncMainSM_

// alias to use template instance with default allocator
using FuncMainSM =
  deva_function_msgs::msg::FuncMainSM_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FUNC_MAIN_SM__STRUCT_HPP_
