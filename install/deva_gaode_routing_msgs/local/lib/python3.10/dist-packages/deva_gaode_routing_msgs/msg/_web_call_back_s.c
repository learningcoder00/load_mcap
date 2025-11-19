// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_gaode_routing_msgs:msg/WebCallBack.idl
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
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__struct.h"
#include "deva_gaode_routing_msgs/msg/detail/web_call_back__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "deva_gaode_routing_msgs/msg/detail/web_cross_navi_info__functions.h"
// end nested array functions include
bool deva_gaode_routing_msgs__msg__web_lane__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_lane__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__camera_callback_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__camera_callback_info__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_not_avoid_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_not_avoid_info__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_cross_navi_info__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_cross_navi_info__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_traffic_light__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_traffic_light__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_parallel_road__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_parallel_road__convert_to_py(void * raw_ros_message);
bool deva_gaode_routing_msgs__msg__web_cross_image__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_gaode_routing_msgs__msg__web_cross_image__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_gaode_routing_msgs__msg__web_call_back__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
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
    assert(strncmp("deva_gaode_routing_msgs.msg._web_call_back.WebCallBack", full_classname_dest, 54) == 0);
  }
  deva_gaode_routing_msgs__msg__WebCallBack * ros_message = _ros_message;
  {  // index
    PyObject * field = PyObject_GetAttrString(_pymsg, "index");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->index = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_step
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_step");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_step = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_road");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_road = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_point
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_point");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_point = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_road_retain_dis
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_road_retain_dis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_road_retain_dis = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_step_retain_dis
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_step_retain_dis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_step_retain_dis = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cur_step_retain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_step_retain_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_step_retain_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // via_retain_dis
    PyObject * field = PyObject_GetAttrString(_pymsg, "via_retain_dis");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->via_retain_dis), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->via_retain_dis.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'via_retain_dis'");
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
      if (!rosidl_runtime_c__double__Sequence__init(&(ros_message->via_retain_dis), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create double__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      double * dest = ros_message->via_retain_dis.data;
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
  {  // path_retain_dis
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_retain_dis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->path_retain_dis = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // path_retain_time
    PyObject * field = PyObject_GetAttrString(_pymsg, "path_retain_time");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->path_retain_time = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trun_icon
    PyObject * field = PyObject_GetAttrString(_pymsg, "trun_icon");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trun_icon = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // trun_icon_retain_dis
    PyObject * field = PyObject_GetAttrString(_pymsg, "trun_icon_retain_dis");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->trun_icon_retain_dis = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // lane_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "lane_info");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_lane__convert_from_py(field, &ros_message->lane_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // camera_callback
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_callback");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__camera_callback_info__convert_from_py(field, &ros_message->camera_callback)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ring_out_cnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "ring_out_cnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ring_out_cnt = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // roundabout_out_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "roundabout_out_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->roundabout_out_angle = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_link_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_link_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_link_speed = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // not_avoid_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "not_avoid_info");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_not_avoid_info__convert_from_py(field, &ros_message->not_avoid_info)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cross_maneuver_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "cross_maneuver_id");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cross_maneuver_id = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // next_cross_info
    PyObject * field = PyObject_GetAttrString(_pymsg, "next_cross_info");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'next_cross_info'");
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
    if (!deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence__init(&(ros_message->next_cross_info), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create deva_gaode_routing_msgs__msg__WebCrossNaviInfo__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    deva_gaode_routing_msgs__msg__WebCrossNaviInfo * dest = ros_message->next_cross_info.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!deva_gaode_routing_msgs__msg__web_cross_navi_info__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // traffic_light_cd
    PyObject * field = PyObject_GetAttrString(_pymsg, "traffic_light_cd");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_traffic_light__convert_from_py(field, &ros_message->traffic_light_cd)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // parallel_road
    PyObject * field = PyObject_GetAttrString(_pymsg, "parallel_road");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_parallel_road__convert_from_py(field, &ros_message->parallel_road)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ownership
    PyObject * field = PyObject_GetAttrString(_pymsg, "ownership");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ownership = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // cur_road_limit_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_road_limit_speed");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_road_limit_speed = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cross_image
    PyObject * field = PyObject_GetAttrString(_pymsg, "cross_image");
    if (!field) {
      return false;
    }
    if (!deva_gaode_routing_msgs__msg__web_cross_image__convert_from_py(field, &ros_message->cross_image)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cur_cross_dir
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_cross_dir");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->cur_cross_dir = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // cur_cross_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "cur_cross_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cur_cross_dist = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_gaode_routing_msgs__msg__web_call_back__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of WebCallBack */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_gaode_routing_msgs.msg._web_call_back");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "WebCallBack");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_gaode_routing_msgs__msg__WebCallBack * ros_message = (deva_gaode_routing_msgs__msg__WebCallBack *)raw_ros_message;
  {  // index
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->index);
    {
      int rc = PyObject_SetAttrString(_pymessage, "index", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_step
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cur_step);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_step", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_road
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cur_road);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_point
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cur_point);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_point", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_road_retain_dis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_road_retain_dis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_road_retain_dis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_step_retain_dis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_step_retain_dis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_step_retain_dis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_step_retain_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_step_retain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_step_retain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // via_retain_dis
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "via_retain_dis");
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
    if (ros_message->via_retain_dis.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      double * src = &(ros_message->via_retain_dis.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->via_retain_dis.size * sizeof(double));
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
  {  // path_retain_dis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->path_retain_dis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_retain_dis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // path_retain_time
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->path_retain_time);
    {
      int rc = PyObject_SetAttrString(_pymessage, "path_retain_time", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trun_icon
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->trun_icon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trun_icon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trun_icon_retain_dis
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->trun_icon_retain_dis);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trun_icon_retain_dis", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lane_info
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_lane__convert_to_py(&ros_message->lane_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "lane_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // camera_callback
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__camera_callback_info__convert_to_py(&ros_message->camera_callback);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_callback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ring_out_cnt
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ring_out_cnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ring_out_cnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roundabout_out_angle
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->roundabout_out_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roundabout_out_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_link_speed
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cur_link_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_link_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // not_avoid_info
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_not_avoid_info__convert_to_py(&ros_message->not_avoid_info);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "not_avoid_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cross_maneuver_id
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->cross_maneuver_id);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cross_maneuver_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // next_cross_info
    PyObject * field = NULL;
    size_t size = ros_message->next_cross_info.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    deva_gaode_routing_msgs__msg__WebCrossNaviInfo * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->next_cross_info.data[i]);
      PyObject * pyitem = deva_gaode_routing_msgs__msg__web_cross_navi_info__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "next_cross_info", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // traffic_light_cd
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_traffic_light__convert_to_py(&ros_message->traffic_light_cd);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "traffic_light_cd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // parallel_road
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_parallel_road__convert_to_py(&ros_message->parallel_road);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "parallel_road", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ownership
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->ownership);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ownership", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_road_limit_speed
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_road_limit_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_road_limit_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cross_image
    PyObject * field = NULL;
    field = deva_gaode_routing_msgs__msg__web_cross_image__convert_to_py(&ros_message->cross_image);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cross_image", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_cross_dir
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->cur_cross_dir);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_cross_dir", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cur_cross_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cur_cross_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cur_cross_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
