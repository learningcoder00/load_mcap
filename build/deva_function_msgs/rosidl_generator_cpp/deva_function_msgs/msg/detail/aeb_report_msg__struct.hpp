// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/AebReportMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__AebReportMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__AebReportMsg __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AebReportMsg_
{
  using Type = AebReportMsg_<ContainerAllocator>;

  explicit AebReportMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->aeb_state = "";
    }
  }

  explicit AebReportMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : aeb_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->publish_timestamp = 0.0;
      this->aeb_state = "";
    }
  }

  // field types and members
  using _publish_timestamp_type =
    double;
  _publish_timestamp_type publish_timestamp;
  using _aeb_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _aeb_state_type aeb_state;

  // setters for named parameter idiom
  Type & set__publish_timestamp(
    const double & _arg)
  {
    this->publish_timestamp = _arg;
    return *this;
  }
  Type & set__aeb_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->aeb_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::AebReportMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::AebReportMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::AebReportMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::AebReportMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__AebReportMsg
    std::shared_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__AebReportMsg
    std::shared_ptr<deva_function_msgs::msg::AebReportMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AebReportMsg_ & other) const
  {
    if (this->publish_timestamp != other.publish_timestamp) {
      return false;
    }
    if (this->aeb_state != other.aeb_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const AebReportMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AebReportMsg_

// alias to use template instance with default allocator
using AebReportMsg =
  deva_function_msgs::msg::AebReportMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__AEB_REPORT_MSG__STRUCT_HPP_
