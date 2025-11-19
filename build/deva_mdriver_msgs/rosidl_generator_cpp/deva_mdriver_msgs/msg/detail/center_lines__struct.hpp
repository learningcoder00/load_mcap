// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/CenterLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__STRUCT_HPP_

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
// Member 'center_lines'
#include "deva_mdriver_msgs/msg/detail/center_line__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__CenterLines __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__CenterLines __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CenterLines_
{
  using Type = CenterLines_<ContainerAllocator>;

  explicit CenterLines_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit CenterLines_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _center_lines_type =
    std::vector<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>>>;
  _center_lines_type center_lines;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__center_lines(
    const std::vector<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::CenterLine_<ContainerAllocator>>> & _arg)
  {
    this->center_lines = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__CenterLines
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__CenterLines
    std::shared_ptr<deva_mdriver_msgs::msg::CenterLines_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CenterLines_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->center_lines != other.center_lines) {
      return false;
    }
    return true;
  }
  bool operator!=(const CenterLines_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CenterLines_

// alias to use template instance with default allocator
using CenterLines =
  deva_mdriver_msgs::msg::CenterLines_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__CENTER_LINES__STRUCT_HPP_
