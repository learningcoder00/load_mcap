// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/NaviSubCameraProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__NaviSubCameraProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__NaviSubCameraProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NaviSubCameraProto_
{
  using Type = NaviSubCameraProto_<ContainerAllocator>;

  explicit NaviSubCameraProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_type = 0l;
      this->make_sound = 0l;
      this->camera_id = 0ll;
      this->busway_time_enable = 0l;
      this->penalty = 0l;
      this->priority = 0l;
      this->is_new = false;
      this->is_variable_speed = false;
      this->is_match = false;
      this->is_special = false;
    }
  }

  explicit NaviSubCameraProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sub_type = 0l;
      this->make_sound = 0l;
      this->camera_id = 0ll;
      this->busway_time_enable = 0l;
      this->penalty = 0l;
      this->priority = 0l;
      this->is_new = false;
      this->is_variable_speed = false;
      this->is_match = false;
      this->is_special = false;
    }
  }

  // field types and members
  using _sub_type_type =
    int32_t;
  _sub_type_type sub_type;
  using _make_sound_type =
    int32_t;
  _make_sound_type make_sound;
  using _camera_id_type =
    int64_t;
  _camera_id_type camera_id;
  using _busway_time_enable_type =
    int32_t;
  _busway_time_enable_type busway_time_enable;
  using _penalty_type =
    int32_t;
  _penalty_type penalty;
  using _priority_type =
    int32_t;
  _priority_type priority;
  using _is_new_type =
    bool;
  _is_new_type is_new;
  using _is_variable_speed_type =
    bool;
  _is_variable_speed_type is_variable_speed;
  using _is_match_type =
    bool;
  _is_match_type is_match;
  using _is_special_type =
    bool;
  _is_special_type is_special;
  using _speed_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__sub_type(
    const int32_t & _arg)
  {
    this->sub_type = _arg;
    return *this;
  }
  Type & set__make_sound(
    const int32_t & _arg)
  {
    this->make_sound = _arg;
    return *this;
  }
  Type & set__camera_id(
    const int64_t & _arg)
  {
    this->camera_id = _arg;
    return *this;
  }
  Type & set__busway_time_enable(
    const int32_t & _arg)
  {
    this->busway_time_enable = _arg;
    return *this;
  }
  Type & set__penalty(
    const int32_t & _arg)
  {
    this->penalty = _arg;
    return *this;
  }
  Type & set__priority(
    const int32_t & _arg)
  {
    this->priority = _arg;
    return *this;
  }
  Type & set__is_new(
    const bool & _arg)
  {
    this->is_new = _arg;
    return *this;
  }
  Type & set__is_variable_speed(
    const bool & _arg)
  {
    this->is_variable_speed = _arg;
    return *this;
  }
  Type & set__is_match(
    const bool & _arg)
  {
    this->is_match = _arg;
    return *this;
  }
  Type & set__is_special(
    const bool & _arg)
  {
    this->is_special = _arg;
    return *this;
  }
  Type & set__speed(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__NaviSubCameraProto
    std::shared_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__NaviSubCameraProto
    std::shared_ptr<deva_navi_msgs::msg::NaviSubCameraProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NaviSubCameraProto_ & other) const
  {
    if (this->sub_type != other.sub_type) {
      return false;
    }
    if (this->make_sound != other.make_sound) {
      return false;
    }
    if (this->camera_id != other.camera_id) {
      return false;
    }
    if (this->busway_time_enable != other.busway_time_enable) {
      return false;
    }
    if (this->penalty != other.penalty) {
      return false;
    }
    if (this->priority != other.priority) {
      return false;
    }
    if (this->is_new != other.is_new) {
      return false;
    }
    if (this->is_variable_speed != other.is_variable_speed) {
      return false;
    }
    if (this->is_match != other.is_match) {
      return false;
    }
    if (this->is_special != other.is_special) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const NaviSubCameraProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NaviSubCameraProto_

// alias to use template instance with default allocator
using NaviSubCameraProto =
  deva_navi_msgs::msg::NaviSubCameraProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__NAVI_SUB_CAMERA_PROTO__STRUCT_HPP_
