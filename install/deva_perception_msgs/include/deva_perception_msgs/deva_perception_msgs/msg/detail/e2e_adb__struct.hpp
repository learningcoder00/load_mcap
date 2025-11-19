// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/E2eAdb.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__STRUCT_HPP_

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
# define DEPRECATED__deva_perception_msgs__msg__E2eAdb __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__E2eAdb __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct E2eAdb_
{
  using Type = E2eAdb_<ContainerAllocator>;

  explicit E2eAdb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eh_obj_for_adb_abs_dist = 0.0;
      this->veh_obj_for_adb_classn = 0;
      this->veh_obj_for_adb_hozl_ag_le = 0.0;
      this->veh_obj_for_adb_hozl_ag_ri = 0.0;
      this->veh_obj_for_adb_obj_dir = 0;
      this->veh_obj_for_adb_obj_hozl_ag_spd_le = 0.0;
      this->veh_obj_for_adb_obj_hozl_ag_spd_ri = 0.0;
      this->veh_obj_for_adb_trk_info = 0;
      this->veh_obj_for_adb_vert_ag = 0.0;
    }
  }

  explicit E2eAdb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eh_obj_for_adb_abs_dist = 0.0;
      this->veh_obj_for_adb_classn = 0;
      this->veh_obj_for_adb_hozl_ag_le = 0.0;
      this->veh_obj_for_adb_hozl_ag_ri = 0.0;
      this->veh_obj_for_adb_obj_dir = 0;
      this->veh_obj_for_adb_obj_hozl_ag_spd_le = 0.0;
      this->veh_obj_for_adb_obj_hozl_ag_spd_ri = 0.0;
      this->veh_obj_for_adb_trk_info = 0;
      this->veh_obj_for_adb_vert_ag = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _eh_obj_for_adb_abs_dist_type =
    double;
  _eh_obj_for_adb_abs_dist_type eh_obj_for_adb_abs_dist;
  using _veh_obj_for_adb_classn_type =
    uint8_t;
  _veh_obj_for_adb_classn_type veh_obj_for_adb_classn;
  using _veh_obj_for_adb_hozl_ag_le_type =
    double;
  _veh_obj_for_adb_hozl_ag_le_type veh_obj_for_adb_hozl_ag_le;
  using _veh_obj_for_adb_hozl_ag_ri_type =
    double;
  _veh_obj_for_adb_hozl_ag_ri_type veh_obj_for_adb_hozl_ag_ri;
  using _veh_obj_for_adb_obj_dir_type =
    uint8_t;
  _veh_obj_for_adb_obj_dir_type veh_obj_for_adb_obj_dir;
  using _veh_obj_for_adb_obj_hozl_ag_spd_le_type =
    double;
  _veh_obj_for_adb_obj_hozl_ag_spd_le_type veh_obj_for_adb_obj_hozl_ag_spd_le;
  using _veh_obj_for_adb_obj_hozl_ag_spd_ri_type =
    double;
  _veh_obj_for_adb_obj_hozl_ag_spd_ri_type veh_obj_for_adb_obj_hozl_ag_spd_ri;
  using _veh_obj_for_adb_trk_info_type =
    uint8_t;
  _veh_obj_for_adb_trk_info_type veh_obj_for_adb_trk_info;
  using _veh_obj_for_adb_vert_ag_type =
    double;
  _veh_obj_for_adb_vert_ag_type veh_obj_for_adb_vert_ag;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__eh_obj_for_adb_abs_dist(
    const double & _arg)
  {
    this->eh_obj_for_adb_abs_dist = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_classn(
    const uint8_t & _arg)
  {
    this->veh_obj_for_adb_classn = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_hozl_ag_le(
    const double & _arg)
  {
    this->veh_obj_for_adb_hozl_ag_le = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_hozl_ag_ri(
    const double & _arg)
  {
    this->veh_obj_for_adb_hozl_ag_ri = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_obj_dir(
    const uint8_t & _arg)
  {
    this->veh_obj_for_adb_obj_dir = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_obj_hozl_ag_spd_le(
    const double & _arg)
  {
    this->veh_obj_for_adb_obj_hozl_ag_spd_le = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_obj_hozl_ag_spd_ri(
    const double & _arg)
  {
    this->veh_obj_for_adb_obj_hozl_ag_spd_ri = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_trk_info(
    const uint8_t & _arg)
  {
    this->veh_obj_for_adb_trk_info = _arg;
    return *this;
  }
  Type & set__veh_obj_for_adb_vert_ag(
    const double & _arg)
  {
    this->veh_obj_for_adb_vert_ag = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::E2eAdb_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::E2eAdb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__E2eAdb
    std::shared_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__E2eAdb
    std::shared_ptr<deva_perception_msgs::msg::E2eAdb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const E2eAdb_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->eh_obj_for_adb_abs_dist != other.eh_obj_for_adb_abs_dist) {
      return false;
    }
    if (this->veh_obj_for_adb_classn != other.veh_obj_for_adb_classn) {
      return false;
    }
    if (this->veh_obj_for_adb_hozl_ag_le != other.veh_obj_for_adb_hozl_ag_le) {
      return false;
    }
    if (this->veh_obj_for_adb_hozl_ag_ri != other.veh_obj_for_adb_hozl_ag_ri) {
      return false;
    }
    if (this->veh_obj_for_adb_obj_dir != other.veh_obj_for_adb_obj_dir) {
      return false;
    }
    if (this->veh_obj_for_adb_obj_hozl_ag_spd_le != other.veh_obj_for_adb_obj_hozl_ag_spd_le) {
      return false;
    }
    if (this->veh_obj_for_adb_obj_hozl_ag_spd_ri != other.veh_obj_for_adb_obj_hozl_ag_spd_ri) {
      return false;
    }
    if (this->veh_obj_for_adb_trk_info != other.veh_obj_for_adb_trk_info) {
      return false;
    }
    if (this->veh_obj_for_adb_vert_ag != other.veh_obj_for_adb_vert_ag) {
      return false;
    }
    return true;
  }
  bool operator!=(const E2eAdb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct E2eAdb_

// alias to use template instance with default allocator
using E2eAdb =
  deva_perception_msgs::msg::E2eAdb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB__STRUCT_HPP_
