// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVDynObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_dyn_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVDynObstacle_extra_infos
{
public:
  explicit Init_RVDynObstacle_extra_infos(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVDynObstacle extra_infos(::deva_perception_msgs::msg::RVDynObstacle::_extra_infos_type arg)
  {
    msg_.extra_infos = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_hazard_score
{
public:
  explicit Init_RVDynObstacle_hazard_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_extra_infos hazard_score(::deva_perception_msgs::msg::RVDynObstacle::_hazard_score_type arg)
  {
    msg_.hazard_score = std::move(arg);
    return Init_RVDynObstacle_extra_infos(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_hazard_type
{
public:
  explicit Init_RVDynObstacle_hazard_type(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_hazard_score hazard_type(::deva_perception_msgs::msg::RVDynObstacle::_hazard_type_type arg)
  {
    msg_.hazard_type = std::move(arg);
    return Init_RVDynObstacle_hazard_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_brake_score
{
public:
  explicit Init_RVDynObstacle_brake_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_hazard_type brake_score(::deva_perception_msgs::msg::RVDynObstacle::_brake_score_type arg)
  {
    msg_.brake_score = std::move(arg);
    return Init_RVDynObstacle_hazard_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_brake_type
{
public:
  explicit Init_RVDynObstacle_brake_type(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_brake_score brake_type(::deva_perception_msgs::msg::RVDynObstacle::_brake_type_type arg)
  {
    msg_.brake_type = std::move(arg);
    return Init_RVDynObstacle_brake_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_turn_score
{
public:
  explicit Init_RVDynObstacle_turn_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_brake_type turn_score(::deva_perception_msgs::msg::RVDynObstacle::_turn_score_type arg)
  {
    msg_.turn_score = std::move(arg);
    return Init_RVDynObstacle_brake_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_turn_type
{
public:
  explicit Init_RVDynObstacle_turn_type(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_turn_score turn_type(::deva_perception_msgs::msg::RVDynObstacle::_turn_type_type arg)
  {
    msg_.turn_type = std::move(arg);
    return Init_RVDynObstacle_turn_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_light_valid
{
public:
  explicit Init_RVDynObstacle_light_valid(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_turn_type light_valid(::deva_perception_msgs::msg::RVDynObstacle::_light_valid_type arg)
  {
    msg_.light_valid = std::move(arg);
    return Init_RVDynObstacle_turn_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_subclass_score
{
public:
  explicit Init_RVDynObstacle_subclass_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_light_valid subclass_score(::deva_perception_msgs::msg::RVDynObstacle::_subclass_score_type arg)
  {
    msg_.subclass_score = std::move(arg);
    return Init_RVDynObstacle_light_valid(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_subclassification_type
{
public:
  explicit Init_RVDynObstacle_subclassification_type(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_subclass_score subclassification_type(::deva_perception_msgs::msg::RVDynObstacle::_subclassification_type_type arg)
  {
    msg_.subclassification_type = std::move(arg);
    return Init_RVDynObstacle_subclass_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_ped_bbox
{
public:
  explicit Init_RVDynObstacle_ped_bbox(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_subclassification_type ped_bbox(::deva_perception_msgs::msg::RVDynObstacle::_ped_bbox_type arg)
  {
    msg_.ped_bbox = std::move(arg);
    return Init_RVDynObstacle_subclassification_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_tail_trunc_score
{
public:
  explicit Init_RVDynObstacle_tail_trunc_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_ped_bbox tail_trunc_score(::deva_perception_msgs::msg::RVDynObstacle::_tail_trunc_score_type arg)
  {
    msg_.tail_trunc_score = std::move(arg);
    return Init_RVDynObstacle_ped_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_head_trunc_score
{
public:
  explicit Init_RVDynObstacle_head_trunc_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_tail_trunc_score head_trunc_score(::deva_perception_msgs::msg::RVDynObstacle::_head_trunc_score_type arg)
  {
    msg_.head_trunc_score = std::move(arg);
    return Init_RVDynObstacle_tail_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_full_trunc_score
{
public:
  explicit Init_RVDynObstacle_full_trunc_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_head_trunc_score full_trunc_score(::deva_perception_msgs::msg::RVDynObstacle::_full_trunc_score_type arg)
  {
    msg_.full_trunc_score = std::move(arg);
    return Init_RVDynObstacle_head_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_tail_occ_score
{
public:
  explicit Init_RVDynObstacle_tail_occ_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_full_trunc_score tail_occ_score(::deva_perception_msgs::msg::RVDynObstacle::_tail_occ_score_type arg)
  {
    msg_.tail_occ_score = std::move(arg);
    return Init_RVDynObstacle_full_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_head_occ_score
{
public:
  explicit Init_RVDynObstacle_head_occ_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_tail_occ_score head_occ_score(::deva_perception_msgs::msg::RVDynObstacle::_head_occ_score_type arg)
  {
    msg_.head_occ_score = std::move(arg);
    return Init_RVDynObstacle_tail_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_full_occ_score
{
public:
  explicit Init_RVDynObstacle_full_occ_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_head_occ_score full_occ_score(::deva_perception_msgs::msg::RVDynObstacle::_full_occ_score_type arg)
  {
    msg_.full_occ_score = std::move(arg);
    return Init_RVDynObstacle_head_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_ground_points
{
public:
  explicit Init_RVDynObstacle_ground_points(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_full_occ_score ground_points(::deva_perception_msgs::msg::RVDynObstacle::_ground_points_type arg)
  {
    msg_.ground_points = std::move(arg);
    return Init_RVDynObstacle_full_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_tail_bbox
{
public:
  explicit Init_RVDynObstacle_tail_bbox(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_ground_points tail_bbox(::deva_perception_msgs::msg::RVDynObstacle::_tail_bbox_type arg)
  {
    msg_.tail_bbox = std::move(arg);
    return Init_RVDynObstacle_ground_points(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_head_bbox
{
public:
  explicit Init_RVDynObstacle_head_bbox(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_tail_bbox head_bbox(::deva_perception_msgs::msg::RVDynObstacle::_head_bbox_type arg)
  {
    msg_.head_bbox = std::move(arg);
    return Init_RVDynObstacle_tail_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_bbox
{
public:
  explicit Init_RVDynObstacle_bbox(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_head_bbox bbox(::deva_perception_msgs::msg::RVDynObstacle::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_RVDynObstacle_head_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_det_score
{
public:
  explicit Init_RVDynObstacle_det_score(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_bbox det_score(::deva_perception_msgs::msg::RVDynObstacle::_det_score_type arg)
  {
    msg_.det_score = std::move(arg);
    return Init_RVDynObstacle_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_dynamic_obstacle_type
{
public:
  explicit Init_RVDynObstacle_dynamic_obstacle_type(::deva_perception_msgs::msg::RVDynObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynObstacle_det_score dynamic_obstacle_type(::deva_perception_msgs::msg::RVDynObstacle::_dynamic_obstacle_type_type arg)
  {
    msg_.dynamic_obstacle_type = std::move(arg);
    return Init_RVDynObstacle_det_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

class Init_RVDynObstacle_obstacle
{
public:
  Init_RVDynObstacle_obstacle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVDynObstacle_dynamic_obstacle_type obstacle(::deva_perception_msgs::msg::RVDynObstacle::_obstacle_type arg)
  {
    msg_.obstacle = std::move(arg);
    return Init_RVDynObstacle_dynamic_obstacle_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVDynObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_RVDynObstacle_obstacle();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYN_OBSTACLE__BUILDER_HPP_
