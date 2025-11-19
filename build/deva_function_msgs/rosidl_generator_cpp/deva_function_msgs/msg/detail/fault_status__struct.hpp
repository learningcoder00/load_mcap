// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FaultStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__FaultStatus __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FaultStatus __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaultStatus_
{
  using Type = FaultStatus_<ContainerAllocator>;

  explicit FaultStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ul;
      this->error_status = 0;
      this->report_time = 0ull;
    }
  }

  explicit FaultStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->error_code = 0ul;
      this->error_status = 0;
      this->report_time = 0ull;
    }
  }

  // field types and members
  using _error_code_type =
    uint32_t;
  _error_code_type error_code;
  using _error_status_type =
    uint8_t;
  _error_status_type error_status;
  using _report_time_type =
    uint64_t;
  _report_time_type report_time;

  // setters for named parameter idiom
  Type & set__error_code(
    const uint32_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_status(
    const uint8_t & _arg)
  {
    this->error_status = _arg;
    return *this;
  }
  Type & set__report_time(
    const uint64_t & _arg)
  {
    this->report_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FaultStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FaultStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FaultStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FaultStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FaultStatus
    std::shared_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FaultStatus
    std::shared_ptr<deva_function_msgs::msg::FaultStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaultStatus_ & other) const
  {
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_status != other.error_status) {
      return false;
    }
    if (this->report_time != other.report_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaultStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaultStatus_

// alias to use template instance with default allocator
using FaultStatus =
  deva_function_msgs::msg::FaultStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_STATUS__STRUCT_HPP_
