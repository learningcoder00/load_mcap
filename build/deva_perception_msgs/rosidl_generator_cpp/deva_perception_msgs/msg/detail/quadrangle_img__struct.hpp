// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/QuadrangleImg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_perception_msgs__msg__QuadrangleImg __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__QuadrangleImg __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct QuadrangleImg_
{
  using Type = QuadrangleImg_<ContainerAllocator>;

  explicit QuadrangleImg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imglupointposu = 0;
      this->imglupointposv = 0;
      this->imgrupointposu = 0;
      this->imgrupointposv = 0;
      this->imgrdpointposu = 0;
      this->imgrdpointposv = 0;
      this->imgldpointposu = 0;
      this->imgldpointposv = 0;
    }
  }

  explicit QuadrangleImg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imglupointposu = 0;
      this->imglupointposv = 0;
      this->imgrupointposu = 0;
      this->imgrupointposv = 0;
      this->imgrdpointposu = 0;
      this->imgrdpointposv = 0;
      this->imgldpointposu = 0;
      this->imgldpointposv = 0;
    }
  }

  // field types and members
  using _imglupointposu_type =
    uint16_t;
  _imglupointposu_type imglupointposu;
  using _imglupointposv_type =
    uint16_t;
  _imglupointposv_type imglupointposv;
  using _imgrupointposu_type =
    uint16_t;
  _imgrupointposu_type imgrupointposu;
  using _imgrupointposv_type =
    uint16_t;
  _imgrupointposv_type imgrupointposv;
  using _imgrdpointposu_type =
    uint16_t;
  _imgrdpointposu_type imgrdpointposu;
  using _imgrdpointposv_type =
    uint16_t;
  _imgrdpointposv_type imgrdpointposv;
  using _imgldpointposu_type =
    uint16_t;
  _imgldpointposu_type imgldpointposu;
  using _imgldpointposv_type =
    uint16_t;
  _imgldpointposv_type imgldpointposv;

  // setters for named parameter idiom
  Type & set__imglupointposu(
    const uint16_t & _arg)
  {
    this->imglupointposu = _arg;
    return *this;
  }
  Type & set__imglupointposv(
    const uint16_t & _arg)
  {
    this->imglupointposv = _arg;
    return *this;
  }
  Type & set__imgrupointposu(
    const uint16_t & _arg)
  {
    this->imgrupointposu = _arg;
    return *this;
  }
  Type & set__imgrupointposv(
    const uint16_t & _arg)
  {
    this->imgrupointposv = _arg;
    return *this;
  }
  Type & set__imgrdpointposu(
    const uint16_t & _arg)
  {
    this->imgrdpointposu = _arg;
    return *this;
  }
  Type & set__imgrdpointposv(
    const uint16_t & _arg)
  {
    this->imgrdpointposv = _arg;
    return *this;
  }
  Type & set__imgldpointposu(
    const uint16_t & _arg)
  {
    this->imgldpointposu = _arg;
    return *this;
  }
  Type & set__imgldpointposv(
    const uint16_t & _arg)
  {
    this->imgldpointposv = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__QuadrangleImg
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__QuadrangleImg
    std::shared_ptr<deva_perception_msgs::msg::QuadrangleImg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const QuadrangleImg_ & other) const
  {
    if (this->imglupointposu != other.imglupointposu) {
      return false;
    }
    if (this->imglupointposv != other.imglupointposv) {
      return false;
    }
    if (this->imgrupointposu != other.imgrupointposu) {
      return false;
    }
    if (this->imgrupointposv != other.imgrupointposv) {
      return false;
    }
    if (this->imgrdpointposu != other.imgrdpointposu) {
      return false;
    }
    if (this->imgrdpointposv != other.imgrdpointposv) {
      return false;
    }
    if (this->imgldpointposu != other.imgldpointposu) {
      return false;
    }
    if (this->imgldpointposv != other.imgldpointposv) {
      return false;
    }
    return true;
  }
  bool operator!=(const QuadrangleImg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct QuadrangleImg_

// alias to use template instance with default allocator
using QuadrangleImg =
  deva_perception_msgs::msg::QuadrangleImg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__QUADRANGLE_IMG__STRUCT_HPP_
