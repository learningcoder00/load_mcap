// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_control_msgs:msg/VehicleLimitValue.idl
// generated code does not contain a copyright notice

#ifndef DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__STRUCT_HPP_
#define DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_control_msgs__msg__VehicleLimitValue __attribute__((deprecated))
#else
# define DEPRECATED__deva_control_msgs__msg__VehicleLimitValue __declspec(deprecated)
#endif

namespace deva_control_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VehicleLimitValue_
{
  using Type = VehicleLimitValue_<ContainerAllocator>;

  explicit VehicleLimitValue_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value_type = "";
      this->value = 0.0;
    }
  }

  explicit VehicleLimitValue_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value_type = "";
      this->value = 0.0;
    }
  }

  // field types and members
  using _value_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type_type value_type;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__value_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value_type = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_control_msgs__msg__VehicleLimitValue
    std::shared_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_control_msgs__msg__VehicleLimitValue
    std::shared_ptr<deva_control_msgs::msg::VehicleLimitValue_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VehicleLimitValue_ & other) const
  {
    if (this->value_type != other.value_type) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const VehicleLimitValue_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VehicleLimitValue_

// alias to use template instance with default allocator
using VehicleLimitValue =
  deva_control_msgs::msg::VehicleLimitValue_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_control_msgs

#endif  // DEVA_CONTROL_MSGS__MSG__DETAIL__VEHICLE_LIMIT_VALUE__STRUCT_HPP_
