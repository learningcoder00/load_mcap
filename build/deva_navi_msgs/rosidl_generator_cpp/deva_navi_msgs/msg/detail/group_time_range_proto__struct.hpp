// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/GroupTimeRangeProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__GroupTimeRangeProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__GroupTimeRangeProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroupTimeRangeProto_
{
  using Type = GroupTimeRangeProto_<ContainerAllocator>;

  explicit GroupTimeRangeProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = 0ll;
      this->end_time = 0ll;
    }
  }

  explicit GroupTimeRangeProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->start_time = 0ll;
      this->end_time = 0ll;
    }
  }

  // field types and members
  using _start_time_type =
    int64_t;
  _start_time_type start_time;
  using _end_time_type =
    int64_t;
  _end_time_type end_time;

  // setters for named parameter idiom
  Type & set__start_time(
    const int64_t & _arg)
  {
    this->start_time = _arg;
    return *this;
  }
  Type & set__end_time(
    const int64_t & _arg)
  {
    this->end_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__GroupTimeRangeProto
    std::shared_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__GroupTimeRangeProto
    std::shared_ptr<deva_navi_msgs::msg::GroupTimeRangeProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupTimeRangeProto_ & other) const
  {
    if (this->start_time != other.start_time) {
      return false;
    }
    if (this->end_time != other.end_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupTimeRangeProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupTimeRangeProto_

// alias to use template instance with default allocator
using GroupTimeRangeProto =
  deva_navi_msgs::msg::GroupTimeRangeProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_TIME_RANGE_PROTO__STRUCT_HPP_
