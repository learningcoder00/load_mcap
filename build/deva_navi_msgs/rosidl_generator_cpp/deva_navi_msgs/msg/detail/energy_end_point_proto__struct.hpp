// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/EnergyEndPointProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'show'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__EnergyEndPointProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__EnergyEndPointProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnergyEndPointProto_
{
  using Type = EnergyEndPointProto_<ContainerAllocator>;

  explicit EnergyEndPointProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : show(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_idx = 0l;
      this->link_index = 0l;
    }
  }

  explicit EnergyEndPointProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : show(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->segment_idx = 0l;
      this->link_index = 0l;
    }
  }

  // field types and members
  using _show_type =
    deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>;
  _show_type show;
  using _segment_idx_type =
    int32_t;
  _segment_idx_type segment_idx;
  using _link_index_type =
    int32_t;
  _link_index_type link_index;

  // setters for named parameter idiom
  Type & set__show(
    const deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator> & _arg)
  {
    this->show = _arg;
    return *this;
  }
  Type & set__segment_idx(
    const int32_t & _arg)
  {
    this->segment_idx = _arg;
    return *this;
  }
  Type & set__link_index(
    const int32_t & _arg)
  {
    this->link_index = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__EnergyEndPointProto
    std::shared_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__EnergyEndPointProto
    std::shared_ptr<deva_navi_msgs::msg::EnergyEndPointProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnergyEndPointProto_ & other) const
  {
    if (this->show != other.show) {
      return false;
    }
    if (this->segment_idx != other.segment_idx) {
      return false;
    }
    if (this->link_index != other.link_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnergyEndPointProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnergyEndPointProto_

// alias to use template instance with default allocator
using EnergyEndPointProto =
  deva_navi_msgs::msg::EnergyEndPointProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ENERGY_END_POINT_PROTO__STRUCT_HPP_
