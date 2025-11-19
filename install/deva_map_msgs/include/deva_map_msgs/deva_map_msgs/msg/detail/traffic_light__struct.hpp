// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/TrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_

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
# define DEPRECATED__deva_map_msgs__msg__TrafficLight __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__TrafficLight __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLight_
{
  using Type = TrafficLight_<ContainerAllocator>;

  explicit TrafficLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_type = 0;
      this->blink = false;
      this->remaining_time = 0.0;
      this->bind_id = "";
    }
  }

  explicit TrafficLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_obstacle(_alloc, _init),
    bind_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color_type = 0;
      this->blink = false;
      this->remaining_time = 0.0;
      this->bind_id = "";
    }
  }

  // field types and members
  using _perception_obstacle_type =
    deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator>;
  _perception_obstacle_type perception_obstacle;
  using _color_type_type =
    int8_t;
  _color_type_type color_type;
  using _blink_type =
    bool;
  _blink_type blink;
  using _remaining_time_type =
    double;
  _remaining_time_type remaining_time;
  using _bind_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _bind_id_type bind_id;

  // setters for named parameter idiom
  Type & set__perception_obstacle(
    const deva_perception_msgs::msg::ObstacleCommon_<ContainerAllocator> & _arg)
  {
    this->perception_obstacle = _arg;
    return *this;
  }
  Type & set__color_type(
    const int8_t & _arg)
  {
    this->color_type = _arg;
    return *this;
  }
  Type & set__blink(
    const bool & _arg)
  {
    this->blink = _arg;
    return *this;
  }
  Type & set__remaining_time(
    const double & _arg)
  {
    this->remaining_time = _arg;
    return *this;
  }
  Type & set__bind_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->bind_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::TrafficLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::TrafficLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__TrafficLight
    std::shared_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__TrafficLight
    std::shared_ptr<deva_map_msgs::msg::TrafficLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLight_ & other) const
  {
    if (this->perception_obstacle != other.perception_obstacle) {
      return false;
    }
    if (this->color_type != other.color_type) {
      return false;
    }
    if (this->blink != other.blink) {
      return false;
    }
    if (this->remaining_time != other.remaining_time) {
      return false;
    }
    if (this->bind_id != other.bind_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLight_

// alias to use template instance with default allocator
using TrafficLight =
  deva_map_msgs::msg::TrafficLight_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__TRAFFIC_LIGHT__STRUCT_HPP_
