// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_mdriver_msgs:msg/ObstacleNudgeBuffer.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__STRUCT_HPP_
#define DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_mdriver_msgs__msg__ObstacleNudgeBuffer __attribute__((deprecated))
#else
# define DEPRECATED__deva_mdriver_msgs__msg__ObstacleNudgeBuffer __declspec(deprecated)
#endif

namespace deva_mdriver_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObstacleNudgeBuffer_
{
  using Type = ObstacleNudgeBuffer_<ContainerAllocator>;

  explicit ObstacleNudgeBuffer_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_id = 0l;
      this->value = 0.0;
      this->label = false;
    }
  }

  explicit ObstacleNudgeBuffer_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->track_id = 0l;
      this->value = 0.0;
      this->label = false;
    }
  }

  // field types and members
  using _track_id_type =
    int32_t;
  _track_id_type track_id;
  using _value_type =
    double;
  _value_type value;
  using _label_type =
    bool;
  _label_type label;

  // setters for named parameter idiom
  Type & set__track_id(
    const int32_t & _arg)
  {
    this->track_id = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__label(
    const bool & _arg)
  {
    this->label = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_mdriver_msgs__msg__ObstacleNudgeBuffer
    std::shared_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_mdriver_msgs__msg__ObstacleNudgeBuffer
    std::shared_ptr<deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObstacleNudgeBuffer_ & other) const
  {
    if (this->track_id != other.track_id) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObstacleNudgeBuffer_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObstacleNudgeBuffer_

// alias to use template instance with default allocator
using ObstacleNudgeBuffer =
  deva_mdriver_msgs::msg::ObstacleNudgeBuffer_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_mdriver_msgs

#endif  // DEVA_MDRIVER_MSGS__MSG__DETAIL__OBSTACLE_NUDGE_BUFFER__STRUCT_HPP_
