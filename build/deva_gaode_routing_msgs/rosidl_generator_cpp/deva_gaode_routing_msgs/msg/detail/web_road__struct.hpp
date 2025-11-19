// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebRoad.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coord_list'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"
// Member 'intersection_msg'
#include "deva_gaode_routing_msgs/msg/detail/web_intersection__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebRoad __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebRoad __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebRoad_
{
  using Type = WebRoad_<ContainerAllocator>;

  explicit WebRoad_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_traffic_light = false;
      this->distance = 0.0f;
      this->time = 0.0f;
      this->road_type = 0ul;
      this->road_class = 0ul;
      this->specific_type = 0ul;
      this->road_direction = 0ul;
      this->link_direction = 0ul;
      this->traffic_status = 0ul;
      this->lane_num = 0ul;
    }
  }

  explicit WebRoad_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->has_traffic_light = false;
      this->distance = 0.0f;
      this->time = 0.0f;
      this->road_type = 0ul;
      this->road_class = 0ul;
      this->specific_type = 0ul;
      this->road_direction = 0ul;
      this->link_direction = 0ul;
      this->traffic_status = 0ul;
      this->lane_num = 0ul;
    }
  }

  // field types and members
  using _has_traffic_light_type =
    bool;
  _has_traffic_light_type has_traffic_light;
  using _distance_type =
    float;
  _distance_type distance;
  using _time_type =
    float;
  _time_type time;
  using _road_type_type =
    uint32_t;
  _road_type_type road_type;
  using _road_class_type =
    uint32_t;
  _road_class_type road_class;
  using _specific_type_type =
    uint32_t;
  _specific_type_type specific_type;
  using _road_direction_type =
    uint32_t;
  _road_direction_type road_direction;
  using _link_direction_type =
    uint32_t;
  _link_direction_type link_direction;
  using _coord_list_type =
    std::vector<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>>>;
  _coord_list_type coord_list;
  using _traffic_status_type =
    uint32_t;
  _traffic_status_type traffic_status;
  using _intersection_msg_type =
    std::vector<deva_gaode_routing_msgs::msg::WebIntersection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebIntersection_<ContainerAllocator>>>;
  _intersection_msg_type intersection_msg;
  using _lane_num_type =
    uint32_t;
  _lane_num_type lane_num;

  // setters for named parameter idiom
  Type & set__has_traffic_light(
    const bool & _arg)
  {
    this->has_traffic_light = _arg;
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
  Type & set__road_type(
    const uint32_t & _arg)
  {
    this->road_type = _arg;
    return *this;
  }
  Type & set__road_class(
    const uint32_t & _arg)
  {
    this->road_class = _arg;
    return *this;
  }
  Type & set__specific_type(
    const uint32_t & _arg)
  {
    this->specific_type = _arg;
    return *this;
  }
  Type & set__road_direction(
    const uint32_t & _arg)
  {
    this->road_direction = _arg;
    return *this;
  }
  Type & set__link_direction(
    const uint32_t & _arg)
  {
    this->link_direction = _arg;
    return *this;
  }
  Type & set__coord_list(
    const std::vector<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>>> & _arg)
  {
    this->coord_list = _arg;
    return *this;
  }
  Type & set__traffic_status(
    const uint32_t & _arg)
  {
    this->traffic_status = _arg;
    return *this;
  }
  Type & set__intersection_msg(
    const std::vector<deva_gaode_routing_msgs::msg::WebIntersection_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebIntersection_<ContainerAllocator>>> & _arg)
  {
    this->intersection_msg = _arg;
    return *this;
  }
  Type & set__lane_num(
    const uint32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebRoad
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebRoad_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebRoad_ & other) const
  {
    if (this->has_traffic_light != other.has_traffic_light) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    if (this->road_type != other.road_type) {
      return false;
    }
    if (this->road_class != other.road_class) {
      return false;
    }
    if (this->specific_type != other.specific_type) {
      return false;
    }
    if (this->road_direction != other.road_direction) {
      return false;
    }
    if (this->link_direction != other.link_direction) {
      return false;
    }
    if (this->coord_list != other.coord_list) {
      return false;
    }
    if (this->traffic_status != other.traffic_status) {
      return false;
    }
    if (this->intersection_msg != other.intersection_msg) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebRoad_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebRoad_

// alias to use template instance with default allocator
using WebRoad =
  deva_gaode_routing_msgs::msg::WebRoad_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_ROAD__STRUCT_HPP_
