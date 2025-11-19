// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/AccHeadingSteeringStats.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'acc_steering_stats'
// Member 'heading_steering_stats'
#include "deva_mdriver_msgs/msg/detail/mean_variance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__AccHeadingSteeringStats __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__AccHeadingSteeringStats __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AccHeadingSteeringStats_
{
  using Type = AccHeadingSteeringStats_<ContainerAllocator>;

  explicit AccHeadingSteeringStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit AccHeadingSteeringStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _acc_steering_stats_type =
    std::vector<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>>;
  _acc_steering_stats_type acc_steering_stats;
  using _heading_steering_stats_type =
    std::vector<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>>;
  _heading_steering_stats_type heading_steering_stats;

  // setters for named parameter idiom
  Type & set__acc_steering_stats(
    const std::vector<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>> & _arg)
  {
    this->acc_steering_stats = _arg;
    return *this;
  }
  Type & set__heading_steering_stats(
    const std::vector<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_mdriver_msgs::msg::MeanVariance_<ContainerAllocator>>> & _arg)
  {
    this->heading_steering_stats = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__AccHeadingSteeringStats
    std::shared_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__AccHeadingSteeringStats
    std::shared_ptr<deva_mdriver_msgs::msg::AccHeadingSteeringStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AccHeadingSteeringStats_ & other) const
  {
    if (this->acc_steering_stats != other.acc_steering_stats) {
      return false;
    }
    if (this->heading_steering_stats != other.heading_steering_stats) {
      return false;
    }
    return true;
  }
  bool operator!=(const AccHeadingSteeringStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AccHeadingSteeringStats_

// alias to use template instance with default allocator
using AccHeadingSteeringStats =
  deva_mdriver_msgs::msg::AccHeadingSteeringStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__ACC_HEADING_STEERING_STATS__STRUCT_HPP_
