# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:serialize_msgs__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:serialize_msgs__rosidl_typesupport_fastrtps_c;__rosidl_typesupport_introspection_c:serialize_msgs__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:serialize_msgs__rosidl_typesupport_c;__rosidl_generator_cpp:serialize_msgs__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:serialize_msgs__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_cpp:serialize_msgs__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:serialize_msgs__rosidl_typesupport_cpp;__rosidl_generator_py:serialize_msgs__rosidl_generator_py")

# populate serialize_msgs_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "serialize_msgs::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'serialize_msgs' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND serialize_msgs_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
