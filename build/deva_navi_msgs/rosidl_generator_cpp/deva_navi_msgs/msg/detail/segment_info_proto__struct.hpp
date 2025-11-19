// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/SegmentInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'link_infos'
#include "deva_navi_msgs/msg/detail/link_info_proto__struct.hpp"
// Member 'points'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"
// Member 'maneuver_icons'
#include "deva_navi_msgs/msg/detail/icon_road_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__SegmentInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__SegmentInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SegmentInfoProto_
{
  using Type = SegmentInfoProto_<ContainerAllocator>;

  explicit SegmentInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->related_path_id = 0ll;
      this->segment_index = 0l;
      this->main_action = 0l;
      this->assistant_action = 0l;
      this->slope = 0l;
      this->length = 0l;
      this->toll_cost = 0l;
      this->toll_dist = 0l;
      this->travel_time = 0ll;
      this->traffic_light_num = 0ll;
      this->is_end_of_road = false;
      this->toll_road_name = "";
      this->guideboard_name = "";
      this->exit_name = "";
      this->crossing_name = "";
      this->uturn_and_arrivedest = 0l;
    }
  }

  explicit SegmentInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : toll_road_name(_alloc),
    guideboard_name(_alloc),
    exit_name(_alloc),
    crossing_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->related_path_id = 0ll;
      this->segment_index = 0l;
      this->main_action = 0l;
      this->assistant_action = 0l;
      this->slope = 0l;
      this->length = 0l;
      this->toll_cost = 0l;
      this->toll_dist = 0l;
      this->travel_time = 0ll;
      this->traffic_light_num = 0ll;
      this->is_end_of_road = false;
      this->toll_road_name = "";
      this->guideboard_name = "";
      this->exit_name = "";
      this->crossing_name = "";
      this->uturn_and_arrivedest = 0l;
    }
  }

  // field types and members
  using _link_infos_type =
    std::vector<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>>>;
  _link_infos_type link_infos;
  using _points_type =
    std::vector<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>>;
  _points_type points;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _related_path_id_type =
    int64_t;
  _related_path_id_type related_path_id;
  using _segment_index_type =
    int32_t;
  _segment_index_type segment_index;
  using _main_action_type =
    int32_t;
  _main_action_type main_action;
  using _assistant_action_type =
    int32_t;
  _assistant_action_type assistant_action;
  using _slope_type =
    int32_t;
  _slope_type slope;
  using _length_type =
    int32_t;
  _length_type length;
  using _toll_cost_type =
    int32_t;
  _toll_cost_type toll_cost;
  using _toll_dist_type =
    int32_t;
  _toll_dist_type toll_dist;
  using _travel_time_type =
    int64_t;
  _travel_time_type travel_time;
  using _traffic_light_num_type =
    int64_t;
  _traffic_light_num_type traffic_light_num;
  using _is_end_of_road_type =
    bool;
  _is_end_of_road_type is_end_of_road;
  using _toll_road_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _toll_road_name_type toll_road_name;
  using _guideboard_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _guideboard_name_type guideboard_name;
  using _exit_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _exit_name_type exit_name;
  using _crossing_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _crossing_name_type crossing_name;
  using _maneuver_icons_type =
    std::vector<deva_navi_msgs::msg::IconRoadProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::IconRoadProto_<ContainerAllocator>>>;
  _maneuver_icons_type maneuver_icons;
  using _uturn_and_arrivedest_type =
    int32_t;
  _uturn_and_arrivedest_type uturn_and_arrivedest;

  // setters for named parameter idiom
  Type & set__link_infos(
    const std::vector<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->link_infos = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__related_path_id(
    const int64_t & _arg)
  {
    this->related_path_id = _arg;
    return *this;
  }
  Type & set__segment_index(
    const int32_t & _arg)
  {
    this->segment_index = _arg;
    return *this;
  }
  Type & set__main_action(
    const int32_t & _arg)
  {
    this->main_action = _arg;
    return *this;
  }
  Type & set__assistant_action(
    const int32_t & _arg)
  {
    this->assistant_action = _arg;
    return *this;
  }
  Type & set__slope(
    const int32_t & _arg)
  {
    this->slope = _arg;
    return *this;
  }
  Type & set__length(
    const int32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__toll_cost(
    const int32_t & _arg)
  {
    this->toll_cost = _arg;
    return *this;
  }
  Type & set__toll_dist(
    const int32_t & _arg)
  {
    this->toll_dist = _arg;
    return *this;
  }
  Type & set__travel_time(
    const int64_t & _arg)
  {
    this->travel_time = _arg;
    return *this;
  }
  Type & set__traffic_light_num(
    const int64_t & _arg)
  {
    this->traffic_light_num = _arg;
    return *this;
  }
  Type & set__is_end_of_road(
    const bool & _arg)
  {
    this->is_end_of_road = _arg;
    return *this;
  }
  Type & set__toll_road_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->toll_road_name = _arg;
    return *this;
  }
  Type & set__guideboard_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->guideboard_name = _arg;
    return *this;
  }
  Type & set__exit_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->exit_name = _arg;
    return *this;
  }
  Type & set__crossing_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->crossing_name = _arg;
    return *this;
  }
  Type & set__maneuver_icons(
    const std::vector<deva_navi_msgs::msg::IconRoadProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::IconRoadProto_<ContainerAllocator>>> & _arg)
  {
    this->maneuver_icons = _arg;
    return *this;
  }
  Type & set__uturn_and_arrivedest(
    const int32_t & _arg)
  {
    this->uturn_and_arrivedest = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__SegmentInfoProto
    std::shared_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__SegmentInfoProto
    std::shared_ptr<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SegmentInfoProto_ & other) const
  {
    if (this->link_infos != other.link_infos) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->related_path_id != other.related_path_id) {
      return false;
    }
    if (this->segment_index != other.segment_index) {
      return false;
    }
    if (this->main_action != other.main_action) {
      return false;
    }
    if (this->assistant_action != other.assistant_action) {
      return false;
    }
    if (this->slope != other.slope) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->toll_cost != other.toll_cost) {
      return false;
    }
    if (this->toll_dist != other.toll_dist) {
      return false;
    }
    if (this->travel_time != other.travel_time) {
      return false;
    }
    if (this->traffic_light_num != other.traffic_light_num) {
      return false;
    }
    if (this->is_end_of_road != other.is_end_of_road) {
      return false;
    }
    if (this->toll_road_name != other.toll_road_name) {
      return false;
    }
    if (this->guideboard_name != other.guideboard_name) {
      return false;
    }
    if (this->exit_name != other.exit_name) {
      return false;
    }
    if (this->crossing_name != other.crossing_name) {
      return false;
    }
    if (this->maneuver_icons != other.maneuver_icons) {
      return false;
    }
    if (this->uturn_and_arrivedest != other.uturn_and_arrivedest) {
      return false;
    }
    return true;
  }
  bool operator!=(const SegmentInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SegmentInfoProto_

// alias to use template instance with default allocator
using SegmentInfoProto =
  deva_navi_msgs::msg::SegmentInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__SEGMENT_INFO_PROTO__STRUCT_HPP_
