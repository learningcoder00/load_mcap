// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from environment_model_msgs:msg/EnvInfo.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__STRUCT_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
// Member 'env_start_header'
// Member 'map_header'
#include "deva_common_msgs/msg/detail/header__struct.hpp"
// Member 'env_lines'
#include "environment_model_msgs/msg/detail/env_line__struct.hpp"
// Member 'env_objects'
#include "environment_model_msgs/msg/detail/env_object__struct.hpp"
// Member 'env_signals'
#include "environment_model_msgs/msg/detail/env_signal__struct.hpp"
// Member 'junction_box'
// Member 'roadline_final'
// Member 'roadline'
#include "environment_model_msgs/msg/detail/vec2d__struct.hpp"
// Member 'passable_space'
// Member 'law_space'
// Member 'law_space_merged'
// Member 'hdair_driveline'
#include "environment_model_msgs/msg/detail/vec2d_array__struct.hpp"
// Member 'links'
#include "environment_model_msgs/msg/detail/env_link__struct.hpp"
// Member 'road_boundaries'
#include "environment_model_msgs/msg/detail/road_boundary__struct.hpp"
// Member 'scenario_info'
#include "environment_model_msgs/msg/detail/scenario_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__environment_model_msgs__msg__EnvInfo __attribute__((deprecated))
#else
# define DEPRECATED__environment_model_msgs__msg__EnvInfo __declspec(deprecated)
#endif

namespace environment_model_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EnvInfo_
{
  using Type = EnvInfo_<ContainerAllocator>;

  explicit EnvInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    env_start_header(_init),
    map_header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->map_mode = 0;
      this->routing_mode = 0;
      this->navi_index = 0l;
      this->has_map = false;
      this->meg_map_mode = 0;
      this->channel_valid = false;
      this->dist_sd_junction = 0.0;
      this->ownership = 0l;
      this->highway_scene = 0;
    }
  }

  explicit EnvInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    env_start_header(_alloc, _init),
    map_header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->index = 0l;
      this->map_mode = 0;
      this->routing_mode = 0;
      this->navi_index = 0l;
      this->has_map = false;
      this->meg_map_mode = 0;
      this->channel_valid = false;
      this->dist_sd_junction = 0.0;
      this->ownership = 0l;
      this->highway_scene = 0;
    }
  }

  // field types and members
  using _header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _index_type =
    int32_t;
  _index_type index;
  using _env_lines_type =
    std::vector<environment_model_msgs::msg::EnvLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvLine_<ContainerAllocator>>>;
  _env_lines_type env_lines;
  using _env_objects_type =
    std::vector<environment_model_msgs::msg::EnvObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvObject_<ContainerAllocator>>>;
  _env_objects_type env_objects;
  using _env_signals_type =
    std::vector<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>>>;
  _env_signals_type env_signals;
  using _junction_box_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _junction_box_type junction_box;
  using _env_start_header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _env_start_header_type env_start_header;
  using _map_header_type =
    deva_common_msgs::msg::Header_<ContainerAllocator>;
  _map_header_type map_header;
  using _map_mode_type =
    uint8_t;
  _map_mode_type map_mode;
  using _routing_mode_type =
    uint8_t;
  _routing_mode_type routing_mode;
  using _navi_index_type =
    int32_t;
  _navi_index_type navi_index;
  using _has_map_type =
    bool;
  _has_map_type has_map;
  using _passable_space_type =
    std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>>;
  _passable_space_type passable_space;
  using _law_space_type =
    std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>>;
  _law_space_type law_space;
  using _roadline_final_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _roadline_final_type roadline_final;
  using _roadline_type =
    std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>>;
  _roadline_type roadline;
  using _law_space_merged_type =
    std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>>;
  _law_space_merged_type law_space_merged;
  using _meg_map_mode_type =
    uint8_t;
  _meg_map_mode_type meg_map_mode;
  using _channel_valid_type =
    bool;
  _channel_valid_type channel_valid;
  using _dist_sd_junction_type =
    double;
  _dist_sd_junction_type dist_sd_junction;
  using _hdair_driveline_type =
    std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>>;
  _hdair_driveline_type hdair_driveline;
  using _links_type =
    std::vector<environment_model_msgs::msg::EnvLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvLink_<ContainerAllocator>>>;
  _links_type links;
  using _ownership_type =
    int32_t;
  _ownership_type ownership;
  using _road_boundaries_type =
    std::vector<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>>>;
  _road_boundaries_type road_boundaries;
  using _scenario_info_type =
    std::vector<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>>>;
  _scenario_info_type scenario_info;
  using _highway_scene_type =
    uint8_t;
  _highway_scene_type highway_scene;

  // setters for named parameter idiom
  Type & set__header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__index(
    const int32_t & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__env_lines(
    const std::vector<environment_model_msgs::msg::EnvLine_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvLine_<ContainerAllocator>>> & _arg)
  {
    this->env_lines = _arg;
    return *this;
  }
  Type & set__env_objects(
    const std::vector<environment_model_msgs::msg::EnvObject_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvObject_<ContainerAllocator>>> & _arg)
  {
    this->env_objects = _arg;
    return *this;
  }
  Type & set__env_signals(
    const std::vector<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvSignal_<ContainerAllocator>>> & _arg)
  {
    this->env_signals = _arg;
    return *this;
  }
  Type & set__junction_box(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->junction_box = _arg;
    return *this;
  }
  Type & set__env_start_header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->env_start_header = _arg;
    return *this;
  }
  Type & set__map_header(
    const deva_common_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->map_header = _arg;
    return *this;
  }
  Type & set__map_mode(
    const uint8_t & _arg)
  {
    this->map_mode = _arg;
    return *this;
  }
  Type & set__routing_mode(
    const uint8_t & _arg)
  {
    this->routing_mode = _arg;
    return *this;
  }
  Type & set__navi_index(
    const int32_t & _arg)
  {
    this->navi_index = _arg;
    return *this;
  }
  Type & set__has_map(
    const bool & _arg)
  {
    this->has_map = _arg;
    return *this;
  }
  Type & set__passable_space(
    const std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>> & _arg)
  {
    this->passable_space = _arg;
    return *this;
  }
  Type & set__law_space(
    const std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>> & _arg)
  {
    this->law_space = _arg;
    return *this;
  }
  Type & set__roadline_final(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->roadline_final = _arg;
    return *this;
  }
  Type & set__roadline(
    const std::vector<environment_model_msgs::msg::Vec2d_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2d_<ContainerAllocator>>> & _arg)
  {
    this->roadline = _arg;
    return *this;
  }
  Type & set__law_space_merged(
    const std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>> & _arg)
  {
    this->law_space_merged = _arg;
    return *this;
  }
  Type & set__meg_map_mode(
    const uint8_t & _arg)
  {
    this->meg_map_mode = _arg;
    return *this;
  }
  Type & set__channel_valid(
    const bool & _arg)
  {
    this->channel_valid = _arg;
    return *this;
  }
  Type & set__dist_sd_junction(
    const double & _arg)
  {
    this->dist_sd_junction = _arg;
    return *this;
  }
  Type & set__hdair_driveline(
    const std::vector<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::Vec2dArray_<ContainerAllocator>>> & _arg)
  {
    this->hdair_driveline = _arg;
    return *this;
  }
  Type & set__links(
    const std::vector<environment_model_msgs::msg::EnvLink_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::EnvLink_<ContainerAllocator>>> & _arg)
  {
    this->links = _arg;
    return *this;
  }
  Type & set__ownership(
    const int32_t & _arg)
  {
    this->ownership = _arg;
    return *this;
  }
  Type & set__road_boundaries(
    const std::vector<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::RoadBoundary_<ContainerAllocator>>> & _arg)
  {
    this->road_boundaries = _arg;
    return *this;
  }
  Type & set__scenario_info(
    const std::vector<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<environment_model_msgs::msg::ScenarioInfo_<ContainerAllocator>>> & _arg)
  {
    this->scenario_info = _arg;
    return *this;
  }
  Type & set__highway_scene(
    const uint8_t & _arg)
  {
    this->highway_scene = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    environment_model_msgs::msg::EnvInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const environment_model_msgs::msg::EnvInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      environment_model_msgs::msg::EnvInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__environment_model_msgs__msg__EnvInfo
    std::shared_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__environment_model_msgs__msg__EnvInfo
    std::shared_ptr<environment_model_msgs::msg::EnvInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EnvInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->env_lines != other.env_lines) {
      return false;
    }
    if (this->env_objects != other.env_objects) {
      return false;
    }
    if (this->env_signals != other.env_signals) {
      return false;
    }
    if (this->junction_box != other.junction_box) {
      return false;
    }
    if (this->env_start_header != other.env_start_header) {
      return false;
    }
    if (this->map_header != other.map_header) {
      return false;
    }
    if (this->map_mode != other.map_mode) {
      return false;
    }
    if (this->routing_mode != other.routing_mode) {
      return false;
    }
    if (this->navi_index != other.navi_index) {
      return false;
    }
    if (this->has_map != other.has_map) {
      return false;
    }
    if (this->passable_space != other.passable_space) {
      return false;
    }
    if (this->law_space != other.law_space) {
      return false;
    }
    if (this->roadline_final != other.roadline_final) {
      return false;
    }
    if (this->roadline != other.roadline) {
      return false;
    }
    if (this->law_space_merged != other.law_space_merged) {
      return false;
    }
    if (this->meg_map_mode != other.meg_map_mode) {
      return false;
    }
    if (this->channel_valid != other.channel_valid) {
      return false;
    }
    if (this->dist_sd_junction != other.dist_sd_junction) {
      return false;
    }
    if (this->hdair_driveline != other.hdair_driveline) {
      return false;
    }
    if (this->links != other.links) {
      return false;
    }
    if (this->ownership != other.ownership) {
      return false;
    }
    if (this->road_boundaries != other.road_boundaries) {
      return false;
    }
    if (this->scenario_info != other.scenario_info) {
      return false;
    }
    if (this->highway_scene != other.highway_scene) {
      return false;
    }
    return true;
  }
  bool operator!=(const EnvInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EnvInfo_

// alias to use template instance with default allocator
using EnvInfo =
  environment_model_msgs::msg::EnvInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ENV_INFO__STRUCT_HPP_
