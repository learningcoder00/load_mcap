// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/E2eTrafficDetPair.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'e2e_decode_result'
#include "deva_perception_msgs/msg/detail/e2e_decode_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__E2eTrafficDetPair __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__E2eTrafficDetPair __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct E2eTrafficDetPair_
{
  using Type = E2eTrafficDetPair_<ContainerAllocator>;

  explicit E2eTrafficDetPair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : e2e_decode_result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_e2e_result = 0;
    }
  }

  explicit E2eTrafficDetPair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : e2e_decode_result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_e2e_result = 0;
    }
  }

  // field types and members
  using _traffic_e2e_result_type =
    uint8_t;
  _traffic_e2e_result_type traffic_e2e_result;
  using _e2e_decode_result_type =
    deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator>;
  _e2e_decode_result_type e2e_decode_result;

  // setters for named parameter idiom
  Type & set__traffic_e2e_result(
    const uint8_t & _arg)
  {
    this->traffic_e2e_result = _arg;
    return *this;
  }
  Type & set__e2e_decode_result(
    const deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator> & _arg)
  {
    this->e2e_decode_result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__E2eTrafficDetPair
    std::shared_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__E2eTrafficDetPair
    std::shared_ptr<deva_perception_msgs::msg::E2eTrafficDetPair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const E2eTrafficDetPair_ & other) const
  {
    if (this->traffic_e2e_result != other.traffic_e2e_result) {
      return false;
    }
    if (this->e2e_decode_result != other.e2e_decode_result) {
      return false;
    }
    return true;
  }
  bool operator!=(const E2eTrafficDetPair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct E2eTrafficDetPair_

// alias to use template instance with default allocator
using E2eTrafficDetPair =
  deva_perception_msgs::msg::E2eTrafficDetPair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_TRAFFIC_DET_PAIR__STRUCT_HPP_
