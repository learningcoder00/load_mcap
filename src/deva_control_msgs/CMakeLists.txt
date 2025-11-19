cmake_minimum_required(VERSION 3.8)
project(deva_control_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(deva_common_msgs REQUIRED)
find_package(deva_planning_msgs2 REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/ControlDebugSignal.msg"
    "msg/ControlMonitorMsg.msg"
    "msg/ControlResult.msg"
    "msg/ControlStatus.msg"
    "msg/ControlValidLimit.msg"
    "msg/ParkingStatus.msg"
    "msg/VehicleControlCommand.msg"
    "msg/VehicleEnableCommand.msg"
    "msg/VehicleLimitValue.msg"
    "msg/VehicleReportBelt.msg"
    "msg/VehicleReportCommon.msg"
    "msg/VehicleReportPedal.msg"
    "msg/VehicleStatusCommand.msg"
    "msg/WheelSpeed.msg"


  DEPENDENCIES deva_common_msgs deva_planning_msgs2 std_msgs
)

ament_package()
