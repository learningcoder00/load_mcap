// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/Topology.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'next_id_s'
// Member 'previous_id_s'
// Member 'next_within_intersection'
// Member 'previous_within_intersection'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__Topology __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__Topology __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Topology_
{
  using Type = Topology_<ContainerAllocator>;

  explicit Topology_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Topology_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _next_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _next_id_s_type next_id_s;
  using _previous_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _previous_id_s_type previous_id_s;
  using _next_within_intersection_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _next_within_intersection_type next_within_intersection;
  using _previous_within_intersection_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _previous_within_intersection_type previous_within_intersection;

  // setters for named parameter idiom
  Type & set__next_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->next_id_s = _arg;
    return *this;
  }
  Type & set__previous_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->previous_id_s = _arg;
    return *this;
  }
  Type & set__next_within_intersection(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->next_within_intersection = _arg;
    return *this;
  }
  Type & set__previous_within_intersection(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->previous_within_intersection = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Topology
    std::shared_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__Topology
    std::shared_ptr<deva_gaode_routing_msgs::msg::Topology_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Topology_ & other) const
  {
    if (this->next_id_s != other.next_id_s) {
      return false;
    }
    if (this->previous_id_s != other.previous_id_s) {
      return false;
    }
    if (this->next_within_intersection != other.next_within_intersection) {
      return false;
    }
    if (this->previous_within_intersection != other.previous_within_intersection) {
      return false;
    }
    return true;
  }
  bool operator!=(const Topology_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Topology_

// alias to use template instance with default allocator
using Topology =
  deva_gaode_routing_msgs::msg::Topology_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__TOPOLOGY__STRUCT_HPP_
