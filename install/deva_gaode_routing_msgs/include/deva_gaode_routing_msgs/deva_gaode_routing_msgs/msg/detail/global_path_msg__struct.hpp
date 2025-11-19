// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/GlobalPathMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'global_coords'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"
// Member 'global_steps'
#include "deva_gaode_routing_msgs/msg/detail/web_step__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__GlobalPathMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__GlobalPathMsg __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalPathMsg_
{
  using Type = GlobalPathMsg_<ContainerAllocator>;

  explicit GlobalPathMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GlobalPathMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _global_coords_type =
    std::vector<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>>>;
  _global_coords_type global_coords;
  using _global_steps_type =
    std::vector<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>>>;
  _global_steps_type global_steps;

  // setters for named parameter idiom
  Type & set__global_coords(
    const std::vector<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>>> & _arg)
  {
    this->global_coords = _arg;
    return *this;
  }
  Type & set__global_steps(
    const std::vector<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>>> & _arg)
  {
    this->global_steps = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__GlobalPathMsg
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__GlobalPathMsg
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalPathMsg_ & other) const
  {
    if (this->global_coords != other.global_coords) {
      return false;
    }
    if (this->global_steps != other.global_steps) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalPathMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalPathMsg_

// alias to use template instance with default allocator
using GlobalPathMsg =
  deva_gaode_routing_msgs::msg::GlobalPathMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_PATH_MSG__STRUCT_HPP_
