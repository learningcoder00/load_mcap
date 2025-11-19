// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/GroupSegmentProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__GroupSegmentProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__GroupSegmentProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GroupSegmentProto_
{
  using Type = GroupSegmentProto_<ContainerAllocator>;

  explicit GroupSegmentProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0ll;
      this->toll_cost = 0ll;
      this->road_name = "";
      this->start_segment_index = 0l;
      this->segment_count = 0l;
      this->status = 0l;
      this->speed = 0l;
      this->is_via_point = false;
      this->is_crucial = false;
    }
  }

  explicit GroupSegmentProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : road_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0ll;
      this->toll_cost = 0ll;
      this->road_name = "";
      this->start_segment_index = 0l;
      this->segment_count = 0l;
      this->status = 0l;
      this->speed = 0l;
      this->is_via_point = false;
      this->is_crucial = false;
    }
  }

  // field types and members
  using _length_type =
    int64_t;
  _length_type length;
  using _toll_cost_type =
    int64_t;
  _toll_cost_type toll_cost;
  using _road_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _road_name_type road_name;
  using _start_segment_index_type =
    int32_t;
  _start_segment_index_type start_segment_index;
  using _segment_count_type =
    int32_t;
  _segment_count_type segment_count;
  using _status_type =
    int32_t;
  _status_type status;
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _is_via_point_type =
    bool;
  _is_via_point_type is_via_point;
  using _is_crucial_type =
    bool;
  _is_crucial_type is_crucial;

  // setters for named parameter idiom
  Type & set__length(
    const int64_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__toll_cost(
    const int64_t & _arg)
  {
    this->toll_cost = _arg;
    return *this;
  }
  Type & set__road_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->road_name = _arg;
    return *this;
  }
  Type & set__start_segment_index(
    const int32_t & _arg)
  {
    this->start_segment_index = _arg;
    return *this;
  }
  Type & set__segment_count(
    const int32_t & _arg)
  {
    this->segment_count = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__is_via_point(
    const bool & _arg)
  {
    this->is_via_point = _arg;
    return *this;
  }
  Type & set__is_crucial(
    const bool & _arg)
  {
    this->is_crucial = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__GroupSegmentProto
    std::shared_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__GroupSegmentProto
    std::shared_ptr<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GroupSegmentProto_ & other) const
  {
    if (this->length != other.length) {
      return false;
    }
    if (this->toll_cost != other.toll_cost) {
      return false;
    }
    if (this->road_name != other.road_name) {
      return false;
    }
    if (this->start_segment_index != other.start_segment_index) {
      return false;
    }
    if (this->segment_count != other.segment_count) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->is_via_point != other.is_via_point) {
      return false;
    }
    if (this->is_crucial != other.is_crucial) {
      return false;
    }
    return true;
  }
  bool operator!=(const GroupSegmentProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GroupSegmentProto_

// alias to use template instance with default allocator
using GroupSegmentProto =
  deva_navi_msgs::msg::GroupSegmentProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__GROUP_SEGMENT_PROTO__STRUCT_HPP_
