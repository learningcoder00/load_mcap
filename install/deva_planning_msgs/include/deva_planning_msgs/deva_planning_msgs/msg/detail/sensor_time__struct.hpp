// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/SensorTime.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__SENSOR_TIME__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__SENSOR_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'localization_header'
// Member 'prediction_header'
// Member 'decision_header'
// Member 'chassis_header'
// Member 'traffic_light_header'
// Member 'traffic_pole_header'
// Member 'cone_header'
// Member 'map_header'
// Member 'padmsg_header'
// Member 'pull_over_header'
// Member 'routing_header'
// Member 'start_planning_header'
// Member 'finish_planning_header'
// Member 'navigator_start_header'
// Member 'navigator_end_header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__SensorTime __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__SensorTime __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SensorTime_
{
  using Type = SensorTime_<ContainerAllocator>;

  explicit SensorTime_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : localization_header(_init),
    prediction_header(_init),
    decision_header(_init),
    chassis_header(_init),
    traffic_light_header(_init),
    traffic_pole_header(_init),
    cone_header(_init),
    map_header(_init),
    padmsg_header(_init),
    pull_over_header(_init),
    routing_header(_init),
    start_planning_header(_init),
    finish_planning_header(_init),
    navigator_start_header(_init),
    navigator_end_header(_init)
  {
    (void)_init;
  }

  explicit SensorTime_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : localization_header(_alloc, _init),
    prediction_header(_alloc, _init),
    decision_header(_alloc, _init),
    chassis_header(_alloc, _init),
    traffic_light_header(_alloc, _init),
    traffic_pole_header(_alloc, _init),
    cone_header(_alloc, _init),
    map_header(_alloc, _init),
    padmsg_header(_alloc, _init),
    pull_over_header(_alloc, _init),
    routing_header(_alloc, _init),
    start_planning_header(_alloc, _init),
    finish_planning_header(_alloc, _init),
    navigator_start_header(_alloc, _init),
    navigator_end_header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _localization_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _localization_header_type localization_header;
  using _prediction_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _prediction_header_type prediction_header;
  using _decision_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _decision_header_type decision_header;
  using _chassis_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _chassis_header_type chassis_header;
  using _traffic_light_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _traffic_light_header_type traffic_light_header;
  using _traffic_pole_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _traffic_pole_header_type traffic_pole_header;
  using _cone_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _cone_header_type cone_header;
  using _map_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _map_header_type map_header;
  using _padmsg_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _padmsg_header_type padmsg_header;
  using _pull_over_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _pull_over_header_type pull_over_header;
  using _routing_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _routing_header_type routing_header;
  using _start_planning_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _start_planning_header_type start_planning_header;
  using _finish_planning_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _finish_planning_header_type finish_planning_header;
  using _navigator_start_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _navigator_start_header_type navigator_start_header;
  using _navigator_end_header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _navigator_end_header_type navigator_end_header;

  // setters for named parameter idiom
  Type & set__localization_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->localization_header = _arg;
    return *this;
  }
  Type & set__prediction_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->prediction_header = _arg;
    return *this;
  }
  Type & set__decision_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->decision_header = _arg;
    return *this;
  }
  Type & set__chassis_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->chassis_header = _arg;
    return *this;
  }
  Type & set__traffic_light_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->traffic_light_header = _arg;
    return *this;
  }
  Type & set__traffic_pole_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->traffic_pole_header = _arg;
    return *this;
  }
  Type & set__cone_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->cone_header = _arg;
    return *this;
  }
  Type & set__map_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->map_header = _arg;
    return *this;
  }
  Type & set__padmsg_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->padmsg_header = _arg;
    return *this;
  }
  Type & set__pull_over_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->pull_over_header = _arg;
    return *this;
  }
  Type & set__routing_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->routing_header = _arg;
    return *this;
  }
  Type & set__start_planning_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->start_planning_header = _arg;
    return *this;
  }
  Type & set__finish_planning_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->finish_planning_header = _arg;
    return *this;
  }
  Type & set__navigator_start_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->navigator_start_header = _arg;
    return *this;
  }
  Type & set__navigator_end_header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->navigator_end_header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::SensorTime_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::SensorTime_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::SensorTime_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::SensorTime_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__SensorTime
    std::shared_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__SensorTime
    std::shared_ptr<deva_planning_msgs::msg::SensorTime_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SensorTime_ & other) const
  {
    if (this->localization_header != other.localization_header) {
      return false;
    }
    if (this->prediction_header != other.prediction_header) {
      return false;
    }
    if (this->decision_header != other.decision_header) {
      return false;
    }
    if (this->chassis_header != other.chassis_header) {
      return false;
    }
    if (this->traffic_light_header != other.traffic_light_header) {
      return false;
    }
    if (this->traffic_pole_header != other.traffic_pole_header) {
      return false;
    }
    if (this->cone_header != other.cone_header) {
      return false;
    }
    if (this->map_header != other.map_header) {
      return false;
    }
    if (this->padmsg_header != other.padmsg_header) {
      return false;
    }
    if (this->pull_over_header != other.pull_over_header) {
      return false;
    }
    if (this->routing_header != other.routing_header) {
      return false;
    }
    if (this->start_planning_header != other.start_planning_header) {
      return false;
    }
    if (this->finish_planning_header != other.finish_planning_header) {
      return false;
    }
    if (this->navigator_start_header != other.navigator_start_header) {
      return false;
    }
    if (this->navigator_end_header != other.navigator_end_header) {
      return false;
    }
    return true;
  }
  bool operator!=(const SensorTime_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SensorTime_

// alias to use template instance with default allocator
using SensorTime =
  deva_planning_msgs::msg::SensorTime_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__SENSOR_TIME__STRUCT_HPP_
