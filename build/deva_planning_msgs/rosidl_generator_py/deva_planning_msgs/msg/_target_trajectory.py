# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs:msg/TargetTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TargetTrajectory(type):
    """Metaclass of message 'TargetTrajectory'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TRACETYPE_GO_STRAIGHT': 0,
        'TRACETYPE_TURN_LEFT': 1,
        'TRACETYPE_TURN_RIGHT': 2,
        'TRACETYPE_CHANGELINE_LEFT': 3,
        'TRACETYPE_CHANGELINE_RIGHT': 4,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_planning_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs.msg.TargetTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__target_trajectory
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__target_trajectory
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__target_trajectory
            cls._TYPE_SUPPORT = module.type_support_msg__msg__target_trajectory
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__target_trajectory

            from deva_planning_msgs.msg import PathPoint
            if PathPoint.__class__._TYPE_SUPPORT is None:
                PathPoint.__class__.__import_type_support__()

            from deva_planning_msgs.msg import SensorTime
            if SensorTime.__class__._TYPE_SUPPORT is None:
                SensorTime.__class__.__import_type_support__()

            from deva_planning_msgs.msg import TrajectoryPoint
            if TrajectoryPoint.__class__._TYPE_SUPPORT is None:
                TrajectoryPoint.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TRACETYPE_GO_STRAIGHT': cls.__constants['TRACETYPE_GO_STRAIGHT'],
            'TRACETYPE_TURN_LEFT': cls.__constants['TRACETYPE_TURN_LEFT'],
            'TRACETYPE_TURN_RIGHT': cls.__constants['TRACETYPE_TURN_RIGHT'],
            'TRACETYPE_CHANGELINE_LEFT': cls.__constants['TRACETYPE_CHANGELINE_LEFT'],
            'TRACETYPE_CHANGELINE_RIGHT': cls.__constants['TRACETYPE_CHANGELINE_RIGHT'],
        }

    @property
    def TRACETYPE_GO_STRAIGHT(self):
        """Message constant 'TRACETYPE_GO_STRAIGHT'."""
        return Metaclass_TargetTrajectory.__constants['TRACETYPE_GO_STRAIGHT']

    @property
    def TRACETYPE_TURN_LEFT(self):
        """Message constant 'TRACETYPE_TURN_LEFT'."""
        return Metaclass_TargetTrajectory.__constants['TRACETYPE_TURN_LEFT']

    @property
    def TRACETYPE_TURN_RIGHT(self):
        """Message constant 'TRACETYPE_TURN_RIGHT'."""
        return Metaclass_TargetTrajectory.__constants['TRACETYPE_TURN_RIGHT']

    @property
    def TRACETYPE_CHANGELINE_LEFT(self):
        """Message constant 'TRACETYPE_CHANGELINE_LEFT'."""
        return Metaclass_TargetTrajectory.__constants['TRACETYPE_CHANGELINE_LEFT']

    @property
    def TRACETYPE_CHANGELINE_RIGHT(self):
        """Message constant 'TRACETYPE_CHANGELINE_RIGHT'."""
        return Metaclass_TargetTrajectory.__constants['TRACETYPE_CHANGELINE_RIGHT']


class TargetTrajectory(metaclass=Metaclass_TargetTrajectory):
    """
    Message class 'TargetTrajectory'.

    Constants:
      TRACETYPE_GO_STRAIGHT
      TRACETYPE_TURN_LEFT
      TRACETYPE_TURN_RIGHT
      TRACETYPE_CHANGELINE_LEFT
      TRACETYPE_CHANGELINE_RIGHT
    """

    __slots__ = [
        '_header',
        '_sensor_timestamp',
        '_start_gnss_time',
        '_total_path_length',
        '_total_path_time',
        '_trajectory_point',
        '_path_point',
        '_gear',
        '_is_estop',
        '_estop_reason',
        '_is_stop',
        '_stop_pose',
        '_stop_reason',
        '_is_replan',
        '_replan_reason',
        '_car_in_dead_end',
        '_high_beam',
        '_low_beam',
        '_horn',
        '_emergency_light',
        '_trace_type',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'sensor_timestamp': 'deva_planning_msgs/SensorTime',
        'start_gnss_time': 'double',
        'total_path_length': 'double',
        'total_path_time': 'double',
        'trajectory_point': 'sequence<deva_planning_msgs/TrajectoryPoint>',
        'path_point': 'sequence<deva_planning_msgs/PathPoint>',
        'gear': 'string',
        'is_estop': 'boolean',
        'estop_reason': 'string',
        'is_stop': 'boolean',
        'stop_pose': 'deva_planning_msgs/PathPoint',
        'stop_reason': 'string',
        'is_replan': 'boolean',
        'replan_reason': 'string',
        'car_in_dead_end': 'boolean',
        'high_beam': 'boolean',
        'low_beam': 'boolean',
        'horn': 'boolean',
        'emergency_light': 'boolean',
        'trace_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'SensorTime'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'TrajectoryPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'PathPoint')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs', 'msg'], 'PathPoint'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from deva_planning_msgs.msg import SensorTime
        self.sensor_timestamp = kwargs.get('sensor_timestamp', SensorTime())
        self.start_gnss_time = kwargs.get('start_gnss_time', float())
        self.total_path_length = kwargs.get('total_path_length', float())
        self.total_path_time = kwargs.get('total_path_time', float())
        self.trajectory_point = kwargs.get('trajectory_point', [])
        self.path_point = kwargs.get('path_point', [])
        self.gear = kwargs.get('gear', str())
        self.is_estop = kwargs.get('is_estop', bool())
        self.estop_reason = kwargs.get('estop_reason', str())
        self.is_stop = kwargs.get('is_stop', bool())
        from deva_planning_msgs.msg import PathPoint
        self.stop_pose = kwargs.get('stop_pose', PathPoint())
        self.stop_reason = kwargs.get('stop_reason', str())
        self.is_replan = kwargs.get('is_replan', bool())
        self.replan_reason = kwargs.get('replan_reason', str())
        self.car_in_dead_end = kwargs.get('car_in_dead_end', bool())
        self.high_beam = kwargs.get('high_beam', bool())
        self.low_beam = kwargs.get('low_beam', bool())
        self.horn = kwargs.get('horn', bool())
        self.emergency_light = kwargs.get('emergency_light', bool())
        self.trace_type = kwargs.get('trace_type', int())

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
        if self.sensor_timestamp != other.sensor_timestamp:
            return False
        if self.start_gnss_time != other.start_gnss_time:
            return False
        if self.total_path_length != other.total_path_length:
            return False
        if self.total_path_time != other.total_path_time:
            return False
        if self.trajectory_point != other.trajectory_point:
            return False
        if self.path_point != other.path_point:
            return False
        if self.gear != other.gear:
            return False
        if self.is_estop != other.is_estop:
            return False
        if self.estop_reason != other.estop_reason:
            return False
        if self.is_stop != other.is_stop:
            return False
        if self.stop_pose != other.stop_pose:
            return False
        if self.stop_reason != other.stop_reason:
            return False
        if self.is_replan != other.is_replan:
            return False
        if self.replan_reason != other.replan_reason:
            return False
        if self.car_in_dead_end != other.car_in_dead_end:
            return False
        if self.high_beam != other.high_beam:
            return False
        if self.low_beam != other.low_beam:
            return False
        if self.horn != other.horn:
            return False
        if self.emergency_light != other.emergency_light:
            return False
        if self.trace_type != other.trace_type:
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
    def sensor_timestamp(self):
        """Message field 'sensor_timestamp'."""
        return self._sensor_timestamp

    @sensor_timestamp.setter
    def sensor_timestamp(self, value):
        if __debug__:
            from deva_planning_msgs.msg import SensorTime
            assert \
                isinstance(value, SensorTime), \
                "The 'sensor_timestamp' field must be a sub message of type 'SensorTime'"
        self._sensor_timestamp = value

    @builtins.property
    def start_gnss_time(self):
        """Message field 'start_gnss_time'."""
        return self._start_gnss_time

    @start_gnss_time.setter
    def start_gnss_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'start_gnss_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'start_gnss_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._start_gnss_time = value

    @builtins.property
    def total_path_length(self):
        """Message field 'total_path_length'."""
        return self._total_path_length

    @total_path_length.setter
    def total_path_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_path_length' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_path_length' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_path_length = value

    @builtins.property
    def total_path_time(self):
        """Message field 'total_path_time'."""
        return self._total_path_time

    @total_path_time.setter
    def total_path_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_path_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_path_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_path_time = value

    @builtins.property
    def trajectory_point(self):
        """Message field 'trajectory_point'."""
        return self._trajectory_point

    @trajectory_point.setter
    def trajectory_point(self, value):
        if __debug__:
            from deva_planning_msgs.msg import TrajectoryPoint
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
                 all(isinstance(v, TrajectoryPoint) for v in value) and
                 True), \
                "The 'trajectory_point' field must be a set or sequence and each value of type 'TrajectoryPoint'"
        self._trajectory_point = value

    @builtins.property
    def path_point(self):
        """Message field 'path_point'."""
        return self._path_point

    @path_point.setter
    def path_point(self, value):
        if __debug__:
            from deva_planning_msgs.msg import PathPoint
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
                 all(isinstance(v, PathPoint) for v in value) and
                 True), \
                "The 'path_point' field must be a set or sequence and each value of type 'PathPoint'"
        self._path_point = value

    @builtins.property
    def gear(self):
        """Message field 'gear'."""
        return self._gear

    @gear.setter
    def gear(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gear' field must be of type 'str'"
        self._gear = value

    @builtins.property
    def is_estop(self):
        """Message field 'is_estop'."""
        return self._is_estop

    @is_estop.setter
    def is_estop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_estop' field must be of type 'bool'"
        self._is_estop = value

    @builtins.property
    def estop_reason(self):
        """Message field 'estop_reason'."""
        return self._estop_reason

    @estop_reason.setter
    def estop_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'estop_reason' field must be of type 'str'"
        self._estop_reason = value

    @builtins.property
    def is_stop(self):
        """Message field 'is_stop'."""
        return self._is_stop

    @is_stop.setter
    def is_stop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_stop' field must be of type 'bool'"
        self._is_stop = value

    @builtins.property
    def stop_pose(self):
        """Message field 'stop_pose'."""
        return self._stop_pose

    @stop_pose.setter
    def stop_pose(self, value):
        if __debug__:
            from deva_planning_msgs.msg import PathPoint
            assert \
                isinstance(value, PathPoint), \
                "The 'stop_pose' field must be a sub message of type 'PathPoint'"
        self._stop_pose = value

    @builtins.property
    def stop_reason(self):
        """Message field 'stop_reason'."""
        return self._stop_reason

    @stop_reason.setter
    def stop_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'stop_reason' field must be of type 'str'"
        self._stop_reason = value

    @builtins.property
    def is_replan(self):
        """Message field 'is_replan'."""
        return self._is_replan

    @is_replan.setter
    def is_replan(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_replan' field must be of type 'bool'"
        self._is_replan = value

    @builtins.property
    def replan_reason(self):
        """Message field 'replan_reason'."""
        return self._replan_reason

    @replan_reason.setter
    def replan_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'replan_reason' field must be of type 'str'"
        self._replan_reason = value

    @builtins.property
    def car_in_dead_end(self):
        """Message field 'car_in_dead_end'."""
        return self._car_in_dead_end

    @car_in_dead_end.setter
    def car_in_dead_end(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'car_in_dead_end' field must be of type 'bool'"
        self._car_in_dead_end = value

    @builtins.property
    def high_beam(self):
        """Message field 'high_beam'."""
        return self._high_beam

    @high_beam.setter
    def high_beam(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'high_beam' field must be of type 'bool'"
        self._high_beam = value

    @builtins.property
    def low_beam(self):
        """Message field 'low_beam'."""
        return self._low_beam

    @low_beam.setter
    def low_beam(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'low_beam' field must be of type 'bool'"
        self._low_beam = value

    @builtins.property
    def horn(self):
        """Message field 'horn'."""
        return self._horn

    @horn.setter
    def horn(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'horn' field must be of type 'bool'"
        self._horn = value

    @builtins.property
    def emergency_light(self):
        """Message field 'emergency_light'."""
        return self._emergency_light

    @emergency_light.setter
    def emergency_light(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'emergency_light' field must be of type 'bool'"
        self._emergency_light = value

    @builtins.property
    def trace_type(self):
        """Message field 'trace_type'."""
        return self._trace_type

    @trace_type.setter
    def trace_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'trace_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'trace_type' field must be an unsigned integer in [0, 255]"
        self._trace_type = value
