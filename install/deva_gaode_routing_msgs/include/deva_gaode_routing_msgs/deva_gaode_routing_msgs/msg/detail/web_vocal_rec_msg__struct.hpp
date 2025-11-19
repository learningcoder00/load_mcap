// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebVocalRecMsg.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebVocalRecMsg __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebVocalRecMsg __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebVocalRecMsg_
{
  using Type = WebVocalRecMsg_<ContainerAllocator>;

  explicit WebVocalRecMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequence_num = 0l;
      this->road_type = 0l;
      this->conor_type = 0l;
      this->lane_num = 0l;
      this->distance = 0l;
      this->voice_content = "";
    }
  }

  explicit WebVocalRecMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : voice_content(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sequence_num = 0l;
      this->road_type = 0l;
      this->conor_type = 0l;
      this->lane_num = 0l;
      this->distance = 0l;
      this->voice_content = "";
    }
  }

  // field types and members
  using _sequence_num_type =
    int32_t;
  _sequence_num_type sequence_num;
  using _road_type_type =
    int32_t;
  _road_type_type road_type;
  using _conor_type_type =
    int32_t;
  _conor_type_type conor_type;
  using _lane_num_type =
    int32_t;
  _lane_num_type lane_num;
  using _distance_type =
    int32_t;
  _distance_type distance;
  using _voice_content_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _voice_content_type voice_content;

  // setters for named parameter idiom
  Type & set__sequence_num(
    const int32_t & _arg)
  {
    this->sequence_num = _arg;
    return *this;
  }
  Type & set__road_type(
    const int32_t & _arg)
  {
    this->road_type = _arg;
    return *this;
  }
  Type & set__conor_type(
    const int32_t & _arg)
  {
    this->conor_type = _arg;
    return *this;
  }
  Type & set__lane_num(
    const int32_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__distance(
    const int32_t & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__voice_content(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->voice_content = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebVocalRecMsg
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebVocalRecMsg
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebVocalRecMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebVocalRecMsg_ & other) const
  {
    if (this->sequence_num != other.sequence_num) {
      return false;
    }
    if (this->road_type != other.road_type) {
      return false;
    }
    if (this->conor_type != other.conor_type) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->voice_content != other.voice_content) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebVocalRecMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebVocalRecMsg_

// alias to use template instance with default allocator
using WebVocalRecMsg =
  deva_gaode_routing_msgs::msg::WebVocalRecMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_VOCAL_REC_MSG__STRUCT_HPP_
