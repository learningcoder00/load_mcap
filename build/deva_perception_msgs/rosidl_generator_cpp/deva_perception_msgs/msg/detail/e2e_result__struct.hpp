// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/E2eResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'broadcategory'
#include "deva_perception_msgs/msg/detail/e2e_decode_broad_result__struct.hpp"
// Member 'turn_around'
// Member 'left'
// Member 'straight'
// Member 'right'
#include "deva_perception_msgs/msg/detail/e2e_decode_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__E2eResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__E2eResult __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct E2eResult_
{
  using Type = E2eResult_<ContainerAllocator>;

  explicit E2eResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : broadcategory(_init),
    turn_around(_init),
    left(_init),
    straight(_init),
    right(_init)
  {
    (void)_init;
  }

  explicit E2eResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : broadcategory(_alloc, _init),
    turn_around(_alloc, _init),
    left(_alloc, _init),
    straight(_alloc, _init),
    right(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _broadcategory_type =
    deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator>;
  _broadcategory_type broadcategory;
  using _turn_around_type =
    deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator>;
  _turn_around_type turn_around;
  using _left_type =
    deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator>;
  _left_type left;
  using _straight_type =
    deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator>;
  _straight_type straight;
  using _right_type =
    deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator>;
  _right_type right;

  // setters for named parameter idiom
  Type & set__broadcategory(
    const deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator> & _arg)
  {
    this->broadcategory = _arg;
    return *this;
  }
  Type & set__turn_around(
    const deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator> & _arg)
  {
    this->turn_around = _arg;
    return *this;
  }
  Type & set__left(
    const deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator> & _arg)
  {
    this->left = _arg;
    return *this;
  }
  Type & set__straight(
    const deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator> & _arg)
  {
    this->straight = _arg;
    return *this;
  }
  Type & set__right(
    const deva_perception_msgs::msg::E2eDecodeResult_<ContainerAllocator> & _arg)
  {
    this->right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::E2eResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::E2eResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__E2eResult
    std::shared_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__E2eResult
    std::shared_ptr<deva_perception_msgs::msg::E2eResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const E2eResult_ & other) const
  {
    if (this->broadcategory != other.broadcategory) {
      return false;
    }
    if (this->turn_around != other.turn_around) {
      return false;
    }
    if (this->left != other.left) {
      return false;
    }
    if (this->straight != other.straight) {
      return false;
    }
    if (this->right != other.right) {
      return false;
    }
    return true;
  }
  bool operator!=(const E2eResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct E2eResult_

// alias to use template instance with default allocator
using E2eResult =
  deva_perception_msgs::msg::E2eResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_RESULT__STRUCT_HPP_
