// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/EhpProfileShort.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileShort __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileShort __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EhpProfileShort_
{
  using Type = EhpProfileShort_<ContainerAllocator>;

  explicit EhpProfileShort_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prof_short_offset = 0;
      this->prof_short_msg_type = 0;
      this->prof_short_path_idx = 0;
      this->prof_short_cyc_cnt = 0;
      this->prof_short_update = 0;
      this->prof_short_retr = 0;
      this->prof_short_ctrl_point = 0;
      this->prof_short_prof_type = 0;
      this->prof_short_dist1 = 0;
      this->prof_short_accur_class = 0;
      this->prof_short_value0 = 0;
      this->prof_short_value1 = 0;
      this->prof_short_relative_offset = 0l;
      this->prof_short_curve_road = 0;
    }
  }

  explicit EhpProfileShort_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->prof_short_offset = 0;
      this->prof_short_msg_type = 0;
      this->prof_short_path_idx = 0;
      this->prof_short_cyc_cnt = 0;
      this->prof_short_update = 0;
      this->prof_short_retr = 0;
      this->prof_short_ctrl_point = 0;
      this->prof_short_prof_type = 0;
      this->prof_short_dist1 = 0;
      this->prof_short_accur_class = 0;
      this->prof_short_value0 = 0;
      this->prof_short_value1 = 0;
      this->prof_short_relative_offset = 0l;
      this->prof_short_curve_road = 0;
    }
  }

  // field types and members
  using _prof_short_offset_type =
    uint16_t;
  _prof_short_offset_type prof_short_offset;
  using _prof_short_msg_type_type =
    uint8_t;
  _prof_short_msg_type_type prof_short_msg_type;
  using _prof_short_path_idx_type =
    uint8_t;
  _prof_short_path_idx_type prof_short_path_idx;
  using _prof_short_cyc_cnt_type =
    uint8_t;
  _prof_short_cyc_cnt_type prof_short_cyc_cnt;
  using _prof_short_update_type =
    uint8_t;
  _prof_short_update_type prof_short_update;
  using _prof_short_retr_type =
    uint8_t;
  _prof_short_retr_type prof_short_retr;
  using _prof_short_ctrl_point_type =
    uint8_t;
  _prof_short_ctrl_point_type prof_short_ctrl_point;
  using _prof_short_prof_type_type =
    uint8_t;
  _prof_short_prof_type_type prof_short_prof_type;
  using _prof_short_dist1_type =
    uint16_t;
  _prof_short_dist1_type prof_short_dist1;
  using _prof_short_accur_class_type =
    uint8_t;
  _prof_short_accur_class_type prof_short_accur_class;
  using _prof_short_value0_type =
    uint16_t;
  _prof_short_value0_type prof_short_value0;
  using _prof_short_value1_type =
    uint16_t;
  _prof_short_value1_type prof_short_value1;
  using _prof_short_relative_offset_type =
    int32_t;
  _prof_short_relative_offset_type prof_short_relative_offset;
  using _prof_short_curve_road_type =
    uint8_t;
  _prof_short_curve_road_type prof_short_curve_road;

  // setters for named parameter idiom
  Type & set__prof_short_offset(
    const uint16_t & _arg)
  {
    this->prof_short_offset = _arg;
    return *this;
  }
  Type & set__prof_short_msg_type(
    const uint8_t & _arg)
  {
    this->prof_short_msg_type = _arg;
    return *this;
  }
  Type & set__prof_short_path_idx(
    const uint8_t & _arg)
  {
    this->prof_short_path_idx = _arg;
    return *this;
  }
  Type & set__prof_short_cyc_cnt(
    const uint8_t & _arg)
  {
    this->prof_short_cyc_cnt = _arg;
    return *this;
  }
  Type & set__prof_short_update(
    const uint8_t & _arg)
  {
    this->prof_short_update = _arg;
    return *this;
  }
  Type & set__prof_short_retr(
    const uint8_t & _arg)
  {
    this->prof_short_retr = _arg;
    return *this;
  }
  Type & set__prof_short_ctrl_point(
    const uint8_t & _arg)
  {
    this->prof_short_ctrl_point = _arg;
    return *this;
  }
  Type & set__prof_short_prof_type(
    const uint8_t & _arg)
  {
    this->prof_short_prof_type = _arg;
    return *this;
  }
  Type & set__prof_short_dist1(
    const uint16_t & _arg)
  {
    this->prof_short_dist1 = _arg;
    return *this;
  }
  Type & set__prof_short_accur_class(
    const uint8_t & _arg)
  {
    this->prof_short_accur_class = _arg;
    return *this;
  }
  Type & set__prof_short_value0(
    const uint16_t & _arg)
  {
    this->prof_short_value0 = _arg;
    return *this;
  }
  Type & set__prof_short_value1(
    const uint16_t & _arg)
  {
    this->prof_short_value1 = _arg;
    return *this;
  }
  Type & set__prof_short_relative_offset(
    const int32_t & _arg)
  {
    this->prof_short_relative_offset = _arg;
    return *this;
  }
  Type & set__prof_short_curve_road(
    const uint8_t & _arg)
  {
    this->prof_short_curve_road = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileShort
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__EhpProfileShort
    std::shared_ptr<deva_gaode_routing_msgs::msg::EhpProfileShort_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EhpProfileShort_ & other) const
  {
    if (this->prof_short_offset != other.prof_short_offset) {
      return false;
    }
    if (this->prof_short_msg_type != other.prof_short_msg_type) {
      return false;
    }
    if (this->prof_short_path_idx != other.prof_short_path_idx) {
      return false;
    }
    if (this->prof_short_cyc_cnt != other.prof_short_cyc_cnt) {
      return false;
    }
    if (this->prof_short_update != other.prof_short_update) {
      return false;
    }
    if (this->prof_short_retr != other.prof_short_retr) {
      return false;
    }
    if (this->prof_short_ctrl_point != other.prof_short_ctrl_point) {
      return false;
    }
    if (this->prof_short_prof_type != other.prof_short_prof_type) {
      return false;
    }
    if (this->prof_short_dist1 != other.prof_short_dist1) {
      return false;
    }
    if (this->prof_short_accur_class != other.prof_short_accur_class) {
      return false;
    }
    if (this->prof_short_value0 != other.prof_short_value0) {
      return false;
    }
    if (this->prof_short_value1 != other.prof_short_value1) {
      return false;
    }
    if (this->prof_short_relative_offset != other.prof_short_relative_offset) {
      return false;
    }
    if (this->prof_short_curve_road != other.prof_short_curve_road) {
      return false;
    }
    return true;
  }
  bool operator!=(const EhpProfileShort_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EhpProfileShort_

// alias to use template instance with default allocator
using EhpProfileShort =
  deva_gaode_routing_msgs::msg::EhpProfileShort_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__EHP_PROFILE_SHORT__STRUCT_HPP_
