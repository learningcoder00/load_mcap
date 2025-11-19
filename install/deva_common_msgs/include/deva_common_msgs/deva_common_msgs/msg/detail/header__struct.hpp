// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_common_msgs:msg/Header.idl
// generated code does not contain a copyright notice

#ifndef DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__STRUCT_HPP_
#define DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
// Member 'pub_stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'frame_id'
#include "deva_common_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_common_msgs__msg__Header __attribute__((deprecated))
#else
# define DEPRECATED__deva_common_msgs__msg__Header __declspec(deprecated)
#endif

namespace deva_common_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Header_
{
  using Type = Header_<ContainerAllocator>;

  explicit Header_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    pub_stamp(_init),
    frame_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
    }
  }

  explicit Header_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    pub_stamp(_alloc, _init),
    frame_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0ul;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _pub_stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _pub_stamp_type pub_stamp;
  using _index_type =
    uint32_t;
  _index_type index;
  using _frame_id_type =
    deva_common_msgs::msg::String_<ContainerAllocator>;
  _frame_id_type frame_id;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__pub_stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->pub_stamp = _arg;
    return *this;
  }
  Type & set__index(
    const uint32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__frame_id(
    const deva_common_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_common_msgs::msg::Header_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_common_msgs::msg::Header_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_common_msgs::msg::Header_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_common_msgs::msg::Header_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::Header_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::Header_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_common_msgs::msg::Header_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_common_msgs::msg::Header_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_common_msgs::msg::Header_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_common_msgs::msg::Header_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_common_msgs__msg__Header
    std::shared_ptr<deva_common_msgs::msg::Header_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_common_msgs__msg__Header
    std::shared_ptr<deva_common_msgs::msg::Header_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Header_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->pub_stamp != other.pub_stamp) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Header_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Header_

// alias to use template instance with default allocator
using Header =
  deva_common_msgs::msg::Header_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_common_msgs

#endif  // DEVA_COMMON_MSGS__MSG__DETAIL__HEADER__STRUCT_HPP_
