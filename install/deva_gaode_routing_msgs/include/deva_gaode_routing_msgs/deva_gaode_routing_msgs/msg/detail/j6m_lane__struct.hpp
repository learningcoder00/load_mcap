// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/J6mLane.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lane_id'
// Member 'left_lane_marking_ids'
// Member 'right_lane_marking_ids'
// Member 'lane_successor_lane_ids'
// Member 'lane_predecessor_lane_ids'
// Member 'lane_referenced_roadobject_ids'
#include "deva_gaode_routing_msgs/msg/detail/link_id_type__struct.hpp"
// Member 'lane_coordinates'
#include "deva_gaode_routing_msgs/msg/detail/coordinate__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mLane __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__J6mLane __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct J6mLane_
{
  using Type = J6mLane_<ContainerAllocator>;

  explicit J6mLane_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_seq_num = 0;
      this->lane_type = 0;
      this->lane_speed_limit = "";
      this->lane_max_width = 0ul;
      this->lane_min_width = 0ul;
      this->lane_adas = "";
      this->lane_length = 0ul;
      this->lane_turn_direction = 0;
      this->lane_confidence = 0ul;
      this->lane_travel_direction = 0;
      this->lane_empir_speed = 0;
      this->lane_empir_traj_count = 0;
      this->lane_host_link_id = 0ull;
      this->lane_host_link_type = 0;
    }
  }

  explicit J6mLane_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_id(_alloc, _init),
    lane_speed_limit(_alloc),
    lane_adas(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->lane_seq_num = 0;
      this->lane_type = 0;
      this->lane_speed_limit = "";
      this->lane_max_width = 0ul;
      this->lane_min_width = 0ul;
      this->lane_adas = "";
      this->lane_length = 0ul;
      this->lane_turn_direction = 0;
      this->lane_confidence = 0ul;
      this->lane_travel_direction = 0;
      this->lane_empir_speed = 0;
      this->lane_empir_traj_count = 0;
      this->lane_host_link_id = 0ull;
      this->lane_host_link_type = 0;
    }
  }

  // field types and members
  using _lane_id_type =
    deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>;
  _lane_id_type lane_id;
  using _lane_seq_num_type =
    uint8_t;
  _lane_seq_num_type lane_seq_num;
  using _lane_type_type =
    uint8_t;
  _lane_type_type lane_type;
  using _lane_speed_limit_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lane_speed_limit_type lane_speed_limit;
  using _lane_max_width_type =
    uint32_t;
  _lane_max_width_type lane_max_width;
  using _lane_min_width_type =
    uint32_t;
  _lane_min_width_type lane_min_width;
  using _left_lane_marking_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _left_lane_marking_ids_type left_lane_marking_ids;
  using _right_lane_marking_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _right_lane_marking_ids_type right_lane_marking_ids;
  using _lane_adas_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lane_adas_type lane_adas;
  using _lane_length_type =
    uint32_t;
  _lane_length_type lane_length;
  using _lane_turn_direction_type =
    uint8_t;
  _lane_turn_direction_type lane_turn_direction;
  using _lane_confidence_type =
    uint32_t;
  _lane_confidence_type lane_confidence;
  using _lane_travel_direction_type =
    uint8_t;
  _lane_travel_direction_type lane_travel_direction;
  using _lane_empir_speed_type =
    uint8_t;
  _lane_empir_speed_type lane_empir_speed;
  using _lane_empir_traj_count_type =
    uint8_t;
  _lane_empir_traj_count_type lane_empir_traj_count;
  using _lane_host_link_id_type =
    uint64_t;
  _lane_host_link_id_type lane_host_link_id;
  using _lane_host_link_type_type =
    uint8_t;
  _lane_host_link_type_type lane_host_link_type;
  using _lane_successor_lane_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _lane_successor_lane_ids_type lane_successor_lane_ids;
  using _lane_predecessor_lane_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _lane_predecessor_lane_ids_type lane_predecessor_lane_ids;
  using _lane_referenced_roadobject_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>>;
  _lane_referenced_roadobject_ids_type lane_referenced_roadobject_ids;
  using _lane_coordinates_type =
    std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>>;
  _lane_coordinates_type lane_coordinates;

  // setters for named parameter idiom
  Type & set__lane_id(
    const deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator> & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__lane_seq_num(
    const uint8_t & _arg)
  {
    this->lane_seq_num = _arg;
    return *this;
  }
  Type & set__lane_type(
    const uint8_t & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__lane_speed_limit(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lane_speed_limit = _arg;
    return *this;
  }
  Type & set__lane_max_width(
    const uint32_t & _arg)
  {
    this->lane_max_width = _arg;
    return *this;
  }
  Type & set__lane_min_width(
    const uint32_t & _arg)
  {
    this->lane_min_width = _arg;
    return *this;
  }
  Type & set__left_lane_marking_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->left_lane_marking_ids = _arg;
    return *this;
  }
  Type & set__right_lane_marking_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->right_lane_marking_ids = _arg;
    return *this;
  }
  Type & set__lane_adas(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lane_adas = _arg;
    return *this;
  }
  Type & set__lane_length(
    const uint32_t & _arg)
  {
    this->lane_length = _arg;
    return *this;
  }
  Type & set__lane_turn_direction(
    const uint8_t & _arg)
  {
    this->lane_turn_direction = _arg;
    return *this;
  }
  Type & set__lane_confidence(
    const uint32_t & _arg)
  {
    this->lane_confidence = _arg;
    return *this;
  }
  Type & set__lane_travel_direction(
    const uint8_t & _arg)
  {
    this->lane_travel_direction = _arg;
    return *this;
  }
  Type & set__lane_empir_speed(
    const uint8_t & _arg)
  {
    this->lane_empir_speed = _arg;
    return *this;
  }
  Type & set__lane_empir_traj_count(
    const uint8_t & _arg)
  {
    this->lane_empir_traj_count = _arg;
    return *this;
  }
  Type & set__lane_host_link_id(
    const uint64_t & _arg)
  {
    this->lane_host_link_id = _arg;
    return *this;
  }
  Type & set__lane_host_link_type(
    const uint8_t & _arg)
  {
    this->lane_host_link_type = _arg;
    return *this;
  }
  Type & set__lane_successor_lane_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->lane_successor_lane_ids = _arg;
    return *this;
  }
  Type & set__lane_predecessor_lane_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->lane_predecessor_lane_ids = _arg;
    return *this;
  }
  Type & set__lane_referenced_roadobject_ids(
    const std::vector<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LinkIDType_<ContainerAllocator>>> & _arg)
  {
    this->lane_referenced_roadobject_ids = _arg;
    return *this;
  }
  Type & set__lane_coordinates(
    const std::vector<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Coordinate_<ContainerAllocator>>> & _arg)
  {
    this->lane_coordinates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mLane
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__J6mLane
    std::shared_ptr<deva_gaode_routing_msgs::msg::J6mLane_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const J6mLane_ & other) const
  {
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->lane_seq_num != other.lane_seq_num) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->lane_speed_limit != other.lane_speed_limit) {
      return false;
    }
    if (this->lane_max_width != other.lane_max_width) {
      return false;
    }
    if (this->lane_min_width != other.lane_min_width) {
      return false;
    }
    if (this->left_lane_marking_ids != other.left_lane_marking_ids) {
      return false;
    }
    if (this->right_lane_marking_ids != other.right_lane_marking_ids) {
      return false;
    }
    if (this->lane_adas != other.lane_adas) {
      return false;
    }
    if (this->lane_length != other.lane_length) {
      return false;
    }
    if (this->lane_turn_direction != other.lane_turn_direction) {
      return false;
    }
    if (this->lane_confidence != other.lane_confidence) {
      return false;
    }
    if (this->lane_travel_direction != other.lane_travel_direction) {
      return false;
    }
    if (this->lane_empir_speed != other.lane_empir_speed) {
      return false;
    }
    if (this->lane_empir_traj_count != other.lane_empir_traj_count) {
      return false;
    }
    if (this->lane_host_link_id != other.lane_host_link_id) {
      return false;
    }
    if (this->lane_host_link_type != other.lane_host_link_type) {
      return false;
    }
    if (this->lane_successor_lane_ids != other.lane_successor_lane_ids) {
      return false;
    }
    if (this->lane_predecessor_lane_ids != other.lane_predecessor_lane_ids) {
      return false;
    }
    if (this->lane_referenced_roadobject_ids != other.lane_referenced_roadobject_ids) {
      return false;
    }
    if (this->lane_coordinates != other.lane_coordinates) {
      return false;
    }
    return true;
  }
  bool operator!=(const J6mLane_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct J6mLane_

// alias to use template instance with default allocator
using J6mLane =
  deva_gaode_routing_msgs::msg::J6mLane_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__J6M_LANE__STRUCT_HPP_
