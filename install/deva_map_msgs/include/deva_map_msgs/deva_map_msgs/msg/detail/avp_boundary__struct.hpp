// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/AvpBoundary.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__AvpBoundary __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__AvpBoundary __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpBoundary_
{
  using Type = AvpBoundary_<ContainerAllocator>;

  explicit AvpBoundary_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->left_x = 0.0;
      this->left_y = 0.0;
      this->left_z = 0.0;
      this->left_region_width = 0.0;
      this->right_x = 0.0;
      this->right_y = 0.0;
      this->right_z = 0.0;
      this->right_region_width = 0.0;
    }
  }

  explicit AvpBoundary_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->s = 0.0;
      this->left_x = 0.0;
      this->left_y = 0.0;
      this->left_z = 0.0;
      this->left_region_width = 0.0;
      this->right_x = 0.0;
      this->right_y = 0.0;
      this->right_z = 0.0;
      this->right_region_width = 0.0;
    }
  }

  // field types and members
  using _s_type =
    double;
  _s_type s;
  using _left_x_type =
    double;
  _left_x_type left_x;
  using _left_y_type =
    double;
  _left_y_type left_y;
  using _left_z_type =
    double;
  _left_z_type left_z;
  using _left_region_width_type =
    double;
  _left_region_width_type left_region_width;
  using _right_x_type =
    double;
  _right_x_type right_x;
  using _right_y_type =
    double;
  _right_y_type right_y;
  using _right_z_type =
    double;
  _right_z_type right_z;
  using _right_region_width_type =
    double;
  _right_region_width_type right_region_width;

  // setters for named parameter idiom
  Type & set__s(
    const double & _arg)
  {
    this->s = _arg;
    return *this;
  }
  Type & set__left_x(
    const double & _arg)
  {
    this->left_x = _arg;
    return *this;
  }
  Type & set__left_y(
    const double & _arg)
  {
    this->left_y = _arg;
    return *this;
  }
  Type & set__left_z(
    const double & _arg)
  {
    this->left_z = _arg;
    return *this;
  }
  Type & set__left_region_width(
    const double & _arg)
  {
    this->left_region_width = _arg;
    return *this;
  }
  Type & set__right_x(
    const double & _arg)
  {
    this->right_x = _arg;
    return *this;
  }
  Type & set__right_y(
    const double & _arg)
  {
    this->right_y = _arg;
    return *this;
  }
  Type & set__right_z(
    const double & _arg)
  {
    this->right_z = _arg;
    return *this;
  }
  Type & set__right_region_width(
    const double & _arg)
  {
    this->right_region_width = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::AvpBoundary_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::AvpBoundary_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__AvpBoundary
    std::shared_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__AvpBoundary
    std::shared_ptr<deva_map_msgs::msg::AvpBoundary_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpBoundary_ & other) const
  {
    if (this->s != other.s) {
      return false;
    }
    if (this->left_x != other.left_x) {
      return false;
    }
    if (this->left_y != other.left_y) {
      return false;
    }
    if (this->left_z != other.left_z) {
      return false;
    }
    if (this->left_region_width != other.left_region_width) {
      return false;
    }
    if (this->right_x != other.right_x) {
      return false;
    }
    if (this->right_y != other.right_y) {
      return false;
    }
    if (this->right_z != other.right_z) {
      return false;
    }
    if (this->right_region_width != other.right_region_width) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpBoundary_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpBoundary_

// alias to use template instance with default allocator
using AvpBoundary =
  deva_map_msgs::msg::AvpBoundary_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__AVP_BOUNDARY__STRUCT_HPP_
