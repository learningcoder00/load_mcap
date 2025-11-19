// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/DynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/dynamic_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicObstacle_extra_infos
{
public:
  explicit Init_DynamicObstacle_extra_infos(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::DynamicObstacle extra_infos(::deva_perception_msgs::msg::DynamicObstacle::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_match_indices
{
public:
  explicit Init_DynamicObstacle_match_indices(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_extra_infos match_indices(::deva_perception_msgs::msg::DynamicObstacle::_match_indices_type arg)
  {
    msg_.match_indices = std::move(arg);
    return Init_DynamicObstacle_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_source
{
public:
  explicit Init_DynamicObstacle_source(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_match_indices source(::deva_perception_msgs::msg::DynamicObstacle::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_DynamicObstacle_match_indices(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_tail_trunc_score
{
public:
  explicit Init_DynamicObstacle_tail_trunc_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_source tail_trunc_score(::deva_perception_msgs::msg::DynamicObstacle::_tail_trunc_score_type arg)
  {
    msg_.tail_trunc_score = std::move(arg);
    return Init_DynamicObstacle_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_head_trunc_score
{
public:
  explicit Init_DynamicObstacle_head_trunc_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_tail_trunc_score head_trunc_score(::deva_perception_msgs::msg::DynamicObstacle::_head_trunc_score_type arg)
  {
    msg_.head_trunc_score = std::move(arg);
    return Init_DynamicObstacle_tail_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_full_trunc_score
{
public:
  explicit Init_DynamicObstacle_full_trunc_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_head_trunc_score full_trunc_score(::deva_perception_msgs::msg::DynamicObstacle::_full_trunc_score_type arg)
  {
    msg_.full_trunc_score = std::move(arg);
    return Init_DynamicObstacle_head_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_tail_occ_score
{
public:
  explicit Init_DynamicObstacle_tail_occ_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_full_trunc_score tail_occ_score(::deva_perception_msgs::msg::DynamicObstacle::_tail_occ_score_type arg)
  {
    msg_.tail_occ_score = std::move(arg);
    return Init_DynamicObstacle_full_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_head_occ_score
{
public:
  explicit Init_DynamicObstacle_head_occ_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_tail_occ_score head_occ_score(::deva_perception_msgs::msg::DynamicObstacle::_head_occ_score_type arg)
  {
    msg_.head_occ_score = std::move(arg);
    return Init_DynamicObstacle_tail_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_full_occ_score
{
public:
  explicit Init_DynamicObstacle_full_occ_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_head_occ_score full_occ_score(::deva_perception_msgs::msg::DynamicObstacle::_full_occ_score_type arg)
  {
    msg_.full_occ_score = std::move(arg);
    return Init_DynamicObstacle_head_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_ground_points
{
public:
  explicit Init_DynamicObstacle_ground_points(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_full_occ_score ground_points(::deva_perception_msgs::msg::DynamicObstacle::_ground_points_type arg)
  {
    msg_.ground_points = std::move(arg);
    return Init_DynamicObstacle_full_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_hazard_score
{
public:
  explicit Init_DynamicObstacle_hazard_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_ground_points hazard_score(::deva_perception_msgs::msg::DynamicObstacle::_hazard_score_type arg)
  {
    msg_.hazard_score = std::move(arg);
    return Init_DynamicObstacle_ground_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_hazard_type
{
public:
  explicit Init_DynamicObstacle_hazard_type(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_hazard_score hazard_type(::deva_perception_msgs::msg::DynamicObstacle::_hazard_type_type arg)
  {
    msg_.hazard_type = std::move(arg);
    return Init_DynamicObstacle_hazard_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_brake_score
{
public:
  explicit Init_DynamicObstacle_brake_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_hazard_type brake_score(::deva_perception_msgs::msg::DynamicObstacle::_brake_score_type arg)
  {
    msg_.brake_score = std::move(arg);
    return Init_DynamicObstacle_hazard_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_brake_type
{
public:
  explicit Init_DynamicObstacle_brake_type(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_brake_score brake_type(::deva_perception_msgs::msg::DynamicObstacle::_brake_type_type arg)
  {
    msg_.brake_type = std::move(arg);
    return Init_DynamicObstacle_brake_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_turn_score
{
public:
  explicit Init_DynamicObstacle_turn_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_brake_type turn_score(::deva_perception_msgs::msg::DynamicObstacle::_turn_score_type arg)
  {
    msg_.turn_score = std::move(arg);
    return Init_DynamicObstacle_brake_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_turn_type
{
public:
  explicit Init_DynamicObstacle_turn_type(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_turn_score turn_type(::deva_perception_msgs::msg::DynamicObstacle::_turn_type_type arg)
  {
    msg_.turn_type = std::move(arg);
    return Init_DynamicObstacle_turn_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_light_valid
{
public:
  explicit Init_DynamicObstacle_light_valid(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_turn_type light_valid(::deva_perception_msgs::msg::DynamicObstacle::_light_valid_type arg)
  {
    msg_.light_valid = std::move(arg);
    return Init_DynamicObstacle_turn_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_subclass_score
{
public:
  explicit Init_DynamicObstacle_subclass_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_light_valid subclass_score(::deva_perception_msgs::msg::DynamicObstacle::_subclass_score_type arg)
  {
    msg_.subclass_score = std::move(arg);
    return Init_DynamicObstacle_light_valid(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_subclassification_type
{
public:
  explicit Init_DynamicObstacle_subclassification_type(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_subclass_score subclassification_type(::deva_perception_msgs::msg::DynamicObstacle::_subclassification_type_type arg)
  {
    msg_.subclassification_type = std::move(arg);
    return Init_DynamicObstacle_subclass_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_ped_bbox
{
public:
  explicit Init_DynamicObstacle_ped_bbox(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_subclassification_type ped_bbox(::deva_perception_msgs::msg::DynamicObstacle::_ped_bbox_type arg)
  {
    msg_.ped_bbox = std::move(arg);
    return Init_DynamicObstacle_subclassification_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_tail_bbox
{
public:
  explicit Init_DynamicObstacle_tail_bbox(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_ped_bbox tail_bbox(::deva_perception_msgs::msg::DynamicObstacle::_tail_bbox_type arg)
  {
    msg_.tail_bbox = std::move(arg);
    return Init_DynamicObstacle_ped_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_head_bbox
{
public:
  explicit Init_DynamicObstacle_head_bbox(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_tail_bbox head_bbox(::deva_perception_msgs::msg::DynamicObstacle::_head_bbox_type arg)
  {
    msg_.head_bbox = std::move(arg);
    return Init_DynamicObstacle_tail_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_det_score
{
public:
  explicit Init_DynamicObstacle_det_score(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_head_bbox det_score(::deva_perception_msgs::msg::DynamicObstacle::_det_score_type arg)
  {
    msg_.det_score = std::move(arg);
    return Init_DynamicObstacle_head_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_dynamic_obstacle_type
{
public:
  explicit Init_DynamicObstacle_dynamic_obstacle_type(::deva_perception_msgs::msg::DynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_DynamicObstacle_det_score dynamic_obstacle_type(::deva_perception_msgs::msg::DynamicObstacle::_dynamic_obstacle_type_type arg)
  {
    msg_.dynamic_obstacle_type = std::move(arg);
    return Init_DynamicObstacle_det_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

class Init_DynamicObstacle_obstacle
{
public:
  Init_DynamicObstacle_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DynamicObstacle_dynamic_obstacle_type obstacle(::deva_perception_msgs::msg::DynamicObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_DynamicObstacle_dynamic_obstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::DynamicObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::DynamicObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_DynamicObstacle_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__DYNAMIC_OBSTACLE__BUILDER_HPP_
