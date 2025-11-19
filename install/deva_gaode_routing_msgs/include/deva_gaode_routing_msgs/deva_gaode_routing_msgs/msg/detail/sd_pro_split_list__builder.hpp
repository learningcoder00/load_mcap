// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_gaode_routing_msgs:msg/SdProSplitList.idl
// generated code does not contain a copyright notice

#ifndef DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__BUILDER_HPP_
#define DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_gaode_routing_msgs/msg/detail/sd_pro_split_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_gaode_routing_msgs
{

namespace msg
{

namespace builder
{

class Init_SdProSplitList_right_of_way
{
public:
  explicit Init_SdProSplitList_right_of_way(::deva_gaode_routing_msgs::msg::SdProSplitList & msg)
  : msg_(msg)
  {}
  ::deva_gaode_routing_msgs::msg::SdProSplitList right_of_way(::deva_gaode_routing_msgs::msg::SdProSplitList::_right_of_way_type arg)
  {
    msg_.right_of_way = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProSplitList msg_;
};

class Init_SdProSplitList_turn_angle
{
public:
  explicit Init_SdProSplitList_turn_angle(::deva_gaode_routing_msgs::msg::SdProSplitList & msg)
  : msg_(msg)
  {}
  Init_SdProSplitList_right_of_way turn_angle(::deva_gaode_routing_msgs::msg::SdProSplitList::_turn_angle_type arg)
  {
    msg_.turn_angle = std::move(arg);
    return Init_SdProSplitList_right_of_way(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProSplitList msg_;
};

class Init_SdProSplitList_sub_path_id
{
public:
  Init_SdProSplitList_sub_path_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SdProSplitList_turn_angle sub_path_id(::deva_gaode_routing_msgs::msg::SdProSplitList::_sub_path_id_type arg)
  {
    msg_.sub_path_id = std::move(arg);
    return Init_SdProSplitList_turn_angle(msg_);
  }

private:
  ::deva_gaode_routing_msgs::msg::SdProSplitList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_gaode_routing_msgs::msg::SdProSplitList>()
{
  return deva_gaode_routing_msgs::msg::builder::Init_SdProSplitList_sub_path_id();
}

}  // namespace deva_gaode_routing_msgs

#endif  // DEVA_GAODE_ROUTING_MSGS__MSG__DETAIL__SD_PRO_SPLIT_LIST__BUILDER_HPP_
