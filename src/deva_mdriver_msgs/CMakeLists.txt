cmake_minimum_required(VERSION 3.8)
project(deva_mdriver_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(deva_common_msgs REQUIRED)
find_package(deva_perception_msgs REQUIRED)
find_package(deva_planning_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/AccHeadingSteeringStats.msg"
    "msg/CenterLine.msg"
    "msg/CenterLinePoint.msg"
    "msg/CenterLines.msg"
    "msg/DebugInfo.msg"
    "msg/MPredictionObstacle.msg"
    "msg/MWorld.msg"
    "msg/MdriverMetaAction.msg"
    "msg/MdriverRefLine.msg"
    "msg/MdriverRefLines.msg"
    "msg/MdriverResult.msg"
    "msg/MeanVariance.msg"
    "msg/NudgeBuffer.msg"
    "msg/ObstacleNudgeBuffer.msg"


  DEPENDENCIES deva_common_msgs deva_perception_msgs deva_planning_msgs geometry_msgs
)

ament_package()
