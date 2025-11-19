// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/ADASFunctionState.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__ADASFunctionState __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__ADASFunctionState __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ADASFunctionState_
{
  using Type = ADASFunctionState_<ContainerAllocator>;

  explicit ADASFunctionState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->adas_function_state = 0;
    }
  }

  explicit ADASFunctionState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->adas_function_state = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _adas_function_state_type =
    uint8_t;
  _adas_function_state_type adas_function_state;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__adas_function_state(
    const uint8_t & _arg)
  {
    this->adas_function_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__ADASFunctionState
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__ADASFunctionState
    std::shared_ptr<deva_function_msgs::msg::ADASFunctionState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ADASFunctionState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->adas_function_state != other.adas_function_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ADASFunctionState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ADASFunctionState_

// alias to use template instance with default allocator
using ADASFunctionState =
  deva_function_msgs::msg::ADASFunctionState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__ADAS_FUNCTION_STATE__STRUCT_HPP_
