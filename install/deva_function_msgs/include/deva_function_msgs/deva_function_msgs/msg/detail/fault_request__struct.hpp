// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FaultRequest.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__STRUCT_HPP_

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
// Member 'report_fault_status'
#include "deva_function_msgs/msg/detail/fault_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__FaultRequest __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FaultRequest __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FaultRequest_
{
  using Type = FaultRequest_<ContainerAllocator>;

  explicit FaultRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    report_fault_status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_type = 0;
      this->response_status = 0;
    }
  }

  explicit FaultRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    report_fault_status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_type = 0;
      this->response_status = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _request_type_type =
    uint8_t;
  _request_type_type request_type;
  using _report_fault_status_type =
    deva_function_msgs::msg::FaultStatus_<ContainerAllocator>;
  _report_fault_status_type report_fault_status;
  using _response_status_type =
    uint8_t;
  _response_status_type response_status;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__request_type(
    const uint8_t & _arg)
  {
    this->request_type = _arg;
    return *this;
  }
  Type & set__report_fault_status(
    const deva_function_msgs::msg::FaultStatus_<ContainerAllocator> & _arg)
  {
    this->report_fault_status = _arg;
    return *this;
  }
  Type & set__response_status(
    const uint8_t & _arg)
  {
    this->response_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FaultRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FaultRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FaultRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FaultRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FaultRequest
    std::shared_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FaultRequest
    std::shared_ptr<deva_function_msgs::msg::FaultRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FaultRequest_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->request_type != other.request_type) {
      return false;
    }
    if (this->report_fault_status != other.report_fault_status) {
      return false;
    }
    if (this->response_status != other.response_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const FaultRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FaultRequest_

// alias to use template instance with default allocator
using FaultRequest =
  deva_function_msgs::msg::FaultRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FAULT_REQUEST__STRUCT_HPP_
