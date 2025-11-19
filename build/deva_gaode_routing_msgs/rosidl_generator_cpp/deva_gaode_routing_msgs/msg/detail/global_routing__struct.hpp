// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/GlobalRouting.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'start_point'
// Member 'way_points'
// Member 'end_point'
// Member 'cur_point'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"
// Member 'locate_step'
// Member 'forward_step'
#include "deva_gaode_routing_msgs/msg/detail/web_step__struct.hpp"
// Member 'call_back'
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__struct.hpp"
// Member 'vocal_info'
#include "deva_gaode_routing_msgs/msg/detail/web_vocal_rec_msg__struct.hpp"
// Member 'global_path'
#include "deva_gaode_routing_msgs/msg/detail/global_path_msg__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__GlobalRouting __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__GlobalRouting __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GlobalRouting_
{
  using Type = GlobalRouting_<ContainerAllocator>;

  explicit GlobalRouting_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    start_point(_init),
    end_point(_init),
    locate_step(_init),
    forward_step(_init),
    call_back(_init),
    vocal_info(_init),
    global_path(_init),
    cur_point(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = "";
      this->status = false;
      this->md5 = "";
      this->mode = 0ul;
      this->distance = 0.0f;
      this->time = 0.0f;
      this->step_num = 0l;
      this->traffic_light_count = 0l;
      this->orientation = 0.0;
      this->speed = 0.0f;
    }
  }

  explicit GlobalRouting_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    version(_alloc),
    md5(_alloc),
    start_point(_alloc, _init),
    end_point(_alloc, _init),
    locate_step(_alloc, _init),
    forward_step(_alloc, _init),
    call_back(_alloc, _init),
    vocal_info(_alloc, _init),
    global_path(_alloc, _init),
    cur_point(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->version = "";
      this->status = false;
      this->md5 = "";
      this->mode = 0ul;
      this->distance = 0.0f;
      this->time = 0.0f;
      this->step_num = 0l;
      this->traffic_light_count = 0l;
      this->orientation = 0.0;
      this->speed = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _version_type version;
  using _status_type =
    bool;
  _status_type status;
  using _md5_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _md5_type md5;
  using _mode_type =
    uint32_t;
  _mode_type mode;
  using _start_point_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _start_point_type start_point;
  using _way_points_type =
    std::vector<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>>>;
  _way_points_type way_points;
  using _end_point_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _end_point_type end_point;
  using _distance_type =
    float;
  _distance_type distance;
  using _time_type =
    float;
  _time_type time;
  using _step_num_type =
    int32_t;
  _step_num_type step_num;
  using _locate_step_type =
    deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>;
  _locate_step_type locate_step;
  using _forward_step_type =
    deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator>;
  _forward_step_type forward_step;
  using _traffic_light_count_type =
    int32_t;
  _traffic_light_count_type traffic_light_count;
  using _call_back_type =
    deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator>;
  _call_back_type call_back;
  using _vocal_info_type =
    deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator>;
  _vocal_info_type vocal_info;
  using _global_path_type =
    deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator>;
  _global_path_type global_path;
  using _cur_point_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _cur_point_type cur_point;
  using _orientation_type =
    double;
  _orientation_type orientation;
  using _speed_type =
    float;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->version = _arg;
    return *this;
  }
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__md5(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->md5 = _arg;
    return *this;
  }
  Type & set__mode(
    const uint32_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__start_point(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->start_point = _arg;
    return *this;
  }
  Type & set__way_points(
    const std::vector<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>>> & _arg)
  {
    this->way_points = _arg;
    return *this;
  }
  Type & set__end_point(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->end_point = _arg;
    return *this;
  }
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__time(
    const float & _arg)
  {
    this->time = _arg;
    return *this;
  }
  Type & set__step_num(
    const int32_t & _arg)
  {
    this->step_num = _arg;
    return *this;
  }
  Type & set__locate_step(
    const deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> & _arg)
  {
    this->locate_step = _arg;
    return *this;
  }
  Type & set__forward_step(
    const deva_gaode_routing_msgs::msg::WebStep_<ContainerAllocator> & _arg)
  {
    this->forward_step = _arg;
    return *this;
  }
  Type & set__traffic_light_count(
    const int32_t & _arg)
  {
    this->traffic_light_count = _arg;
    return *this;
  }
  Type & set__call_back(
    const deva_gaode_routing_msgs::msg::WebCallBack_<ContainerAllocator> & _arg)
  {
    this->call_back = _arg;
    return *this;
  }
  Type & set__vocal_info(
    const deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator> & _arg)
  {
    this->vocal_info = _arg;
    return *this;
  }
  Type & set__global_path(
    const deva_gaode_routing_msgs::msg::GlobalPathMsg_<ContainerAllocator> & _arg)
  {
    this->global_path = _arg;
    return *this;
  }
  Type & set__cur_point(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->cur_point = _arg;
    return *this;
  }
  Type & set__orientation(
    const double & _arg)
  {
    this->orientation = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__GlobalRouting
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__GlobalRouting
    std::shared_ptr<deva_gaode_routing_msgs::msg::GlobalRouting_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GlobalRouting_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->version != other.version) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->md5 != other.md5) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->start_point != other.start_point) {
      return false;
    }
    if (this->way_points != other.way_points) {
      return false;
    }
    if (this->end_point != other.end_point) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->step_num != other.step_num) {
      return false;
    }
    if (this->locate_step != other.locate_step) {
      return false;
    }
    if (this->forward_step != other.forward_step) {
      return false;
    }
    if (this->traffic_light_count != other.traffic_light_count) {
      return false;
    }
    if (this->call_back != other.call_back) {
      return false;
    }
    if (this->vocal_info != other.vocal_info) {
      return false;
    }
    if (this->global_path != other.global_path) {
      return false;
    }
    if (this->cur_point != other.cur_point) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const GlobalRouting_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GlobalRouting_

// alias to use template instance with default allocator
using GlobalRouting =
  deva_gaode_routing_msgs::msg::GlobalRouting_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__GLOBAL_ROUTING__STRUCT_HPP_
