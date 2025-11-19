// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/AvpLocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'ref_line'
// Member 'expand_lane_center_border'
#include "deva_map_msgs/msg/detail/path_point__struct.hpp"
// Member 'drivable_boundary'
#include "deva_map_msgs/msg/detail/avp_boundary__struct.hpp"
// Member 'avp_sub_map'
#include "deva_map_msgs/msg/detail/avp_sub_map__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__AvpLocalMap __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__AvpLocalMap __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpLocalMap_
{
  using Type = AvpLocalMap_<ContainerAllocator>;

  explicit AvpLocalMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    avp_sub_map(_init)
  {
    (void)_init;
  }

  explicit AvpLocalMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    avp_sub_map(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ref_line_type =
    std::vector<deva_map_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::PathPoint_<ContainerAllocator>>>;
  _ref_line_type ref_line;
  using _drivable_boundary_type =
    std::vector<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>>;
  _drivable_boundary_type drivable_boundary;
  using _expand_lane_center_border_type =
    std::vector<deva_map_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::PathPoint_<ContainerAllocator>>>;
  _expand_lane_center_border_type expand_lane_center_border;
  using _avp_sub_map_type =
    deva_map_msgs::msg::AvpSubMap_<ContainerAllocator>;
  _avp_sub_map_type avp_sub_map;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ref_line(
    const std::vector<deva_map_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->ref_line = _arg;
    return *this;
  }
  Type & set__drivable_boundary(
    const std::vector<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>> & _arg)
  {
    this->drivable_boundary = _arg;
    return *this;
  }
  Type & set__expand_lane_center_border(
    const std::vector<deva_map_msgs::msg::PathPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::PathPoint_<ContainerAllocator>>> & _arg)
  {
    this->expand_lane_center_border = _arg;
    return *this;
  }
  Type & set__avp_sub_map(
    const deva_map_msgs::msg::AvpSubMap_<ContainerAllocator> & _arg)
  {
    this->avp_sub_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__AvpLocalMap
    std::shared_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__AvpLocalMap
    std::shared_ptr<deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpLocalMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ref_line != other.ref_line) {
      return false;
    }
    if (this->drivable_boundary != other.drivable_boundary) {
      return false;
    }
    if (this->expand_lane_center_border != other.expand_lane_center_border) {
      return false;
    }
    if (this->avp_sub_map != other.avp_sub_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpLocalMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpLocalMap_

// alias to use template instance with default allocator
using AvpLocalMap =
  deva_map_msgs::msg::AvpLocalMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_LOCAL_MAP__STRUCT_HPP_
