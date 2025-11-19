// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFVehSelf.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFVehSelf __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFVehSelf __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFVehSelf_
{
  using Type = SFVehSelf_<ContainerAllocator>;

  explicit SFVehSelf_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vlgt = 0.0f;
      this->vlgtcmpfac = 0.0f;
      this->algt = 0.0f;
      this->algtraw = 0.0f;
      this->alatraw = 0.0f;
      this->yawrate = 0.0f;
      this->yawrateraw = 0.0f;
      this->posnlgtdelta = 0.0f;
      this->posnlatdelta = 0.0f;
      this->agdirdelta = 0.0f;
    }
  }

  explicit SFVehSelf_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->vlgt = 0.0f;
      this->vlgtcmpfac = 0.0f;
      this->algt = 0.0f;
      this->algtraw = 0.0f;
      this->alatraw = 0.0f;
      this->yawrate = 0.0f;
      this->yawrateraw = 0.0f;
      this->posnlgtdelta = 0.0f;
      this->posnlatdelta = 0.0f;
      this->agdirdelta = 0.0f;
    }
  }

  // field types and members
  using _vlgt_type =
    float;
  _vlgt_type vlgt;
  using _vlgtcmpfac_type =
    float;
  _vlgtcmpfac_type vlgtcmpfac;
  using _algt_type =
    float;
  _algt_type algt;
  using _algtraw_type =
    float;
  _algtraw_type algtraw;
  using _alatraw_type =
    float;
  _alatraw_type alatraw;
  using _yawrate_type =
    float;
  _yawrate_type yawrate;
  using _yawrateraw_type =
    float;
  _yawrateraw_type yawrateraw;
  using _posnlgtdelta_type =
    float;
  _posnlgtdelta_type posnlgtdelta;
  using _posnlatdelta_type =
    float;
  _posnlatdelta_type posnlatdelta;
  using _agdirdelta_type =
    float;
  _agdirdelta_type agdirdelta;

  // setters for named parameter idiom
  Type & set__vlgt(
    const float & _arg)
  {
    this->vlgt = _arg;
    return *this;
  }
  Type & set__vlgtcmpfac(
    const float & _arg)
  {
    this->vlgtcmpfac = _arg;
    return *this;
  }
  Type & set__algt(
    const float & _arg)
  {
    this->algt = _arg;
    return *this;
  }
  Type & set__algtraw(
    const float & _arg)
  {
    this->algtraw = _arg;
    return *this;
  }
  Type & set__alatraw(
    const float & _arg)
  {
    this->alatraw = _arg;
    return *this;
  }
  Type & set__yawrate(
    const float & _arg)
  {
    this->yawrate = _arg;
    return *this;
  }
  Type & set__yawrateraw(
    const float & _arg)
  {
    this->yawrateraw = _arg;
    return *this;
  }
  Type & set__posnlgtdelta(
    const float & _arg)
  {
    this->posnlgtdelta = _arg;
    return *this;
  }
  Type & set__posnlatdelta(
    const float & _arg)
  {
    this->posnlatdelta = _arg;
    return *this;
  }
  Type & set__agdirdelta(
    const float & _arg)
  {
    this->agdirdelta = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFVehSelf
    std::shared_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFVehSelf
    std::shared_ptr<deva_aeb_msgs::msg::SFVehSelf_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFVehSelf_ & other) const
  {
    if (this->vlgt != other.vlgt) {
      return false;
    }
    if (this->vlgtcmpfac != other.vlgtcmpfac) {
      return false;
    }
    if (this->algt != other.algt) {
      return false;
    }
    if (this->algtraw != other.algtraw) {
      return false;
    }
    if (this->alatraw != other.alatraw) {
      return false;
    }
    if (this->yawrate != other.yawrate) {
      return false;
    }
    if (this->yawrateraw != other.yawrateraw) {
      return false;
    }
    if (this->posnlgtdelta != other.posnlgtdelta) {
      return false;
    }
    if (this->posnlatdelta != other.posnlatdelta) {
      return false;
    }
    if (this->agdirdelta != other.agdirdelta) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFVehSelf_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFVehSelf_

// alias to use template instance with default allocator
using SFVehSelf =
  deva_aeb_msgs::msg::SFVehSelf_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_VEH_SELF__STRUCT_HPP_
