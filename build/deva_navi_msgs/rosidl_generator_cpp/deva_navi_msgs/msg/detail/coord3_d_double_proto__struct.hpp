// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/Coord3DDoubleProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__Coord3DDoubleProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__Coord3DDoubleProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Coord3DDoubleProto_
{
  using Type = Coord3DDoubleProto_<ContainerAllocator>;

  explicit Coord3DDoubleProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lon = 0.0;
      this->lat = 0.0;
      this->z = 0.0;
    }
  }

  explicit Coord3DDoubleProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lon = 0.0;
      this->lat = 0.0;
      this->z = 0.0;
    }
  }

  // field types and members
  using _lon_type =
    double;
  _lon_type lon;
  using _lat_type =
    double;
  _lat_type lat;
  using _z_type =
    double;
  _z_type z;

  // setters for named parameter idiom
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__Coord3DDoubleProto
    std::shared_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__Coord3DDoubleProto
    std::shared_ptr<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coord3DDoubleProto_ & other) const
  {
    if (this->lon != other.lon) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    return true;
  }
  bool operator!=(const Coord3DDoubleProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coord3DDoubleProto_

// alias to use template instance with default allocator
using Coord3DDoubleProto =
  deva_navi_msgs::msg::Coord3DDoubleProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__COORD3_D_DOUBLE_PROTO__STRUCT_HPP_
