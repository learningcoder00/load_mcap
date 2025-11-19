// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArray.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__STRUCT_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'color'
#include "std_msgs/msg/detail/color_rgba__struct.hpp"
// Member 'markers'
#include "deva_ads_msgs/msg/detail/ads_marker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_ads_msgs__msg__AdsMarkerArray __attribute__((deprecated))
#else
# define DEPRECATED__deva_ads_msgs__msg__AdsMarkerArray __declspec(deprecated)
#endif

namespace deva_ads_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdsMarkerArray_
{
  using Type = AdsMarkerArray_<ContainerAllocator>;

  explicit AdsMarkerArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = "";
      this->classes = "";
      this->width = 0.0f;
      this->height = 0.0f;
    }
  }

  explicit AdsMarkerArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uuid(_alloc),
    classes(_alloc),
    color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->uuid = "";
      this->classes = "";
      this->width = 0.0f;
      this->height = 0.0f;
    }
  }

  // field types and members
  using _uuid_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _uuid_type uuid;
  using _classes_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _classes_type classes;
  using _color_type =
    std_msgs::msg::ColorRGBA_<ContainerAllocator>;
  _color_type color;
  using _width_type =
    float;
  _width_type width;
  using _height_type =
    float;
  _height_type height;
  using _markers_type =
    std::vector<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>>>;
  _markers_type markers;

  // setters for named parameter idiom
  Type & set__uuid(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->uuid = _arg;
    return *this;
  }
  Type & set__classes(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->classes = _arg;
    return *this;
  }
  Type & set__color(
    const std_msgs::msg::ColorRGBA_<ContainerAllocator> & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__markers(
    const std::vector<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_ads_msgs::msg::AdsMarker_<ContainerAllocator>>> & _arg)
  {
    this->markers = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_ads_msgs__msg__AdsMarkerArray
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_ads_msgs__msg__AdsMarkerArray
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdsMarkerArray_ & other) const
  {
    if (this->uuid != other.uuid) {
      return false;
    }
    if (this->classes != other.classes) {
      return false;
    }
    if (this->color != other.color) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->markers != other.markers) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdsMarkerArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdsMarkerArray_

// alias to use template instance with default allocator
using AdsMarkerArray =
  deva_ads_msgs::msg::AdsMarkerArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace deva_ads_msgs

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY__STRUCT_HPP_
