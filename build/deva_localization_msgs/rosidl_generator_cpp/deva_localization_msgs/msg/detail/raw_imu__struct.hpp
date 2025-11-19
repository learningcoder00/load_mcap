// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_localization_msgs:msg/RawImu.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__STRUCT_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__STRUCT_HPP_

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
// Member 'linear_acceleration'
// Member 'angular_velocity'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_localization_msgs__msg__RawImu __attribute__((deprecated))
#else
# define DEPRECATED__deva_localization_msgs__msg__RawImu __declspec(deprecated)
#endif

namespace deva_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawImu_
{
  using Type = RawImu_<ContainerAllocator>;

  explicit RawImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    linear_acceleration(_init),
    angular_velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measurement_span = 0.0f;
    }
  }

  explicit RawImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->measurement_span = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _measurement_span_type =
    float;
  _measurement_span_type measurement_span;
  using _linear_acceleration_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__measurement_span(
    const float & _arg)
  {
    this->measurement_span = _arg;
    return *this;
  }
  Type & set__linear_acceleration(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration = _arg;
    return *this;
  }
  Type & set__angular_velocity(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->angular_velocity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_localization_msgs::msg::RawImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_localization_msgs::msg::RawImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::RawImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::RawImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_localization_msgs__msg__RawImu
    std::shared_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_localization_msgs__msg__RawImu
    std::shared_ptr<deva_localization_msgs::msg::RawImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawImu_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->measurement_span != other.measurement_span) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawImu_

// alias to use template instance with default allocator
using RawImu =
  deva_localization_msgs::msg::RawImu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__RAW_IMU__STRUCT_HPP_
