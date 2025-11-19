cmake_minimum_required(VERSION 3.8)
project(deva_function_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(deva_common_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/ADASFunctionCmd.msg"
    "msg/ADASFunctionState.msg"
    "msg/ADASFunctionStatusIntra.msg"
    "msg/APPToStmDataStruct.msg"
    "msg/AebReportMsg.msg"
    "msg/AppMapInfoToStmStruct.msg"
    "msg/BusToSmData.msg"
    "msg/CalibrationCtrl.msg"
    "msg/DbaStateMsg.msg"
    "msg/E2eFailsafe.msg"
    "msg/E2eFailsafeArray.msg"
    "msg/FMToDrivingCmd.msg"
    "msg/FaultRequest.msg"
    "msg/FaultStatus.msg"
    "msg/FsmHnopMsg.msg"
    "msg/FsmInnerCommomMsg.msg"
    "msg/FsmModuleRunningStateMsg.msg"
    "msg/FsmParkingState.msg"
    "msg/FsmStateMsg.msg"
    "msg/FsmTestToolDataMsg.msg"
    "msg/FuncMainSM.msg"
    "msg/MachButtonControl.msg"
    "msg/MachCalibrationResponse.msg"
    "msg/MachCalibrationResult.msg"
    "msg/MachCamSts.msg"
    "msg/MachFsmState.msg"
    "msg/MachFunctionControl.msg"
    "msg/MachRemind.msg"
    "msg/OddParkingVehicleState.msg"
    "msg/ParaSerApaMsg.msg"
    "msg/StateMachineData.msg"
    "msg/UIToSTMData.msg"
    "msg/VehicleReportData.msg"
    "msg/WheelInfo.msg"
    "msg/WheelSpeed.msg"


  DEPENDENCIES deva_common_msgs rosidl_default_generators std_msgs
)

ament_package()
