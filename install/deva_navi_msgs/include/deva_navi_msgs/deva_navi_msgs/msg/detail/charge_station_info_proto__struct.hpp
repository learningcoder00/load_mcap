// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/ChargeStationInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'show'
// Member 'projective'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__ChargeStationInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__ChargeStationInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChargeStationInfoProto_
{
  using Type = ChargeStationInfoProto_<ContainerAllocator>;

  explicit ChargeStationInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : show(_init),
    projective(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_idx = 0l;
      this->direction = 0l;
      this->poi_id = "";
      this->name = "";
      this->brand_name = "";
      this->max_power = 0l;
      this->charge_percent = 0l;
      this->charge_time = 0l;
      this->remaining_capacity = 0l;
    }
  }

  explicit ChargeStationInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : show(_alloc, _init),
    projective(_alloc, _init),
    poi_id(_alloc),
    name(_alloc),
    brand_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_idx = 0l;
      this->direction = 0l;
      this->poi_id = "";
      this->name = "";
      this->brand_name = "";
      this->max_power = 0l;
      this->charge_percent = 0l;
      this->charge_time = 0l;
      this->remaining_capacity = 0l;
    }
  }

  // field types and members
  using _segment_idx_type =
    int32_t;
  _segment_idx_type segment_idx;
  using _direction_type =
    int32_t;
  _direction_type direction;
  using _show_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _show_type show;
  using _projective_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _projective_type projective;
  using _poi_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _poi_id_type poi_id;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _brand_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _brand_name_type brand_name;
  using _max_power_type =
    int32_t;
  _max_power_type max_power;
  using _charge_percent_type =
    int32_t;
  _charge_percent_type charge_percent;
  using _charge_time_type =
    int32_t;
  _charge_time_type charge_time;
  using _remaining_capacity_type =
    int32_t;
  _remaining_capacity_type remaining_capacity;

  // setters for named parameter idiom
  Type & set__segment_idx(
    const int32_t & _arg)
  {
    this->segment_idx = _arg;
    return *this;
  }
  Type & set__direction(
    const int32_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__show(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->show = _arg;
    return *this;
  }
  Type & set__projective(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->projective = _arg;
    return *this;
  }
  Type & set__poi_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->poi_id = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__brand_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->brand_name = _arg;
    return *this;
  }
  Type & set__max_power(
    const int32_t & _arg)
  {
    this->max_power = _arg;
    return *this;
  }
  Type & set__charge_percent(
    const int32_t & _arg)
  {
    this->charge_percent = _arg;
    return *this;
  }
  Type & set__charge_time(
    const int32_t & _arg)
  {
    this->charge_time = _arg;
    return *this;
  }
  Type & set__remaining_capacity(
    const int32_t & _arg)
  {
    this->remaining_capacity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__ChargeStationInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__ChargeStationInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChargeStationInfoProto_ & other) const
  {
    if (this->segment_idx != other.segment_idx) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->show != other.show) {
      return false;
    }
    if (this->projective != other.projective) {
      return false;
    }
    if (this->poi_id != other.poi_id) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    if (this->brand_name != other.brand_name) {
      return false;
    }
    if (this->max_power != other.max_power) {
      return false;
    }
    if (this->charge_percent != other.charge_percent) {
      return false;
    }
    if (this->charge_time != other.charge_time) {
      return false;
    }
    if (this->remaining_capacity != other.remaining_capacity) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChargeStationInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChargeStationInfoProto_

// alias to use template instance with default allocator
using ChargeStationInfoProto =
  deva_navi_msgs::msg::ChargeStationInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__CHARGE_STATION_INFO_PROTO__STRUCT_HPP_
