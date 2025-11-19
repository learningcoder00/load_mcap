// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/ParkableID.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__PARKABLE_ID__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__PARKABLE_ID__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__ParkableID __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__ParkableID __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ParkableID_
{
  using Type = ParkableID_<ContainerAllocator>;

  explicit ParkableID_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ParkableID_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _parkable_ids_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _parkable_ids_type parkable_ids;

  // setters for named parameter idiom
  Type & set__parkable_ids(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->parkable_ids = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::ParkableID_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::ParkableID_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::ParkableID_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::ParkableID_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__ParkableID
    std::shared_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__ParkableID
    std::shared_ptr<deva_planning_msgs::msg::ParkableID_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ParkableID_ & other) const
  {
    if (this->parkable_ids != other.parkable_ids) {
      return false;
    }
    return true;
  }
  bool operator!=(const ParkableID_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ParkableID_

// alias to use template instance with default allocator
using ParkableID =
  deva_planning_msgs::msg::ParkableID_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__PARKABLE_ID__STRUCT_HPP_
