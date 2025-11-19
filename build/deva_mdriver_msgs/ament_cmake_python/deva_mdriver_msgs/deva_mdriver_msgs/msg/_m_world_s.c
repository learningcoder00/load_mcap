// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_mdriver_msgs:msg/MWorld.idl
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
#include "deva_mdriver_msgs/msg/detail/m_world__struct.h"
#include "deva_mdriver_msgs/msg/detail/m_world__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_mdriver_msgs/msg/detail/m_prediction_obstacle__functions.h"
#include "deva_mdriver_msgs/msg/detail/mdriver_meta_action__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
// end nested array functions include
bool deva_mdriver_msgs__msg__m_prediction_obstacle__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_mdriver_msgs__msg__m_prediction_obstacle__convert_to_py(void * raw_ros_message);
bool deva_mdriver_msgs__msg__nudge_buffer__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_mdriver_msgs__msg__nudge_buffer__convert_to_py(void * raw_ros_message);
bool deva_mdriver_msgs__msg__mdriver_meta_action__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_mdriver_msgs__msg__mdriver_meta_action__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool geometry_msgs__msg__point__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * geometry_msgs__msg__point__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_mdriver_msgs__msg__m_world__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[38];
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
    assert(strncmp("deva_mdriver_msgs.msg._m_world.MWorld", full_classname_dest, 37) == 0);
  }
  deva_mdriver_msgs__msg__MWorld * ros_message = _ros_message;
  {  // world_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "world_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->world_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // meta_action
    PyObject * field = PyObject_GetAttrString(_pymsg, "meta_action");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->meta_action = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // all_obstacles
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_obstacles");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'all_obstacles'");
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
    if (!deva_mdriver_msgs__msg__MPredictionObstacle__Sequence__init(&(ros_message->all_obstacles), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_mdriver_msgs__msg__MPredictionObstacle__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_mdriver_msgs__msg__MPredictionObstacle * dest = ros_message->all_obstacles.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_mdriver_msgs__msg__m_prediction_obstacle__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // nudge_buffer
    PyObject * field = PyObject_GetAttrString(_pymsg, "nudge_buffer");
    if (!field) {
      return false;
    }
    if (!deva_mdriver_msgs__msg__nudge_buffer__convert_from_py(field, &ros_message->nudge_buffer)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ego_ref_v
    PyObject * field = PyObject_GetAttrString(_pymsg, "ego_ref_v");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(double);
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->ego_ref_v), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->ego_ref_v.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ego_ref_v'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->ego_ref_v), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->ego_ref_v.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        double tmp = PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(double));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // mdriver_meta_actions
    PyObject * field = PyObject_GetAttrString(_pymsg, "mdriver_meta_actions");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'mdriver_meta_actions'");
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
    if (!deva_mdriver_msgs__msg__MdriverMetaAction__Sequence__init(&(ros_message->mdriver_meta_actions), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_mdriver_msgs__msg__MdriverMetaAction__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_mdriver_msgs__msg__MdriverMetaAction * dest = ros_message->mdriver_meta_actions.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_mdriver_msgs__msg__mdriver_meta_action__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // score
    PyObject * field = PyObject_GetAttrString(_pymsg, "score");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->score = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // refline_points
    PyObject * field = PyObject_GetAttrString(_pymsg, "refline_points");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'refline_points'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 17;
    geometry_msgs__msg__Point * dest = ros_message->refline_points;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!geometry_msgs__msg__point__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_mdriver_msgs__msg__m_world__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of MWorld */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_mdriver_msgs.msg._m_world");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "MWorld");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_mdriver_msgs__msg__MWorld * ros_message = (deva_mdriver_msgs__msg__MWorld *)raw_ros_message;
  {  // world_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->world_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "world_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // meta_action
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->meta_action);
    {
      int rc = PyObject_SetAttrString(_pymessage, "meta_action", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // all_obstacles
    PyObject * field = NULL;
    size_t size = ros_message->all_obstacles.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_mdriver_msgs__msg__MPredictionObstacle * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->all_obstacles.data[i]);
      PyObject * pyitem = deva_mdriver_msgs__msg__m_prediction_obstacle__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_obstacles", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // nudge_buffer
    PyObject * field = NULL;
    field = deva_mdriver_msgs__msg__nudge_buffer__convert_to_py(&ros_message->nudge_buffer);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "nudge_buffer", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ego_ref_v
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "ego_ref_v");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(double)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->ego_ref_v.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->ego_ref_v.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->ego_ref_v.size * sizeof(double));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // mdriver_meta_actions
    PyObject * field = NULL;
    size_t size = ros_message->mdriver_meta_actions.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_mdriver_msgs__msg__MdriverMetaAction * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->mdriver_meta_actions.data[i]);
      PyObject * pyitem = deva_mdriver_msgs__msg__mdriver_meta_action__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "mdriver_meta_actions", field);
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
  {  // refline_points
    PyObject * field = NULL;
    size_t size = 17;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    geometry_msgs__msg__Point * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->refline_points[i]);
      PyObject * pyitem = geometry_msgs__msg__point__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "refline_points", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
