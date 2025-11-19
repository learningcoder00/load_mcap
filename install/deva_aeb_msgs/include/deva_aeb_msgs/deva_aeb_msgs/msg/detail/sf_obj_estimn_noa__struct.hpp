// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFObjEstimnNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN_NOA__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN_NOA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFObjEstimnNOA __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFObjEstimnNOA __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFObjEstimnNOA_
{
  using Type = SFObjEstimnNOA_<ContainerAllocator>;

  explicit SFObjEstimnNOA_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posnlgt = 0.0f;
      this->posnlat = 0.0f;
      this->spd = 0.0f;
      this->vlgt = 0.0f;
      this->vlat = 0.0f;
      this->a = 0.0f;
      this->algt = 0.0f;
      this->alat = 0.0f;
      this->agdir = 0.0f;
      this->crvt = 0.0f;
      this->agdirstd = 0.0f;
    }
  }

  explicit SFObjEstimnNOA_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posnlgt = 0.0f;
      this->posnlat = 0.0f;
      this->spd = 0.0f;
      this->vlgt = 0.0f;
      this->vlat = 0.0f;
      this->a = 0.0f;
      this->algt = 0.0f;
      this->alat = 0.0f;
      this->agdir = 0.0f;
      this->crvt = 0.0f;
      this->agdirstd = 0.0f;
    }
  }

  // field types and members
  using _posnlgt_type =
    float;
  _posnlgt_type posnlgt;
  using _posnlat_type =
    float;
  _posnlat_type posnlat;
  using _spd_type =
    float;
  _spd_type spd;
  using _vlgt_type =
    float;
  _vlgt_type vlgt;
  using _vlat_type =
    float;
  _vlat_type vlat;
  using _a_type =
    float;
  _a_type a;
  using _algt_type =
    float;
  _algt_type algt;
  using _alat_type =
    float;
  _alat_type alat;
  using _agdir_type =
    float;
  _agdir_type agdir;
  using _crvt_type =
    float;
  _crvt_type crvt;
  using _agdirstd_type =
    float;
  _agdirstd_type agdirstd;

  // setters for named parameter idiom
  Type & set__posnlgt(
    const float & _arg)
  {
    this->posnlgt = _arg;
    return *this;
  }
  Type & set__posnlat(
    const float & _arg)
  {
    this->posnlat = _arg;
    return *this;
  }
  Type & set__spd(
    const float & _arg)
  {
    this->spd = _arg;
    return *this;
  }
  Type & set__vlgt(
    const float & _arg)
  {
    this->vlgt = _arg;
    return *this;
  }
  Type & set__vlat(
    const float & _arg)
  {
    this->vlat = _arg;
    return *this;
  }
  Type & set__a(
    const float & _arg)
  {
    this->a = _arg;
    return *this;
  }
  Type & set__algt(
    const float & _arg)
  {
    this->algt = _arg;
    return *this;
  }
  Type & set__alat(
    const float & _arg)
  {
    this->alat = _arg;
    return *this;
  }
  Type & set__agdir(
    const float & _arg)
  {
    this->agdir = _arg;
    return *this;
  }
  Type & set__crvt(
    const float & _arg)
  {
    this->crvt = _arg;
    return *this;
  }
  Type & set__agdirstd(
    const float & _arg)
  {
    this->agdirstd = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFObjEstimnNOA
    std::shared_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFObjEstimnNOA
    std::shared_ptr<deva_aeb_msgs::msg::SFObjEstimnNOA_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFObjEstimnNOA_ & other) const
  {
    if (this->posnlgt != other.posnlgt) {
      return false;
    }
    if (this->posnlat != other.posnlat) {
      return false;
    }
    if (this->spd != other.spd) {
      return false;
    }
    if (this->vlgt != other.vlgt) {
      return false;
    }
    if (this->vlat != other.vlat) {
      return false;
    }
    if (this->a != other.a) {
      return false;
    }
    if (this->algt != other.algt) {
      return false;
    }
    if (this->alat != other.alat) {
      return false;
    }
    if (this->agdir != other.agdir) {
      return false;
    }
    if (this->crvt != other.crvt) {
      return false;
    }
    if (this->agdirstd != other.agdirstd) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFObjEstimnNOA_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFObjEstimnNOA_

// alias to use template instance with default allocator
using SFObjEstimnNOA =
  deva_aeb_msgs::msg::SFObjEstimnNOA_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_OBJ_ESTIMN_NOA__STRUCT_HPP_
