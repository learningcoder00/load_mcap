// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/ViaPointInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'show'
// Member 'projective'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__ViaPointInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__ViaPointInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ViaPointInfoProto_
{
  using Type = ViaPointInfoProto_<ContainerAllocator>;

  explicit ViaPointInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : show(_init),
    projective(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_idx = 0l;
      this->direction = 0l;
      this->poi_name = "";
    }
  }

  explicit ViaPointInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : show(_alloc, _init),
    projective(_alloc, _init),
    poi_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_idx = 0l;
      this->direction = 0l;
      this->poi_name = "";
    }
  }

  // field types and members
  using _segment_idx_type =
    int32_t;
  _segment_idx_type segment_idx;
  using _direction_type =
    int32_t;
  _direction_type direction;
  using _show_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _show_type show;
  using _projective_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _projective_type projective;
  using _poi_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _poi_name_type poi_name;

  // setters for named parameter idiom
  Type & set__segment_idx(
    const int32_t & _arg)
  {
    this->segment_idx = _arg;
    return *this;
  }
  Type & set__direction(
    const int32_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__show(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->show = _arg;
    return *this;
  }
  Type & set__projective(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->projective = _arg;
    return *this;
  }
  Type & set__poi_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->poi_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__ViaPointInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__ViaPointInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ViaPointInfoProto_ & other) const
  {
    if (this->segment_idx != other.segment_idx) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->show != other.show) {
      return false;
    }
    if (this->projective != other.projective) {
      return false;
    }
    if (this->poi_name != other.poi_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ViaPointInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ViaPointInfoProto_

// alias to use template instance with default allocator
using ViaPointInfoProto =
  deva_navi_msgs::msg::ViaPointInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__VIA_POINT_INFO_PROTO__STRUCT_HPP_
