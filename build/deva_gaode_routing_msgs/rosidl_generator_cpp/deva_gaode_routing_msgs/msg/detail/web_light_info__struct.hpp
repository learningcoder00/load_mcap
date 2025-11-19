// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_gaode_routing_msgs:msg/WebLightInfo.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__STRUCT_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'light_states'
#include "deva_gaode_routing_msgs/msg/detail/web_light_state__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebLightInfo __attribute__((deprecated))
#else
# define DEPRECATED__deva_gaode_routing_msgs__msg__WebLightInfo __declspec(deprecated)
#endif

namespace deva_gaode_routing_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WebLightInfo_
{
  using Type = WebLightInfo_<ContainerAllocator>;

  explicit WebLightInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dir = 0l;
      this->wait_num = 0l;
      this->desc = "";
    }
  }

  explicit WebLightInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : desc(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dir = 0l;
      this->wait_num = 0l;
      this->desc = "";
    }
  }

  // field types and members
  using _dir_type =
    int32_t;
  _dir_type dir;
  using _wait_num_type =
    int32_t;
  _wait_num_type wait_num;
  using _light_states_type =
    std::vector<deva_gaode_routing_msgs::msg::WebLightState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebLightState_<ContainerAllocator>>>;
  _light_states_type light_states;
  using _desc_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _desc_type desc;

  // setters for named parameter idiom
  Type & set__dir(
    const int32_t & _arg)
  {
    this->dir = _arg;
    return *this;
  }
  Type & set__wait_num(
    const int32_t & _arg)
  {
    this->wait_num = _arg;
    return *this;
  }
  Type & set__light_states(
    const std::vector<deva_gaode_routing_msgs::msg::WebLightState_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::WebLightState_<ContainerAllocator>>> & _arg)
  {
    this->light_states = _arg;
    return *this;
  }
  Type & set__desc(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->desc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebLightInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_gaode_routing_msgs__msg__WebLightInfo
    std::shared_ptr<deva_gaode_routing_msgs::msg::WebLightInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WebLightInfo_ & other) const
  {
    if (this->dir != other.dir) {
      return false;
    }
    if (this->wait_num != other.wait_num) {
      return false;
    }
    if (this->light_states != other.light_states) {
      return false;
    }
    if (this->desc != other.desc) {
      return false;
    }
    return true;
  }
  bool operator!=(const WebLightInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WebLightInfo_

// alias to use template instance with default allocator
using WebLightInfo =
  deva_gaode_routing_msgs::msg::WebLightInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__WEB_LIGHT_INFO__STRUCT_HPP_
