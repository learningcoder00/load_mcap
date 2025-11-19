// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvSignal.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'polygen'
// Member 'virtual_brake_point'
#include "environment_model_msgs/msg/detail/vec3d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvSignal __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvSignal __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvSignal_
{
  using Type = EnvSignal_<ContainerAllocator>;

  explicit EnvSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enum_color = 0;
      this->remain_time = 0.0;
      this->id = "";
      this->enum_shape_type = 0;
      this->blink = false;
      this->block = 0;
    }
  }

  explicit EnvSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->enum_color = 0;
      this->remain_time = 0.0;
      this->id = "";
      this->enum_shape_type = 0;
      this->blink = false;
      this->block = 0;
    }
  }

  // field types and members
  using _enum_color_type =
    uint8_t;
  _enum_color_type enum_color;
  using _remain_time_type =
    double;
  _remain_time_type remain_time;
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _id_type id;
  using _enum_shape_type_type =
    uint8_t;
  _enum_shape_type_type enum_shape_type;
  using _polygen_type =
    std::vector<environment_model_msgs::msg::Vec3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec3d_<ContainerAllocator>>>;
  _polygen_type polygen;
  using _virtual_brake_point_type =
    std::vector<environment_model_msgs::msg::Vec3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec3d_<ContainerAllocator>>>;
  _virtual_brake_point_type virtual_brake_point;
  using _blink_type =
    bool;
  _blink_type blink;
  using _block_type =
    uint8_t;
  _block_type block;

  // setters for named parameter idiom
  Type & set__enum_color(
    const uint8_t & _arg)
  {
    this->enum_color = _arg;
    return *this;
  }
  Type & set__remain_time(
    const double & _arg)
  {
    this->remain_time = _arg;
    return *this;
  }
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__enum_shape_type(
    const uint8_t & _arg)
  {
    this->enum_shape_type = _arg;
    return *this;
  }
  Type & set__polygen(
    const std::vector<environment_model_msgs::msg::Vec3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec3d_<ContainerAllocator>>> & _arg)
  {
    this->polygen = _arg;
    return *this;
  }
  Type & set__virtual_brake_point(
    const std::vector<environment_model_msgs::msg::Vec3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec3d_<ContainerAllocator>>> & _arg)
  {
    this->virtual_brake_point = _arg;
    return *this;
  }
  Type & set__blink(
    const bool & _arg)
  {
    this->blink = _arg;
    return *this;
  }
  Type & set__block(
    const uint8_t & _arg)
  {
    this->block = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvSignal
    std::shared_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvSignal
    std::shared_ptr<environment_model_msgs::msg::EnvSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvSignal_ & other) const
  {
    if (this->enum_color != other.enum_color) {
      return false;
    }
    if (this->remain_time != other.remain_time) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->enum_shape_type != other.enum_shape_type) {
      return false;
    }
    if (this->polygen != other.polygen) {
      return false;
    }
    if (this->virtual_brake_point != other.virtual_brake_point) {
      return false;
    }
    if (this->blink != other.blink) {
      return false;
    }
    if (this->block != other.block) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvSignal_

// alias to use template instance with default allocator
using EnvSignal =
  environment_model_msgs::msg::EnvSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_SIGNAL__STRUCT_HPP_
