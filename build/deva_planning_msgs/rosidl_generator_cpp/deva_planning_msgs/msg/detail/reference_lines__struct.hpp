// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/ReferenceLines.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINES__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'reference_lines'
#include "deva_planning_msgs/msg/detail/reference_line__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__ReferenceLines __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__ReferenceLines __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReferenceLines_
{
  using Type = ReferenceLines_<ContainerAllocator>;

  explicit ReferenceLines_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_id = 0l;
      this->tar_id = 0l;
      this->curr_line_virtual = false;
      this->curr_left_nums = 0l;
      this->curr_right_nums = 0l;
    }
  }

  explicit ReferenceLines_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->curr_id = 0l;
      this->tar_id = 0l;
      this->curr_line_virtual = false;
      this->curr_left_nums = 0l;
      this->curr_right_nums = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _reference_lines_type =
    std::vector<deva_planning_msgs::msg::ReferenceLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::ReferenceLine_<ContainerAllocator>>>;
  _reference_lines_type reference_lines;
  using _curr_id_type =
    int32_t;
  _curr_id_type curr_id;
  using _tar_id_type =
    int32_t;
  _tar_id_type tar_id;
  using _curr_line_virtual_type =
    bool;
  _curr_line_virtual_type curr_line_virtual;
  using _curr_left_nums_type =
    int32_t;
  _curr_left_nums_type curr_left_nums;
  using _curr_right_nums_type =
    int32_t;
  _curr_right_nums_type curr_right_nums;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__reference_lines(
    const std::vector<deva_planning_msgs::msg::ReferenceLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_planning_msgs::msg::ReferenceLine_<ContainerAllocator>>> & _arg)
  {
    this->reference_lines = _arg;
    return *this;
  }
  Type & set__curr_id(
    const int32_t & _arg)
  {
    this->curr_id = _arg;
    return *this;
  }
  Type & set__tar_id(
    const int32_t & _arg)
  {
    this->tar_id = _arg;
    return *this;
  }
  Type & set__curr_line_virtual(
    const bool & _arg)
  {
    this->curr_line_virtual = _arg;
    return *this;
  }
  Type & set__curr_left_nums(
    const int32_t & _arg)
  {
    this->curr_left_nums = _arg;
    return *this;
  }
  Type & set__curr_right_nums(
    const int32_t & _arg)
  {
    this->curr_right_nums = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__ReferenceLines
    std::shared_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__ReferenceLines
    std::shared_ptr<deva_planning_msgs::msg::ReferenceLines_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReferenceLines_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->reference_lines != other.reference_lines) {
      return false;
    }
    if (this->curr_id != other.curr_id) {
      return false;
    }
    if (this->tar_id != other.tar_id) {
      return false;
    }
    if (this->curr_line_virtual != other.curr_line_virtual) {
      return false;
    }
    if (this->curr_left_nums != other.curr_left_nums) {
      return false;
    }
    if (this->curr_right_nums != other.curr_right_nums) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReferenceLines_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReferenceLines_

// alias to use template instance with default allocator
using ReferenceLines =
  deva_planning_msgs::msg::ReferenceLines_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__REFERENCE_LINES__STRUCT_HPP_
