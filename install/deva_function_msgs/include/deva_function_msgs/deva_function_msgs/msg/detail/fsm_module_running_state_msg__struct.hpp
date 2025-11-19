// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FsmModuleRunningStateMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__FsmModuleRunningStateMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FsmModuleRunningStateMsg __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FsmModuleRunningStateMsg_
{
  using Type = FsmModuleRunningStateMsg_<ContainerAllocator>;

  explicit FsmModuleRunningStateMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
      this->state = "";
    }
  }

  explicit FsmModuleRunningStateMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    module_name(_alloc),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->module_name = "";
      this->state = "";
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _module_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _module_name_type module_name;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__module_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FsmModuleRunningStateMsg
    std::shared_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FsmModuleRunningStateMsg
    std::shared_ptr<deva_function_msgs::msg::FsmModuleRunningStateMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FsmModuleRunningStateMsg_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->module_name != other.module_name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const FsmModuleRunningStateMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FsmModuleRunningStateMsg_

// alias to use template instance with default allocator
using FsmModuleRunningStateMsg =
  deva_function_msgs::msg::FsmModuleRunningStateMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FSM_MODULE_RUNNING_STATE_MSG__STRUCT_HPP_
