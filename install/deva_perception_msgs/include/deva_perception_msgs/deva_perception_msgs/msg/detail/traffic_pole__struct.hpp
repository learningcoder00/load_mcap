// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficPole.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'perception_obstacle'
#include "deva_perception_msgs/msg/detail/obstacle_common__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficPole __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficPole __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficPole_
{
  using Type = TrafficPole_<ContainerAllocator>;

  explicit TrafficPole_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bind_id = "";
      this->raised = false;
    }
  }

  explicit TrafficPole_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_alloc, _init),
    bind_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bind_id = "";
      this->raised = false;
    }
  }

  // field types and members
  using _perception_obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _perception_obstacle_type perception_obstacle;
  using _bind_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bind_id_type bind_id;
  using _raised_type =
    bool;
  _raised_type raised;

  // setters for named parameter idiom
  Type & set__perception_obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->perception_obstacle = _arg;
    return *this;
  }
  Type & set__bind_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bind_id = _arg;
    return *this;
  }
  Type & set__raised(
    const bool & _arg)
  {
    this->raised = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficPole_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficPole_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficPole
    std::shared_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficPole
    std::shared_ptr<deva_perception_msgs::msg::TrafficPole_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficPole_ & other) const
  {
    if (this->perception_obstacle != other.perception_obstacle) {
      return false;
    }
    if (this->bind_id != other.bind_id) {
      return false;
    }
    if (this->raised != other.raised) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficPole_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficPole_

// alias to use template instance with default allocator
using TrafficPole =
  deva_perception_msgs::msg::TrafficPole_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_POLE__STRUCT_HPP_
