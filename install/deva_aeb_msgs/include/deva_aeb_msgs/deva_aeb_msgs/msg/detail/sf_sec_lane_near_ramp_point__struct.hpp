// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFSecLaneNearRampPoint.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFSecLaneNearRampPoint __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFSecLaneNearRampPoint __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFSecLaneNearRampPoint_
{
  using Type = SFSecLaneNearRampPoint_<ContainerAllocator>;

  explicit SFSecLaneNearRampPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posx = 0.0f;
      this->posy = 0.0f;
      this->type = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  explicit SFSecLaneNearRampPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : reserved(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->posx = 0.0f;
      this->posy = 0.0f;
      this->type = 0;
      std::fill<typename std::array<uint8_t, 3>::iterator, uint8_t>(this->reserved.begin(), this->reserved.end(), 0);
    }
  }

  // field types and members
  using _posx_type =
    float;
  _posx_type posx;
  using _posy_type =
    float;
  _posy_type posy;
  using _type_type =
    uint8_t;
  _type_type type;
  using _reserved_type =
    std::array<uint8_t, 3>;
  _reserved_type reserved;

  // setters for named parameter idiom
  Type & set__posx(
    const float & _arg)
  {
    this->posx = _arg;
    return *this;
  }
  Type & set__posy(
    const float & _arg)
  {
    this->posy = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__reserved(
    const std::array<uint8_t, 3> & _arg)
  {
    this->reserved = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFSecLaneNearRampPoint
    std::shared_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFSecLaneNearRampPoint
    std::shared_ptr<deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFSecLaneNearRampPoint_ & other) const
  {
    if (this->posx != other.posx) {
      return false;
    }
    if (this->posy != other.posy) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->reserved != other.reserved) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFSecLaneNearRampPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFSecLaneNearRampPoint_

// alias to use template instance with default allocator
using SFSecLaneNearRampPoint =
  deva_aeb_msgs::msg::SFSecLaneNearRampPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_SEC_LANE_NEAR_RAMP_POINT__STRUCT_HPP_
