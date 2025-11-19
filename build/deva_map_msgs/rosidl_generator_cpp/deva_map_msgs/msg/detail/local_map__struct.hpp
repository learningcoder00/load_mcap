// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_map_msgs:msg/LocalMap.idl
// generated code does not contain a copyright notice

#ifndef DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__STRUCT_HPP_
#define DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'st_map'
#include "deva_map_msgs/msg/detail/st_local_map__struct.hpp"
// Member 'ust_map'
#include "deva_perception_msgs/msg/detail/ust_boundary__struct.hpp"
// Member 'avp_map'
#include "deva_map_msgs/msg/detail/avp_local_map__struct.hpp"
// Member 'sensor_header'
#include "deva_map_msgs/msg/detail/local_map_header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_map_msgs__msg__LocalMap __attribute__((deprecated))
#else
# define DEPRECATED__deva_map_msgs__msg__LocalMap __declspec(deprecated)
#endif

namespace deva_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalMap_
{
  using Type = LocalMap_<ContainerAllocator>;

  explicit LocalMap_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    st_map(_init),
    avp_map(_init),
    sensor_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_version = "";
      this->error_code = 0;
      this->error_message = "";
      this->map_mode = 0;
      this->is_localization_mode = false;
    }
  }

  explicit LocalMap_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    map_version(_alloc),
    error_message(_alloc),
    st_map(_alloc, _init),
    avp_map(_alloc, _init),
    sensor_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->map_version = "";
      this->error_code = 0;
      this->error_message = "";
      this->map_mode = 0;
      this->is_localization_mode = false;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _map_version_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _map_version_type map_version;
  using _error_code_type =
    uint16_t;
  _error_code_type error_code;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _map_mode_type =
    uint16_t;
  _map_mode_type map_mode;
  using _is_localization_mode_type =
    bool;
  _is_localization_mode_type is_localization_mode;
  using _st_map_type =
    deva_map_msgs::msg::STLocalMap_<ContainerAllocator>;
  _st_map_type st_map;
  using _ust_map_type =
    std::vector<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>>;
  _ust_map_type ust_map;
  using _avp_map_type =
    deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator>;
  _avp_map_type avp_map;
  using _sensor_header_type =
    deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator>;
  _sensor_header_type sensor_header;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__map_version(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->map_version = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint16_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__map_mode(
    const uint16_t & _arg)
  {
    this->map_mode = _arg;
    return *this;
  }
  Type & set__is_localization_mode(
    const bool & _arg)
  {
    this->is_localization_mode = _arg;
    return *this;
  }
  Type & set__st_map(
    const deva_map_msgs::msg::STLocalMap_<ContainerAllocator> & _arg)
  {
    this->st_map = _arg;
    return *this;
  }
  Type & set__ust_map(
    const std::vector<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_perception_msgs::msg::USTBoundary_<ContainerAllocator>>> & _arg)
  {
    this->ust_map = _arg;
    return *this;
  }
  Type & set__avp_map(
    const deva_map_msgs::msg::AvpLocalMap_<ContainerAllocator> & _arg)
  {
    this->avp_map = _arg;
    return *this;
  }
  Type & set__sensor_header(
    const deva_map_msgs::msg::LocalMapHeader_<ContainerAllocator> & _arg)
  {
    this->sensor_header = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_map_msgs::msg::LocalMap_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_map_msgs::msg::LocalMap_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::LocalMap_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_map_msgs::msg::LocalMap_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_map_msgs__msg__LocalMap
    std::shared_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_map_msgs__msg__LocalMap
    std::shared_ptr<deva_map_msgs::msg::LocalMap_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalMap_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->map_version != other.map_version) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->map_mode != other.map_mode) {
      return false;
    }
    if (this->is_localization_mode != other.is_localization_mode) {
      return false;
    }
    if (this->st_map != other.st_map) {
      return false;
    }
    if (this->ust_map != other.ust_map) {
      return false;
    }
    if (this->avp_map != other.avp_map) {
      return false;
    }
    if (this->sensor_header != other.sensor_header) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalMap_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalMap_

// alias to use template instance with default allocator
using LocalMap =
  deva_map_msgs::msg::LocalMap_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_map_msgs

#endif  // DEVA_MAP_MSGS__MSG__DETAIL__LOCAL_MAP__STRUCT_HPP_
