// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/Signal.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'so'
#include "deva_perception_msgs/msg/detail/static_obstacle__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__Signal __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__Signal __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Signal_
{
  using Type = Signal_<ContainerAllocator>;

  explicit Signal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : so(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_type = 0;
      this->geometry_type = 0;
      this->state_type = 0;
    }
  }

  explicit Signal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : so(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal_type = 0;
      this->geometry_type = 0;
      this->state_type = 0;
    }
  }

  // field types and members
  using _so_type =
    deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator>;
  _so_type so;
  using _signal_type_type =
    uint8_t;
  _signal_type_type signal_type;
  using _geometry_type_type =
    uint8_t;
  _geometry_type_type geometry_type;
  using _state_type_type =
    uint8_t;
  _state_type_type state_type;

  // setters for named parameter idiom
  Type & set__so(
    const deva_perception_msgs::msg::StaticObstacle_<ContainerAllocator> & _arg)
  {
    this->so = _arg;
    return *this;
  }
  Type & set__signal_type(
    const uint8_t & _arg)
  {
    this->signal_type = _arg;
    return *this;
  }
  Type & set__geometry_type(
    const uint8_t & _arg)
  {
    this->geometry_type = _arg;
    return *this;
  }
  Type & set__state_type(
    const uint8_t & _arg)
  {
    this->state_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::Signal_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::Signal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Signal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::Signal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__Signal
    std::shared_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__Signal
    std::shared_ptr<deva_perception_msgs::msg::Signal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Signal_ & other) const
  {
    if (this->so != other.so) {
      return false;
    }
    if (this->signal_type != other.signal_type) {
      return false;
    }
    if (this->geometry_type != other.geometry_type) {
      return false;
    }
    if (this->state_type != other.state_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Signal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Signal_

// alias to use template instance with default allocator
using Signal =
  deva_perception_msgs::msg::Signal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__SIGNAL__STRUCT_HPP_
