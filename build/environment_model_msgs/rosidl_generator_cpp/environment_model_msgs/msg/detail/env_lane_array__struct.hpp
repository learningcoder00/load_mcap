// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvLaneArray.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__STRUCT_HPP_

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
// Member 'env_lane'
#include "environment_model_msgs/msg/detail/env_lane__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvLaneArray __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvLaneArray __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvLaneArray_
{
  using Type = EnvLaneArray_<ContainerAllocator>;

  explicit EnvLaneArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit EnvLaneArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _env_lane_type =
    std::vector<environment_model_msgs::msg::EnvLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvLane_<ContainerAllocator>>>;
  _env_lane_type env_lane;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__env_lane(
    const std::vector<environment_model_msgs::msg::EnvLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvLane_<ContainerAllocator>>> & _arg)
  {
    this->env_lane = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvLaneArray
    std::shared_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvLaneArray
    std::shared_ptr<environment_model_msgs::msg::EnvLaneArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvLaneArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->env_lane != other.env_lane) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvLaneArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvLaneArray_

// alias to use template instance with default allocator
using EnvLaneArray =
  environment_model_msgs::msg::EnvLaneArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LANE_ARRAY__STRUCT_HPP_
