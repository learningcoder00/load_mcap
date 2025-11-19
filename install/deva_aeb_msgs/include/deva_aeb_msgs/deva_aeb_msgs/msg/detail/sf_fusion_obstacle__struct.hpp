// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_aeb_msgs:msg/SFFusionObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE__STRUCT_HPP_
#define DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionObstacle __attribute__((deprecated))
#else
# define DEPRECATED__deva_aeb_msgs__msg__SFFusionObstacle __declspec(deprecated)
#endif

namespace deva_aeb_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SFFusionObstacle_
{
  using Type = SFFusionObstacle_<ContainerAllocator>;

  explicit SFFusionObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0;
      this->confi = 0;
      this->laneassignment = 0;
      this->overrideflag = 0;
      this->lifetime = 0ul;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->headingangle = 0.0f;
    }
  }

  explicit SFFusionObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->type = 0;
      this->confi = 0;
      this->laneassignment = 0;
      this->overrideflag = 0;
      this->lifetime = 0ul;
      this->poslgt = 0.0f;
      this->poslat = 0.0f;
      this->length = 0.0f;
      this->width = 0.0f;
      this->height = 0.0f;
      this->headingangle = 0.0f;
    }
  }

  // field types and members
  using _id_type =
    uint32_t;
  _id_type id;
  using _type_type =
    uint8_t;
  _type_type type;
  using _confi_type =
    uint8_t;
  _confi_type confi;
  using _laneassignment_type =
    uint8_t;
  _laneassignment_type laneassignment;
  using _overrideflag_type =
    uint8_t;
  _overrideflag_type overrideflag;
  using _lifetime_type =
    uint32_t;
  _lifetime_type lifetime;
  using _poslgt_type =
    float;
  _poslgt_type poslgt;
  using _poslat_type =
    float;
  _poslat_type poslat;
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;
  using _height_type =
    float;
  _height_type height;
  using _headingangle_type =
    float;
  _headingangle_type headingangle;

  // setters for named parameter idiom
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__confi(
    const uint8_t & _arg)
  {
    this->confi = _arg;
    return *this;
  }
  Type & set__laneassignment(
    const uint8_t & _arg)
  {
    this->laneassignment = _arg;
    return *this;
  }
  Type & set__overrideflag(
    const uint8_t & _arg)
  {
    this->overrideflag = _arg;
    return *this;
  }
  Type & set__lifetime(
    const uint32_t & _arg)
  {
    this->lifetime = _arg;
    return *this;
  }
  Type & set__poslgt(
    const float & _arg)
  {
    this->poslgt = _arg;
    return *this;
  }
  Type & set__poslat(
    const float & _arg)
  {
    this->poslat = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__headingangle(
    const float & _arg)
  {
    this->headingangle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionObstacle
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_aeb_msgs__msg__SFFusionObstacle
    std::shared_ptr<deva_aeb_msgs::msg::SFFusionObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SFFusionObstacle_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->confi != other.confi) {
      return false;
    }
    if (this->laneassignment != other.laneassignment) {
      return false;
    }
    if (this->overrideflag != other.overrideflag) {
      return false;
    }
    if (this->lifetime != other.lifetime) {
      return false;
    }
    if (this->poslgt != other.poslgt) {
      return false;
    }
    if (this->poslat != other.poslat) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->headingangle != other.headingangle) {
      return false;
    }
    return true;
  }
  bool operator!=(const SFFusionObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SFFusionObstacle_

// alias to use template instance with default allocator
using SFFusionObstacle =
  deva_aeb_msgs::msg::SFFusionObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_aeb_msgs

#endif  // DEVA_AEB_MSGS__MSG__DETAIL__SF_FUSION_OBSTACLE__STRUCT_HPP_
