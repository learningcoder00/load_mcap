// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneType __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneType __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChannelLaneType_
{
  using Type = ChannelLaneType_<ContainerAllocator>;

  explicit ChannelLaneType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s_start = 0.0;
      this->s_end = 0.0;
      this->lanetype = 0;
    }
  }

  explicit ChannelLaneType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s_start = 0.0;
      this->s_end = 0.0;
      this->lanetype = 0;
    }
  }

  // field types and members
  using _s_start_type =
    double;
  _s_start_type s_start;
  using _s_end_type =
    double;
  _s_end_type s_end;
  using _lanetype_type =
    uint8_t;
  _lanetype_type lanetype;

  // setters for named parameter idiom
  Type & set__s_start(
    const double & _arg)
  {
    this->s_start = _arg;
    return *this;
  }
  Type & set__s_end(
    const double & _arg)
  {
    this->s_end = _arg;
    return *this;
  }
  Type & set__lanetype(
    const uint8_t & _arg)
  {
    this->lanetype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneType
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneType
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChannelLaneType_ & other) const
  {
    if (this->s_start != other.s_start) {
      return false;
    }
    if (this->s_end != other.s_end) {
      return false;
    }
    if (this->lanetype != other.lanetype) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChannelLaneType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChannelLaneType_

// alias to use template instance with default allocator
using ChannelLaneType =
  deva_map_msgs::msg::ChannelLaneType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_TYPE__STRUCT_HPP_
