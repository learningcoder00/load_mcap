// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_localization_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
// Member 'linear_velocity'
// Member 'linear_acceleration'
// Member 'angular_velocity'
// Member 'linear_acceleration_vrf'
// Member 'angular_velocity_vrf'
// Member 'euler_angles'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_localization_msgs__msg__Pose __attribute__((deprecated))
#else
# define DEPRECATED__deva_localization_msgs__msg__Pose __declspec(deprecated)
#endif

namespace deva_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Pose_
{
  using Type = Pose_<ContainerAllocator>;

  explicit Pose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init),
    linear_velocity(_init),
    linear_acceleration(_init),
    angular_velocity(_init),
    linear_acceleration_vrf(_init),
    angular_velocity_vrf(_init),
    euler_angles(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->utm_id = 0l;
      this->heading = 0.0;
    }
  }

  explicit Pose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    orientation(_alloc, _init),
    linear_velocity(_alloc, _init),
    linear_acceleration(_alloc, _init),
    angular_velocity(_alloc, _init),
    linear_acceleration_vrf(_alloc, _init),
    angular_velocity_vrf(_alloc, _init),
    euler_angles(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->utm_id = 0l;
      this->heading = 0.0;
    }
  }

  // field types and members
  using _utm_id_type =
    int32_t;
  _utm_id_type utm_id;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _linear_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _linear_velocity_type linear_velocity;
  using _linear_acceleration_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _linear_acceleration_type linear_acceleration;
  using _angular_velocity_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _angular_velocity_type angular_velocity;
  using _heading_type =
    double;
  _heading_type heading;
  using _linear_acceleration_vrf_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _linear_acceleration_vrf_type linear_acceleration_vrf;
  using _angular_velocity_vrf_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _angular_velocity_vrf_type angular_velocity_vrf;
  using _euler_angles_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _euler_angles_type euler_angles;

  // setters for named parameter idiom
  Type & set__utm_id(
    const int32_t & _arg)
  {
    this->utm_id = _arg;
    return *this;
  }
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__linear_velocity(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->linear_velocity = _arg;
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
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__linear_acceleration_vrf(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->linear_acceleration_vrf = _arg;
    return *this;
  }
  Type & set__angular_velocity_vrf(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->angular_velocity_vrf = _arg;
    return *this;
  }
  Type & set__euler_angles(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->euler_angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_localization_msgs::msg::Pose_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_localization_msgs::msg::Pose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::Pose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::Pose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_localization_msgs__msg__Pose
    std::shared_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_localization_msgs__msg__Pose
    std::shared_ptr<deva_localization_msgs::msg::Pose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Pose_ & other) const
  {
    if (this->utm_id != other.utm_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->linear_velocity != other.linear_velocity) {
      return false;
    }
    if (this->linear_acceleration != other.linear_acceleration) {
      return false;
    }
    if (this->angular_velocity != other.angular_velocity) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->linear_acceleration_vrf != other.linear_acceleration_vrf) {
      return false;
    }
    if (this->angular_velocity_vrf != other.angular_velocity_vrf) {
      return false;
    }
    if (this->euler_angles != other.euler_angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const Pose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Pose_

// alias to use template instance with default allocator
using Pose =
  deva_localization_msgs::msg::Pose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__POSE__STRUCT_HPP_
