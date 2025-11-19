# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_control_msgs:msg/VehicleReportCommon.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'wheelspeed_dir'
# Member 'wheelspeed'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleReportCommon(type):
    """Metaclass of message 'VehicleReportCommon'."""

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
                'deva_control_msgs.msg.VehicleReportCommon')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_report_common
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_report_common
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_report_common
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_report_common
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_report_common

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_control_msgs.msg import VehicleReportBelt
            if VehicleReportBelt.__class__._TYPE_SUPPORT is None:
                VehicleReportBelt.__class__.__import_type_support__()

            from deva_control_msgs.msg import VehicleReportPedal
            if VehicleReportPedal.__class__._TYPE_SUPPORT is None:
                VehicleReportPedal.__class__.__import_type_support__()

            from deva_control_msgs.msg import WheelSpeed
            if WheelSpeed.__class__._TYPE_SUPPORT is None:
                WheelSpeed.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PROTOCOL_VERSION__DEFAULT': '2.11',
        }

    @property
    def PROTOCOL_VERSION__DEFAULT(cls):
        """Return default value for message field 'protocol_version'."""
        return '2.11'


class VehicleReportCommon(metaclass=Metaclass_VehicleReportCommon):
    """Message class 'VehicleReportCommon'."""

    __slots__ = [
        '_header',
        '_protocol_version',
        '_unix_ts',
        '_speed',
        '_speed_valid',
        '_speed_directivity',
        '_wheelspeed_directivity',
        '_wheelspeed_valid',
        '_wheelspeed_dir',
        '_wheelspeed',
        '_gear_enable',
        '_gear',
        '_epb_state',
        '_epb_flt',
        '_late_enable',
        '_late_driveover',
        '_steer_angle_valid',
        '_steer_angle',
        '_steer_rotate_angle_speed',
        '_steer_torque_valid',
        '_steer_torque',
        '_steer_rotate_torque_speed',
        '_late_flt',
        '_longit_enable',
        '_longit_driveover',
        '_longit_torque_valid',
        '_longit_torque',
        '_longit_acc_valid',
        '_longit_acc',
        '_longit_flt',
        '_turn_lamp_lever_state',
        '_turn_lamp_left',
        '_turn_lamp_right',
        '_hazard_lamp',
        '_wiper_front',
        '_door_open_state',
        '_late_acc',
        '_yaw_rate',
        '_slope',
        '_standstill',
        '_pedal_valid',
        '_pedal',
        '_wheelspeed_rc_valid',
        '_wheelspeed_rc',
        '_belt_valid',
        '_belt',
        '_bywire_exit_reason',
        '_request_cancel',
        '_action_brake',
        '_action_throttle',
        '_action_steer',
        '_heavy_action_steer',
        '_sustain_action_throttle',
        '_sustain_action_steer',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'protocol_version': 'string',
        'unix_ts': 'double',
        'speed': 'float',
        'speed_valid': 'boolean',
        'speed_directivity': 'boolean',
        'wheelspeed_directivity': 'boolean',
        'wheelspeed_valid': 'boolean[4]',
        'wheelspeed_dir': 'uint8[4]',
        'wheelspeed': 'float[4]',
        'gear_enable': 'boolean',
        'gear': 'uint8',
        'epb_state': 'uint8',
        'epb_flt': 'uint8',
        'late_enable': 'boolean',
        'late_driveover': 'boolean',
        'steer_angle_valid': 'boolean',
        'steer_angle': 'float',
        'steer_rotate_angle_speed': 'float',
        'steer_torque_valid': 'boolean',
        'steer_torque': 'float',
        'steer_rotate_torque_speed': 'float',
        'late_flt': 'uint8',
        'longit_enable': 'boolean',
        'longit_driveover': 'boolean',
        'longit_torque_valid': 'boolean',
        'longit_torque': 'float',
        'longit_acc_valid': 'boolean',
        'longit_acc': 'float',
        'longit_flt': 'uint8',
        'turn_lamp_lever_state': 'uint8',
        'turn_lamp_left': 'boolean',
        'turn_lamp_right': 'boolean',
        'hazard_lamp': 'boolean',
        'wiper_front': 'boolean',
        'door_open_state': 'boolean[4]',
        'late_acc': 'float',
        'yaw_rate': 'float',
        'slope': 'float',
        'standstill': 'uint8',
        'pedal_valid': 'boolean',
        'pedal': 'deva_control_msgs/VehicleReportPedal',
        'wheelspeed_rc_valid': 'boolean',
        'wheelspeed_rc': 'deva_control_msgs/WheelSpeed',
        'belt_valid': 'boolean',
        'belt': 'deva_control_msgs/VehicleReportBelt',
        'bywire_exit_reason': 'string',
        'request_cancel': 'uint8',
        'action_brake': 'uint8',
        'action_throttle': 'uint8',
        'action_steer': 'uint8',
        'heavy_action_steer': 'uint8',
        'sustain_action_throttle': 'uint8',
        'sustain_action_steer': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_control_msgs', 'msg'], 'VehicleReportPedal'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_control_msgs', 'msg'], 'WheelSpeed'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_control_msgs', 'msg'], 'VehicleReportBelt'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.protocol_version = kwargs.get(
            'protocol_version', VehicleReportCommon.PROTOCOL_VERSION__DEFAULT)
        self.unix_ts = kwargs.get('unix_ts', float())
        self.speed = kwargs.get('speed', float())
        self.speed_valid = kwargs.get('speed_valid', bool())
        self.speed_directivity = kwargs.get('speed_directivity', bool())
        self.wheelspeed_directivity = kwargs.get('wheelspeed_directivity', bool())
        self.wheelspeed_valid = kwargs.get(
            'wheelspeed_valid',
            [bool() for x in range(4)]
        )
        if 'wheelspeed_dir' not in kwargs:
            self.wheelspeed_dir = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.wheelspeed_dir = kwargs.get('wheelspeed_dir')
        if 'wheelspeed' not in kwargs:
            self.wheelspeed = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.wheelspeed = kwargs.get('wheelspeed')
        self.gear_enable = kwargs.get('gear_enable', bool())
        self.gear = kwargs.get('gear', int())
        self.epb_state = kwargs.get('epb_state', int())
        self.epb_flt = kwargs.get('epb_flt', int())
        self.late_enable = kwargs.get('late_enable', bool())
        self.late_driveover = kwargs.get('late_driveover', bool())
        self.steer_angle_valid = kwargs.get('steer_angle_valid', bool())
        self.steer_angle = kwargs.get('steer_angle', float())
        self.steer_rotate_angle_speed = kwargs.get('steer_rotate_angle_speed', float())
        self.steer_torque_valid = kwargs.get('steer_torque_valid', bool())
        self.steer_torque = kwargs.get('steer_torque', float())
        self.steer_rotate_torque_speed = kwargs.get('steer_rotate_torque_speed', float())
        self.late_flt = kwargs.get('late_flt', int())
        self.longit_enable = kwargs.get('longit_enable', bool())
        self.longit_driveover = kwargs.get('longit_driveover', bool())
        self.longit_torque_valid = kwargs.get('longit_torque_valid', bool())
        self.longit_torque = kwargs.get('longit_torque', float())
        self.longit_acc_valid = kwargs.get('longit_acc_valid', bool())
        self.longit_acc = kwargs.get('longit_acc', float())
        self.longit_flt = kwargs.get('longit_flt', int())
        self.turn_lamp_lever_state = kwargs.get('turn_lamp_lever_state', int())
        self.turn_lamp_left = kwargs.get('turn_lamp_left', bool())
        self.turn_lamp_right = kwargs.get('turn_lamp_right', bool())
        self.hazard_lamp = kwargs.get('hazard_lamp', bool())
        self.wiper_front = kwargs.get('wiper_front', bool())
        self.door_open_state = kwargs.get(
            'door_open_state',
            [bool() for x in range(4)]
        )
        self.late_acc = kwargs.get('late_acc', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.slope = kwargs.get('slope', float())
        self.standstill = kwargs.get('standstill', int())
        self.pedal_valid = kwargs.get('pedal_valid', bool())
        from deva_control_msgs.msg import VehicleReportPedal
        self.pedal = kwargs.get('pedal', VehicleReportPedal())
        self.wheelspeed_rc_valid = kwargs.get('wheelspeed_rc_valid', bool())
        from deva_control_msgs.msg import WheelSpeed
        self.wheelspeed_rc = kwargs.get('wheelspeed_rc', WheelSpeed())
        self.belt_valid = kwargs.get('belt_valid', bool())
        from deva_control_msgs.msg import VehicleReportBelt
        self.belt = kwargs.get('belt', VehicleReportBelt())
        self.bywire_exit_reason = kwargs.get('bywire_exit_reason', str())
        self.request_cancel = kwargs.get('request_cancel', int())
        self.action_brake = kwargs.get('action_brake', int())
        self.action_throttle = kwargs.get('action_throttle', int())
        self.action_steer = kwargs.get('action_steer', int())
        self.heavy_action_steer = kwargs.get('heavy_action_steer', int())
        self.sustain_action_throttle = kwargs.get('sustain_action_throttle', int())
        self.sustain_action_steer = kwargs.get('sustain_action_steer', int())

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
        if self.protocol_version != other.protocol_version:
            return False
        if self.unix_ts != other.unix_ts:
            return False
        if self.speed != other.speed:
            return False
        if self.speed_valid != other.speed_valid:
            return False
        if self.speed_directivity != other.speed_directivity:
            return False
        if self.wheelspeed_directivity != other.wheelspeed_directivity:
            return False
        if self.wheelspeed_valid != other.wheelspeed_valid:
            return False
        if any(self.wheelspeed_dir != other.wheelspeed_dir):
            return False
        if any(self.wheelspeed != other.wheelspeed):
            return False
        if self.gear_enable != other.gear_enable:
            return False
        if self.gear != other.gear:
            return False
        if self.epb_state != other.epb_state:
            return False
        if self.epb_flt != other.epb_flt:
            return False
        if self.late_enable != other.late_enable:
            return False
        if self.late_driveover != other.late_driveover:
            return False
        if self.steer_angle_valid != other.steer_angle_valid:
            return False
        if self.steer_angle != other.steer_angle:
            return False
        if self.steer_rotate_angle_speed != other.steer_rotate_angle_speed:
            return False
        if self.steer_torque_valid != other.steer_torque_valid:
            return False
        if self.steer_torque != other.steer_torque:
            return False
        if self.steer_rotate_torque_speed != other.steer_rotate_torque_speed:
            return False
        if self.late_flt != other.late_flt:
            return False
        if self.longit_enable != other.longit_enable:
            return False
        if self.longit_driveover != other.longit_driveover:
            return False
        if self.longit_torque_valid != other.longit_torque_valid:
            return False
        if self.longit_torque != other.longit_torque:
            return False
        if self.longit_acc_valid != other.longit_acc_valid:
            return False
        if self.longit_acc != other.longit_acc:
            return False
        if self.longit_flt != other.longit_flt:
            return False
        if self.turn_lamp_lever_state != other.turn_lamp_lever_state:
            return False
        if self.turn_lamp_left != other.turn_lamp_left:
            return False
        if self.turn_lamp_right != other.turn_lamp_right:
            return False
        if self.hazard_lamp != other.hazard_lamp:
            return False
        if self.wiper_front != other.wiper_front:
            return False
        if self.door_open_state != other.door_open_state:
            return False
        if self.late_acc != other.late_acc:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.slope != other.slope:
            return False
        if self.standstill != other.standstill:
            return False
        if self.pedal_valid != other.pedal_valid:
            return False
        if self.pedal != other.pedal:
            return False
        if self.wheelspeed_rc_valid != other.wheelspeed_rc_valid:
            return False
        if self.wheelspeed_rc != other.wheelspeed_rc:
            return False
        if self.belt_valid != other.belt_valid:
            return False
        if self.belt != other.belt:
            return False
        if self.bywire_exit_reason != other.bywire_exit_reason:
            return False
        if self.request_cancel != other.request_cancel:
            return False
        if self.action_brake != other.action_brake:
            return False
        if self.action_throttle != other.action_throttle:
            return False
        if self.action_steer != other.action_steer:
            return False
        if self.heavy_action_steer != other.heavy_action_steer:
            return False
        if self.sustain_action_throttle != other.sustain_action_throttle:
            return False
        if self.sustain_action_steer != other.sustain_action_steer:
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
    def protocol_version(self):
        """Message field 'protocol_version'."""
        return self._protocol_version

    @protocol_version.setter
    def protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'protocol_version' field must be of type 'str'"
        self._protocol_version = value

    @builtins.property
    def unix_ts(self):
        """Message field 'unix_ts'."""
        return self._unix_ts

    @unix_ts.setter
    def unix_ts(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'unix_ts' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'unix_ts' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._unix_ts = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def speed_valid(self):
        """Message field 'speed_valid'."""
        return self._speed_valid

    @speed_valid.setter
    def speed_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speed_valid' field must be of type 'bool'"
        self._speed_valid = value

    @builtins.property
    def speed_directivity(self):
        """Message field 'speed_directivity'."""
        return self._speed_directivity

    @speed_directivity.setter
    def speed_directivity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'speed_directivity' field must be of type 'bool'"
        self._speed_directivity = value

    @builtins.property
    def wheelspeed_directivity(self):
        """Message field 'wheelspeed_directivity'."""
        return self._wheelspeed_directivity

    @wheelspeed_directivity.setter
    def wheelspeed_directivity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wheelspeed_directivity' field must be of type 'bool'"
        self._wheelspeed_directivity = value

    @builtins.property
    def wheelspeed_valid(self):
        """Message field 'wheelspeed_valid'."""
        return self._wheelspeed_valid

    @wheelspeed_valid.setter
    def wheelspeed_valid(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'wheelspeed_valid' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._wheelspeed_valid = value

    @builtins.property
    def wheelspeed_dir(self):
        """Message field 'wheelspeed_dir'."""
        return self._wheelspeed_dir

    @wheelspeed_dir.setter
    def wheelspeed_dir(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'wheelspeed_dir' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'wheelspeed_dir' numpy.ndarray() must have a size of 4"
            self._wheelspeed_dir = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'wheelspeed_dir' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._wheelspeed_dir = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def wheelspeed(self):
        """Message field 'wheelspeed'."""
        return self._wheelspeed

    @wheelspeed.setter
    def wheelspeed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'wheelspeed' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'wheelspeed' numpy.ndarray() must have a size of 4"
            self._wheelspeed = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'wheelspeed' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._wheelspeed = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gear_enable(self):
        """Message field 'gear_enable'."""
        return self._gear_enable

    @gear_enable.setter
    def gear_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gear_enable' field must be of type 'bool'"
        self._gear_enable = value

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
    def epb_state(self):
        """Message field 'epb_state'."""
        return self._epb_state

    @epb_state.setter
    def epb_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'epb_state' field must be an unsigned integer in [0, 255]"
        self._epb_state = value

    @builtins.property
    def epb_flt(self):
        """Message field 'epb_flt'."""
        return self._epb_flt

    @epb_flt.setter
    def epb_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'epb_flt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'epb_flt' field must be an unsigned integer in [0, 255]"
        self._epb_flt = value

    @builtins.property
    def late_enable(self):
        """Message field 'late_enable'."""
        return self._late_enable

    @late_enable.setter
    def late_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'late_enable' field must be of type 'bool'"
        self._late_enable = value

    @builtins.property
    def late_driveover(self):
        """Message field 'late_driveover'."""
        return self._late_driveover

    @late_driveover.setter
    def late_driveover(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'late_driveover' field must be of type 'bool'"
        self._late_driveover = value

    @builtins.property
    def steer_angle_valid(self):
        """Message field 'steer_angle_valid'."""
        return self._steer_angle_valid

    @steer_angle_valid.setter
    def steer_angle_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steer_angle_valid' field must be of type 'bool'"
        self._steer_angle_valid = value

    @builtins.property
    def steer_angle(self):
        """Message field 'steer_angle'."""
        return self._steer_angle

    @steer_angle.setter
    def steer_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_angle = value

    @builtins.property
    def steer_rotate_angle_speed(self):
        """Message field 'steer_rotate_angle_speed'."""
        return self._steer_rotate_angle_speed

    @steer_rotate_angle_speed.setter
    def steer_rotate_angle_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_rotate_angle_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_rotate_angle_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_rotate_angle_speed = value

    @builtins.property
    def steer_torque_valid(self):
        """Message field 'steer_torque_valid'."""
        return self._steer_torque_valid

    @steer_torque_valid.setter
    def steer_torque_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'steer_torque_valid' field must be of type 'bool'"
        self._steer_torque_valid = value

    @builtins.property
    def steer_torque(self):
        """Message field 'steer_torque'."""
        return self._steer_torque

    @steer_torque.setter
    def steer_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_torque = value

    @builtins.property
    def steer_rotate_torque_speed(self):
        """Message field 'steer_rotate_torque_speed'."""
        return self._steer_rotate_torque_speed

    @steer_rotate_torque_speed.setter
    def steer_rotate_torque_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'steer_rotate_torque_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'steer_rotate_torque_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._steer_rotate_torque_speed = value

    @builtins.property
    def late_flt(self):
        """Message field 'late_flt'."""
        return self._late_flt

    @late_flt.setter
    def late_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'late_flt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'late_flt' field must be an unsigned integer in [0, 255]"
        self._late_flt = value

    @builtins.property
    def longit_enable(self):
        """Message field 'longit_enable'."""
        return self._longit_enable

    @longit_enable.setter
    def longit_enable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'longit_enable' field must be of type 'bool'"
        self._longit_enable = value

    @builtins.property
    def longit_driveover(self):
        """Message field 'longit_driveover'."""
        return self._longit_driveover

    @longit_driveover.setter
    def longit_driveover(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'longit_driveover' field must be of type 'bool'"
        self._longit_driveover = value

    @builtins.property
    def longit_torque_valid(self):
        """Message field 'longit_torque_valid'."""
        return self._longit_torque_valid

    @longit_torque_valid.setter
    def longit_torque_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'longit_torque_valid' field must be of type 'bool'"
        self._longit_torque_valid = value

    @builtins.property
    def longit_torque(self):
        """Message field 'longit_torque'."""
        return self._longit_torque

    @longit_torque.setter
    def longit_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longit_torque' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longit_torque' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longit_torque = value

    @builtins.property
    def longit_acc_valid(self):
        """Message field 'longit_acc_valid'."""
        return self._longit_acc_valid

    @longit_acc_valid.setter
    def longit_acc_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'longit_acc_valid' field must be of type 'bool'"
        self._longit_acc_valid = value

    @builtins.property
    def longit_acc(self):
        """Message field 'longit_acc'."""
        return self._longit_acc

    @longit_acc.setter
    def longit_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longit_acc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longit_acc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longit_acc = value

    @builtins.property
    def longit_flt(self):
        """Message field 'longit_flt'."""
        return self._longit_flt

    @longit_flt.setter
    def longit_flt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'longit_flt' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'longit_flt' field must be an unsigned integer in [0, 255]"
        self._longit_flt = value

    @builtins.property
    def turn_lamp_lever_state(self):
        """Message field 'turn_lamp_lever_state'."""
        return self._turn_lamp_lever_state

    @turn_lamp_lever_state.setter
    def turn_lamp_lever_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turn_lamp_lever_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turn_lamp_lever_state' field must be an unsigned integer in [0, 255]"
        self._turn_lamp_lever_state = value

    @builtins.property
    def turn_lamp_left(self):
        """Message field 'turn_lamp_left'."""
        return self._turn_lamp_left

    @turn_lamp_left.setter
    def turn_lamp_left(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'turn_lamp_left' field must be of type 'bool'"
        self._turn_lamp_left = value

    @builtins.property
    def turn_lamp_right(self):
        """Message field 'turn_lamp_right'."""
        return self._turn_lamp_right

    @turn_lamp_right.setter
    def turn_lamp_right(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'turn_lamp_right' field must be of type 'bool'"
        self._turn_lamp_right = value

    @builtins.property
    def hazard_lamp(self):
        """Message field 'hazard_lamp'."""
        return self._hazard_lamp

    @hazard_lamp.setter
    def hazard_lamp(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'hazard_lamp' field must be of type 'bool'"
        self._hazard_lamp = value

    @builtins.property
    def wiper_front(self):
        """Message field 'wiper_front'."""
        return self._wiper_front

    @wiper_front.setter
    def wiper_front(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wiper_front' field must be of type 'bool'"
        self._wiper_front = value

    @builtins.property
    def door_open_state(self):
        """Message field 'door_open_state'."""
        return self._door_open_state

    @door_open_state.setter
    def door_open_state(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'door_open_state' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._door_open_state = value

    @builtins.property
    def late_acc(self):
        """Message field 'late_acc'."""
        return self._late_acc

    @late_acc.setter
    def late_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'late_acc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'late_acc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._late_acc = value

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
    def slope(self):
        """Message field 'slope'."""
        return self._slope

    @slope.setter
    def slope(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'slope' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'slope' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._slope = value

    @builtins.property
    def standstill(self):
        """Message field 'standstill'."""
        return self._standstill

    @standstill.setter
    def standstill(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'standstill' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'standstill' field must be an unsigned integer in [0, 255]"
        self._standstill = value

    @builtins.property
    def pedal_valid(self):
        """Message field 'pedal_valid'."""
        return self._pedal_valid

    @pedal_valid.setter
    def pedal_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pedal_valid' field must be of type 'bool'"
        self._pedal_valid = value

    @builtins.property
    def pedal(self):
        """Message field 'pedal'."""
        return self._pedal

    @pedal.setter
    def pedal(self, value):
        if __debug__:
            from deva_control_msgs.msg import VehicleReportPedal
            assert \
                isinstance(value, VehicleReportPedal), \
                "The 'pedal' field must be a sub message of type 'VehicleReportPedal'"
        self._pedal = value

    @builtins.property
    def wheelspeed_rc_valid(self):
        """Message field 'wheelspeed_rc_valid'."""
        return self._wheelspeed_rc_valid

    @wheelspeed_rc_valid.setter
    def wheelspeed_rc_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wheelspeed_rc_valid' field must be of type 'bool'"
        self._wheelspeed_rc_valid = value

    @builtins.property
    def wheelspeed_rc(self):
        """Message field 'wheelspeed_rc'."""
        return self._wheelspeed_rc

    @wheelspeed_rc.setter
    def wheelspeed_rc(self, value):
        if __debug__:
            from deva_control_msgs.msg import WheelSpeed
            assert \
                isinstance(value, WheelSpeed), \
                "The 'wheelspeed_rc' field must be a sub message of type 'WheelSpeed'"
        self._wheelspeed_rc = value

    @builtins.property
    def belt_valid(self):
        """Message field 'belt_valid'."""
        return self._belt_valid

    @belt_valid.setter
    def belt_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'belt_valid' field must be of type 'bool'"
        self._belt_valid = value

    @builtins.property
    def belt(self):
        """Message field 'belt'."""
        return self._belt

    @belt.setter
    def belt(self, value):
        if __debug__:
            from deva_control_msgs.msg import VehicleReportBelt
            assert \
                isinstance(value, VehicleReportBelt), \
                "The 'belt' field must be a sub message of type 'VehicleReportBelt'"
        self._belt = value

    @builtins.property
    def bywire_exit_reason(self):
        """Message field 'bywire_exit_reason'."""
        return self._bywire_exit_reason

    @bywire_exit_reason.setter
    def bywire_exit_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'bywire_exit_reason' field must be of type 'str'"
        self._bywire_exit_reason = value

    @builtins.property
    def request_cancel(self):
        """Message field 'request_cancel'."""
        return self._request_cancel

    @request_cancel.setter
    def request_cancel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_cancel' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'request_cancel' field must be an unsigned integer in [0, 255]"
        self._request_cancel = value

    @builtins.property
    def action_brake(self):
        """Message field 'action_brake'."""
        return self._action_brake

    @action_brake.setter
    def action_brake(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action_brake' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action_brake' field must be an unsigned integer in [0, 255]"
        self._action_brake = value

    @builtins.property
    def action_throttle(self):
        """Message field 'action_throttle'."""
        return self._action_throttle

    @action_throttle.setter
    def action_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action_throttle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action_throttle' field must be an unsigned integer in [0, 255]"
        self._action_throttle = value

    @builtins.property
    def action_steer(self):
        """Message field 'action_steer'."""
        return self._action_steer

    @action_steer.setter
    def action_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action_steer' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action_steer' field must be an unsigned integer in [0, 255]"
        self._action_steer = value

    @builtins.property
    def heavy_action_steer(self):
        """Message field 'heavy_action_steer'."""
        return self._heavy_action_steer

    @heavy_action_steer.setter
    def heavy_action_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heavy_action_steer' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'heavy_action_steer' field must be an unsigned integer in [0, 255]"
        self._heavy_action_steer = value

    @builtins.property
    def sustain_action_throttle(self):
        """Message field 'sustain_action_throttle'."""
        return self._sustain_action_throttle

    @sustain_action_throttle.setter
    def sustain_action_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sustain_action_throttle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sustain_action_throttle' field must be an unsigned integer in [0, 255]"
        self._sustain_action_throttle = value

    @builtins.property
    def sustain_action_steer(self):
        """Message field 'sustain_action_steer'."""
        return self._sustain_action_steer

    @sustain_action_steer.setter
    def sustain_action_steer(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sustain_action_steer' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sustain_action_steer' field must be an unsigned integer in [0, 255]"
        self._sustain_action_steer = value
