// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from deva_function_msgs:msg/VehicleReportData.idl
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
#include "deva_function_msgs/msg/detail/vehicle_report_data__struct.h"
#include "deva_function_msgs/msg/detail/vehicle_report_data__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool deva_common_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * deva_common_msgs__msg__header__convert_to_py(void * raw_ros_message);
bool deva_function_msgs__msg__wheel_speed__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * deva_function_msgs__msg__wheel_speed__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool deva_function_msgs__msg__vehicle_report_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("deva_function_msgs.msg._vehicle_report_data.VehicleReportData", full_classname_dest, 61) == 0);
  }
  deva_function_msgs__msg__VehicleReportData * ros_message = _ros_message;
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
  {  // throttle
    PyObject * field = PyObject_GetAttrString(_pymsg, "throttle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->throttle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // engine_rpm
    PyObject * field = PyObject_GetAttrString(_pymsg, "engine_rpm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->engine_rpm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->vehicle_speed_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // vehicle_speed_safe
    PyObject * field = PyObject_GetAttrString(_pymsg, "vehicle_speed_safe");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vehicle_speed_safe = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // wheel_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "wheel_speed");
    if (!field) {
      return false;
    }
    if (!deva_function_msgs__msg__wheel_speed__convert_from_py(field, &ros_message->wheel_speed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // brake
    PyObject * field = PyObject_GetAttrString(_pymsg, "brake");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->brake = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_wheel_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_wheel_angle");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_wheel_angle = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_wheel_angle_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_wheel_angle_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_wheel_angle_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_wheel_velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_wheel_velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_wheel_velocity = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // steer_wheel_velocity_valid
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_wheel_velocity_valid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_wheel_velocity_valid = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // son_roof_posn_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "son_roof_posn_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->son_roof_posn_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_drvr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_drvr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_pass
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_pass");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_pass = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_re_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_re_le");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_re_le = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // win_posn_sts_at_re_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "win_posn_sts_at_re_ri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->win_posn_sts_at_re_ri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // stop_li
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_li");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_li = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // seat_back_angle_row_first_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "seat_back_angle_row_first_drvr");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->seat_back_angle_row_first_drvr = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // extr_ltg_sts_hi_beam
    PyObject * field = PyObject_GetAttrString(_pymsg, "extr_ltg_sts_hi_beam");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extr_ltg_sts_hi_beam = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // extr_ltg_sts_lo_beam
    PyObject * field = PyObject_GetAttrString(_pymsg, "extr_ltg_sts_lo_beam");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extr_ltg_sts_lo_beam = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcr_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // indcr_disp
    PyObject * field = PyObject_GetAttrString(_pymsg, "indcr_disp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->indcr_disp = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // yaw_rate
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw_rate");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw_rate = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // error_code
    PyObject * field = PyObject_GetAttrString(_pymsg, "error_code");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->error_code = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // epb_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "epb_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->epb_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // gear
    PyObject * field = PyObject_GetAttrString(_pymsg, "gear");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->gear = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // acc_lat
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lat");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lat = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // acc_lon
    PyObject * field = PyObject_GetAttrString(_pymsg, "acc_lon");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->acc_lon = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // a_data_raw_safe_a_lat_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "a_data_raw_safe_a_lat_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->a_data_raw_safe_a_lat_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // a_data_raw_safe_a_lgt_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "a_data_raw_safe_a_lgt_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->a_data_raw_safe_a_lgt_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ag_data_raw_safe_yaw_rate_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "ag_data_raw_safe_yaw_rate_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->ag_data_raw_safe_yaw_rate_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // extr_ltg_sts_turn_indcr_le
    PyObject * field = PyObject_GetAttrString(_pymsg, "extr_ltg_sts_turn_indcr_le");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extr_ltg_sts_turn_indcr_le = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // extr_ltg_sts_turn_indcr_ri
    PyObject * field = PyObject_GetAttrString(_pymsg, "extr_ltg_sts_turn_indcr_ri");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extr_ltg_sts_turn_indcr_ri = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk_pedl_psd_brk_pedl_psd
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_pedl_psd_brk_pedl_psd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk_pedl_psd_brk_pedl_psd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // brk_pedl_psd_brk_pedl_psd_qf
    PyObject * field = PyObject_GetAttrString(_pymsg, "brk_pedl_psd_brk_pedl_psd_qf");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->brk_pedl_psd_brk_pedl_psd_qf = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // road_incln
    PyObject * field = PyObject_GetAttrString(_pymsg, "road_incln");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->road_incln = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // stand_still_mgr_sts_for_hld1
    PyObject * field = PyObject_GetAttrString(_pymsg, "stand_still_mgr_sts_for_hld1");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stand_still_mgr_sts_for_hld1 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rain_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "rain_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rain_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_whl_tq_addl
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_whl_tq_addl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_whl_tq_addl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // driver_steer_torque
    PyObject * field = PyObject_GetAttrString(_pymsg, "driver_steer_torque");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->driver_steer_torque = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // door_drvr_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_drvr_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_drvr_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_le_re_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_le_re_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_le_re_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_pass_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_pass_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_pass_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // door_ri_re_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "door_ri_re_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->door_ri_re_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirr_fold_sts_at_drvr
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirr_fold_sts_at_drvr");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirr_fold_sts_at_drvr = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // mirr_fold_sts_at_pass
    PyObject * field = PyObject_GetAttrString(_pymsg, "mirr_fold_sts_at_pass");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mirr_fold_sts_at_pass = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_wheel_angle_max
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_wheel_angle_max");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->steer_wheel_angle_max = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // asy_actr_actv_for_lgt_ctrl
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_actr_actv_for_lgt_ctrl");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->asy_actr_actv_for_lgt_ctrl = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // asy_a_lgt_actv_aft_lim
    PyObject * field = PyObject_GetAttrString(_pymsg, "asy_a_lgt_actv_aft_lim");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->asy_a_lgt_actv_aft_lim = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_spd_indcd
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_spd_indcd");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_spd_indcd = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // illumination
    PyObject * field = PyObject_GetAttrString(_pymsg, "illumination");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->illumination = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // car_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "car_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->car_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // usg_mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "usg_mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->usg_mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // temprature
    PyObject * field = PyObject_GetAttrString(_pymsg, "temprature");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temprature = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // veh_batt_u_sys_u
    PyObject * field = PyObject_GetAttrString(_pymsg, "veh_batt_u_sys_u");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->veh_batt_u_sys_u = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // trip
    PyObject * field = PyObject_GetAttrString(_pymsg, "trip");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trip = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // power_level
    PyObject * field = PyObject_GetAttrString(_pymsg, "power_level");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->power_level = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pt_tq_set_safe_req
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_tq_set_safe_req");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pt_tq_set_safe_req = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // extr_ltg_sts_reverse_li
    PyObject * field = PyObject_GetAttrString(_pymsg, "extr_ltg_sts_reverse_li");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->extr_ltg_sts_reverse_li = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // trlr_prsnt
    PyObject * field = PyObject_GetAttrString(_pymsg, "trlr_prsnt");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->trlr_prsnt = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tank_turn_mod_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "tank_turn_mod_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tank_turn_mod_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crs_ctrl_ovr_dn
    PyObject * field = PyObject_GetAttrString(_pymsg, "crs_ctrl_ovr_dn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crs_ctrl_ovr_dn = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // rear_wheel_steer_angle
    PyObject * field = PyObject_GetAttrString(_pymsg, "rear_wheel_steer_angle");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->rear_wheel_steer_angle = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pass_seat_sts2
    PyObject * field = PyObject_GetAttrString(_pymsg, "pass_seat_sts2");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pass_seat_sts2 = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // whl_lock_status
    PyObject * field = PyObject_GetAttrString(_pymsg, "whl_lock_status");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->whl_lock_status = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // tvc_not_avail_for_dpa
    PyObject * field = PyObject_GetAttrString(_pymsg, "tvc_not_avail_for_dpa");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tvc_not_avail_for_dpa = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_ext_fct_sts_ext_fct_lower_lim_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ext_fct_sts_ext_fct_lower_lim_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_ext_fct_sts_ext_fct_lower_lim_active = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_ext_fct_sts_ext_fct_upper_lim_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ext_fct_sts_ext_fct_upper_lim_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_ext_fct_sts_ext_fct_upper_lim_active = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_ext_fct_sts_drvr_steer_ovrd
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ext_fct_sts_drvr_steer_ovrd");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_ext_fct_sts_drvr_steer_ovrd = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_ext_fct_sts_ext_fct_rate_lim_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ext_fct_sts_ext_fct_rate_lim_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_ext_fct_sts_ext_fct_rate_lim_active = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_ext_fct_sts_ext_safe_lim_active
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ext_fct_sts_ext_safe_lim_active");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_ext_fct_sts_ext_safe_lim_active = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_ext_fct_sts_lat_ag_req_not_in_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ext_fct_sts_lat_ag_req_not_in_range");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_ext_fct_sts_lat_ag_req_not_in_range = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // steer_ext_fct_sts_lat_ctrl_req_not_in_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_ext_fct_sts_lat_ctrl_req_not_in_range");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_ext_fct_sts_lat_ctrl_req_not_in_range = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_tg_at_whl_re_act_pt_tq_at_axle_re_act");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = (int16_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // steer_act_re_group_steer_act_re_sts
    PyObject * field = PyObject_GetAttrString(_pymsg, "steer_act_re_group_steer_act_re_sts");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->steer_act_re_group_steer_act_re_sts = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // drvg_dir_des
    PyObject * field = PyObject_GetAttrString(_pymsg, "drvg_dir_des");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->drvg_dir_des = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
    PyObject * field = PyObject_GetAttrString(_pymsg, "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tq_ass_addl
    PyObject * field = PyObject_GetAttrString(_pymsg, "tq_ass_addl");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->tq_ass_addl = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sapa_veh_mtn_st_veh_mtn_st
    PyObject * field = PyObject_GetAttrString(_pymsg, "sapa_veh_mtn_st_veh_mtn_st");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sapa_veh_mtn_st_veh_mtn_st = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * deva_function_msgs__msg__vehicle_report_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of VehicleReportData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("deva_function_msgs.msg._vehicle_report_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "VehicleReportData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  deva_function_msgs__msg__VehicleReportData * ros_message = (deva_function_msgs__msg__VehicleReportData *)raw_ros_message;
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
  {  // throttle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->throttle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "throttle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // engine_rpm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->engine_rpm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "engine_rpm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->vehicle_speed_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vehicle_speed_safe
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vehicle_speed_safe);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vehicle_speed_safe", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wheel_speed
    PyObject * field = NULL;
    field = deva_function_msgs__msg__wheel_speed__convert_to_py(&ros_message->wheel_speed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "wheel_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brake
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->brake);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brake", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_wheel_angle
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_wheel_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_wheel_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_wheel_angle_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_wheel_angle_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_wheel_angle_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_wheel_velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_wheel_velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_wheel_velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_wheel_velocity_valid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_wheel_velocity_valid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_wheel_velocity_valid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // son_roof_posn_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->son_roof_posn_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "son_roof_posn_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_drvr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_pass
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_pass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_pass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_re_le
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_re_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_re_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // win_posn_sts_at_re_ri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->win_posn_sts_at_re_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "win_posn_sts_at_re_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_li
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stop_li);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_li", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // seat_back_angle_row_first_drvr
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->seat_back_angle_row_first_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "seat_back_angle_row_first_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extr_ltg_sts_hi_beam
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extr_ltg_sts_hi_beam);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extr_ltg_sts_hi_beam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extr_ltg_sts_lo_beam
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extr_ltg_sts_lo_beam);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extr_ltg_sts_lo_beam", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indcr_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->indcr_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indcr_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // indcr_disp
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->indcr_disp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "indcr_disp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw_rate
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw_rate);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw_rate", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // error_code
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->error_code);
    {
      int rc = PyObject_SetAttrString(_pymessage, "error_code", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // epb_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->epb_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "epb_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gear
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->gear);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gear", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lat
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lat);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lat", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // acc_lon
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->acc_lon);
    {
      int rc = PyObject_SetAttrString(_pymessage, "acc_lon", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a_data_raw_safe_a_lat_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->a_data_raw_safe_a_lat_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a_data_raw_safe_a_lat_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // a_data_raw_safe_a_lgt_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->a_data_raw_safe_a_lgt_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "a_data_raw_safe_a_lgt_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ag_data_raw_safe_yaw_rate_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->ag_data_raw_safe_yaw_rate_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "ag_data_raw_safe_yaw_rate_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extr_ltg_sts_turn_indcr_le
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extr_ltg_sts_turn_indcr_le);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extr_ltg_sts_turn_indcr_le", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extr_ltg_sts_turn_indcr_ri
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extr_ltg_sts_turn_indcr_ri);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extr_ltg_sts_turn_indcr_ri", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_pedl_psd_brk_pedl_psd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk_pedl_psd_brk_pedl_psd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_pedl_psd_brk_pedl_psd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // brk_pedl_psd_brk_pedl_psd_qf
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->brk_pedl_psd_brk_pedl_psd_qf);
    {
      int rc = PyObject_SetAttrString(_pymessage, "brk_pedl_psd_brk_pedl_psd_qf", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // road_incln
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->road_incln);
    {
      int rc = PyObject_SetAttrString(_pymessage, "road_incln", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stand_still_mgr_sts_for_hld1
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->stand_still_mgr_sts_for_hld1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stand_still_mgr_sts_for_hld1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rain_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rain_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rain_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_whl_tq_addl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_whl_tq_addl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_whl_tq_addl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // driver_steer_torque
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->driver_steer_torque);
    {
      int rc = PyObject_SetAttrString(_pymessage, "driver_steer_torque", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_drvr_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_drvr_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_drvr_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_le_re_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_le_re_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_le_re_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_pass_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_pass_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_pass_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // door_ri_re_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->door_ri_re_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "door_ri_re_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirr_fold_sts_at_drvr
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mirr_fold_sts_at_drvr);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirr_fold_sts_at_drvr", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // mirr_fold_sts_at_pass
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mirr_fold_sts_at_pass);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mirr_fold_sts_at_pass", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_wheel_angle_max
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->steer_wheel_angle_max);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_wheel_angle_max", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_actr_actv_for_lgt_ctrl
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->asy_actr_actv_for_lgt_ctrl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_actr_actv_for_lgt_ctrl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // asy_a_lgt_actv_aft_lim
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->asy_a_lgt_actv_aft_lim);
    {
      int rc = PyObject_SetAttrString(_pymessage, "asy_a_lgt_actv_aft_lim", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_spd_indcd
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_spd_indcd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_spd_indcd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // illumination
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->illumination);
    {
      int rc = PyObject_SetAttrString(_pymessage, "illumination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // car_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->car_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "car_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // usg_mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->usg_mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "usg_mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temprature
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temprature);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temprature", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // veh_batt_u_sys_u
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->veh_batt_u_sys_u);
    {
      int rc = PyObject_SetAttrString(_pymessage, "veh_batt_u_sys_u", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trip
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trip);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trip", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // power_level
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->power_level);
    {
      int rc = PyObject_SetAttrString(_pymessage, "power_level", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_tq_set_safe_req
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pt_tq_set_safe_req);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_tq_set_safe_req", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // extr_ltg_sts_reverse_li
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->extr_ltg_sts_reverse_li);
    {
      int rc = PyObject_SetAttrString(_pymessage, "extr_ltg_sts_reverse_li", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // trlr_prsnt
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->trlr_prsnt);
    {
      int rc = PyObject_SetAttrString(_pymessage, "trlr_prsnt", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tank_turn_mod_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tank_turn_mod_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tank_turn_mod_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crs_ctrl_ovr_dn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crs_ctrl_ovr_dn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crs_ctrl_ovr_dn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rear_wheel_steer_angle
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->rear_wheel_steer_angle);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rear_wheel_steer_angle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pass_seat_sts2
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->pass_seat_sts2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pass_seat_sts2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // whl_lock_status
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->whl_lock_status);
    {
      int rc = PyObject_SetAttrString(_pymessage, "whl_lock_status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tvc_not_avail_for_dpa
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tvc_not_avail_for_dpa);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tvc_not_avail_for_dpa", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ext_fct_sts_ext_fct_lower_lim_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_ext_fct_sts_ext_fct_lower_lim_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ext_fct_sts_ext_fct_lower_lim_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ext_fct_sts_ext_fct_upper_lim_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_ext_fct_sts_ext_fct_upper_lim_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ext_fct_sts_ext_fct_upper_lim_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ext_fct_sts_drvr_steer_ovrd
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_ext_fct_sts_drvr_steer_ovrd);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ext_fct_sts_drvr_steer_ovrd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ext_fct_sts_ext_fct_rate_lim_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_ext_fct_sts_ext_fct_rate_lim_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ext_fct_sts_ext_fct_rate_lim_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ext_fct_sts_ext_safe_lim_active
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_ext_fct_sts_ext_safe_lim_active);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ext_fct_sts_ext_safe_lim_active", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ext_fct_sts_lat_ag_req_not_in_range
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_ext_fct_sts_lat_ag_req_not_in_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ext_fct_sts_lat_ag_req_not_in_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_ext_fct_sts_lat_ctrl_req_not_in_range
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_ext_fct_sts_lat_ctrl_req_not_in_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_ext_fct_sts_lat_ctrl_req_not_in_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_tg_at_whl_re_act_pt_tq_at_axle_re_act
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->pt_tg_at_whl_re_act_pt_tq_at_axle_re_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_tg_at_whl_re_act_pt_tq_at_axle_re_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // steer_act_re_group_steer_act_re_sts
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->steer_act_re_group_steer_act_re_sts);
    {
      int rc = PyObject_SetAttrString(_pymessage, "steer_act_re_group_steer_act_re_sts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // drvg_dir_des
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->drvg_dir_des);
    {
      int rc = PyObject_SetAttrString(_pymessage, "drvg_dir_des", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tq_ass_addl
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->tq_ass_addl);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tq_ass_addl", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sapa_veh_mtn_st_veh_mtn_st
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sapa_veh_mtn_st_veh_mtn_st);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sapa_veh_mtn_st_veh_mtn_st", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
