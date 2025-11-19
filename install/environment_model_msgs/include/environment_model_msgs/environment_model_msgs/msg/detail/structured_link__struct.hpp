// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/StructuredLink.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'feature_point_ids'
#include "deva_gaode_routing_msgs/msg/detail/feature_id_type__struct.hpp"
// Member 'points'
#include "environment_model_msgs/msg/detail/vec3d__struct.hpp"
// Member 'guidances'
#include "deva_gaode_routing_msgs/msg/detail/guidance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__StructuredLink __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__StructuredLink __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StructuredLink_
{
  using Type = StructuredLink_<ContainerAllocator>;

  explicit StructuredLink_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->direction = 0;
      this->length = 0l;
      this->speed_limit_s2e = 0ul;
      this->speed_limit_e2s = 0ul;
      this->coverage_status = 0;
      this->lane_num = 0;
      this->lane_num_s2e = 0;
      this->lane_num_e2s = 0;
      this->relationship_with_junction = 0;
      this->is_on_routing = false;
      this->need_revert = false;
    }
  }

  explicit StructuredLink_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ull;
      this->direction = 0;
      this->length = 0l;
      this->speed_limit_s2e = 0ul;
      this->speed_limit_e2s = 0ul;
      this->coverage_status = 0;
      this->lane_num = 0;
      this->lane_num_s2e = 0;
      this->lane_num_e2s = 0;
      this->relationship_with_junction = 0;
      this->is_on_routing = false;
      this->need_revert = false;
    }
  }

  // field types and members
  using _id_type =
    uint64_t;
  _id_type id;
  using _prev_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _prev_ids_type prev_ids;
  using _succ_ids_type =
    std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>>;
  _succ_ids_type succ_ids;
  using _feature_point_ids_type =
    std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>>;
  _feature_point_ids_type feature_point_ids;
  using _points_type =
    std::vector<environment_model_msgs::msg::Vec3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec3d_<ContainerAllocator>>>;
  _points_type points;
  using _direction_type =
    uint8_t;
  _direction_type direction;
  using _length_type =
    int32_t;
  _length_type length;
  using _speed_limit_s2e_type =
    uint32_t;
  _speed_limit_s2e_type speed_limit_s2e;
  using _speed_limit_e2s_type =
    uint32_t;
  _speed_limit_e2s_type speed_limit_e2s;
  using _coverage_status_type =
    uint16_t;
  _coverage_status_type coverage_status;
  using _lane_num_type =
    uint8_t;
  _lane_num_type lane_num;
  using _lane_num_s2e_type =
    uint8_t;
  _lane_num_s2e_type lane_num_s2e;
  using _lane_num_e2s_type =
    uint8_t;
  _lane_num_e2s_type lane_num_e2s;
  using _relationship_with_junction_type =
    uint8_t;
  _relationship_with_junction_type relationship_with_junction;
  using _guidances_type =
    std::vector<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>>;
  _guidances_type guidances;
  using _is_on_routing_type =
    bool;
  _is_on_routing_type is_on_routing;
  using _need_revert_type =
    bool;
  _need_revert_type need_revert;
  using _link_kinds_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _link_kinds_type link_kinds;

  // setters for named parameter idiom
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__prev_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->prev_ids = _arg;
    return *this;
  }
  Type & set__succ_ids(
    const std::vector<uint64_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint64_t>> & _arg)
  {
    this->succ_ids = _arg;
    return *this;
  }
  Type & set__feature_point_ids(
    const std::vector<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::FeatureIDType_<ContainerAllocator>>> & _arg)
  {
    this->feature_point_ids = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<environment_model_msgs::msg::Vec3d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec3d_<ContainerAllocator>>> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__direction(
    const uint8_t & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__length(
    const int32_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__speed_limit_s2e(
    const uint32_t & _arg)
  {
    this->speed_limit_s2e = _arg;
    return *this;
  }
  Type & set__speed_limit_e2s(
    const uint32_t & _arg)
  {
    this->speed_limit_e2s = _arg;
    return *this;
  }
  Type & set__coverage_status(
    const uint16_t & _arg)
  {
    this->coverage_status = _arg;
    return *this;
  }
  Type & set__lane_num(
    const uint8_t & _arg)
  {
    this->lane_num = _arg;
    return *this;
  }
  Type & set__lane_num_s2e(
    const uint8_t & _arg)
  {
    this->lane_num_s2e = _arg;
    return *this;
  }
  Type & set__lane_num_e2s(
    const uint8_t & _arg)
  {
    this->lane_num_e2s = _arg;
    return *this;
  }
  Type & set__relationship_with_junction(
    const uint8_t & _arg)
  {
    this->relationship_with_junction = _arg;
    return *this;
  }
  Type & set__guidances(
    const std::vector<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<deva_gaode_routing_msgs::msg::Guidance_<ContainerAllocator>>> & _arg)
  {
    this->guidances = _arg;
    return *this;
  }
  Type & set__is_on_routing(
    const bool & _arg)
  {
    this->is_on_routing = _arg;
    return *this;
  }
  Type & set__need_revert(
    const bool & _arg)
  {
    this->need_revert = _arg;
    return *this;
  }
  Type & set__link_kinds(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->link_kinds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::StructuredLink_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::StructuredLink_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::StructuredLink_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::StructuredLink_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__StructuredLink
    std::shared_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__StructuredLink
    std::shared_ptr<environment_model_msgs::msg::StructuredLink_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StructuredLink_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->prev_ids != other.prev_ids) {
      return false;
    }
    if (this->succ_ids != other.succ_ids) {
      return false;
    }
    if (this->feature_point_ids != other.feature_point_ids) {
      return false;
    }
    if (this->points != other.points) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->speed_limit_s2e != other.speed_limit_s2e) {
      return false;
    }
    if (this->speed_limit_e2s != other.speed_limit_e2s) {
      return false;
    }
    if (this->coverage_status != other.coverage_status) {
      return false;
    }
    if (this->lane_num != other.lane_num) {
      return false;
    }
    if (this->lane_num_s2e != other.lane_num_s2e) {
      return false;
    }
    if (this->lane_num_e2s != other.lane_num_e2s) {
      return false;
    }
    if (this->relationship_with_junction != other.relationship_with_junction) {
      return false;
    }
    if (this->guidances != other.guidances) {
      return false;
    }
    if (this->is_on_routing != other.is_on_routing) {
      return false;
    }
    if (this->need_revert != other.need_revert) {
      return false;
    }
    if (this->link_kinds != other.link_kinds) {
      return false;
    }
    return true;
  }
  bool operator!=(const StructuredLink_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StructuredLink_

// alias to use template instance with default allocator
using StructuredLink =
  environment_model_msgs::msg::StructuredLink_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__STRUCTURED_LINK__STRUCT_HPP_
