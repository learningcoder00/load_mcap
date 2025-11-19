// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/MdriverRefLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINES__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINES__STRUCT_HPP_

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
// Member 'ref_lines'
#include "deva_mdriver_msgs/msg/detail/mdriver_ref_line__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLines __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLines __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MdriverRefLines_
{
  using Type = MdriverRefLines_<ContainerAllocator>;

  explicit MdriverRefLines_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit MdriverRefLines_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ref_lines_type =
    std::vector<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>>>;
  _ref_lines_type ref_lines;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ref_lines(
    const std::vector<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MdriverRefLine_<ContainerAllocator>>> & _arg)
  {
    this->ref_lines = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLines
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__MdriverRefLines
    std::shared_ptr<deva_mdriver_msgs::msg::MdriverRefLines_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MdriverRefLines_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ref_lines != other.ref_lines) {
      return false;
    }
    return true;
  }
  bool operator!=(const MdriverRefLines_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MdriverRefLines_

// alias to use template instance with default allocator
using MdriverRefLines =
  deva_mdriver_msgs::msg::MdriverRefLines_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__MDRIVER_REF_LINES__STRUCT_HPP_
