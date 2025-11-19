// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fault_diagnosis:msg/DiagState.idl
// generated code does not contain a copyright notice

#ifndef FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__STRUCT_HPP_
#define FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__STRUCT_HPP_

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
# define DEPRECATED__fault_diagnosis__msg__DiagState __attribute__((deprecated))
#else
# define DEPRECATED__fault_diagnosis__msg__DiagState __declspec(deprecated)
#endif

namespace fault_diagnosis
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DiagState_
{
  using Type = DiagState_<ContainerAllocator>;

  explicit DiagState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fault_name = "";
      this->state = 0;
      this->info = "";
    }
  }

  explicit DiagState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    fault_name(_alloc),
    info(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fault_name = "";
      this->state = 0;
      this->info = "";
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fault_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fault_name_type fault_name;
  using _state_type =
    uint8_t;
  _state_type state;
  using _info_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _info_type info;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fault_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fault_name = _arg;
    return *this;
  }
  Type & set__state(
    const uint8_t & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__info(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->info = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATE_TYPE_NORMAL =
    0u;
  static constexpr uint8_t STATE_TYPE_ERROR =
    1u;

  // pointer types
  using RawPtr =
    fault_diagnosis::msg::DiagState_<ContainerAllocator> *;
  using ConstRawPtr =
    const fault_diagnosis::msg::DiagState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fault_diagnosis::msg::DiagState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fault_diagnosis::msg::DiagState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fault_diagnosis__msg__DiagState
    std::shared_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fault_diagnosis__msg__DiagState
    std::shared_ptr<fault_diagnosis::msg::DiagState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DiagState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fault_name != other.fault_name) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->info != other.info) {
      return false;
    }
    return true;
  }
  bool operator!=(const DiagState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DiagState_

// alias to use template instance with default allocator
using DiagState =
  fault_diagnosis::msg::DiagState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DiagState_<ContainerAllocator>::STATE_TYPE_NORMAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DiagState_<ContainerAllocator>::STATE_TYPE_ERROR;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace fault_diagnosis

#endif  // FAULT_DIAGNOSIS__MSG__DETAIL__DIAG_STATE__STRUCT_HPP_
