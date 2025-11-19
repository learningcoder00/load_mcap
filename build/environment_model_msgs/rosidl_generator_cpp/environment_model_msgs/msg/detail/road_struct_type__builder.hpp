// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from environment_model_msgs:msg/RoadStructType.idl
// generated code does not contain a copyright notice

#ifndef ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__BUILDER_HPP_
#define ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "environment_model_msgs/msg/detail/road_struct_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace environment_model_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadStructType_confidence
{
public:
  explicit Init_RoadStructType_confidence(::environment_model_msgs::msg::RoadStructType & msg)
  : msg_(msg)
  {}
  ::environment_model_msgs::msg::RoadStructType confidence(::environment_model_msgs::msg::RoadStructType::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadStructType msg_;
};

class Init_RoadStructType_enum_road_struct_type
{
public:
  Init_RoadStructType_enum_road_struct_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadStructType_confidence enum_road_struct_type(::environment_model_msgs::msg::RoadStructType::_enum_road_struct_type_type arg)
  {
    msg_.enum_road_struct_type = std::move(arg);
    return Init_RoadStructType_confidence(msg_);
  }

private:
  ::environment_model_msgs::msg::RoadStructType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::environment_model_msgs::msg::RoadStructType>()
{
  return environment_model_msgs::msg::builder::Init_RoadStructType_enum_road_struct_type();
}

}  // namespace environment_model_msgs

#endif  // ENVIRONMENT_MODEL_MSGS__MSG__DETAIL__ROAD_STRUCT_TYPE__BUILDER_HPP_
