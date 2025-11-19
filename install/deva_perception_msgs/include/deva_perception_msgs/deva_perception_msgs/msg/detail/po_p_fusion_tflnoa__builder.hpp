// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/PoPFusionTFLNOA.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/po_p_fusion_tflnoa__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_PoPFusionTFLNOA_flashstatus
{
public:
  explicit Init_PoPFusionTFLNOA_flashstatus(::deva_perception_msgs::msg::PoPFusionTFLNOA & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::PoPFusionTFLNOA flashstatus(::deva_perception_msgs::msg::PoPFusionTFLNOA::_flashstatus_type arg)
  {
    msg_.flashstatus = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::PoPFusionTFLNOA msg_;
};

class Init_PoPFusionTFLNOA_type
{
public:
  explicit Init_PoPFusionTFLNOA_type(::deva_perception_msgs::msg::PoPFusionTFLNOA & msg)
  : msg_(msg)
  {}
  Init_PoPFusionTFLNOA_flashstatus type(::deva_perception_msgs::msg::PoPFusionTFLNOA::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PoPFusionTFLNOA_flashstatus(msg_);
  }

private:
  ::deva_perception_msgs::msg::PoPFusionTFLNOA msg_;
};

class Init_PoPFusionTFLNOA_color
{
public:
  Init_PoPFusionTFLNOA_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoPFusionTFLNOA_type color(::deva_perception_msgs::msg::PoPFusionTFLNOA::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_PoPFusionTFLNOA_type(msg_);
  }

private:
  ::deva_perception_msgs::msg::PoPFusionTFLNOA msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::PoPFusionTFLNOA>()
{
  return deva_perception_msgs::msg::builder::Init_PoPFusionTFLNOA_color();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__PO_P_FUSION_TFLNOA__BUILDER_HPP_
