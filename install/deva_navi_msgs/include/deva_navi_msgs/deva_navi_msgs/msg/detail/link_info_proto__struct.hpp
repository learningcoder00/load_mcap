// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/LinkInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'points'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"
// Member 'gantry_infos'
#include "deva_navi_msgs/msg/detail/gantry_info_proto__struct.hpp"
// Member 'cameras'
#include "deva_navi_msgs/msg/detail/navi_camera_proto__struct.hpp"
// Member 'road_facilities'
#include "deva_navi_msgs/msg/detail/road_facility_proto__struct.hpp"
// Member 'turn_infos'
#include "deva_navi_msgs/msg/detail/turn_info_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__LinkInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__LinkInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkInfoProto_
{
  using Type = LinkInfoProto_<ContainerAllocator>;

  explicit LinkInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->related_path_id = 0ll;
      this->related_segment_index = 0l;
      this->link_index = 0l;
      this->length = 0l;
      this->travel_time = 0ll;
      this->static_travel_time = 0ll;
      this->road_name = "";
      this->topo_id_64 = 0ll;
      this->urid = 0l;
      this->link_direction = 0l;
      this->main_action = 0l;
      this->assistant_action = 0l;
      this->adcode = 0ll;
      this->link_type = 0l;
      this->formway = 0l;
      this->road_class = 0l;
      this->road_direction = 0l;
      this->ownership = 0l;
      this->is_toll = false;
      this->is_over_head = false;
      this->has_parallel_road = false;
      this->has_multi_out = false;
      this->has_traffic_light = false;
      this->has_mix_fork = false;
      this->is_at_service = false;
      this->is_restricting = false;
      this->limit_flag = 0l;
      this->speed = 0l;
      this->service_name = "";
      this->inner_road = false;
      this->is_parking_road = false;
      this->traffic_status = 0l;
    }
  }

  explicit LinkInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : road_name(_alloc),
    service_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_valid = false;
      this->related_path_id = 0ll;
      this->related_segment_index = 0l;
      this->link_index = 0l;
      this->length = 0l;
      this->travel_time = 0ll;
      this->static_travel_time = 0ll;
      this->road_name = "";
      this->topo_id_64 = 0ll;
      this->urid = 0l;
      this->link_direction = 0l;
      this->main_action = 0l;
      this->assistant_action = 0l;
      this->adcode = 0ll;
      this->link_type = 0l;
      this->formway = 0l;
      this->road_class = 0l;
      this->road_direction = 0l;
      this->ownership = 0l;
      this->is_toll = false;
      this->is_over_head = false;
      this->has_parallel_road = false;
      this->has_multi_out = false;
      this->has_traffic_light = false;
      this->has_mix_fork = false;
      this->is_at_service = false;
      this->is_restricting = false;
      this->limit_flag = 0l;
      this->speed = 0l;
      this->service_name = "";
      this->inner_road = false;
      this->is_parking_road = false;
      this->traffic_status = 0l;
    }
  }

  // field types and members
  using _points_type =
    std::vector<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>>;
  _points_type points;
  using _gantry_infos_type =
    std::vector<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>>>;
  _gantry_infos_type gantry_infos;
  using _cameras_type =
    std::vector<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>>>;
  _cameras_type cameras;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _related_path_id_type =
    int64_t;
  _related_path_id_type related_path_id;
  using _related_segment_index_type =
    int32_t;
  _related_segment_index_type related_segment_index;
  using _link_index_type =
    int32_t;
  _link_index_type link_index;
  using _length_type =
    int32_t;
  _length_type length;
  using _travel_time_type =
    int64_t;
  _travel_time_type travel_time;
  using _static_travel_time_type =
    int64_t;
  _static_travel_time_type static_travel_time;
  using _road_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _road_name_type road_name;
  using _road_facilities_type =
    std::vector<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>>>;
  _road_facilities_type road_facilities;
  using _topo_id_64_type =
    int64_t;
  _topo_id_64_type topo_id_64;
  using _urid_type =
    int32_t;
  _urid_type urid;
  using _link_direction_type =
    int32_t;
  _link_direction_type link_direction;
  using _main_action_type =
    int32_t;
  _main_action_type main_action;
  using _assistant_action_type =
    int32_t;
  _assistant_action_type assistant_action;
  using _adcode_type =
    int64_t;
  _adcode_type adcode;
  using _link_type_type =
    int32_t;
  _link_type_type link_type;
  using _formway_type =
    int32_t;
  _formway_type formway;
  using _road_class_type =
    int32_t;
  _road_class_type road_class;
  using _road_direction_type =
    int32_t;
  _road_direction_type road_direction;
  using _ownership_type =
    int32_t;
  _ownership_type ownership;
  using _is_toll_type =
    bool;
  _is_toll_type is_toll;
  using _is_over_head_type =
    bool;
  _is_over_head_type is_over_head;
  using _has_parallel_road_type =
    bool;
  _has_parallel_road_type has_parallel_road;
  using _has_multi_out_type =
    bool;
  _has_multi_out_type has_multi_out;
  using _has_traffic_light_type =
    bool;
  _has_traffic_light_type has_traffic_light;
  using _has_mix_fork_type =
    bool;
  _has_mix_fork_type has_mix_fork;
  using _is_at_service_type =
    bool;
  _is_at_service_type is_at_service;
  using _is_restricting_type =
    bool;
  _is_restricting_type is_restricting;
  using _limit_flag_type =
    int32_t;
  _limit_flag_type limit_flag;
  using _speed_type =
    int32_t;
  _speed_type speed;
  using _turn_infos_type =
    std::vector<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>>>;
  _turn_infos_type turn_infos;
  using _service_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _service_name_type service_name;
  using _inner_road_type =
    bool;
  _inner_road_type inner_road;
  using _is_parking_road_type =
    bool;
  _is_parking_road_type is_parking_road;
  using _traffic_status_type =
    int32_t;
  _traffic_status_type traffic_status;

  // setters for named parameter idiom
  Type & set__points(
    const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__gantry_infos(
    const std::vector<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::GantryInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->gantry_infos = _arg;
    return *this;
  }
  Type & set__cameras(
    const std::vector<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::NaviCameraProto_<ContainerAllocator>>> & _arg)
  {
    this->cameras = _arg;
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
  Type & set__related_segment_index(
    const int32_t & _arg)
  {
    this->related_segment_index = _arg;
    return *this;
  }
  Type & set__link_index(
    const int32_t & _arg)
  {
    this->link_index = _arg;
    return *this;
  }
  Type & set__length(
    const int32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__travel_time(
    const int64_t & _arg)
  {
    this->travel_time = _arg;
    return *this;
  }
  Type & set__static_travel_time(
    const int64_t & _arg)
  {
    this->static_travel_time = _arg;
    return *this;
  }
  Type & set__road_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->road_name = _arg;
    return *this;
  }
  Type & set__road_facilities(
    const std::vector<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::RoadFacilityProto_<ContainerAllocator>>> & _arg)
  {
    this->road_facilities = _arg;
    return *this;
  }
  Type & set__topo_id_64(
    const int64_t & _arg)
  {
    this->topo_id_64 = _arg;
    return *this;
  }
  Type & set__urid(
    const int32_t & _arg)
  {
    this->urid = _arg;
    return *this;
  }
  Type & set__link_direction(
    const int32_t & _arg)
  {
    this->link_direction = _arg;
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
  Type & set__adcode(
    const int64_t & _arg)
  {
    this->adcode = _arg;
    return *this;
  }
  Type & set__link_type(
    const int32_t & _arg)
  {
    this->link_type = _arg;
    return *this;
  }
  Type & set__formway(
    const int32_t & _arg)
  {
    this->formway = _arg;
    return *this;
  }
  Type & set__road_class(
    const int32_t & _arg)
  {
    this->road_class = _arg;
    return *this;
  }
  Type & set__road_direction(
    const int32_t & _arg)
  {
    this->road_direction = _arg;
    return *this;
  }
  Type & set__ownership(
    const int32_t & _arg)
  {
    this->ownership = _arg;
    return *this;
  }
  Type & set__is_toll(
    const bool & _arg)
  {
    this->is_toll = _arg;
    return *this;
  }
  Type & set__is_over_head(
    const bool & _arg)
  {
    this->is_over_head = _arg;
    return *this;
  }
  Type & set__has_parallel_road(
    const bool & _arg)
  {
    this->has_parallel_road = _arg;
    return *this;
  }
  Type & set__has_multi_out(
    const bool & _arg)
  {
    this->has_multi_out = _arg;
    return *this;
  }
  Type & set__has_traffic_light(
    const bool & _arg)
  {
    this->has_traffic_light = _arg;
    return *this;
  }
  Type & set__has_mix_fork(
    const bool & _arg)
  {
    this->has_mix_fork = _arg;
    return *this;
  }
  Type & set__is_at_service(
    const bool & _arg)
  {
    this->is_at_service = _arg;
    return *this;
  }
  Type & set__is_restricting(
    const bool & _arg)
  {
    this->is_restricting = _arg;
    return *this;
  }
  Type & set__limit_flag(
    const int32_t & _arg)
  {
    this->limit_flag = _arg;
    return *this;
  }
  Type & set__speed(
    const int32_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__turn_infos(
    const std::vector<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::TurnInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->turn_infos = _arg;
    return *this;
  }
  Type & set__service_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->service_name = _arg;
    return *this;
  }
  Type & set__inner_road(
    const bool & _arg)
  {
    this->inner_road = _arg;
    return *this;
  }
  Type & set__is_parking_road(
    const bool & _arg)
  {
    this->is_parking_road = _arg;
    return *this;
  }
  Type & set__traffic_status(
    const int32_t & _arg)
  {
    this->traffic_status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__LinkInfoProto
    std::shared_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__LinkInfoProto
    std::shared_ptr<deva_navi_msgs::msg::LinkInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkInfoProto_ & other) const
  {
    if (this->points != other.points) {
      return false;
    }
    if (this->gantry_infos != other.gantry_infos) {
      return false;
    }
    if (this->cameras != other.cameras) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->related_path_id != other.related_path_id) {
      return false;
    }
    if (this->related_segment_index != other.related_segment_index) {
      return false;
    }
    if (this->link_index != other.link_index) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->travel_time != other.travel_time) {
      return false;
    }
    if (this->static_travel_time != other.static_travel_time) {
      return false;
    }
    if (this->road_name != other.road_name) {
      return false;
    }
    if (this->road_facilities != other.road_facilities) {
      return false;
    }
    if (this->topo_id_64 != other.topo_id_64) {
      return false;
    }
    if (this->urid != other.urid) {
      return false;
    }
    if (this->link_direction != other.link_direction) {
      return false;
    }
    if (this->main_action != other.main_action) {
      return false;
    }
    if (this->assistant_action != other.assistant_action) {
      return false;
    }
    if (this->adcode != other.adcode) {
      return false;
    }
    if (this->link_type != other.link_type) {
      return false;
    }
    if (this->formway != other.formway) {
      return false;
    }
    if (this->road_class != other.road_class) {
      return false;
    }
    if (this->road_direction != other.road_direction) {
      return false;
    }
    if (this->ownership != other.ownership) {
      return false;
    }
    if (this->is_toll != other.is_toll) {
      return false;
    }
    if (this->is_over_head != other.is_over_head) {
      return false;
    }
    if (this->has_parallel_road != other.has_parallel_road) {
      return false;
    }
    if (this->has_multi_out != other.has_multi_out) {
      return false;
    }
    if (this->has_traffic_light != other.has_traffic_light) {
      return false;
    }
    if (this->has_mix_fork != other.has_mix_fork) {
      return false;
    }
    if (this->is_at_service != other.is_at_service) {
      return false;
    }
    if (this->is_restricting != other.is_restricting) {
      return false;
    }
    if (this->limit_flag != other.limit_flag) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->turn_infos != other.turn_infos) {
      return false;
    }
    if (this->service_name != other.service_name) {
      return false;
    }
    if (this->inner_road != other.inner_road) {
      return false;
    }
    if (this->is_parking_road != other.is_parking_road) {
      return false;
    }
    if (this->traffic_status != other.traffic_status) {
      return false;
    }
    return true;
  }
  bool operator!=(const LinkInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkInfoProto_

// alias to use template instance with default allocator
using LinkInfoProto =
  deva_navi_msgs::msg::LinkInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__LINK_INFO_PROTO__STRUCT_HPP_
