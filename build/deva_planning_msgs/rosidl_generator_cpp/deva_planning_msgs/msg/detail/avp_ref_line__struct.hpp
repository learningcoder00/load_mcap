// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs:msg/AvpRefLine.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE__STRUCT_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs__msg__AvpRefLine __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs__msg__AvpRefLine __declspec(deprecated)
#endif

namespace deva_planning_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpRefLine_
{
  using Type = AvpRefLine_<ContainerAllocator>;

  explicit AvpRefLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->heading = 0.0;
      this->left_boundary_x = 0.0;
      this->left_boundary_y = 0.0;
      this->left_boundary_z = 0.0;
      this->right_boundary_x = 0.0;
      this->right_boundary_y = 0.0;
      this->right_boundary_z = 0.0;
      this->left_boundary_n = 0.0;
      this->right_boundary_n = 0.0;
      this->is_junction = 0.0;
    }
  }

  explicit AvpRefLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->heading = 0.0;
      this->left_boundary_x = 0.0;
      this->left_boundary_y = 0.0;
      this->left_boundary_z = 0.0;
      this->right_boundary_x = 0.0;
      this->right_boundary_y = 0.0;
      this->right_boundary_z = 0.0;
      this->left_boundary_n = 0.0;
      this->right_boundary_n = 0.0;
      this->is_junction = 0.0;
    }
  }

  // field types and members
  using _s_type =
    double;
  _s_type s;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _heading_type =
    double;
  _heading_type heading;
  using _left_boundary_x_type =
    double;
  _left_boundary_x_type left_boundary_x;
  using _left_boundary_y_type =
    double;
  _left_boundary_y_type left_boundary_y;
  using _left_boundary_z_type =
    double;
  _left_boundary_z_type left_boundary_z;
  using _right_boundary_x_type =
    double;
  _right_boundary_x_type right_boundary_x;
  using _right_boundary_y_type =
    double;
  _right_boundary_y_type right_boundary_y;
  using _right_boundary_z_type =
    double;
  _right_boundary_z_type right_boundary_z;
  using _left_boundary_n_type =
    double;
  _left_boundary_n_type left_boundary_n;
  using _right_boundary_n_type =
    double;
  _right_boundary_n_type right_boundary_n;
  using _is_junction_type =
    double;
  _is_junction_type is_junction;

  // setters for named parameter idiom
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__heading(
    const double & _arg)
  {
    this->heading = _arg;
    return *this;
  }
  Type & set__left_boundary_x(
    const double & _arg)
  {
    this->left_boundary_x = _arg;
    return *this;
  }
  Type & set__left_boundary_y(
    const double & _arg)
  {
    this->left_boundary_y = _arg;
    return *this;
  }
  Type & set__left_boundary_z(
    const double & _arg)
  {
    this->left_boundary_z = _arg;
    return *this;
  }
  Type & set__right_boundary_x(
    const double & _arg)
  {
    this->right_boundary_x = _arg;
    return *this;
  }
  Type & set__right_boundary_y(
    const double & _arg)
  {
    this->right_boundary_y = _arg;
    return *this;
  }
  Type & set__right_boundary_z(
    const double & _arg)
  {
    this->right_boundary_z = _arg;
    return *this;
  }
  Type & set__left_boundary_n(
    const double & _arg)
  {
    this->left_boundary_n = _arg;
    return *this;
  }
  Type & set__right_boundary_n(
    const double & _arg)
  {
    this->right_boundary_n = _arg;
    return *this;
  }
  Type & set__is_junction(
    const double & _arg)
  {
    this->is_junction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs__msg__AvpRefLine
    std::shared_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs__msg__AvpRefLine
    std::shared_ptr<deva_planning_msgs::msg::AvpRefLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpRefLine_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->heading != other.heading) {
      return false;
    }
    if (this->left_boundary_x != other.left_boundary_x) {
      return false;
    }
    if (this->left_boundary_y != other.left_boundary_y) {
      return false;
    }
    if (this->left_boundary_z != other.left_boundary_z) {
      return false;
    }
    if (this->right_boundary_x != other.right_boundary_x) {
      return false;
    }
    if (this->right_boundary_y != other.right_boundary_y) {
      return false;
    }
    if (this->right_boundary_z != other.right_boundary_z) {
      return false;
    }
    if (this->left_boundary_n != other.left_boundary_n) {
      return false;
    }
    if (this->right_boundary_n != other.right_boundary_n) {
      return false;
    }
    if (this->is_junction != other.is_junction) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpRefLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpRefLine_

// alias to use template instance with default allocator
using AvpRefLine =
  deva_planning_msgs::msg::AvpRefLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE__STRUCT_HPP_
