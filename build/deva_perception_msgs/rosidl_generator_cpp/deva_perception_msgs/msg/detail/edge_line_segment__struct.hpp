// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/EdgeLineSegment.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'segment'
#include "deva_common_msgs/msg/detail/line_segment__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__EdgeLineSegment __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__EdgeLineSegment __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EdgeLineSegment_
{
  using Type = EdgeLineSegment_<ContainerAllocator>;

  explicit EdgeLineSegment_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : segment(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_blocked = false;
      this->confidence = 0.0f;
      this->blocked_confidence = 0.0f;
    }
  }

  explicit EdgeLineSegment_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : segment(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_blocked = false;
      this->confidence = 0.0f;
      this->blocked_confidence = 0.0f;
    }
  }

  // field types and members
  using _segment_type =
    deva_common_msgs::msg::LineSegment_<ContainerAllocator>;
  _segment_type segment;
  using _is_blocked_type =
    bool;
  _is_blocked_type is_blocked;
  using _confidence_type =
    float;
  _confidence_type confidence;
  using _blocked_confidence_type =
    float;
  _blocked_confidence_type blocked_confidence;

  // setters for named parameter idiom
  Type & set__segment(
    const deva_common_msgs::msg::LineSegment_<ContainerAllocator> & _arg)
  {
    this->segment = _arg;
    return *this;
  }
  Type & set__is_blocked(
    const bool & _arg)
  {
    this->is_blocked = _arg;
    return *this;
  }
  Type & set__confidence(
    const float & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__blocked_confidence(
    const float & _arg)
  {
    this->blocked_confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__EdgeLineSegment
    std::shared_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__EdgeLineSegment
    std::shared_ptr<deva_perception_msgs::msg::EdgeLineSegment_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EdgeLineSegment_ & other) const
  {
    if (this->segment != other.segment) {
      return false;
    }
    if (this->is_blocked != other.is_blocked) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->blocked_confidence != other.blocked_confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const EdgeLineSegment_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EdgeLineSegment_

// alias to use template instance with default allocator
using EdgeLineSegment =
  deva_perception_msgs::msg::EdgeLineSegment_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__EDGE_LINE_SEGMENT__STRUCT_HPP_
