// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LaneTopo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'out_link_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'lane_conds'
#include "deva_gaode_routing_msgs/msg/detail/lane_cond__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneTopo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LaneTopo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaneTopo_
{
  using Type = LaneTopo_<ContainerAllocator>;

  explicit LaneTopo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_arrow = 0;
      this->lane_flag = 0;
      this->bus_flag = 0;
      this->laneinfo_cond = 0;
      this->direction = 0;
      this->date = "";
      this->vehicles = 0;
      this->special_times = 0;
    }
  }

  explicit LaneTopo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : date(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_arrow = 0;
      this->lane_flag = 0;
      this->bus_flag = 0;
      this->laneinfo_cond = 0;
      this->direction = 0;
      this->date = "";
      this->vehicles = 0;
      this->special_times = 0;
    }
  }

  // field types and members
  using _lane_arrow_type =
    uint16_t;
  _lane_arrow_type lane_arrow;
  using _lane_flag_type =
    uint16_t;
  _lane_flag_type lane_flag;
  using _bus_flag_type =
    uint16_t;
  _bus_flag_type bus_flag;
  using _out_link_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _out_link_ids_type out_link_ids;
  using _lane_conds_type =
    std::vector<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>>>;
  _lane_conds_type lane_conds;
  using _laneinfo_cond_type =
    uint16_t;
  _laneinfo_cond_type laneinfo_cond;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _date_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _date_type date;
  using _vehicles_type =
    uint8_t;
  _vehicles_type vehicles;
  using _special_times_type =
    uint8_t;
  _special_times_type special_times;

  // setters for named parameter idiom
  Type & set__lane_arrow(
    const uint16_t & _arg)
  {
    this->lane_arrow = _arg;
    return *this;
  }
  Type & set__lane_flag(
    const uint16_t & _arg)
  {
    this->lane_flag = _arg;
    return *this;
  }
  Type & set__bus_flag(
    const uint16_t & _arg)
  {
    this->bus_flag = _arg;
    return *this;
  }
  Type & set__out_link_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->out_link_ids = _arg;
    return *this;
  }
  Type & set__lane_conds(
    const std::vector<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneCond_<ContainerAllocator>>> & _arg)
  {
    this->lane_conds = _arg;
    return *this;
  }
  Type & set__laneinfo_cond(
    const uint16_t & _arg)
  {
    this->laneinfo_cond = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__date(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->date = _arg;
    return *this;
  }
  Type & set__vehicles(
    const uint8_t & _arg)
  {
    this->vehicles = _arg;
    return *this;
  }
  Type & set__special_times(
    const uint8_t & _arg)
  {
    this->special_times = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneTopo
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LaneTopo
    std::shared_ptr<deva_gaode_routing_msgs::msg::LaneTopo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaneTopo_ & other) const
  {
    if (this->lane_arrow != other.lane_arrow) {
      return false;
    }
    if (this->lane_flag != other.lane_flag) {
      return false;
    }
    if (this->bus_flag != other.bus_flag) {
      return false;
    }
    if (this->out_link_ids != other.out_link_ids) {
      return false;
    }
    if (this->lane_conds != other.lane_conds) {
      return false;
    }
    if (this->laneinfo_cond != other.laneinfo_cond) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->date != other.date) {
      return false;
    }
    if (this->vehicles != other.vehicles) {
      return false;
    }
    if (this->special_times != other.special_times) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaneTopo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaneTopo_

// alias to use template instance with default allocator
using LaneTopo =
  deva_gaode_routing_msgs::msg::LaneTopo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE_TOPO__STRUCT_HPP_
