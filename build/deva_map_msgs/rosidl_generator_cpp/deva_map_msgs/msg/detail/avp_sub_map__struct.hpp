// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/AvpSubMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'avp_sub_lanes'
#include "deva_map_msgs/msg/detail/avp_sub_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__AvpSubMap __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__AvpSubMap __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpSubMap_
{
  using Type = AvpSubMap_<ContainerAllocator>;

  explicit AvpSubMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AvpSubMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _avp_sub_lanes_type =
    std::vector<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>>>;
  _avp_sub_lanes_type avp_sub_lanes;

  // setters for named parameter idiom
  Type & set__avp_sub_lanes(
    const std::vector<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::AvpSubLane_<ContainerAllocator>>> & _arg)
  {
    this->avp_sub_lanes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::AvpSubMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::AvpSubMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpSubMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpSubMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__AvpSubMap
    std::shared_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__AvpSubMap
    std::shared_ptr<deva_map_msgs::msg::AvpSubMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpSubMap_ & other) const
  {
    if (this->avp_sub_lanes != other.avp_sub_lanes) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpSubMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpSubMap_

// alias to use template instance with default allocator
using AvpSubMap =
  deva_map_msgs::msg::AvpSubMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_SUB_MAP__STRUCT_HPP_
