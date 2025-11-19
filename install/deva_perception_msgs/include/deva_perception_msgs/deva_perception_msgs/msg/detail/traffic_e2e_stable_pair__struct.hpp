// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficE2eStablePair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficE2eStablePair __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficE2eStablePair __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficE2eStablePair_
{
  using Type = TrafficE2eStablePair_<ContainerAllocator>;

  explicit TrafficE2eStablePair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_e2e_result = 0;
      this->is_stable = false;
    }
  }

  explicit TrafficE2eStablePair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_e2e_result = 0;
      this->is_stable = false;
    }
  }

  // field types and members
  using _traffic_e2e_result_type =
    uint8_t;
  _traffic_e2e_result_type traffic_e2e_result;
  using _is_stable_type =
    bool;
  _is_stable_type is_stable;

  // setters for named parameter idiom
  Type & set__traffic_e2e_result(
    const uint8_t & _arg)
  {
    this->traffic_e2e_result = _arg;
    return *this;
  }
  Type & set__is_stable(
    const bool & _arg)
  {
    this->is_stable = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficE2eStablePair
    std::shared_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficE2eStablePair
    std::shared_ptr<deva_perception_msgs::msg::TrafficE2eStablePair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficE2eStablePair_ & other) const
  {
    if (this->traffic_e2e_result != other.traffic_e2e_result) {
      return false;
    }
    if (this->is_stable != other.is_stable) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficE2eStablePair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficE2eStablePair_

// alias to use template instance with default allocator
using TrafficE2eStablePair =
  deva_perception_msgs::msg::TrafficE2eStablePair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_E2E_STABLE_PAIR__STRUCT_HPP_
