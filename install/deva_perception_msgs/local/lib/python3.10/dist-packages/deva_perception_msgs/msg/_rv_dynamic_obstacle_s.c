// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RVDynamicObstacle.idl
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
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__struct.h"
#include "deva_perception_msgs/msg/detail/rv_dynamic_obstacle__functions.h"

bool deva_perception_msgs__msg__dynamic_obst_world_space_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_perception_msgs__msg__dynamic_obst_world_space_info__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box2d__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__rv_dynamic_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("deva_perception_msgs.msg._rv_dynamic_obstacle.RVDynamicObstacle", full_classname_dest, 63) == 0);
  }
  deva_perception_msgs__msg__RVDynamicObstacle * ros_message = _ros_message;
  {  // life_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "life_time");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->life_time = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // time_stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "time_stamp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->time_stamp = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // conf
    PyObject * field = PyObject_GetAttrString(_pymsg, "conf");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->conf = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // age
    PyObject * field = PyObject_GetAttrString(_pymsg, "age");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->age = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // select_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "select_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->select_level = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mapped_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "mapped_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mapped_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // world_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_info");
    if (!field) {
      return false;
    }
    if (!deva_perception_msgs__msg__dynamic_obst_world_space_info__convert_from_py(field, &ros_message->world_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // full_bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_bbox");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box2d__convert_from_py(field, &ros_message->full_bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // tail_bbox
    PyObject * field = PyObject_GetAttrString(_pymsg, "tail_bbox");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box2d__convert_from_py(field, &ros_message->tail_bbox)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // full_occ_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_occ_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->full_occ_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // full_trunc_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "full_trunc_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->full_trunc_score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // obj_source
    PyObject * field = PyObject_GetAttrString(_pymsg, "obj_source");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->obj_source = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__rv_dynamic_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RVDynamicObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._rv_dynamic_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RVDynamicObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RVDynamicObstacle * ros_message = (deva_perception_msgs__msg__RVDynamicObstacle *)raw_ros_message;
  {  // life_time
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->life_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "life_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // time_stamp
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->time_stamp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "time_stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // conf
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->conf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "conf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // age
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->age);
    {
      int rc = PyObject_SetAttrString(_pymessage, "age", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // select_level
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->select_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "select_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mapped_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mapped_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mapped_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // world_info
    PyObject * field = NULL;
    field = deva_perception_msgs__msg__dynamic_obst_world_space_info__convert_to_py(&ros_message->world_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_bbox
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box2d__convert_to_py(&ros_message->full_bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tail_bbox
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box2d__convert_to_py(&ros_message->tail_bbox);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "tail_bbox", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_occ_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->full_occ_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_occ_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // full_trunc_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->full_trunc_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "full_trunc_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // obj_source
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->obj_source);
    {
      int rc = PyObject_SetAttrString(_pymessage, "obj_source", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
