// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/RadarVehicleInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__RadarVehicleInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__RadarVehicleInfo __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RadarVehicleInfo_
{
  using Type = RadarVehicleInfo_<ContainerAllocator>;

  explicit RadarVehicleInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->position_x = 0.0;
      this->position_y = 0.0;
      this->rel_vel_x = 0.0;
      this->rel_vel_y = 0.0;
      this->abs_vel_x = 0.0;
      this->abs_vel_y = 0.0;
      this->rel_acc_x = 0.0;
      this->rel_acc_y = 0.0;
      this->abs_acc_x = 0.0;
      this->abs_acc_y = 0.0;
      this->speed = 0.0;
      this->yaw_rate = 0.0;
      this->radar_time = 0.0;
      this->vehicle_time = 0.0;
    }
  }

  explicit RadarVehicleInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0;
      this->position_x = 0.0;
      this->position_y = 0.0;
      this->rel_vel_x = 0.0;
      this->rel_vel_y = 0.0;
      this->abs_vel_x = 0.0;
      this->abs_vel_y = 0.0;
      this->rel_acc_x = 0.0;
      this->rel_acc_y = 0.0;
      this->abs_acc_x = 0.0;
      this->abs_acc_y = 0.0;
      this->speed = 0.0;
      this->yaw_rate = 0.0;
      this->radar_time = 0.0;
      this->vehicle_time = 0.0;
    }
  }

  // field types and members
  using _id_type =
    uint8_t;
  _id_type id;
  using _position_x_type =
    double;
  _position_x_type position_x;
  using _position_y_type =
    double;
  _position_y_type position_y;
  using _rel_vel_x_type =
    double;
  _rel_vel_x_type rel_vel_x;
  using _rel_vel_y_type =
    double;
  _rel_vel_y_type rel_vel_y;
  using _abs_vel_x_type =
    double;
  _abs_vel_x_type abs_vel_x;
  using _abs_vel_y_type =
    double;
  _abs_vel_y_type abs_vel_y;
  using _rel_acc_x_type =
    double;
  _rel_acc_x_type rel_acc_x;
  using _rel_acc_y_type =
    double;
  _rel_acc_y_type rel_acc_y;
  using _abs_acc_x_type =
    double;
  _abs_acc_x_type abs_acc_x;
  using _abs_acc_y_type =
    double;
  _abs_acc_y_type abs_acc_y;
  using _speed_type =
    double;
  _speed_type speed;
  using _yaw_rate_type =
    double;
  _yaw_rate_type yaw_rate;
  using _radar_time_type =
    double;
  _radar_time_type radar_time;
  using _vehicle_time_type =
    double;
  _vehicle_time_type vehicle_time;

  // setters for named parameter idiom
  Type & set__id(
    const uint8_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__position_x(
    const double & _arg)
  {
    this->position_x = _arg;
    return *this;
  }
  Type & set__position_y(
    const double & _arg)
  {
    this->position_y = _arg;
    return *this;
  }
  Type & set__rel_vel_x(
    const double & _arg)
  {
    this->rel_vel_x = _arg;
    return *this;
  }
  Type & set__rel_vel_y(
    const double & _arg)
  {
    this->rel_vel_y = _arg;
    return *this;
  }
  Type & set__abs_vel_x(
    const double & _arg)
  {
    this->abs_vel_x = _arg;
    return *this;
  }
  Type & set__abs_vel_y(
    const double & _arg)
  {
    this->abs_vel_y = _arg;
    return *this;
  }
  Type & set__rel_acc_x(
    const double & _arg)
  {
    this->rel_acc_x = _arg;
    return *this;
  }
  Type & set__rel_acc_y(
    const double & _arg)
  {
    this->rel_acc_y = _arg;
    return *this;
  }
  Type & set__abs_acc_x(
    const double & _arg)
  {
    this->abs_acc_x = _arg;
    return *this;
  }
  Type & set__abs_acc_y(
    const double & _arg)
  {
    this->abs_acc_y = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__yaw_rate(
    const double & _arg)
  {
    this->yaw_rate = _arg;
    return *this;
  }
  Type & set__radar_time(
    const double & _arg)
  {
    this->radar_time = _arg;
    return *this;
  }
  Type & set__vehicle_time(
    const double & _arg)
  {
    this->vehicle_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__RadarVehicleInfo
    std::shared_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__RadarVehicleInfo
    std::shared_ptr<deva_perception_msgs::msg::RadarVehicleInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RadarVehicleInfo_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->position_x != other.position_x) {
      return false;
    }
    if (this->position_y != other.position_y) {
      return false;
    }
    if (this->rel_vel_x != other.rel_vel_x) {
      return false;
    }
    if (this->rel_vel_y != other.rel_vel_y) {
      return false;
    }
    if (this->abs_vel_x != other.abs_vel_x) {
      return false;
    }
    if (this->abs_vel_y != other.abs_vel_y) {
      return false;
    }
    if (this->rel_acc_x != other.rel_acc_x) {
      return false;
    }
    if (this->rel_acc_y != other.rel_acc_y) {
      return false;
    }
    if (this->abs_acc_x != other.abs_acc_x) {
      return false;
    }
    if (this->abs_acc_y != other.abs_acc_y) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->yaw_rate != other.yaw_rate) {
      return false;
    }
    if (this->radar_time != other.radar_time) {
      return false;
    }
    if (this->vehicle_time != other.vehicle_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const RadarVehicleInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RadarVehicleInfo_

// alias to use template instance with default allocator
using RadarVehicleInfo =
  deva_perception_msgs::msg::RadarVehicleInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RADAR_VEHICLE_INFO__STRUCT_HPP_
