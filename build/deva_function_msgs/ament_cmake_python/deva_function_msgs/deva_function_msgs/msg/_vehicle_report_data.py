# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_function_msgs:msg/VehicleReportData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleReportData(type):
    """Metaclass of message 'VehicleReportData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_function_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_function_msgs.msg.VehicleReportData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_report_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_report_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_report_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_report_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_report_data

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_function_msgs.msg import WheelSpeed
            if WheelSpeed.__class__._TYPE_SUPPORT is None:
                WheelSpeed.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleReportData(metaclass=Metaclass_VehicleReportData):
    """Message class 'VehicleReportData'."""

    __slots__ = [
        '_header',
        '_throttle',
        '_engine_rpm',
        '_vehicle_speed',
        '_vehicle_speed_valid',
        '_vehicle_speed_safe',
        '_wheel_speed',
        '_brake',
        '_steer_wheel_angle',
        '_steer_wheel_angle_valid',
        '_steer_wheel_velocity',
        '_steer_wheel_velocity_valid',
        '_son_roof_posn_sts',
        '_win_posn_sts_at_drvr',
        '_win_posn_sts_at_pass',
        '_win_posn_sts_at_re_le',
        '_win_posn_sts_at_re_ri',
        '_stop_li',
        '_seat_back_angle_row_first_drvr',
        '_extr_ltg_sts_hi_beam',
        '_extr_ltg_sts_lo_beam',
        '_indcr_sts',
        '_indcr_disp',
        '_yaw_rate',
        '_error_code',
        '_epb_status',
        '_gear',
        '_acc_lat',
        '_acc_lon',
        '_a_data_raw_safe_a_lat_qf',
        '_a_data_raw_safe_a_lgt_qf',
        '_ag_data_raw_safe_yaw_rate_qf',
        '_extr_ltg_sts_turn_indcr_le',
        '_extr_ltg_sts_turn_indcr_ri',
        '_brk_pedl_psd_brk_pedl_psd',
        '_brk_pedl_psd_brk_pedl_psd_qf',
        '_road_incln',
        '_stand_still_mgr_sts_for_hld1',
        '_rain_level',
        '_steer_whl_tq_addl',
        '_driver_steer_torque',
        '_door_drvr_sts',
        '_door_le_re_sts',
        '_door_pass_sts',
        '_door_ri_re_sts',
        '_mirr_fold_sts_at_drvr',
        '_mirr_fold_sts_at_pass',
        '_steer_wheel_angle_max',
        '_asy_actr_actv_for_lgt_ctrl',
        '_asy_a_lgt_actv_aft_lim',
        '_veh_spd_indcd',
        '_illumination',
        '_car_mode',
        '_usg_mode',
        '_temprature',
        '_veh_batt_u_sys_u',
        '_trip',
        '_power_level',
        '_pt_tq_set_safe_req',
        '_extr_ltg_sts_reverse_li',
        '_trlr_prsnt',
        '_tank_turn_mod_sts',
        '_crs_ctrl_ovr_dn',
        '_rear_wheel_steer_angle',
        '_pass_seat_sts2',
        '_whl_lock_status',
        '_tvc_not_avail_for_dpa',
        '_steer_ext_fct_sts_ext_fct_lower_lim_active',
        '_steer_ext_fct_sts_ext_fct_upper_lim_active',
        '_steer_ext_fct_sts_drvr_steer_ovrd',
        '_steer_ext_fct_sts_ext_fct_rate_lim_active',
        '_steer_ext_fct_sts_ext_safe_lim_active',
        '_steer_ext_fct_sts_lat_ag_req_not_in_range',
        '_steer_ext_fct_sts_lat_ctrl_req_not_in_range',
        '_pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act',
        '_pt_tg_at_whl_re_act_pt_tq_at_axle_re_act',
        '_steer_act_re_group_steer_act_re_sts',
        '_drvg_dir_des',
        '_pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act',
        '_pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act',
        '_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act',
        '_pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act',
        '_tq_ass_addl',
        '_sapa_veh_mtn_st_veh_mtn_st',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'throttle': 'float',
        'engine_rpm': 'float',
        'vehicle_speed': 'float',
        'vehicle_speed_valid': 'uint8',
        'vehicle_speed_safe': 'float',
        'wheel_speed': 'deva_function_msgs/WheelSpeed',
        'brake': 'float',
        'steer_wheel_angle': 'float',
        'steer_wheel_angle_valid': 'uint8',
        'steer_wheel_velocity': 'float',
        'steer_wheel_velocity_valid': 'uint8',
        'son_roof_posn_sts': 'uint8',
        'win_posn_sts_at_drvr': 'uint8',
        'win_posn_sts_at_pass': 'uint8',
        'win_posn_sts_at_re_le': 'uint8',
        'win_posn_sts_at_re_ri': 'uint8',
        'stop_li': 'uint8',
        'seat_back_angle_row_first_drvr': 'float',
        'extr_ltg_sts_hi_beam': 'uint8',
        'extr_ltg_sts_lo_beam': 'uint8',
        'indcr_sts': 'uint8',
        'indcr_disp': 'uint8',
        'yaw_rate': 'float',
        'error_code': 'uint8',
        'epb_status': 'uint8',
        'gear': 'uint8',
        'acc_lat': 'float',
        'acc_lon': 'float',
        'a_data_raw_safe_a_lat_qf': 'uint8',
        'a_data_raw_safe_a_lgt_qf': 'uint8',
        'ag_data_raw_safe_yaw_rate_qf': 'uint8',
        'extr_ltg_sts_turn_indcr_le': 'uint8',
        'extr_ltg_sts_turn_indcr_ri': 'uint8',
        'brk_pedl_psd_brk_pedl_psd': 'uint8',
        'brk_pedl_psd_brk_pedl_psd_qf': 'uint8',
        'road_incln': 'float',
        'stand_still_mgr_sts_for_hld1': 'uint8',
        'rain_level': 'uint8',
        'steer_whl_tq_addl': 'float',
        'driver_steer_torque': 'float',
        'door_drvr_sts': 'uint8',
        'door_le_re_sts': 'uint8',
        'door_pass_sts': 'uint8',
        'door_ri_re_sts': 'uint8',
        'mirr_fold_sts_at_drvr': 'uint8',
        'mirr_fold_sts_at_pass': 'uint8',
        'steer_wheel_angle_max': 'float',
        'asy_actr_actv_for_lgt_ctrl': 'uint8',
        'asy_a_lgt_actv_aft_lim': 'float',
        'veh_spd_indcd': 'float',
        'illumination': 'uint16',
        'car_mode': 'uint8',
        'usg_mode': 'uint8',
        'temprature': 'float',
        'veh_batt_u_sys_u': 'float',
        'trip': 'uint32',
        'power_level': 'uint8',
        'pt_tq_set_safe_req': 'int16',
        'extr_ltg_sts_reverse_li': 'uint8',
        'trlr_prsnt': 'uint8',
        'tank_turn_mod_sts': 'uint8',
        'crs_ctrl_ovr_dn': 'uint8',
        'rear_wheel_steer_angle': 'uint8',
        'pass_seat_sts2': 'uint8',
        'whl_lock_status': 'uint8',
        'tvc_not_avail_for_dpa': 'uint8',
        'steer_ext_fct_sts_ext_fct_lower_lim_active': 'uint8',
        'steer_ext_fct_sts_ext_fct_upper_lim_active': 'uint8',
        'steer_ext_fct_sts_drvr_steer_ovrd': 'uint8',
        'steer_ext_fct_sts_ext_fct_rate_lim_active': 'uint8',
        'steer_ext_fct_sts_ext_safe_lim_active': 'uint8',
        'steer_ext_fct_sts_lat_ag_req_not_in_range': 'uint8',
        'steer_ext_fct_sts_lat_ctrl_req_not_in_range': 'uint8',
        'pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act': 'int16',
        'pt_tg_at_whl_re_act_pt_tq_at_axle_re_act': 'int16',
        'steer_act_re_group_steer_act_re_sts': 'uint8',
        'drvg_dir_des': 'uint8',
        'pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act': 'float',
        'pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act': 'float',
        'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act': 'float',
        'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act': 'float',
        'tq_ass_addl': 'float',
        'sapa_veh_mtn_st_veh_mtn_st': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_function_msgs', 'msg'], 'WheelSpeed'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.throttle = kwargs.get('throttle', float())
        self.engine_rpm = kwargs.get('engine_rpm', float())
        self.vehicle_speed = kwargs.get('vehicle_speed', float())
        self.vehicle_speed_valid = kwargs.get('vehicle_speed_valid', int())
        self.vehicle_speed_safe = kwargs.get('vehicle_speed_safe', float())
        from deva_function_msgs.msg import WheelSpeed
        self.wheel_speed = kwargs.get('wheel_speed', WheelSpeed())
        self.brake = kwargs.get('brake', float())
        self.steer_wheel_angle = kwargs.get('steer_wheel_angle', float())
        self.steer_wheel_angle_valid = kwargs.get('steer_wheel_angle_valid', int())
        self.steer_wheel_velocity = kwargs.get('steer_wheel_velocity', float())
        self.steer_wheel_velocity_valid = kwargs.get('steer_wheel_velocity_valid', int())
        self.son_roof_posn_sts = kwargs.get('son_roof_posn_sts', int())
        self.win_posn_sts_at_drvr = kwargs.get('win_posn_sts_at_drvr', int())
        self.win_posn_sts_at_pass = kwargs.get('win_posn_sts_at_pass', int())
        self.win_posn_sts_at_re_le = kwargs.get('win_posn_sts_at_re_le', int())
        self.win_posn_sts_at_re_ri = kwargs.get('win_posn_sts_at_re_ri', int())
        self.stop_li = kwargs.get('stop_li', int())
        self.seat_back_angle_row_first_drvr = kwargs.get('seat_back_angle_row_first_drvr', float())
        self.extr_ltg_sts_hi_beam = kwargs.get('extr_ltg_sts_hi_beam', int())
        self.extr_ltg_sts_lo_beam = kwargs.get('extr_ltg_sts_lo_beam', int())
        self.indcr_sts = kwargs.get('indcr_sts', int())
        self.indcr_disp = kwargs.get('indcr_disp', int())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.error_code = kwargs.get('error_code', int())
        self.epb_status = kwargs.get('epb_status', int())
        self.gear = kwargs.get('gear', int())
        self.acc_lat = kwargs.get('acc_lat', float())
        self.acc_lon = kwargs.get('acc_lon', float())
        self.a_data_raw_safe_a_lat_qf = kwargs.get('a_data_raw_safe_a_lat_qf', int())
        self.a_data_raw_safe_a_lgt_qf = kwargs.get('a_data_raw_safe_a_lgt_qf', int())
        self.ag_data_raw_safe_yaw_rate_qf = kwargs.get('ag_data_raw_safe_yaw_rate_qf', int())
        self.extr_ltg_sts_turn_indcr_le = kwargs.get('extr_ltg_sts_turn_indcr_le', int())
        self.extr_ltg_sts_turn_indcr_ri = kwargs.get('extr_ltg_sts_turn_indcr_ri', int())
        self.brk_pedl_psd_brk_pedl_psd = kwargs.get('brk_pedl_psd_brk_pedl_psd', int())
        self.brk_pedl_psd_brk_pedl_psd_qf = kwargs.get('brk_pedl_psd_brk_pedl_psd_qf', int())
        self.road_incln = kwargs.get('road_incln', float())
        self.stand_still_mgr_sts_for_hld1 = kwargs.get('stand_still_mgr_sts_for_hld1', int())
        self.rain_level = kwargs.get('rain_level', int())
        self.steer_whl_tq_addl = kwargs.get('steer_whl_tq_addl', float())
        self.driver_steer_torque = kwargs.get('driver_steer_torque', float())
        self.door_drvr_sts = kwargs.get('door_drvr_sts', int())
        self.door_le_re_sts = kwargs.get('door_le_re_sts', int())
        self.door_pass_sts = kwargs.get('door_pass_sts', int())
        self.door_ri_re_sts = kwargs.get('door_ri_re_sts', int())
        self.mirr_fold_sts_at_drvr = kwargs.get('mirr_fold_sts_at_drvr', int())
        self.mirr_fold_sts_at_pass = kwargs.get('mirr_fold_sts_at_pass', int())
        self.steer_wheel_angle_max = kwargs.get('steer_wheel_angle_max', float())
        self.asy_actr_actv_for_lgt_ctrl = kwargs.get('asy_actr_actv_for_lgt_ctrl', int())
        self.asy_a_lgt_actv_aft_lim = kwargs.get('asy_a_lgt_actv_aft_lim', float())
        self.veh_spd_indcd = kwargs.get('veh_spd_indcd', float())
        self.illumination = kwargs.get('illumination', int())
        self.car_mode = kwargs.get('car_mode', int())
        self.usg_mode = kwargs.get('usg_mode', int())
        self.temprature = kwargs.get('temprature', float())
        self.veh_batt_u_sys_u = kwargs.get('veh_batt_u_sys_u', float())
        self.trip = kwargs.get('trip', int())
        self.power_level = kwargs.get('power_level', int())
        self.pt_tq_set_safe_req = kwargs.get('pt_tq_set_safe_req', int())
        self.extr_ltg_sts_reverse_li = kwargs.get('extr_ltg_sts_reverse_li', int())
        self.trlr_prsnt = kwargs.get('trlr_prsnt', int())
        self.tank_turn_mod_sts = kwargs.get('tank_turn_mod_sts', int())
        self.crs_ctrl_ovr_dn = kwargs.get('crs_ctrl_ovr_dn', int())
        self.rear_wheel_steer_angle = kwargs.get('rear_wheel_steer_angle', int())
        self.pass_seat_sts2 = kwargs.get('pass_seat_sts2', int())
        self.whl_lock_status = kwargs.get('whl_lock_status', int())
        self.tvc_not_avail_for_dpa = kwargs.get('tvc_not_avail_for_dpa', int())
        self.steer_ext_fct_sts_ext_fct_lower_lim_active = kwargs.get('steer_ext_fct_sts_ext_fct_lower_lim_active', int())
        self.steer_ext_fct_sts_ext_fct_upper_lim_active = kwargs.get('steer_ext_fct_sts_ext_fct_upper_lim_active', int())
        self.steer_ext_fct_sts_drvr_steer_ovrd = kwargs.get('steer_ext_fct_sts_drvr_steer_ovrd', int())
        self.steer_ext_fct_sts_ext_fct_rate_lim_active = kwargs.get('steer_ext_fct_sts_ext_fct_rate_lim_active', int())
        self.steer_ext_fct_sts_ext_safe_lim_active = kwargs.get('steer_ext_fct_sts_ext_safe_lim_active', int())
        self.steer_ext_fct_sts_lat_ag_req_not_in_range = kwargs.get('steer_ext_fct_sts_lat_ag_req_not_in_range', int())
        self.steer_ext_fct_sts_lat_ctrl_req_not_in_range = kwargs.get('steer_ext_fct_sts_lat_ctrl_req_not_in_range', int())
        self.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = kwargs.get('pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act', int())
        self.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = kwargs.get('pt_tg_at_whl_re_act_pt_tq_at_axle_re_act', int())
        self.steer_act_re_group_steer_act_re_sts = kwargs.get('steer_act_re_group_steer_act_re_sts', int())
        self.drvg_dir_des = kwargs.get('drvg_dir_des', int())
        self.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = kwargs.get('pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act', float())
        self.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = kwargs.get('pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act', float())
        self.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = kwargs.get('pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act', float())
        self.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = kwargs.get('pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act', float())
        self.tq_ass_addl = kwargs.get('tq_ass_addl', float())
        self.sapa_veh_mtn_st_veh_mtn_st = kwargs.get('sapa_veh_mtn_st_veh_mtn_st', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.throttle != other.throttle:
            return False
        if self.engine_rpm != other.engine_rpm:
            return False
        if self.vehicle_speed != other.vehicle_speed:
            return False
        if self.vehicle_speed_valid != other.vehicle_speed_valid:
            return False
        if self.vehicle_speed_safe != other.vehicle_speed_safe:
            return False
        if self.wheel_speed != other.wheel_speed:
            return False
        if self.brake != other.brake:
            return False
        if self.steer_wheel_angle != other.steer_wheel_angle:
            return False
        if self.steer_wheel_angle_valid != other.steer_wheel_angle_valid:
            return False
        if self.steer_wheel_velocity != other.steer_wheel_velocity:
            return False
        if self.steer_wheel_velocity_valid != other.steer_wheel_velocity_valid:
            return False
        if self.son_roof_posn_sts != other.son_roof_posn_sts:
            return False
        if self.win_posn_sts_at_drvr != other.win_posn_sts_at_drvr:
            return False
        if self.win_posn_sts_at_pass != other.win_posn_sts_at_pass:
            return False
        if self.win_posn_sts_at_re_le != other.win_posn_sts_at_re_le:
            return False
        if self.win_posn_sts_at_re_ri != other.win_posn_sts_at_re_ri:
            return False
        if self.stop_li != other.stop_li:
            return False
        if self.seat_back_angle_row_first_drvr != other.seat_back_angle_row_first_drvr:
            return False
        if self.extr_ltg_sts_hi_beam != other.extr_ltg_sts_hi_beam:
            return False
        if self.extr_ltg_sts_lo_beam != other.extr_ltg_sts_lo_beam:
            return False
        if self.indcr_sts != other.indcr_sts:
            return False
        if self.indcr_disp != other.indcr_disp:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.error_code != other.error_code:
            return False
        if self.epb_status != other.epb_status:
            return False
        if self.gear != other.gear:
            return False
        if self.acc_lat != other.acc_lat:
            return False
        if self.acc_lon != other.acc_lon:
            return False
        if self.a_data_raw_safe_a_lat_qf != other.a_data_raw_safe_a_lat_qf:
            return False
        if self.a_data_raw_safe_a_lgt_qf != other.a_data_raw_safe_a_lgt_qf:
            return False
        if self.ag_data_raw_safe_yaw_rate_qf != other.ag_data_raw_safe_yaw_rate_qf:
            return False
        if self.extr_ltg_sts_turn_indcr_le != other.extr_ltg_sts_turn_indcr_le:
            return False
        if self.extr_ltg_sts_turn_indcr_ri != other.extr_ltg_sts_turn_indcr_ri:
            return False
        if self.brk_pedl_psd_brk_pedl_psd != other.brk_pedl_psd_brk_pedl_psd:
            return False
        if self.brk_pedl_psd_brk_pedl_psd_qf != other.brk_pedl_psd_brk_pedl_psd_qf:
            return False
        if self.road_incln != other.road_incln:
            return False
        if self.stand_still_mgr_sts_for_hld1 != other.stand_still_mgr_sts_for_hld1:
            return False
        if self.rain_level != other.rain_level:
            return False
        if self.steer_whl_tq_addl != other.steer_whl_tq_addl:
            return False
        if self.driver_steer_torque != other.driver_steer_torque:
            return False
        if self.door_drvr_sts != other.door_drvr_sts:
            return False
        if self.door_le_re_sts != other.door_le_re_sts:
            return False
        if self.door_pass_sts != other.door_pass_sts:
            return False
        if self.door_ri_re_sts != other.door_ri_re_sts:
            return False
        if self.mirr_fold_sts_at_drvr != other.mirr_fold_sts_at_drvr:
            return False
        if self.mirr_fold_sts_at_pass != other.mirr_fold_sts_at_pass:
            return False
        if self.steer_wheel_angle_max != other.steer_wheel_angle_max:
            return False
        if self.asy_actr_actv_for_lgt_ctrl != other.asy_actr_actv_for_lgt_ctrl:
            return False
        if self.asy_a_lgt_actv_aft_lim != other.asy_a_lgt_actv_aft_lim:
            return False
        if self.veh_spd_indcd != other.veh_spd_indcd:
            return False
        if self.illumination != other.illumination:
            return False
        if self.car_mode != other.car_mode:
            return False
        if self.usg_mode != other.usg_mode:
            return False
        if self.temprature != other.temprature:
            return False
        if self.veh_batt_u_sys_u != other.veh_batt_u_sys_u:
            return False
        if self.trip != other.trip:
            return False
        if self.power_level != other.power_level:
            return False
        if self.pt_tq_set_safe_req != other.pt_tq_set_safe_req:
            return False
        if self.extr_ltg_sts_reverse_li != other.extr_ltg_sts_reverse_li:
            return False
        if self.trlr_prsnt != other.trlr_prsnt:
            return False
        if self.tank_turn_mod_sts != other.tank_turn_mod_sts:
            return False
        if self.crs_ctrl_ovr_dn != other.crs_ctrl_ovr_dn:
            return False
        if self.rear_wheel_steer_angle != other.rear_wheel_steer_angle:
            return False
        if self.pass_seat_sts2 != other.pass_seat_sts2:
            return False
        if self.whl_lock_status != other.whl_lock_status:
            return False
        if self.tvc_not_avail_for_dpa != other.tvc_not_avail_for_dpa:
            return False
        if self.steer_ext_fct_sts_ext_fct_lower_lim_active != other.steer_ext_fct_sts_ext_fct_lower_lim_active:
            return False
        if self.steer_ext_fct_sts_ext_fct_upper_lim_active != other.steer_ext_fct_sts_ext_fct_upper_lim_active:
            return False
        if self.steer_ext_fct_sts_drvr_steer_ovrd != other.steer_ext_fct_sts_drvr_steer_ovrd:
            return False
        if self.steer_ext_fct_sts_ext_fct_rate_lim_active != other.steer_ext_fct_sts_ext_fct_rate_lim_active:
            return False
        if self.steer_ext_fct_sts_ext_safe_lim_active != other.steer_ext_fct_sts_ext_safe_lim_active:
            return False
        if self.steer_ext_fct_sts_lat_ag_req_not_in_range != other.steer_ext_fct_sts_lat_ag_req_not_in_range:
            return False
        if self.steer_ext_fct_sts_lat_ctrl_req_not_in_range != other.steer_ext_fct_sts_lat_ctrl_req_not_in_range:
            return False
        if self.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act != other.pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act:
            return False
        if self.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act != other.pt_tg_at_whl_re_act_pt_tq_at_axle_re_act:
            return False
        if self.steer_act_re_group_steer_act_re_sts != other.steer_act_re_group_steer_act_re_sts:
            return False
        if self.drvg_dir_des != other.drvg_dir_des:
            return False
        if self.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act != other.pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act:
            return False
        if self.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act != other.pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act:
            return False
        if self.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act != other.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act:
            return False
        if self.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act != other.pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act:
            return False
        if self.tq_ass_addl != other.tq_ass_addl:
            return False
        if self.sapa_veh_mtn_st_veh_mtn_st != other.sapa_veh_mtn_st_veh_mtn_st:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from deva_common_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle = value

    @builtins.property
    def engine_rpm(self):
        """Message field 'engine_rpm'."""
        return self._engine_rpm

    @engine_rpm.setter
    def engine_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'engine_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'engine_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._engine_rpm = value

    @builtins.property
    def vehicle_speed(self):
        """Message field 'vehicle_speed'."""
        return self._vehicle_speed

    @vehicle_speed.setter
    def vehicle_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_speed = value

    @builtins.property
    def vehicle_speed_valid(self):
        """Message field 'vehicle_speed_valid'."""
        return self._vehicle_speed_valid

    @vehicle_speed_valid.setter
    def vehicle_speed_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_speed_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_speed_valid' field must be an unsigned integer in [0, 255]"
        self._vehicle_speed_valid = value

    @builtins.property
    def vehicle_speed_safe(self):
        """Message field 'vehicle_speed_safe'."""
        return self._vehicle_speed_safe

    @vehicle_speed_safe.setter
    def vehicle_speed_safe(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vehicle_speed_safe' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vehicle_speed_safe' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vehicle_speed_safe = value

    @builtins.property
    def wheel_speed(self):
        """Message field 'wheel_speed'."""
        return self._wheel_speed

    @wheel_speed.setter
    def wheel_speed(self, value):
        if __debug__:
            from deva_function_msgs.msg import WheelSpeed
            assert \
                isinstance(value, WheelSpeed), \
                "The 'wheel_speed' field must be a sub message of type 'WheelSpeed'"
        self._wheel_speed = value

    @builtins.property
    def brake(self):
        """Message field 'brake'."""
        return self._brake

    @brake.setter
    def brake(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'brake' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'brake' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._brake = value

    @builtins.property
    def steer_wheel_angle(self):
        """Message field 'steer_wheel_angle'."""
        return self._steer_wheel_angle

    @steer_wheel_angle.setter
    def steer_wheel_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_wheel_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_wheel_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_wheel_angle = value

    @builtins.property
    def steer_wheel_angle_valid(self):
        """Message field 'steer_wheel_angle_valid'."""
        return self._steer_wheel_angle_valid

    @steer_wheel_angle_valid.setter
    def steer_wheel_angle_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_wheel_angle_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_wheel_angle_valid' field must be an unsigned integer in [0, 255]"
        self._steer_wheel_angle_valid = value

    @builtins.property
    def steer_wheel_velocity(self):
        """Message field 'steer_wheel_velocity'."""
        return self._steer_wheel_velocity

    @steer_wheel_velocity.setter
    def steer_wheel_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_wheel_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_wheel_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_wheel_velocity = value

    @builtins.property
    def steer_wheel_velocity_valid(self):
        """Message field 'steer_wheel_velocity_valid'."""
        return self._steer_wheel_velocity_valid

    @steer_wheel_velocity_valid.setter
    def steer_wheel_velocity_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_wheel_velocity_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_wheel_velocity_valid' field must be an unsigned integer in [0, 255]"
        self._steer_wheel_velocity_valid = value

    @builtins.property
    def son_roof_posn_sts(self):
        """Message field 'son_roof_posn_sts'."""
        return self._son_roof_posn_sts

    @son_roof_posn_sts.setter
    def son_roof_posn_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'son_roof_posn_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'son_roof_posn_sts' field must be an unsigned integer in [0, 255]"
        self._son_roof_posn_sts = value

    @builtins.property
    def win_posn_sts_at_drvr(self):
        """Message field 'win_posn_sts_at_drvr'."""
        return self._win_posn_sts_at_drvr

    @win_posn_sts_at_drvr.setter
    def win_posn_sts_at_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_drvr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_drvr' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_drvr = value

    @builtins.property
    def win_posn_sts_at_pass(self):
        """Message field 'win_posn_sts_at_pass'."""
        return self._win_posn_sts_at_pass

    @win_posn_sts_at_pass.setter
    def win_posn_sts_at_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_pass' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_pass' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_pass = value

    @builtins.property
    def win_posn_sts_at_re_le(self):
        """Message field 'win_posn_sts_at_re_le'."""
        return self._win_posn_sts_at_re_le

    @win_posn_sts_at_re_le.setter
    def win_posn_sts_at_re_le(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_re_le' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_re_le' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_re_le = value

    @builtins.property
    def win_posn_sts_at_re_ri(self):
        """Message field 'win_posn_sts_at_re_ri'."""
        return self._win_posn_sts_at_re_ri

    @win_posn_sts_at_re_ri.setter
    def win_posn_sts_at_re_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'win_posn_sts_at_re_ri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'win_posn_sts_at_re_ri' field must be an unsigned integer in [0, 255]"
        self._win_posn_sts_at_re_ri = value

    @builtins.property
    def stop_li(self):
        """Message field 'stop_li'."""
        return self._stop_li

    @stop_li.setter
    def stop_li(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stop_li' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stop_li' field must be an unsigned integer in [0, 255]"
        self._stop_li = value

    @builtins.property
    def seat_back_angle_row_first_drvr(self):
        """Message field 'seat_back_angle_row_first_drvr'."""
        return self._seat_back_angle_row_first_drvr

    @seat_back_angle_row_first_drvr.setter
    def seat_back_angle_row_first_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'seat_back_angle_row_first_drvr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'seat_back_angle_row_first_drvr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._seat_back_angle_row_first_drvr = value

    @builtins.property
    def extr_ltg_sts_hi_beam(self):
        """Message field 'extr_ltg_sts_hi_beam'."""
        return self._extr_ltg_sts_hi_beam

    @extr_ltg_sts_hi_beam.setter
    def extr_ltg_sts_hi_beam(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extr_ltg_sts_hi_beam' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extr_ltg_sts_hi_beam' field must be an unsigned integer in [0, 255]"
        self._extr_ltg_sts_hi_beam = value

    @builtins.property
    def extr_ltg_sts_lo_beam(self):
        """Message field 'extr_ltg_sts_lo_beam'."""
        return self._extr_ltg_sts_lo_beam

    @extr_ltg_sts_lo_beam.setter
    def extr_ltg_sts_lo_beam(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extr_ltg_sts_lo_beam' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extr_ltg_sts_lo_beam' field must be an unsigned integer in [0, 255]"
        self._extr_ltg_sts_lo_beam = value

    @builtins.property
    def indcr_sts(self):
        """Message field 'indcr_sts'."""
        return self._indcr_sts

    @indcr_sts.setter
    def indcr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indcr_sts' field must be an unsigned integer in [0, 255]"
        self._indcr_sts = value

    @builtins.property
    def indcr_disp(self):
        """Message field 'indcr_disp'."""
        return self._indcr_disp

    @indcr_disp.setter
    def indcr_disp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'indcr_disp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'indcr_disp' field must be an unsigned integer in [0, 255]"
        self._indcr_disp = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate = value

    @builtins.property
    def error_code(self):
        """Message field 'error_code'."""
        return self._error_code

    @error_code.setter
    def error_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_code' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_code' field must be an unsigned integer in [0, 255]"
        self._error_code = value

    @builtins.property
    def epb_status(self):
        """Message field 'epb_status'."""
        return self._epb_status

    @epb_status.setter
    def epb_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'epb_status' field must be an unsigned integer in [0, 255]"
        self._epb_status = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear' field must be an unsigned integer in [0, 255]"
        self._gear = value

    @builtins.property
    def acc_lat(self):
        """Message field 'acc_lat'."""
        return self._acc_lat

    @acc_lat.setter
    def acc_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lat' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acc_lat' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acc_lat = value

    @builtins.property
    def acc_lon(self):
        """Message field 'acc_lon'."""
        return self._acc_lon

    @acc_lon.setter
    def acc_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_lon' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acc_lon' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acc_lon = value

    @builtins.property
    def a_data_raw_safe_a_lat_qf(self):
        """Message field 'a_data_raw_safe_a_lat_qf'."""
        return self._a_data_raw_safe_a_lat_qf

    @a_data_raw_safe_a_lat_qf.setter
    def a_data_raw_safe_a_lat_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'a_data_raw_safe_a_lat_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'a_data_raw_safe_a_lat_qf' field must be an unsigned integer in [0, 255]"
        self._a_data_raw_safe_a_lat_qf = value

    @builtins.property
    def a_data_raw_safe_a_lgt_qf(self):
        """Message field 'a_data_raw_safe_a_lgt_qf'."""
        return self._a_data_raw_safe_a_lgt_qf

    @a_data_raw_safe_a_lgt_qf.setter
    def a_data_raw_safe_a_lgt_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'a_data_raw_safe_a_lgt_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'a_data_raw_safe_a_lgt_qf' field must be an unsigned integer in [0, 255]"
        self._a_data_raw_safe_a_lgt_qf = value

    @builtins.property
    def ag_data_raw_safe_yaw_rate_qf(self):
        """Message field 'ag_data_raw_safe_yaw_rate_qf'."""
        return self._ag_data_raw_safe_yaw_rate_qf

    @ag_data_raw_safe_yaw_rate_qf.setter
    def ag_data_raw_safe_yaw_rate_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ag_data_raw_safe_yaw_rate_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'ag_data_raw_safe_yaw_rate_qf' field must be an unsigned integer in [0, 255]"
        self._ag_data_raw_safe_yaw_rate_qf = value

    @builtins.property
    def extr_ltg_sts_turn_indcr_le(self):
        """Message field 'extr_ltg_sts_turn_indcr_le'."""
        return self._extr_ltg_sts_turn_indcr_le

    @extr_ltg_sts_turn_indcr_le.setter
    def extr_ltg_sts_turn_indcr_le(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extr_ltg_sts_turn_indcr_le' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extr_ltg_sts_turn_indcr_le' field must be an unsigned integer in [0, 255]"
        self._extr_ltg_sts_turn_indcr_le = value

    @builtins.property
    def extr_ltg_sts_turn_indcr_ri(self):
        """Message field 'extr_ltg_sts_turn_indcr_ri'."""
        return self._extr_ltg_sts_turn_indcr_ri

    @extr_ltg_sts_turn_indcr_ri.setter
    def extr_ltg_sts_turn_indcr_ri(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extr_ltg_sts_turn_indcr_ri' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extr_ltg_sts_turn_indcr_ri' field must be an unsigned integer in [0, 255]"
        self._extr_ltg_sts_turn_indcr_ri = value

    @builtins.property
    def brk_pedl_psd_brk_pedl_psd(self):
        """Message field 'brk_pedl_psd_brk_pedl_psd'."""
        return self._brk_pedl_psd_brk_pedl_psd

    @brk_pedl_psd_brk_pedl_psd.setter
    def brk_pedl_psd_brk_pedl_psd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_pedl_psd_brk_pedl_psd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk_pedl_psd_brk_pedl_psd' field must be an unsigned integer in [0, 255]"
        self._brk_pedl_psd_brk_pedl_psd = value

    @builtins.property
    def brk_pedl_psd_brk_pedl_psd_qf(self):
        """Message field 'brk_pedl_psd_brk_pedl_psd_qf'."""
        return self._brk_pedl_psd_brk_pedl_psd_qf

    @brk_pedl_psd_brk_pedl_psd_qf.setter
    def brk_pedl_psd_brk_pedl_psd_qf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brk_pedl_psd_brk_pedl_psd_qf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brk_pedl_psd_brk_pedl_psd_qf' field must be an unsigned integer in [0, 255]"
        self._brk_pedl_psd_brk_pedl_psd_qf = value

    @builtins.property
    def road_incln(self):
        """Message field 'road_incln'."""
        return self._road_incln

    @road_incln.setter
    def road_incln(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'road_incln' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'road_incln' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._road_incln = value

    @builtins.property
    def stand_still_mgr_sts_for_hld1(self):
        """Message field 'stand_still_mgr_sts_for_hld1'."""
        return self._stand_still_mgr_sts_for_hld1

    @stand_still_mgr_sts_for_hld1.setter
    def stand_still_mgr_sts_for_hld1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'stand_still_mgr_sts_for_hld1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'stand_still_mgr_sts_for_hld1' field must be an unsigned integer in [0, 255]"
        self._stand_still_mgr_sts_for_hld1 = value

    @builtins.property
    def rain_level(self):
        """Message field 'rain_level'."""
        return self._rain_level

    @rain_level.setter
    def rain_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rain_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rain_level' field must be an unsigned integer in [0, 255]"
        self._rain_level = value

    @builtins.property
    def steer_whl_tq_addl(self):
        """Message field 'steer_whl_tq_addl'."""
        return self._steer_whl_tq_addl

    @steer_whl_tq_addl.setter
    def steer_whl_tq_addl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_whl_tq_addl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_whl_tq_addl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_whl_tq_addl = value

    @builtins.property
    def driver_steer_torque(self):
        """Message field 'driver_steer_torque'."""
        return self._driver_steer_torque

    @driver_steer_torque.setter
    def driver_steer_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'driver_steer_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'driver_steer_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._driver_steer_torque = value

    @builtins.property
    def door_drvr_sts(self):
        """Message field 'door_drvr_sts'."""
        return self._door_drvr_sts

    @door_drvr_sts.setter
    def door_drvr_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_drvr_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_drvr_sts' field must be an unsigned integer in [0, 255]"
        self._door_drvr_sts = value

    @builtins.property
    def door_le_re_sts(self):
        """Message field 'door_le_re_sts'."""
        return self._door_le_re_sts

    @door_le_re_sts.setter
    def door_le_re_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_le_re_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_le_re_sts' field must be an unsigned integer in [0, 255]"
        self._door_le_re_sts = value

    @builtins.property
    def door_pass_sts(self):
        """Message field 'door_pass_sts'."""
        return self._door_pass_sts

    @door_pass_sts.setter
    def door_pass_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_pass_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_pass_sts' field must be an unsigned integer in [0, 255]"
        self._door_pass_sts = value

    @builtins.property
    def door_ri_re_sts(self):
        """Message field 'door_ri_re_sts'."""
        return self._door_ri_re_sts

    @door_ri_re_sts.setter
    def door_ri_re_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'door_ri_re_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'door_ri_re_sts' field must be an unsigned integer in [0, 255]"
        self._door_ri_re_sts = value

    @builtins.property
    def mirr_fold_sts_at_drvr(self):
        """Message field 'mirr_fold_sts_at_drvr'."""
        return self._mirr_fold_sts_at_drvr

    @mirr_fold_sts_at_drvr.setter
    def mirr_fold_sts_at_drvr(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirr_fold_sts_at_drvr' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirr_fold_sts_at_drvr' field must be an unsigned integer in [0, 255]"
        self._mirr_fold_sts_at_drvr = value

    @builtins.property
    def mirr_fold_sts_at_pass(self):
        """Message field 'mirr_fold_sts_at_pass'."""
        return self._mirr_fold_sts_at_pass

    @mirr_fold_sts_at_pass.setter
    def mirr_fold_sts_at_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mirr_fold_sts_at_pass' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mirr_fold_sts_at_pass' field must be an unsigned integer in [0, 255]"
        self._mirr_fold_sts_at_pass = value

    @builtins.property
    def steer_wheel_angle_max(self):
        """Message field 'steer_wheel_angle_max'."""
        return self._steer_wheel_angle_max

    @steer_wheel_angle_max.setter
    def steer_wheel_angle_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_wheel_angle_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_wheel_angle_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_wheel_angle_max = value

    @builtins.property
    def asy_actr_actv_for_lgt_ctrl(self):
        """Message field 'asy_actr_actv_for_lgt_ctrl'."""
        return self._asy_actr_actv_for_lgt_ctrl

    @asy_actr_actv_for_lgt_ctrl.setter
    def asy_actr_actv_for_lgt_ctrl(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'asy_actr_actv_for_lgt_ctrl' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'asy_actr_actv_for_lgt_ctrl' field must be an unsigned integer in [0, 255]"
        self._asy_actr_actv_for_lgt_ctrl = value

    @builtins.property
    def asy_a_lgt_actv_aft_lim(self):
        """Message field 'asy_a_lgt_actv_aft_lim'."""
        return self._asy_a_lgt_actv_aft_lim

    @asy_a_lgt_actv_aft_lim.setter
    def asy_a_lgt_actv_aft_lim(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'asy_a_lgt_actv_aft_lim' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'asy_a_lgt_actv_aft_lim' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._asy_a_lgt_actv_aft_lim = value

    @builtins.property
    def veh_spd_indcd(self):
        """Message field 'veh_spd_indcd'."""
        return self._veh_spd_indcd

    @veh_spd_indcd.setter
    def veh_spd_indcd(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_spd_indcd' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'veh_spd_indcd' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._veh_spd_indcd = value

    @builtins.property
    def illumination(self):
        """Message field 'illumination'."""
        return self._illumination

    @illumination.setter
    def illumination(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'illumination' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'illumination' field must be an unsigned integer in [0, 65535]"
        self._illumination = value

    @builtins.property
    def car_mode(self):
        """Message field 'car_mode'."""
        return self._car_mode

    @car_mode.setter
    def car_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'car_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'car_mode' field must be an unsigned integer in [0, 255]"
        self._car_mode = value

    @builtins.property
    def usg_mode(self):
        """Message field 'usg_mode'."""
        return self._usg_mode

    @usg_mode.setter
    def usg_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'usg_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'usg_mode' field must be an unsigned integer in [0, 255]"
        self._usg_mode = value

    @builtins.property
    def temprature(self):
        """Message field 'temprature'."""
        return self._temprature

    @temprature.setter
    def temprature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temprature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temprature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temprature = value

    @builtins.property
    def veh_batt_u_sys_u(self):
        """Message field 'veh_batt_u_sys_u'."""
        return self._veh_batt_u_sys_u

    @veh_batt_u_sys_u.setter
    def veh_batt_u_sys_u(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'veh_batt_u_sys_u' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'veh_batt_u_sys_u' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._veh_batt_u_sys_u = value

    @builtins.property
    def trip(self):
        """Message field 'trip'."""
        return self._trip

    @trip.setter
    def trip(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trip' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'trip' field must be an unsigned integer in [0, 4294967295]"
        self._trip = value

    @builtins.property
    def power_level(self):
        """Message field 'power_level'."""
        return self._power_level

    @power_level.setter
    def power_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'power_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'power_level' field must be an unsigned integer in [0, 255]"
        self._power_level = value

    @builtins.property
    def pt_tq_set_safe_req(self):
        """Message field 'pt_tq_set_safe_req'."""
        return self._pt_tq_set_safe_req

    @pt_tq_set_safe_req.setter
    def pt_tq_set_safe_req(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pt_tq_set_safe_req' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pt_tq_set_safe_req' field must be an integer in [-32768, 32767]"
        self._pt_tq_set_safe_req = value

    @builtins.property
    def extr_ltg_sts_reverse_li(self):
        """Message field 'extr_ltg_sts_reverse_li'."""
        return self._extr_ltg_sts_reverse_li

    @extr_ltg_sts_reverse_li.setter
    def extr_ltg_sts_reverse_li(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'extr_ltg_sts_reverse_li' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'extr_ltg_sts_reverse_li' field must be an unsigned integer in [0, 255]"
        self._extr_ltg_sts_reverse_li = value

    @builtins.property
    def trlr_prsnt(self):
        """Message field 'trlr_prsnt'."""
        return self._trlr_prsnt

    @trlr_prsnt.setter
    def trlr_prsnt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trlr_prsnt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trlr_prsnt' field must be an unsigned integer in [0, 255]"
        self._trlr_prsnt = value

    @builtins.property
    def tank_turn_mod_sts(self):
        """Message field 'tank_turn_mod_sts'."""
        return self._tank_turn_mod_sts

    @tank_turn_mod_sts.setter
    def tank_turn_mod_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tank_turn_mod_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tank_turn_mod_sts' field must be an unsigned integer in [0, 255]"
        self._tank_turn_mod_sts = value

    @builtins.property
    def crs_ctrl_ovr_dn(self):
        """Message field 'crs_ctrl_ovr_dn'."""
        return self._crs_ctrl_ovr_dn

    @crs_ctrl_ovr_dn.setter
    def crs_ctrl_ovr_dn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crs_ctrl_ovr_dn' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'crs_ctrl_ovr_dn' field must be an unsigned integer in [0, 255]"
        self._crs_ctrl_ovr_dn = value

    @builtins.property
    def rear_wheel_steer_angle(self):
        """Message field 'rear_wheel_steer_angle'."""
        return self._rear_wheel_steer_angle

    @rear_wheel_steer_angle.setter
    def rear_wheel_steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rear_wheel_steer_angle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rear_wheel_steer_angle' field must be an unsigned integer in [0, 255]"
        self._rear_wheel_steer_angle = value

    @builtins.property
    def pass_seat_sts2(self):
        """Message field 'pass_seat_sts2'."""
        return self._pass_seat_sts2

    @pass_seat_sts2.setter
    def pass_seat_sts2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pass_seat_sts2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pass_seat_sts2' field must be an unsigned integer in [0, 255]"
        self._pass_seat_sts2 = value

    @builtins.property
    def whl_lock_status(self):
        """Message field 'whl_lock_status'."""
        return self._whl_lock_status

    @whl_lock_status.setter
    def whl_lock_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'whl_lock_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'whl_lock_status' field must be an unsigned integer in [0, 255]"
        self._whl_lock_status = value

    @builtins.property
    def tvc_not_avail_for_dpa(self):
        """Message field 'tvc_not_avail_for_dpa'."""
        return self._tvc_not_avail_for_dpa

    @tvc_not_avail_for_dpa.setter
    def tvc_not_avail_for_dpa(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tvc_not_avail_for_dpa' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tvc_not_avail_for_dpa' field must be an unsigned integer in [0, 255]"
        self._tvc_not_avail_for_dpa = value

    @builtins.property
    def steer_ext_fct_sts_ext_fct_lower_lim_active(self):
        """Message field 'steer_ext_fct_sts_ext_fct_lower_lim_active'."""
        return self._steer_ext_fct_sts_ext_fct_lower_lim_active

    @steer_ext_fct_sts_ext_fct_lower_lim_active.setter
    def steer_ext_fct_sts_ext_fct_lower_lim_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_ext_fct_sts_ext_fct_lower_lim_active' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_ext_fct_sts_ext_fct_lower_lim_active' field must be an unsigned integer in [0, 255]"
        self._steer_ext_fct_sts_ext_fct_lower_lim_active = value

    @builtins.property
    def steer_ext_fct_sts_ext_fct_upper_lim_active(self):
        """Message field 'steer_ext_fct_sts_ext_fct_upper_lim_active'."""
        return self._steer_ext_fct_sts_ext_fct_upper_lim_active

    @steer_ext_fct_sts_ext_fct_upper_lim_active.setter
    def steer_ext_fct_sts_ext_fct_upper_lim_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_ext_fct_sts_ext_fct_upper_lim_active' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_ext_fct_sts_ext_fct_upper_lim_active' field must be an unsigned integer in [0, 255]"
        self._steer_ext_fct_sts_ext_fct_upper_lim_active = value

    @builtins.property
    def steer_ext_fct_sts_drvr_steer_ovrd(self):
        """Message field 'steer_ext_fct_sts_drvr_steer_ovrd'."""
        return self._steer_ext_fct_sts_drvr_steer_ovrd

    @steer_ext_fct_sts_drvr_steer_ovrd.setter
    def steer_ext_fct_sts_drvr_steer_ovrd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_ext_fct_sts_drvr_steer_ovrd' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_ext_fct_sts_drvr_steer_ovrd' field must be an unsigned integer in [0, 255]"
        self._steer_ext_fct_sts_drvr_steer_ovrd = value

    @builtins.property
    def steer_ext_fct_sts_ext_fct_rate_lim_active(self):
        """Message field 'steer_ext_fct_sts_ext_fct_rate_lim_active'."""
        return self._steer_ext_fct_sts_ext_fct_rate_lim_active

    @steer_ext_fct_sts_ext_fct_rate_lim_active.setter
    def steer_ext_fct_sts_ext_fct_rate_lim_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_ext_fct_sts_ext_fct_rate_lim_active' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_ext_fct_sts_ext_fct_rate_lim_active' field must be an unsigned integer in [0, 255]"
        self._steer_ext_fct_sts_ext_fct_rate_lim_active = value

    @builtins.property
    def steer_ext_fct_sts_ext_safe_lim_active(self):
        """Message field 'steer_ext_fct_sts_ext_safe_lim_active'."""
        return self._steer_ext_fct_sts_ext_safe_lim_active

    @steer_ext_fct_sts_ext_safe_lim_active.setter
    def steer_ext_fct_sts_ext_safe_lim_active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_ext_fct_sts_ext_safe_lim_active' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_ext_fct_sts_ext_safe_lim_active' field must be an unsigned integer in [0, 255]"
        self._steer_ext_fct_sts_ext_safe_lim_active = value

    @builtins.property
    def steer_ext_fct_sts_lat_ag_req_not_in_range(self):
        """Message field 'steer_ext_fct_sts_lat_ag_req_not_in_range'."""
        return self._steer_ext_fct_sts_lat_ag_req_not_in_range

    @steer_ext_fct_sts_lat_ag_req_not_in_range.setter
    def steer_ext_fct_sts_lat_ag_req_not_in_range(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_ext_fct_sts_lat_ag_req_not_in_range' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_ext_fct_sts_lat_ag_req_not_in_range' field must be an unsigned integer in [0, 255]"
        self._steer_ext_fct_sts_lat_ag_req_not_in_range = value

    @builtins.property
    def steer_ext_fct_sts_lat_ctrl_req_not_in_range(self):
        """Message field 'steer_ext_fct_sts_lat_ctrl_req_not_in_range'."""
        return self._steer_ext_fct_sts_lat_ctrl_req_not_in_range

    @steer_ext_fct_sts_lat_ctrl_req_not_in_range.setter
    def steer_ext_fct_sts_lat_ctrl_req_not_in_range(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_ext_fct_sts_lat_ctrl_req_not_in_range' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_ext_fct_sts_lat_ctrl_req_not_in_range' field must be an unsigned integer in [0, 255]"
        self._steer_ext_fct_sts_lat_ctrl_req_not_in_range = value

    @builtins.property
    def pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act(self):
        """Message field 'pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act'."""
        return self._pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act

    @pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act.setter
    def pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act' field must be an integer in [-32768, 32767]"
        self._pt_tq_at_whl_frnt_act_pt_tq_at_axle_frnt_act = value

    @builtins.property
    def pt_tg_at_whl_re_act_pt_tq_at_axle_re_act(self):
        """Message field 'pt_tg_at_whl_re_act_pt_tq_at_axle_re_act'."""
        return self._pt_tg_at_whl_re_act_pt_tq_at_axle_re_act

    @pt_tg_at_whl_re_act_pt_tq_at_axle_re_act.setter
    def pt_tg_at_whl_re_act_pt_tq_at_axle_re_act(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pt_tg_at_whl_re_act_pt_tq_at_axle_re_act' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'pt_tg_at_whl_re_act_pt_tq_at_axle_re_act' field must be an integer in [-32768, 32767]"
        self._pt_tg_at_whl_re_act_pt_tq_at_axle_re_act = value

    @builtins.property
    def steer_act_re_group_steer_act_re_sts(self):
        """Message field 'steer_act_re_group_steer_act_re_sts'."""
        return self._steer_act_re_group_steer_act_re_sts

    @steer_act_re_group_steer_act_re_sts.setter
    def steer_act_re_group_steer_act_re_sts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'steer_act_re_group_steer_act_re_sts' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'steer_act_re_group_steer_act_re_sts' field must be an unsigned integer in [0, 255]"
        self._steer_act_re_group_steer_act_re_sts = value

    @builtins.property
    def drvg_dir_des(self):
        """Message field 'drvg_dir_des'."""
        return self._drvg_dir_des

    @drvg_dir_des.setter
    def drvg_dir_des(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drvg_dir_des' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'drvg_dir_des' field must be an unsigned integer in [0, 255]"
        self._drvg_dir_des = value

    @builtins.property
    def pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act(self):
        """Message field 'pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act'."""
        return self._pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act

    @pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act.setter
    def pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pt_tq_at_whl_re_act_pt_tq_at_whl_re_le_act = value

    @builtins.property
    def pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act(self):
        """Message field 'pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act'."""
        return self._pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act

    @pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act.setter
    def pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pt_tq_at_whl_re_act_pt_tq_at_whl_re_ri_act = value

    @builtins.property
    def pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act(self):
        """Message field 'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act'."""
        return self._pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act

    @pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act.setter
    def pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_le_act = value

    @builtins.property
    def pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act(self):
        """Message field 'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act'."""
        return self._pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act

    @pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act.setter
    def pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pt_tq_at_whl_frnt_act_pt_tq_at_whl_frnt_ri_act = value

    @builtins.property
    def tq_ass_addl(self):
        """Message field 'tq_ass_addl'."""
        return self._tq_ass_addl

    @tq_ass_addl.setter
    def tq_ass_addl(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tq_ass_addl' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tq_ass_addl' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tq_ass_addl = value

    @builtins.property
    def sapa_veh_mtn_st_veh_mtn_st(self):
        """Message field 'sapa_veh_mtn_st_veh_mtn_st'."""
        return self._sapa_veh_mtn_st_veh_mtn_st

    @sapa_veh_mtn_st_veh_mtn_st.setter
    def sapa_veh_mtn_st_veh_mtn_st(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sapa_veh_mtn_st_veh_mtn_st' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sapa_veh_mtn_st_veh_mtn_st' field must be an unsigned integer in [0, 255]"
        self._sapa_veh_mtn_st_veh_mtn_st = value
