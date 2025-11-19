# generated from rosidl_generator_py/resource/_idl.py.em
# with input from deva_perception_msgs:msg/TrafficDetectData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'reserved'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrafficDetectData(type):
    """Metaclass of message 'TrafficDetectData'."""

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
            module = import_type_support('deva_perception_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'deva_perception_msgs.msg.TrafficDetectData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__traffic_detect_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__traffic_detect_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__traffic_detect_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__traffic_detect_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__traffic_detect_data

            from deva_common_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

            from deva_perception_msgs.msg import E2eResult
            if E2eResult.__class__._TYPE_SUPPORT is None:
                E2eResult.__class__.__import_type_support__()

            from deva_perception_msgs.msg import TrafficObject
            if TrafficObject.__class__._TYPE_SUPPORT is None:
                TrafficObject.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrafficDetectData(metaclass=Metaclass_TrafficDetectData):
    """Message class 'TrafficDetectData'."""

    __slots__ = [
        '_header',
        '_framenum',
        '_timestamp',
        '_abs_vel_x',
        '_abs_acc_x',
        '_vel_motion',
        '_acc_motion',
        '_f120_object_num',
        '_f30_object_num',
        '_f120trafficobjects',
        '_f30trafficobjects',
        '_e2eobjects',
        '_time_of_day',
        '_reserved',
    ]

    _fields_and_field_types = {
        'header': 'deva_common_msgs/Header',
        'framenum': 'uint64',
        'timestamp': 'uint64',
        'abs_vel_x': 'float',
        'abs_acc_x': 'float',
        'vel_motion': 'uint8',
        'acc_motion': 'uint8',
        'f120_object_num': 'uint8',
        'f30_object_num': 'uint8',
        'f120trafficobjects': 'deva_perception_msgs/TrafficObject[64]',
        'f30trafficobjects': 'deva_perception_msgs/TrafficObject[64]',
        'e2eobjects': 'deva_perception_msgs/E2eResult',
        'time_of_day': 'uint8',
        'reserved': 'uint8[2]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['deva_common_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficObject'), 64),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'TrafficObject'), 64),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['deva_perception_msgs', 'msg'], 'E2eResult'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 2),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from deva_common_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.framenum = kwargs.get('framenum', int())
        self.timestamp = kwargs.get('timestamp', int())
        self.abs_vel_x = kwargs.get('abs_vel_x', float())
        self.abs_acc_x = kwargs.get('abs_acc_x', float())
        self.vel_motion = kwargs.get('vel_motion', int())
        self.acc_motion = kwargs.get('acc_motion', int())
        self.f120_object_num = kwargs.get('f120_object_num', int())
        self.f30_object_num = kwargs.get('f30_object_num', int())
        from deva_perception_msgs.msg import TrafficObject
        self.f120trafficobjects = kwargs.get(
            'f120trafficobjects',
            [TrafficObject() for x in range(64)]
        )
        from deva_perception_msgs.msg import TrafficObject
        self.f30trafficobjects = kwargs.get(
            'f30trafficobjects',
            [TrafficObject() for x in range(64)]
        )
        from deva_perception_msgs.msg import E2eResult
        self.e2eobjects = kwargs.get('e2eobjects', E2eResult())
        self.time_of_day = kwargs.get('time_of_day', int())
        if 'reserved' not in kwargs:
            self.reserved = numpy.zeros(2, dtype=numpy.uint8)
        else:
            self.reserved = kwargs.get('reserved')

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
        if self.framenum != other.framenum:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.abs_vel_x != other.abs_vel_x:
            return False
        if self.abs_acc_x != other.abs_acc_x:
            return False
        if self.vel_motion != other.vel_motion:
            return False
        if self.acc_motion != other.acc_motion:
            return False
        if self.f120_object_num != other.f120_object_num:
            return False
        if self.f30_object_num != other.f30_object_num:
            return False
        if self.f120trafficobjects != other.f120trafficobjects:
            return False
        if self.f30trafficobjects != other.f30trafficobjects:
            return False
        if self.e2eobjects != other.e2eobjects:
            return False
        if self.time_of_day != other.time_of_day:
            return False
        if any(self.reserved != other.reserved):
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
    def framenum(self):
        """Message field 'framenum'."""
        return self._framenum

    @framenum.setter
    def framenum(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framenum' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'framenum' field must be an unsigned integer in [0, 18446744073709551615]"
        self._framenum = value

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def abs_vel_x(self):
        """Message field 'abs_vel_x'."""
        return self._abs_vel_x

    @abs_vel_x.setter
    def abs_vel_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'abs_vel_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'abs_vel_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._abs_vel_x = value

    @builtins.property
    def abs_acc_x(self):
        """Message field 'abs_acc_x'."""
        return self._abs_acc_x

    @abs_acc_x.setter
    def abs_acc_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'abs_acc_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'abs_acc_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._abs_acc_x = value

    @builtins.property
    def vel_motion(self):
        """Message field 'vel_motion'."""
        return self._vel_motion

    @vel_motion.setter
    def vel_motion(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vel_motion' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vel_motion' field must be an unsigned integer in [0, 255]"
        self._vel_motion = value

    @builtins.property
    def acc_motion(self):
        """Message field 'acc_motion'."""
        return self._acc_motion

    @acc_motion.setter
    def acc_motion(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'acc_motion' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'acc_motion' field must be an unsigned integer in [0, 255]"
        self._acc_motion = value

    @builtins.property
    def f120_object_num(self):
        """Message field 'f120_object_num'."""
        return self._f120_object_num

    @f120_object_num.setter
    def f120_object_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f120_object_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f120_object_num' field must be an unsigned integer in [0, 255]"
        self._f120_object_num = value

    @builtins.property
    def f30_object_num(self):
        """Message field 'f30_object_num'."""
        return self._f30_object_num

    @f30_object_num.setter
    def f30_object_num(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'f30_object_num' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'f30_object_num' field must be an unsigned integer in [0, 255]"
        self._f30_object_num = value

    @builtins.property
    def f120trafficobjects(self):
        """Message field 'f120trafficobjects'."""
        return self._f120trafficobjects

    @f120trafficobjects.setter
    def f120trafficobjects(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficObject
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
                 len(value) == 64 and
                 all(isinstance(v, TrafficObject) for v in value) and
                 True), \
                "The 'f120trafficobjects' field must be a set or sequence with length 64 and each value of type 'TrafficObject'"
        self._f120trafficobjects = value

    @builtins.property
    def f30trafficobjects(self):
        """Message field 'f30trafficobjects'."""
        return self._f30trafficobjects

    @f30trafficobjects.setter
    def f30trafficobjects(self, value):
        if __debug__:
            from deva_perception_msgs.msg import TrafficObject
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
                 len(value) == 64 and
                 all(isinstance(v, TrafficObject) for v in value) and
                 True), \
                "The 'f30trafficobjects' field must be a set or sequence with length 64 and each value of type 'TrafficObject'"
        self._f30trafficobjects = value

    @builtins.property
    def e2eobjects(self):
        """Message field 'e2eobjects'."""
        return self._e2eobjects

    @e2eobjects.setter
    def e2eobjects(self, value):
        if __debug__:
            from deva_perception_msgs.msg import E2eResult
            assert \
                isinstance(value, E2eResult), \
                "The 'e2eobjects' field must be a sub message of type 'E2eResult'"
        self._e2eobjects = value

    @builtins.property
    def time_of_day(self):
        """Message field 'time_of_day'."""
        return self._time_of_day

    @time_of_day.setter
    def time_of_day(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_of_day' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'time_of_day' field must be an unsigned integer in [0, 255]"
        self._time_of_day = value

    @builtins.property
    def reserved(self):
        """Message field 'reserved'."""
        return self._reserved

    @reserved.setter
    def reserved(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'reserved' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 2, \
                "The 'reserved' numpy.ndarray() must have a size of 2"
            self._reserved = value
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
                 len(value) == 2 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'reserved' field must be a set or sequence with length 2 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._reserved = numpy.array(value, dtype=numpy.uint8)
