// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_perception_msgs:msg/RvStaticObstacle.idl
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
#include "deva_perception_msgs/msg/detail/rv_static_obstacle__struct.h"
#include "deva_perception_msgs/msg/detail/rv_static_obstacle__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__bounding_box2d__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__bounding_box2d__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__pose__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__pose__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__vector3__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__vector3__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_perception_msgs__msg__rv_static_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("deva_perception_msgs.msg._rv_static_obstacle.RvStaticObstacle", full_classname_dest, 61) == 0);
  }
  deva_perception_msgs__msg__RvStaticObstacle * ros_message = _ros_message;
  {  // id
    PyObject * field = PyObject_GetAttrString(_pymsg, "id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bbox2d
    PyObject * field = PyObject_GetAttrString(_pymsg, "bbox2d");
    if (!field) {
      return false;
    }
    if (!deva_common_msgs__msg__bounding_box2d__convert_from_py(field, &ros_message->bbox2d)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // with_bev_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "with_bev_info");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->with_bev_info = (Py_True == field);
    Py_DECREF(field);
  }
  {  // pose
    PyObject * field = PyObject_GetAttrString(_pymsg, "pose");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__pose__convert_from_py(field, &ros_message->pose)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // dimensions
    PyObject * field = PyObject_GetAttrString(_pymsg, "dimensions");
    if (!field) {
      return false;
    }
    if (!geometry_msgs__msg__vector3__convert_from_py(field, &ros_message->dimensions)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // bind_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "bind_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bind_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->score = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vertical_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "vertical_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vertical_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // horizontal_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "horizontal_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->horizontal_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // left_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // right_lane_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_lane_id = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // left_lane_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_lane_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_lane_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_lane_distance
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_lane_distance");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_lane_distance = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_perception_msgs__msg__rv_static_obstacle__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RvStaticObstacle */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_perception_msgs.msg._rv_static_obstacle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RvStaticObstacle");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_perception_msgs__msg__RvStaticObstacle * ros_message = (deva_perception_msgs__msg__RvStaticObstacle *)raw_ros_message;
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
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bbox2d
    PyObject * field = NULL;
    field = deva_common_msgs__msg__bounding_box2d__convert_to_py(&ros_message->bbox2d);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "bbox2d", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // with_bev_info
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->with_bev_info ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "with_bev_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pose
    PyObject * field = NULL;
    field = geometry_msgs__msg__pose__convert_to_py(&ros_message->pose);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "pose", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // dimensions
    PyObject * field = NULL;
    field = geometry_msgs__msg__vector3__convert_to_py(&ros_message->dimensions);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "dimensions", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bind_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bind_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bind_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vertical_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vertical_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vertical_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // horizontal_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->horizontal_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "horizontal_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->left_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_id
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->right_lane_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_lane_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_lane_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_lane_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_lane_distance
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_lane_distance);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_lane_distance", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
