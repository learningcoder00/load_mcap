// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_navi_msgs:msg/AmapPathInfoProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__STRUCT_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'all_3d_traffic_lights'
#include "deva_navi_msgs/msg/detail/coord3_d_double_proto__struct.hpp"
// Member 'segment_infos'
#include "deva_navi_msgs/msg/detail/segment_info_proto__struct.hpp"
// Member 'line_icon_points'
#include "deva_navi_msgs/msg/detail/line_icon_point_proto__struct.hpp"
// Member 'via_point_info'
#include "deva_navi_msgs/msg/detail/via_point_info_proto__struct.hpp"
// Member 'charge_station_info'
#include "deva_navi_msgs/msg/detail/charge_station_info_proto__struct.hpp"
// Member 'odd_seg_infos'
#include "deva_navi_msgs/msg/detail/odd_seg_info_proto__struct.hpp"
// Member 'group_segments'
#include "deva_navi_msgs/msg/detail/group_segment_proto__struct.hpp"
// Member 'restriction_info'
#include "deva_navi_msgs/msg/detail/restriction_info_proto__struct.hpp"
// Member 'end_poi'
#include "deva_navi_msgs/msg/detail/poi_info_proto__struct.hpp"
// Member 'tip'
#include "deva_navi_msgs/msg/detail/tip_info_proto__struct.hpp"
// Member 'elec_path_info'
#include "deva_navi_msgs/msg/detail/elec_path_info_proto__struct.hpp"
// Member 'path_description_info'
#include "deva_navi_msgs/msg/detail/path_description_info_proto__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_navi_msgs__msg__AmapPathInfoProto __attribute__((deprecated))
#else
# define DEPRECATED__deva_navi_msgs__msg__AmapPathInfoProto __declspec(deprecated)
#endif

namespace deva_navi_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AmapPathInfoProto_
{
  using Type = AmapPathInfoProto_<ContainerAllocator>;

  explicit AmapPathInfoProto_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : restriction_info(_init),
    end_poi(_init),
    tip(_init),
    elec_path_info(_init),
    path_description_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_channel_id = "";
      this->offline_req_custom_identity_id = "";
      this->is_valid = false;
      this->path_id = 0ll;
      this->type = 0l;
      this->length = 0ll;
      this->strategy = 0ll;
      this->travel_time = 0ll;
      this->static_travel_time = 0ll;
      this->toll_cost = 0l;
      this->navi_id = "";
      this->is_online = false;
      this->end_direction = 0l;
      this->is_holiday_free = false;
      this->is_truck_path = false;
      this->data_version = 0ll;
      this->normal_plan_time = 0ll;
      this->route_type = 0l;
      this->remain_toll_cost = 0ll;
      this->main_route_remain_toll_cost = 0ll;
    }
  }

  explicit AmapPathInfoProto_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan_channel_id(_alloc),
    offline_req_custom_identity_id(_alloc),
    navi_id(_alloc),
    restriction_info(_alloc, _init),
    end_poi(_alloc, _init),
    tip(_alloc, _init),
    elec_path_info(_alloc, _init),
    path_description_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->plan_channel_id = "";
      this->offline_req_custom_identity_id = "";
      this->is_valid = false;
      this->path_id = 0ll;
      this->type = 0l;
      this->length = 0ll;
      this->strategy = 0ll;
      this->travel_time = 0ll;
      this->static_travel_time = 0ll;
      this->toll_cost = 0l;
      this->navi_id = "";
      this->is_online = false;
      this->end_direction = 0l;
      this->is_holiday_free = false;
      this->is_truck_path = false;
      this->data_version = 0ll;
      this->normal_plan_time = 0ll;
      this->route_type = 0l;
      this->remain_toll_cost = 0ll;
      this->main_route_remain_toll_cost = 0ll;
    }
  }

  // field types and members
  using _all_3d_traffic_lights_type =
    std::vector<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>>;
  _all_3d_traffic_lights_type all_3d_traffic_lights;
  using _segment_infos_type =
    std::vector<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>>>;
  _segment_infos_type segment_infos;
  using _line_icon_points_type =
    std::vector<deva_navi_msgs::msg::LineIconPointProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::LineIconPointProto_<ContainerAllocator>>>;
  _line_icon_points_type line_icon_points;
  using _city_adcode_list_type =
    std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>>;
  _city_adcode_list_type city_adcode_list;
  using _via_point_info_type =
    std::vector<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>>;
  _via_point_info_type via_point_info;
  using _charge_station_info_type =
    std::vector<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>>>;
  _charge_station_info_type charge_station_info;
  using _odd_seg_infos_type =
    std::vector<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>>>;
  _odd_seg_infos_type odd_seg_infos;
  using _plan_channel_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _plan_channel_id_type plan_channel_id;
  using _offline_req_custom_identity_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _offline_req_custom_identity_id_type offline_req_custom_identity_id;
  using _is_valid_type =
    bool;
  _is_valid_type is_valid;
  using _path_id_type =
    int64_t;
  _path_id_type path_id;
  using _type_type =
    int32_t;
  _type_type type;
  using _length_type =
    int64_t;
  _length_type length;
  using _strategy_type =
    int64_t;
  _strategy_type strategy;
  using _travel_time_type =
    int64_t;
  _travel_time_type travel_time;
  using _static_travel_time_type =
    int64_t;
  _static_travel_time_type static_travel_time;
  using _toll_cost_type =
    int32_t;
  _toll_cost_type toll_cost;
  using _navi_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _navi_id_type navi_id;
  using _is_online_type =
    bool;
  _is_online_type is_online;
  using _group_segments_type =
    std::vector<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>>>;
  _group_segments_type group_segments;
  using _restriction_info_type =
    deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator>;
  _restriction_info_type restriction_info;
  using _end_poi_type =
    deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator>;
  _end_poi_type end_poi;
  using _tip_type =
    deva_navi_msgs::msg::TipInfoProto_<ContainerAllocator>;
  _tip_type tip;
  using _end_direction_type =
    int32_t;
  _end_direction_type end_direction;
  using _is_holiday_free_type =
    bool;
  _is_holiday_free_type is_holiday_free;
  using _is_truck_path_type =
    bool;
  _is_truck_path_type is_truck_path;
  using _data_version_type =
    int64_t;
  _data_version_type data_version;
  using _normal_plan_time_type =
    int64_t;
  _normal_plan_time_type normal_plan_time;
  using _route_type_type =
    int32_t;
  _route_type_type route_type;
  using _elec_path_info_type =
    deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator>;
  _elec_path_info_type elec_path_info;
  using _path_description_info_type =
    deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator>;
  _path_description_info_type path_description_info;
  using _remain_toll_cost_type =
    int64_t;
  _remain_toll_cost_type remain_toll_cost;
  using _main_route_remain_toll_cost_type =
    int64_t;
  _main_route_remain_toll_cost_type main_route_remain_toll_cost;

  // setters for named parameter idiom
  Type & set__all_3d_traffic_lights(
    const std::vector<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::Coord3DDoubleProto_<ContainerAllocator>>> & _arg)
  {
    this->all_3d_traffic_lights = _arg;
    return *this;
  }
  Type & set__segment_infos(
    const std::vector<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::SegmentInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->segment_infos = _arg;
    return *this;
  }
  Type & set__line_icon_points(
    const std::vector<deva_navi_msgs::msg::LineIconPointProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::LineIconPointProto_<ContainerAllocator>>> & _arg)
  {
    this->line_icon_points = _arg;
    return *this;
  }
  Type & set__city_adcode_list(
    const std::vector<int64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int64_t>> & _arg)
  {
    this->city_adcode_list = _arg;
    return *this;
  }
  Type & set__via_point_info(
    const std::vector<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::ViaPointInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->via_point_info = _arg;
    return *this;
  }
  Type & set__charge_station_info(
    const std::vector<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::ChargeStationInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->charge_station_info = _arg;
    return *this;
  }
  Type & set__odd_seg_infos(
    const std::vector<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::OddSegInfoProto_<ContainerAllocator>>> & _arg)
  {
    this->odd_seg_infos = _arg;
    return *this;
  }
  Type & set__plan_channel_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->plan_channel_id = _arg;
    return *this;
  }
  Type & set__offline_req_custom_identity_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->offline_req_custom_identity_id = _arg;
    return *this;
  }
  Type & set__is_valid(
    const bool & _arg)
  {
    this->is_valid = _arg;
    return *this;
  }
  Type & set__path_id(
    const int64_t & _arg)
  {
    this->path_id = _arg;
    return *this;
  }
  Type & set__type(
    const int32_t & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__length(
    const int64_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__strategy(
    const int64_t & _arg)
  {
    this->strategy = _arg;
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
  Type & set__toll_cost(
    const int32_t & _arg)
  {
    this->toll_cost = _arg;
    return *this;
  }
  Type & set__navi_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->navi_id = _arg;
    return *this;
  }
  Type & set__is_online(
    const bool & _arg)
  {
    this->is_online = _arg;
    return *this;
  }
  Type & set__group_segments(
    const std::vector<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_navi_msgs::msg::GroupSegmentProto_<ContainerAllocator>>> & _arg)
  {
    this->group_segments = _arg;
    return *this;
  }
  Type & set__restriction_info(
    const deva_navi_msgs::msg::RestrictionInfoProto_<ContainerAllocator> & _arg)
  {
    this->restriction_info = _arg;
    return *this;
  }
  Type & set__end_poi(
    const deva_navi_msgs::msg::POIInfoProto_<ContainerAllocator> & _arg)
  {
    this->end_poi = _arg;
    return *this;
  }
  Type & set__tip(
    const deva_navi_msgs::msg::TipInfoProto_<ContainerAllocator> & _arg)
  {
    this->tip = _arg;
    return *this;
  }
  Type & set__end_direction(
    const int32_t & _arg)
  {
    this->end_direction = _arg;
    return *this;
  }
  Type & set__is_holiday_free(
    const bool & _arg)
  {
    this->is_holiday_free = _arg;
    return *this;
  }
  Type & set__is_truck_path(
    const bool & _arg)
  {
    this->is_truck_path = _arg;
    return *this;
  }
  Type & set__data_version(
    const int64_t & _arg)
  {
    this->data_version = _arg;
    return *this;
  }
  Type & set__normal_plan_time(
    const int64_t & _arg)
  {
    this->normal_plan_time = _arg;
    return *this;
  }
  Type & set__route_type(
    const int32_t & _arg)
  {
    this->route_type = _arg;
    return *this;
  }
  Type & set__elec_path_info(
    const deva_navi_msgs::msg::ElecPathInfoProto_<ContainerAllocator> & _arg)
  {
    this->elec_path_info = _arg;
    return *this;
  }
  Type & set__path_description_info(
    const deva_navi_msgs::msg::PathDescriptionInfoProto_<ContainerAllocator> & _arg)
  {
    this->path_description_info = _arg;
    return *this;
  }
  Type & set__remain_toll_cost(
    const int64_t & _arg)
  {
    this->remain_toll_cost = _arg;
    return *this;
  }
  Type & set__main_route_remain_toll_cost(
    const int64_t & _arg)
  {
    this->main_route_remain_toll_cost = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_navi_msgs__msg__AmapPathInfoProto
    std::shared_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_navi_msgs__msg__AmapPathInfoProto
    std::shared_ptr<deva_navi_msgs::msg::AmapPathInfoProto_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AmapPathInfoProto_ & other) const
  {
    if (this->all_3d_traffic_lights != other.all_3d_traffic_lights) {
      return false;
    }
    if (this->segment_infos != other.segment_infos) {
      return false;
    }
    if (this->line_icon_points != other.line_icon_points) {
      return false;
    }
    if (this->city_adcode_list != other.city_adcode_list) {
      return false;
    }
    if (this->via_point_info != other.via_point_info) {
      return false;
    }
    if (this->charge_station_info != other.charge_station_info) {
      return false;
    }
    if (this->odd_seg_infos != other.odd_seg_infos) {
      return false;
    }
    if (this->plan_channel_id != other.plan_channel_id) {
      return false;
    }
    if (this->offline_req_custom_identity_id != other.offline_req_custom_identity_id) {
      return false;
    }
    if (this->is_valid != other.is_valid) {
      return false;
    }
    if (this->path_id != other.path_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->strategy != other.strategy) {
      return false;
    }
    if (this->travel_time != other.travel_time) {
      return false;
    }
    if (this->static_travel_time != other.static_travel_time) {
      return false;
    }
    if (this->toll_cost != other.toll_cost) {
      return false;
    }
    if (this->navi_id != other.navi_id) {
      return false;
    }
    if (this->is_online != other.is_online) {
      return false;
    }
    if (this->group_segments != other.group_segments) {
      return false;
    }
    if (this->restriction_info != other.restriction_info) {
      return false;
    }
    if (this->end_poi != other.end_poi) {
      return false;
    }
    if (this->tip != other.tip) {
      return false;
    }
    if (this->end_direction != other.end_direction) {
      return false;
    }
    if (this->is_holiday_free != other.is_holiday_free) {
      return false;
    }
    if (this->is_truck_path != other.is_truck_path) {
      return false;
    }
    if (this->data_version != other.data_version) {
      return false;
    }
    if (this->normal_plan_time != other.normal_plan_time) {
      return false;
    }
    if (this->route_type != other.route_type) {
      return false;
    }
    if (this->elec_path_info != other.elec_path_info) {
      return false;
    }
    if (this->path_description_info != other.path_description_info) {
      return false;
    }
    if (this->remain_toll_cost != other.remain_toll_cost) {
      return false;
    }
    if (this->main_route_remain_toll_cost != other.main_route_remain_toll_cost) {
      return false;
    }
    return true;
  }
  bool operator!=(const AmapPathInfoProto_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AmapPathInfoProto_

// alias to use template instance with default allocator
using AmapPathInfoProto =
  deva_navi_msgs::msg::AmapPathInfoProto_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__AMAP_PATH_INFO_PROTO__STRUCT_HPP_
