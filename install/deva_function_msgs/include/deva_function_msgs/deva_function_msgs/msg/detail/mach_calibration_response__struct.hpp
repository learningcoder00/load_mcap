// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/MachCalibrationResponse.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_function_msgs__msg__MachCalibrationResponse __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__MachCalibrationResponse __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MachCalibrationResponse_
{
  using Type = MachCalibrationResponse_<ContainerAllocator>;

  explicit MachCalibrationResponse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration_response = "";
      this->calibration_reason = "";
      this->calibration_type = 0;
      this->sensor_type = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 256>::iterator, uint8_t>(this->res_content.begin(), this->res_content.end(), 0);
    }
  }

  explicit MachCalibrationResponse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    calibration_response(_alloc),
    calibration_reason(_alloc),
    res_content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->calibration_response = "";
      this->calibration_reason = "";
      this->calibration_type = 0;
      this->sensor_type = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 256>::iterator, uint8_t>(this->res_content.begin(), this->res_content.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _calibration_response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _calibration_response_type calibration_response;
  using _calibration_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _calibration_reason_type calibration_reason;
  using _calibration_type_type =
    uint8_t;
  _calibration_type_type calibration_type;
  using _sensor_type_type =
    uint8_t;
  _sensor_type_type sensor_type;
  using _length_type =
    uint8_t;
  _length_type length;
  using _res_content_type =
    std::array<uint8_t, 256>;
  _res_content_type res_content;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__calibration_response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->calibration_response = _arg;
    return *this;
  }
  Type & set__calibration_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->calibration_reason = _arg;
    return *this;
  }
  Type & set__calibration_type(
    const uint8_t & _arg)
  {
    this->calibration_type = _arg;
    return *this;
  }
  Type & set__sensor_type(
    const uint8_t & _arg)
  {
    this->sensor_type = _arg;
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
    deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__MachCalibrationResponse
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__MachCalibrationResponse
    std::shared_ptr<deva_function_msgs::msg::MachCalibrationResponse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MachCalibrationResponse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->calibration_response != other.calibration_response) {
      return false;
    }
    if (this->calibration_reason != other.calibration_reason) {
      return false;
    }
    if (this->calibration_type != other.calibration_type) {
      return false;
    }
    if (this->sensor_type != other.sensor_type) {
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
  bool operator!=(const MachCalibrationResponse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MachCalibrationResponse_

// alias to use template instance with default allocator
using MachCalibrationResponse =
  deva_function_msgs::msg::MachCalibrationResponse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__MACH_CALIBRATION_RESPONSE__STRUCT_HPP_
