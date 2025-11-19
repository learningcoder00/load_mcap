cmake_minimum_required(VERSION 3.8)
project(deva_localization_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(deva_common_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/CorrectedImu.msg"
    "msg/GnssBestPose.msg"
    "msg/Ins.msg"
    "msg/LocalizationEstimate.msg"
    "msg/LocalizationRevise.msg"
    "msg/Pose.msg"
    "msg/RawImu.msg"


  DEPENDENCIES deva_common_msgs rosidl_default_generators geometry_msgs std_msgs
)

ament_package()
