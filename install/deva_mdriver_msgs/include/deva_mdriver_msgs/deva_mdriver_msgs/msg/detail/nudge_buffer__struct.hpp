// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/NudgeBuffer.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'obstacle_nudge_buffer'
#include "deva_mdriver_msgs/msg/detail/obstacle_nudge_buffer__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__NudgeBuffer __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__NudgeBuffer __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NudgeBuffer_
{
  using Type = NudgeBuffer_<ContainerAllocator>;

  explicit NudgeBuffer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit NudgeBuffer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _obstacle_nudge_buffer_type =
    std::vector<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>>>;
  _obstacle_nudge_buffer_type obstacle_nudge_buffer;

  // setters for named parameter idiom
  Type & set__obstacle_nudge_buffer(
    const std::vector<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>>> & _arg)
  {
    this->obstacle_nudge_buffer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__NudgeBuffer
    std::shared_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__NudgeBuffer
    std::shared_ptr<deva_mdriver_msgs::msg::NudgeBuffer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NudgeBuffer_ & other) const
  {
    if (this->obstacle_nudge_buffer != other.obstacle_nudge_buffer) {
      return false;
    }
    return true;
  }
  bool operator!=(const NudgeBuffer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NudgeBuffer_

// alias to use template instance with default allocator
using NudgeBuffer =
  deva_mdriver_msgs::msg::NudgeBuffer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__NUDGE_BUFFER__STRUCT_HPP_
