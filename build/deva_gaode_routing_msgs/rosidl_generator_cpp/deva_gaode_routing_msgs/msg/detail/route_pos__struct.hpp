// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/RoutePos.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pos'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__RoutePos __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__RoutePos __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoutePos_
{
  using Type = RoutePos_<ContainerAllocator>;

  explicit RoutePos_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coor_start = 0ul;
      this->offset_length = 0ul;
      this->link_offset = 0ul;
    }
  }

  explicit RoutePos_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pos(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coor_start = 0ul;
      this->offset_length = 0ul;
      this->link_offset = 0ul;
    }
  }

  // field types and members
  using _pos_type =
    deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>;
  _pos_type pos;
  using _coor_start_type =
    uint32_t;
  _coor_start_type coor_start;
  using _offset_length_type =
    uint32_t;
  _offset_length_type offset_length;
  using _link_offset_type =
    uint32_t;
  _link_offset_type link_offset;

  // setters for named parameter idiom
  Type & set__pos(
    const deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator> & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__coor_start(
    const uint32_t & _arg)
  {
    this->coor_start = _arg;
    return *this;
  }
  Type & set__offset_length(
    const uint32_t & _arg)
  {
    this->offset_length = _arg;
    return *this;
  }
  Type & set__link_offset(
    const uint32_t & _arg)
  {
    this->link_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RoutePos
    std::shared_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__RoutePos
    std::shared_ptr<deva_gaode_routing_msgs::msg::RoutePos_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoutePos_ & other) const
  {
    if (this->pos != other.pos) {
      return false;
    }
    if (this->coor_start != other.coor_start) {
      return false;
    }
    if (this->offset_length != other.offset_length) {
      return false;
    }
    if (this->link_offset != other.link_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoutePos_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoutePos_

// alias to use template instance with default allocator
using RoutePos =
  deva_gaode_routing_msgs::msg::RoutePos_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__ROUTE_POS__STRUCT_HPP_
