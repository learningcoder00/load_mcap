// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/FreespacePoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__FreespacePoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__FreespacePoint __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FreespacePoint_
{
  using Type = FreespacePoint_<ContainerAllocator>;

  explicit FreespacePoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rfu_x = 0.0;
      this->rfu_y = 0.0;
      this->rfu_z = 0.0;
      this->azim = 0.0;
      this->range = 0.0;
      this->class_type = 0;
      this->ins_id = 0ul;
      this->visible = 0;
    }
  }

  explicit FreespacePoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->rfu_x = 0.0;
      this->rfu_y = 0.0;
      this->rfu_z = 0.0;
      this->azim = 0.0;
      this->range = 0.0;
      this->class_type = 0;
      this->ins_id = 0ul;
      this->visible = 0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _rfu_x_type =
    double;
  _rfu_x_type rfu_x;
  using _rfu_y_type =
    double;
  _rfu_y_type rfu_y;
  using _rfu_z_type =
    double;
  _rfu_z_type rfu_z;
  using _azim_type =
    double;
  _azim_type azim;
  using _range_type =
    double;
  _range_type range;
  using _class_type_type =
    uint8_t;
  _class_type_type class_type;
  using _ins_id_type =
    uint32_t;
  _ins_id_type ins_id;
  using _visible_type =
    uint8_t;
  _visible_type visible;

  // setters for named parameter idiom
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
  Type & set__rfu_x(
    const double & _arg)
  {
    this->rfu_x = _arg;
    return *this;
  }
  Type & set__rfu_y(
    const double & _arg)
  {
    this->rfu_y = _arg;
    return *this;
  }
  Type & set__rfu_z(
    const double & _arg)
  {
    this->rfu_z = _arg;
    return *this;
  }
  Type & set__azim(
    const double & _arg)
  {
    this->azim = _arg;
    return *this;
  }
  Type & set__range(
    const double & _arg)
  {
    this->range = _arg;
    return *this;
  }
  Type & set__class_type(
    const uint8_t & _arg)
  {
    this->class_type = _arg;
    return *this;
  }
  Type & set__ins_id(
    const uint32_t & _arg)
  {
    this->ins_id = _arg;
    return *this;
  }
  Type & set__visible(
    const uint8_t & _arg)
  {
    this->visible = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__FreespacePoint
    std::shared_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__FreespacePoint
    std::shared_ptr<deva_perception_msgs::msg::FreespacePoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FreespacePoint_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->rfu_x != other.rfu_x) {
      return false;
    }
    if (this->rfu_y != other.rfu_y) {
      return false;
    }
    if (this->rfu_z != other.rfu_z) {
      return false;
    }
    if (this->azim != other.azim) {
      return false;
    }
    if (this->range != other.range) {
      return false;
    }
    if (this->class_type != other.class_type) {
      return false;
    }
    if (this->ins_id != other.ins_id) {
      return false;
    }
    if (this->visible != other.visible) {
      return false;
    }
    return true;
  }
  bool operator!=(const FreespacePoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FreespacePoint_

// alias to use template instance with default allocator
using FreespacePoint =
  deva_perception_msgs::msg::FreespacePoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__FREESPACE_POINT__STRUCT_HPP_
