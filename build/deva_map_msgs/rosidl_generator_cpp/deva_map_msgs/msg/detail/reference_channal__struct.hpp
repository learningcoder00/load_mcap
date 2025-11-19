// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/ReferenceChannal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'middle_line'
#include "deva_map_msgs/msg/detail/channel_lane_line__struct.hpp"
// Member 'left_marking'
// Member 'right_marking'
#include "deva_map_msgs/msg/detail/channel_lane_marking__struct.hpp"
// Member 'object_infos'
#include "deva_map_msgs/msg/detail/channel_object_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__ReferenceChannal __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__ReferenceChannal __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReferenceChannal_
{
  using Type = ReferenceChannal_<ContainerAllocator>;

  explicit ReferenceChannal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : middle_line(_init),
    left_marking(_init),
    right_marking(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->confidence_coefficient = 0.0;
      this->channel_idx = 0;
    }
  }

  explicit ReferenceChannal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : middle_line(_alloc, _init),
    left_marking(_alloc, _init),
    right_marking(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->available = false;
      this->confidence_coefficient = 0.0;
      this->channel_idx = 0;
    }
  }

  // field types and members
  using _available_type =
    bool;
  _available_type available;
  using _confidence_coefficient_type =
    double;
  _confidence_coefficient_type confidence_coefficient;
  using _channel_idx_type =
    int16_t;
  _channel_idx_type channel_idx;
  using _middle_line_type =
    deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator>;
  _middle_line_type middle_line;
  using _left_marking_type =
    deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>;
  _left_marking_type left_marking;
  using _right_marking_type =
    deva_map_msgs::msg::ChannelLaneMarking_<ContainerAllocator>;
  _right_marking_type right_marking;
  using _object_infos_type =
    std::vector<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>>>;
  _object_infos_type object_infos;

  // setters for named parameter idiom
  Type & set__available(
    const bool & _arg)
  {
    this->available = _arg;
    return *this;
  }
  Type & set__confidence_coefficient(
    const double & _arg)
  {
    this->confidence_coefficient = _arg;
    return *this;
  }
  Type & set__channel_idx(
    const int16_t & _arg)
  {
    this->channel_idx = _arg;
    return *this;
  }
  Type & set__middle_line(
    const deva_map_msgs::msg::ChannelLaneLine_<ContainerAllocator> & _arg)
  {
    this->middle_line = _arg;
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
  Type & set__object_infos(
    const std::vector<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ChannelObjectInfo_<ContainerAllocator>>> & _arg)
  {
    this->object_infos = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__ReferenceChannal
    std::shared_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__ReferenceChannal
    std::shared_ptr<deva_map_msgs::msg::ReferenceChannal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReferenceChannal_ & other) const
  {
    if (this->available != other.available) {
      return false;
    }
    if (this->confidence_coefficient != other.confidence_coefficient) {
      return false;
    }
    if (this->channel_idx != other.channel_idx) {
      return false;
    }
    if (this->middle_line != other.middle_line) {
      return false;
    }
    if (this->left_marking != other.left_marking) {
      return false;
    }
    if (this->right_marking != other.right_marking) {
      return false;
    }
    if (this->object_infos != other.object_infos) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReferenceChannal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReferenceChannal_

// alias to use template instance with default allocator
using ReferenceChannal =
  deva_map_msgs::msg::ReferenceChannal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__REFERENCE_CHANNAL__STRUCT_HPP_
