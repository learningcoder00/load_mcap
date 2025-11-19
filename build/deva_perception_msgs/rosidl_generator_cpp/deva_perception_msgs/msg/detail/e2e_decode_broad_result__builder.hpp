// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_perception_msgs:msg/E2eDecodeBroadResult.idl
// generated code does not contain a copyright notice

#ifndef DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__BUILDER_HPP_
#define DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_perception_msgs/msg/detail/e2e_decode_broad_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_perception_msgs
{

namespace msg
{

namespace builder
{

class Init_E2eDecodeBroadResult_pred_score
{
public:
  explicit Init_E2eDecodeBroadResult_pred_score(::deva_perception_msgs::msg::E2eDecodeBroadResult & msg)
  : msg_(msg)
  {}
  ::deva_perception_msgs::msg::E2eDecodeBroadResult pred_score(::deva_perception_msgs::msg::E2eDecodeBroadResult::_pred_score_type arg)
  {
    msg_.pred_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eDecodeBroadResult msg_;
};

class Init_E2eDecodeBroadResult_pred_category
{
public:
  Init_E2eDecodeBroadResult_pred_category()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_E2eDecodeBroadResult_pred_score pred_category(::deva_perception_msgs::msg::E2eDecodeBroadResult::_pred_category_type arg)
  {
    msg_.pred_category = std::move(arg);
    return Init_E2eDecodeBroadResult_pred_score(msg_);
  }

private:
  ::deva_perception_msgs::msg::E2eDecodeBroadResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_perception_msgs::msg::E2eDecodeBroadResult>()
{
  return deva_perception_msgs::msg::builder::Init_E2eDecodeBroadResult_pred_category();
}

}  // namespace deva_perception_msgs

#endif  // DEVA_PERCEPTION_MSGS__MSG__DETAIL__E2E_DECODE_BROAD_RESULT__BUILDER_HPP_
