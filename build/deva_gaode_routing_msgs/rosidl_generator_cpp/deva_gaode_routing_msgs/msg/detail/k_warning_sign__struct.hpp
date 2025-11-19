// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/KWarningSign.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'in_link_id'
// Member 'pass_link_id_s'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'node_id'
#include "deva_gaode_routing_msgs/msg/detail/node_id_type__struct.hpp"
// Member 'coordinate'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__KWarningSign __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__KWarningSign __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct KWarningSign_
{
  using Type = KWarningSign_<ContainerAllocator>;

  explicit KWarningSign_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_init),
    node_id(_init),
    pass_link_id_s(_init),
    coordinate(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trc_kind = 0;
      this->forcetold_dist = 0;
      this->control_dist = 0;
      this->link_direction = 0;
      this->descript = "";
    }
  }

  explicit KWarningSign_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : in_link_id(_alloc, _init),
    node_id(_alloc, _init),
    pass_link_id_s(_alloc, _init),
    descript(_alloc),
    coordinate(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trc_kind = 0;
      this->forcetold_dist = 0;
      this->control_dist = 0;
      this->link_direction = 0;
      this->descript = "";
    }
  }

  // field types and members
  using _in_link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _in_link_id_type in_link_id;
  using _node_id_type =
    deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator>;
  _node_id_type node_id;
  using _pass_link_id_s_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _pass_link_id_s_type pass_link_id_s;
  using _trc_kind_type =
    uint16_t;
  _trc_kind_type trc_kind;
  using _forcetold_dist_type =
    uint16_t;
  _forcetold_dist_type forcetold_dist;
  using _control_dist_type =
    uint16_t;
  _control_dist_type control_dist;
  using _link_direction_type =
    uint8_t;
  _link_direction_type link_direction;
  using _descript_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _descript_type descript;
  using _coordinate_type =
    deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>;
  _coordinate_type coordinate;

  // setters for named parameter idiom
  Type & set__in_link_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->in_link_id = _arg;
    return *this;
  }
  Type & set__node_id(
    const deva_gaode_routing_msgs::msg::NodeIDType_<ContainerAllocator> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__pass_link_id_s(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->pass_link_id_s = _arg;
    return *this;
  }
  Type & set__trc_kind(
    const uint16_t & _arg)
  {
    this->trc_kind = _arg;
    return *this;
  }
  Type & set__forcetold_dist(
    const uint16_t & _arg)
  {
    this->forcetold_dist = _arg;
    return *this;
  }
  Type & set__control_dist(
    const uint16_t & _arg)
  {
    this->control_dist = _arg;
    return *this;
  }
  Type & set__link_direction(
    const uint8_t & _arg)
  {
    this->link_direction = _arg;
    return *this;
  }
  Type & set__descript(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->descript = _arg;
    return *this;
  }
  Type & set__coordinate(
    const deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator> & _arg)
  {
    this->coordinate = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__KWarningSign
    std::shared_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__KWarningSign
    std::shared_ptr<deva_gaode_routing_msgs::msg::KWarningSign_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const KWarningSign_ & other) const
  {
    if (this->in_link_id != other.in_link_id) {
      return false;
    }
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->pass_link_id_s != other.pass_link_id_s) {
      return false;
    }
    if (this->trc_kind != other.trc_kind) {
      return false;
    }
    if (this->forcetold_dist != other.forcetold_dist) {
      return false;
    }
    if (this->control_dist != other.control_dist) {
      return false;
    }
    if (this->link_direction != other.link_direction) {
      return false;
    }
    if (this->descript != other.descript) {
      return false;
    }
    if (this->coordinate != other.coordinate) {
      return false;
    }
    return true;
  }
  bool operator!=(const KWarningSign_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct KWarningSign_

// alias to use template instance with default allocator
using KWarningSign =
  deva_gaode_routing_msgs::msg::KWarningSign_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__K_WARNING_SIGN__STRUCT_HPP_
