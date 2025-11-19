// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ChannelTurnType.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ChannelTurnType __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ChannelTurnType __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChannelTurnType_
{
  using Type = ChannelTurnType_<ContainerAllocator>;

  explicit ChannelTurnType_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s_start = 0.0;
      this->s_end = 0.0;
      this->laneturntype = 0;
    }
  }

  explicit ChannelTurnType_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s_start = 0.0;
      this->s_end = 0.0;
      this->laneturntype = 0;
    }
  }

  // field types and members
  using _s_start_type =
    double;
  _s_start_type s_start;
  using _s_end_type =
    double;
  _s_end_type s_end;
  using _laneturntype_type =
    uint8_t;
  _laneturntype_type laneturntype;

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
  Type & set__laneturntype(
    const uint8_t & _arg)
  {
    this->laneturntype = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ChannelTurnType
    std::shared_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ChannelTurnType
    std::shared_ptr<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChannelTurnType_ & other) const
  {
    if (this->s_start != other.s_start) {
      return false;
    }
    if (this->s_end != other.s_end) {
      return false;
    }
    if (this->laneturntype != other.laneturntype) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChannelTurnType_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChannelTurnType_

// alias to use template instance with default allocator
using ChannelTurnType =
  deva_map_msgs::msg::ChannelTurnType_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_TURN_TYPE__STRUCT_HPP_
