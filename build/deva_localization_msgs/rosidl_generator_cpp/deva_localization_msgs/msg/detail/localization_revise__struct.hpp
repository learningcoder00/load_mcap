// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_localization_msgs:msg/LocalizationRevise.idl
// generated code does not contain a copyright notice

#ifndef DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__STRUCT_HPP_
#define DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__STRUCT_HPP_

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
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_localization_msgs__msg__LocalizationRevise __attribute__((deprecated))
#else
# define DEPRECATED__deva_localization_msgs__msg__LocalizationRevise __declspec(deprecated)
#endif

namespace deva_localization_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalizationRevise_
{
  using Type = LocalizationRevise_<ContainerAllocator>;

  explicit LocalizationRevise_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    position(_init),
    orientation(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_message = 0l;
    }
  }

  explicit LocalizationRevise_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    position(_alloc, _init),
    orientation(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->state_message = 0l;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;
  using _state_message_type =
    int32_t;
  _state_message_type state_message;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
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
  Type & set__state_message(
    const int32_t & _arg)
  {
    this->state_message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_localization_msgs__msg__LocalizationRevise
    std::shared_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_localization_msgs__msg__LocalizationRevise
    std::shared_ptr<deva_localization_msgs::msg::LocalizationRevise_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizationRevise_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->state_message != other.state_message) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizationRevise_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizationRevise_

// alias to use template instance with default allocator
using LocalizationRevise =
  deva_localization_msgs::msg::LocalizationRevise_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_localization_msgs

#endif  // DEVA_LOCALIZATION_MSGS__MSG__DETAIL__LOCALIZATION_REVISE__STRUCT_HPP_
