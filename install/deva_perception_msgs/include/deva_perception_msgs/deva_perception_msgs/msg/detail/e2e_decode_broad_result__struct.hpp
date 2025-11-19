// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/E2eDecodeBroadResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__E2eDecodeBroadResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__E2eDecodeBroadResult __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct E2eDecodeBroadResult_
{
  using Type = E2eDecodeBroadResult_<ContainerAllocator>;

  explicit E2eDecodeBroadResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pred_category = 0;
      this->pred_score = 0.0f;
    }
  }

  explicit E2eDecodeBroadResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pred_category = 0;
      this->pred_score = 0.0f;
    }
  }

  // field types and members
  using _pred_category_type =
    uint8_t;
  _pred_category_type pred_category;
  using _pred_score_type =
    float;
  _pred_score_type pred_score;

  // setters for named parameter idiom
  Type & set__pred_category(
    const uint8_t & _arg)
  {
    this->pred_category = _arg;
    return *this;
  }
  Type & set__pred_score(
    const float & _arg)
  {
    this->pred_score = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__E2eDecodeBroadResult
    std::shared_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__E2eDecodeBroadResult
    std::shared_ptr<deva_perception_msgs::msg::E2eDecodeBroadResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const E2eDecodeBroadResult_ & other) const
  {
    if (this->pred_category != other.pred_category) {
      return false;
    }
    if (this->pred_score != other.pred_score) {
      return false;
    }
    return true;
  }
  bool operator!=(const E2eDecodeBroadResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct E2eDecodeBroadResult_

// alias to use template instance with default allocator
using E2eDecodeBroadResult =
  deva_perception_msgs::msg::E2eDecodeBroadResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__STRUCT_HPP_
