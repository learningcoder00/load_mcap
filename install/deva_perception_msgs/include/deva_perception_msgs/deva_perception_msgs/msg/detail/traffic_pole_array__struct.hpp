// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficPoleArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE_ARRAY__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE_ARRAY__STRUCT_HPP_

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
// Member 'traffic_poles'
#include "deva_perception_msgs/msg/detail/traffic_pole__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficPoleArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficPoleArray __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficPoleArray_
{
  using Type = TrafficPoleArray_<ContainerAllocator>;

  explicit TrafficPoleArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit TrafficPoleArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _traffic_poles_type =
    std::vector<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>>>;
  _traffic_poles_type traffic_poles;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__traffic_poles(
    const std::vector<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>>> & _arg)
  {
    this->traffic_poles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficPoleArray
    std::shared_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficPoleArray
    std::shared_ptr<deva_perception_msgs::msg::TrafficPoleArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficPoleArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->traffic_poles != other.traffic_poles) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficPoleArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficPoleArray_

// alias to use template instance with default allocator
using TrafficPoleArray =
  deva_perception_msgs::msg::TrafficPoleArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE_ARRAY__STRUCT_HPP_
