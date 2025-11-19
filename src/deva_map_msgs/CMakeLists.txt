cmake_minimum_required(VERSION 3.8)
project(deva_map_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(deva_common_msgs REQUIRED)
find_package(deva_perception_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/AvpBoundary.msg"
    "msg/AvpLocalMap.msg"
    "msg/AvpSubLane.msg"
    "msg/AvpSubMap.msg"
    "msg/Channel.msg"
    "msg/ChannelLaneInfo.msg"
    "msg/ChannelLaneLine.msg"
    "msg/ChannelLaneMarking.msg"
    "msg/ChannelLaneSpeedLimitation.msg"
    "msg/ChannelLaneType.msg"
    "msg/ChannelMarkingType.msg"
    "msg/ChannelObjectInfo.msg"
    "msg/ChannelSignalInfo.msg"
    "msg/ChannelTurnType.msg"
    "msg/EgoTrajectory.msg"
    "msg/EgoTrajectoryPoint.msg"
    "msg/LaneWaypoint.msg"
    "msg/LocalMap.msg"
    "msg/LocalMapHeader.msg"
    "msg/ObstacleEdge.msg"
    "msg/PathPoint.msg"
    "msg/ReferenceChannal.msg"
    "msg/STLocalMap.msg"
    "msg/TrafficLight.msg"


  DEPENDENCIES deva_common_msgs deva_perception_msgs rosidl_default_generators geometry_msgs
)

ament_package()
