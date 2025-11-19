cmake_minimum_required(VERSION 3.8)
project(deva_navi_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/AdasV2Proto.msg"
    "msg/AmapNavingPathInfoProto.msg"
    "msg/AmapPathInfoProto.msg"
    "msg/ChargeStationInfoProto.msg"
    "msg/ChargingArgumentsInfoProto.msg"
    "msg/Coord3DDoubleProto.msg"
    "msg/ElecPathInfoProto.msg"
    "msg/EnergyConsumeProto.msg"
    "msg/EnergyEndPointProto.msg"
    "msg/GantryInfoProto.msg"
    "msg/GroupSegmentProto.msg"
    "msg/GroupTimeRangeProto.msg"
    "msg/HeaderProto.msg"
    "msg/IconRoadProto.msg"
    "msg/LineIconPointProto.msg"
    "msg/LinkInfoProto.msg"
    "msg/NaviCameraProto.msg"
    "msg/NaviSocketStream.msg"
    "msg/NaviStatusProto.msg"
    "msg/NaviSubCameraProto.msg"
    "msg/OddSegInfoProto.msg"
    "msg/POIInfoProto.msg"
    "msg/PathDescriptionInfoProto.msg"
    "msg/ResponseProto.msg"
    "msg/RestrictionInfoProto.msg"
    "msg/RoadFacilityProto.msg"
    "msg/RouteTypeProto.msg"
    "msg/SegmentInfoProto.msg"
    "msg/TipInfoProto.msg"
    "msg/TurnInfoProto.msg"
    "msg/ViaPointInfoProto.msg"


  DEPENDENCIES rosidl_default_generators
)

ament_package()
