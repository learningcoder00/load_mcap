#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "fault_diagnosis::fault_diagnosis__rosidl_generator_py" for configuration ""
set_property(TARGET fault_diagnosis::fault_diagnosis__rosidl_generator_py APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(fault_diagnosis::fault_diagnosis__rosidl_generator_py PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libfault_diagnosis__rosidl_generator_py.so"
  IMPORTED_SONAME_NOCONFIG "libfault_diagnosis__rosidl_generator_py.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS fault_diagnosis::fault_diagnosis__rosidl_generator_py )
list(APPEND _IMPORT_CHECK_FILES_FOR_fault_diagnosis::fault_diagnosis__rosidl_generator_py "${_IMPORT_PREFIX}/lib/libfault_diagnosis__rosidl_generator_py.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
