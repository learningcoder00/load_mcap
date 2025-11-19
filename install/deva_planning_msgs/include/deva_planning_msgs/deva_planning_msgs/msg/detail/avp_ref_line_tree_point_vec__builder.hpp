// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_planning_msgs:msg/AvpRefLineTreePointVec.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__BUILDER_HPP_
#define DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_planning_msgs/msg/detail/avp_ref_line_tree_point_vec__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_planning_msgs
{

namespace msg
{

namespace builder
{

class Init_AvpRefLineTreePointVec_vec
{
public:
  Init_AvpRefLineTreePointVec_vec()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deva_planning_msgs::msg::AvpRefLineTreePointVec vec(::deva_planning_msgs::msg::AvpRefLineTreePointVec::_vec_type arg)
  {
    msg_.vec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_planning_msgs::msg::AvpRefLineTreePointVec msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_planning_msgs::msg::AvpRefLineTreePointVec>()
{
  return deva_planning_msgs::msg::builder::Init_AvpRefLineTreePointVec_vec();
}

}  // namespace deva_planning_msgs

#endif  // DEVA_PLANNING_MSGS__MSG__DETAIL__AVP_REF_LINE_TREE_POINT_VEC__BUILDER_HPP_
