cmake_minimum_required(VERSION 3.8)
project(deva_common_msgs)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    "msg/BoundingBox.msg"
    "msg/BoundingBox2d.msg"
    "msg/Dimension.msg"
    "msg/DisperseCurve.msg"
    "msg/EquationCurve.msg"
    "msg/GroundPoint.msg"
    "msg/Header.msg"
    "msg/KV.msg"
    "msg/Line2d.msg"
    "msg/LineSegment.msg"
    "msg/Point2d.msg"
    "msg/Serialize.msg"
    "msg/String.msg"


  DEPENDENCIES geometry_msgs std_msgs builtin_interfaces
)

ament_package()
