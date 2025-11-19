// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebStep.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'roads'
#include "deva_gaode_routing_msgs/msg/detail/web_road__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebStep __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebStep __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebStep_
{
  using Type = WebStep_<ContainerAllocator>;

  explicit WebStep_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->traffic_light_count = 0l;
      this->distance = 0.0f;
      this->time = 0.0f;
      this->forward_direction = 0ul;
      this->forward_type = 0ul;
      this->main_action = 0ul;
      this->assistant_action = 0ul;
    }
  }

  explicit WebStep_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->traffic_light_count = 0l;
      this->distance = 0.0f;
      this->time = 0.0f;
      this->forward_direction = 0ul;
      this->forward_type = 0ul;
      this->main_action = 0ul;
      this->assistant_action = 0ul;
    }
  }

  // field types and members
  using _id_type =
    int32_t;
  _id_type id;
  using _roads_type =
    std::vector<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>>>;
  _roads_type roads;
  using _traffic_light_count_type =
    int32_t;
  _traffic_light_count_type traffic_light_count;
  using _distance_type =
    float;
  _distance_type distance;
  using _time_type =
    float;
  _time_type time;
  using _forward_direction_type =
    uint32_t;
  _forward_direction_type forward_direction;
  using _forward_type_type =
    uint32_t;
  _forward_type_type forward_type;
  using _main_action_type =
    uint32_t;
  _main_action_type main_action;
  using _assistant_action_type =
    uint32_t;
  _assistant_action_type assistant_action;

  // setters for named parameter idiom
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__roads(
    const std::vector<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>>> & _arg)
  {
    this->roads = _arg;
    return *this;
  }
  Type & set__traffic_light_count(
    const int32_t & _arg)
  {
    this->traffic_light_count = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__forward_direction(
    const uint32_t & _arg)
  {
    this->forward_direction = _arg;
    return *this;
  }
  Type & set__forward_type(
    const uint32_t & _arg)
  {
    this->forward_type = _arg;
    return *this;
  }
  Type & set__main_action(
    const uint32_t & _arg)
  {
    this->main_action = _arg;
    return *this;
  }
  Type & set__assistant_action(
    const uint32_t & _arg)
  {
    this->assistant_action = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebStep
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebStep
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebStep_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->roads != other.roads) {
      return false;
    }
    if (this->traffic_light_count != other.traffic_light_count) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->forward_direction != other.forward_direction) {
      return false;
    }
    if (this->forward_type != other.forward_type) {
      return false;
    }
    if (this->main_action != other.main_action) {
      return false;
    }
    if (this->assistant_action != other.assistant_action) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebStep_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebStep_

// alias to use template instance with default allocator
using WebStep =
  deva_gaode_routing_msgs::msg::WebStep_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_STEP__STRUCT_HPP_
