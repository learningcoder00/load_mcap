// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_planning_msgs:msg/ReferenceLine.idl
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
#include "deva_planning_msgs/msg/detail/reference_line__struct.h"
#include "deva_planning_msgs/msg/detail/reference_line__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__path__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__path__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool nav_msgs__msg__path__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * nav_msgs__msg__path__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_planning_msgs__msg__reference_line__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[53];
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
    assert(strncmp("deva_planning_msgs.msg._reference_line.ReferenceLine", full_classname_dest, 52) == 0);
  }
  deva_planning_msgs__msg__ReferenceLine * ros_message = _ros_message;
  {  // reference_line
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_line");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__path__convert_from_py(field, &ros_message->reference_line)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // line_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "line_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->line_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // original_merge_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "original_merge_point");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__path__convert_from_py(field, &ros_message->original_merge_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // merge_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "merge_point");
    if (!field) {
      return false;
    }
    if (!nav_msgs__msg__path__convert_from_py(field, &ros_message->merge_point)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // reference_line_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "reference_line_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reference_line_type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // line_is_virtual
    PyObject * field = PyObject_GetAttrString(_pymsg, "line_is_virtual");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->line_is_virtual = (Py_True == field);
    Py_DECREF(field);
  }
  {  // left_line_nums
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_line_nums");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->left_line_nums = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // right_line_nums
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_line_nums");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->right_line_nums = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cipv_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "cipv_ids");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cipv_ids'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->cipv_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->cipv_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // cutin_cipv_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "cutin_cipv_ids");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cutin_cipv_ids'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->cutin_cipv_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->cutin_cipv_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // nearest_cipv_ids
    PyObject * field = PyObject_GetAttrString(_pymsg, "nearest_cipv_ids");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'nearest_cipv_ids'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->nearest_cipv_ids), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->nearest_cipv_ids.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // navi_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "navi_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->navi_score = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // effic_score
    PyObject * field = PyObject_GetAttrString(_pymsg, "effic_score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->effic_score = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // turn_scenario
    PyObject * field = PyObject_GetAttrString(_pymsg, "turn_scenario");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->turn_scenario = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_planning_msgs__msg__reference_line__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ReferenceLine */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_planning_msgs.msg._reference_line");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ReferenceLine");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_planning_msgs__msg__ReferenceLine * ros_message = (deva_planning_msgs__msg__ReferenceLine *)raw_ros_message;
  {  // reference_line
    PyObject * field = NULL;
    field = nav_msgs__msg__path__convert_to_py(&ros_message->reference_line);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_line", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // line_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->line_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "line_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // original_merge_point
    PyObject * field = NULL;
    field = nav_msgs__msg__path__convert_to_py(&ros_message->original_merge_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "original_merge_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // merge_point
    PyObject * field = NULL;
    field = nav_msgs__msg__path__convert_to_py(&ros_message->merge_point);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "merge_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // reference_line_type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->reference_line_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reference_line_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // line_is_virtual
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->line_is_virtual ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "line_is_virtual", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // left_line_nums
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->left_line_nums);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_line_nums", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_line_nums
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->right_line_nums);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_line_nums", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cipv_ids
    PyObject * field = NULL;
    size_t size = ros_message->cipv_ids.size;
    rosidl_runtime_c__String * src = ros_message->cipv_ids.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cipv_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cutin_cipv_ids
    PyObject * field = NULL;
    size_t size = ros_message->cutin_cipv_ids.size;
    rosidl_runtime_c__String * src = ros_message->cutin_cipv_ids.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cutin_cipv_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nearest_cipv_ids
    PyObject * field = NULL;
    size_t size = ros_message->nearest_cipv_ids.size;
    rosidl_runtime_c__String * src = ros_message->nearest_cipv_ids.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "nearest_cipv_ids", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navi_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->navi_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "navi_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // effic_score
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->effic_score);
    {
      int rc = PyObject_SetAttrString(_pymessage, "effic_score", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // turn_scenario
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->turn_scenario);
    {
      int rc = PyObject_SetAttrString(_pymessage, "turn_scenario", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
