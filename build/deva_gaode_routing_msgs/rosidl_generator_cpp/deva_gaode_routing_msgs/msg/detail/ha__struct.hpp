// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/HA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'feature_point'
#include "deva_gaode_routing_msgs/msg/detail/feature_point__struct.hpp"
// Member 'lane'
#include "deva_gaode_routing_msgs/msg/detail/lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__HA __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__HA __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HA_
{
  using Type = HA_<ContainerAllocator>;

  explicit HA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feature_point(_init),
    lane(_init)
  {
    (void)_init;
  }

  explicit HA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : feature_point(_alloc, _init),
    lane(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _feature_point_type =
    deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator>;
  _feature_point_type feature_point;
  using _lane_type =
    deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>;
  _lane_type lane;

  // setters for named parameter idiom
  Type & set__feature_point(
    const deva_gaode_routing_msgs::msg::FeaturePoint_<ContainerAllocator> & _arg)
  {
    this->feature_point = _arg;
    return *this;
  }
  Type & set__lane(
    const deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator> & _arg)
  {
    this->lane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::HA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::HA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::HA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::HA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__HA
    std::shared_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__HA
    std::shared_ptr<deva_gaode_routing_msgs::msg::HA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HA_ & other) const
  {
    if (this->feature_point != other.feature_point) {
      return false;
    }
    if (this->lane != other.lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const HA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HA_

// alias to use template instance with default allocator
using HA =
  deva_gaode_routing_msgs::msg::HA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__HA__STRUCT_HPP_
