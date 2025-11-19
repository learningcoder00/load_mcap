// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_localization_msgs:msg/Ins.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__STRUCT_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__STRUCT_HPP_

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
// Member 'localization'
// Member 'gcj_localization'
#include "deva_localization_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_localization_msgs__msg__Ins __attribute__((deprecated))
#else
# define DEPRECATED__deva_localization_msgs__msg__Ins __declspec(deprecated)
#endif

namespace deva_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ins_
{
  using Type = Ins_<ContainerAllocator>;

  explicit Ins_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    localization(_init),
    gcj_localization(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ins_status = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->height = 0.0;
      this->gcj_lat = 0.0;
      this->gcj_lon = 0.0;
      this->true_north_heading = 0.0;
    }
  }

  explicit Ins_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    ins_status(_alloc),
    localization(_alloc, _init),
    gcj_localization(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ins_status = "";
      this->lat = 0.0;
      this->lon = 0.0;
      this->height = 0.0;
      this->gcj_lat = 0.0;
      this->gcj_lon = 0.0;
      this->true_north_heading = 0.0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ins_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ins_status_type ins_status;
  using _lat_type =
    double;
  _lat_type lat;
  using _lon_type =
    double;
  _lon_type lon;
  using _height_type =
    double;
  _height_type height;
  using _localization_type =
    deva_localization_msgs::msg::Pose_<ContainerAllocator>;
  _localization_type localization;
  using _gcj_lat_type =
    double;
  _gcj_lat_type gcj_lat;
  using _gcj_lon_type =
    double;
  _gcj_lon_type gcj_lon;
  using _gcj_localization_type =
    deva_localization_msgs::msg::Pose_<ContainerAllocator>;
  _gcj_localization_type gcj_localization;
  using _true_north_heading_type =
    double;
  _true_north_heading_type true_north_heading;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ins_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ins_status = _arg;
    return *this;
  }
  Type & set__lat(
    const double & _arg)
  {
    this->lat = _arg;
    return *this;
  }
  Type & set__lon(
    const double & _arg)
  {
    this->lon = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__localization(
    const deva_localization_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->localization = _arg;
    return *this;
  }
  Type & set__gcj_lat(
    const double & _arg)
  {
    this->gcj_lat = _arg;
    return *this;
  }
  Type & set__gcj_lon(
    const double & _arg)
  {
    this->gcj_lon = _arg;
    return *this;
  }
  Type & set__gcj_localization(
    const deva_localization_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->gcj_localization = _arg;
    return *this;
  }
  Type & set__true_north_heading(
    const double & _arg)
  {
    this->true_north_heading = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_localization_msgs::msg::Ins_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_localization_msgs::msg::Ins_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::Ins_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::Ins_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_localization_msgs__msg__Ins
    std::shared_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_localization_msgs__msg__Ins
    std::shared_ptr<deva_localization_msgs::msg::Ins_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ins_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ins_status != other.ins_status) {
      return false;
    }
    if (this->lat != other.lat) {
      return false;
    }
    if (this->lon != other.lon) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->localization != other.localization) {
      return false;
    }
    if (this->gcj_lat != other.gcj_lat) {
      return false;
    }
    if (this->gcj_lon != other.gcj_lon) {
      return false;
    }
    if (this->gcj_localization != other.gcj_localization) {
      return false;
    }
    if (this->true_north_heading != other.true_north_heading) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ins_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ins_

// alias to use template instance with default allocator
using Ins =
  deva_localization_msgs::msg::Ins_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__INS__STRUCT_HPP_
