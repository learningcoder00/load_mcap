cmake_minimum_required(VERSION 3.8)
project(rviz_plug_msg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/BywireDiag.msg"
    "msg/BywireMsgType.msg"
    "msg/ErrorEnum.msg"
    "msg/ExceptionMonitor.msg"
    "msg/Freq.msg"
    "msg/FreqMonitor.msg"
    "msg/InfoEnum.msg"
    "msg/StatusEnum.msg"


  DEPENDENCIES std_msgs
)

ament_package()
