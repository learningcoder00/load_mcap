cmake_minimum_required(VERSION 3.8)
project(deva_planning_msgs2)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(deva_common_msgs REQUIRED)
find_package(deva_map_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/AvpDebugInfo.msg"
    "msg/AvpNavigationPlanningDebugInfo.msg"
    "msg/AvpRefLine.msg"
    "msg/AvpRefLineTreePoint.msg"
    "msg/AvpRefLineTreePointVec.msg"
    "msg/DrivingMode.msg"
    "msg/LaneBindInfo.msg"
    "msg/MpcPathData.msg"
    "msg/NavOpenspaceDebugInfo.msg"
    "msg/NavOpenspaceObstacle.msg"
    "msg/NavOpenspaceParkingSlot.msg"
    "msg/NaviAction.msg"
    "msg/ParkableID.msg"
    "msg/PathData.msg"
    "msg/PathPoint.msg"
    "msg/PlanningCommand.msg"
    "msg/PlanningFail.msg"
    "msg/PlanningLog.msg"
    "msg/PlanningObstacle.msg"
    "msg/PlanningResult.msg"
    "msg/PlanningTrajectory.msg"
    "msg/PolicyScenario.msg"
    "msg/Ref2SLBoundary.msg"
    "msg/ReferenceLine.msg"
    "msg/ReferenceLines.msg"
    "msg/ReroutingInfo.msg"
    "msg/SLBoundary.msg"
    "msg/SemanticTreeNode.msg"
    "msg/SensorTime.msg"
    "msg/StateContext.msg"
    "msg/StitchData.msg"
    "msg/String2Bool.msg"
    "msg/String2Double.msg"
    "msg/String2Int.msg"
    "msg/String2SLBoundary.msg"
    "msg/String2String.msg"
    "msg/String2UInt.msg"
    "msg/TargetTrajectory.msg"
    "msg/TrajectoryPoint.msg"
    "msg/TreeTrajectory.msg"
    "msg/UInt2String.msg"
    "msg/VehicleStatus.msg"
    "msg/VirtualWall.msg"
    "msg/VirtualWallArray.msg"


  DEPENDENCIES deva_common_msgs deva_map_msgs geometry_msgs nav_msgs std_msgs
)

ament_package()
