cmake_minimum_required(VERSION 3.8)
project(environment_model_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(deva_common_msgs REQUIRED)
find_package(deva_gaode_routing_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/BoundPoint.msg"
    "msg/BoundaryPoint.msg"
    "msg/EnvInfo.msg"
    "msg/EnvLane.msg"
    "msg/EnvLaneArray.msg"
    "msg/EnvLine.msg"
    "msg/EnvLink.msg"
    "msg/EnvObject.msg"
    "msg/EnvPoint.msg"
    "msg/EnvSignal.msg"
    "msg/EnvState.msg"
    "msg/EnvStates.msg"
    "msg/MapIds.msg"
    "msg/NaviScore.msg"
    "msg/PairDouble.msg"
    "msg/PairDoubleInt.msg"
    "msg/PairInt.msg"
    "msg/PairString.msg"
    "msg/PairStringDouble.msg"
    "msg/RoadBoundary.msg"
    "msg/RoadStructType.msg"
    "msg/ScenarioInfo.msg"
    "msg/StructuredFeaturePoint.msg"
    "msg/StructuredHdair.msg"
    "msg/StructuredLink.msg"
    "msg/Vec2d.msg"
    "msg/Vec2dArray.msg"
    "msg/Vec3d.msg"
    "msg/VirtualLineInfo.msg"


  DEPENDENCIES deva_common_msgs deva_gaode_routing_msgs
)

ament_package()
