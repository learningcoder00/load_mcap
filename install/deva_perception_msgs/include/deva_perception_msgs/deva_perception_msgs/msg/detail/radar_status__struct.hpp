// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RadarStatus.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RadarStatus __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RadarStatus __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarStatus_
{
  using Type = RadarStatus_<ContainerAllocator>;

  explicit RadarStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_detection = 0ul;
      this->num_object = 0ul;
      this->status_enable = 0ul;
      this->status_faulty = 0ul;
      this->status_latency = 0ul;
      this->status_safety_fault = 0ul;
      this->timestamp_h = 0.0;
      this->timestamp_l = 0.0;
      this->vdy_velocity = 0.0;
      this->vdy_yawrate = 0.0;
      this->vdy_timestamp = 0.0;
    }
  }

  explicit RadarStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_detection = 0ul;
      this->num_object = 0ul;
      this->status_enable = 0ul;
      this->status_faulty = 0ul;
      this->status_latency = 0ul;
      this->status_safety_fault = 0ul;
      this->timestamp_h = 0.0;
      this->timestamp_l = 0.0;
      this->vdy_velocity = 0.0;
      this->vdy_yawrate = 0.0;
      this->vdy_timestamp = 0.0;
    }
  }

  // field types and members
  using _num_detection_type =
    uint32_t;
  _num_detection_type num_detection;
  using _num_object_type =
    uint32_t;
  _num_object_type num_object;
  using _status_enable_type =
    uint32_t;
  _status_enable_type status_enable;
  using _status_faulty_type =
    uint32_t;
  _status_faulty_type status_faulty;
  using _status_latency_type =
    uint32_t;
  _status_latency_type status_latency;
  using _status_safety_fault_type =
    uint32_t;
  _status_safety_fault_type status_safety_fault;
  using _timestamp_h_type =
    double;
  _timestamp_h_type timestamp_h;
  using _timestamp_l_type =
    double;
  _timestamp_l_type timestamp_l;
  using _vdy_velocity_type =
    double;
  _vdy_velocity_type vdy_velocity;
  using _vdy_yawrate_type =
    double;
  _vdy_yawrate_type vdy_yawrate;
  using _vdy_timestamp_type =
    double;
  _vdy_timestamp_type vdy_timestamp;

  // setters for named parameter idiom
  Type & set__num_detection(
    const uint32_t & _arg)
  {
    this->num_detection = _arg;
    return *this;
  }
  Type & set__num_object(
    const uint32_t & _arg)
  {
    this->num_object = _arg;
    return *this;
  }
  Type & set__status_enable(
    const uint32_t & _arg)
  {
    this->status_enable = _arg;
    return *this;
  }
  Type & set__status_faulty(
    const uint32_t & _arg)
  {
    this->status_faulty = _arg;
    return *this;
  }
  Type & set__status_latency(
    const uint32_t & _arg)
  {
    this->status_latency = _arg;
    return *this;
  }
  Type & set__status_safety_fault(
    const uint32_t & _arg)
  {
    this->status_safety_fault = _arg;
    return *this;
  }
  Type & set__timestamp_h(
    const double & _arg)
  {
    this->timestamp_h = _arg;
    return *this;
  }
  Type & set__timestamp_l(
    const double & _arg)
  {
    this->timestamp_l = _arg;
    return *this;
  }
  Type & set__vdy_velocity(
    const double & _arg)
  {
    this->vdy_velocity = _arg;
    return *this;
  }
  Type & set__vdy_yawrate(
    const double & _arg)
  {
    this->vdy_yawrate = _arg;
    return *this;
  }
  Type & set__vdy_timestamp(
    const double & _arg)
  {
    this->vdy_timestamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RadarStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RadarStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RadarStatus
    std::shared_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RadarStatus
    std::shared_ptr<deva_perception_msgs::msg::RadarStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarStatus_ & other) const
  {
    if (this->num_detection != other.num_detection) {
      return false;
    }
    if (this->num_object != other.num_object) {
      return false;
    }
    if (this->status_enable != other.status_enable) {
      return false;
    }
    if (this->status_faulty != other.status_faulty) {
      return false;
    }
    if (this->status_latency != other.status_latency) {
      return false;
    }
    if (this->status_safety_fault != other.status_safety_fault) {
      return false;
    }
    if (this->timestamp_h != other.timestamp_h) {
      return false;
    }
    if (this->timestamp_l != other.timestamp_l) {
      return false;
    }
    if (this->vdy_velocity != other.vdy_velocity) {
      return false;
    }
    if (this->vdy_yawrate != other.vdy_yawrate) {
      return false;
    }
    if (this->vdy_timestamp != other.vdy_timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarStatus_

// alias to use template instance with default allocator
using RadarStatus =
  deva_perception_msgs::msg::RadarStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_STATUS__STRUCT_HPP_
