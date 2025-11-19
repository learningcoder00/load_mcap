// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ChannelLaneInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lanetype_vec'
#include "deva_map_msgs/msg/detail/channel_lane_type__struct.hpp"
// Member 'turntype_vec'
#include "deva_map_msgs/msg/detail/channel_turn_type__struct.hpp"
// Member 'lanespeedlimitation_vec'
#include "deva_map_msgs/msg/detail/channel_lane_speed_limitation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ChannelLaneInfo __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChannelLaneInfo_
{
  using Type = ChannelLaneInfo_<ContainerAllocator>;

  explicit ChannelLaneInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ChannelLaneInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _lane_id_vec_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _lane_id_vec_type lane_id_vec;
  using _lanetype_vec_type =
    std::vector<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>>>;
  _lanetype_vec_type lanetype_vec;
  using _turntype_vec_type =
    std::vector<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>>>;
  _turntype_vec_type turntype_vec;
  using _lanespeedlimitation_vec_type =
    std::vector<deva_map_msgs::msg::ChannelLaneSpeedLimitation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelLaneSpeedLimitation_<ContainerAllocator>>>;
  _lanespeedlimitation_vec_type lanespeedlimitation_vec;

  // setters for named parameter idiom
  Type & set__lane_id_vec(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->lane_id_vec = _arg;
    return *this;
  }
  Type & set__lanetype_vec(
    const std::vector<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelLaneType_<ContainerAllocator>>> & _arg)
  {
    this->lanetype_vec = _arg;
    return *this;
  }
  Type & set__turntype_vec(
    const std::vector<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelTurnType_<ContainerAllocator>>> & _arg)
  {
    this->turntype_vec = _arg;
    return *this;
  }
  Type & set__lanespeedlimitation_vec(
    const std::vector<deva_map_msgs::msg::ChannelLaneSpeedLimitation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelLaneSpeedLimitation_<ContainerAllocator>>> & _arg)
  {
    this->lanespeedlimitation_vec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneInfo
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ChannelLaneInfo
    std::shared_ptr<deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChannelLaneInfo_ & other) const
  {
    if (this->lane_id_vec != other.lane_id_vec) {
      return false;
    }
    if (this->lanetype_vec != other.lanetype_vec) {
      return false;
    }
    if (this->turntype_vec != other.turntype_vec) {
      return false;
    }
    if (this->lanespeedlimitation_vec != other.lanespeedlimitation_vec) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChannelLaneInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChannelLaneInfo_

// alias to use template instance with default allocator
using ChannelLaneInfo =
  deva_map_msgs::msg::ChannelLaneInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL_LANE_INFO__STRUCT_HPP_
