// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/LANE.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'id'
// Member 'feature_point_id_s'
// Member 'previous_id_s'
// Member 'next_id_s'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'lane_group_id_type'
#include "deva_gaode_routing_msgs/msg/detail/lane_group_id_type__struct.hpp"
// Member 'lane_restricts'
#include "deva_gaode_routing_msgs/msg/detail/lane_restriction__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__LANE __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__LANE __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LANE_
{
  using Type = LANE_<ContainerAllocator>;

  explicit LANE_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init),
    lane_group_id_type(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->change_type = 0;
      this->lane_width = 0.0f;
      this->lane_start_width = 0.0f;
      this->lane_end_width = 0.0f;
      this->seq_num = 0;
      this->lsl_type = 0;
    }
  }

  explicit LANE_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init),
    lane_group_id_type(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->direction = 0;
      this->change_type = 0;
      this->lane_width = 0.0f;
      this->lane_start_width = 0.0f;
      this->lane_end_width = 0.0f;
      this->seq_num = 0;
      this->lsl_type = 0;
    }
  }

  // field types and members
  using _id_type =
    deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>;
  _id_type id;
  using _lane_group_id_type_type =
    deva_gaode_routing_msgs::msg::LaneGroupIDType_<ContainerAllocator>;
  _lane_group_id_type_type lane_group_id_type;
  using _feature_point_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _feature_point_id_s_type feature_point_id_s;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _lane_type_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _lane_type_type lane_type;
  using _left_border_types_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _left_border_types_type left_border_types;
  using _right_border_types_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _right_border_types_type right_border_types;
  using _left_border_colors_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _left_border_colors_type left_border_colors;
  using _right_border_colors_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _right_border_colors_type right_border_colors;
  using _change_type_type =
    uint8_t;
  _change_type_type change_type;
  using _lane_width_type =
    float;
  _lane_width_type lane_width;
  using _lane_start_width_type =
    float;
  _lane_start_width_type lane_start_width;
  using _lane_end_width_type =
    float;
  _lane_end_width_type lane_end_width;
  using _seq_num_type =
    uint8_t;
  _seq_num_type seq_num;
  using _previous_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _previous_id_s_type previous_id_s;
  using _next_id_s_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _next_id_s_type next_id_s;
  using _lsl_type_type =
    uint8_t;
  _lsl_type_type lsl_type;
  using _arrows_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _arrows_type arrows;
  using _lane_restricts_type =
    std::vector<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>>>;
  _lane_restricts_type lane_restricts;

  // setters for named parameter idiom
  Type & set__id(
    const deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__lane_group_id_type(
    const deva_gaode_routing_msgs::msg::LaneGroupIDType_<ContainerAllocator> & _arg)
  {
    this->lane_group_id_type = _arg;
    return *this;
  }
  Type & set__feature_point_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->feature_point_id_s = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__lane_type(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->lane_type = _arg;
    return *this;
  }
  Type & set__left_border_types(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->left_border_types = _arg;
    return *this;
  }
  Type & set__right_border_types(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->right_border_types = _arg;
    return *this;
  }
  Type & set__left_border_colors(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->left_border_colors = _arg;
    return *this;
  }
  Type & set__right_border_colors(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->right_border_colors = _arg;
    return *this;
  }
  Type & set__change_type(
    const uint8_t & _arg)
  {
    this->change_type = _arg;
    return *this;
  }
  Type & set__lane_width(
    const float & _arg)
  {
    this->lane_width = _arg;
    return *this;
  }
  Type & set__lane_start_width(
    const float & _arg)
  {
    this->lane_start_width = _arg;
    return *this;
  }
  Type & set__lane_end_width(
    const float & _arg)
  {
    this->lane_end_width = _arg;
    return *this;
  }
  Type & set__seq_num(
    const uint8_t & _arg)
  {
    this->seq_num = _arg;
    return *this;
  }
  Type & set__previous_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->previous_id_s = _arg;
    return *this;
  }
  Type & set__next_id_s(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->next_id_s = _arg;
    return *this;
  }
  Type & set__lsl_type(
    const uint8_t & _arg)
  {
    this->lsl_type = _arg;
    return *this;
  }
  Type & set__arrows(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->arrows = _arg;
    return *this;
  }
  Type & set__lane_restricts(
    const std::vector<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::LaneRestriction_<ContainerAllocator>>> & _arg)
  {
    this->lane_restricts = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LANE
    std::shared_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__LANE
    std::shared_ptr<deva_gaode_routing_msgs::msg::LANE_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LANE_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->lane_group_id_type != other.lane_group_id_type) {
      return false;
    }
    if (this->feature_point_id_s != other.feature_point_id_s) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->lane_type != other.lane_type) {
      return false;
    }
    if (this->left_border_types != other.left_border_types) {
      return false;
    }
    if (this->right_border_types != other.right_border_types) {
      return false;
    }
    if (this->left_border_colors != other.left_border_colors) {
      return false;
    }
    if (this->right_border_colors != other.right_border_colors) {
      return false;
    }
    if (this->change_type != other.change_type) {
      return false;
    }
    if (this->lane_width != other.lane_width) {
      return false;
    }
    if (this->lane_start_width != other.lane_start_width) {
      return false;
    }
    if (this->lane_end_width != other.lane_end_width) {
      return false;
    }
    if (this->seq_num != other.seq_num) {
      return false;
    }
    if (this->previous_id_s != other.previous_id_s) {
      return false;
    }
    if (this->next_id_s != other.next_id_s) {
      return false;
    }
    if (this->lsl_type != other.lsl_type) {
      return false;
    }
    if (this->arrows != other.arrows) {
      return false;
    }
    if (this->lane_restricts != other.lane_restricts) {
      return false;
    }
    return true;
  }
  bool operator!=(const LANE_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LANE_

// alias to use template instance with default allocator
using LANE =
  deva_gaode_routing_msgs::msg::LANE_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__LANE__STRUCT_HPP_
