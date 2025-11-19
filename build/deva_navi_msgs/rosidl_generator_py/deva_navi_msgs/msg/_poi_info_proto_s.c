// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_navi_msgs:msg/POIInfoProto.idl
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
#include "deva_navi_msgs/msg/detail/poi_info_proto__struct.h"
#include "deva_navi_msgs/msg/detail/poi_info_proto__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(void * raw_ros_message);
bool deva_navi_msgs__msg__charging_arguments_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_navi_msgs__msg__charging_arguments_info_proto__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_navi_msgs__msg__poi_info_proto__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("deva_navi_msgs.msg._poi_info_proto.POIInfoProto", full_classname_dest, 47) == 0);
  }
  deva_navi_msgs__msg__POIInfoProto * ros_message = _ros_message;
  {  // real_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "real_pos");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(field, &ros_message->real_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // navi_pos
    PyObject * field = PyObject_GetAttrString(_pymsg, "navi_pos");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__coord3_d_double_proto__convert_from_py(field, &ros_message->navi_pos)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // sigshelter
    PyObject * field = PyObject_GetAttrString(_pymsg, "sigshelter");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sigshelter = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // type
    PyObject * field = PyObject_GetAttrString(_pymsg, "type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->type = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // road_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->road_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // poi_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "poi_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->poi_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // name
    PyObject * field = PyObject_GetAttrString(_pymsg, "name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // floor_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "floor_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->floor_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // parent_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->parent_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // parent_simple_name
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_simple_name");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->parent_simple_name, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // angel
    PyObject * field = PyObject_GetAttrString(_pymsg, "angel");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->angel, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // points
    PyObject * field = PyObject_GetAttrString(_pymsg, "points");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->points), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->points.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'points'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->points), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->points.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // parent_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->parent_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // parent_rel
    PyObject * field = PyObject_GetAttrString(_pymsg, "parent_rel");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->parent_rel, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // type_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "type_code");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->type_code, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // from_jump
    PyObject * field = PyObject_GetAttrString(_pymsg, "from_jump");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->from_jump = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // overhead
    PyObject * field = PyObject_GetAttrString(_pymsg, "overhead");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->overhead = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // point_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "point_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->point_cnt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // check_point_link_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "check_point_link_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->check_point_link_id = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // overhead_back_alt_diff
    PyObject * field = PyObject_GetAttrString(_pymsg, "overhead_back_alt_diff");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->overhead_back_alt_diff = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // floor
    PyObject * field = PyObject_GetAttrString(_pymsg, "floor");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->floor = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // extend_info_flag
    PyObject * field = PyObject_GetAttrString(_pymsg, "extend_info_flag");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->extend_info_flag, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // src_app
    PyObject * field = PyObject_GetAttrString(_pymsg, "src_app");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->src_app, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // charge_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "charge_info");
    if (!field) {
      return false;
    }
    if (!deva_navi_msgs__msg__charging_arguments_info_proto__convert_from_py(field, &ros_message->charge_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_navi_msgs__msg__poi_info_proto__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of POIInfoProto */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_navi_msgs.msg._poi_info_proto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "POIInfoProto");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_navi_msgs__msg__POIInfoProto * ros_message = (deva_navi_msgs__msg__POIInfoProto *)raw_ros_message;
  {  // real_pos
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(&ros_message->real_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "real_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // navi_pos
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__coord3_d_double_proto__convert_to_py(&ros_message->navi_pos);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "navi_pos", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sigshelter
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sigshelter);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sigshelter", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->road_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // poi_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->poi_id.data,
      strlen(ros_message->poi_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "poi_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->name.data,
      strlen(ros_message->name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // floor_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->floor_name.data,
      strlen(ros_message->floor_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "floor_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parent_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->parent_name.data,
      strlen(ros_message->parent_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parent_simple_name
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->parent_simple_name.data,
      strlen(ros_message->parent_simple_name.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_simple_name", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angel
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->angel.data,
      strlen(ros_message->angel.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "angel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // points
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "points");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->points.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->points.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->points.size * sizeof(int32_t));
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
  {  // parent_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->parent_id.data,
      strlen(ros_message->parent_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parent_rel
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->parent_rel.data,
      strlen(ros_message->parent_rel.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parent_rel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // type_code
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->type_code.data,
      strlen(ros_message->type_code.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "type_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // from_jump
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->from_jump);
    {
      int rc = PyObject_SetAttrString(_pymessage, "from_jump", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overhead
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->overhead);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overhead", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // point_cnt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->point_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "point_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // check_point_link_id
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->check_point_link_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "check_point_link_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // overhead_back_alt_diff
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->overhead_back_alt_diff);
    {
      int rc = PyObject_SetAttrString(_pymessage, "overhead_back_alt_diff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // floor
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->floor);
    {
      int rc = PyObject_SetAttrString(_pymessage, "floor", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extend_info_flag
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->extend_info_flag.data,
      strlen(ros_message->extend_info_flag.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "extend_info_flag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // src_app
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->src_app.data,
      strlen(ros_message->src_app.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "src_app", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // charge_info
    PyObject * field = NULL;
    field = deva_navi_msgs__msg__charging_arguments_info_proto__convert_to_py(&ros_message->charge_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "charge_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
