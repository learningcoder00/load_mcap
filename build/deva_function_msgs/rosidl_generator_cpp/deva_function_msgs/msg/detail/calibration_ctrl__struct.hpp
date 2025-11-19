// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/CalibrationCtrl.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__CalibrationCtrl __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__CalibrationCtrl __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CalibrationCtrl_
{
  using Type = CalibrationCtrl_<ContainerAllocator>;

  explicit CalibrationCtrl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration_action = 0ul;
      this->calibration_type = 0ul;
    }
  }

  explicit CalibrationCtrl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration_action = 0ul;
      this->calibration_type = 0ul;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _calibration_action_type =
    uint32_t;
  _calibration_action_type calibration_action;
  using _calibration_type_type =
    uint32_t;
  _calibration_type_type calibration_type;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__calibration_action(
    const uint32_t & _arg)
  {
    this->calibration_action = _arg;
    return *this;
  }
  Type & set__calibration_type(
    const uint32_t & _arg)
  {
    this->calibration_type = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__CalibrationCtrl
    std::shared_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__CalibrationCtrl
    std::shared_ptr<deva_function_msgs::msg::CalibrationCtrl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CalibrationCtrl_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->calibration_action != other.calibration_action) {
      return false;
    }
    if (this->calibration_type != other.calibration_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const CalibrationCtrl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CalibrationCtrl_

// alias to use template instance with default allocator
using CalibrationCtrl =
  deva_function_msgs::msg::CalibrationCtrl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__CALIBRATION_CTRL__STRUCT_HPP_
