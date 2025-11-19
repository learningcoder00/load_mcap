// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/MachCalibrationResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__MachCalibrationResult __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__MachCalibrationResult __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachCalibrationResult_
{
  using Type = MachCalibrationResult_<ContainerAllocator>;

  explicit MachCalibrationResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration_type = 0;
      this->senor_type = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 256>::iterator, uint8_t>(this->res_content.begin(), this->res_content.end(), 0);
    }
  }

  explicit MachCalibrationResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    res_content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration_type = 0;
      this->senor_type = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 256>::iterator, uint8_t>(this->res_content.begin(), this->res_content.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _calibration_type_type =
    uint8_t;
  _calibration_type_type calibration_type;
  using _senor_type_type =
    uint8_t;
  _senor_type_type senor_type;
  using _length_type =
    uint8_t;
  _length_type length;
  using _res_content_type =
    std::array<uint8_t, 256>;
  _res_content_type res_content;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__calibration_type(
    const uint8_t & _arg)
  {
    this->calibration_type = _arg;
    return *this;
  }
  Type & set__senor_type(
    const uint8_t & _arg)
  {
    this->senor_type = _arg;
    return *this;
  }
  Type & set__length(
    const uint8_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__res_content(
    const std::array<uint8_t, 256> & _arg)
  {
    this->res_content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__MachCalibrationResult
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__MachCalibrationResult
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachCalibrationResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->calibration_type != other.calibration_type) {
      return false;
    }
    if (this->senor_type != other.senor_type) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->res_content != other.res_content) {
      return false;
    }
    return true;
  }
  bool operator!=(const MachCalibrationResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachCalibrationResult_

// alias to use template instance with default allocator
using MachCalibrationResult =
  deva_function_msgs::msg::MachCalibrationResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESULT__STRUCT_HPP_
