// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lane_info'
#include "deva_gaode_routing_msgs/msg/detail/web_lane__struct.hpp"
// Member 'camera_callback'
#include "deva_gaode_routing_msgs/msg/detail/camera_callback_info__struct.hpp"
// Member 'not_avoid_info'
#include "deva_gaode_routing_msgs/msg/detail/web_not_avoid_info__struct.hpp"
// Member 'next_cross_info'
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__struct.hpp"
// Member 'traffic_light_cd'
#include "deva_gaode_routing_msgs/msg/detail/web_traffic_light__struct.hpp"
// Member 'parallel_road'
#include "deva_gaode_routing_msgs/msg/detail/web_parallel_road__struct.hpp"
// Member 'cross_image'
#include "deva_gaode_routing_msgs/msg/detail/web_cross_image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebCallBack __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebCallBack __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebCallBack_
{
  using Type = WebCallBack_<ContainerAllocator>;

  explicit WebCallBack_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_info(_init),
    camera_callback(_init),
    not_avoid_info(_init),
    traffic_light_cd(_init),
    parallel_road(_init),
    cross_image(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->cur_step = 0l;
      this->cur_road = 0l;
      this->cur_point = 0l;
      this->cur_road_retain_dis = 0.0;
      this->cur_step_retain_dis = 0.0;
      this->cur_step_retain_time = 0.0;
      this->path_retain_dis = 0.0;
      this->path_retain_time = 0.0;
      this->trun_icon = 0l;
      this->trun_icon_retain_dis = 0.0;
      this->ring_out_cnt = 0l;
      this->roundabout_out_angle = 0l;
      this->cur_link_speed = 0l;
      this->cross_maneuver_id = 0l;
      this->ownership = 0l;
      this->cur_road_limit_speed = 0ul;
      this->cur_cross_dir = 0ul;
      this->cur_cross_dist = 0.0;
    }
  }

  explicit WebCallBack_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lane_info(_alloc, _init),
    camera_callback(_alloc, _init),
    not_avoid_info(_alloc, _init),
    traffic_light_cd(_alloc, _init),
    parallel_road(_alloc, _init),
    cross_image(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->cur_step = 0l;
      this->cur_road = 0l;
      this->cur_point = 0l;
      this->cur_road_retain_dis = 0.0;
      this->cur_step_retain_dis = 0.0;
      this->cur_step_retain_time = 0.0;
      this->path_retain_dis = 0.0;
      this->path_retain_time = 0.0;
      this->trun_icon = 0l;
      this->trun_icon_retain_dis = 0.0;
      this->ring_out_cnt = 0l;
      this->roundabout_out_angle = 0l;
      this->cur_link_speed = 0l;
      this->cross_maneuver_id = 0l;
      this->ownership = 0l;
      this->cur_road_limit_speed = 0ul;
      this->cur_cross_dir = 0ul;
      this->cur_cross_dist = 0.0;
    }
  }

  // field types and members
  using _index_type =
    int32_t;
  _index_type index;
  using _cur_step_type =
    int32_t;
  _cur_step_type cur_step;
  using _cur_road_type =
    int32_t;
  _cur_road_type cur_road;
  using _cur_point_type =
    int32_t;
  _cur_point_type cur_point;
  using _cur_road_retain_dis_type =
    double;
  _cur_road_retain_dis_type cur_road_retain_dis;
  using _cur_step_retain_dis_type =
    double;
  _cur_step_retain_dis_type cur_step_retain_dis;
  using _cur_step_retain_time_type =
    double;
  _cur_step_retain_time_type cur_step_retain_time;
  using _via_retain_dis_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _via_retain_dis_type via_retain_dis;
  using _path_retain_dis_type =
    double;
  _path_retain_dis_type path_retain_dis;
  using _path_retain_time_type =
    double;
  _path_retain_time_type path_retain_time;
  using _trun_icon_type =
    int32_t;
  _trun_icon_type trun_icon;
  using _trun_icon_retain_dis_type =
    double;
  _trun_icon_retain_dis_type trun_icon_retain_dis;
  using _lane_info_type =
    deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator>;
  _lane_info_type lane_info;
  using _camera_callback_type =
    deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator>;
  _camera_callback_type camera_callback;
  using _ring_out_cnt_type =
    int32_t;
  _ring_out_cnt_type ring_out_cnt;
  using _roundabout_out_angle_type =
    int32_t;
  _roundabout_out_angle_type roundabout_out_angle;
  using _cur_link_speed_type =
    int32_t;
  _cur_link_speed_type cur_link_speed;
  using _not_avoid_info_type =
    deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator>;
  _not_avoid_info_type not_avoid_info;
  using _cross_maneuver_id_type =
    int32_t;
  _cross_maneuver_id_type cross_maneuver_id;
  using _next_cross_info_type =
    std::vector<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>>>;
  _next_cross_info_type next_cross_info;
  using _traffic_light_cd_type =
    deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator>;
  _traffic_light_cd_type traffic_light_cd;
  using _parallel_road_type =
    deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator>;
  _parallel_road_type parallel_road;
  using _ownership_type =
    int32_t;
  _ownership_type ownership;
  using _cur_road_limit_speed_type =
    uint32_t;
  _cur_road_limit_speed_type cur_road_limit_speed;
  using _cross_image_type =
    deva_gaode_routing_msgs::msg::WebCrossImage_<ContainerAllocator>;
  _cross_image_type cross_image;
  using _cur_cross_dir_type =
    uint32_t;
  _cur_cross_dir_type cur_cross_dir;
  using _cur_cross_dist_type =
    double;
  _cur_cross_dist_type cur_cross_dist;

  // setters for named parameter idiom
  Type & set__index(
    const int32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__cur_step(
    const int32_t & _arg)
  {
    this->cur_step = _arg;
    return *this;
  }
  Type & set__cur_road(
    const int32_t & _arg)
  {
    this->cur_road = _arg;
    return *this;
  }
  Type & set__cur_point(
    const int32_t & _arg)
  {
    this->cur_point = _arg;
    return *this;
  }
  Type & set__cur_road_retain_dis(
    const double & _arg)
  {
    this->cur_road_retain_dis = _arg;
    return *this;
  }
  Type & set__cur_step_retain_dis(
    const double & _arg)
  {
    this->cur_step_retain_dis = _arg;
    return *this;
  }
  Type & set__cur_step_retain_time(
    const double & _arg)
  {
    this->cur_step_retain_time = _arg;
    return *this;
  }
  Type & set__via_retain_dis(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->via_retain_dis = _arg;
    return *this;
  }
  Type & set__path_retain_dis(
    const double & _arg)
  {
    this->path_retain_dis = _arg;
    return *this;
  }
  Type & set__path_retain_time(
    const double & _arg)
  {
    this->path_retain_time = _arg;
    return *this;
  }
  Type & set__trun_icon(
    const int32_t & _arg)
  {
    this->trun_icon = _arg;
    return *this;
  }
  Type & set__trun_icon_retain_dis(
    const double & _arg)
  {
    this->trun_icon_retain_dis = _arg;
    return *this;
  }
  Type & set__lane_info(
    const deva_gaode_routing_msgs::msg::WebLane_<ContainerAllocator> & _arg)
  {
    this->lane_info = _arg;
    return *this;
  }
  Type & set__camera_callback(
    const deva_gaode_routing_msgs::msg::CameraCallbackInfo_<ContainerAllocator> & _arg)
  {
    this->camera_callback = _arg;
    return *this;
  }
  Type & set__ring_out_cnt(
    const int32_t & _arg)
  {
    this->ring_out_cnt = _arg;
    return *this;
  }
  Type & set__roundabout_out_angle(
    const int32_t & _arg)
  {
    this->roundabout_out_angle = _arg;
    return *this;
  }
  Type & set__cur_link_speed(
    const int32_t & _arg)
  {
    this->cur_link_speed = _arg;
    return *this;
  }
  Type & set__not_avoid_info(
    const deva_gaode_routing_msgs::msg::WebNotAvoidInfo_<ContainerAllocator> & _arg)
  {
    this->not_avoid_info = _arg;
    return *this;
  }
  Type & set__cross_maneuver_id(
    const int32_t & _arg)
  {
    this->cross_maneuver_id = _arg;
    return *this;
  }
  Type & set__next_cross_info(
    const std::vector<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebCrossNaviInfo_<ContainerAllocator>>> & _arg)
  {
    this->next_cross_info = _arg;
    return *this;
  }
  Type & set__traffic_light_cd(
    const deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator> & _arg)
  {
    this->traffic_light_cd = _arg;
    return *this;
  }
  Type & set__parallel_road(
    const deva_gaode_routing_msgs::msg::WebParallelRoad_<ContainerAllocator> & _arg)
  {
    this->parallel_road = _arg;
    return *this;
  }
  Type & set__ownership(
    const int32_t & _arg)
  {
    this->ownership = _arg;
    return *this;
  }
  Type & set__cur_road_limit_speed(
    const uint32_t & _arg)
  {
    this->cur_road_limit_speed = _arg;
    return *this;
  }
  Type & set__cross_image(
    const deva_gaode_routing_msgs::msg::WebCrossImage_<ContainerAllocator> & _arg)
  {
    this->cross_image = _arg;
    return *this;
  }
  Type & set__cur_cross_dir(
    const uint32_t & _arg)
  {
    this->cur_cross_dir = _arg;
    return *this;
  }
  Type & set__cur_cross_dist(
    const double & _arg)
  {
    this->cur_cross_dist = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebCallBack
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebCallBack
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebCallBack_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->cur_step != other.cur_step) {
      return false;
    }
    if (this->cur_road != other.cur_road) {
      return false;
    }
    if (this->cur_point != other.cur_point) {
      return false;
    }
    if (this->cur_road_retain_dis != other.cur_road_retain_dis) {
      return false;
    }
    if (this->cur_step_retain_dis != other.cur_step_retain_dis) {
      return false;
    }
    if (this->cur_step_retain_time != other.cur_step_retain_time) {
      return false;
    }
    if (this->via_retain_dis != other.via_retain_dis) {
      return false;
    }
    if (this->path_retain_dis != other.path_retain_dis) {
      return false;
    }
    if (this->path_retain_time != other.path_retain_time) {
      return false;
    }
    if (this->trun_icon != other.trun_icon) {
      return false;
    }
    if (this->trun_icon_retain_dis != other.trun_icon_retain_dis) {
      return false;
    }
    if (this->lane_info != other.lane_info) {
      return false;
    }
    if (this->camera_callback != other.camera_callback) {
      return false;
    }
    if (this->ring_out_cnt != other.ring_out_cnt) {
      return false;
    }
    if (this->roundabout_out_angle != other.roundabout_out_angle) {
      return false;
    }
    if (this->cur_link_speed != other.cur_link_speed) {
      return false;
    }
    if (this->not_avoid_info != other.not_avoid_info) {
      return false;
    }
    if (this->cross_maneuver_id != other.cross_maneuver_id) {
      return false;
    }
    if (this->next_cross_info != other.next_cross_info) {
      return false;
    }
    if (this->traffic_light_cd != other.traffic_light_cd) {
      return false;
    }
    if (this->parallel_road != other.parallel_road) {
      return false;
    }
    if (this->ownership != other.ownership) {
      return false;
    }
    if (this->cur_road_limit_speed != other.cur_road_limit_speed) {
      return false;
    }
    if (this->cross_image != other.cross_image) {
      return false;
    }
    if (this->cur_cross_dir != other.cur_cross_dir) {
      return false;
    }
    if (this->cur_cross_dist != other.cur_cross_dist) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebCallBack_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebCallBack_

// alias to use template instance with default allocator
using WebCallBack =
  deva_gaode_routing_msgs::msg::WebCallBack_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_CALL_BACK__STRUCT_HPP_
