// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_perception_msgs:msg/E2eAdbTrafficSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__STRUCT_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__STRUCT_HPP_

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
# define DEPRECATED__deva_perception_msgs__msg__E2eAdbTrafficSign __attribute__((deprecated))
#else
# define DEPRECATED__deva_perception_msgs__msg__E2eAdbTrafficSign __declspec(deprecated)
#endif

namespace deva_perception_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct E2eAdbTrafficSign_
{
  using Type = E2eAdbTrafficSign_<ContainerAllocator>;

  explicit E2eAdbTrafficSign_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_sign_for_adb_adb_trk_info = 0;
      this->traffic_sign_for_adb_adb_abs_dist = 0.0f;
      this->traffic_sign_for_adb_adb_vert_ag_bot = 0.0f;
      this->traffic_sign_for_adb_adb_vert_ag_top = 0.0f;
      this->traffic_sign_for_adb_adb_hozl_ag_le = 0.0f;
      this->traffic_sign_for_adb_adb_hozl_ag_ri = 0.0f;
      this->traffic_sign_for_adb_adb_detd_qly = 0.0f;
    }
  }

  explicit E2eAdbTrafficSign_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->traffic_sign_for_adb_adb_trk_info = 0;
      this->traffic_sign_for_adb_adb_abs_dist = 0.0f;
      this->traffic_sign_for_adb_adb_vert_ag_bot = 0.0f;
      this->traffic_sign_for_adb_adb_vert_ag_top = 0.0f;
      this->traffic_sign_for_adb_adb_hozl_ag_le = 0.0f;
      this->traffic_sign_for_adb_adb_hozl_ag_ri = 0.0f;
      this->traffic_sign_for_adb_adb_detd_qly = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _traffic_sign_for_adb_adb_trk_info_type =
    uint8_t;
  _traffic_sign_for_adb_adb_trk_info_type traffic_sign_for_adb_adb_trk_info;
  using _traffic_sign_for_adb_adb_abs_dist_type =
    float;
  _traffic_sign_for_adb_adb_abs_dist_type traffic_sign_for_adb_adb_abs_dist;
  using _traffic_sign_for_adb_adb_vert_ag_bot_type =
    float;
  _traffic_sign_for_adb_adb_vert_ag_bot_type traffic_sign_for_adb_adb_vert_ag_bot;
  using _traffic_sign_for_adb_adb_vert_ag_top_type =
    float;
  _traffic_sign_for_adb_adb_vert_ag_top_type traffic_sign_for_adb_adb_vert_ag_top;
  using _traffic_sign_for_adb_adb_hozl_ag_le_type =
    float;
  _traffic_sign_for_adb_adb_hozl_ag_le_type traffic_sign_for_adb_adb_hozl_ag_le;
  using _traffic_sign_for_adb_adb_hozl_ag_ri_type =
    float;
  _traffic_sign_for_adb_adb_hozl_ag_ri_type traffic_sign_for_adb_adb_hozl_ag_ri;
  using _traffic_sign_for_adb_adb_detd_qly_type =
    float;
  _traffic_sign_for_adb_adb_detd_qly_type traffic_sign_for_adb_adb_detd_qly;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__traffic_sign_for_adb_adb_trk_info(
    const uint8_t & _arg)
  {
    this->traffic_sign_for_adb_adb_trk_info = _arg;
    return *this;
  }
  Type & set__traffic_sign_for_adb_adb_abs_dist(
    const float & _arg)
  {
    this->traffic_sign_for_adb_adb_abs_dist = _arg;
    return *this;
  }
  Type & set__traffic_sign_for_adb_adb_vert_ag_bot(
    const float & _arg)
  {
    this->traffic_sign_for_adb_adb_vert_ag_bot = _arg;
    return *this;
  }
  Type & set__traffic_sign_for_adb_adb_vert_ag_top(
    const float & _arg)
  {
    this->traffic_sign_for_adb_adb_vert_ag_top = _arg;
    return *this;
  }
  Type & set__traffic_sign_for_adb_adb_hozl_ag_le(
    const float & _arg)
  {
    this->traffic_sign_for_adb_adb_hozl_ag_le = _arg;
    return *this;
  }
  Type & set__traffic_sign_for_adb_adb_hozl_ag_ri(
    const float & _arg)
  {
    this->traffic_sign_for_adb_adb_hozl_ag_ri = _arg;
    return *this;
  }
  Type & set__traffic_sign_for_adb_adb_detd_qly(
    const float & _arg)
  {
    this->traffic_sign_for_adb_adb_detd_qly = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_perception_msgs__msg__E2eAdbTrafficSign
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_perception_msgs__msg__E2eAdbTrafficSign
    std::shared_ptr<deva_perception_msgs::msg::E2eAdbTrafficSign_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const E2eAdbTrafficSign_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->traffic_sign_for_adb_adb_trk_info != other.traffic_sign_for_adb_adb_trk_info) {
      return false;
    }
    if (this->traffic_sign_for_adb_adb_abs_dist != other.traffic_sign_for_adb_adb_abs_dist) {
      return false;
    }
    if (this->traffic_sign_for_adb_adb_vert_ag_bot != other.traffic_sign_for_adb_adb_vert_ag_bot) {
      return false;
    }
    if (this->traffic_sign_for_adb_adb_vert_ag_top != other.traffic_sign_for_adb_adb_vert_ag_top) {
      return false;
    }
    if (this->traffic_sign_for_adb_adb_hozl_ag_le != other.traffic_sign_for_adb_adb_hozl_ag_le) {
      return false;
    }
    if (this->traffic_sign_for_adb_adb_hozl_ag_ri != other.traffic_sign_for_adb_adb_hozl_ag_ri) {
      return false;
    }
    if (this->traffic_sign_for_adb_adb_detd_qly != other.traffic_sign_for_adb_adb_detd_qly) {
      return false;
    }
    return true;
  }
  bool operator!=(const E2eAdbTrafficSign_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct E2eAdbTrafficSign_

// alias to use template instance with default allocator
using E2eAdbTrafficSign =
  deva_perception_msgs::msg::E2eAdbTrafficSign_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_ADB_TRAFFIC_SIGN__STRUCT_HPP_
