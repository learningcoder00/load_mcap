// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deva_navi_msgs:msg/RoadFacilityProto.idl
// generated code does not contain a copyright notice

#ifndef DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__BUILDER_HPP_
#define DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "deva_navi_msgs/msg/detail/road_facility_proto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace deva_navi_msgs
{

namespace msg
{

namespace builder
{

class Init_RoadFacilityProto_time_range
{
public:
  explicit Init_RoadFacilityProto_time_range(::deva_navi_msgs::msg::RoadFacilityProto & msg)
  : msg_(msg)
  {}
  ::deva_navi_msgs::msg::RoadFacilityProto time_range(::deva_navi_msgs::msg::RoadFacilityProto::_time_range_type arg)
  {
    msg_.time_range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

class Init_RoadFacilityProto_lane_num
{
public:
  explicit Init_RoadFacilityProto_lane_num(::deva_navi_msgs::msg::RoadFacilityProto & msg)
  : msg_(msg)
  {}
  Init_RoadFacilityProto_time_range lane_num(::deva_navi_msgs::msg::RoadFacilityProto::_lane_num_type arg)
  {
    msg_.lane_num = std::move(arg);
    return Init_RoadFacilityProto_time_range(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

class Init_RoadFacilityProto_valid_lane
{
public:
  explicit Init_RoadFacilityProto_valid_lane(::deva_navi_msgs::msg::RoadFacilityProto & msg)
  : msg_(msg)
  {}
  Init_RoadFacilityProto_lane_num valid_lane(::deva_navi_msgs::msg::RoadFacilityProto::_valid_lane_type arg)
  {
    msg_.valid_lane = std::move(arg);
    return Init_RoadFacilityProto_lane_num(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

class Init_RoadFacilityProto_dist_to_end
{
public:
  explicit Init_RoadFacilityProto_dist_to_end(::deva_navi_msgs::msg::RoadFacilityProto & msg)
  : msg_(msg)
  {}
  Init_RoadFacilityProto_valid_lane dist_to_end(::deva_navi_msgs::msg::RoadFacilityProto::_dist_to_end_type arg)
  {
    msg_.dist_to_end = std::move(arg);
    return Init_RoadFacilityProto_valid_lane(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

class Init_RoadFacilityProto_speed_limit
{
public:
  explicit Init_RoadFacilityProto_speed_limit(::deva_navi_msgs::msg::RoadFacilityProto & msg)
  : msg_(msg)
  {}
  Init_RoadFacilityProto_dist_to_end speed_limit(::deva_navi_msgs::msg::RoadFacilityProto::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return Init_RoadFacilityProto_dist_to_end(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

class Init_RoadFacilityProto_lat
{
public:
  explicit Init_RoadFacilityProto_lat(::deva_navi_msgs::msg::RoadFacilityProto & msg)
  : msg_(msg)
  {}
  Init_RoadFacilityProto_speed_limit lat(::deva_navi_msgs::msg::RoadFacilityProto::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_RoadFacilityProto_speed_limit(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

class Init_RoadFacilityProto_lon
{
public:
  explicit Init_RoadFacilityProto_lon(::deva_navi_msgs::msg::RoadFacilityProto & msg)
  : msg_(msg)
  {}
  Init_RoadFacilityProto_lat lon(::deva_navi_msgs::msg::RoadFacilityProto::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_RoadFacilityProto_lat(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

class Init_RoadFacilityProto_type
{
public:
  Init_RoadFacilityProto_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RoadFacilityProto_lon type(::deva_navi_msgs::msg::RoadFacilityProto::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RoadFacilityProto_lon(msg_);
  }

private:
  ::deva_navi_msgs::msg::RoadFacilityProto msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::deva_navi_msgs::msg::RoadFacilityProto>()
{
  return deva_navi_msgs::msg::builder::Init_RoadFacilityProto_type();
}

}  // namespace deva_navi_msgs

#endif  // DEVA_NAVI_MSGS__MSG__DETAIL__ROAD_FACILITY_PROTO__BUILDER_HPP_
