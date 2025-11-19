// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebTrafficLight.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'position'
#include "deva_gaode_routing_msgs/msg/detail/web_point__struct.hpp"
// Member 'light_info'
#include "deva_gaode_routing_msgs/msg/detail/web_light_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebTrafficLight __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebTrafficLight __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebTrafficLight_
{
  using Type = WebTrafficLight_<ContainerAllocator>;

  explicit WebTrafficLight_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    light_info(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0l;
      this->road_index = 0l;
      this->setp_index = 0l;
      this->path_id = 0l;
      this->status = 0l;
    }
  }

  explicit WebTrafficLight_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    light_info(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->road_id = 0l;
      this->road_index = 0l;
      this->setp_index = 0l;
      this->path_id = 0l;
      this->status = 0l;
    }
  }

  // field types and members
  using _road_id_type =
    int32_t;
  _road_id_type road_id;
  using _road_index_type =
    int32_t;
  _road_index_type road_index;
  using _setp_index_type =
    int32_t;
  _setp_index_type setp_index;
  using _path_id_type =
    int32_t;
  _path_id_type path_id;
  using _position_type =
    deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator>;
  _position_type position;
  using _status_type =
    int32_t;
  _status_type status;
  using _light_info_type =
    deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator>;
  _light_info_type light_info;

  // setters for named parameter idiom
  Type & set__road_id(
    const int32_t & _arg)
  {
    this->road_id = _arg;
    return *this;
  }
  Type & set__road_index(
    const int32_t & _arg)
  {
    this->road_index = _arg;
    return *this;
  }
  Type & set__setp_index(
    const int32_t & _arg)
  {
    this->setp_index = _arg;
    return *this;
  }
  Type & set__path_id(
    const int32_t & _arg)
  {
    this->path_id = _arg;
    return *this;
  }
  Type & set__position(
    const deva_gaode_routing_msgs::msg::WebPoint_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__status(
    const int32_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__light_info(
    const deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator> & _arg)
  {
    this->light_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebTrafficLight
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebTrafficLight
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebTrafficLight_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebTrafficLight_ & other) const
  {
    if (this->road_id != other.road_id) {
      return false;
    }
    if (this->road_index != other.road_index) {
      return false;
    }
    if (this->setp_index != other.setp_index) {
      return false;
    }
    if (this->path_id != other.path_id) {
      return false;
    }
    if (this->position != other.position) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->light_info != other.light_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebTrafficLight_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebTrafficLight_

// alias to use template instance with default allocator
using WebTrafficLight =
  deva_gaode_routing_msgs::msg::WebTrafficLight_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_TRAFFIC_LIGHT__STRUCT_HPP_
