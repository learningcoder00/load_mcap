// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/ReroutingInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacle_edges'
#include "deva_map_msgs/msg/detail/obstacle_edge__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__ReroutingInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__ReroutingInfo __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ReroutingInfo_
{
  using Type = ReroutingInfo_<ContainerAllocator>;

  explicit ReroutingInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ReroutingInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _obstacle_edges_type =
    std::vector<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>>>;
  _obstacle_edges_type obstacle_edges;

  // setters for named parameter idiom
  Type & set__obstacle_edges(
    const std::vector<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_map_msgs::msg::ObstacleEdge_<ContainerAllocator>>> & _arg)
  {
    this->obstacle_edges = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__ReroutingInfo
    std::shared_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__ReroutingInfo
    std::shared_ptr<deva_planning_msgs2::msg::ReroutingInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReroutingInfo_ & other) const
  {
    if (this->obstacle_edges != other.obstacle_edges) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReroutingInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReroutingInfo_

// alias to use template instance with default allocator
using ReroutingInfo =
  deva_planning_msgs2::msg::ReroutingInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__REROUTING_INFO__STRUCT_HPP_
