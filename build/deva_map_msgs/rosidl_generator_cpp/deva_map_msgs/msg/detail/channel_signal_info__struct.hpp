// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ChannelSignalInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ChannelSignalInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ChannelSignalInfo __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChannelSignalInfo_
{
  using Type = ChannelSignalInfo_<ContainerAllocator>;

  explicit ChannelSignalInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->lane_id = "";
      this->offset = 0.0;
    }
  }

  explicit ChannelSignalInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    lane_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->lane_id = "";
      this->offset = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lane_id_type lane_id;
  using _offset_type =
    double;
  _offset_type offset;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lane_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__offset(
    const double & _arg)
  {
    this->offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ChannelSignalInfo
    std::shared_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ChannelSignalInfo
    std::shared_ptr<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChannelSignalInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChannelSignalInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChannelSignalInfo_

// alias to use template instance with default allocator
using ChannelSignalInfo =
  deva_map_msgs::msg::ChannelSignalInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_SIGNAL_INFO__STRUCT_HPP_
