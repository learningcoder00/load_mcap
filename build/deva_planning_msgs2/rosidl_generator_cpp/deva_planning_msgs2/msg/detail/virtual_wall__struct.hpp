// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/VirtualWall.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__VirtualWall __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__VirtualWall __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualWall_
{
  using Type = VirtualWall_<ContainerAllocator>;

  explicit VirtualWall_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->x_center = 0.0;
      this->y_center = 0.0;
      this->z_center = 0.0;
      this->theta = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->length = 0.0;
    }
  }

  explicit VirtualWall_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->x_center = 0.0;
      this->y_center = 0.0;
      this->z_center = 0.0;
      this->theta = 0.0;
      this->width = 0.0;
      this->height = 0.0;
      this->length = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _x_center_type =
    double;
  _x_center_type x_center;
  using _y_center_type =
    double;
  _y_center_type y_center;
  using _z_center_type =
    double;
  _z_center_type z_center;
  using _theta_type =
    double;
  _theta_type theta;
  using _width_type =
    double;
  _width_type width;
  using _height_type =
    double;
  _height_type height;
  using _length_type =
    double;
  _length_type length;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__x_center(
    const double & _arg)
  {
    this->x_center = _arg;
    return *this;
  }
  Type & set__y_center(
    const double & _arg)
  {
    this->y_center = _arg;
    return *this;
  }
  Type & set__z_center(
    const double & _arg)
  {
    this->z_center = _arg;
    return *this;
  }
  Type & set__theta(
    const double & _arg)
  {
    this->theta = _arg;
    return *this;
  }
  Type & set__width(
    const double & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const double & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__VirtualWall
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__VirtualWall
    std::shared_ptr<deva_planning_msgs2::msg::VirtualWall_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualWall_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->x_center != other.x_center) {
      return false;
    }
    if (this->y_center != other.y_center) {
      return false;
    }
    if (this->z_center != other.z_center) {
      return false;
    }
    if (this->theta != other.theta) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualWall_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualWall_

// alias to use template instance with default allocator
using VirtualWall =
  deva_planning_msgs2::msg::VirtualWall_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__VIRTUAL_WALL__STRUCT_HPP_
