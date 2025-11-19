// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LinkAttribute.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'link_id'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LinkAttribute __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LinkAttribute __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkAttribute_
{
  using Type = LinkAttribute_<ContainerAllocator>;

  explicit LinkAttribute_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0l;
      this->link_direction = 0;
      this->lane_num_sum = 0;
      this->lane_num_s2e = 0;
      this->lane_num_e2s = 0;
      this->speed_limit_s2e = 0;
      this->speed_limit_e2s = 0;
      this->road_class = 0;
      this->toll_type = 0;
      this->coverage_status = 0;
      this->function_class = 0;
      this->construction_type = 0;
      this->condition_type = 0;
      this->speed_class = 0;
      this->admin_code = 0ul;
      this->compacity = 0;
      this->is_special = false;
      this->is_in_city = false;
      this->is_cross_tile = false;
    }
  }

  explicit LinkAttribute_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->length = 0l;
      this->link_direction = 0;
      this->lane_num_sum = 0;
      this->lane_num_s2e = 0;
      this->lane_num_e2s = 0;
      this->speed_limit_s2e = 0;
      this->speed_limit_e2s = 0;
      this->road_class = 0;
      this->toll_type = 0;
      this->coverage_status = 0;
      this->function_class = 0;
      this->construction_type = 0;
      this->condition_type = 0;
      this->speed_class = 0;
      this->admin_code = 0ul;
      this->compacity = 0;
      this->is_special = false;
      this->is_in_city = false;
      this->is_cross_tile = false;
    }
  }

  // field types and members
  using _link_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _link_id_type link_id;
  using _length_type =
    int32_t;
  _length_type length;
  using _link_direction_type =
    uint8_t;
  _link_direction_type link_direction;
  using _lane_num_sum_type =
    uint8_t;
  _lane_num_sum_type lane_num_sum;
  using _lane_num_s2e_type =
    uint8_t;
  _lane_num_s2e_type lane_num_s2e;
  using _lane_num_e2s_type =
    uint8_t;
  _lane_num_e2s_type lane_num_e2s;
  using _speed_limit_s2e_type =
    uint8_t;
  _speed_limit_s2e_type speed_limit_s2e;
  using _speed_limit_e2s_type =
    uint8_t;
  _speed_limit_e2s_type speed_limit_e2s;
  using _road_class_type =
    int8_t;
  _road_class_type road_class;
  using _toll_type_type =
    uint8_t;
  _toll_type_type toll_type;
  using _road_kinds_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _road_kinds_type road_kinds;
  using _coverage_status_type =
    uint16_t;
  _coverage_status_type coverage_status;
  using _function_class_type =
    uint8_t;
  _function_class_type function_class;
  using _construction_type_type =
    uint8_t;
  _construction_type_type construction_type;
  using _condition_type_type =
    uint8_t;
  _condition_type_type condition_type;
  using _speed_class_type =
    uint8_t;
  _speed_class_type speed_class;
  using _admin_code_type =
    uint32_t;
  _admin_code_type admin_code;
  using _vehicle_types_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _vehicle_types_type vehicle_types;
  using _compacity_type =
    uint8_t;
  _compacity_type compacity;
  using _is_special_type =
    bool;
  _is_special_type is_special;
  using _is_in_city_type =
    bool;
  _is_in_city_type is_in_city;
  using _is_cross_tile_type =
    bool;
  _is_cross_tile_type is_cross_tile;

  // setters for named parameter idiom
  Type & set__link_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->link_id = _arg;
    return *this;
  }
  Type & set__length(
    const int32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__link_direction(
    const uint8_t & _arg)
  {
    this->link_direction = _arg;
    return *this;
  }
  Type & set__lane_num_sum(
    const uint8_t & _arg)
  {
    this->lane_num_sum = _arg;
    return *this;
  }
  Type & set__lane_num_s2e(
    const uint8_t & _arg)
  {
    this->lane_num_s2e = _arg;
    return *this;
  }
  Type & set__lane_num_e2s(
    const uint8_t & _arg)
  {
    this->lane_num_e2s = _arg;
    return *this;
  }
  Type & set__speed_limit_s2e(
    const uint8_t & _arg)
  {
    this->speed_limit_s2e = _arg;
    return *this;
  }
  Type & set__speed_limit_e2s(
    const uint8_t & _arg)
  {
    this->speed_limit_e2s = _arg;
    return *this;
  }
  Type & set__road_class(
    const int8_t & _arg)
  {
    this->road_class = _arg;
    return *this;
  }
  Type & set__toll_type(
    const uint8_t & _arg)
  {
    this->toll_type = _arg;
    return *this;
  }
  Type & set__road_kinds(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->road_kinds = _arg;
    return *this;
  }
  Type & set__coverage_status(
    const uint16_t & _arg)
  {
    this->coverage_status = _arg;
    return *this;
  }
  Type & set__function_class(
    const uint8_t & _arg)
  {
    this->function_class = _arg;
    return *this;
  }
  Type & set__construction_type(
    const uint8_t & _arg)
  {
    this->construction_type = _arg;
    return *this;
  }
  Type & set__condition_type(
    const uint8_t & _arg)
  {
    this->condition_type = _arg;
    return *this;
  }
  Type & set__speed_class(
    const uint8_t & _arg)
  {
    this->speed_class = _arg;
    return *this;
  }
  Type & set__admin_code(
    const uint32_t & _arg)
  {
    this->admin_code = _arg;
    return *this;
  }
  Type & set__vehicle_types(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->vehicle_types = _arg;
    return *this;
  }
  Type & set__compacity(
    const uint8_t & _arg)
  {
    this->compacity = _arg;
    return *this;
  }
  Type & set__is_special(
    const bool & _arg)
  {
    this->is_special = _arg;
    return *this;
  }
  Type & set__is_in_city(
    const bool & _arg)
  {
    this->is_in_city = _arg;
    return *this;
  }
  Type & set__is_cross_tile(
    const bool & _arg)
  {
    this->is_cross_tile = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LinkAttribute
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LinkAttribute
    std::shared_ptr<deva_gaode_routing_msgs::msg::LinkAttribute_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkAttribute_ & other) const
  {
    if (this->link_id != other.link_id) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->link_direction != other.link_direction) {
      return false;
    }
    if (this->lane_num_sum != other.lane_num_sum) {
      return false;
    }
    if (this->lane_num_s2e != other.lane_num_s2e) {
      return false;
    }
    if (this->lane_num_e2s != other.lane_num_e2s) {
      return false;
    }
    if (this->speed_limit_s2e != other.speed_limit_s2e) {
      return false;
    }
    if (this->speed_limit_e2s != other.speed_limit_e2s) {
      return false;
    }
    if (this->road_class != other.road_class) {
      return false;
    }
    if (this->toll_type != other.toll_type) {
      return false;
    }
    if (this->road_kinds != other.road_kinds) {
      return false;
    }
    if (this->coverage_status != other.coverage_status) {
      return false;
    }
    if (this->function_class != other.function_class) {
      return false;
    }
    if (this->construction_type != other.construction_type) {
      return false;
    }
    if (this->condition_type != other.condition_type) {
      return false;
    }
    if (this->speed_class != other.speed_class) {
      return false;
    }
    if (this->admin_code != other.admin_code) {
      return false;
    }
    if (this->vehicle_types != other.vehicle_types) {
      return false;
    }
    if (this->compacity != other.compacity) {
      return false;
    }
    if (this->is_special != other.is_special) {
      return false;
    }
    if (this->is_in_city != other.is_in_city) {
      return false;
    }
    if (this->is_cross_tile != other.is_cross_tile) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinkAttribute_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkAttribute_

// alias to use template instance with default allocator
using LinkAttribute =
  deva_gaode_routing_msgs::msg::LinkAttribute_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LINK_ATTRIBUTE__STRUCT_HPP_
