// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvLine.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'env_points'
#include "environment_model_msgs/msg/detail/env_point__struct.hpp"
// Member 'last_ids'
// Member 'perception_ids'
// Member 'channel_id'
#include "environment_model_msgs/msg/detail/pair_int__struct.hpp"
// Member 'merge_pos'
#include "environment_model_msgs/msg/detail/pair_double_int__struct.hpp"
// Member 'left_ids_map'
// Member 'right_ids_map'
// Member 'overwide_pairs'
#include "environment_model_msgs/msg/detail/map_ids__struct.hpp"
// Member 'road_struct_type'
#include "environment_model_msgs/msg/detail/road_struct_type__struct.hpp"
// Member 'signal_infos'
#include "environment_model_msgs/msg/detail/pair_string__struct.hpp"
// Member 'object_infos'
#include "environment_model_msgs/msg/detail/pair_string_double__struct.hpp"
// Member 'navi_score'
#include "environment_model_msgs/msg/detail/navi_score__struct.hpp"
// Member 'virtual_line_infos'
#include "environment_model_msgs/msg/detail/virtual_line_info__struct.hpp"
// Member 'left_road_bound_line'
// Member 'right_road_bound_line'
#include "environment_model_msgs/msg/detail/vec2d__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvLine __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvLine __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvLine_
{
  using Type = EnvLine_<ContainerAllocator>;

  explicit EnvLine_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_ids(_init),
    road_struct_type(_init),
    navi_score(_init),
    channel_id(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->ego_s = 0.0;
      this->ego_l = 0.0;
      this->is_on_road = false;
      this->routing_status = 0;
      this->is_reverse = false;
      this->enum_turn_scenario = 0;
      this->enum_road_struct_type = 0;
      this->lane_offset = 0.0;
      this->lane_id = "";
      this->lane_seq_id = 0l;
      this->virtual_line_to = false;
      this->midd_line_id = 0l;
      this->usemdriver = false;
    }
  }

  explicit EnvLine_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : perception_ids(_alloc, _init),
    road_struct_type(_alloc, _init),
    navi_score(_alloc, _init),
    lane_id(_alloc),
    channel_id(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0l;
      this->ego_s = 0.0;
      this->ego_l = 0.0;
      this->is_on_road = false;
      this->routing_status = 0;
      this->is_reverse = false;
      this->enum_turn_scenario = 0;
      this->enum_road_struct_type = 0;
      this->lane_offset = 0.0;
      this->lane_id = "";
      this->lane_seq_id = 0l;
      this->virtual_line_to = false;
      this->midd_line_id = 0l;
      this->usemdriver = false;
    }
  }

  // field types and members
  using _env_points_type =
    std::vector<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>>>;
  _env_points_type env_points;
  using _id_type =
    int32_t;
  _id_type id;
  using _last_ids_type =
    std::vector<environment_model_msgs::msg::PairInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairInt_<ContainerAllocator>>>;
  _last_ids_type last_ids;
  using _perception_ids_type =
    environment_model_msgs::msg::PairInt_<ContainerAllocator>;
  _perception_ids_type perception_ids;
  using _ego_s_type =
    double;
  _ego_s_type ego_s;
  using _ego_l_type =
    double;
  _ego_l_type ego_l;
  using _is_on_road_type =
    bool;
  _is_on_road_type is_on_road;
  using _routing_status_type =
    uint8_t;
  _routing_status_type routing_status;
  using _is_reverse_type =
    bool;
  _is_reverse_type is_reverse;
  using _enum_turn_scenario_type =
    uint8_t;
  _enum_turn_scenario_type enum_turn_scenario;
  using _merge_lines_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _merge_lines_type merge_lines;
  using _split_lines_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _split_lines_type split_lines;
  using _merge_pos_type =
    std::vector<environment_model_msgs::msg::PairDoubleInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairDoubleInt_<ContainerAllocator>>>;
  _merge_pos_type merge_pos;
  using _lk_lines_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _lk_lines_type lk_lines;
  using _left_ids_map_type =
    std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>>;
  _left_ids_map_type left_ids_map;
  using _right_ids_map_type =
    std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>>;
  _right_ids_map_type right_ids_map;
  using _enum_road_struct_type_type =
    uint8_t;
  _enum_road_struct_type_type enum_road_struct_type;
  using _road_struct_type_type =
    environment_model_msgs::msg::RoadStructType_<ContainerAllocator>;
  _road_struct_type_type road_struct_type;
  using _signal_infos_type =
    std::vector<environment_model_msgs::msg::PairString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairString_<ContainerAllocator>>>;
  _signal_infos_type signal_infos;
  using _object_infos_type =
    std::vector<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>>>;
  _object_infos_type object_infos;
  using _navi_score_type =
    environment_model_msgs::msg::NaviScore_<ContainerAllocator>;
  _navi_score_type navi_score;
  using _virtual_line_infos_type =
    std::vector<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>>>;
  _virtual_line_infos_type virtual_line_infos;
  using _left_road_bound_line_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _left_road_bound_line_type left_road_bound_line;
  using _right_road_bound_line_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _right_road_bound_line_type right_road_bound_line;
  using _lane_offset_type =
    double;
  _lane_offset_type lane_offset;
  using _lane_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _lane_id_type lane_id;
  using _lane_sequence_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _lane_sequence_type lane_sequence;
  using _lane_seq_id_type =
    int32_t;
  _lane_seq_id_type lane_seq_id;
  using _channel_id_type =
    environment_model_msgs::msg::PairInt_<ContainerAllocator>;
  _channel_id_type channel_id;
  using _virtual_line_to_type =
    bool;
  _virtual_line_to_type virtual_line_to;
  using _midd_line_id_type =
    int32_t;
  _midd_line_id_type midd_line_id;
  using _overwide_pairs_type =
    std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>>;
  _overwide_pairs_type overwide_pairs;
  using _usemdriver_type =
    bool;
  _usemdriver_type usemdriver;

  // setters for named parameter idiom
  Type & set__env_points(
    const std::vector<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvPoint_<ContainerAllocator>>> & _arg)
  {
    this->env_points = _arg;
    return *this;
  }
  Type & set__id(
    const int32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__last_ids(
    const std::vector<environment_model_msgs::msg::PairInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairInt_<ContainerAllocator>>> & _arg)
  {
    this->last_ids = _arg;
    return *this;
  }
  Type & set__perception_ids(
    const environment_model_msgs::msg::PairInt_<ContainerAllocator> & _arg)
  {
    this->perception_ids = _arg;
    return *this;
  }
  Type & set__ego_s(
    const double & _arg)
  {
    this->ego_s = _arg;
    return *this;
  }
  Type & set__ego_l(
    const double & _arg)
  {
    this->ego_l = _arg;
    return *this;
  }
  Type & set__is_on_road(
    const bool & _arg)
  {
    this->is_on_road = _arg;
    return *this;
  }
  Type & set__routing_status(
    const uint8_t & _arg)
  {
    this->routing_status = _arg;
    return *this;
  }
  Type & set__is_reverse(
    const bool & _arg)
  {
    this->is_reverse = _arg;
    return *this;
  }
  Type & set__enum_turn_scenario(
    const uint8_t & _arg)
  {
    this->enum_turn_scenario = _arg;
    return *this;
  }
  Type & set__merge_lines(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->merge_lines = _arg;
    return *this;
  }
  Type & set__split_lines(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->split_lines = _arg;
    return *this;
  }
  Type & set__merge_pos(
    const std::vector<environment_model_msgs::msg::PairDoubleInt_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairDoubleInt_<ContainerAllocator>>> & _arg)
  {
    this->merge_pos = _arg;
    return *this;
  }
  Type & set__lk_lines(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->lk_lines = _arg;
    return *this;
  }
  Type & set__left_ids_map(
    const std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>> & _arg)
  {
    this->left_ids_map = _arg;
    return *this;
  }
  Type & set__right_ids_map(
    const std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>> & _arg)
  {
    this->right_ids_map = _arg;
    return *this;
  }
  Type & set__enum_road_struct_type(
    const uint8_t & _arg)
  {
    this->enum_road_struct_type = _arg;
    return *this;
  }
  Type & set__road_struct_type(
    const environment_model_msgs::msg::RoadStructType_<ContainerAllocator> & _arg)
  {
    this->road_struct_type = _arg;
    return *this;
  }
  Type & set__signal_infos(
    const std::vector<environment_model_msgs::msg::PairString_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairString_<ContainerAllocator>>> & _arg)
  {
    this->signal_infos = _arg;
    return *this;
  }
  Type & set__object_infos(
    const std::vector<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::PairStringDouble_<ContainerAllocator>>> & _arg)
  {
    this->object_infos = _arg;
    return *this;
  }
  Type & set__navi_score(
    const environment_model_msgs::msg::NaviScore_<ContainerAllocator> & _arg)
  {
    this->navi_score = _arg;
    return *this;
  }
  Type & set__virtual_line_infos(
    const std::vector<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::VirtualLineInfo_<ContainerAllocator>>> & _arg)
  {
    this->virtual_line_infos = _arg;
    return *this;
  }
  Type & set__left_road_bound_line(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->left_road_bound_line = _arg;
    return *this;
  }
  Type & set__right_road_bound_line(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->right_road_bound_line = _arg;
    return *this;
  }
  Type & set__lane_offset(
    const double & _arg)
  {
    this->lane_offset = _arg;
    return *this;
  }
  Type & set__lane_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->lane_id = _arg;
    return *this;
  }
  Type & set__lane_sequence(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->lane_sequence = _arg;
    return *this;
  }
  Type & set__lane_seq_id(
    const int32_t & _arg)
  {
    this->lane_seq_id = _arg;
    return *this;
  }
  Type & set__channel_id(
    const environment_model_msgs::msg::PairInt_<ContainerAllocator> & _arg)
  {
    this->channel_id = _arg;
    return *this;
  }
  Type & set__virtual_line_to(
    const bool & _arg)
  {
    this->virtual_line_to = _arg;
    return *this;
  }
  Type & set__midd_line_id(
    const int32_t & _arg)
  {
    this->midd_line_id = _arg;
    return *this;
  }
  Type & set__overwide_pairs(
    const std::vector<environment_model_msgs::msg::MapIds_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::MapIds_<ContainerAllocator>>> & _arg)
  {
    this->overwide_pairs = _arg;
    return *this;
  }
  Type & set__usemdriver(
    const bool & _arg)
  {
    this->usemdriver = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvLine_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvLine_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLine_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvLine_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvLine
    std::shared_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvLine
    std::shared_ptr<environment_model_msgs::msg::EnvLine_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvLine_ & other) const
  {
    if (this->env_points != other.env_points) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->last_ids != other.last_ids) {
      return false;
    }
    if (this->perception_ids != other.perception_ids) {
      return false;
    }
    if (this->ego_s != other.ego_s) {
      return false;
    }
    if (this->ego_l != other.ego_l) {
      return false;
    }
    if (this->is_on_road != other.is_on_road) {
      return false;
    }
    if (this->routing_status != other.routing_status) {
      return false;
    }
    if (this->is_reverse != other.is_reverse) {
      return false;
    }
    if (this->enum_turn_scenario != other.enum_turn_scenario) {
      return false;
    }
    if (this->merge_lines != other.merge_lines) {
      return false;
    }
    if (this->split_lines != other.split_lines) {
      return false;
    }
    if (this->merge_pos != other.merge_pos) {
      return false;
    }
    if (this->lk_lines != other.lk_lines) {
      return false;
    }
    if (this->left_ids_map != other.left_ids_map) {
      return false;
    }
    if (this->right_ids_map != other.right_ids_map) {
      return false;
    }
    if (this->enum_road_struct_type != other.enum_road_struct_type) {
      return false;
    }
    if (this->road_struct_type != other.road_struct_type) {
      return false;
    }
    if (this->signal_infos != other.signal_infos) {
      return false;
    }
    if (this->object_infos != other.object_infos) {
      return false;
    }
    if (this->navi_score != other.navi_score) {
      return false;
    }
    if (this->virtual_line_infos != other.virtual_line_infos) {
      return false;
    }
    if (this->left_road_bound_line != other.left_road_bound_line) {
      return false;
    }
    if (this->right_road_bound_line != other.right_road_bound_line) {
      return false;
    }
    if (this->lane_offset != other.lane_offset) {
      return false;
    }
    if (this->lane_id != other.lane_id) {
      return false;
    }
    if (this->lane_sequence != other.lane_sequence) {
      return false;
    }
    if (this->lane_seq_id != other.lane_seq_id) {
      return false;
    }
    if (this->channel_id != other.channel_id) {
      return false;
    }
    if (this->virtual_line_to != other.virtual_line_to) {
      return false;
    }
    if (this->midd_line_id != other.midd_line_id) {
      return false;
    }
    if (this->overwide_pairs != other.overwide_pairs) {
      return false;
    }
    if (this->usemdriver != other.usemdriver) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvLine_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvLine_

// alias to use template instance with default allocator
using EnvLine =
  environment_model_msgs::msg::EnvLine_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_LINE__STRUCT_HPP_
