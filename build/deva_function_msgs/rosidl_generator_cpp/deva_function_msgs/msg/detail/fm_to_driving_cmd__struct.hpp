// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_function_msgs:msg/FMToDrivingCmd.idl
// generated code does not contain a copyright notice

#ifndef DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__STRUCT_HPP_
#define DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__STRUCT_HPP_

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
# define DEPRECATED__deva_function_msgs__msg__FMToDrivingCmd __attribute__((deprecated))
#else
# define DEPRECATED__deva_function_msgs__msg__FMToDrivingCmd __declspec(deprecated)
#endif

namespace deva_function_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FMToDrivingCmd_
{
  using Type = FMToDrivingCmd_<ContainerAllocator>;

  explicit FMToDrivingCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err_num = 0;
      std::fill<typename std::array<uint8_t, 1000>::iterator, uint8_t>(this->dilg_data.begin(), this->dilg_data.end(), 0);
    }
  }

  explicit FMToDrivingCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    dilg_data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->err_num = 0;
      std::fill<typename std::array<uint8_t, 1000>::iterator, uint8_t>(this->dilg_data.begin(), this->dilg_data.end(), 0);
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _err_num_type =
    uint16_t;
  _err_num_type err_num;
  using _dilg_data_type =
    std::array<uint8_t, 1000>;
  _dilg_data_type dilg_data;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__err_num(
    const uint16_t & _arg)
  {
    this->err_num = _arg;
    return *this;
  }
  Type & set__dilg_data(
    const std::array<uint8_t, 1000> & _arg)
  {
    this->dilg_data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_function_msgs__msg__FMToDrivingCmd
    std::shared_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_function_msgs__msg__FMToDrivingCmd
    std::shared_ptr<deva_function_msgs::msg::FMToDrivingCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FMToDrivingCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->err_num != other.err_num) {
      return false;
    }
    if (this->dilg_data != other.dilg_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const FMToDrivingCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FMToDrivingCmd_

// alias to use template instance with default allocator
using FMToDrivingCmd =
  deva_function_msgs::msg::FMToDrivingCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_function_msgs

#endif  // DEVA_FUNCTION_MSGS__MSG__DETAIL__FM_TO_DRIVING_CMD__STRUCT_HPP_
