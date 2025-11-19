// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_planning_msgs2:msg/AvpRefLineTreePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__STRUCT_HPP_
#define DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePoint __declspec(deprecated)
#endif

namespace deva_planning_msgs2
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AvpRefLineTreePoint_
{
  using Type = AvpRefLineTreePoint_<ContainerAllocator>;

  explicit AvpRefLineTreePoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0l;
      this->directory = 0l;
      this->center_n = 0.0;
      this->center_point_x = 0.0;
      this->center_point_y = 0.0;
      this->center_point_z = 0.0;
      this->left_n = 0.0;
      this->right_n = 0.0;
      this->left_x = 0.0;
      this->left_y = 0.0;
      this->left_z = 0.0;
      this->right_x = 0.0;
      this->right_y = 0.0;
      this->right_z = 0.0;
    }
  }

  explicit AvpRefLineTreePoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->idx = 0l;
      this->directory = 0l;
      this->center_n = 0.0;
      this->center_point_x = 0.0;
      this->center_point_y = 0.0;
      this->center_point_z = 0.0;
      this->left_n = 0.0;
      this->right_n = 0.0;
      this->left_x = 0.0;
      this->left_y = 0.0;
      this->left_z = 0.0;
      this->right_x = 0.0;
      this->right_y = 0.0;
      this->right_z = 0.0;
    }
  }

  // field types and members
  using _idx_type =
    int32_t;
  _idx_type idx;
  using _directory_type =
    int32_t;
  _directory_type directory;
  using _center_n_type =
    double;
  _center_n_type center_n;
  using _center_point_x_type =
    double;
  _center_point_x_type center_point_x;
  using _center_point_y_type =
    double;
  _center_point_y_type center_point_y;
  using _center_point_z_type =
    double;
  _center_point_z_type center_point_z;
  using _left_n_type =
    double;
  _left_n_type left_n;
  using _right_n_type =
    double;
  _right_n_type right_n;
  using _left_x_type =
    double;
  _left_x_type left_x;
  using _left_y_type =
    double;
  _left_y_type left_y;
  using _left_z_type =
    double;
  _left_z_type left_z;
  using _right_x_type =
    double;
  _right_x_type right_x;
  using _right_y_type =
    double;
  _right_y_type right_y;
  using _right_z_type =
    double;
  _right_z_type right_z;

  // setters for named parameter idiom
  Type & set__idx(
    const int32_t & _arg)
  {
    this->idx = _arg;
    return *this;
  }
  Type & set__directory(
    const int32_t & _arg)
  {
    this->directory = _arg;
    return *this;
  }
  Type & set__center_n(
    const double & _arg)
  {
    this->center_n = _arg;
    return *this;
  }
  Type & set__center_point_x(
    const double & _arg)
  {
    this->center_point_x = _arg;
    return *this;
  }
  Type & set__center_point_y(
    const double & _arg)
  {
    this->center_point_y = _arg;
    return *this;
  }
  Type & set__center_point_z(
    const double & _arg)
  {
    this->center_point_z = _arg;
    return *this;
  }
  Type & set__left_n(
    const double & _arg)
  {
    this->left_n = _arg;
    return *this;
  }
  Type & set__right_n(
    const double & _arg)
  {
    this->right_n = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePoint
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_planning_msgs2__msg__AvpRefLineTreePoint
    std::shared_ptr<deva_planning_msgs2::msg::AvpRefLineTreePoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AvpRefLineTreePoint_ & other) const
  {
    if (this->idx != other.idx) {
      return false;
    }
    if (this->directory != other.directory) {
      return false;
    }
    if (this->center_n != other.center_n) {
      return false;
    }
    if (this->center_point_x != other.center_point_x) {
      return false;
    }
    if (this->center_point_y != other.center_point_y) {
      return false;
    }
    if (this->center_point_z != other.center_point_z) {
      return false;
    }
    if (this->left_n != other.left_n) {
      return false;
    }
    if (this->right_n != other.right_n) {
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
    if (this->right_x != other.right_x) {
      return false;
    }
    if (this->right_y != other.right_y) {
      return false;
    }
    if (this->right_z != other.right_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const AvpRefLineTreePoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AvpRefLineTreePoint_

// alias to use template instance with default allocator
using AvpRefLineTreePoint =
  deva_planning_msgs2::msg::AvpRefLineTreePoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_planning_msgs2

#endif  // DEVA_PLANNING_MSGS2__MSG__DETAIL__AVP_REF_LINE_TREE_POINT__STRUCT_HPP_
