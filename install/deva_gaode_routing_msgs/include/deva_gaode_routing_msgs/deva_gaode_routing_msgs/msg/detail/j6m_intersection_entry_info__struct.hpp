// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mIntersectionEntryInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'crowd_sourcing_link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J6mIntersectionEntryInfo_
{
  using Type = J6mIntersectionEntryInfo_<ContainerAllocator>;

  explicit J6mIntersectionEntryInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : crowd_sourcing_link_id(_init),
    position(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0ul;
    }
  }

  explicit J6mIntersectionEntryInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : crowd_sourcing_link_id(_alloc, _init),
    position(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->offset = 0ul;
    }
  }

  // field types and members
  using _crowd_sourcing_link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _crowd_sourcing_link_id_type crowd_sourcing_link_id;
  using _offset_type =
    uint32_t;
  _offset_type offset;
  using _position_type =
    deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__crowd_sourcing_link_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->crowd_sourcing_link_id = _arg;
    return *this;
  }
  Type & set__offset(
    const uint32_t & _arg)
  {
    this->offset = _arg;
    return *this;
  }
  Type & set__position(
    const deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mIntersectionEntryInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J6mIntersectionEntryInfo_ & other) const
  {
    if (this->crowd_sourcing_link_id != other.crowd_sourcing_link_id) {
      return false;
    }
    if (this->offset != other.offset) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const J6mIntersectionEntryInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J6mIntersectionEntryInfo_

// alias to use template instance with default allocator
using J6mIntersectionEntryInfo =
  deva_gaode_routing_msgs::msg::J6mIntersectionEntryInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_INTERSECTION_ENTRY_INFO__STRUCT_HPP_
