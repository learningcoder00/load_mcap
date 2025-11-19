// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_aeb_msgs:msg/FusionInfoForAEB.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb__struct.h"
#include "deva_aeb_msgs/msg/detail/fusion_info_for_aeb__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_fusion_obj_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_fusion_obj_list__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_fusion_lane_mkr_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_fusion_lane_mkr_list__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_fusion_road_edge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_fusion_road_edge__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_road_ppty__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_road_ppty__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_veh_self__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_veh_self__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_fusion_ts_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_fusion_ts_list__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_fusion_tfl_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_fusion_tfl_list__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_fusion_obstacle_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_fusion_obstacle_list__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_fusion_road_sign_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_fusion_road_sign_list__convert_to_py(void * raw_ros_message);
bool deva_aeb_msgs__msg__sf_diag_list__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_aeb_msgs__msg__sf_diag_list__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_aeb_msgs__msg__fusion_info_for_aeb__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[56];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("deva_aeb_msgs.msg._fusion_info_for_aeb.FusionInfoForAEB", full_classname_dest, 55) == 0);
  }
  deva_aeb_msgs__msg__FusionInfoForAEB * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusionobjlist
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusionobjlist");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_fusion_obj_list__convert_from_py(field, &ros_message->fusionobjlist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusionlanemkrlist
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusionlanemkrlist");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_fusion_lane_mkr_list__convert_from_py(field, &ros_message->fusionlanemkrlist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusionroadedge
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusionroadedge");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_fusion_road_edge__convert_from_py(field, &ros_message->fusionroadedge)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // roadppty
    PyObject * field = PyObject_GetAttrString(_pymsg, "roadppty");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_road_ppty__convert_from_py(field, &ros_message->roadppty)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // vehself
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehself");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_veh_self__convert_from_py(field, &ros_message->vehself)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusiontslist
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusiontslist");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_fusion_ts_list__convert_from_py(field, &ros_message->fusiontslist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusiontfllist
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusiontfllist");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_fusion_tfl_list__convert_from_py(field, &ros_message->fusiontfllist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusionobstraclelist
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusionobstraclelist");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_fusion_obstacle_list__convert_from_py(field, &ros_message->fusionobstraclelist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusionroadsignlist
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusionroadsignlist");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_fusion_road_sign_list__convert_from_py(field, &ros_message->fusionroadsignlist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // fusiondiaglist
    PyObject * field = PyObject_GetAttrString(_pymsg, "fusiondiaglist");
    if (!field) {
      return false;
    }
    if (!deva_aeb_msgs__msg__sf_diag_list__convert_from_py(field, &ros_message->fusiondiaglist)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_aeb_msgs__msg__fusion_info_for_aeb__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of FusionInfoForAEB */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_aeb_msgs.msg._fusion_info_for_aeb");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "FusionInfoForAEB");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_aeb_msgs__msg__FusionInfoForAEB * ros_message = (deva_aeb_msgs__msg__FusionInfoForAEB *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = deva_common_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusionobjlist
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_fusion_obj_list__convert_to_py(&ros_message->fusionobjlist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusionobjlist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusionlanemkrlist
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_fusion_lane_mkr_list__convert_to_py(&ros_message->fusionlanemkrlist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusionlanemkrlist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusionroadedge
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_fusion_road_edge__convert_to_py(&ros_message->fusionroadedge);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusionroadedge", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roadppty
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_road_ppty__convert_to_py(&ros_message->roadppty);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "roadppty", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehself
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_veh_self__convert_to_py(&ros_message->vehself);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehself", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusiontslist
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_fusion_ts_list__convert_to_py(&ros_message->fusiontslist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusiontslist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusiontfllist
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_fusion_tfl_list__convert_to_py(&ros_message->fusiontfllist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusiontfllist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusionobstraclelist
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_fusion_obstacle_list__convert_to_py(&ros_message->fusionobstraclelist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusionobstraclelist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusionroadsignlist
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_fusion_road_sign_list__convert_to_py(&ros_message->fusionroadsignlist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusionroadsignlist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // fusiondiaglist
    PyObject * field = NULL;
    field = deva_aeb_msgs__msg__sf_diag_list__convert_to_py(&ros_message->fusiondiaglist);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "fusiondiaglist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
