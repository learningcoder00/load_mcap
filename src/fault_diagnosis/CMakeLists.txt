cmake_minimum_required(VERSION 3.8)
project(fault_diagnosis)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(deva_common_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/DiagState.msg"
    "msg/ODDStatusArray.msg"
    "msg/OddStatus.msg"


  DEPENDENCIES deva_common_msgs rosidl_default_generators
)

ament_package()
