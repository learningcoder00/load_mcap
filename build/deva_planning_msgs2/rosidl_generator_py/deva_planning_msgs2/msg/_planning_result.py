# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_planning_msgs2:msg/PlanningResult.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanningResult(type):
    """Metaclass of message 'PlanningResult'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 1,
        'FAILED': 2,
        'FREEZE': 3,
        'QUIT': 4,
        'MANUAL': 0,
        'ACC': 1,
        'ICC': 2,
        'NOA': 3,
        'D2D': 4,
        'OFF': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('deva_planning_msgs2')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_planning_msgs2.msg.PlanningResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__planning_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__planning_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__planning_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__planning_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__planning_result

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import PlanningFail
            if PlanningFail.__class__._TYPE_SUPPORT is None:
                PlanningFail.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import PlanningTrajectory
            if PlanningTrajectory.__class__._TYPE_SUPPORT is None:
                PlanningTrajectory.__class__.__import_type_support__()

            from deva_planning_msgs2.msg import SensorTime
            if SensorTime.__class__._TYPE_SUPPORT is None:
                SensorTime.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILED': cls.__constants['FAILED'],
            'FREEZE': cls.__constants['FREEZE'],
            'QUIT': cls.__constants['QUIT'],
            'MANUAL': cls.__constants['MANUAL'],
            'ACC': cls.__constants['ACC'],
            'ICC': cls.__constants['ICC'],
            'NOA': cls.__constants['NOA'],
            'D2D': cls.__constants['D2D'],
            'OFF': cls.__constants['OFF'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_PlanningResult.__constants['SUCCESS']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_PlanningResult.__constants['FAILED']

    @property
    def FREEZE(self):
        """Message constant 'FREEZE'."""
        return Metaclass_PlanningResult.__constants['FREEZE']

    @property
    def QUIT(self):
        """Message constant 'QUIT'."""
        return Metaclass_PlanningResult.__constants['QUIT']

    @property
    def MANUAL(self):
        """Message constant 'MANUAL'."""
        return Metaclass_PlanningResult.__constants['MANUAL']

    @property
    def ACC(self):
        """Message constant 'ACC'."""
        return Metaclass_PlanningResult.__constants['ACC']

    @property
    def ICC(self):
        """Message constant 'ICC'."""
        return Metaclass_PlanningResult.__constants['ICC']

    @property
    def NOA(self):
        """Message constant 'NOA'."""
        return Metaclass_PlanningResult.__constants['NOA']

    @property
    def D2D(self):
        """Message constant 'D2D'."""
        return Metaclass_PlanningResult.__constants['D2D']

    @property
    def OFF(self):
        """Message constant 'OFF'."""
        return Metaclass_PlanningResult.__constants['OFF']


class PlanningResult(metaclass=Metaclass_PlanningResult):
    """
    Message class 'PlanningResult'.

    Constants:
      SUCCESS
      FAILED
      FREEZE
      QUIT
      MANUAL
      ACC
      ICC
      NOA
      D2D
      OFF
    """

    __slots__ = [
        '_header',
        '_sensor_time',
        '_trajectories',
        '_pilot_planning_state',
        '_planning_work_state',
        '_function_state_available',
        '_fail_reason',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'sensor_time': 'deva_planning_msgs2/SensorTime',
        'trajectories': 'sequence<deva_planning_msgs2/PlanningTrajectory>',
        'pilot_planning_state': 'int8',
        'planning_work_state': 'uint8',
        'function_state_available': 'uint8',
        'fail_reason': 'sequence<deva_planning_msgs2/PlanningFail>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'SensorTime'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'PlanningTrajectory')),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['deva_planning_msgs2', 'msg'], 'PlanningFail')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from deva_planning_msgs2.msg import SensorTime
        self.sensor_time = kwargs.get('sensor_time', SensorTime())
        self.trajectories = kwargs.get('trajectories', [])
        self.pilot_planning_state = kwargs.get('pilot_planning_state', int())
        self.planning_work_state = kwargs.get('planning_work_state', int())
        self.function_state_available = kwargs.get('function_state_available', int())
        self.fail_reason = kwargs.get('fail_reason', [])

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
        if self.sensor_time != other.sensor_time:
            return False
        if self.trajectories != other.trajectories:
            return False
        if self.pilot_planning_state != other.pilot_planning_state:
            return False
        if self.planning_work_state != other.planning_work_state:
            return False
        if self.function_state_available != other.function_state_available:
            return False
        if self.fail_reason != other.fail_reason:
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
    def sensor_time(self):
        """Message field 'sensor_time'."""
        return self._sensor_time

    @sensor_time.setter
    def sensor_time(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import SensorTime
            assert \
                isinstance(value, SensorTime), \
                "The 'sensor_time' field must be a sub message of type 'SensorTime'"
        self._sensor_time = value

    @builtins.property
    def trajectories(self):
        """Message field 'trajectories'."""
        return self._trajectories

    @trajectories.setter
    def trajectories(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import PlanningTrajectory
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
                 all(isinstance(v, PlanningTrajectory) for v in value) and
                 True), \
                "The 'trajectories' field must be a set or sequence and each value of type 'PlanningTrajectory'"
        self._trajectories = value

    @builtins.property
    def pilot_planning_state(self):
        """Message field 'pilot_planning_state'."""
        return self._pilot_planning_state

    @pilot_planning_state.setter
    def pilot_planning_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pilot_planning_state' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'pilot_planning_state' field must be an integer in [-128, 127]"
        self._pilot_planning_state = value

    @builtins.property
    def planning_work_state(self):
        """Message field 'planning_work_state'."""
        return self._planning_work_state

    @planning_work_state.setter
    def planning_work_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'planning_work_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'planning_work_state' field must be an unsigned integer in [0, 255]"
        self._planning_work_state = value

    @builtins.property
    def function_state_available(self):
        """Message field 'function_state_available'."""
        return self._function_state_available

    @function_state_available.setter
    def function_state_available(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'function_state_available' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'function_state_available' field must be an unsigned integer in [0, 255]"
        self._function_state_available = value

    @builtins.property
    def fail_reason(self):
        """Message field 'fail_reason'."""
        return self._fail_reason

    @fail_reason.setter
    def fail_reason(self, value):
        if __debug__:
            from deva_planning_msgs2.msg import PlanningFail
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
                 all(isinstance(v, PlanningFail) for v in value) and
                 True), \
                "The 'fail_reason' field must be a set or sequence and each value of type 'PlanningFail'"
        self._fail_reason = value
