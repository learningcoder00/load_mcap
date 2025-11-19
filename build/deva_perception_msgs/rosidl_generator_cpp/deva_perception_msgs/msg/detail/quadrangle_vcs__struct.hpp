// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/QuadrangleVcs.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__QuadrangleVcs __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__QuadrangleVcs __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadrangleVcs_
{
  using Type = QuadrangleVcs_<ContainerAllocator>;

  explicit QuadrangleVcs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leftuppointx = 0.0f;
      this->leftuppointy = 0.0f;
      this->leftuppointz = 0.0f;
      this->rightuppointx = 0.0f;
      this->rightuppointy = 0.0f;
      this->rightuppointz = 0.0f;
      this->rightdownpointx = 0.0f;
      this->rightdownpointy = 0.0f;
      this->rightdownpointz = 0.0f;
      this->leftdownpointx = 0.0f;
      this->leftdownpointy = 0.0f;
      this->leftdownpointz = 0.0f;
    }
  }

  explicit QuadrangleVcs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leftuppointx = 0.0f;
      this->leftuppointy = 0.0f;
      this->leftuppointz = 0.0f;
      this->rightuppointx = 0.0f;
      this->rightuppointy = 0.0f;
      this->rightuppointz = 0.0f;
      this->rightdownpointx = 0.0f;
      this->rightdownpointy = 0.0f;
      this->rightdownpointz = 0.0f;
      this->leftdownpointx = 0.0f;
      this->leftdownpointy = 0.0f;
      this->leftdownpointz = 0.0f;
    }
  }

  // field types and members
  using _leftuppointx_type =
    float;
  _leftuppointx_type leftuppointx;
  using _leftuppointy_type =
    float;
  _leftuppointy_type leftuppointy;
  using _leftuppointz_type =
    float;
  _leftuppointz_type leftuppointz;
  using _rightuppointx_type =
    float;
  _rightuppointx_type rightuppointx;
  using _rightuppointy_type =
    float;
  _rightuppointy_type rightuppointy;
  using _rightuppointz_type =
    float;
  _rightuppointz_type rightuppointz;
  using _rightdownpointx_type =
    float;
  _rightdownpointx_type rightdownpointx;
  using _rightdownpointy_type =
    float;
  _rightdownpointy_type rightdownpointy;
  using _rightdownpointz_type =
    float;
  _rightdownpointz_type rightdownpointz;
  using _leftdownpointx_type =
    float;
  _leftdownpointx_type leftdownpointx;
  using _leftdownpointy_type =
    float;
  _leftdownpointy_type leftdownpointy;
  using _leftdownpointz_type =
    float;
  _leftdownpointz_type leftdownpointz;

  // setters for named parameter idiom
  Type & set__leftuppointx(
    const float & _arg)
  {
    this->leftuppointx = _arg;
    return *this;
  }
  Type & set__leftuppointy(
    const float & _arg)
  {
    this->leftuppointy = _arg;
    return *this;
  }
  Type & set__leftuppointz(
    const float & _arg)
  {
    this->leftuppointz = _arg;
    return *this;
  }
  Type & set__rightuppointx(
    const float & _arg)
  {
    this->rightuppointx = _arg;
    return *this;
  }
  Type & set__rightuppointy(
    const float & _arg)
  {
    this->rightuppointy = _arg;
    return *this;
  }
  Type & set__rightuppointz(
    const float & _arg)
  {
    this->rightuppointz = _arg;
    return *this;
  }
  Type & set__rightdownpointx(
    const float & _arg)
  {
    this->rightdownpointx = _arg;
    return *this;
  }
  Type & set__rightdownpointy(
    const float & _arg)
  {
    this->rightdownpointy = _arg;
    return *this;
  }
  Type & set__rightdownpointz(
    const float & _arg)
  {
    this->rightdownpointz = _arg;
    return *this;
  }
  Type & set__leftdownpointx(
    const float & _arg)
  {
    this->leftdownpointx = _arg;
    return *this;
  }
  Type & set__leftdownpointy(
    const float & _arg)
  {
    this->leftdownpointy = _arg;
    return *this;
  }
  Type & set__leftdownpointz(
    const float & _arg)
  {
    this->leftdownpointz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__QuadrangleVcs
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__QuadrangleVcs
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleVcs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadrangleVcs_ & other) const
  {
    if (this->leftuppointx != other.leftuppointx) {
      return false;
    }
    if (this->leftuppointy != other.leftuppointy) {
      return false;
    }
    if (this->leftuppointz != other.leftuppointz) {
      return false;
    }
    if (this->rightuppointx != other.rightuppointx) {
      return false;
    }
    if (this->rightuppointy != other.rightuppointy) {
      return false;
    }
    if (this->rightuppointz != other.rightuppointz) {
      return false;
    }
    if (this->rightdownpointx != other.rightdownpointx) {
      return false;
    }
    if (this->rightdownpointy != other.rightdownpointy) {
      return false;
    }
    if (this->rightdownpointz != other.rightdownpointz) {
      return false;
    }
    if (this->leftdownpointx != other.leftdownpointx) {
      return false;
    }
    if (this->leftdownpointy != other.leftdownpointy) {
      return false;
    }
    if (this->leftdownpointz != other.leftdownpointz) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadrangleVcs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadrangleVcs_

// alias to use template instance with default allocator
using QuadrangleVcs =
  deva_perception_msgs::msg::QuadrangleVcs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_VCS__STRUCT_HPP_
