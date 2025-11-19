// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/TrafficLightArrayNew.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__STRUCT_HPP_

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
// Member 'traffic_lights'
#include "deva_perception_msgs/msg/detail/traffic_light_new__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__TrafficLightArrayNew __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__TrafficLightArrayNew __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrafficLightArrayNew_
{
  using Type = TrafficLightArrayNew_<ContainerAllocator>;

  explicit TrafficLightArrayNew_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_lights.fill(deva_perception_msgs::msg::TrafficLightNew_<ContainerAllocator>{_init});
    }
  }

  explicit TrafficLightArrayNew_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    traffic_lights(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_lights.fill(deva_perception_msgs::msg::TrafficLightNew_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _traffic_lights_type =
    std::array<deva_perception_msgs::msg::TrafficLightNew_<ContainerAllocator>, 12>;
  _traffic_lights_type traffic_lights;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__traffic_lights(
    const std::array<deva_perception_msgs::msg::TrafficLightNew_<ContainerAllocator>, 12> & _arg)
  {
    this->traffic_lights = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficLightArrayNew
    std::shared_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__TrafficLightArrayNew
    std::shared_ptr<deva_perception_msgs::msg::TrafficLightArrayNew_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrafficLightArrayNew_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->traffic_lights != other.traffic_lights) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrafficLightArrayNew_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrafficLightArrayNew_

// alias to use template instance with default allocator
using TrafficLightArrayNew =
  deva_perception_msgs::msg::TrafficLightArrayNew_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__TRAFFIC_LIGHT_ARRAY_NEW__STRUCT_HPP_
