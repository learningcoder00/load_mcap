// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RadarObject.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"
// Member 'relative_velocity'
#include "geometry_msgs/msg/detail/twist_with_covariance__struct.hpp"
// Member 'relative_acceleration'
#include "geometry_msgs/msg/detail/accel_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RadarObject __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RadarObject __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarObject_
{
  using Type = RadarObject_<ContainerAllocator>;

  explicit RadarObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    relative_velocity(_init),
    relative_acceleration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->rcs = 0.0;
      this->dynamic_property = 0;
      this->quality_valid = false;
      this->meas_state = 0;
      this->prob_of_exist = 0;
      this->extended_valid = false;
      this->length = 0.0;
      this->width = 0.0;
      this->center_latitude = 0.0;
      this->center_longitude = 0.0;
      this->orientation_angle = 0.0;
      this->class_type = 0;
    }
  }

  explicit RadarObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    relative_velocity(_alloc, _init),
    relative_acceleration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->rcs = 0.0;
      this->dynamic_property = 0;
      this->quality_valid = false;
      this->meas_state = 0;
      this->prob_of_exist = 0;
      this->extended_valid = false;
      this->length = 0.0;
      this->width = 0.0;
      this->center_latitude = 0.0;
      this->center_longitude = 0.0;
      this->orientation_angle = 0.0;
      this->class_type = 0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _position_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _position_type position;
  using _relative_velocity_type =
    geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator>;
  _relative_velocity_type relative_velocity;
  using _relative_acceleration_type =
    geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator>;
  _relative_acceleration_type relative_acceleration;
  using _rcs_type =
    double;
  _rcs_type rcs;
  using _dynamic_property_type =
    uint8_t;
  _dynamic_property_type dynamic_property;
  using _quality_valid_type =
    bool;
  _quality_valid_type quality_valid;
  using _meas_state_type =
    uint8_t;
  _meas_state_type meas_state;
  using _prob_of_exist_type =
    uint8_t;
  _prob_of_exist_type prob_of_exist;
  using _extended_valid_type =
    bool;
  _extended_valid_type extended_valid;
  using _length_type =
    double;
  _length_type length;
  using _width_type =
    double;
  _width_type width;
  using _center_latitude_type =
    double;
  _center_latitude_type center_latitude;
  using _center_longitude_type =
    double;
  _center_longitude_type center_longitude;
  using _orientation_angle_type =
    double;
  _orientation_angle_type orientation_angle;
  using _class_type_type =
    uint8_t;
  _class_type_type class_type;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__relative_velocity(
    const geometry_msgs::msg::TwistWithCovariance_<ContainerAllocator> & _arg)
  {
    this->relative_velocity = _arg;
    return *this;
  }
  Type & set__relative_acceleration(
    const geometry_msgs::msg::AccelWithCovariance_<ContainerAllocator> & _arg)
  {
    this->relative_acceleration = _arg;
    return *this;
  }
  Type & set__rcs(
    const double & _arg)
  {
    this->rcs = _arg;
    return *this;
  }
  Type & set__dynamic_property(
    const uint8_t & _arg)
  {
    this->dynamic_property = _arg;
    return *this;
  }
  Type & set__quality_valid(
    const bool & _arg)
  {
    this->quality_valid = _arg;
    return *this;
  }
  Type & set__meas_state(
    const uint8_t & _arg)
  {
    this->meas_state = _arg;
    return *this;
  }
  Type & set__prob_of_exist(
    const uint8_t & _arg)
  {
    this->prob_of_exist = _arg;
    return *this;
  }
  Type & set__extended_valid(
    const bool & _arg)
  {
    this->extended_valid = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__center_latitude(
    const double & _arg)
  {
    this->center_latitude = _arg;
    return *this;
  }
  Type & set__center_longitude(
    const double & _arg)
  {
    this->center_longitude = _arg;
    return *this;
  }
  Type & set__orientation_angle(
    const double & _arg)
  {
    this->orientation_angle = _arg;
    return *this;
  }
  Type & set__class_type(
    const uint8_t & _arg)
  {
    this->class_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RadarObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RadarObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RadarObject
    std::shared_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RadarObject
    std::shared_ptr<deva_perception_msgs::msg::RadarObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarObject_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->relative_velocity != other.relative_velocity) {
      return false;
    }
    if (this->relative_acceleration != other.relative_acceleration) {
      return false;
    }
    if (this->rcs != other.rcs) {
      return false;
    }
    if (this->dynamic_property != other.dynamic_property) {
      return false;
    }
    if (this->quality_valid != other.quality_valid) {
      return false;
    }
    if (this->meas_state != other.meas_state) {
      return false;
    }
    if (this->prob_of_exist != other.prob_of_exist) {
      return false;
    }
    if (this->extended_valid != other.extended_valid) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->center_latitude != other.center_latitude) {
      return false;
    }
    if (this->center_longitude != other.center_longitude) {
      return false;
    }
    if (this->orientation_angle != other.orientation_angle) {
      return false;
    }
    if (this->class_type != other.class_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarObject_

// alias to use template instance with default allocator
using RadarObject =
  deva_perception_msgs::msg::RadarObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_OBJECT__STRUCT_HPP_
