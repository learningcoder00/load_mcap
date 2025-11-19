# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/ControlMonitorMsg.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlMonitorMsg(type):
    """Metaclass of message 'ControlMonitorMsg'."""

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
            module = import_type_support('deva_control_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_control_msgs.msg.ControlMonitorMsg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_monitor_msg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_monitor_msg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_monitor_msg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_monitor_msg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_monitor_msg

            from deva_planning_msgs2.msg import PlanningTrajectory
            if PlanningTrajectory.__class__._TYPE_SUPPORT is None:
                PlanningTrajectory.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlMonitorMsg(metaclass=Metaclass_ControlMonitorMsg):
    """Message class 'ControlMonitorMsg'."""

    __slots__ = [
        '_header',
        '_in_auto_drive',
        '_chs_yaw_rate',
        '_chs_speed',
        '_chs_steer',
        '_chs_longit_acc',
        '_chs_longit_torque',
        '_chs_gear',
        '_loc_x',
        '_loc_y',
        '_loc_z',
        '_loc_speed',
        '_loc_acc',
        '_loc_heading',
        '_loc_pitch',
        '_preview_path_x',
        '_preview_path_y',
        '_preview_path_theta',
        '_matched_path_x',
        '_matched_path_y',
        '_matched_path_theta',
        '_matched_path_kappa',
        '_matched_path_s',
        '_matched_path_v',
        '_matched_path_a',
        '_current_station',
        '_station_ref',
        '_station_error',
        '_current_speed',
        '_speed_ref',
        '_preview_speed_ref',
        '_speed_error',
        '_acc_ref',
        '_preview_acc_ref',
        '_actual_acc',
        '_lat_d',
        '_lat_d_rate',
        '_heading_d_rate',
        '_heading_d',
        '_pre_lat_d',
        '_pre_lat_theta',
        '_cmd_steer',
        '_cmd_acc',
        '_control_computation_time',
        '_loc_header_time',
        '_chas_header_time',
        '_planning_header_time',
        '_openloop_trajectory',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'in_auto_drive': 'boolean',
        'chs_yaw_rate': 'double',
        'chs_speed': 'double',
        'chs_steer': 'double',
        'chs_longit_acc': 'double',
        'chs_longit_torque': 'double',
        'chs_gear': 'uint8',
        'loc_x': 'double',
        'loc_y': 'double',
        'loc_z': 'double',
        'loc_speed': 'double',
        'loc_acc': 'double',
        'loc_heading': 'double',
        'loc_pitch': 'double',
        'preview_path_x': 'double',
        'preview_path_y': 'double',
        'preview_path_theta': 'double',
        'matched_path_x': 'double',
        'matched_path_y': 'double',
        'matched_path_theta': 'double',
        'matched_path_kappa': 'double',
        'matched_path_s': 'double',
        'matched_path_v': 'double',
        'matched_path_a': 'double',
        'current_station': 'double',
        'station_ref': 'double',
        'station_error': 'double',
        'current_speed': 'double',
        'speed_ref': 'double',
        'preview_speed_ref': 'double',
        'speed_error': 'double',
        'acc_ref': 'double',
        'preview_acc_ref': 'double',
        'actual_acc': 'double',
        'lat_d': 'double',
        'lat_d_rate': 'double',
        'heading_d_rate': 'double',
        'heading_d': 'double',
        'pre_lat_d': 'double',
        'pre_lat_theta': 'double',
        'cmd_steer': 'double',
        'cmd_acc': 'double',
        'control_computation_time': 'double',
        'loc_header_time': 'double',
        'chas_header_time': 'double',
        'planning_header_time': 'double',
        'openloop_trajectory': 'deva_planning_msgs2/PlanningTrajectory',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'PlanningTrajectory'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.in_auto_drive = kwargs.get('in_auto_drive', bool())
        self.chs_yaw_rate = kwargs.get('chs_yaw_rate', float())
        self.chs_speed = kwargs.get('chs_speed', float())
        self.chs_steer = kwargs.get('chs_steer', float())
        self.chs_longit_acc = kwargs.get('chs_longit_acc', float())
        self.chs_longit_torque = kwargs.get('chs_longit_torque', float())
        self.chs_gear = kwargs.get('chs_gear', int())
        self.loc_x = kwargs.get('loc_x', float())
        self.loc_y = kwargs.get('loc_y', float())
        self.loc_z = kwargs.get('loc_z', float())
        self.loc_speed = kwargs.get('loc_speed', float())
        self.loc_acc = kwargs.get('loc_acc', float())
        self.loc_heading = kwargs.get('loc_heading', float())
        self.loc_pitch = kwargs.get('loc_pitch', float())
        self.preview_path_x = kwargs.get('preview_path_x', float())
        self.preview_path_y = kwargs.get('preview_path_y', float())
        self.preview_path_theta = kwargs.get('preview_path_theta', float())
        self.matched_path_x = kwargs.get('matched_path_x', float())
        self.matched_path_y = kwargs.get('matched_path_y', float())
        self.matched_path_theta = kwargs.get('matched_path_theta', float())
        self.matched_path_kappa = kwargs.get('matched_path_kappa', float())
        self.matched_path_s = kwargs.get('matched_path_s', float())
        self.matched_path_v = kwargs.get('matched_path_v', float())
        self.matched_path_a = kwargs.get('matched_path_a', float())
        self.current_station = kwargs.get('current_station', float())
        self.station_ref = kwargs.get('station_ref', float())
        self.station_error = kwargs.get('station_error', float())
        self.current_speed = kwargs.get('current_speed', float())
        self.speed_ref = kwargs.get('speed_ref', float())
        self.preview_speed_ref = kwargs.get('preview_speed_ref', float())
        self.speed_error = kwargs.get('speed_error', float())
        self.acc_ref = kwargs.get('acc_ref', float())
        self.preview_acc_ref = kwargs.get('preview_acc_ref', float())
        self.actual_acc = kwargs.get('actual_acc', float())
        self.lat_d = kwargs.get('lat_d', float())
        self.lat_d_rate = kwargs.get('lat_d_rate', float())
        self.heading_d_rate = kwargs.get('heading_d_rate', float())
        self.heading_d = kwargs.get('heading_d', float())
        self.pre_lat_d = kwargs.get('pre_lat_d', float())
        self.pre_lat_theta = kwargs.get('pre_lat_theta', float())
        self.cmd_steer = kwargs.get('cmd_steer', float())
        self.cmd_acc = kwargs.get('cmd_acc', float())
        self.control_computation_time = kwargs.get('control_computation_time', float())
        self.loc_header_time = kwargs.get('loc_header_time', float())
        self.chas_header_time = kwargs.get('chas_header_time', float())
        self.planning_header_time = kwargs.get('planning_header_time', float())
        from deva_planning_msgs2.msg import PlanningTrajectory
        self.openloop_trajectory = kwargs.get('openloop_trajectory', PlanningTrajectory())

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
        if self.in_auto_drive != other.in_auto_drive:
            return False
        if self.chs_yaw_rate != other.chs_yaw_rate:
            return False
        if self.chs_speed != other.chs_speed:
            return False
        if self.chs_steer != other.chs_steer:
            return False
        if self.chs_longit_acc != other.chs_longit_acc:
            return False
        if self.chs_longit_torque != other.chs_longit_torque:
            return False
        if self.chs_gear != other.chs_gear:
            return False
        if self.loc_x != other.loc_x:
            return False
        if self.loc_y != other.loc_y:
            return False
        if self.loc_z != other.loc_z:
            return False
        if self.loc_speed != other.loc_speed:
            return False
        if self.loc_acc != other.loc_acc:
            return False
        if self.loc_heading != other.loc_heading:
            return False
        if self.loc_pitch != other.loc_pitch:
            return False
        if self.preview_path_x != other.preview_path_x:
            return False
        if self.preview_path_y != other.preview_path_y:
            return False
        if self.preview_path_theta != other.preview_path_theta:
            return False
        if self.matched_path_x != other.matched_path_x:
            return False
        if self.matched_path_y != other.matched_path_y:
            return False
        if self.matched_path_theta != other.matched_path_theta:
            return False
        if self.matched_path_kappa != other.matched_path_kappa:
            return False
        if self.matched_path_s != other.matched_path_s:
            return False
        if self.matched_path_v != other.matched_path_v:
            return False
        if self.matched_path_a != other.matched_path_a:
            return False
        if self.current_station != other.current_station:
            return False
        if self.station_ref != other.station_ref:
            return False
        if self.station_error != other.station_error:
            return False
        if self.current_speed != other.current_speed:
            return False
        if self.speed_ref != other.speed_ref:
            return False
        if self.preview_speed_ref != other.preview_speed_ref:
            return False
        if self.speed_error != other.speed_error:
            return False
        if self.acc_ref != other.acc_ref:
            return False
        if self.preview_acc_ref != other.preview_acc_ref:
            return False
        if self.actual_acc != other.actual_acc:
            return False
        if self.lat_d != other.lat_d:
            return False
        if self.lat_d_rate != other.lat_d_rate:
            return False
        if self.heading_d_rate != other.heading_d_rate:
            return False
        if self.heading_d != other.heading_d:
            return False
        if self.pre_lat_d != other.pre_lat_d:
            return False
        if self.pre_lat_theta != other.pre_lat_theta:
            return False
        if self.cmd_steer != other.cmd_steer:
            return False
        if self.cmd_acc != other.cmd_acc:
            return False
        if self.control_computation_time != other.control_computation_time:
            return False
        if self.loc_header_time != other.loc_header_time:
            return False
        if self.chas_header_time != other.chas_header_time:
            return False
        if self.planning_header_time != other.planning_header_time:
            return False
        if self.openloop_trajectory != other.openloop_trajectory:
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
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def in_auto_drive(self):
        """Message field 'in_auto_drive'."""
        return self._in_auto_drive

    @in_auto_drive.setter
    def in_auto_drive(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_auto_drive' field must be of type 'bool'"
        self._in_auto_drive = value

    @builtins.property
    def chs_yaw_rate(self):
        """Message field 'chs_yaw_rate'."""
        return self._chs_yaw_rate

    @chs_yaw_rate.setter
    def chs_yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chs_yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'chs_yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._chs_yaw_rate = value

    @builtins.property
    def chs_speed(self):
        """Message field 'chs_speed'."""
        return self._chs_speed

    @chs_speed.setter
    def chs_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chs_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'chs_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._chs_speed = value

    @builtins.property
    def chs_steer(self):
        """Message field 'chs_steer'."""
        return self._chs_steer

    @chs_steer.setter
    def chs_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chs_steer' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'chs_steer' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._chs_steer = value

    @builtins.property
    def chs_longit_acc(self):
        """Message field 'chs_longit_acc'."""
        return self._chs_longit_acc

    @chs_longit_acc.setter
    def chs_longit_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chs_longit_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'chs_longit_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._chs_longit_acc = value

    @builtins.property
    def chs_longit_torque(self):
        """Message field 'chs_longit_torque'."""
        return self._chs_longit_torque

    @chs_longit_torque.setter
    def chs_longit_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chs_longit_torque' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'chs_longit_torque' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._chs_longit_torque = value

    @builtins.property
    def chs_gear(self):
        """Message field 'chs_gear'."""
        return self._chs_gear

    @chs_gear.setter
    def chs_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'chs_gear' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'chs_gear' field must be an unsigned integer in [0, 255]"
        self._chs_gear = value

    @builtins.property
    def loc_x(self):
        """Message field 'loc_x'."""
        return self._loc_x

    @loc_x.setter
    def loc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_x = value

    @builtins.property
    def loc_y(self):
        """Message field 'loc_y'."""
        return self._loc_y

    @loc_y.setter
    def loc_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_y = value

    @builtins.property
    def loc_z(self):
        """Message field 'loc_z'."""
        return self._loc_z

    @loc_z.setter
    def loc_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_z = value

    @builtins.property
    def loc_speed(self):
        """Message field 'loc_speed'."""
        return self._loc_speed

    @loc_speed.setter
    def loc_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_speed = value

    @builtins.property
    def loc_acc(self):
        """Message field 'loc_acc'."""
        return self._loc_acc

    @loc_acc.setter
    def loc_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_acc = value

    @builtins.property
    def loc_heading(self):
        """Message field 'loc_heading'."""
        return self._loc_heading

    @loc_heading.setter
    def loc_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_heading = value

    @builtins.property
    def loc_pitch(self):
        """Message field 'loc_pitch'."""
        return self._loc_pitch

    @loc_pitch.setter
    def loc_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_pitch' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_pitch' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_pitch = value

    @builtins.property
    def preview_path_x(self):
        """Message field 'preview_path_x'."""
        return self._preview_path_x

    @preview_path_x.setter
    def preview_path_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_path_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_path_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_path_x = value

    @builtins.property
    def preview_path_y(self):
        """Message field 'preview_path_y'."""
        return self._preview_path_y

    @preview_path_y.setter
    def preview_path_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_path_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_path_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_path_y = value

    @builtins.property
    def preview_path_theta(self):
        """Message field 'preview_path_theta'."""
        return self._preview_path_theta

    @preview_path_theta.setter
    def preview_path_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_path_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_path_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_path_theta = value

    @builtins.property
    def matched_path_x(self):
        """Message field 'matched_path_x'."""
        return self._matched_path_x

    @matched_path_x.setter
    def matched_path_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matched_path_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matched_path_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matched_path_x = value

    @builtins.property
    def matched_path_y(self):
        """Message field 'matched_path_y'."""
        return self._matched_path_y

    @matched_path_y.setter
    def matched_path_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matched_path_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matched_path_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matched_path_y = value

    @builtins.property
    def matched_path_theta(self):
        """Message field 'matched_path_theta'."""
        return self._matched_path_theta

    @matched_path_theta.setter
    def matched_path_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matched_path_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matched_path_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matched_path_theta = value

    @builtins.property
    def matched_path_kappa(self):
        """Message field 'matched_path_kappa'."""
        return self._matched_path_kappa

    @matched_path_kappa.setter
    def matched_path_kappa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matched_path_kappa' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matched_path_kappa' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matched_path_kappa = value

    @builtins.property
    def matched_path_s(self):
        """Message field 'matched_path_s'."""
        return self._matched_path_s

    @matched_path_s.setter
    def matched_path_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matched_path_s' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matched_path_s' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matched_path_s = value

    @builtins.property
    def matched_path_v(self):
        """Message field 'matched_path_v'."""
        return self._matched_path_v

    @matched_path_v.setter
    def matched_path_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matched_path_v' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matched_path_v' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matched_path_v = value

    @builtins.property
    def matched_path_a(self):
        """Message field 'matched_path_a'."""
        return self._matched_path_a

    @matched_path_a.setter
    def matched_path_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'matched_path_a' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'matched_path_a' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._matched_path_a = value

    @builtins.property
    def current_station(self):
        """Message field 'current_station'."""
        return self._current_station

    @current_station.setter
    def current_station(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_station' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_station' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_station = value

    @builtins.property
    def station_ref(self):
        """Message field 'station_ref'."""
        return self._station_ref

    @station_ref.setter
    def station_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'station_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'station_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._station_ref = value

    @builtins.property
    def station_error(self):
        """Message field 'station_error'."""
        return self._station_error

    @station_error.setter
    def station_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'station_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'station_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._station_error = value

    @builtins.property
    def current_speed(self):
        """Message field 'current_speed'."""
        return self._current_speed

    @current_speed.setter
    def current_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'current_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._current_speed = value

    @builtins.property
    def speed_ref(self):
        """Message field 'speed_ref'."""
        return self._speed_ref

    @speed_ref.setter
    def speed_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_ref = value

    @builtins.property
    def preview_speed_ref(self):
        """Message field 'preview_speed_ref'."""
        return self._preview_speed_ref

    @preview_speed_ref.setter
    def preview_speed_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_speed_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_speed_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_speed_ref = value

    @builtins.property
    def speed_error(self):
        """Message field 'speed_error'."""
        return self._speed_error

    @speed_error.setter
    def speed_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_error = value

    @builtins.property
    def acc_ref(self):
        """Message field 'acc_ref'."""
        return self._acc_ref

    @acc_ref.setter
    def acc_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acc_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acc_ref = value

    @builtins.property
    def preview_acc_ref(self):
        """Message field 'preview_acc_ref'."""
        return self._preview_acc_ref

    @preview_acc_ref.setter
    def preview_acc_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'preview_acc_ref' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'preview_acc_ref' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._preview_acc_ref = value

    @builtins.property
    def actual_acc(self):
        """Message field 'actual_acc'."""
        return self._actual_acc

    @actual_acc.setter
    def actual_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'actual_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'actual_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._actual_acc = value

    @builtins.property
    def lat_d(self):
        """Message field 'lat_d'."""
        return self._lat_d

    @lat_d.setter
    def lat_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat_d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat_d = value

    @builtins.property
    def lat_d_rate(self):
        """Message field 'lat_d_rate'."""
        return self._lat_d_rate

    @lat_d_rate.setter
    def lat_d_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_d_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat_d_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat_d_rate = value

    @builtins.property
    def heading_d_rate(self):
        """Message field 'heading_d_rate'."""
        return self._heading_d_rate

    @heading_d_rate.setter
    def heading_d_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_d_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_d_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_d_rate = value

    @builtins.property
    def heading_d(self):
        """Message field 'heading_d'."""
        return self._heading_d

    @heading_d.setter
    def heading_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_d = value

    @builtins.property
    def pre_lat_d(self):
        """Message field 'pre_lat_d'."""
        return self._pre_lat_d

    @pre_lat_d.setter
    def pre_lat_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pre_lat_d' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pre_lat_d' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pre_lat_d = value

    @builtins.property
    def pre_lat_theta(self):
        """Message field 'pre_lat_theta'."""
        return self._pre_lat_theta

    @pre_lat_theta.setter
    def pre_lat_theta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pre_lat_theta' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pre_lat_theta' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pre_lat_theta = value

    @builtins.property
    def cmd_steer(self):
        """Message field 'cmd_steer'."""
        return self._cmd_steer

    @cmd_steer.setter
    def cmd_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cmd_steer' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cmd_steer' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cmd_steer = value

    @builtins.property
    def cmd_acc(self):
        """Message field 'cmd_acc'."""
        return self._cmd_acc

    @cmd_acc.setter
    def cmd_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cmd_acc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cmd_acc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cmd_acc = value

    @builtins.property
    def control_computation_time(self):
        """Message field 'control_computation_time'."""
        return self._control_computation_time

    @control_computation_time.setter
    def control_computation_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'control_computation_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'control_computation_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._control_computation_time = value

    @builtins.property
    def loc_header_time(self):
        """Message field 'loc_header_time'."""
        return self._loc_header_time

    @loc_header_time.setter
    def loc_header_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loc_header_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'loc_header_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._loc_header_time = value

    @builtins.property
    def chas_header_time(self):
        """Message field 'chas_header_time'."""
        return self._chas_header_time

    @chas_header_time.setter
    def chas_header_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'chas_header_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'chas_header_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._chas_header_time = value

    @builtins.property
    def planning_header_time(self):
        """Message field 'planning_header_time'."""
        return self._planning_header_time

    @planning_header_time.setter
    def planning_header_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'planning_header_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'planning_header_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._planning_header_time = value

    @builtins.property
    def openloop_trajectory(self):
        """Message field 'openloop_trajectory'."""
        return self._openloop_trajectory

    @openloop_trajectory.setter
    def openloop_trajectory(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import PlanningTrajectory
            assert \
                isinstance(value, PlanningTrajectory), \
                "The 'openloop_trajectory' field must be a sub message of type 'PlanningTrajectory'"
        self._openloop_trajectory = value
