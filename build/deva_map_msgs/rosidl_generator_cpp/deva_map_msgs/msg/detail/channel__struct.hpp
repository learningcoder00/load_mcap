// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/Channel.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'laneinfo'
#include "deva_map_msgs/msg/detail/channel_lane_info__struct.hpp"
// Member 'middle_line'
// Member 'reference_line_vec'
#include "deva_map_msgs/msg/detail/channel_lane_line__struct.hpp"
// Member 'left_marking'
// Member 'right_marking'
#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.hpp"
// Member 'object_info'
#include "deva_map_msgs/msg/detail/channel_object_info__struct.hpp"
// Member 'signal_info'
#include "deva_map_msgs/msg/detail/channel_signal_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__Channel __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__Channel __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Channel_
{
  using Type = Channel_<ContainerAllocator>;

  explicit Channel_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : laneinfo(_init),
    middle_line(_init),
    left_marking(_init),
    right_marking(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->is_on_route = false;
      this->errcode = 0;
      this->current_lane_id = "";
      this->channel_idx = 0;
      this->lane_offset = 0.0;
      this->left_channel_idx = 0;
      this->right_channel_idx = 0;
    }
  }

  explicit Channel_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : current_lane_id(_alloc),
    laneinfo(_alloc, _init),
    middle_line(_alloc, _init),
    left_marking(_alloc, _init),
    right_marking(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->is_on_route = false;
      this->errcode = 0;
      this->current_lane_id = "";
      this->channel_idx = 0;
      this->lane_offset = 0.0;
      this->left_channel_idx = 0;
      this->right_channel_idx = 0;
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;
  using _is_on_route_type =
    bool;
  _is_on_route_type is_on_route;
  using _errcode_type =
    uint8_t;
  _errcode_type errcode;
  using _current_lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_lane_id_type current_lane_id;
  using _channel_idx_type =
    int16_t;
  _channel_idx_type channel_idx;
  using _lane_offset_type =
    double;
  _lane_offset_type lane_offset;
  using _laneinfo_type =
    deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator>;
  _laneinfo_type laneinfo;
  using _middle_line_type =
    deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>;
  _middle_line_type middle_line;
  using _reference_line_vec_type =
    std::vector<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>>>;
  _reference_line_vec_type reference_line_vec;
  using _left_marking_type =
    deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>;
  _left_marking_type left_marking;
  using _right_marking_type =
    deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>;
  _right_marking_type right_marking;
  using _left_channel_idx_type =
    int16_t;
  _left_channel_idx_type left_channel_idx;
  using _right_channel_idx_type =
    int16_t;
  _right_channel_idx_type right_channel_idx;
  using _object_info_type =
    std::vector<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>>>;
  _object_info_type object_info;
  using _signal_info_type =
    std::vector<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>>>;
  _signal_info_type signal_info;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__is_on_route(
    const bool & _arg)
  {
    this->is_on_route = _arg;
    return *this;
  }
  Type & set__errcode(
    const uint8_t & _arg)
  {
    this->errcode = _arg;
    return *this;
  }
  Type & set__current_lane_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_lane_id = _arg;
    return *this;
  }
  Type & set__channel_idx(
    const int16_t & _arg)
  {
    this->channel_idx = _arg;
    return *this;
  }
  Type & set__lane_offset(
    const double & _arg)
  {
    this->lane_offset = _arg;
    return *this;
  }
  Type & set__laneinfo(
    const deva_map_msgs::msg::ChannelLaneInfo_<ContainerAllocator> & _arg)
  {
    this->laneinfo = _arg;
    return *this;
  }
  Type & set__middle_line(
    const deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> & _arg)
  {
    this->middle_line = _arg;
    return *this;
  }
  Type & set__reference_line_vec(
    const std::vector<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>>> & _arg)
  {
    this->reference_line_vec = _arg;
    return *this;
  }
  Type & set__left_marking(
    const deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> & _arg)
  {
    this->left_marking = _arg;
    return *this;
  }
  Type & set__right_marking(
    const deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator> & _arg)
  {
    this->right_marking = _arg;
    return *this;
  }
  Type & set__left_channel_idx(
    const int16_t & _arg)
  {
    this->left_channel_idx = _arg;
    return *this;
  }
  Type & set__right_channel_idx(
    const int16_t & _arg)
  {
    this->right_channel_idx = _arg;
    return *this;
  }
  Type & set__object_info(
    const std::vector<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>>> & _arg)
  {
    this->object_info = _arg;
    return *this;
  }
  Type & set__signal_info(
    const std::vector<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelSignalInfo_<ContainerAllocator>>> & _arg)
  {
    this->signal_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::Channel_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::Channel_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::Channel_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::Channel_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__Channel
    std::shared_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__Channel
    std::shared_ptr<deva_map_msgs::msg::Channel_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Channel_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    if (this->is_on_route != other.is_on_route) {
      return false;
    }
    if (this->errcode != other.errcode) {
      return false;
    }
    if (this->current_lane_id != other.current_lane_id) {
      return false;
    }
    if (this->channel_idx != other.channel_idx) {
      return false;
    }
    if (this->lane_offset != other.lane_offset) {
      return false;
    }
    if (this->laneinfo != other.laneinfo) {
      return false;
    }
    if (this->middle_line != other.middle_line) {
      return false;
    }
    if (this->reference_line_vec != other.reference_line_vec) {
      return false;
    }
    if (this->left_marking != other.left_marking) {
      return false;
    }
    if (this->right_marking != other.right_marking) {
      return false;
    }
    if (this->left_channel_idx != other.left_channel_idx) {
      return false;
    }
    if (this->right_channel_idx != other.right_channel_idx) {
      return false;
    }
    if (this->object_info != other.object_info) {
      return false;
    }
    if (this->signal_info != other.signal_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const Channel_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Channel_

// alias to use template instance with default allocator
using Channel =
  deva_map_msgs::msg::Channel_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__CHANNEL__STRUCT_HPP_
