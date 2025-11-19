// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'geo'
#include "deva_gaode_routing_msgs/msg/detail/center_point__struct.hpp"
// Member 'lanes'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane__struct.hpp"
// Member 'lane_connect'
#include "deva_gaode_routing_msgs/msg/detail/sd_pro_lane_connect__struct.hpp"
// Member 'trfc_signs'
#include "deva_gaode_routing_msgs/msg/detail/trfc_sign__struct.hpp"
// Member 'restriction'
#include "deva_gaode_routing_msgs/msg/detail/restriction__struct.hpp"
// Member 'cross_point'
#include "deva_gaode_routing_msgs/msg/detail/cross_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProRoad __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__SdProRoad __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SdProRoad_
{
  using Type = SdProRoad_<ContainerAllocator>;

  explicit SdProRoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->road_kind = 0ul;
      this->direction = 0ul;
      this->lane_count = 0ul;
      this->length = 0.0;
      this->speed_limit_min = 0ul;
      this->speed_limit_max = 0ul;
      this->start_angle = 0.0;
      this->end_angle = 0.0;
      this->product_type = 0ul;
      this->s_node_id = 0ull;
      this->e_node_id = 0ull;
      this->joint_type = 0ul;
      this->road_name = "";
    }
  }

  explicit SdProRoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : road_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->road_kind = 0ul;
      this->direction = 0ul;
      this->lane_count = 0ul;
      this->length = 0.0;
      this->speed_limit_min = 0ul;
      this->speed_limit_max = 0ul;
      this->start_angle = 0.0;
      this->end_angle = 0.0;
      this->product_type = 0ul;
      this->s_node_id = 0ull;
      this->e_node_id = 0ull;
      this->joint_type = 0ul;
      this->road_name = "";
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _road_kind_type =
    uint32_t;
  _road_kind_type road_kind;
  using _direction_type =
    uint32_t;
  _direction_type direction;
  using _forms_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _forms_type forms;
  using _lane_count_type =
    uint32_t;
  _lane_count_type lane_count;
  using _length_type =
    double;
  _length_type length;
  using _speed_limit_min_type =
    uint32_t;
  _speed_limit_min_type speed_limit_min;
  using _speed_limit_max_type =
    uint32_t;
  _speed_limit_max_type speed_limit_max;
  using _start_angle_type =
    double;
  _start_angle_type start_angle;
  using _end_angle_type =
    double;
  _end_angle_type end_angle;
  using _geo_type =
    std::vector<deva_gaode_routing_msgs::msg::CenterPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::CenterPoint_<ContainerAllocator>>>;
  _geo_type geo;
  using _lanes_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>>>;
  _lanes_type lanes;
  using _next_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _next_ids_type next_ids;
  using _pre_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _pre_ids_type pre_ids;
  using _product_type_type =
    uint32_t;
  _product_type_type product_type;
  using _lane_connect_type =
    std::vector<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>>>;
  _lane_connect_type lane_connect;
  using _trfc_signs_type =
    std::vector<deva_gaode_routing_msgs::msg::TrfcSign_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::TrfcSign_<ContainerAllocator>>>;
  _trfc_signs_type trfc_signs;
  using _s_node_id_type =
    uint64_t;
  _s_node_id_type s_node_id;
  using _e_node_id_type =
    uint64_t;
  _e_node_id_type e_node_id;
  using _joint_type_type =
    uint32_t;
  _joint_type_type joint_type;
  using _road_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _road_name_type road_name;
  using _restriction_type =
    std::vector<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>>>;
  _restriction_type restriction;
  using _cross_point_type =
    std::vector<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>>>;
  _cross_point_type cross_point;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__road_kind(
    const uint32_t & _arg)
  {
    this->road_kind = _arg;
    return *this;
  }
  Type & set__direction(
    const uint32_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__forms(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->forms = _arg;
    return *this;
  }
  Type & set__lane_count(
    const uint32_t & _arg)
  {
    this->lane_count = _arg;
    return *this;
  }
  Type & set__length(
    const double & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__speed_limit_min(
    const uint32_t & _arg)
  {
    this->speed_limit_min = _arg;
    return *this;
  }
  Type & set__speed_limit_max(
    const uint32_t & _arg)
  {
    this->speed_limit_max = _arg;
    return *this;
  }
  Type & set__start_angle(
    const double & _arg)
  {
    this->start_angle = _arg;
    return *this;
  }
  Type & set__end_angle(
    const double & _arg)
  {
    this->end_angle = _arg;
    return *this;
  }
  Type & set__geo(
    const std::vector<deva_gaode_routing_msgs::msg::CenterPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::CenterPoint_<ContainerAllocator>>> & _arg)
  {
    this->geo = _arg;
    return *this;
  }
  Type & set__lanes(
    const std::vector<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLane_<ContainerAllocator>>> & _arg)
  {
    this->lanes = _arg;
    return *this;
  }
  Type & set__next_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->next_ids = _arg;
    return *this;
  }
  Type & set__pre_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->pre_ids = _arg;
    return *this;
  }
  Type & set__product_type(
    const uint32_t & _arg)
  {
    this->product_type = _arg;
    return *this;
  }
  Type & set__lane_connect(
    const std::vector<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::SdProLaneConnect_<ContainerAllocator>>> & _arg)
  {
    this->lane_connect = _arg;
    return *this;
  }
  Type & set__trfc_signs(
    const std::vector<deva_gaode_routing_msgs::msg::TrfcSign_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::TrfcSign_<ContainerAllocator>>> & _arg)
  {
    this->trfc_signs = _arg;
    return *this;
  }
  Type & set__s_node_id(
    const uint64_t & _arg)
  {
    this->s_node_id = _arg;
    return *this;
  }
  Type & set__e_node_id(
    const uint64_t & _arg)
  {
    this->e_node_id = _arg;
    return *this;
  }
  Type & set__joint_type(
    const uint32_t & _arg)
  {
    this->joint_type = _arg;
    return *this;
  }
  Type & set__road_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->road_name = _arg;
    return *this;
  }
  Type & set__restriction(
    const std::vector<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Restriction_<ContainerAllocator>>> & _arg)
  {
    this->restriction = _arg;
    return *this;
  }
  Type & set__cross_point(
    const std::vector<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::CrossPoint_<ContainerAllocator>>> & _arg)
  {
    this->cross_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__SdProRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::SdProRoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SdProRoad_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->road_kind != other.road_kind) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->forms != other.forms) {
      return false;
    }
    if (this->lane_count != other.lane_count) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->speed_limit_min != other.speed_limit_min) {
      return false;
    }
    if (this->speed_limit_max != other.speed_limit_max) {
      return false;
    }
    if (this->start_angle != other.start_angle) {
      return false;
    }
    if (this->end_angle != other.end_angle) {
      return false;
    }
    if (this->geo != other.geo) {
      return false;
    }
    if (this->lanes != other.lanes) {
      return false;
    }
    if (this->next_ids != other.next_ids) {
      return false;
    }
    if (this->pre_ids != other.pre_ids) {
      return false;
    }
    if (this->product_type != other.product_type) {
      return false;
    }
    if (this->lane_connect != other.lane_connect) {
      return false;
    }
    if (this->trfc_signs != other.trfc_signs) {
      return false;
    }
    if (this->s_node_id != other.s_node_id) {
      return false;
    }
    if (this->e_node_id != other.e_node_id) {
      return false;
    }
    if (this->joint_type != other.joint_type) {
      return false;
    }
    if (this->road_name != other.road_name) {
      return false;
    }
    if (this->restriction != other.restriction) {
      return false;
    }
    if (this->cross_point != other.cross_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const SdProRoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SdProRoad_

// alias to use template instance with default allocator
using SdProRoad =
  deva_gaode_routing_msgs::msg::SdProRoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_ROAD__STRUCT_HPP_
