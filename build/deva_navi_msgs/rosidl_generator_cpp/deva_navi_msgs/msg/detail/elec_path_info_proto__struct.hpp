// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/ElecPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'm_via_info'
#include "deva_navi_msgs/msg/detail/via_point_info_proto__struct.hpp"
// Member 'm_energy_consume'
#include "deva_navi_msgs/msg/detail/energy_consume_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__ElecPathInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__ElecPathInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ElecPathInfoProto_
{
  using Type = ElecPathInfoProto_<ContainerAllocator>;

  explicit ElecPathInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_energy_consume(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_is_elec_route = false;
      this->m_link_consume_size_word = false;
      this->m_traffic_info = 0l;
      this->m_energy_unit = 0l;
      this->m_path_flag = 0l;
      this->m_energy_sum = 0l;
      this->m_link_num = 0l;
    }
  }

  explicit ElecPathInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : m_energy_consume(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->m_is_elec_route = false;
      this->m_link_consume_size_word = false;
      this->m_traffic_info = 0l;
      this->m_energy_unit = 0l;
      this->m_path_flag = 0l;
      this->m_energy_sum = 0l;
      this->m_link_num = 0l;
    }
  }

  // field types and members
  using _m_is_elec_route_type =
    bool;
  _m_is_elec_route_type m_is_elec_route;
  using _m_link_consume_size_word_type =
    bool;
  _m_link_consume_size_word_type m_link_consume_size_word;
  using _m_traffic_info_type =
    int32_t;
  _m_traffic_info_type m_traffic_info;
  using _m_energy_unit_type =
    int32_t;
  _m_energy_unit_type m_energy_unit;
  using _m_path_flag_type =
    int32_t;
  _m_path_flag_type m_path_flag;
  using _m_energy_sum_type =
    int32_t;
  _m_energy_sum_type m_energy_sum;
  using _m_link_num_type =
    int32_t;
  _m_link_num_type m_link_num;
  using _m_link_consume_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _m_link_consume_type m_link_consume;
  using _m_link_distance_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _m_link_distance_type m_link_distance;
  using _m_via_info_type =
    std::vector<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>>;
  _m_via_info_type m_via_info;
  using _m_energy_consume_type =
    deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator>;
  _m_energy_consume_type m_energy_consume;

  // setters for named parameter idiom
  Type & set__m_is_elec_route(
    const bool & _arg)
  {
    this->m_is_elec_route = _arg;
    return *this;
  }
  Type & set__m_link_consume_size_word(
    const bool & _arg)
  {
    this->m_link_consume_size_word = _arg;
    return *this;
  }
  Type & set__m_traffic_info(
    const int32_t & _arg)
  {
    this->m_traffic_info = _arg;
    return *this;
  }
  Type & set__m_energy_unit(
    const int32_t & _arg)
  {
    this->m_energy_unit = _arg;
    return *this;
  }
  Type & set__m_path_flag(
    const int32_t & _arg)
  {
    this->m_path_flag = _arg;
    return *this;
  }
  Type & set__m_energy_sum(
    const int32_t & _arg)
  {
    this->m_energy_sum = _arg;
    return *this;
  }
  Type & set__m_link_num(
    const int32_t & _arg)
  {
    this->m_link_num = _arg;
    return *this;
  }
  Type & set__m_link_consume(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->m_link_consume = _arg;
    return *this;
  }
  Type & set__m_link_distance(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->m_link_distance = _arg;
    return *this;
  }
  Type & set__m_via_info(
    const std::vector<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->m_via_info = _arg;
    return *this;
  }
  Type & set__m_energy_consume(
    const deva_navi_msgs::msg::EnergyConsumeProto_<ContainerAllocator> & _arg)
  {
    this->m_energy_consume = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__ElecPathInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__ElecPathInfoProto
    std::shared_ptr<deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ElecPathInfoProto_ & other) const
  {
    if (this->m_is_elec_route != other.m_is_elec_route) {
      return false;
    }
    if (this->m_link_consume_size_word != other.m_link_consume_size_word) {
      return false;
    }
    if (this->m_traffic_info != other.m_traffic_info) {
      return false;
    }
    if (this->m_energy_unit != other.m_energy_unit) {
      return false;
    }
    if (this->m_path_flag != other.m_path_flag) {
      return false;
    }
    if (this->m_energy_sum != other.m_energy_sum) {
      return false;
    }
    if (this->m_link_num != other.m_link_num) {
      return false;
    }
    if (this->m_link_consume != other.m_link_consume) {
      return false;
    }
    if (this->m_link_distance != other.m_link_distance) {
      return false;
    }
    if (this->m_via_info != other.m_via_info) {
      return false;
    }
    if (this->m_energy_consume != other.m_energy_consume) {
      return false;
    }
    return true;
  }
  bool operator!=(const ElecPathInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ElecPathInfoProto_

// alias to use template instance with default allocator
using ElecPathInfoProto =
  deva_navi_msgs::msg::ElecPathInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ELEC_PATH_INFO_PROTO__STRUCT_HPP_
