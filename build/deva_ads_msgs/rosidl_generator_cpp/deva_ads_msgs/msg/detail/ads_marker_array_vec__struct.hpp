// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from deva_ads_msgs:msg/AdsMarkerArrayVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__STRUCT_HPP_
#define DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__STRUCT_HPP_

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
// Member 'ads_marker_arrays'
#include "deva_ads_msgs/msg/detail/ads_marker_array__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__deva_ads_msgs__msg__AdsMarkerArrayVec __attribute__((deprecated))
#else
# define DEPRECATED__deva_ads_msgs__msg__AdsMarkerArrayVec __declspec(deprecated)
#endif

namespace deva_ads_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AdsMarkerArrayVec_
{
  using Type = AdsMarkerArrayVec_<ContainerAllocator>;

  explicit AdsMarkerArrayVec_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stream = "";
      this->marker_type = 0;
    }
  }

  explicit AdsMarkerArrayVec_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    stream(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->stream = "";
      this->marker_type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _stream_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stream_type stream;
  using _marker_type_type =
    uint8_t;
  _marker_type_type marker_type;
  using _ads_marker_arrays_type =
    std::vector<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>>>;
  _ads_marker_arrays_type ads_marker_arrays;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__stream(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stream = _arg;
    return *this;
  }
  Type & set__marker_type(
    const uint8_t & _arg)
  {
    this->marker_type = _arg;
    return *this;
  }
  Type & set__ads_marker_arrays(
    const std::vector<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_ads_msgs::msg::AdsMarkerArray_<ContainerAllocator>>> & _arg)
  {
    this->ads_marker_arrays = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t POINT =
    0u;
  static constexpr uint8_t CIRCLE =
    1u;
  static constexpr uint8_t POLYLINE =
    2u;
  static constexpr uint8_t POLYGON =
    3u;
  static constexpr uint8_t TEXT =
    4u;

  // pointer types
  using RawPtr =
    deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator> *;
  using ConstRawPtr =
    const deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__deva_ads_msgs__msg__AdsMarkerArrayVec
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__deva_ads_msgs__msg__AdsMarkerArrayVec
    std::shared_ptr<deva_ads_msgs::msg::AdsMarkerArrayVec_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AdsMarkerArrayVec_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->stream != other.stream) {
      return false;
    }
    if (this->marker_type != other.marker_type) {
      return false;
    }
    if (this->ads_marker_arrays != other.ads_marker_arrays) {
      return false;
    }
    return true;
  }
  bool operator!=(const AdsMarkerArrayVec_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AdsMarkerArrayVec_

// alias to use template instance with default allocator
using AdsMarkerArrayVec =
  deva_ads_msgs::msg::AdsMarkerArrayVec_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdsMarkerArrayVec_<ContainerAllocator>::POINT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdsMarkerArrayVec_<ContainerAllocator>::CIRCLE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdsMarkerArrayVec_<ContainerAllocator>::POLYLINE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdsMarkerArrayVec_<ContainerAllocator>::POLYGON;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t AdsMarkerArrayVec_<ContainerAllocator>::TEXT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace deva_ads_msgs

#endif  // DEVA_ADS_MSGS__MSG__DETAIL__ADS_MARKER_ARRAY_VEC__STRUCT_HPP_
