cmake_minimum_required(VERSION 3.8)
project(deva_aeb_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(deva_common_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/FusionInfoForAEB.msg"
    "msg/FusionInfoForAEBLaneAndEdge.msg"
    "msg/FusionInfoForAEBObj8.msg"
    "msg/FusionInfoForAEBObjList.msg"
    "msg/FusionInfoForAEBObstracleList.msg"
    "msg/FusionInfoForAEBOther.msg"
    "msg/LaneFstInfo.msg"
    "msg/LaneSecInfo.msg"
    "msg/MachFusionFrame.msg"
    "msg/RearLaneInfo.msg"
    "msg/RoadInfo.msg"
    "msg/SFCrosswalk.msg"
    "msg/SFCurveFunctionExtra.msg"
    "msg/SFDiagInfo.msg"
    "msg/SFDiagList.msg"
    "msg/SFFrontLinePpty.msg"
    "msg/SFFusionLaneMkrList.msg"
    "msg/SFFusionObj.msg"
    "msg/SFFusionObjList.msg"
    "msg/SFFusionObjNOA.msg"
    "msg/SFFusionObstacle.msg"
    "msg/SFFusionObstacleList.msg"
    "msg/SFFusionRoadEdge.msg"
    "msg/SFFusionRoadSignList.msg"
    "msg/SFFusionTFL.msg"
    "msg/SFFusionTFLList.msg"
    "msg/SFFusionTS.msg"
    "msg/SFFusionTSList.msg"
    "msg/SFLaneEstimn.msg"
    "msg/SFLaneInfo.msg"
    "msg/SFLaneMkrInfo.msg"
    "msg/SFLaneTwoSegEstimn.msg"
    "msg/SFObjEstimn.msg"
    "msg/SFObjEstimnNOA.msg"
    "msg/SFObjInfo.msg"
    "msg/SFObjInfoNOA.msg"
    "msg/SFObjPpty.msg"
    "msg/SFRearLinePpty.msg"
    "msg/SFRoadArrow.msg"
    "msg/SFRoadEdgeEstimn.msg"
    "msg/SFRoadEdgeInfo.msg"
    "msg/SFRoadPpty.msg"
    "msg/SFSecLaneEstimn.msg"
    "msg/SFSecLaneNearRampPoint.msg"
    "msg/SFStopline.msg"
    "msg/SFVehSelf.msg"
    "msg/SFVisionInfo.msg"


  DEPENDENCIES deva_common_msgs rosidl_default_generators
)

ament_package()
