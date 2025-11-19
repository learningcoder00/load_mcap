// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/RVDynamicObstacle.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_RVDynamicObstacle_obj_source
{
public:
  explicit Init_RVDynamicObstacle_obj_source(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::RVDynamicObstacle obj_source(::deva_perception_msgs::msg::RVDynamicObstacle::_obj_source_type arg)
  {
    msg_.obj_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_full_trunc_score
{
public:
  explicit Init_RVDynamicObstacle_full_trunc_score(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_obj_source full_trunc_score(::deva_perception_msgs::msg::RVDynamicObstacle::_full_trunc_score_type arg)
  {
    msg_.full_trunc_score = std::move(arg);
    return Init_RVDynamicObstacle_obj_source(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_full_occ_score
{
public:
  explicit Init_RVDynamicObstacle_full_occ_score(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_full_trunc_score full_occ_score(::deva_perception_msgs::msg::RVDynamicObstacle::_full_occ_score_type arg)
  {
    msg_.full_occ_score = std::move(arg);
    return Init_RVDynamicObstacle_full_trunc_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_tail_bbox
{
public:
  explicit Init_RVDynamicObstacle_tail_bbox(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_full_occ_score tail_bbox(::deva_perception_msgs::msg::RVDynamicObstacle::_tail_bbox_type arg)
  {
    msg_.tail_bbox = std::move(arg);
    return Init_RVDynamicObstacle_full_occ_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_full_bbox
{
public:
  explicit Init_RVDynamicObstacle_full_bbox(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_tail_bbox full_bbox(::deva_perception_msgs::msg::RVDynamicObstacle::_full_bbox_type arg)
  {
    msg_.full_bbox = std::move(arg);
    return Init_RVDynamicObstacle_tail_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_world_info
{
public:
  explicit Init_RVDynamicObstacle_world_info(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_full_bbox world_info(::deva_perception_msgs::msg::RVDynamicObstacle::_world_info_type arg)
  {
    msg_.world_info = std::move(arg);
    return Init_RVDynamicObstacle_full_bbox(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_mapped_type
{
public:
  explicit Init_RVDynamicObstacle_mapped_type(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_world_info mapped_type(::deva_perception_msgs::msg::RVDynamicObstacle::_mapped_type_type arg)
  {
    msg_.mapped_type = std::move(arg);
    return Init_RVDynamicObstacle_world_info(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_id
{
public:
  explicit Init_RVDynamicObstacle_id(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_mapped_type id(::deva_perception_msgs::msg::RVDynamicObstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_RVDynamicObstacle_mapped_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_select_level
{
public:
  explicit Init_RVDynamicObstacle_select_level(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_id select_level(::deva_perception_msgs::msg::RVDynamicObstacle::_select_level_type arg)
  {
    msg_.select_level = std::move(arg);
    return Init_RVDynamicObstacle_id(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_age
{
public:
  explicit Init_RVDynamicObstacle_age(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_select_level age(::deva_perception_msgs::msg::RVDynamicObstacle::_age_type arg)
  {
    msg_.age = std::move(arg);
    return Init_RVDynamicObstacle_select_level(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_conf
{
public:
  explicit Init_RVDynamicObstacle_conf(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_age conf(::deva_perception_msgs::msg::RVDynamicObstacle::_conf_type arg)
  {
    msg_.conf = std::move(arg);
    return Init_RVDynamicObstacle_age(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_time_stamp
{
public:
  explicit Init_RVDynamicObstacle_time_stamp(::deva_perception_msgs::msg::RVDynamicObstacle & msg)
  : msg_(msg)
  {}
  Init_RVDynamicObstacle_conf time_stamp(::deva_perception_msgs::msg::RVDynamicObstacle::_time_stamp_type arg)
  {
    msg_.time_stamp = std::move(arg);
    return Init_RVDynamicObstacle_conf(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

class Init_RVDynamicObstacle_life_time
{
public:
  Init_RVDynamicObstacle_life_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RVDynamicObstacle_time_stamp life_time(::deva_perception_msgs::msg::RVDynamicObstacle::_life_time_type arg)
  {
    msg_.life_time = std::move(arg);
    return Init_RVDynamicObstacle_time_stamp(msg_);
  }

private:
  ::deva_perception_msgs::msg::RVDynamicObstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::RVDynamicObstacle>()
{
  return deva_perception_msgs::msg::builder::Init_RVDynamicObstacle_life_time();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__RV_DYNAMIC_OBSTACLE__BUILDER_HPP_
